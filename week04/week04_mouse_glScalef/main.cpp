#include <GL/glut.h>
float s=1;///�@�}�l�O�쥻���@���o�j�p
void display()
{   ///�]�w�M�I�����C��
    glClearColor(1,1,0.9,1);
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glColor3f(0,1,0);///3f�OR.G.B
    glPushMatrix();///�ƥ��x�}
      glScalef(s,s,s);///�Y��s��
      glutSolidTeapot(0.3);
      glPopMatrix();
      glutSwapBuffers();
}


void motion(int x,int y)
{
    s=1+(x-150)/150.0;///�|�ܤj�ܤp���ܼ�0~1~2
    display();///���e�e����
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);///140
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143
     glutCreateWindow("week04_mouse_glScalef");///145
     glutDisplayFunc(display);///148
     glutMotionFunc(motion);
     glutMainLoop();///174
}
