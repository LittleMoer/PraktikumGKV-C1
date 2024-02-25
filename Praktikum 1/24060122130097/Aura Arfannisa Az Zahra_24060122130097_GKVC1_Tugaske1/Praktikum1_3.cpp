/*  Nama/NIM         : Aura Arfannisa Az Zahra/24060122130097 
    Nama File        : Praktikum1_3.cpp
    Deskripsi        : Membuat tampilan 2d persegi bertingkat dari objek primitif
    Hari, Tanggal    : Minggu, 25 Februari 2024
*/

#include <gl/glut.h>

void heart(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
	
	glColor3f(0.0,0.0,0.0); //warna hitam
	glRectf(-0.35, 0.6, -0.05, 0.4); //panjang 2 kiri
	glRectf(-0.05, 0.4, 0.1, 0.2); //tengah atas
	glRectf(0.1, 0.6, 0.4, 0.4); //panjang 2 kanan
	glRectf(0.4, 0.4, 0.55, -0.2);
	glRectf(-0.5, 0.4, -0.35, -0.2); //panjang 3 kiri
	glRectf(-0.35, -0.2, -0.2, -0.4);
	glRectf(-0.2, -0.4, -0.05, -0.6);
	glRectf(-0.05, -0.6, 0.1, -0.8); //tengah bawah
	glRectf(0.1, -0.6, 0.25, -0.4);
	glRectf(0.25, -0.4, 0.4, -0.2);
	
	glColor3f (1.0,0.0,0.0); //warna merah
	glRectf(-0.35, 0.2, -0.2, -0.2);
	glRectf(-0.2, 0.4, -0.05, -0.4);
	glRectf(-0.05, 0.2, 0.1, -0.6);
	glRectf(0.1, 0.4, 0.25, -0.4);
	glRectf(0.25, 0.4, 0.4, -0.2);
	
	glColor3f (1.0,1.0,1.0); //warna putih
	glRectf(-0.35, 0.4, -0.2, 0.2);

	glFlush();
}

int main(int argc,char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Persegi Bertingkat Membentuk Hati");
    glutDisplayFunc(heart);
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glutMainLoop();
    return 0;
} 
