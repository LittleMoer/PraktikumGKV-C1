//Nama : Abisatya Hastarangga P
//NIM  : 24060122120004
//Lab C1
#include <windows.h>
#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

   
    glColor3f(1.0, 1.0, 0.0); 
    glPointSize(10.0); 
    glBegin(GL_POINTS);
    glVertex2f(0.0, 0.0); 
    glEnd();

    
    glColor3f(0.0, 0.0, 1.0); 
    glLineWidth(2.0); 
    glBegin(GL_LINES);
    glVertex2f(-0.5, -0.5); 
    glVertex2f(0.5, 0.5);   
    glEnd();

    glFlush();
}

void init() {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Soal 1-Abi-24060122120004");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
