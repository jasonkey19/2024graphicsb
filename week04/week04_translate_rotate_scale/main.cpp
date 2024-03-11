#include <GL/glut.h>
float teaportX=0.5,teaportY=0;///放右邊
float angle=0;///選轉角度
float s=0.;///一開始是原本的一倍得大小
void display()
{   ///設定清背景的顏色
    glClearColor(1,1,0.9,1);
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glColor3f(0,1,0);///3f是R.G.B
    glPushMatrix();///備份矩陣
       glTranslated(teaportX,teaportY,0);
       glRotatef(angle++,0,0,1);
       glScalef(s,s,s);///縮放s倍
       glutSolidTeapot(0.3);
      glPopMatrix();
      glutSwapBuffers();
}


void motion(int x,int y)
{
    s=1+(x-150)/150.0;///會變大變小的變數0~1~2
    display();///重畫畫面喔
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);///140
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143
     glutCreateWindow("week04_mouse_glScalef");///145
     glutIdleFunc(display);///沒事做就display
     glutDisplayFunc(display);///148
     glutMotionFunc(motion);
     glutMainLoop();///174
}
