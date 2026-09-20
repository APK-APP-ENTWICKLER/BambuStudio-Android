#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_apkappentwickler_bambustudio_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Bambu Studio Core für Android geladen";
    return env->NewStringUTF(hello.c_str());
}

