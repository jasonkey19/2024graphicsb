///File-New-EMptyFile空白檔案week05-1opencv.cpp
#include <opencv/highgui.h>
int main()
{
 ///大寫I,小寫pl(intel performance library)
      IplImage*img=cvLoadImage("c:/pig.jpg");
  ///大寫的Image 圖檔請放在c:跟目錄裡.micky.jpg
      cvShowImage("img",img);///秀圖(兩個參數不確定)
       cvWaitKey(0);///等任意鍵,再繼續

}
