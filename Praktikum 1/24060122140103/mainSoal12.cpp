//Nama  : Muflih Muhammad Imaduddin
//NIM   : 24060122140103
//Lab   : GKV C1

#include <glut/glut.h>

void Soal12(void) {
    glLineWidth(3); //set ketebalan garis
    
    //bidang atap rumah 1
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.48, 0.2);
    glVertex2f(-0.42, 0.5);
    glVertex2f(-0.2, 0.5);
    glVertex2f(-0.24, 0.2);
    glEnd();
    
    //garis tepi atap rumah 1
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.48, 0.2);
    glVertex2f(-0.42, 0.5);
    glVertex2f(-0.2, 0.5);
    glVertex2f(-0.24, 0.2);
    glEnd();
    
    //bidang atap rumah 2
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.24, 0.2);
    glVertex2f(-0.2, 0.5);
    glVertex2f(0.0, 0.5);
    glVertex2f(0.0, 0.2);
    glEnd();
    
    //garis tepi atap rumah 2
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.24, 0.2);
    glVertex2f(-0.2, 0.5);
    glVertex2f(0.0, 0.5);
    glVertex2f(0.0, 0.2);
    glEnd();
    
    //bidang atap rumah 3
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.0, 0.2);
    glVertex2f(0.0, 0.5);
    glVertex2f(0.2, 0.5);
    glVertex2f(0.24, 0.2);
    glEnd();
    
    //garis tepi atap rumah 3
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.0, 0.2);
    glVertex2f(0.0, 0.5);
    glVertex2f(0.2, 0.5);
    glVertex2f(0.24, 0.2);
    glEnd();
    
    //bidang atap rumah 4
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.24, 0.2);
    glVertex2f(0.2, 0.5);
    glVertex2f(0.42, 0.5);
    glVertex2f(0.48, 0.2);
    glEnd();
    
    //garis tepi atap rumah 4
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.24, 0.2);
    glVertex2f(0.2, 0.5);
    glVertex2f(0.42, 0.5);
    glVertex2f(0.48, 0.2);
    glEnd();
    
    //bidang dinding rumah
    glBegin(GL_QUAD_STRIP);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.38, 0.2);
    glVertex2f(-0.34, 0.2);
    glVertex2f(-0.38, -0.5);
    glVertex2f(-0.34, -0.46);
    glVertex2f(0.38, -0.5);
    glVertex2f(0.34, -0.46);
    glVertex2f(0.38, 0.2);
    glVertex2f(0.34, 0.2);
    glEnd();
    
    //garis tepi dinding rumah
    glBegin(GL_LINE_STRIP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.38, 0.2);
    glVertex2f(-0.38, -0.5);
    glVertex2f(0.38, -0.5);
    glVertex2f(0.38, 0.2);
    glVertex2f(0.34, 0.2);
    glVertex2f(0.34, -0.46);
    glVertex2f(-0.34, -0.46);
    glVertex2f(-0.34, 0.2);
    glEnd();
    
    //bidang pintu rumah
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.28, -0.45);
    glVertex2f(-0.28, -0.03);
    glVertex2f(-0.03, -0.03);
    glVertex2f(-0.03, -0.45);
    glEnd();
    
    glPointSize(10); //set ketebalan titik
    
    //titik pegangan pintu rumah
    glBegin(GL_POINTS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.07, -0.25);
    glEnd();
    
    //garis tepi pintu rumah
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.28, -0.46);
    glVertex2f(-0.28, -0.03);
    glVertex2f(-0.03, -0.03);
    glVertex2f(-0.03, -0.46);
    glEnd();
    
    //bidang jendela rumah
    glBegin(GL_TRIANGLE_STRIP);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.055, -0.3);
    glVertex2f(0.055, -0.1);
    glVertex2f(0.255, -0.1);
    glVertex2f(0.255, -0.3);
    glVertex2f(0.055, -0.3);
    glEnd();
    
    //garis tepi jendela rumah
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.055, -0.3);
    glVertex2f(0.055, -0.1);
    glVertex2f(0.255, -0.1);
    glVertex2f(0.255, -0.3);
    glEnd();
    
    //garis tengah jendela rumah;
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.155, -0.1);
    glVertex2f(0.155, -0.3);
    glEnd();
    
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.055, -0.2);
    glVertex2f(0.255, -0.2);
    glEnd();
    
    //bidang atap bawah rumah 1
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.36, 0.05);
    glVertex2f(-0.48, 0.2);
    glVertex2f(-0.44, 0.2);
    glVertex2f(-0.40, 0.2);
    glVertex2f(-0.36, 0.2);
    glVertex2f(-0.32, 0.2);
    glVertex2f(-0.28, 0.2);
    glVertex2f(-0.24, 0.2);
    glEnd();
    
    //garis tepi atap bawah rumah 1
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.36, 0.05);
    glVertex2f(-0.48, 0.2);
    glVertex2f(-0.44, 0.2);
    glEnd();
    
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.36, 0.05);
    glVertex2f(-0.44, 0.2);
    glVertex2f(-0.40, 0.2);
    glEnd();
    
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.36, 0.05);
    glVertex2f(-0.40, 0.2);
    glVertex2f(-0.36, 0.2);
    glEnd();
    
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.36, 0.05);
    glVertex2f(-0.36, 0.2);
    glVertex2f(-0.32, 0.2);
    glEnd();
    
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.36, 0.05);
    glVertex2f(-0.32, 0.2);
    glVertex2f(-0.28, 0.2);
    glEnd();
    
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.36, 0.05);
    glVertex2f(-0.28, 0.2);
    glVertex2f(-0.24, 0.2);
    glEnd();
    
    //bidang atap bawah rumah 2
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.12, 0.05);
    glVertex2f(-0.24, 0.2);
    glVertex2f(-0.20, 0.2);
    glVertex2f(-0.16, 0.2);
    glVertex2f(-0.12, 0.2);
    glVertex2f(-0.08, 0.2);
    glVertex2f(-0.04, 0.2);
    glVertex2f(0.0, 0.2);
    glEnd();
    
    //garis tepi atap bawah rumah 2
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.12, 0.05);
    glVertex2f(-0.24, 0.2);
    glVertex2f(-0.20, 0.2);
    glEnd();
    
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.12, 0.05);
    glVertex2f(-0.20, 0.2);
    glVertex2f(-0.16, 0.2);
    glEnd();
    
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.12, 0.05);
    glVertex2f(-0.16, 0.2);
    glVertex2f(-0.12, 0.2);
    glEnd();
    
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.12, 0.05);
    glVertex2f(-0.12, 0.2);
    glVertex2f(-0.08, 0.2);
    glEnd();
    
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.12, 0.05);
    glVertex2f(-0.08, 0.2);
    glVertex2f(-0.04, 0.2);
    glEnd();
    
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.12, 0.05);
    glVertex2f(-0.04, 0.2);
    glVertex2f(0.0, 0.2);
    glEnd();
    
    //bidang atap bawah rumah 3
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.12, 0.05);
    glVertex2f(0.24, 0.2);
    glVertex2f(0.20, 0.2);
    glVertex2f(0.16, 0.2);
    glVertex2f(0.12, 0.2);
    glVertex2f(0.08, 0.2);
    glVertex2f(0.04, 0.2);
    glVertex2f(0.0, 0.2);
    glEnd();
    
    //garis tepi atap bawah rumah 3
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.12, 0.05);
    glVertex2f(0.24, 0.2);
    glVertex2f(0.20, 0.2);
    glEnd();
    
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.12, 0.05);
    glVertex2f(0.20, 0.2);
    glVertex2f(0.16, 0.2);
    glEnd();
    
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.12, 0.05);
    glVertex2f(0.16, 0.2);
    glVertex2f(0.12, 0.2);
    glEnd();
    
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.12, 0.05);
    glVertex2f(0.12, 0.2);
    glVertex2f(0.08, 0.2);
    glEnd();
    
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.12, 0.05);
    glVertex2f(0.08, 0.2);
    glVertex2f(0.04, 0.2);
    glEnd();
    
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.12, 0.05);
    glVertex2f(0.04, 0.2);
    glVertex2f(0.0, 0.2);
    glEnd();
    
    //bidang atap bawah rumah 4
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.36, 0.05);
    glVertex2f(0.48, 0.2);
    glVertex2f(0.44, 0.2);
    glVertex2f(0.40, 0.2);
    glVertex2f(0.36, 0.2);
    glVertex2f(0.32, 0.2);
    glVertex2f(0.28, 0.2);
    glVertex2f(0.24, 0.2);
    glEnd();
    
    //garis tepi atap bawah rumah 4
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.36, 0.05);
    glVertex2f(0.48, 0.2);
    glVertex2f(0.44, 0.2);
    glEnd();
    
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.36, 0.05);
    glVertex2f(0.44, 0.2);
    glVertex2f(0.40, 0.2);
    glEnd();
    
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.36, 0.05);
    glVertex2f(0.40, 0.2);
    glVertex2f(0.36, 0.2);
    glEnd();
    
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.36, 0.05);
    glVertex2f(0.36, 0.2);
    glVertex2f(0.32, 0.2);
    glEnd();
    
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.36, 0.05);
    glVertex2f(0.32, 0.2);
    glVertex2f(0.28, 0.2);
    glEnd();
    
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.36, 0.05);
    glVertex2f(0.28, 0.2);
    glVertex2f(0.24, 0.2);
    glEnd();
}

void Display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    
    Soal12();
    
    glFlush();
}

int main(int argc, char *argv[]) {
    glutInit(&argc, argv);
    
    glutInitWindowSize(720, 720);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Soal 1 2");
    glClearColor(0.15f, 0.15f, 0.15f, 1.0f);
    
    glutDisplayFunc(Display);
    glutMainLoop();
    
    return 0;
}
