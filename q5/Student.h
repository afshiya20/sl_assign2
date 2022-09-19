#include <jni.h>
/* Header for class Student */

#ifndef _Included_Student
#define _Included_Student
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     Student
 * Method:    changeDetails
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_Student_changeDetails
  (JNIEnv *, jobject, jstring, jstring, jstring, jstring, jint);

#ifdef __cplusplus
}
#endif
#endif
