#include <GL/glut.h>
#include <Stdio.h>
float teapotX=0,teapotY=0;
float angle=0;
void display()
{
glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
glPushMatrix();///�Q���x�}
///glTranslatef(teapotX,teapotY,0);�a�y�в���
  glRotated(angle,0,0,1);///������z�b
  glutSolidTeapot(0.3);
glPopMatrix();///�٭�x�}
glutSwapBuffers();
}///

void mouse(int button,int state,int x,int y)
{
  teapotX=(x-150)/150.0;
  teapotY=-(y-150)/150.0;
}
void motion(int x,int y)
{
    angle=x;
    display();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);///140
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143
    glutCreateWindow("week03 mouse glTranslatef");///145

     glutDisplayFunc(display);///148
     glutMouseFunc(mouse);///148
     glutMotionFunc(motion);
     glutMainLoop();///174
}
