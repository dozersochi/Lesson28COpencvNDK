/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>

#include <opencv2/opencv.hpp>
#include <stdio.h>

using namespace cv;
using namespace std;

/* Header for class com_example_ayudatsenko_lesson28copencvndk_OpencvNdkNative */

#ifndef _Included_com_example_ayudatsenko_lesson28copencvndk_OpencvNdkNative
#define _Included_com_example_ayudatsenko_lesson28copencvndk_OpencvNdkNative
#ifdef __cplusplus
extern "C" {

int toGray(Mat img, Mat gray);

#endif
/*
 * Class:     com_example_ayudatsenko_lesson28copencvndk_OpencvNdkNative
 * Method:    convertGray
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_example_ayudatsenko_lesson28copencvndk_OpencvNdkNative_convertGray
  (JNIEnv *, jclass, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif