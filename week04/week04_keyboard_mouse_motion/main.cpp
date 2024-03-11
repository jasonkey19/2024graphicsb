#include<GL/glut.h>
#include <stdio.h>
int N=0;
float teaportX[1000],teaportY[1000];
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    for(int i=0;i<N;i++){
        glPushMatrix();
         glTranslatef(teaportX[i],teaportY[i],0);
         glutSolidTeapot(0.3);
     glPopMatrix();
    }
    glutSwapBuffers();
}
void keyboard(unsigned char key,int x,int y){
printf("key:%c x:%d y:%d\n",key,x,y);
}///小心中文輸入法,要切換成英文
void mouse(int button,int state,int x,int y){
 teaportX[N]=(x-150)/150.0;
 teaportY[N]=-(y-150)/150.0;
 N++;
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);///140
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143

     glutCreateWindow("week04 keyboard mouse motion");///145
    glutDisplayFunc(display);
     glutKeyboardFunc(keyboard);///148
    glutMouseFunc(mouse);
     glutMainLoop();///174
}
