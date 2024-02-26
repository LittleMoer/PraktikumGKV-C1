#include <gl/glut.h> 
void SegiEmpat(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	
  	glColor3f(1.0f, 0.0f, 0.0f); // Merah
	glRectf(-0.18f, 0.18f, 0.18f, -0.18f); // Persegi panjang merah
	
	glColor3f(0.0f, 0.0f, 1.0f); // Warna biru
	glRectf(0.18f, 0.18f, 0.54f, -0.18f); // Persegi panjang biru
	
	glColor3f(0.0f, 1.0f, 0.0f); // Hijau
	glRectf(-0.54f, 0.18f, -0.18f, -0.18f); // Persegi panjang hijau
	
	glColor3f(1.0f, 1.0f, 0.0f); // Kuning
	glRectf(0.54f, 0.18f, 0.90f, -0.18f); // Persegi panjang kuning
	
	glColor3f(1.0f, 0.0f, 1.0f); // Pink
	glRectf(-0.90f, 0.18f, -0.54f, -0.18f); // Persegi panjang pink


    
	glFlush();
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("SegiEmpat");
	glutDisplayFunc(SegiEmpat); 
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Warna hitam 
	glutMainLoop();
	return 0;
}
