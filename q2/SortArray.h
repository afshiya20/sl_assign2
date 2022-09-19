#include <jni.h>
/* Header for class SortArray */

#ifndef _Included_SortArray
#define _Included_SortArray
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     SortArray
 * Method:    sortArrayNative
 * Signature: ([I)[I
 */
JNIEXPORT jintArray JNICALL Java_SortArray_sortArrayNative
  (JNIEnv *, jobject, jintArray);

#ifdef __cplusplus
}
#endif
#endif
