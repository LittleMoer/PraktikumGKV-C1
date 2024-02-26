////Nama  		: Maulida Aprillia Cinta Ariyatin
////NIM			: 24060122120029
////Lab			: C1
////Mata Kuliah	: GKV
////TugasKe		: 1	

#include <GL/glut.h>

void cincin(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(2.0f);
	
	
    glBegin(GL_QUAD_STRIP);
   	glColor4f(1.0f, 1.0f, 0.0f, 0.0f); // kuning
    glVertex3f(0.0, -0.6, 0.0); //a
    glVertex3f(0.0, -0.7, 0.0); //b
    glColor4f(1.0f, 1.0f, 0.0f, 1.0f); // kuning
    glColor4f(1.0f, 0.75f, 0.0f, 1.0f); // orange2an
    glVertex3f(0.1, -0.6, 0.0); //c
    glVertex3f(0.2, -0.7, 0.0); //d
    glVertex3f(0.2, -0.5, 0.0); //e
    glVertex3f(0.4, -0.5, 0.0); //f
    glVertex3f(0.2, -0.4, 0.0); //g
    glVertex3f(0.4, -0.3, 0.0); //h 
    glVertex3f(0.1, -0.3, 0.0); //i 
    glVertex3f(0.3, -0.2, 0.0); //j 
    glVertex3f(0.0, -0.3, 0.0); //k
    glVertex3f(0.1, -0.2, 0.0); //l
    glColor4f(1.0f, 1.0f, 0.0f, 1.0f); // kuning
    glVertex3f(-0.1, -0.4, 0.0); //m
    glVertex3f(-0.1, -0.2, 0.0); //n
    glVertex3f(-0.1, -0.5, 0.0); //o
    glVertex3f(-0.2, -0.3, 0.0); //p
    glVertex3f(0.0, -0.6, 0.0); //q
    glVertex3f(-0.2, -0.5, 0.0); //r
    glVertex3f(0.0, -0.6, 0.0); //a
    glVertex3f(0.0, -0.7, 0.0); //b
    
    glEnd();
    
    
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.1f, 0.1f, 0.1f); // hitam
    glVertex3f(0.1, 0.0, 0.0);
    glColor3f(1.0f, 1.0f, 1.0f); // warna putih
    glVertex3f(-0.2, 0.3, 0.0);
    glColor3f(1.0f, 1.0f, 1.0f); // warna putih
    glVertex3f(-0.1, 0.3, 0.0);
    glColor3f(1.0f, 1.0f, 1.0f); // warna putih
    glVertex3f(0.1, 0.3, 0.0);
    glColor3f(1.0f, 1.0f, 1.0f); // warna putih
    glVertex3f(0.3, 0.3, 0.0);
    glColor3f(1.0f, 1.0f, 1.0f); // warna putih
    glVertex3f(0.4, 0.3, 0.0);

    glEnd();
    
    
    glBegin(GL_TRIANGLE_STRIP);
    glColor3f(1.0f, 1.0f, 1.0f); // warna putih
    glVertex3f(-0.2, 0.3, 0.0);
    glColor3f(0.1f, 0.1f, 0.1f); // hitam
    glVertex3f(-0.1, 0.4, 0.0);
    glColor3f(1.0f, 1.0f, 1.0f); // warna putih
    glVertex3f(-0.1, 0.3, 0.0);
    glColor3f(0.1f, 0.1f, 0.1f); // hitam
    glVertex3f(0.0, 0.4, 0.0);
    glColor3f(1.0f, 1.0f, 1.0f); // warna putih
    glVertex3f(0.1, 0.3, 0.0);
    glColor3f(0.1f, 0.1f, 0.1f); // hitam
    glVertex3f(0.2, 0.4, 0.0);
    glColor3f(1.0f, 1.0f, 1.0f); // warna putih
    glVertex3f(0.3, 0.3, 0.0);
    glColor3f(0.1f, 0.1f, 0.1f); // hitam
    glVertex3f(0.3, 0.4, 0.0);
    glColor3f(1.0f, 1.0f, 1.0f); // warna putih
    glVertex3f(0.4, 0.3, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // putih
    glVertex3f(-0.2, -0.2, 0.0);
    glVertex3f(-0.2, -0.1, 0.0);
    glVertex3f(0.3, -0.1, 0.0);
    glVertex3f(0.3, -0.2, 0.0);
    
    glVertex3f(-0.2, -0.1, 0.0);
    glColor3f(0.7f, 0.7f, 0.7f); // Abu-abu Muda
    glVertex3f(-0.1, 0.0, 0.0);
    glVertex3f(0.4, 0.0, 0.0);
    glVertex3f(0.3, -0.1, 0.0);
    
    glColor3f(0.8f, 0.5f, 0.8f); // Ungu Muda
    glVertex3f(0.3, -0.1, 0.0);
    glVertex3f(0.4, 0.0, 0.0);
    glVertex3f(0.4, -0.1, 0.0);
    glVertex3f(0.3, -0.2, 0.0);
    
    glEnd();
    
	glBegin(GL_LINE_STRIP);
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex3f(0.3, -0.1, 0.0);
    glVertex3f(0.4, 0.0, 0.0);
    glVertex3f(0.4, -0.1, 0.0);
    glVertex3f(0.3, -0.2, 0.0);
	
    glEnd();
    
    glBegin(GL_LINE_STRIP);
    
    //diamond
    glColor3f(1.0f, 1.0f, 1.0f); // warna putih
    glVertex3f(0.1, 0.0, 0.0);
    glVertex3f(-0.2, 0.3, 0.0);
    glVertex3f(0.4, 0.3, 0.0);
    glVertex3f(0.1, 0.0, 0.0);
    glVertex3f(-0.1, 0.3, 0.0);
    glVertex3f(0.3, 0.3, 0.0);
    glVertex3f(0.1, 0.0, 0.0);
    glVertex3f(0.1, 0.3, 0.0);
    glEnd();
    
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f); // warna putih
    glVertex3f(-0.2, 0.3, 0.0);
    glVertex3f(-0.1, 0.4, 0.0);
    glVertex3f(-0.1, 0.3, 0.0);
    glVertex3f(0.0, 0.4, 0.0);
    glVertex3f(0.1, 0.3, 0.0);
    glVertex3f(0.2, 0.4, 0.0);
    glVertex3f(0.3, 0.3, 0.0);
    glVertex3f(0.3, 0.4, 0.0);
    glVertex3f(0.4, 0.3, 0.0);
    glEnd();
    
    glBegin(GL_LINE_LOOP);
	glColor4f(1.0f, 0.75f, 0.0f, 1.0f); // orange2an
    glVertex3f(0.0, -0.6, 0.0);
    glVertex3f(-0.1, -0.5, 0.0);
    glVertex3f(-0.1, -0.4, 0.0);
    //glColor4f(8.0f, 0.4f, 0.0f, 1.0f); // orange tua
    glColor3f(0.1f, 0.1f, 0.1f); // hitam
    glVertex3f(0.0, -0.3, 0.0);
    glVertex3f(0.1, -0.3, 0.0);
    glVertex3f(0.2, -0.4, 0.0);
    glVertex3f(0.2, -0.5, 0.0);
    glVertex3f(0.1, -0.6, 0.0);
    glEnd();
    
    glBegin(GL_LINE_STRIP);
    glVertex3f(0.2, -0.7, 0.0);
    glVertex3f(0.0, -0.7, 0.0);
    glVertex3f(-0.2, -0.5, 0.0);
    glVertex3f(-0.2, -0.3, 0.0);
    glVertex3f(-0.1, -0.2, 0.0);
    glEnd();
    
    glBegin(GL_LINE_STRIP);
	glColor3f(0.1f, 0.1f, 0.1f); // hitam
	glVertex3f(0.3, -0.2, 0.0);
    glVertex3f(0.4, -0.3, 0.0);
    glVertex3f(0.4, -0.5, 0.0);
    glVertex3f(0.2, -0.7, 0.0);
    
    glEnd();
    
    
	glFlush();
}

int main(int argc, char* argv[]){
	glutInitWindowSize(1000, 650);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Membuat Cincin");
	glutDisplayFunc(cincin);
	glClearColor(1.0f, 0.5f, 0.5f, 1.0f); // Pink
	glutMainLoop();
	
	return 0;
}
