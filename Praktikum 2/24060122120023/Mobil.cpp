#include <GL/glut.h>
#include <gl/gl.h> 
#include <math.h>

void Mobil(void)
{
    glClear(GL_COLOR_BUFFER_BIT); 
    glLoadIdentity(); 
	
	// Badan mobil
	glPushMatrix();
		glBegin(GL_QUADS);
		    glColor3f(0.95f, 0.298f, 0.239f);
		    glVertex2f(-0.2, 0.3);
		    glVertex2f(0.3, 0.3);
		    glVertex2f(0.5, 0.1);
		    glVertex2f(-0.4, 0.1);
		    
		    glVertex2f(0.7, 0.1);
		    glVertex2f(0.7, -0.2);
		    glVertex2f(-0.7, -0.2);
		    glVertex2f(-0.7, 0.1);
	    glEnd();
	    
	    glBegin (GL_TRIANGLES);
			glColor3f(1.0f, 0.878f, 0.675f);
			glVertex2f(-0.6, 0.1);
			glVertex2f(-0.7, 0.0);
			glVertex2f(-0.7, 0.1);
		glEnd();
		
		glBegin (GL_TRIANGLES);
			glColor3f(1.0f, 0.878f, 0.675f);
			glVertex2f(0.6, 0.1);
			glVertex2f(0.7, 0.0);
			glVertex2f(0.7, 0.1);
		glEnd();
	glPopMatrix();
	
	// Bumper
	glPushMatrix();
		glTranslatef(0.25, -0.025, 0);
		glBegin(GL_QUADS);
		    glColor3f(0.376f, 0.118f, 0.094f);
		    glVertex2f(0.48, -0.175);
		    glVertex2f(0.48, -0.225);
		    glVertex2f(-0.98, -0.225);
		    glVertex2f(-0.98, -0.175);
	    glEnd();
	glPopMatrix();
	
	// Kaca mobil
	glPushMatrix();
		glBegin (GL_TRIANGLES);
			glColor3f(0.706f, 0.831f, 1.0f);
			glVertex2f(-0.2, 0.3);
			glVertex2f(-0.3, 0.1);
			glVertex2f(-0.4, 0.1);
		glEnd();
	glPopMatrix();
	
	glPushMatrix();
		glBegin (GL_QUADS);
			glColor3f(0.706f, 0.831f, 1.0f);
			glVertex2f(-0.15, 0.25);
			glVertex2f(0.05, 0.25);
			glVertex2f(0.05, 0.1);
			glVertex2f(-0.2, 0.1);
			
			glVertex2f(0.125, 0.25);
			glVertex2f(0.275, 0.25);
			glVertex2f(0.425, 0.1);
			glVertex2f(0.125, 0.1);
		glEnd();
	glPopMatrix();
	
	// Lampu
	glPushMatrix();
		glBegin (GL_QUADS);
			glColor3f(0.95f, 0.745f, 0.133f);
			glVertex2f(-0.6, 0.0);
			glVertex2f(-0.6, -0.1);
			glVertex2f(-0.7, -0.1);
			glVertex2f(-0.7, 0.0);
			
			glColor3f(0.663f, 0.208f, 0.165f);
			glVertex2f(0.6, 0.0);
			glVertex2f(0.6, -0.1);
			glVertex2f(0.7, -0.1);
			glVertex2f(0.7, 0.0);
		glEnd();
	glPopMatrix();
	
	// Handle
	glPushMatrix();
		glBegin (GL_QUADS);
			glColor3f(0.376f, 0.118f, 0.094f);
			glVertex2f(0.05, 0.05);
			glVertex2f(0.05, 0.01);
			glVertex2f(-0.025,0.01);
			glVertex2f(-0.025, 0.05);
			
			glVertex2f(0.425, 0.05);
			glVertex2f(0.425, 0.01);
			glVertex2f(0.35,0.01);
			glVertex2f(0.35, 0.05);
		glEnd();
	glPopMatrix();
	
	// Roda
	glPushMatrix();
		#define PI 3.1415926535898
		glBegin(GL_POLYGON);
			glColor3f(0.231f, 0.231f, 0.231f);
			float radius = 0.12;
	        for(int i = 0; i <= 100; i++) {
	            float angle = 2.0f * PI * float(i) / float(100); 
	            float dx = radius * cosf(angle); 
	            float dy = radius * sinf(angle); 
	            glVertex2f(-0.32 + dx, -0.25 + dy); 
	        }
    	glEnd();
	glPopMatrix();
	
	glPushMatrix();
		#define PI 3.1415926535898
		glBegin(GL_POLYGON);
			glColor3f(0.231f, 0.231f, 0.231f);
	        for(int i = 0; i <= 100; i++) {
	            float angle = 2.0f * PI * float(i) / float(100); 
	            float dx = radius * cosf(angle); 
	            float dy = radius * sinf(angle); 
	            glVertex2f(0.4 + dx, -0.25 + dy); 
	        }
    	glEnd();
	glPopMatrix();
	
	glPushMatrix();
		#define PI 3.1415926535898
		glBegin(GL_POLYGON);
			glColor3f(0.95f, 0.298f, 0.239f);
	        for(int i = 0; i <= 100; i++) {
	            float angle = 2.0f * PI * float(i) / float(100); 
	            float dx = 0.06 * cosf(angle); 
	            float dy = 0.06 * sinf(angle); 
	            glVertex2f(-0.32 + dx, -0.25 + dy);  
	        }
    	glEnd();
	glPopMatrix();
	
	glPushMatrix();
		#define PI 3.1415926535898
		glBegin(GL_POLYGON);
			glColor3f(0.95f, 0.298f, 0.239f);
	        for(int i = 0; i <= 100; i++) {
	            float angle = 2.0f * PI * float(i) / float(100); 
	            float dx = 0.06 * cosf(angle); 
	            float dy = 0.06 * sinf(angle); 
	            glVertex2f(0.4 + dx, -0.25 + dy); 
	        }
    	glEnd();
	glPopMatrix();
	
	// Garis
	glPushMatrix();
		glLineWidth(3.0f); 
		glBegin (GL_LINES);
			glColor3f(0.376f, 0.118f, 0.094f);
			glVertex2f(-0.3, 0.05);
			glVertex2f(-0.3, -0.1);
			
			glVertex2f(0.1, 0.05);
			glVertex2f(0.1, -0.15);
			
			glVertex2f(0.475, 0.05);
			glVertex2f(0.475, -0.1);
		glEnd();
	glPopMatrix();
	
	glPushMatrix();
		glRotatef(-45.0, 0.0, 0.0, 1.0);
		glTranslatef(0.2, -0.25, 0.0);
		glLineWidth(3.0f); 
		glBegin (GL_LINES);
			glColor3f(0.376f, 0.118f, 0.094f);
			glVertex2f(-0.65, 0.175);
			glVertex2f(-0.7, 0.25);
			
			glVertex2f(-0.65, 0.15);
			glVertex2f(-0.75, 0.15);
			
			glVertex2f(-0.65, 0.125);
			glVertex2f(-0.7, 0.05);	
		glEnd();
	glPopMatrix();
	
    glFlush(); 
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(600, 600);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); 
    glutCreateWindow("Praktikum 2-Mobil");
    glutDisplayFunc(Mobil);
    glClearColor(1.0f, 0.878f, 0.675f, 1.0f);
    glutMainLoop();
    return 0;
}
