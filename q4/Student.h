#include <jni.h>
/* Header for class Student */

#ifndef _Included_Student
#define _Included_Student
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     Student
 * Method:    displayNative
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_Student_displayNative
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
