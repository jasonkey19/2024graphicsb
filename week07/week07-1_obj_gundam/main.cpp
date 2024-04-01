#include <GL/glut.h>
#include"glm.h"
GLMmodel* pmodel=NULL;
void drawmodel(void)
{
    if(!pmodel){
        pmodel=glmReadOBJ("gundam.obj");
        if(!pmodel)exit(0);
        glmUnitize(pmodel);
        glmFacetNormals(pmodel);
        glmVertexNormals(pmodel,90.0);

    }
    glmDraw(pmodel,GLM_SMOOTH|GLM_MATERIAL);
}
void display()
{   glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    drawmodel();
    //glutSolidTeapot(0.3);
    glutSwapBuffers();
}



int main(int argc, char *argv[])
{
    glutInit(&argc, argv);///140
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143

     glutCreateWindow("week07-1_obj_gundam");///145

     glutDisplayFunc(display);///148

     glutMainLoop();///174
}
