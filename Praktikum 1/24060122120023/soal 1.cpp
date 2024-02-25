/* Deskripsi : Membuat titik menggunakan GL_POINTS dan garis menggunakan GL_LINES */
/* NIM/Nama  : 24060122120023/Happy Desita Widyantari */
/* Tanggal   : Rabu, 21 Februari 2024 */

#include <GL/glut.h>

void TitikGaris(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    
	// Membuat titik dengan fungsi GL_POINTS
    glPointSize(5.0f);
    glBegin(GL_POINTS);
    	// Titik kiri
    	glColor3f(0.066f, 0.176f, 0.306f);	
    	glVertex3f(-0.1, 0.0, 0.0);
    	// Titik tengah
    	glColor3f(0.066f, 0.176f, 0.306f);	
    	glVertex3f(0.0, 0.0, 0.0);
    	// Titik kanan
    	glColor3f(0.066f, 0.176f, 0.306f);	
    	glVertex3f(0.1, 0.0, 0.0);
    glEnd();
    
    // Membuat garis dengan fungsi GL_LINES
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    	// Garis atas
    	glColor3f(0.247f, 0.447f, 0.686f);
    	glVertex3f(0.0, 0.1, 0.0);
   		glVertex3f(0.0, 0.5, 0.0);
   		// Garis bawah
   		glColor3f(0.247f, 0.447f, 0.686f);
    	glVertex3f(0.0, -0.1, 0.0);
    	glVertex3f(0.0, -0.5, 0.0);
    	// Garis kiri
    	glColor3f(0.247f, 0.447f, 0.686f);
    	glVertex3f(-0.2, 0.0, 0.0);
    	glVertex3f(-0.6, 0.0, 0.0);
    	// Garis kanan
    	glColor3f(0.247f, 0.447f, 0.686f);
    	glVertex3f(0.2, 0.0, 0.0);
    	glVertex3f(0.6, 0.0, 0.0);
    glEnd();
    
    glFlush();
}


int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(600, 600);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); 
    glutCreateWindow("Praktikum 1-Titik dan Garis");
    glutDisplayFunc(TitikGaris);
    glClearColor(0.996f, 0.925f, 0.886f, 1.0f);
    glutMainLoop();
    return 0;
}
