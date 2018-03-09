#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{ // los puntos
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(60);
    // linea amarilla
    glBegin(GL_LINE_STRIP);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(0.0f,0.0f,0.0f);
    glVertex3f(0.5f,1.0f,0.0f);
    glVertex3f(1.0f,0.0f,0.0f);
    glVertex3f(0.0f,0.0f,0.0f);
    glEnd();
    glFlush ();

}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    // primer cuadrante
    //glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
    // tercer  cuadrante
    //glOrtho(0.0, -1.0, 0.0, -1.0, -1.0, 1.0);
    // Matriz completa
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv)
{    
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (250, 250);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Ejemplo Puntos");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
