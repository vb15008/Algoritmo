#include <GL/gl.h>
#include <GL/glut.h>
void Display(void){
	glClearColor(0.0,0.0,1.0,1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(20);
	glColor3f(0.0,1.0,0.0);
	//parte superrior de la mesa
	glBegin(GL_POLYGON);
	glVertex3f(1.0,5.0,0.0);
	glVertex3f(8.0,5.0,0.0);
	glVertex3f(8.0,4.5,0.0);
	glVertex3f(1.0,4.5,0.0);
	glEnd();
	//pata izquierda
	glBegin(GL_POLYGON);
	glVertex3f(1.25,4.5,0.0);
	glVertex3f(1.75,4.5,0.0);
	glVertex3f(0.5,0.0,0.0);
	glVertex3f(0.0,0.0,0.0);
	glEnd();
	
	//pata derecha
	glBegin(GL_POLYGON);
	glVertex3f(7.25,4.5,0.0);
	glVertex3f(7.75,4.5,0.0);
	glVertex3f(9.0,0.0,0.0);
	glVertex3f(8.5,0.0,0.0);
	glEnd();
	//parte inferior de la mesa
	glBegin(GL_POLYGON);
	glVertex3f(1.25,4.5,0.0);
	glVertex3f(7.75,4.5,0.0);
	glVertex3f(7.90,3.5,0.0);
	glVertex3f(1.50,3.5,0.0);
	glEnd();
	//refri
	glBegin(GL_POLYGON);
	glColor3f(0.0,1.0,0.0);
	glVertex3f(9.0,0.0,0.0);
	glVertex3f(14.0,0.0,0.0);
	glVertex3f(14.0,8.0,0.0);
	glVertex3f(9.0,8.0,0.0);
	glEnd();
	//puerta abajo
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex3f(9.25,0.0,0.0);
	glVertex3f(13.75,0.0,0.0);
	glVertex3f(13.75,5.50,0.0);
	glVertex3f(9.25,5.50,0.0);
	glEnd();
	//aggarradero abajo
	
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex3f(9.25,0.0,0.0);
	glVertex3f(13.75,0.0,0.0);
	glVertex3f(13.75,5.50,0.0);
	glVertex3f(9.25,5.50,0.0);
	glEnd();
	//puerta arriba
	glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex3f(9.25,5.75,0.0);
	glVertex3f(13.75,5.75,0.0);
	glVertex3f(13.75,7.75,0.0);
	glVertex3f(9.25,7.75,0.0);
	glEnd();
	glFlush();
	//refri
	
	
	
	
	
	
	}

void init(void){
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0,20.0,0.0,9.0,-1.0,-2.0);
}
int main( int argc, char** argv){
	glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (950, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Ejemplo Puntos con Poligonos");
    init ();
    glutDisplayFunc(Display);
    glutMainLoop();
    return 0;
}
