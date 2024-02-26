#include <GL/glut.h>
//
//void A1 (void){
//	glClear(GL_COLOR_BUFFER_BIT);
//	glBegin(GL_LINE_STRIP);
//	glVertex3f(0.0, 0.0, 0.0);
//	glVertex3f(0.0, 0.7, 0.0);
//	glVertex3f(-0.7, 0.0, 0.0);
//	glVertex3f(-0.7, 0.7, 0.0);
//	glVertex3f(-0.4, 0.4, 0.0);
//	glEnd();
//	glFlush();
//}
//
//int main(int argc, char* argv[]) {
//    glutInit(&argc, argv);
//    glutInitWindowSize(640, 480);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
//    glutCreateWindow("Membuat A1");
//    glutDisplayFunc(A1);
//    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
//    glutMainLoop();
//}
//
//
//
//
void A2 (void){
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.7, 0.0);
	glVertex3f(-0.7, 0.0, 0.0);
	glVertex3f(-0.7, 0.7, 0.0);
	glVertex3f(-0.4, 0.4, 0.0);
	glEnd();
	glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Membuat A2");
    glutDisplayFunc(A2);
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
    glutMainLoop();
}
//
//
//
//
//void A3 (void){
//	glClear(GL_COLOR_BUFFER_BIT);
//	glBegin(GL_TRIANGLE_FAN);
//	glVertex3f(0.0, 0.0, 0.0);
//	glVertex3f(0.0, 0.7, 0.0);
//	glVertex3f(-0.7, 0.0, 0.0);
//	glVertex3f(-0.7, 0.7, 0.0);
//	glVertex3f(-0.4, 0.4, 0.0);
//	glEnd();
//	glFlush();
//}
//
//int main(int argc, char* argv[]) {
//    glutInit(&argc, argv);
//    glutInitWindowSize(640, 480);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
//    glutCreateWindow("Membuat A3");
//    glutDisplayFunc(A3);
//    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
//    glutMainLoop();
//}
//
//
//
//
//void A4 (void){
//	glClear(GL_COLOR_BUFFER_BIT);
//	glBegin(GL_TRIANGLE_STRIP);
//	glVertex3f(0.0, 0.7, 0.0);
//	glVertex3f(-0.7, 0.0, 0.0);
//	glVertex3f(-0.7, 0.7, 0.0);
//	glEnd();
//	glFlush();
//}
//
//int main(int argc, char* argv[]) {
//    glutInit(&argc, argv);
//    glutInitWindowSize(640, 480);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
//    glutCreateWindow("Membuat A4");
//    glutDisplayFunc(A4);
//    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
//    glutMainLoop();
//}
//
//
//
//
//void A5 (void){
//	glClear(GL_COLOR_BUFFER_BIT);
//	glBegin(GL_QUADS);
//	glVertex3f(0.0, 0.0, 0.0);
//	glVertex3f(0.0, 0.7, 0.0);
//	glVertex3f(-0.7, 0.0, 0.0);
//	glVertex3f(-0.7, 0.7, 0.0);
//	glVertex3f(-0.4, 0.4, 0.0);
//	glEnd();
//	glFlush();
//}
//
//int main(int argc, char* argv[]) {
//    glutInit(&argc, argv);
//    glutInitWindowSize(640, 480);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
//    glutCreateWindow("Membuat A5");
//    glutDisplayFunc(A5);
//    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
//    glutMainLoop();
//}
//
//
//
//
//void A6 (void){
//	glClear(GL_COLOR_BUFFER_BIT);
//	glBegin(GL_QUAD_STRIP);
//	glVertex3f(0.0, 0.7, 0.0);
//	glVertex3f(-0.7, 0.0, 0.0);
//	glVertex3f(-0.7, 0.7, 0.0);
//	glVertex3f(-0.4, 0.4, 0.0);
//	glEnd();
//	glFlush();
//}
//
//int main(int argc, char* argv[]) {
//    glutInit(&argc, argv);
//    glutInitWindowSize(640, 480);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
//    glutCreateWindow("Membuat A6");
//    glutDisplayFunc(A6);
//    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
//    glutMainLoop();
//}
