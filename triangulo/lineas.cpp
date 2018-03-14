#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
/* Integrantes 
 * Beatriz Vasquez
 * Fredis Orellana
 * Isidro Vasquez*/
void display(void)
{ // los puntos
	glClearColor(0,1,0,0);
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(1);
    // circunferencia central
    
    double i, cx,cy;
    
    glBegin(GL_POINTS);
    for (i=0;i<=8; i+=0.01)
    {
		cx=2*cos(i) +0;
		cy=2*sin(i) +0;
		glVertex2f(cx,cy); 
		
	}
	 glEnd();
	 
	 
	//media luna izquierda
	 double im, cxm,cym;
    
    glBegin(GL_POINTS);
    for (im=-1.5;im<=1.55; im+=0.01)
    {
		cxm=2*cos(im) -6;
		cym=2*sin(im) +0;
		glVertex2f(cxm,cym); 
		
	}
	 glEnd();
	 
	 //media luna derecha
	 double imp, cxmp,cymp;
    
    glBegin(GL_POINTS);
    for (imp=1.6;imp<=4.7; imp+=0.01)
    {
		cxmp=2*cos(imp) +6;
		cymp=2*sin(imp) +0;
		glVertex2f(cxmp,cymp); 
		
	}
	 glEnd();
	 
	 
	 //1/4de luna superior izquierda
	 double imc, cxmc,cymc;
    
    glBegin(GL_POINTS);
    for (imc=-1.6;imc<=0.0; imc+=0.01)
    {
		cxmc=1*cos(imc) -10;
		cymc=1*sin(imc) +10;
		glVertex2f(cxmc,cymc); 
		
	}
	 glEnd();
	 
	 //1/4de luna inferior izquierda
	 double imci, cxmci,cymci;
    
    glBegin(GL_POINTS);
    for (imci=0.0;imci<=1.5; imci+=0.01)
    {
		cxmci=1*cos(imci) -10;
		cymci=1*sin(imci) -10;
		glVertex2f(cxmci,cymci); 
		
	}
	 glEnd();
	 
	 //1/4de luna superior derecha
	 double imcd, cxmcd,cymcd;
    
    glBegin(GL_POINTS);
    for (imcd=3.2;imcd<=4.7; imcd+=0.01)
    {
		cxmcd=1*cos(imcd) +10;
		cymcd=1*sin(imcd) +10;
		glVertex2f(cxmcd,cymcd); 
		
	}
	 glEnd();
	 //1/4de luna inferior derecha
	 double imcil, cxmcil,cymcil;
    
    glBegin(GL_POINTS);
    for (imcil=1.6;imcil<=3.0; imcil+=0.01)
    {
		cxmcil=1*cos(imcil) +10;
		cymcil=1*sin(imcil) -10;
		glVertex2f(cxmcil,cymcil); 
		
	}
	 glEnd();
    // rectangulo
    glBegin(GL_LINES);
    
    glVertex3f(-10.0f,-10.0f,0.0f);
    glVertex3f(-10.0f,10.0f,0.5f);
    glBegin(GL_LINES);
   
    glVertex3f(-10.0f,10.0f,0.5f);
    glVertex3f(10.0f,10.0f,0.5f);
    glBegin(GL_LINES);
    
    glVertex3f(10.0f,10.0f,0.0f);
    glVertex3f(10.0f,-10.0f,0.5f);
    glBegin(GL_LINES);
    
    glVertex3f(10.0f,-10.0f,0.0f);
    glVertex3f(-10.0f,-10.0f,0.5f);
    
    
    
    
    //linea central
    glBegin(GL_LINES);
    
    glVertex3f(0.0f,10.0f,0.5f);
    glVertex3f(0.0f,-10.0f,0.5f);
    //area pequnia der
    glBegin(GL_LINES);
    
    glVertex3f(10.0f,2.0f,0.0f);
    glVertex3f(8.0f,2.0f,0.5f);
    
    glBegin(GL_LINES);
    
    glVertex3f(8.0f,2.0f,0.0f);
    glVertex3f(8.0f,-2.0f,0.5f);
    
    glBegin(GL_LINES);
    
    glVertex3f(8.0f,-2.0f,0.0f);
    glVertex3f(10.0f,-2.0f,0.5f);
    
    //area pequnia izq
    glBegin(GL_LINES);
    
    glVertex3f(-10.0f,2.0f,0.0f);
    glVertex3f(-8.0f,2.0f,0.5f);
    
    glBegin(GL_LINES);
    
    glVertex3f(-8.0f,2.0f,0.0f);
    glVertex3f(-8.0f,-2.0f,0.5f);
    
    glBegin(GL_LINES);
    
    glVertex3f(-8.0f,-2.0f,0.0f);
    glVertex3f(-10.0f,-2.0f,0.5f);
    
    //area grande der
    glBegin(GL_LINES);
    
    glVertex3f(10.0f,4.0f,0.0f);
    glVertex3f(6.0f,4.0f,0.5f);
    
    glBegin(GL_LINES);
    
    glVertex3f(6.0f,4.0f,0.0f);
    glVertex3f(6.0f,-4.0f,0.5f);
    
    glBegin(GL_LINES);
    
    glVertex3f(6.0f,-4.0f,0.0f);
    glVertex3f(10.0f,-4.0f,0.5f);
    
    //area grande izq
    glBegin(GL_LINES);
    
    glVertex3f(-10.0f,4.0f,0.0f);
    glVertex3f(-6.0f,4.0f,0.5f);
    
    glBegin(GL_LINES);
    
    glVertex3f(-6.0f,4.0f,0.0f);
    glVertex3f(-6.0f,-4.0f,0.5f);
    
    glBegin(GL_LINES);
    
    glVertex3f(-6.0f,-4.0f,0.0f);
    glVertex3f(-10.0f,-4.0f,0.5f);
    
    
    
    
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
    glOrtho(-11.0, 11.0, -11.0, 11.0, -11.0, 11.0);
}

int main(int argc, char** argv)
{    
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (600, 420);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Ejemplo Puntos");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
