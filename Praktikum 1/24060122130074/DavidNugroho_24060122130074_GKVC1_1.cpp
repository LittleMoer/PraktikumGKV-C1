#include <GL/glut.h>

void Init(void){
	glClearColor(0.62, 0.52, 0.57, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(100, 100, 100, 100);
}

void shalom(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.74, 0.67, 0.71);
	
	//LINE STRIP
	glBegin(GL_LINE_STRIP);
    glVertex2f(-0.8, 0.9);
    glVertex2f(-0.9, 0.6);
    glVertex2f(-0.8, 0.6);
    glVertex2f(-0.9, 0.3);
    glEnd();
    
    //LINE LOOP
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.0, 0.9);
    glVertex2f(0.1, 0.7);
    glVertex2f(0.3, 0.6);
    glVertex2f(0.1, 0.5);
    glVertex2f(0.0, 0.3);
    glVertex2f(-0.1, 0.5);
    glVertex2f(-0.3, 0.6);
    glVertex2f(-0.1, 0.7);
    glEnd();
    
    //TRIANGLE FAN
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0.6, 0.3);
    glVertex2f(0.6, 0.9);
    glVertex2f(0.9, 0.9);
    glVertex2f(0.8, 0.3);
    glEnd();
    
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(-0.9, -0.3);
    glVertex2f(-0.9, -0.9);
    glVertex2f(-0.7, -0.8);
    glVertex2f(-0.8, -0.4);
    glEnd();
    
    glBegin(GL_QUADS);
    glVertex2f(-0.2, -0.3);
    glVertex2f(0.2, -0.3);
    glVertex2f(0.2, -0.9);
    glVertex2f(-0.2, -0.9);
    glEnd();
    
    glBegin(GL_QUAD_STRIP);
    glVertex2f(0.5, -0.3);
    glVertex2f(0.5, -0.9);
    glVertex2f(0.9, -0.3);
    glVertex2f(0.9, -0.9);
    glEnd();
    
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(750, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("24060122130074");
    Init();
    glutDisplayFunc(shalom);
    glutMainLoop();
    return 0;
}
