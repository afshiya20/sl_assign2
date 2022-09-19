#include <jni.h>
#include <iostream>
#include "CheckPalindrome.h"
#include <string.h>
using namespace std;

JNIEXPORT jboolean JNICALL Java_CheckPalindrome_checkPalindromeNative
  (JNIEnv *env, jobject obj, jstring str){
        const char * inString = env->GetStringUTFChars(str, NULL);
        int len = env->GetStringUTFLength(str);
        for(int i=0;i<len/2;i++){
            if(inString[i]!=inString[len-1-i])
            {
                env->ReleaseStringUTFChars(str, inString);
                return false;
            }
        }
        env->ReleaseStringUTFChars(str, inString);
        return true;
  }
