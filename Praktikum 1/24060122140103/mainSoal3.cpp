//Nama  : Muflih Muhammad Imaduddin
//NIM   : 24060122140103
//Lab   : GKV C1

#include <glut/glut.h>

void Soal3(void) {
    //bidang persegi 1
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.46, -0.2);
    glVertex2f(-0.46, -0.4);
    glVertex2f(-0.26, -0.4);
    glVertex2f(-0.26, -0.2);
    glEnd();
    
    //garis tepi persegi 1
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.46, -0.2);
    glVertex2f(-0.46, -0.4);
    glVertex2f(-0.26, -0.4);
    glVertex2f(-0.26, -0.2);
    glEnd();
    
    //bidang persegi 2
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.22, -0.2);
    glVertex2f(-0.22, -0.4);
    glVertex2f(-0.02, -0.4);
    glVertex2f(-0.02, -0.2);
    glEnd();
    
    //garis tepi persegi 2
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.22, -0.2);
    glVertex2f(-0.22, -0.4);
    glVertex2f(-0.02, -0.4);
    glVertex2f(-0.02, -0.2);
    glEnd();
    
    //bidang persegi 3
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.02, -0.2);
    glVertex2f(0.02, -0.4);
    glVertex2f(0.22, -0.4);
    glVertex2f(0.22, -0.2);
    glEnd();
    
    //garis tepi persegi 3
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.02, -0.2);
    glVertex2f(0.02, -0.4);
    glVertex2f(0.22, -0.4);
    glVertex2f(0.22, -0.2);
    glEnd();
    
    //bidang persegi 4
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.26, -0.2);
    glVertex2f(0.26, -0.4);
    glVertex2f(0.46, -0.4);
    glVertex2f(0.46, -0.2);
    glEnd();
    
    //garis tepi persegi 4
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.26, -0.2);
    glVertex2f(0.26, -0.4);
    glVertex2f(0.46, -0.4);
    glVertex2f(0.46, -0.2);
    glEnd();
    
    //bidang persegi 5
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.34, -0.2);
    glVertex2f(-0.34, 0.0);
    glVertex2f(-0.14, 0.0);
    glVertex2f(-0.14, -0.2);
    glEnd();
    
    //garis tepi persegi 5
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.34, -0.2);
    glVertex2f(-0.34, 0.0);
    glVertex2f(-0.14, 0.0);
    glVertex2f(-0.14, -0.2);
    glEnd();
    
    //bidang persegi 6
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.1, -0.2);
    glVertex2f(-0.1, 0.0);
    glVertex2f(0.1, 0.0);
    glVertex2f(0.1, -0.2);
    glEnd();
    
    //garis tepi persegi 6
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.1, -0.2);
    glVertex2f(-0.1, 0.0);
    glVertex2f(0.1, 0.0);
    glVertex2f(0.1, -0.2);
    glEnd();
    
    //bidang persegi 7
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.14, -0.2);
    glVertex2f(0.14, 0.0);
    glVertex2f(0.34, 0.0);
    glVertex2f(0.34, -0.2);
    glEnd();
    
    //garis tepi persegi 7
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.14, -0.2);
    glVertex2f(0.14, 0.0);
    glVertex2f(0.34, 0.0);
    glVertex2f(0.34, -0.2);
    glEnd();
    
    //bidang persegi 8
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.22, 0.0);
    glVertex2f(-0.22, 0.2);
    glVertex2f(-0.02, 0.2);
    glVertex2f(-0.02, 0.0);
    glEnd();
    
    //garis tepi persegi 8
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.22, 0.0);
    glVertex2f(-0.22, 0.2);
    glVertex2f(-0.02, 0.2);
    glVertex2f(-0.02, 0.0);
    glEnd();
    
    //bidang persegi 9
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.02, 0.0);
    glVertex2f(0.02, 0.2);
    glVertex2f(0.22, 0.2);
    glVertex2f(0.22, 0.0);
    glEnd();
    
    //garis tepi persegi 9
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.02, 0.0);
    glVertex2f(0.02, 0.2);
    glVertex2f(0.22, 0.2);
    glVertex2f(0.22, 0.0);
    glEnd();
    
    //bidang persegi 10
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.1, 0.2);
    glVertex2f(-0.1, 0.4);
    glVertex2f(0.1, 0.4);
    glVertex2f(0.1, 0.2);
    glEnd();
    
    //garis tepi persegi 10
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.1, 0.2);
    glVertex2f(-0.1, 0.4);
    glVertex2f(0.1, 0.4);
    glVertex2f(0.1, 0.2);
    glEnd();
}

void Display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    
    Soal3();
    
    glFlush();
}

int main(int argc, char *argv[]) {
    glutInit(&argc, argv);
    
    glutInitWindowSize(720, 720);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Pertemuan1");
    glClearColor(0.15f, 0.15f, 0.15f, 1.0f);
    
    glutDisplayFunc(Display);
    glutMainLoop();
    
    return 0;
}
