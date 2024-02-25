// Nama		: Naufal Rizki Saputra
// NIM		: 24060122120011
// Membuat Titik menggunakan GL_POINTS dan membuat garis menggunakan GL_LINES

#include <gl/glut.h>

void PointAndLine(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(10);
    glLineWidth(5);

    // Garis 
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.5, -0.5);
    glVertex2f(0.5, 0.5);  
    glVertex2f(-0.5, 0.5); 
    glVertex2f(0.5, -0.5); 
    glEnd();
    
    // Titik
    glBegin(GL_POINTS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.5, -0.5);
    glVertex2f(0.5, 0.5);
    glVertex2f(-0.5, 0.5);
    glVertex2f(0.5, -0.5);
    glVertex2f(0.0, 0.0);
    glEnd();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("Titik dan Garis");
    glutDisplayFunc(PointAndLine);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

    glutMainLoop();
    return 0;
}

