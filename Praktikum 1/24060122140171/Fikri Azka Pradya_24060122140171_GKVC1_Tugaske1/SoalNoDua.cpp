//#include <gl/glut.h>
//
//void Kota(void)
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	glLineWidth(3.0f);
//	
//	// Menggambar line strip (di depan)
//	glBegin(GL_LINE_STRIP);
//	glColor4f(0.0f, 0.0f, 0.0f, 0.0f); // garis 1
//	glVertex2f(-1.0f, -0.2f);
//	glVertex2f(2.0f, -0.2f);
//	glEnd();
//	
//	// Menggambar quad strip (di belakang)
//	glBegin(GL_QUAD_STRIP);
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex2f(-0.2f,-0.2f);
//	glVertex2f(0.2f,-0.2f);
//	glVertex2f(-0.40f,-1.0f);
//	glVertex2f(0.40f,-1.0f);
//	glEnd();
//	
//	// Menggambar line strip kuning (di depan quad strip)
//	glBegin(GL_LINE_STRIP);
//	glColor4f(1.0f, 1.0f, 0.0f, 1.0f); // garis 2 (warna kuning, tanpa transparansi)
//	glVertex2f(0.0f, -0.2f); // Koordinat y yang sama
//	glVertex2f(0.0f, -1.0f);
//	glEnd();
//	
//	glutSwapBuffers();
//
//	glBegin(GL_QUADS);
//	glColor3f(0.0f, 0.1f, 0.0f);
//    glVertex2f(-1.0f,-0.2f);
//    glVertex2f(-0.2f,-0.2f);
//    glVertex2f(-0.40f,-1.0f);
//    glVertex2f(-1.0f,-1.0f);
//    glEnd();
//    
//    glBegin(GL_QUADS);
//    glColor3f(0.0f, 0.1f, 0.0f);
//    glVertex2f(1.0f,-0.2f);
//    glVertex2f(0.2f,-0.2f);
//    glVertex2f(0.40f,-1.0f);
//    glVertex2f(1.0f,-1.0f);
//    glEnd();
//    
//    
//    glBegin(GL_TRIANGLE_FAN);
//    glColor3f(1.0f, 0.5f, 0.0f);
//    glVertex2f(0.0f, 0.5f);
//    glVertex2f(0.3f, 0.6f);
//    glVertex2f(0.2f, 0.9f);
//    glVertex2f(0.0f, 0.9f);
//    glVertex2f(-0.2f, 0.9f);
//    glVertex2f(-0.3f, 0.6f);
//    glEnd();
//    
//	glBegin(GL_TRIANGLE_STRIP); // Mulai menggambar triangle strip
//    glColor3f(0.2f, 0.2f, 0.2f); 
//	glVertex2f(-1.0f, -0.2f); 
//	glColor3f(0.2f, 0.2f, 0.2f); // Abu-abu
//	glVertex2f(-0.2f, -0.2f);
//	glColor3f(0.2f, 0.2f, 0.2f);
//	glVertex2f(-1.0f, 0.7f); 
//	glColor3f(0.75f, 0.75f, 0.75f); // Silver
//	glVertex2f(-0.2f, 0.7f);
//    glEnd();
//    
//    
//    glBegin(GL_TRIANGLE_STRIP); // Mulai menggambar triangle strip
//    glColor3f(0.2f, 0.2f, 0.2f); 
//	glVertex2f(1.0f, -0.2f); 
//	glColor3f(0.2f, 0.2f, 0.2f); // Abu-abu
//	glVertex2f(0.2f, -0.2f);
//	glColor3f(0.2f, 0.2f, 0.2f);
//	glVertex2f(1.0f, 0.7f); 
//	glColor3f(0.75f, 0.75f, 0.75f); // Silver
//	glVertex2f(0.2f, 0.7f);
//    glEnd();
//    
//    glBegin(GL_TRIANGLE_STRIP); // Mulai menggambar triangle strip
//    glColor3f(0.2f, 0.2f, 0.2f); 
//	glVertex2f(0.2f, -0.2f); 
//	glColor3f(0.2f, 0.2f, 0.2f); // Abu-abu
//	glVertex2f(0.01f, -0.2f);
//	glColor3f(0.2f, 0.2f, 0.2f);
//	glVertex2f(0.2f, 0.5f); 
//	glColor3f(0.75f, 0.75f, 0.75f); // Silver
//	glVertex2f(0.01f, 0.5f);
//    glEnd();
//    
//    glBegin(GL_TRIANGLE_STRIP); // Mulai menggambar triangle strip
//    glColor3f(0.2f, 0.2f, 0.2f); 
//	glVertex2f(-0.2f, -0.2f); 
//	glColor3f(0.2f, 0.2f, 0.2f); // Abu-abu
//	glVertex2f(-0.01f, -0.2f);
//	glColor3f(0.2f, 0.2f, 0.2f);
//	glVertex2f(-0.2f, 0.5f); 
//	glColor3f(0.75f, 0.75f, 0.75f); // Silver
//	glVertex2f(-0.01f, 0.5f);
//    glEnd();
//    
//    glBegin(GL_LINE_LOOP);
//    glVertex2f(-0.3f, 0.5f);
//    glVertex2f(-0.5f, 0.5f);
//    glVertex2f(-0.5f, 0.3f);
//    glVertex2f(-0.3f, 0.3f);
//    glEnd();
//    
//    glBegin(GL_LINE_LOOP);
//    glVertex2f(0.3f, 0.5f);
//    glVertex2f(0.5f, 0.5f);
//    glVertex2f(0.5f, 0.3f);
//    glVertex2f(0.3f, 0.3f);
//    glEnd();
//    glutSwapBuffers();
//    
//    
//	glFlush();
//}
//
//int main(int argc, char *argv[]) {
//    glutInit(&argc, argv);
//    glutInitWindowSize(640, 480);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
//    glutCreateWindow("Pemandangan ke Kota");
//    glutDisplayFunc(Kota);
//    glClearColor(0.53f, 0.81f, 0.98f, 1.0f);
//    glutMainLoop();
//    return 0;
//}
