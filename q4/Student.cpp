#include <jni.h>
#include <iostream>
#include "Student.h"
using namespace std;

JNIEXPORT void JNICALL Java_Student_displayNative(JNIEnv *env, jobject obj) {

    jclass cls = env->GetObjectClass(obj);

    cout<<endl<<"* Printing Student Details *"<<endl;

    jmethodID methodIdStatic = env->GetStaticMethodID(cls, "displayStatic","()V");
    if(methodIdStatic==0) return ;
    else env->CallStaticVoidMethod(cls, methodIdStatic);

    jmethodID methodId = env->GetMethodID(cls, "display","()V");
    if(methodId==0) return;
    else env->CallVoidMethod(obj,methodId);
}
