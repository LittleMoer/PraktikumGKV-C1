//#include <GL/glut.h>
//
//void display() {
//    glClear(GL_COLOR_BUFFER_BIT);
//    
//    glBegin(GL_LINE_STRIP);
//    glColor3f(1.0, 0.0, 0.0);
//    glVertex2f(-0.8, 0.5);
//    glVertex2f(-0.4, 0.5);
//    glVertex2f(-0.6, 0.7);
//    glEnd();
//    
//    glBegin(GL_LINE_LOOP);
//    glColor3f(0.0, 1.0, 0.0);
//    glVertex2f(0.2, 0.8);
//    glVertex2f(0.5, 0.5);
//    glVertex2f(0.8, 0.8);
//    glEnd();
//    
//    glBegin(GL_TRIANGLE_FAN);
//    glColor3f(0.0, 0.0, 1.0);
//    glVertex2f(-0.8, -0.8);
//    glVertex2f(-0.8, -0.5);
//    glVertex2f(-0.5, -0.8);
//    glVertex2f(-0.2, -0.5);
//    glVertex2f(-0.2, -0.8);
//    glEnd();
//    
//    glBegin(GL_TRIANGLE_STRIP);
//    glColor3f(1.0, 1.0, 0.0);
//    glVertex2f(0.2, -0.8);
//    glVertex2f(0.5, -0.5);
//    glVertex2f(0.2, -0.5);
//    glVertex2f(0.5, -0.8);
//    glEnd();
//    
//    glBegin(GL_TRIANGLE_STRIP);
//    glColor3f(1.0, 0.0, 1.0);
//    glVertex2f(0.8, -0.8);
//    glVertex2f(0.8, -0.5);
//    glVertex2f(0.5, -0.5);
//    glVertex2f(0.5, -0.8);
//    glEnd();
//    
//    glBegin(GL_QUAD_STRIP);
//    glColor3f(0.5, 0.5, 0.5);
//    glVertex2f(-0.8, 0.2);
//    glVertex2f(-0.5, 0.2);
//    glVertex2f(-0.8, -0.1);
//    glVertex2f(-0.5, -0.1);
//    glEnd();
//    
//    glFlush();
//}
//
//void init() {
//    glClearColor(0.0, 0.0, 0.0, 0.0);
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
//}
//
//int main(int argc, char** argv) {
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//    glutInitWindowSize(500, 500);
//    glutInitWindowPosition(100, 100);
//    glutCreateWindow("OpenGL Shapes");
//    init();
//    glutDisplayFunc(display);
//    glutMainLoop();
//    return 0;
//}
