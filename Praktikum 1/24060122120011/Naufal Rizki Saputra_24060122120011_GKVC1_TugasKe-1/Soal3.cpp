// Nama		: Naufal Rizki Saputra
// NIM		: 24060122120011
// Membuat Gambar Kubus bertingkat dari objek primitif 

#include <gl/glut.h>

void Pyramid(void) {
    glClear(GL_COLOR_BUFFER_BIT);
	
    // 1
    glColor3ub(255, 0, 0);
    glBegin(GL_QUADS);
    glVertex2f(-0.05, 0.7);
    glVertex2f(0.05, 0.7);
    glVertex2f(0.05, 0.6);
    glVertex2f(-0.05, 0.6);
    glEnd();

    // 2
    glColor3ub(0, 255, 0);
    glBegin(GL_QUADS);
    glVertex2f(-0.1, 0.6);
    glVertex2f(0.1, 0.6);
    glVertex2f(0.1, 0.5);
    glVertex2f(-0.1, 0.5);
    glEnd();

    // 3
    glColor3ub(0, 0, 255);
    glBegin(GL_QUADS);
    glVertex2f(-0.15, 0.5);
    glVertex2f(0.15, 0.5);
    glVertex2f(0.15, 0.4);
    glVertex2f(-0.15, 0.4);
    glEnd();

    // 4
    glColor3ub(255, 255, 0);
    glBegin(GL_QUADS);
    glVertex2f(-0.2, 0.4);
    glVertex2f(0.2, 0.4);
    glVertex2f(0.2, 0.3);
    glVertex2f(-0.2, 0.3);
    glEnd();

    // 5
    glColor3ub(0, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(-0.25, 0.3);
    glVertex2f(0.25, 0.3);
    glVertex2f(0.25, 0.2);
    glVertex2f(-0.25, 0.2);
    glEnd();

    // 6
    glColor3ub(255, 0, 255);
    glBegin(GL_QUADS);
    glVertex2f(-0.3, 0.2);
    glVertex2f(0.3, 0.2);
    glVertex2f(0.3, 0.1);
    glVertex2f(-0.3, 0.1);
    glEnd();

    // 7
    glColor3ub(128, 128, 128);
    glBegin(GL_QUADS);
    glVertex2f(-0.35, 0.1);
    glVertex2f(0.35, 0.1);
    glVertex2f(0.35, 0.0);
    glVertex2f(-0.35, 0.0);
    glEnd();

    // 8
    glColor3ub(255, 128, 0);
    glBegin(GL_QUADS);
    glVertex2f(-0.4, 0.0);
    glVertex2f(0.4, 0.0);
    glVertex2f(0.4, -0.1);
    glVertex2f(-0.4, -0.1);
    glEnd();

    // 9
    glColor3ub(0, 128, 128);
    glBegin(GL_QUADS);
    glVertex2f(-0.45, -0.1);
    glVertex2f(0.45, -0.1);
    glVertex2f(0.45, -0.2);
    glVertex2f(-0.45, -0.2);
    glEnd();

    // 10
    glColor3ub(128, 0, 128);
    glBegin(GL_QUADS);
    glVertex2f(-0.5, -0.2);
    glVertex2f(0.5, -0.2);
    glVertex2f(0.5, -0.3);
    glVertex2f(-0.5, -0.3);
    glEnd();

    glFlush();
}

int main(int argc,char *argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Piramida Bertingkat");
    glutDisplayFunc(Pyramid);
    glClearColor(0.95f, 0.95f, 0.9f, 1.0f);
    glutMainLoop();
    return 0;
}

