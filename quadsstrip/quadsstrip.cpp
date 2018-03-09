#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(2);
    
    
    glBegin(GL_QUAD_STRIP);
    /*
        //envudo normal
        //primer rojo
		glColor3f(1.0f, 0.0f, 0.0f);
		glVertex3f(0.0f,-0.5f,0.0f);
		glVertex3f(0.5f,-0.5f,0.0f);
		glVertex3f(-0.5f,0.0f,0.0f);
		glVertex3f(0.5f,0.0,0.0f);
				//primer 
		glColor3f(1.0f, 1.0f, 0.0f);
		glVertex3f(-0.7f,0.5f,0.0f);
		glVertex3f(0.7f,0.5f,0.0f);
		//tecer
		glColor3f(0.0f, 1.0f, 0.0f);
		glVertex3f(-0.8f,0.8f,0.0f);
		glVertex3f(0.9f,0.8f,0.0f);
		*/
		//dado vuelta
		//primero
		glColor3f(1.0f, 0.0f, 0.0f);
		glVertex3f(0.5f,0.0f,0.0f);
		glVertex3f(0.5f,0.5f,0.0f);
		glVertex3f(0.0f,-0.5f,0.0f);
		glVertex3f(0.0f,0.5,0.0f);
		
		//segundo
		glColor3f(1.0f, 1.0f, 0.0f);
		glVertex3f(-0.5f,-0.7f,0.0f);
		glVertex3f(-0.5f,0.5f,0.0f);
		
		//tecer
		glColor3f(0.0f, 1.0f, 0.0f);
		glVertex3f(-0.8f,-0.8f,0.0f);
		glVertex3f(-0.8f,0.9f,0.0f);
		

   
	glEnd();
	glFlush ();
    


}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (250, 250);
    glutInitWindowPosition (560, 240);
    glutCreateWindow ("Ejemplo Puntos con Poligonos");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
