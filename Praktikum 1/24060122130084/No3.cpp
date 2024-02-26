/* Nama: Nashwan Adenaya
 NIM: 24060122130084 */

#include <GL/glut.h>
#include <stdlib.h>

void Persegi(void){
glClear(GL_COLOR_BUFFER_BIT);

glColor3f(0.5f, 0.35f, 0.05f); 
glRectf(0.6, -0.4, 0.2,-0.9);
	
glColor3f(0.5f, 0.35f, 0.05f); 
glRectf(0.10, -0.4, -0.3,-0.9);

glColor3f(0.5f, 0.35f, 0.05f);
glRectf(-0.8, -0.4, -0.4,-0.9);

glColor3f(0.5f, 0.35f, 0.05f);
glRectf(-0.15, 0.19, -0.55, -0.3);

glColor3f(0.5f, 0.35f, 0.05f); 
glRectf(-0.63, 0.19, -1.03, -0.3);

glColor3f(0.5f, 0.35f, 0.05f);
glRectf(0.83, 0.19,0.43, -0.3);
    
glColor3f(0.5f, 0.35f, 0.05f); 
glRectf(-0.05, 0.19, 0.35, -0.3);

glColor3f(0.5f, 0.35f, 0.05f); 
glRectf(0.1, 0.75, -0.3, 0.3); 

glColor3f(0.5f, 0.35f, 0.05f);
glRectf(0.6, 0.75, 0.2,0.3);

glColor3f(0.5, 0.35, 0.05); 
glRectf(-0.8, 0.75, -0.4,0.3);

glFlush();
}

int main(int argc,char *argv[]){
	glutInit(&argc,argv);
	glutInitWindowSize(720,600);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Persegi Bertingkat");
	glutDisplayFunc(Persegi);
	glClearColor(0.0, 0.0f ,0.0f, 1.0f);
	glutMainLoop();
return 0;
}
