#include <GL/glut.h>


void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Mengatur warna untuk bagian luar monitor (abu abu)
    glColor3f(0.5, 0.5, 0.5);

    // Menggambar bagian luar monitor (kotak besar)
    glBegin(GL_QUADS);
    glVertex2f(-0.8, -0.6); // Posisi kiri bawah
    glVertex2f(0.8, -0.6);  // Posisi kanan bawah
    glVertex2f(0.8, 0.8);   // Posisi kanan atas
    glVertex2f(-0.8, 0.8);  // Posisi kiri atas
    glEnd();

    // Mengatur warna untuk bagian layar monitor (biru)
    glColor3f(0.0, 0.0, 1.0);

    // Menggambar bagian monitor (kotak kecil)
    glBegin(GL_QUADS);
    glVertex2f(-0.7, -0.5); // Posisi kiri bawah
    glVertex2f(0.7, -0.5);  // Posisi kanan bawah
    glVertex2f(0.7, 0.7);   // Posisi kanan atas
    glVertex2f(-0.7, 0.7);  // Posisi kiri atas
    glEnd();
    
    glBegin(GL_QUAD_STRIP);
    //warna gradasi kaki monitor
    glColor3f(0.3, 0.3, 0.3);
    // Kaki kiri monitor
    glVertex2f(-0.5, -1.0); // Titik 1
    glVertex2f(-0.6, -1.2); // Titik 2
    // Posisi monitor
    glVertex2f(0.0, -0.8); // Titik 3
    glVertex2f(0.0, -1.2); // Titik 4
    // Kaki kanan monitor
    glVertex2f(0.5, -1.0); // Titik 5
    glVertex2f(0.6, -1.2); // Titik 6
    glEnd();

   

    // Menggambar kaki monitor menggunakan GL_TRIANGLE_FAN
    //warna
    glColor3f(0.5, 0.5, 0.5);
	glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0.0, -0.5); 
    glVertex2f(-0.5, -1.0); 
    glVertex2f(0.0, -0.8); 
    glVertex2f(0.5, -1.0); 
    glEnd();
    
    //atap rumah
    // warna
    glColor3f(0.1, 0.1, 0.0);
	glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(-0.5, 0.2); // Posisi atas
    glVertex2f(0.0, 0.6);  // Posisi kiri bawah
    glVertex2f(0.5, 0.2);  // Posisi kanan bawah
    glEnd();
    
    //badan rumah
    //warna
	glColor3f(0.8, 0.6, 0.5);
    glBegin(GL_QUADS);
    glVertex2f(-0.4, -0.4); // Posisi kiri bawah
    glVertex2f(-0.4, 0.2);  // Posisi kiri atas
    glVertex2f(0.4, 0.2);   // Posisi kanan atas
    glVertex2f(0.4, -0.4);  // Posisi kanan bawah
    glEnd();
    
    //pintu
    //warna
    glColor3f(0.1, 0.1, 0.0); 
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.1, -0.4); // Posisi kiri bawah
    glVertex2f(-0.1, 0.0);  // Posisi kiri atas
    glVertex2f(0.1, 0.0);   // Posisi kanan atas
    glVertex2f(0.1, -0.4);  // Posisi kanan bawah
    glEnd();

    // Menggambar pintu rumah menggunakan GL_LINE_STRIP
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.1, -0.2); // Posisi atas
    glVertex2f(0.1, -0.2);  // Posisi bawah
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Monitor");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

