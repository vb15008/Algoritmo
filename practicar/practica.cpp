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
    glColor3f(1.0,0.0,0.0);
    glVertex2f(2.0,1.0);
    glVertex2f(5.0,1.0);
    glVertex2f(6.0,3.0);
    glVertex2f(5.0,7.0);
    glVertex2f(2.0,7.0);
    glVertex2f(1.0,3.0);
    glEnd();
    //nariz
    glBegin(GL_POINTS);
    glColor3f(0.0,0.0,1.0);
    glVertex2f(3.5,2.5);
    glEnd();
    //parte de la boca
    glColor3f(0.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2f(2.0,1.0);
    glVertex2f(5.0,1.0);
    glVertex2f(3.5,2.0);
    glEnd();
    glColor3f(0.0,0.0,1.0);
    //orejas
    glBegin(GL_POLYGON);
    glVertex2f(2.0,7.0);
    glVertex2f(0.5,4.9);
    glVertex2f(0.7,2.0);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(5.0,7.0);
    glVertex2f(6.5,4.9);
    glVertex2f(6.2,2.0);
    glEnd();
    //lengua
     glColor3f(1.0,0.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2f(3.2,1.3);
    glVertex2f(3.8,1.3);
    glVertex2f(3.8,0.4);
    glVertex2f(3.2,0.4);
    
    glEnd();
    //ojos
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2f(2.6,4);
    glVertex2f(3,4);
    glVertex2f(3,4.4);
    glVertex2f(2.6,4.4);
    
    glEnd();
    glColor3f(0.0,0.0,0.0);
     glBegin(GL_POLYGON);
    glVertex2f(2.8,4);
    glVertex2f(3,4);
    glVertex2f(3,4.2);
    glVertex2f(2.8,4.2);
    
    glEnd();
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2f(4,4);
    glVertex2f(4.4,4);
    glVertex2f(4.4,4.4);
    glVertex2f(4,4.4);
    
    glEnd();
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(4,4);
    glVertex2f(4.2,4);
    glVertex2f(4.2,4.2);
    glVertex2f(4,4.2);
    
    glEnd();
    // tortuga
    //caparazon
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);

    glVertex2f(16,2);
    glVertex2f(16,4);
    glVertex2f(14,6);
    glVertex2f(12,6);
    glVertex2f(10,4);
    glVertex2f(10,2);
    
    
    glEnd();
    //patas
    glBegin(GL_POLYGON);
    glVertex2f(10,0);
    glVertex2f(10,2);
    glVertex2f(12,2);
    
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(14,2);
    glVertex2f(16,0);
    glVertex2f(16,2);
    glEnd();
    //cuello
    glBegin(GL_POLYGON);
    glVertex2f(16,2);
    glVertex2f(16,4);
    glVertex2f(17,4);
    
    glEnd();
    //cabeza
    glBegin(GL_POLYGON);
    glVertex2f(16,4);
    glVertex2f(19,4);
    
    glVertex2f(17.5,6);
    
    glEnd();
    //cola
    glBegin(GL_POLYGON);
    glVertex2f(10,2);
    glVertex2f(10,4);
    
    glVertex2f(9,4);
    
    glEnd();
    
    //GATO
     //patas
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(23,0);
    glVertex2f(26,0);
    glVertex2f(24.5,2);
    
    glEnd();
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(26,0);
    glVertex2f(29,0);
    glVertex2f(27.5,2);
    //cuerpo
    glEnd();
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(26,0);
    glVertex2f(27.5,2);
    glVertex2f(26,4);
    glVertex2f(24.5,2);
    
    glEnd();
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(29,0);
    glVertex2f(30.5,2);
    glVertex2f(29,4);
    glVertex2f(27.5,2);
    
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(27.5,2);
    glVertex2f(29,4);
    glVertex2f(26,4);
    
    glEnd();
    //cabeza
    glBegin(GL_POLYGON);
    glVertex2f(24.5,2);
    glVertex2f(26,4);
    glVertex2f(24.5,6);
    glVertex2f(23,4);
    
    
    
    glEnd();
    glEnd();
    //cola
    glBegin(GL_POLYGON);
    glVertex2f(30.5,2);
    glVertex2f(30.5,6);
    glVertex2f(29,4);
    
    glEnd();
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(30.5,6);
    glVertex2f(29,8);
    glVertex2f(29,4);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex2f(24.5,6);
    glVertex2f(26,8);
    glVertex2f(26,4);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(24.5,6);
    glVertex2f(23,8);
    glVertex2f(23,4);
    glEnd();
    //PATO
    //patas
    glBegin(GL_POLYGON);
    glVertex2f(3,10);
    glVertex2f(5,10);
    glVertex2f(5,12);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(7,12);
    glVertex2f(9,12);
    glVertex2f(9,10);
    glEnd();
    //cuerpo
    glColor3f(1.0,1.0,0.0);
     glBegin(GL_POLYGON);
    glVertex2f(3,14);
    glVertex2f(9,14);
    glVertex2f(7,12);
    glVertex2f(5,12);
    glEnd();
    //cuello
    glBegin(GL_POLYGON);
    glVertex2f(3,14);
    glVertex2f(5,14);
    glVertex2f(5,16);
    glVertex2f(3,16);
    glEnd();
    //cabeza
    glBegin(GL_POLYGON);
    glVertex2f(5,16);
    glVertex2f(3,18);
    glVertex2f(1,16);
    glEnd();
    
    //PERRO COMPLETO
    //patas
    glBegin(GL_POLYGON);
    glVertex2f(14,10);
    glVertex2f(15,10);
    glVertex2f(15,11);
    glVertex2f(14,11);
    
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(16,10);
    glVertex2f(17,10);
    glVertex2f(17,11);
    glVertex2f(16,11);
    
    glEnd();
    //cuerpo
    glBegin(GL_POLYGON);
    glVertex2f(14,11);
    glVertex2f(17,11);
    glVertex2f(15.5,16);
    glEnd();
    //cabeza
    glBegin(GL_POLYGON);
    glVertex2f(13.5,16);
    glVertex2f(17.5,16);
    glVertex2f(17.5,18);
    glVertex2f(13.5,18);
    
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(14.2,18);
    glVertex2f(16.8,18);
    glVertex2f(16.8,20);
    glVertex2f(14.2,20);
    
    glEnd();
    
    glBegin(GL_TRIANGLES);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(-4,4);
    glVertex2f(-2,6);
    glVertex2f(-8,6);
    glVertex2f(-8,4);
    glEnd();
    
    glFlush ();

}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-10.0, 0.0, 0.0, 10.0, -1.0, 1.0);
    
    
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
