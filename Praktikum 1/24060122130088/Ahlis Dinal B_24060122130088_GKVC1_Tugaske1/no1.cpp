//#include <GL/glut.h>
//
//void display() {
//    glClear(GL_COLOR_BUFFER_BIT);
//    
//    glPointSize(10.0);
//    glBegin(GL_POINTS);
//    glColor3f(1.0, 0.0, 0.0); 
//    glVertex2f(-0.8, 0.8);
//    glColor3f(0.0, 1.0, 0.0);
//    glVertex2f(-0.5, 0.5);
//    glColor3f(0.0, 0.0, 1.0);
//    glVertex2f(-0.2, 0.8);
//    glEnd();
//    
//    glBegin(GL_LINES);
//    glColor3f(1.0, 1.0, 0.0); 
//    glVertex2f(0.2, 0.8);
//    glVertex2f(0.5, 0.5);
//    
//    glColor3f(0.0, 1.0, 1.0);
//    glVertex2f(0.8, 0.8);
//    glVertex2f(0.8, 0.5);
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
//    glutCreateWindow("OpenGL Points and Lines");
//    init();
//    glutDisplayFunc(display);
//    glutMainLoop();
//    return 0;
//}
