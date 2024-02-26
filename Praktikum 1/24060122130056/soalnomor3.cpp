#include <GL/glut.h>

void SegiEmpat(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    
    //segiempat tengah kiri
    glColor3f(0.0f, 1.0f, 1.0f);
    glRectf(-0.4, 0.1, -0.2, -0.1);
    
    //segiempat tengah tengah
    glColor3f(1.0f, 0.0f, 0.0f);
    glRectf(-0.1, 0.1, 0.1, -0.1);
    
    //segiempat tengah kanan
    glColor3f(0.0f, 1.0f, 1.0f);
    glRectf(0.2, 0.1, 0.4, -0.1);
    
    //segiempat atas kiri
    glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(-0.25, 0.3, -0.05, 0.1);
    
    //segiempat atas kanan
    glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(0.25, 0.3, 0.05, 0.1);
    
    //segiempat bawah kiri
    glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(-0.25, -0.3, -0.05, -0.1);
    
    //segiempat bawah kanan
    glColor3f(1.0f, 1.0f, 1.0f);
    glRectf(0.25, -0.3, 0.05, -0.1);
    
    
    
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Segi Empat");
    glutDisplayFunc(SegiEmpat);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glutMainLoop();
    return 0;
}

