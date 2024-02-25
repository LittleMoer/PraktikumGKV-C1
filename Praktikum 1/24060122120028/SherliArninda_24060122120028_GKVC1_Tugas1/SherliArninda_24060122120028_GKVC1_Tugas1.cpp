#include <GL/glut.h>

void LineStrip(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINE_STRIP);
    glColor3f(1.0, 0.0, 0.0); 
    glVertex2f(0.5, 0.5);
    glVertex2f(0.5, 0.6);
    glVertex2f(0.6, 0.6);
    glVertex2f(0.6, 0.4);
    glVertex2f(0.4, 0.4);
 	glVertex2f(0.4, 0.7);
 	glVertex2f(0.7, 0.7);
 	glVertex2f(0.7, 0.3);
 	glVertex2f(0.3, 0.3);
 	glVertex2f(0.3, 0.8);
 	glVertex2f(0.7, 0.8);
    glEnd();
    glFlush();
}

void LineLoop(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(-0.8, 0.8);
    glVertex2f(-0.4, 0.8);
    glVertex2f(-0.3, 0.6);
    glVertex2f(-0.6, 0.2);
    glVertex2f(-0.9, 0.6);
    glEnd();
    glFlush();
}

void TriangleFan(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(0.5, -0.5);
    glVertex2f(0.3, -0.3);
    glColor3f(0.0, 0.0, 0.6);
    glVertex2f(0.9, -0.5);
    glVertex2f(0.3, -0.7);
    glEnd();
    glFlush();
}

void TriangleStrip(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLE_STRIP);
    glColor3f(0.663, 0.843, 0.902); 
    glVertex2f(0.1, -0.3);
    glVertex2f(0.3, -0.1);
    glVertex2f(0.3, -0.3);
    glVertex2f(0.6, -0.1);
    glVertex2f(0.8, -0.3);
    glEnd();
    glFlush();
}

void Quads(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_QUADS);
	glColor3f(0.5,0,1); 
	glVertex2f(0.3, 0.3);
    glVertex2f(0.9, 0.3);
    glVertex2f(0.9, 0.9);
    glVertex2f(0.3, 0.9);
    glEnd();
    glFlush();
}

void QuadStrip(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_QUAD_STRIP);
    glColor3f(0.753, 0.847, 0.686);
	glVertex2f(-0.5, 0.6);
	glVertex2f(-0.2, 0.6);
	glVertex2f(-0.4, 0.5);
	glVertex2f(-0.1, 0.5);
	glVertex2f(-0.4, 0.4);
	glVertex2f(-0.1, 0.4);
	glVertex2f(-0.4, 0.3);
	glVertex2f(-0.1, 0.3);
	glVertex2f(-0.5, 0.2);
	glVertex2f(-0.2, 0.2);
	glVertex2f(-0.8, 0.3);
	glVertex2f(-0.5, 0.3);
	glVertex2f(-0.8, 0.9); 
	glVertex2f(-0.5, 0.9);
    glEnd();
    glFlush();
}

void QuadsSusun(void){
	glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.2, 0.3);
	glVertex2f(-0.1, 0.3);
	glVertex2f(-0.1, 0.4);
	glVertex2f(-0.2, 0.4);
    glEnd();
	
	glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0); 
    glVertex2f(-0.1, 0.3);
	glVertex2f(0.0, 0.3);
	glVertex2f(0.0, 0.4);
	glVertex2f(-0.1, 0.4);
    glEnd();
	
	glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0); 
    glVertex2f(0.0, 0.3);
	glVertex2f(0.1, 0.3);
	glVertex2f(0.1, 0.4);
	glVertex2f(0.0, 0.4);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0); 
    glVertex2f(0.1, 0.3);
	glVertex2f(0.2, 0.3);
	glVertex2f(0.2, 0.4);
	glVertex2f(0.1, 0.4);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0); 
    glVertex2f(0.2, 0.3);
	glVertex2f(0.3, 0.3);
	glVertex2f(0.3, 0.4);
	glVertex2f(0.2, 0.4);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0); 
    glVertex2f(0.3, 0.2);
	glVertex2f(0.4, 0.2);
	glVertex2f(0.4, 0.3);
	glVertex2f(0.3, 0.3);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0); 
    glVertex2f(0.4, 0.1);
	glVertex2f(0.5, 0.1);
	glVertex2f(0.5, 0.2);
	glVertex2f(0.4, 0.2);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0); 
    glVertex2f(0.4,0.0);
	glVertex2f(0.5, 0.0);
	glVertex2f(0.5, 0.1);
	glVertex2f(0.4, 0.1);
    glEnd(); 
    
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0); 
    glVertex2f(0.3, -0.1);
	glVertex2f(0.4, -0.1);
	glVertex2f(0.4, 0.0);
	glVertex2f(0.3, 0.0);
    glEnd();
	
	glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0); 
    glVertex2f(0.2, -0.1);
	glVertex2f(0.3, -0.1);
	glVertex2f(0.3, 0.0);
	glVertex2f(0.2, 0.0);
    glEnd();
	
	glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0); 
    glVertex2f(0.1, -0.1);
	glVertex2f(0.2, -0.1);
	glVertex2f(0.2, 0.0);
	glVertex2f(0.1, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0); 
    glVertex2f(0.0, -0.1);
	glVertex2f(0.1, -0.1);
	glVertex2f(0.1, 0.0);
	glVertex2f(0.0, 0.0);
    glEnd();
	
	glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0); 
    glVertex2f(-0.1, -0.1);
	glVertex2f(0.0, -0.1);
	glVertex2f(0.0, 0.0);
	glVertex2f(-0.1, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0); 
    glVertex2f(-0.2, -0.1);
	glVertex2f(-0.1, -0.1);
	glVertex2f(-0.1, 0.0);
	glVertex2f(-0.2, 0.0);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0); 
    glVertex2f(-0.3, -0.1);
	glVertex2f(-0.2, -0.1);
	glVertex2f(-0.2, 0.0);
	glVertex2f(-0.3, 0.0);
    glEnd();
	
	glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0); 
    glVertex2f(-0.4, 0.0);
	glVertex2f(-0.3, -0.0);
	glVertex2f(-0.3, 0.1);
	glVertex2f(-0.4, 0.1);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0); 
    glVertex2f(-0.4, 0.1);
	glVertex2f(-0.3, 0.1);
	glVertex2f(-0.3, 0.2);
	glVertex2f(-0.4, 0.2);
    glEnd();
	
	glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0); 
    glVertex2f(-0.3, 0.2);
	glVertex2f(-0.2, 0.2);
	glVertex2f(-0.2, 0.3);
	glVertex2f(-0.3, 0.3);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.0, 0.0); 
    glVertex2f(-0.1, 0.2);
	glVertex2f(0.0, 0.2);
	glVertex2f(0.0, 0.3);
	glVertex2f(-0.1, 0.3);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.0, 0.0); 
    glVertex2f(-0.2, 0.2);
	glVertex2f(-0.1, 0.2);
	glVertex2f(-0.1, 0.3);
	glVertex2f(-0.2, 0.3);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.0, 0.0); 
    glVertex2f(-0.3, 0.0);
	glVertex2f(-0.1, 0.0);
	glVertex2f(-0.1, 0.2);
	glVertex2f(-0.3, 0.2);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.0, 0.0); 
    glVertex2f(-0.1, 0.0);
	glVertex2f(0.0, 0.0);
	glVertex2f(0.0, 0.1);
	glVertex2f(-0.1, 0.1);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.0, 0.0); 
    glVertex2f(0.0, 0.0);
	glVertex2f(0.1, 0.0);
	glVertex2f(0.1, 0.1);
	glVertex2f(0.0, 0.1);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.0, 0.0); 
    glVertex2f(0.1, 0.0);
	glVertex2f(0.2, 0.0);
	glVertex2f(0.2, 0.1);
	glVertex2f(0.1, 0.1);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.0, 0.0); 
    glVertex2f(0.2, 0.0);
	glVertex2f(0.3, 0.0);
	glVertex2f(0.3, 0.1);
	glVertex2f(0.2, 0.1);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.7, 0.0, 0.0); 
    glVertex2f(0.3, 0.0);
	glVertex2f(0.4,0.0);
	glVertex2f(0.4, 0.1);
	glVertex2f(0.3, 0.1);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.0, 0.0); 
    glVertex2f(0.0, 0.1);
	glVertex2f(0.2, 0.1);
	glVertex2f(0.2, 0.3);
	glVertex2f(0.0, 0.3);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.0, 0.0); 
    glVertex2f(0.2, 0.2);
	glVertex2f(0.3, 0.2);
	glVertex2f(0.3, 0.3);
	glVertex2f(0.2, 0.3);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.0, 0.0); 
    glVertex2f(0.3, 0.1);
	glVertex2f(0.4, 0.1);
	glVertex2f(0.4, 0.2);
	glVertex2f(0.3, 0.2);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0); 
    glVertex2f(-0.2,-0.2);
	glVertex2f(-0.1,-0.2);
	glVertex2f(-0.1,-0.1);
	glVertex2f(-0.2,-0.1);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0); 
    glVertex2f(-0.2,-0.3);
	glVertex2f(-0.1,-0.3);
	glVertex2f(-0.1,-0.2);
	glVertex2f(-0.2,-0.2);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0); 
    glVertex2f(-0.2,-0.4);
	glVertex2f(-0.1,-0.4);
	glVertex2f(-0.1, -0.3);
	glVertex2f(-0.2,-0.3);
    glEnd();
	
	glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0); 
    glVertex2f(-0.1,-0.5);
	glVertex2f(0.0, -0.5);
	glVertex2f(0.0, -0.4);
	glVertex2f(-0.1,-0.4);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0); 
    glVertex2f(0.0,-0.5);
	glVertex2f(0.1, -0.5);
	glVertex2f(0.1, -0.4);
	glVertex2f(0.0,-0.4);
    glEnd(); 
    
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0); 
    glVertex2f(0.1,-0.5);
	glVertex2f(0.2, -0.5);
	glVertex2f(0.2, -0.4);
	glVertex2f(0.1,-0.4);
    glEnd(); 
	
	glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0); 
    glVertex2f(0.2,-0.4);
	glVertex2f(0.3, -0.4);
	glVertex2f(0.3, -0.3);
	glVertex2f(0.2,-0.3);
    glEnd(); 
    
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0); 
    glVertex2f(0.2,-0.3);
	glVertex2f(0.3, -0.3);
	glVertex2f(0.3, -0.2);
	glVertex2f(0.2,-0.2);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0); 
    glVertex2f(0.2,-0.2);
	glVertex2f(0.3, -0.2);
	glVertex2f(0.3, -0.1);
	glVertex2f(0.2,-0.1);
    glEnd();
	
	glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8); 
    glVertex2f(0.1, -0.2);
	glVertex2f(0.2, -0.2);
	glVertex2f(0.2, -0.1);
	glVertex2f(0.1, -0.1);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8); 
    glVertex2f(0.0, -0.2);
	glVertex2f(0.1, -0.2);
	glVertex2f(0.1, -0.1);
	glVertex2f(0.0, -0.1);
    glEnd();
	
	glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8); 
    glVertex2f(-0.1, -0.2);
	glVertex2f(0.0, -0.2);
	glVertex2f(0.0, -0.1);
	glVertex2f(-0.1, -0.1);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8); 
    glVertex2f(-0.1, -0.3);
	glVertex2f(0.0, -0.3);
	glVertex2f(0.0, -0.2);
	glVertex2f(-0.1, -0.2);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(0.8, 0.8, 0.8); 
    glVertex2f(-0.1, -0.4);
	glVertex2f(0.0, -0.4);
	glVertex2f(0.0, -0.3);
	glVertex2f(-0.1, -0.3);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0); 
    glVertex2f(0.0, -0.4);
	glVertex2f(0.2, -0.4);
	glVertex2f(0.2, -0.2);
	glVertex2f(0.0, -0.2);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0); 
    glVertex2f(-0.1,0.1);
	glVertex2f(0.0, 0.1);
	glVertex2f(0.0, 0.2);
	glVertex2f(-0.1,0.2);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0); 
    glVertex2f(0.2,0.1);
	glVertex2f(0.3, 0.1);
	glVertex2f(0.3, 0.2);
	glVertex2f(0.2,0.2);
    glEnd();
	
	glFlush();
}

 
int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Praktikum 1");
    glutDisplayFunc(QuadsSusun);
    glClearColor(0.984, 0.969, 0.843, 1.0);
    glutMainLoop();
    return 0;
}
