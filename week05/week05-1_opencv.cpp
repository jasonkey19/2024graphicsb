///File-New-EMptyFile�ť��ɮ�week05-1opencv.cpp
#include <opencv/highgui.h>
int main()
{
 ///�j�gI,�p�gpl(intel performance library)
      IplImage*img=cvLoadImage("c:/pig.jpg");
  ///�j�g��Image ���ɽЩ�bc:��ؿ���.micky.jpg
      cvShowImage("img",img);///�q��(��ӰѼƤ��T�w)
       cvWaitKey(0);///�����N��,�A�~��

}
