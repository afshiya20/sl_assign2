#include <jni.h>
/* Header for class CheckPalindrome */

#ifndef _Included_CheckPalindrome
#define _Included_CheckPalindrome
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     CheckPalindrome
 * Method:    checkPalindromeNative
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_CheckPalindrome_checkPalindromeNative
  (JNIEnv *, jobject, jstring);

#ifdef __cplusplus
}
#endif
#endif
