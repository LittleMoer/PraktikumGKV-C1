// Nama		: Naufal Rizki Saputra
// NIM		: 24060122120011
// Membuat program yang memanfaatkan fungsi GL_LINE_STRIP, GL_LINE_LOOP, GL_TRIANGLES_FAN, GL_TRIANGLE_STRIP, GL_QUADS, dan GL_QUAD_STRIP

#include <gl/glut.h>

void ComboWomboJumbo(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(5);

    // GL_LINE_STRIP
    glBegin(GL_LINE_STRIP);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.9, -0.4);
    glVertex2f(-0.6, -0.3);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-0.6, -0.3);
    glVertex2f(-0.4, -0.9);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(-0.4, -0.9);
    glVertex2f(-0.9, -0.4);
    glEnd();
    
    // GL_LINE_LOOP
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-0.3f, -0.6f);
    glVertex2f(0.1f, -0.2f);
    glVertex2f(0.3f, -0.9f);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.11f, 0.83f, 0.90f);
    glVertex2f(-0.3f, -0.3f);
    glVertex2f(0.1f, 0.1f);
    glVertex2f(0.3f, -0.6f);
    glEnd();
    
    // GL_TRIANGLES_FAN
    glBegin(GL_TRIANGLES);
    glColor3f(0.67f,0.21f,0.53f);
    glVertex2f(0.4, -0.4);
    glVertex2f(0.9, -0.5);
    glVertex2f(0.75, -0.9);
    glEnd();
    
    // GL_TRIANGLE_STRIP
    glBegin(GL_TRIANGLE_STRIP);
    glColor3f(0.09, 0.83, 0.56);
    glVertex2f(-0.9, 0.4);
    glVertex2f(-0.7, 0.8);
    glVertex2f(-0.5, 0.4);
    glVertex2f(-0.3, 0.8);
    
    glColor3f(1.0, 1.0, 0.0);
    glVertex2f(-0.8, 0.3);
    glVertex2f(-0.6, 0.7);
    glVertex2f(-0.4, 0.3);
    glVertex2f(-0.2, 0.7);
    glEnd();

	// GL_QUADS
    glBegin(GL_QUADS);
    glColor3f(0.7,0,0);
    glVertex2f(-0.15, 0.65); 
    glVertex2f(0.12, 0.85); 
    glVertex2f(0.35, 0.65); 
    glVertex2f(0.12, 0.25);  
    
    glColor3f(1,1,1);
    glVertex2f(-0.08, 0.65); 
    glVertex2f(0.11, 0.79); 
    glVertex2f(0.29, 0.65);
    glVertex2f(0.12, 0.35); 
    glEnd();
    
    // GL_QUAD_STRIP
    glBegin(GL_QUAD_STRIP);
    glColor3f(0.0f, 0.5f, 0.5f);
    glVertex2f(0.4, 0.3);     
    glVertex2f(0.6, 0.7);     
    glVertex2f(0.9, 0.3);     
    glVertex2f(0.8, 0.7);    
	
    glColor3f(0.0f, 0.5f, 1.0f);
	glVertex2f(0.4, 0.1);     
    glVertex2f(0.6, 0.5);     
    glVertex2f(0.9, 0.1);     
    glVertex2f(0.8, 0.5);   
    glEnd();
    
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("Combo Wombo Jumbo");
    glutDisplayFunc(ComboWomboJumbo);
    glClearColor(0.95f, 0.95f, 0.9f, 1.0f);
    glutMainLoop();
    return 0;
}

