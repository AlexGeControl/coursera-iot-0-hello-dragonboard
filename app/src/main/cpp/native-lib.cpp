#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_me_alexge_1tech_1force_a00_1git_1example_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
