//Nama  		: Maulida Aprillia Cinta Ariyatin
//NIM			: 24060122120029
//Lab			: C1
//Mata Kuliah	: GKV
//TugasKe		: 1	
//
#include <GL/glut.h>

void point(void) { //titik
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(5.0f);
    glBegin(GL_POINTS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(0.25, 0.20, 0.0);
    //glVertex3f(0.00, -0.20, 0.0);
    glEnd();
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Membuat Titik");
    glutDisplayFunc(point);
    glClearColor(0.0f, 1.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}

void Garis(void) { //garis
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex3f(0.00, 0.20, 0.0);
    glVertex3f(0.00, -0.20, 0.0);
    glEnd();
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Membuat Garis");
    glutDisplayFunc(Garis);
    glClearColor(0.2f, 0.4f, 0.0f, 1.0f);
    glutMainLoop();
    return 0;
}


