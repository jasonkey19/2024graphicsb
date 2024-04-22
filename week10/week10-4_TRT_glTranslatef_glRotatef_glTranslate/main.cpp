#include <GL/glut.h>
void myBody(){
    glColor3f(1,0,0);///red body
    glutWireCube(0.6);///cube
}
void myArm(){
    glColor3f(0,1,0);/// green arm
    glScalef(1.5,0.5,0.5); ///weight 1.5 high 0.5
    glutWireCube(0.3);///cube
}
float angle=0;///week10-2
void display()
{

    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
    ///glTranslatef(-0.6,+0.3,0);
    myBody();///copy
    glPopMatrix();
    glPushMatrix();
    glTranslatef(+0.3,+0.3,0);///(3)掛到肩上
   glRotatef(angle++,0,0,1);///(2)轉動
   glTranslatef(0.225,0,0);///(1)選轉中心,放在正中心
    myArm();///程式碼也移上去了
    glPopMatrix();
    glutSwapBuffers();
}



int main(int argc, char *argv[])
{
    glutInit(&argc, argv);///140
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143

     glutCreateWindow("week09-2_glutSolid系列");///145

     glutDisplayFunc(display);///148
    glutIdleFunc(display);
     glutMainLoop();///174
}
