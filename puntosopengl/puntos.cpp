#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{ // los puntos
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(50);
    // punto primer cuadrante blanco
    glBegin(GL_POINTS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex3f(0.5f,0.5f,0.0f);
    // punto segundo cuandrante azul
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(-0.5f,0.5f,0.0f);
    // pnto tercer cuadrante seleste
    glColor3f(0.0f, 1.0f, 1.0f);
    glVertex3f(-0.5f,-0.5f,0.0f);
    // pnto cuarto cuadrante rojo
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(0.5f,-0.5f,0.0f);
    
    glEnd();
    glFlush ();

}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    // primer cuadrante
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
    
    // segundo cuadrante
    //glOrtho(-1.0, 0.0, 0.0, 1.0, -1.0, 1.0);
    
    // tercer  cuadrante
    //glOrtho(0.0, -1.0, 0.0, -1.0, -1.0, 1.0);
    
    // cuarto  cuadrante
    //glOrtho(0.0, 1.0, 0.0, -1.0, -3.0, 1.0);
    
    // Matriz completa
    //glOrtho (GLDoble a la izquierda, GLDoble a la derecha,GL doble fondo, GL doble arriba,GLDoble cerca, GLdouble lejos);
    //glOrtho(-1.0, 1.0, -1.0, 1.0, -3.0, 3.0);
}

int main(int argc, char** argv)
{    
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (250, 250);
    glutInitWindowPosition (560, 240);
    glutCreateWindow ("Ejemplo Puntos");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
