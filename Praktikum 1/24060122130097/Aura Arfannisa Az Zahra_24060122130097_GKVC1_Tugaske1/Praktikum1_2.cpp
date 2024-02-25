/*  Nama/NIM         : Aura Arfannisa Az Zahra/24060122130097 
    Nama File        : Praktikum1_2.cpp
    Deskripsi        : Membentuk tampilan 2d primitif dengan memanfaatkan fungsi GL_LINE_STRIP, GL_LINE_LOOP
    GL_TRIANGLE_FAN, GL_TRIANGLE_STRIP, GL_QUADS, dan GL_QUAD_STRIP.
    Hari, Tanggal    : Minggu, 25 Februari 2024
*/

#include <gl/glut.h>

void nomordua(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
		
	//GL_LINE_STRIP
	glLineWidth(5.0f);
	
	glBegin(GL_LINE_STRIP);
	glColor3ub(0, 0, 128);
	glVertex2f(-0.8,0.6);
	
	glColor3ub(255, 228, 225);
	glVertex2f(-0.6,0.8);
	
	glColor3ub(0, 0, 128);
	glVertex2f(-0.4,0.6);
	
	glColor3ub(255, 228, 225);
	glVertex2f(-0.2,0.8);
	
	glColor3ub(0, 0, 128);
	glVertex2f(0,0.6);

	glEnd();

	
	//GL_LINE_LOOP
	glLineWidth(5.0f);
	
	glBegin(GL_LINE_LOOP);
	glColor3ub(255, 228, 225);
	glVertex2f(0.2,0.6);
	
	glColor3ub(0, 0, 128);
	glVertex2f(0.4,0.8);
	
	glColor3ub(255, 228, 225);
	glVertex2f(0.6,0);
	
	glColor3ub(0, 0, 128);
	glVertex2f(0.8,0.5);

	glEnd();

	
    //GL_TRIANGLE_FAN
    glLineWidth(5.0f);
    
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 228, 225);
    glVertex2f(-0.8,0.3);
    glVertex2f(-0.2,0.4);
 	glVertex2f(-0.2,0);
 	
 	glColor3ub(0, 0, 128);
    glVertex2f(-0.2,0);
    glVertex2f(-0.5,-0.3);
    glVertex2f(-0.8,0.3);
    glEnd();
    
	//GL_TRIANGLE_STRIP
	glLineWidth(5.0f);
	
    glBegin(GL_TRIANGLE_STRIP);
    glColor3ub(0, 0, 128);
	glVertex2f(-0.8,-0.4);
	glVertex2f(-0.6,-0.4);
	glVertex2f(-0.7,-0.6);
	
	glColor3ub(255, 228, 225);
	glVertex2f(-0.6,-0.4);
	glVertex2f(-0.7,-0.6);
	glVertex2f(-0.5,-0.6);
	glEnd();
	
	//GL_QUADS
	glLineWidth(5.0f);
	
	glBegin(GL_QUADS);
	glColor3ub(255, 228, 225);
	glVertex2f(0,0.4);
	glVertex2f(0.4,0.4);
	glVertex2f(0.4,0);
	glVertex2f(0,0);
	glEnd();
	
	//GL_QUAD_STRIP
	glLineWidth(5.0f);
	
	glBegin(GL_QUAD_STRIP);
    glColor3ub(0, 0, 128);
	glVertex2f(0.3,-0.2);
	glVertex2f(0.8,-0.2);
	glVertex2f(0.3,-0.3);
	glVertex2f(0.8,-0.3);
	
	glColor3ub(255, 228, 225);
	glVertex2f(0.3,-0.3);
	glVertex2f(0.8,-0.3);
	glVertex2f(0.4,-0.5);
	glVertex2f(0.7,-0.5);
	glEnd();
	
	glFlush();
}

int main(int argc,char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(720,640);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("2D Primitif: GL_LINE_STRIP, GL_LINE_LOOP, GL_TRIANGLE_FAN, GL_TRIANGLE_STRIP, GL_QUADS, dan GL_QUAD_STRIP.");
    glutDisplayFunc(nomordua);
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glutMainLoop();
    return 0;
} 
