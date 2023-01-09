package com.practice.jni

class JNIProvider {
    init {
        System.loadLibrary("native-lib")
    }
}