/* Deskripsi : Memanfaatkan fungsi GL_LINE_STRIP, GL_LINE_LOOP,
			   GL_TRIANGLE_FAN, GL_TRIANGLE_STRIP, GL_QUADS, dan GL_QUAD_STRIP */
/* NIM/Nama  : 24060122120023/Happy Desita Widyantari */
/* Tanggal   : Minggu, 25 Februari 2024 */

#include <GL/glut.h>

void FungsiPrimitif(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    
    // Fungsi GL_LINE_STRIP
    glLineWidth(4.0f);
	glBegin(GL_LINE_STRIP);
		glColor3f(0.169f, 0.165f, 0.299f);
    	glVertex2f(-0.8, 0.8);
    	glVertex2f(-0.8, 0.7);
    	glVertex2f(-0.7, 0.7);
    	glVertex2f(-0.7, 0.9);
    	glVertex2f(-0.9, 0.9);
    	glVertex2f(-0.9, 0.6);
    	glVertex2f(-0.6, 0.6);
    	glVertex2f(-0.6, 0.9);
    glEnd();
    
    // Fungsi GL_LINE_LOOP
    glLineWidth(4.0f);
	glBegin(GL_LINE_LOOP);
		glColor3f(0.702f, 0.075f, 0.071f);
    	glVertex2f(-0.4, 0.7);
    	glVertex2f(-0.25, 0.7);
    	glVertex2f(-0.25, 0.9);
    	glVertex2f(-0.3, 0.8);
    	glVertex2f(-0.1, 0.8);
    	glVertex2f(-0.15, 0.9);
    	glVertex2f(-0.15, 0.7);
    	glVertex2f(0.0, 0.7);
    	glVertex2f(-0.1, 0.6);
    	glVertex2f(-0.3, 0.6);
	glEnd();
	
	// Fungsi GL_TRIANGLE_FAN
	glBegin(GL_TRIANGLE_FAN);
		glColor3f(0.169f, 0.165f, 0.299f);
    	glVertex2f(0.4, 0.9);
    	glVertex2f(0.2, 0.7);
    	glVertex2f(0.3, 0.6);
    	
    	glColor3f(0.702f, 0.075f, 0.071f);
    	glVertex2f(0.4, 0.9);
    	glVertex2f(0.4, 0.7);
    	glVertex2f(0.3, 0.6);
    	
    	glColor3f(0.918f, 0.565f, 0.424f);
    	glVertex2f(0.4, 0.9);
    	glVertex2f(0.4, 0.7);
    	glVertex2f(0.5, 0.6);
    	
    	glColor3f(0.169f, 0.165f, 0.299f);
    	glVertex2f(0.4, 0.9);
    	glVertex2f(0.6, 0.7);
    	glVertex2f(0.5, 0.6);
	glEnd();
	
	// Fungsi GL_TRIANGLE_STRIP
	glBegin(GL_TRIANGLE_STRIP);
		glColor3f(0.702f, 0.075f, 0.071f);
    	glVertex2f(-0.7, 0.4);
    	glVertex2f(-0.6, 0.35);
    	glVertex2f(-0.7, 0.3);
    	
    	glColor3f(0.918f, 0.565f, 0.424f);
    	glVertex2f(-0.6, 0.35);
    	glVertex2f(-0.7, 0.3);
    	glVertex2f(-0.6, 0.25);
    	
    	glColor3f(0.169f, 0.165f, 0.299f);
    	glVertex2f(-0.7, 0.3);
    	glVertex2f(-0.6, 0.25);
    	glVertex2f(-0.7, 0.2);
    	
    	glColor3f(0.918f, 0.565f, 0.424f);
    	glVertex2f(-0.6, 0.25);
    	glVertex2f(-0.7, 0.2);
    	glVertex2f(-0.6, 0.15);
    	
    	glColor3f(0.702f, 0.075f, 0.071f);
    	glVertex2f(-0.7, 0.2);
    	glVertex2f(-0.6, 0.15);
    	glVertex2f(-0.7, 0.1);
    	
    	glColor3f(0.918f, 0.565f, 0.424f);
    	glVertex2f(-0.6, 0.15);
    	glVertex2f(-0.7, 0.1);
    	glVertex2f(-0.6, 0.05);
    	
    	glColor3f(0.169f, 0.165f, 0.299f);
    	glVertex2f(-0.6, 0.05);
    	glVertex2f(-0.6, 0.15);
    	glVertex2f(-0.5, 0.05);
    	
    	glColor3f(0.918f, 0.565f, 0.424f);
    	glVertex2f(-0.5, 0.05);
    	glVertex2f(-0.5, 0.15);
    	glVertex2f(-0.6, 0.15);
    glEnd();
    
    // Fungsi GL_QUADS
    glBegin(GL_QUADS);
    	glColor3f(0.702f, 0.075f, 0.071f);
    	glVertex2f(-0.2, -0.2);
    	glVertex2f(-0.2, 0.4);
    	glColor3ub(0.169f, 0.165f, 0.299f);
    	glVertex2f(0.0, 0.2);

    	glVertex2f(0.0, 0.0);
    	
    	glColor3f(0.078f, 0.075f, 0.141f);
    	glVertex2f(0.0, 0.0);
    	glVertex2f(0.0, 0.2);
    	glVertex2f(0.2, 0.2);
    	glVertex2f(0.2, 0.0);
    	
    	glColor3f(0.702f, 0.075f, 0.071f);
    	glVertex2f(0.4, 0.4);
    	glVertex2f(0.4, -0.2);
    	glColor3ub(0.169f, 0.165f, 0.299f);
    	glVertex2f(0.2, 0.0);
    	glVertex2f(0.2, 0.2);
    glEnd();
    
    // Fungsi GL_QUAD_STRIP
    glBegin(GL_QUAD_STRIP);
    	glColor3f(0.702f, 0.075f, 0.071f);
    	glVertex2f(-0.1, -0.5);
    	glVertex2f(-0.1, -0.6);
    	
		glColor3f(0.169f, 0.165f, 0.299f);
		glVertex2f(-0.4, -0.2);
		glVertex2f(-0.4, -0.85);
		
		glColor3f(0.918f, 0.565f, 0.424f);
		glVertex2f(-0.5, -0.35);
		glVertex2f(-0.5, -0.75);
		
		glColor3f(0.702f, 0.075f, 0.071f);
    	glVertex2f(-0.6, -0.45);
    	glVertex2f(-0.6, -0.65);
    	
    	glColor3f(0.918f, 0.565f, 0.424f);
		glVertex2f(-0.7, -0.5);
		glVertex2f(-0.7, -0.6);
		
		glColor3f(0.702f, 0.075f, 0.071f);
		glVertex2f(-0.8, -0.5);
		glVertex2f(-0.8, -0.6);
    glEnd();
    
    glFlush();
}


int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(600, 600);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); 
    glutCreateWindow("Praktikum 1-Line, Triangle, dan Quad");
    glutDisplayFunc(FungsiPrimitif);
    glClearColor(0.933f, 0.886f, 0.871f, 1.0f);
    glutMainLoop();
    return 0;
}
