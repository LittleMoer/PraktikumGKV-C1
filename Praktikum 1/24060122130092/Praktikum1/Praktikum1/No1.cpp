/* Nama : Sausan Berliana Arrizqi
   NIM  : 24060122130092
   Lab  : C1 GKV */

#include <GLUT/glut.h>

void garis() {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINES);
    glVertex2f(0.75, -0.5);
    glVertex2f(-0.75, 0.5);
    glEnd();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(640, 480);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("[Praktikum 1] No 1");
    glutDisplayFunc(garis);
    glutMainLoop();
    return 0;
}

