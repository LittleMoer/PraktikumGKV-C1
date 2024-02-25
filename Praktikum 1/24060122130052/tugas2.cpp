/***********************************/
/* Program   : tugas2.c */
/* Deskripsi : Bendera ga mirip-mirip amat */
/* NIM/Nama  : 24060122130052/Muhammad Reynaldi Akbar*/
/* Tanggal   : 25 Februari 2024*/
/***********************************/

#include <GL/glut.h>

/*Gambar Bender*/
void tugas2(){
	glClear(GL_COLOR_BUFFER_BIT);

//Bendera mirip nepal 

//  Quad Strip
	glPushMatrix();
    glTranslatef(-0.0f, -0.30f, 0.0f);
    glBegin(GL_QUAD_STRIP);
    
    glColor3f(0.03f, 0.01f, 0.45f);
    glVertex2f(-0.3f, -0.3f);
    
    glColor3f(0.03f, 0.01f, 0.45f);
    glVertex2f(-0.3f, 0.3f);
    
    glColor3f(0.03f, 0.01f, 0.45f);
    glVertex2f(0.3f, -0.3f);
    
    glColor3f(0.03f, 0.01f, 0.45f);
    glVertex2f(-0.1f, 0.3f);
    glEnd();
    glPopMatrix();
    
	glPushMatrix();
    glTranslatef(-0.0f, 0.30f, 0.0f);
    glBegin(GL_QUAD_STRIP);
    
    glColor3f(0.03f, 0.01f, 0.45f);
    glVertex2f(-0.3f, -0.3f);
    
    glColor3f(0.03f, 0.01f, 0.45f);
    glVertex2f(-0.3f, 0.3f);
    
    glColor3f(0.03f, 0.01f, 0.45f);
    glVertex2f(0.3f, -0.3f);
    
    glColor3f(0.03f, 0.01f, 0.45f);
    glVertex2f(-0.3f, 0.3f);
    glEnd();
    glPopMatrix();
    
//Bentuk Dalam
	glPushMatrix();
    glTranslatef(-0.0f, -0.30f, 0.0f);
    glBegin(GL_QUAD_STRIP);
    
    glColor3f(0.92f, 0.03f, 0.08f);
    glVertex2f(-0.28f, -0.27f);
    
    glColor3f(0.92f, 0.03f, 0.08f);
    glVertex2f(-0.28f, 0.27f);
    
    glColor3f(0.92f, 0.03f, 0.08f);
    glVertex2f(0.25f, -0.27f);
    
    glColor3f(0.92f, 0.03f, 0.08f);
    glVertex2f(-0.11f, 0.27f);
    glEnd();
    glPopMatrix();
    
	glPushMatrix();
    glTranslatef(-0.011f, 0.30f, 0.0f);
    glBegin(GL_QUAD_STRIP);
    
    glColor3f(0.92f, 0.03f, 0.08f);
    glVertex2f(-0.27f, -0.27f);
    
    glColor3f(0.92f, 0.03f, 0.08f);
    glVertex2f(-0.27f, 0.27f);
    
    glColor3f(0.92f, 0.03f, 0.08f);
    glVertex2f(0.25f, -0.27f);
    
    glColor3f(0.92f, 0.03f, 0.08f);
    glVertex2f(-0.27f, 0.26f);
    glEnd();
    glPopMatrix();
    
//  Quads
	glPushMatrix();
    glTranslatef(-0.19f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    
    glColor3f(0.92f, 0.03f, 0.08f);
    glVertex2f(-0.09f, -0.1f);
    
    glColor3f(0.92f, 0.03f, 0.08f);
    glVertex2f(-0.09f, 0.1f);  
    
    glColor3f(0.92f, 0.03f, 0.08f);
    glVertex2f(0.025f, 0.1f);
    
    glColor3f(0.92f, 0.03f, 0.08f);
    glVertex2f(0.12f, -0.1f);

    glEnd();
    glPopMatrix();

//  Garis Loop
	glPushMatrix();
	glTranslatef(-0.15f, 0.15f, 0.0f);
	glLineWidth(1.6f);
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.05f, 0.07f);
    glVertex2f(-0.0f, 0.09f);
    glVertex2f(0.05f, 0.07f);
	glVertex2f(0.07f, -0.0f);
    glVertex2f(0.05f, -0.07f);
    glVertex2f(-0.0f, -0.09f);
    glVertex2f(-0.05f, -0.07f);
    glVertex2f(-0.07f, -0.0f);
    glEnd();
    glPopMatrix();
    

//	Triangle Fan
	glPushMatrix();
	glTranslatef(-0.15f, 0.15f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.03f, 0.05f);
    glVertex2f(-0.0f, 0.07f);
    glVertex2f(0.03f, 0.05f);
	glVertex2f(0.05f, -0.0f);
    glVertex2f(0.03f, -0.05f);
    glVertex2f(-0.0f, -0.07f);
    glVertex2f(-0.03f, -0.05f);
    glVertex2f(-0.05f, -0.0f);
    glEnd();
    glPopMatrix();
    
//  Garis Loop
	glPushMatrix();
	glTranslatef(-0.15f, -0.35f, 0.0f);
	glLineWidth(1.6f);
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.08f, 0.1f);
    glVertex2f(-0.0f, 0.12f);
    glVertex2f(0.08f, 0.1f);
	glVertex2f(0.1f, -0.0f);
    glVertex2f(0.08f, -0.1f);
    glVertex2f(-0.0f, -0.12f);
    glVertex2f(-0.08f, -0.1f);
    glVertex2f(-0.1f, -0.0f);
    glEnd();
    glPopMatrix();
    
    
//	Triangle Fan
	glPushMatrix();
	glTranslatef(-0.15f, -0.35f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.06f, 0.08f);
    glVertex2f(-0.0f, 0.1f);
    glVertex2f(0.06f, 0.08f);
	glVertex2f(0.08f, -0.0f);
    glVertex2f(0.06f, -0.08f);
    glVertex2f(-0.0f, -0.1f);
    glVertex2f(-0.06f, -0.08f);
    glVertex2f(-0.08f, -0.0f);
    glEnd();
    glPopMatrix();
    
//	Garis Strip
	glPushMatrix();
	glTranslatef(-0.325f, 0.6f, 0.0f);
	glLineWidth(14.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.55f, 0.53f, 0.53f);
    glVertex2f(0.0f, 0.0f); 
    glVertex2f(0.0f, -0.7f);  
    glVertex2f(0.0f, -1.8f);
    glEnd();
    glPopMatrix();
    
//	Triangle Strip
	glPushMatrix();
    glTranslatef(-0.505f, 0.48f, 0.0f);
    glBegin(GL_TRIANGLE_STRIP);
	glColor3f(1.00f, 0.89f, 0.01f);
    glVertex2f(-0.17f, -0.115f);
    glVertex2f(0.155f, 0.115f); 
    glVertex2f(0.155f, -0.250f);
    glEnd();
    glPopMatrix();
    glFlush();
}


int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Tugas No.2");
    glutDisplayFunc(tugas2);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glutMainLoop();
	return 0;
}
