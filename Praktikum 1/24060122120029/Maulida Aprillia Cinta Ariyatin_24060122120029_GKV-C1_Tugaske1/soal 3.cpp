//Nama  		: Maulida Aprillia Cinta Ariyatin
//NIM			: 24060122120029
//Lab			: C1
//Mata Kuliah	: GKV
//TugasKe		: 1	

#include <GL/glut.h>

void kotak(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(2.0f);
	
     
    glBegin(GL_TRIANGLE_STRIP);
    glColor4f(0.0f, 0.90f, 0.2f, 0.5f); // hijau
    glVertex3f(0.2, 0.1, 0.0);
    glVertex3f(0.1, 0.0, 0.0);
    glVertex3f(0.1, 0.1, 0.0);
    
    glVertex3f(0.2, 0.1, 0.0);
    glVertex3f(0.3, 0.1, 0.0);
    glVertex3f(0.3, 0.2, 0.0);
    
    glVertex3f(0.3, 0.2, 0.0);
    glVertex3f(0.3, 0.3, 0.0);
    glVertex3f(0.4, 0.3, 0.0);
    
    glVertex3f(0.4, 0.3, 0.0);
    glVertex3f(0.4, 0.2, 0.0);
    glVertex3f(0.3, 0.2, 0.0);
    
    glVertex3f(0.3, 0.2, 0.0);
    glVertex3f(0.2, 0.2, 0.0);
    glVertex3f(0.2, 0.1, 0.0);
    
    glVertex3f(0.2, 0.1, 0.0);
    glVertex3f(0.2, 0.0, 0.0);
    glVertex3f(0.1, 0.0, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // putih
    glVertex3f(-0.1, -0.1, 0.0);
    glVertex3f(-0.1, -0.2, 0.0);
    glVertex3f(0.0, -0.2, 0.0);
    glVertex3f(0.0, -0.1, 0.0);
    
    glColor3f(0.3f, 0.0f, 0.7f); // Abu-abu Muda
    glVertex3f(0.1, -0.1, 0.0);
    glVertex3f(0.1, -0.2, 0.0);
    glVertex3f(0.2, -0.2, 0.0);
    glVertex3f(0.2, -0.1, 0.0);
    
     glColor3f(1.0f, 1.0f, 1.0f); // warna putih
    glVertex3f(0.3, -0.1, 0.0);
    glVertex3f(0.3, -0.2, 0.0);
    glVertex3f(0.4, -0.2, 0.0);
    glVertex3f(0.4, -0.1, 0.0);
    
    glColor3f(0.9f, 0.0f, 0.0f); // merah
    glVertex3f(0.4, -0.1, 0.0);
    glVertex3f(0.4, -0.3, 0.0);
    glVertex3f(0.6, -0.3, 0.0);
    glVertex3f(0.6, -0.1, 0.0);
    
    glColor3f(0.9f, 0.0f, 0.0f); // merah
    glVertex3f(0.3, -0.2, 0.0);
    glVertex3f(0.3, -0.4, 0.0);
    glVertex3f(0.5, -0.4, 0.0);
    glVertex3f(0.5, -0.2, 0.0);
    
    glColor3f(1.0f, 1.0f, 1.0f); // warna putih
    glVertex3f(0.5, -0.3, 0.0);
    glVertex3f(0.5, -0.4, 0.0);
    glVertex3f(0.6, -0.4, 0.0);
    glVertex3f(0.6, -0.3, 0.0);
    
    glColor4f(1.0f, 1.0f, 0.0f, 1.0f); // kuning
    glVertex3f(0.0, 0.0, 0.0);
    glVertex3f(0.0, -0.1, 0.0);
    glVertex3f(0.1, -0.1, 0.0);
    glVertex3f(0.1, 0.0, 0.0);
    
    glColor3f(0.4f, 0.5f, 0.8f); // Ungu Muda
    glVertex3f(0.2, 0.0, 0.0);
    glVertex3f(0.2, -0.1, 0.0);
    glVertex3f(0.3, -0.1, 0.0);
    glVertex3f(0.3, 0.0, 0.0);
    
    glColor4f(1.0f, 0.5f, 0.5f, 1.0f); // Pink
    glVertex3f(0.3, 0.0, 0.0);
    glVertex3f(0.3, 0.1, 0.0);
    glVertex3f(0.4, 0.1, 0.0);
    glVertex3f(0.4, 0.0, 0.0);
    
    glColor3f(1.0f, 1.0f, 1.0f); // Pink
    glVertex3f(0.0, 0.1, 0.0);
    glVertex3f(0.0, 0.2, 0.0);
    glVertex3f(0.1, 0.2, 0.0);
    glVertex3f(0.1, 0.1, 0.0);

    
    glEnd();
    
    
	glFlush();
}

int main(int argc, char* argv[]){
	glutInitWindowSize(800, 800);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Membuat persegi susun");
	glutDisplayFunc(kotak);
	glClearColor(1.0f, 0.8f, 0.5f, 0.0f); // gray
	glutMainLoop();
	
	return 0;
}
