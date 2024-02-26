/* Nama: Nashwan Adenaya
   NIM: 24060122130084 */
   
#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
	
	// Batang Kapak
	glBegin(GL_LINE_STRIP);
	glVertex2f(0.36,0.31);
	glVertex2f(-0.51,-0.56);
	glVertex2f(-0.5,-0.6);
	glVertex2f(-0.45,-0.65);
	glVertex2f(0.436, 0.234);
	glEnd();

	// Tempat Kepala Kapak
	glBegin(GL_LINE_LOOP);
	glVertex2f(0.32,0.35);
	glVertex2f(0.436, 0.234);
	glVertex2f(0.584, 0.382);
	glVertex2f(0.468, 0.498);
	glEnd();
	
	// Kepala Belakang
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(0.352,0.614);
	glVertex2f(0.468, 0.498);
	glVertex2f(0.32,0.35);
	glEnd();
	
	// Kepala Depan
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2f(0.584, 0.382);
	glVertex2f(0.9, 0.3);
	glVertex2f(0.603,0.067);
	glVertex2f(0.436, 0.234);
	glVertex2f(0.4,0.1);
	glEnd();

	// Nutup
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(0.6, 0.2);
	glVertex2f(0.584, 0.382);
	glVertex2f(0.436, 0.234);
	glEnd();
	
    // Batang Pickaxe
    glBegin(GL_QUADS);
	glVertex2f(0.51,-0.59);
	glVertex2f(0.45,-0.65);
	glVertex2f(-0.41, 0.21);
	glVertex2f(-0.35,0.27);
	glEnd();
	
	// Kepala Pickaxe
	glBegin(GL_QUAD_STRIP);
	glVertex2f(-0.419, 0.201);
	glVertex2f(-0.341, 0.279);
	glVertex2f(-0.519, 0.301);
	glVertex2f(-0.441, 0.379);
	glEnd();
	
	glBegin(GL_QUADS);
    glVertex2f(-0.48, 0.4);
    glVertex2f(-0.54,0.339);
    glVertex2f(-0.51, 0.31);
	glVertex2f(-0.449, 0.37);
    glEnd();
    
    // Pickaxe
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.5f, 0.5f, 0.5f);
    glVertex2f(-0.48, 0.33999999999999997);
    glVertex2f(-0.419, 0.201);
    glVertex2f(-0.841, -0.22099999999999997);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.5f, 0.5f, 0.5f);
    glVertex2f(-0.48, 0.33999999999999997);
    glVertex2f(-0.419, 0.201);
    glVertex2f(0.15899999999999997, 0.779);
    glEnd();
    glFlush();
}

void init() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Warna background
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0); // Set batas tampilan
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 800);
    glutCreateWindow("NO. 2");
    glutDisplayFunc(display);
    init();
    glutMainLoop();
    return 0;
}

