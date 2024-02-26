#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    //Menggambar segitiga fan
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f, 1.0f, 1.0f); // Warna putih
    glVertex2f(0.0f, 0.0f); // Titik pusat
    glVertex2f(0.2f, 0.3f);
    glVertex2f(0.4f, 0.1f);
    
    glColor3f(1.0f, 1.0f, 1.0f); // Warna putih
    glVertex2f(0.0f, 0.0f); // Titik pusat
    glVertex2f(-0.2f, -0.3f);
    glVertex2f(-0.4f, -0.1f);
    
    glColor3f(1.0f, 1.0f, 1.0f); // Warna putih
    glVertex2f(0.0f, 0.0f); // Titik pusat 
    glVertex2f(0.2f, -0.3f);
    glVertex2f(0.4f, -0.1f);
    
    glColor3f(1.0f, 1.0f, 1.0f); // Warna putih
    glVertex2f(0.0f, 0.0f); // Titik pusat 
    glVertex2f(-0.2f, 0.3f);
    glVertex2f(-0.4f, 0.1f);
    glEnd();
    
    
    //Loop garis
    glBegin(GL_LINE_LOOP);
    glColor3f(0.6f, 0.4f, 0.2f); // Warna kuning
    glVertex2f(-0.1f, -0.4f);
    glVertex2f(0.1f, -0.4);
    glVertex2f(0.2f, -0.5f);
    glVertex2f(-0.2f, -0.5f);
    glEnd();

    //Garis strip
    glBegin(GL_LINE_STRIP);
    glColor3f(0.6f, 0.4f, 0.2f); // Warna coklat
    glVertex2f(-0.1f, -0.2f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.1f, -0.2f);
    glEnd();

	//Menggambar segitiga strip
    glBegin(GL_TRIANGLE_STRIP);
    glColor3f(1.0f, 1.0f, 0.2f); // Warna kuning
    glVertex2f(-0.1f, -0.4f);
    glVertex2f(-0.1f, -0.2f);
    glVertex2f(0.1f, -0.2f);
    glVertex2f(0.1f, -0.4f); 
    glEnd();
    
     //Menggambar quads
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.2f); // warna kuning
    glVertex2f(-0.1f, -0.7f);
    glVertex2f(0.1f, -0.7f);
    glVertex2f(0.1f, -0.5f);
    glVertex2f(-0.1f, -0.5f);
    glEnd();
    
    glBegin(GL_QUAD_STRIP);
    glColor3f(0.4, 0.2, 0.2); // warna coklat
    glVertex2f(0.0, -0.7);
    glVertex2f(0.1, -0.8);
    glVertex2f(0.1, -0.7);
    glVertex2f(0.2, -0.8);
    glEnd();
    
    glBegin(GL_QUAD_STRIP);
    glColor3f(0.4, 0.2, 0.2); // warna coklat 
    glVertex2f(0.0, -0.7);
    glVertex2f(-0.1, -0.8);
    glVertex2f(-0.1, -0.7);
    glVertex2f(-0.2, -0.8);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("OpenGL Triangle Fan");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

