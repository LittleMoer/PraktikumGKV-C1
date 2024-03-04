#include <windows.h>
#include <GL\glut.h>
#include <math.h>

const double PI = 3.142857143;
int i,radius,jumlah_titik,x_tengah,y_tengah;

void RenderScene(void){
	glClearColor(0,0,0,0);
//    glMatrixMode(GL_PROJECTION);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    
    glPushMatrix();
	glBegin(GL_POLYGON);
		glColor3f(0.75,0.75,0.75);
		glVertex2f(-1,-0.6);
		glVertex2f(1,-0.6);
		glVertex2f(1,-1);
		glVertex2f(-1,-1);
	glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-0.05,0.0,0.0);
    glBegin(GL_POLYGON);
		glColor3f(1.0,1.0,0.0);
		glVertex2f(-0.6,-0.8);
		glVertex2f(0.6,-0.8);
		glVertex2f(0.6,-0.6);
		glVertex2f(-0.6,-0.6);
		glColor3f(0,0,0);
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-0.05,0.0,0.0);
    glBegin(GL_POLYGON);
		glColor3f(1.0,0.0,0.0);
		glVertex2f(0.2,-0.6);
		glVertex2f(0.2,-0.4);
		glVertex2f(-0.6,-0.4);
		glVertex2f(-0.6,-0.6);
		glColor3f(0,0,0);
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-0.05,0.0,0.0);
    glBegin(GL_POLYGON);
    	glColor3f(1.0, 1.0, 0.0);
		glVertex2f(0.2, 0.0);
        glVertex2f(-0.6, 0.0);
        glVertex2f(-0.6, -0.4);
        glVertex2f(0.2, -0.4);
		glColor3f(0,0,0);
	glEnd();
	glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-0.05,0.0,0.0);
    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(0.2, -0.2);
        glVertex2f(0.4, -0.2);
        glVertex2f(0.6, -0.6);
        glVertex2f(0.2, -0.6);
		glColor3f(0,0,0);
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-0.05,0.0,0.0);
    glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 0.0);
        glVertex2f(0.25, -0.3);
        glVertex2f(0.37, -0.3);
        glVertex2f(0.5, -0.55);
        glVertex2f(0.25, -0.55);
		glColor3f(0,0,0);
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-0.05,0.0,0.0);
    glBegin(GL_POLYGON);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(-0.8, -0.2);
        glVertex2f(-0.8, -0.25);
        glVertex2f(-0.4, -0.25);
        glVertex2f(-0.4, -0.2);
		glColor3f(0,0,0);
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-0.05,0.0,0.0);
    glBegin(GL_POLYGON);
        glColor3f(1.0, 0.3, 0.3);
        glVertex2f(-0.7, -0.3);
        glVertex2f(-0.7, -0.35);
        glVertex2f(-0.3, -0.35);
        glVertex2f(-0.3, -0.3);
		glColor3f(0,0,0);
	glEnd();
	glPopMatrix();
	
	//ban
	glPushMatrix();
    glColor3f(0.0,0.0,1.0);
    glBegin(GL_TRIANGLE_FAN);
      
       radius = 15;
       jumlah_titik = 60;
       x_tengah = -30;
       y_tengah = -80;
      
       for (i=0;i<=360;i++)
       {
            float sudut=i*(2*PI/jumlah_titik);
            float x=x_tengah+radius*cos(sudut);
            float y=y_tengah+radius*sin(sudut);
            glVertex2f(x/100,y/100);
       }
    glEnd();
    glPopMatrix();
    glutSwapBuffers();
    
    	//ban
	glPushMatrix();
    glColor3f(0.0,0.0,1.0);
    glBegin(GL_TRIANGLE_FAN);
      
       radius = 15;
       jumlah_titik = 60;
       x_tengah = 25;
       y_tengah = -80;
      
       for (i=0;i<=360;i++)
       {
            float sudut=i*(2*PI/jumlah_titik);
            float x=x_tengah+radius*cos(sudut);
            float y=y_tengah+radius*sin(sudut);
            glVertex2f(x/100,y/100);
       }
    glEnd();
    glPopMatrix();
    glutSwapBuffers();

    glFlush();
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (700, 400);
glutInitWindowPosition (200, 100);
glutCreateWindow ("MOBIL 2D SEDERHANA");
glutDisplayFunc(RenderScene);
glutMainLoop();
return 0;
}
