#include <GL/glut.h>

void display()
{
    glutSolidTeapot(0.3);
    glutSwapBuffers();
}



int main(int argc, char *argv[])
{
    glutInit(&argc, argv);///140
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143

     glutCreateWindow("�ڦ۰O�g����");///145

     glutDisplayFunc(display);///148

     glutMainLoop();///174
}
