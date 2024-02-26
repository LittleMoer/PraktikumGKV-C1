#include <GL/glut.h>

void myInit(void){
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 600, 0.0, 600);
}

void tugas1(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	//no1
	//Line Strip
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2i(50, 550);
	glVertex2i(100, 550);
	glVertex2i(50, 480);
	glEnd();
	
	//Line Loop
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2i(150, 550);
	glVertex2i(200, 550);
	glVertex2i(180, 500);
	glVertex2i(145, 500);
	glEnd();
	
	//Triagle Fan
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2i(240, 550);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2i(270, 550);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2i(280, 540);
	glColor3f(0.0f, 1.0f, 1.0f);
	glVertex2i(255, 500);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2i(230, 540);
	glEnd();
	
	//Triangle strip
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(0.19f, 1.2f, 0.3f);
	glVertex2i(300, 550);
	glVertex2i(320, 540);
	glVertex2i(340, 520);
	glVertex2i(310, 500);
	glEnd();
	
	
	//Quads
	glBegin(GL_QUADS);
	glColor3f(1.1f, 1.4f, 0.8f);
	glVertex2i(400, 540);
	glVertex2i(450, 540);
	glVertex2i(450, 490);
	glVertex2i(400, 490);
	glEnd();
	
	//QUad Strip
	glBegin(GL_QUAD_STRIP);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2i(50, 450);
	glVertex2i(100, 450);
	glVertex2i(150, 490);
	glVertex2i(150, 430);
	glVertex2i(100, 430);
	glVertex2i(50, 450);
	glEnd();
	
	
	//no2
	
	glBegin(GL_QUADS);
	glColor3ub(225,191,146);
	glVertex2i(100, 50);
	glVertex2i(150, 50);
	glVertex2i(150, 100);
	glVertex2i(100, 100);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3ub(236,204,162);
	glVertex2i(150, 50);
	glVertex2i(200, 50);
	glVertex2i(200, 100);
	glVertex2i(150, 100);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(225,191,146);
	glVertex2i(200, 50);
	glVertex2i(250, 50);
	glVertex2i(250, 100);
	glVertex2i(200, 100);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3ub(236,204,162);
	glVertex2i(250, 50);
	glVertex2i(300, 50);
	glVertex2i(300, 100);
	glVertex2i(250, 100);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3ub(225,191,146);
	glVertex2i(300, 50);
	glVertex2i(350, 50);
	glVertex2i(350, 100);
	glVertex2i(300, 100);
	glEnd();
	
	
	glBegin(GL_QUADS);
	glColor3ub(225,191,146);
	glVertex2i(125, 100);
	glVertex2i(175, 100);
	glVertex2i(175, 150);
	glVertex2i(125, 150);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3ub(236,204,162);
	glVertex2i(175, 100);
	glVertex2i(225, 100);
	glVertex2i(225, 150);
	glVertex2i(175, 150);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(225,191,146);
	glVertex2i(225, 100);
	glVertex2i(275, 100);
	glVertex2i(275, 150);
	glVertex2i(225, 150);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3ub(236,204,162);
	glVertex2i(275, 100);
	glVertex2i(325, 100);
	glVertex2i(325, 150);
	glVertex2i(275, 150);
	glEnd();
	
	
	glBegin(GL_QUADS);
	glColor3ub(225,191,146);
	glVertex2i(150, 150);
	glVertex2i(200, 150);
	glVertex2i(200, 200);
	glVertex2i(150, 200);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3ub(236,204,162);
	glVertex2i(200, 150);
	glVertex2i(250, 150);
	glVertex2i(250, 200);
	glVertex2i(200, 200);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(225,191,146);
	glVertex2i(250, 150);
	glVertex2i(300, 150);
	glVertex2i(300, 200);
	glVertex2i(250, 200);
	glEnd();
	
	
	glFlush();
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(600, 600);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("24060122120014");
	myInit();
	glutDisplayFunc(tugas1);
    glutMainLoop();
    return 0;
}
