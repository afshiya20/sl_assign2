#include <jni.h>
#include <iostream>
#include "SortArray.h"
using namespace std;

void merge(jint* array, jint left, jint mid, jint right);
void mergeSort(jint* array, jint left, jint right);


JNIEXPORT jintArray JNICALL Java_SortArray_sortArrayNative(JNIEnv *env, jobject obj, jintArray arr){

        jint* array = env->GetIntArrayElements(arr,0);
        jsize len = env->GetArrayLength(arr);
        
        mergeSort(array,0,len-1);
        env->ReleaseIntArrayElements(arr,array, 0);
        
        return arr;
}

void merge(jint* array, jint left, jint mid, jint right) {
   jint i, j, k, nleft, nright;
   
   nleft = mid-left+1; nright = right-mid;
   jint larr[nleft], rarr[nright];
   
   for(i = 0; i<nleft; i++)
      larr[i] = array[left+i];
   for(j = 0; j<nright; j++)
      rarr[j] = array[mid+1+j];
   i = 0; j = 0; k = left;
   
   while(i < nleft && j<nright) {
      if(larr[i] <= rarr[j]) {
         array[k] = larr[i];
         i++;
      }else{
         array[k] = rarr[j];
         j++;
      }
      k++;
   }
   while(i<nleft) {       
      array[k] = larr[i];
      i++; k++;
   }
   while(j<nright) {
      array[k] = rarr[j];
      j++; k++;
   }
}

void mergeSort(jint* array, jint left, jint right)
{
    if(left < right) {
      jint mid = left+(right-left)/2;
      
      mergeSort(array, left, mid);
      mergeSort(array, mid+1, right);
      merge(array, left, mid, right);
   }
}
