/*  Nama/NIM         : Aura Arfannisa Az Zahra/24060122130097 
    Nama File        : Praktikum1_1.cpp
    Deskripsi        : Membuat titik dan garis menggunakan fungsi GL_POINTS dan GL_LINES
    Hari, Tanggal    : Minggu, 25 Februari 2024
*/

#include <gl/glut.h>

void nomorsatu(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
		
	//GL_POINTS
	glLineWidth(5.0f);
	
	glBegin(GL_POINTS);
	glColor3ub(0, 0, 128);
	glVertex2f(-0.8, 0.6);
	
	glColor3ub(255, 20, 147);
	glVertex2f(-0.8, 0.5);
	
	glColor3ub(0, 0, 128);
	glVertex2f(-0.8, 0.4);
	
	glColor3ub(255, 20, 147);
	glVertex2f(-0.8, 0.3);
	
	glColor3ub(0, 0, 128);
	glVertex2f(-0.8, 0.2);
	
	glColor3ub(0, 0, 128);
	glVertex2f(-0.2, 0.6);
	
	glColor3ub(255, 20, 147);
	glVertex2f(-0.2, 0.5);
	
	glColor3ub(0, 0, 128);
	glVertex2f(-0.2, 0.4);
	
	glColor3ub(255, 20, 147);
	glVertex2f(-0.2, 0.3);
	
	glColor3ub(0, 0, 128);
	glVertex2f(-0.2, 0.2);

	glEnd();

	
	//GL_LINES
	glLineWidth(5.0f);
	
	glBegin(GL_LINES);
	glColor3ub(255, 20, 147); //garis merah
	glVertex2f(-0.6, 0.6);
	glVertex2f(-0.6, 0.2);
	
	glColor3ub(0, 0, 128); //garis biru
	glVertex2f(-0.4, 0.6);
	glVertex2f(-0.4, 0.2);

	glEnd();
	
	glFlush();
}


int main(int argc,char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(720,640);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("2D Primitif: GL_POINTS dan GL_LINES");
    glutDisplayFunc(nomorsatu);
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glutMainLoop();
    return 0;
} 
