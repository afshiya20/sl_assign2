#include <jni.h>
#include <iostream>
#include "ExceptionHandling.h"
using namespace std;

JNIEXPORT void JNICALL Java_ExceptionHandling_divideby0 (JNIEnv *env, jobject obj) {
    
    jclass cls = env->GetObjectClass(obj);

    jmethodID methodId = env->GetMethodID(cls, "division","()V");
    env->CallVoidMethod(obj,methodId);

    jthrowable exc = env->ExceptionOccurred();
    if (exc) {
        env->ExceptionDescribe();
        env->ExceptionClear();
        jclass newExcCls = env->FindClass("java/lang/ArithmeticException");
        if (newExcCls == 0) {
            return;
        }
        env->ThrowNew(newExcCls, "Division by 0, Arithmetic Exception thrown from C++");
    }
}


JNIEXPORT void JNICALL Java_ExceptionHandling_nullPtr (JNIEnv *env, jobject obj, jstring str) {

    
    jclass cls = env->GetObjectClass(obj);
    jmethodID methodId = env->GetMethodID(cls, "stringLength","(Ljava/lang/String;)I");
    env->CallVoidMethod(obj,methodId,str);

    jthrowable exc = env->ExceptionOccurred();
    if (exc) {
        env->ExceptionDescribe();
        env->ExceptionClear();
        jclass newExcCls = env->FindClass("java/lang/NullPointerException");
        if (newExcCls == 0) {
            return;
        }
        env->ThrowNew(newExcCls, "Null Pointer Exception thrown from C++");
    }


}
