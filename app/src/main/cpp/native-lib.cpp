//
// Created by a.drogunova on 09.01.2023.
//
#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_practice_jnitest_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject) /* MainActivity this */ {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

