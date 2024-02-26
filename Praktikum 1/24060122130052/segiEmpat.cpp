/***********************************/
/* Program   : tugas3.c */
/* Deskripsi : Piramida mesir */
/* NIM/Nama  : 24060122130052/Muhammad Reynaldi Akbar*/
/* Tanggal   : 25 Februari 2024*/
/***********************************/

#include <GL/glut.h>

void SegiEmpat(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    
    glPushMatrix();
    glTranslatef(-0.0f, -0.30f, 1.0f);
    glColor3f(0.0f, 1.0f, 0.0f);
    glRectf(-0.18, -0.18, 0.18, 0.18);
    glPopMatrix();

    
    glPushMatrix(); 
    glTranslatef(-0.370f, -0.30f, 0.3f);
    glColor3f(1.0f, 0.0f, 0.0f);
    glRectf(-0.18, 0.18, 0.18, -0.18);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-0.185f, 0.07f, 1.0f);
    glColor3f(0.0f, 1.0f, 0.0f);
    glRectf(-0.18, -0.18, 0.18, 0.18);
    glPopMatrix();

    
    glPushMatrix(); 
    glTranslatef(0.370f, -0.30f, 0.3f);
    glColor3f(1.0f, 0.0f, 0.0f);
    glRectf(-0.18, 0.18, 0.18, -0.18);
    glPopMatrix();
	
    glPushMatrix();
    glTranslatef(0.185f, 0.07f, 1.0f);
    glColor3f(0.0f, 1.0f, 0.0f);
    glRectf(-0.18, -0.18, 0.18, 0.18);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0.0f, 0.44f, 1.0f);
    glColor3f(0.0f, 1.0f, 0.0f);
    glRectf(-0.18, -0.18, 0.18, 0.18);
    glPopMatrix();

    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Segi Empat");
    glutDisplayFunc(SegiEmpat);
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
    glutMainLoop();
	return 0;
}
