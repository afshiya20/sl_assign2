#include <jni.h>
/* Header for class ExceptionHandling */

#ifndef _Included_ExceptionHandling
#define _Included_ExceptionHandling
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     ExceptionHandling
 * Method:    divideby0
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_ExceptionHandling_divideby0
  (JNIEnv *, jobject);

/*
 * Class:     ExceptionHandling
 * Method:    nullPtr
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_ExceptionHandling_nullPtr
  (JNIEnv *, jobject, jstring);

#ifdef __cplusplus
}
#endif
#endif
