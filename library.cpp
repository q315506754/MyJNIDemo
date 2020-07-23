#include "library.h"

#include <iostream>
#include <windows.h>

#include "headers/jni.h"
#include "headers/jni_md.h"
#include "headers/com_jiangli_jni_myjni_MyJNIDemo.h"

using namespace std;

/**
 *
 * "C:\JetBrains\CLion 2019.1\bin\cmake\win\bin\cmake.exe" -G "Visual Studio 12 2013 Win64"
 *
 * "C:\JetBrains\CLion 2019.1\bin\cmake\win\bin\cmake.exe" --build C:\Users\Jiangli\CLionProjects\MyJNIDemo\cmake-build-debug --target MyJNIDemo -- -j 4
 *
 * C:\Users\Jiangli\CLionProjects\MyJNIDemo\library.cpp
 */

void hello() {
    std::cout << "Hello, World!1" << std::endl;
}

// 获取程序位数（被编译为多少位的代码）
int GetProgramBits()
{
    return sizeof(int*) * 8;
}

JNIEXPORT void JNICALL Java_com_jiangli_jni_myjni_MyJNIDemo_sayHello
        (JNIEnv *, jobject) {
    printf("bits:\t%d\n", GetProgramBits());
    cout << "Hello, World!Java_com_jiangli_jni_myjni_MyJNIDemo_sayHello 3" << endl;

//    system("cmd");
//    MessageBoxA(NULL, "内容内容内容内容", "标题", MB_OK);
    MessageBox(NULL, TEXT("内容内容内容内容aaa+"), TEXT("标题111"), MB_OK);
}

JNIEXPORT jstring JNICALL Java_com_jiangli_jni_myjni_MyJNIDemo_echo
        (JNIEnv *env, jobject, jstring){
    cout << "Java_com_jiangli_jni_myjni_MyJNIDemo_echo 3" << endl;
    return env->NewStringUTF("dsdsd");
}

JNIEXPORT void JNICALL JNI_OnLoad_libMyJNIDemo(){
    cout << "JNI_OnLoad_libMyJNIDemo" << endl;
}
JNIEXPORT void JNICALL JNI_OnLoad_MyJNIDemo(){
    cout << "JNI_OnLoad_MyJNIDemo" << endl;
}

//int main(){
//    hello();
//}