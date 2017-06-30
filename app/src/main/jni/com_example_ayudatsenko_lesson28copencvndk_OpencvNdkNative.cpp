
#include <com_example_ayudatsenko_lesson28copencvndk_OpencvNdkNative.h>

JNIEXPORT jint JNICALL Java_com_example_ayudatsenko_lesson28copencvndk_OpencvNdkNative_convertGray
  (JNIEnv *, jclass, jlong addrRgba, jlong addrGray){

    Mat& mRgb = *(Mat*)addrRgba;
    Mat& mGray = *(Mat*)addrGray;

    int conv;
    jint returnValue;

    conv = toGray(mRgb, mGray);

    returnValue = (jint) conv;

    return returnValue;
  };

  int toGray(Mat img, Mat gray){
    cvtColor(img, gray, CV_RGBA2GRAY);
    if(img.rows==gray.rows && img.cols==gray.cols)
    return 1;
        return 0;
  }
