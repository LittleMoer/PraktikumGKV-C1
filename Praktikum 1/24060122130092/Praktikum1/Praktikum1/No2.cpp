///* Nama : Sausan Berliana Arrizqi
//   NIM  : 24060122130092
//   Lab  : C1 GKV */
//
//#include <GLUT/GLUT.h>
//#include <OpenGL/OpenGL.h>
//
//void LineStrip() {
//    // GL_LINE_STRIP
//    glBegin(GL_LINE_STRIP);
//    glColor3f(1.0, 0.0, 0.5);
//    glVertex2f(-0.7, 0.0);
//    glVertex2f(-0.5, -0.2);
//    glVertex2f(-0.3, 0.0);
//    glVertex2f(-0.5, 0.2);
//    glVertex2f(-0.7, 0.4);
//    glVertex2f(-0.5, 0.6);
//    glVertex2f(-0.3, 0.4);
//    glEnd();
//    glFlush();
//}
//
//void LineLoop(){
//    // GL_LINE_LOOP
//    glBegin(GL_LINE_LOOP);
//    glColor3f(1.0, 0.7, 0.2);
//    glVertex2f(0.0, 0.6);
//    glVertex2f(0.2, 0.0);
//    glVertex2f(-0.2, 0.0);
//    glVertex2f(0.0, -0.4);
//    glEnd();
//    glFlush();
//}
////
//void TriangleFan(){
//    // GL_TRIANGLE_FAN
//    glBegin(GL_TRIANGLE_FAN);
//    glColor3f(1.0, 0.0, 0.5);
//    glVertex2f(0.3, 0.6);
//    glColor3f(0.4, 0.0, 0.3);
//    glVertex2f(0.7, 0.4);
//    glColor3f(1.0, 0.7, 0.2);
//    glVertex2f(0.4, -0.4);
//    glColor3f(0.9, 0.7, 0.5);
//    glVertex2f(0.5, 0.3);
//    glEnd();
//    glFlush();
//}
//
//void TriangleStrip(){
//    // GL_TRIANGLE_STRIP
//    glBegin(GL_TRIANGLE_STRIP);
//    glColor3f(0.4, 0.0, 0.3);
//    glVertex2f(-0.55, -0.8);
//    glColor3f(1.0, 0.7, 0.1);
//    glVertex2f(-0.9, -0.7);
//    glVertex2f(-0.6, -0.4);
//    glEnd();
//    glFlush();
//}
//
//void Quads(){
//    // GL_QUADS
//    glBegin(GL_QUADS);
//    glColor3f(1.0, 0.7, 0.2);
//    glVertex2f(-0.5, -0.8);
//    glVertex2f(0.0, -0.8);
//    glColor3f(1.0, 0.0, 0.5);
//    glVertex2f(0.2, -0.5);
//    glVertex2f(-0.3, -0.5);
//    glEnd();
//    glFlush();
//}
//
//void QuadStrip(){
//    // GL_QUAD_STRIP
//    glBegin(GL_QUAD_STRIP);
//        glColor3f(0.8, 0.5, 0.8);
//        glVertex2f(0.3, -0.5);
//        glVertex2f(0.3, -0.8);
//        glColor3f(1.0, 0.7, 1.0);
//        glVertex2f(0.6, -0.5);
//        glVertex2f(0.8, -0.8);
//    glEnd();
//    glFlush();
//}
//
//
//int main(int argc, char * argv[]) {
//    glutInit(&argc, argv);
//    glutInitWindowPosition(100, 100);
//    glutInitWindowSize(640, 480);
//    glutInitDisplayMode(GLUT_RGBA | GLUT_SINGLE);
//    glutCreateWindow("[Praktikum 1] No 2");
//    glutDisplayFunc(QuadStrip);
//    glClearColor(1.0, 1.0, 1.0, 1.0);
//    glutMainLoop();
//    return 0;
//}
