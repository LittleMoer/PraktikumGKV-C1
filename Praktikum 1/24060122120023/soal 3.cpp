/* Deskripsi : Membuat pohon dari persegi  */
/* NIM/Nama  : 24060122120023/Happy Desita Widyantari */
/* Tanggal   : Minggu, 25 Februari 2024 */

#include <GL/glut.h>

void Pohon(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    
    glBegin(GL_QUADS);
    	// Rumput
    	glColor3f(0.655f, 0.851f, 0.188f);
    	glVertex2f(-0.4, -0.3);
    	glVertex2f(-0.6, -0.3);
    	glVertex2f(-0.6, -0.5);
    	glVertex2f(-0.4, -0.5);
    	
    	glVertex2f(-0.2, -0.3);
    	glVertex2f(-0.4, -0.3);
    	glVertex2f(-0.4, -0.5);
    	glVertex2f(-0.2, -0.5);
    	
    	glVertex2f(0.0, -0.3);
    	glVertex2f(-0.2, -0.3);
    	glVertex2f(-0.2, -0.5);
    	glVertex2f(0.0, -0.5);
    	
    	glVertex2f(0.2, -0.3);
    	glVertex2f(0.0, -0.3);
    	glVertex2f(0.0, -0.5);
    	glVertex2f(0.2, -0.5);
    	
    	glVertex2f(0.4, -0.3);
    	glVertex2f(0.2, -0.3);
    	glVertex2f(0.2, -0.5);
    	glVertex2f(0.4, -0.5);
    	
    	glVertex2f(0.6, -0.3);
    	glVertex2f(0.4, -0.3);
    	glVertex2f(0.4, -0.5);
    	glVertex2f(0.6, -0.5);
    	
		// Tanah
    	glColor3f(0.388f, 0.216f, 0.118f);
		glVertex2f(-0.4, -0.5);
    	glVertex2f(-0.6, -0.5);
    	glVertex2f(-0.6, -0.7);
    	glVertex2f(-0.4, -0.7);
    	
    	glVertex2f(-0.2, -0.5);
    	glVertex2f(-0.4, -0.5);
    	glVertex2f(-0.4, -0.7);
    	glVertex2f(-0.2, -0.7);
    	
    	glVertex2f(0.0, -0.5);
    	glVertex2f(-0.2, -0.5);
    	glVertex2f(-0.2, -0.7);
    	glVertex2f(0.0, -0.7);
    	
    	glVertex2f(0.2, -0.5);
    	glVertex2f(0.0, -0.5);
    	glVertex2f(0.0, -0.7);
    	glVertex2f(0.2, -0.7);
    	
    	glVertex2f(0.4, -0.5);
    	glVertex2f(0.2, -0.5);
    	glVertex2f(0.2, -0.7);
    	glVertex2f(0.4, -0.7);
    	
    	glVertex2f(0.6, -0.5);
    	glVertex2f(0.4, -0.5);
    	glVertex2f(0.4, -0.7);
    	glVertex2f(0.6, -0.7);
    	
    	// Batang
    	glColor3f(0.482f, 0.266f, 0.145f);
    	glVertex2f(0.1, -0.2);
    	glVertex2f(0.0, -0.2);
    	glVertex2f(0.0, -0.3);
    	glVertex2f(0.1, -0.3);
    	
    	glVertex2f(0.2, -0.2);
    	glVertex2f(0.1, -0.2);
    	glVertex2f(0.1, -0.3);
    	glVertex2f(0.2, -0.3);
    	
    	glVertex2f(0.3, -0.2);
    	glVertex2f(0.2, -0.2);
    	glVertex2f(0.2, -0.3);
    	glVertex2f(0.3, -0.3);
    	
    	glVertex2f(0.2, -0.1);
    	glVertex2f(0.1, -0.1);
    	glVertex2f(0.1, -0.2);
    	glVertex2f(0.2, -0.2);
    	
    	glColor3f(0.388f, 0.216f, 0.118f);
    	glVertex2f(-0.1, -0.2);
    	glVertex2f(-0.2, -0.2);
    	glVertex2f(-0.2, -0.3);
    	glVertex2f(-0.1, -0.3);
    	
    	glVertex2f(0.0, -0.2);
    	glVertex2f(-0.1, -0.2);
    	glVertex2f(-0.1, -0.3);
    	glVertex2f(0.0, -0.3);
    	
    	glVertex2f(0.1, -0.1);
    	glVertex2f(0.0, -0.1);
    	glVertex2f(0.0, -0.2);
    	glVertex2f(0.1, -0.2);
    	
    	glVertex2f(0.0, -0.1);
    	glVertex2f(-0.1, -0.1);
    	glVertex2f(-0.1, -0.2);
    	glVertex2f(0.0, -0.2);
    	
    	// Daun
    	glColor3f(0.314f, 0.518f, 0.0f);
    	glVertex2f(0.1, 0.0);
    	glVertex2f(0.0, 0.0);
    	glVertex2f(0.0, -0.1);
    	glVertex2f(0.1, -0.1);
    	
    	glVertex2f(0.0, 0.0);
    	glVertex2f(-0.1, 0.0);
    	glVertex2f(-0.1, -0.1);
    	glVertex2f(0.0, -0.1);
    	
    	glVertex2f(0.0, 0.1);
    	glVertex2f(0.1, 0.1);
    	glVertex2f(0.1, 0.0);
    	glVertex2f(0.0, 0.0);
    	
    	glVertex2f(0.1, 0.2);
    	glVertex2f(0.0, 0.2);
    	glVertex2f(0.0, 0.1);
    	glVertex2f(0.1, 0.1);
    	
    	glVertex2f(0.0, 0.2);
    	glVertex2f(-0.2, 0.2);
    	glVertex2f(-0.2, 0.0);
    	glVertex2f(0.0, 0.0);
    	
    	glVertex2f(0.0, 0.3);
    	glVertex2f(-0.1, 0.3);
    	glVertex2f(-0.1, 0.2);
    	glVertex2f(0.0, 0.2);
    	
    	glVertex2f(-0.1, 0.3);
    	glVertex2f(-0.2, 0.3);
    	glVertex2f(-0.2, 0.2);
    	glVertex2f(-0.1, 0.2);
    	
    	glVertex2f(0.0, 0.4);
    	glVertex2f(-0.1, 0.4);
    	glVertex2f(-0.1, 0.3);
    	glVertex2f(0.0, 0.3);
    	
    	glVertex2f(0.1, 0.5);
    	glVertex2f(0.0, 0.5);
    	glVertex2f(0.0, 0.4);
    	glVertex2f(0.1, 0.4);
    	
    	glVertex2f(0.0, 0.5);
    	glVertex2f(-0.1, 0.5);
    	glVertex2f(-0.1, 0.4);
    	glVertex2f(0.0, 0.4);
    	
    	glColor3f(0.584f, 0.761f, 0.169f);
    	glVertex2f(0.1, 0.6);
    	glVertex2f(0.0, 0.6);
    	glVertex2f(0.0, 0.5);
    	glVertex2f(0.1, 0.5);
    	
    	glVertex2f(0.2, 0.5);
    	glVertex2f(0.1, 0.5);
    	glVertex2f(0.1, 0.4);
    	glVertex2f(0.2, 0.4);
    	
    	glVertex2f(0.2, 0.4);
    	glVertex2f(0.0, 0.4);
    	glVertex2f(0.0, 0.2);
    	glVertex2f(0.2, 0.2);
    	
    	glVertex2f(0.3, 0.3);
    	glVertex2f(0.2, 0.3);
    	glVertex2f(0.2, 0.2);
    	glVertex2f(0.3, 0.2);
    	
    	glVertex2f(0.3, 0.2);
    	glVertex2f(0.1, 0.2);
    	glVertex2f(0.1, 0.0);
    	glVertex2f(0.3, 0.0);
    	
    	glVertex2f(0.2, 0.0);
    	glVertex2f(0.1, 0.0);
    	glVertex2f(0.1, -0.1);
    	glVertex2f(0.2, -0.1);
    glEnd();
    
    glFlush();
}


int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(600, 600);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); 
    glutCreateWindow("Praktikum 1-Pohon dari Persegi");
    glutDisplayFunc(Pohon);
    glClearColor(1.0f, 1.0f, 0.925f, 1.0f);
    glutMainLoop();
    return 0;
}
