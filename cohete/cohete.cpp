#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{ // los puntos
	// perro
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(5);
    // fondo perro
    glColor3f(1.0,0.0,0.0);
    
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(3.0,0.0);
    glVertex2f(2.0,3.0);
    glVertex2f(9.0,9.0);
    glVertex2f(10.0,6.0);
    
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(9.0,9.0);
    glVertex2f(10.0,6.0);
    glVertex2f(11.0,8.5);
    
    
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,1.0);
    glVertex2f(3.0,0.0);
    glVertex2f(2.0,3.0);
    
    glVertex2f(1.0,2.0);
    glVertex2f(2,-1.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,1.0);
    glVertex2f(2.0,3.0);
    glVertex2f(1.0,2.0);
    glVertex2f(0.0,1.0);
    glVertex2f(1.0,2.0);
    
    //glVertex2f(-2.0,1.0);
    
    glEnd();
    glFlush ();

}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-5.0, 20.0, -5.0, 20.0, -1.0, 1.0);
    
    
}

int main(int argc, char** argv)
{    
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (550, 350);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Ejemplo Puntos");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
