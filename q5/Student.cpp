#include <jni.h>
#include <iostream>
#include "Student.h"
using namespace std;

JNIEXPORT void JNICALL Java_Student_changeDetails 
(JNIEnv *env, jobject obj, jstring Name, jstring Univ, jstring Branch, jstring City, jint pincode) {

    jclass cls = env->GetObjectClass(obj);

    jfieldID name_id = env->GetFieldID(cls, "Name", "Ljava/lang/String;");
    jfieldID univ_id = env->GetFieldID(cls, "University", "Ljava/lang/String;");
    jfieldID branch_id = env->GetFieldID(cls, "Branch", "Ljava/lang/String;");
    jfieldID city_id = env->GetFieldID(cls, "City", "Ljava/lang/String;");
    jfieldID pincode_id = env->GetFieldID(cls, "PinCode", "I");


    env->SetObjectField(obj,name_id,Name);
    env->SetObjectField(obj,univ_id,Univ);
    env->SetObjectField(obj,branch_id,Branch);
    env->SetObjectField(obj,city_id,City);
    env->SetIntField(obj,pincode_id,pincode);
}
