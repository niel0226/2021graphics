#include <GL/glut.h>
#include <math.h>///使用數學外掛
static void display(void)
{

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glBegin(GL_POLYGON);
    glColor3f(1,0,0);
    for(int i=0; i<30; i++){
        float a = 3.1415926 * 2 / 30 *i;
        glVertex2f(0.5 + 0.1*cos(a),0.2*sin(a));
    }
    glEnd();
    glutSwapBuffers();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("08160226");
    glutDisplayFunc(display);
    glutMainLoop();
}
