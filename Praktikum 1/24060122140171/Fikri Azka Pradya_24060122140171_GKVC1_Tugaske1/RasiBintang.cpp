//#include <gl/glut.h>
//
//void RasiBintangArah(void) {
//    glPointSize(5.0f);
//    glClear(GL_COLOR_BUFFER_BIT);
//
//    // Menggambar Rasi Bintang Ursa Mayor atau Biduk (kanan atas)
//    glBegin(GL_POINTS);
//    glColor3f(0.5f, 1.0f, 1.0f); // titik 1
//    glVertex3f(0.20f, 0.50f, 0.0f);
//    glColor3f(0.5f, 1.0f, 1.0f); // titik 2
//    glVertex3f(0.40f, 0.60f, 0.0f);
//    glColor3f(0.5f, 1.0f, 1.0f); // titik 3
//    glVertex3f(0.50f,0.52f,0.0f);
//    glColor3f(0.5f, 1.0f, 1.0f); // titik 4
//    glVertex3f(0.55f, 0.49f, 0.0f);
//    glColor3f(0.5f, 1.0f, 1.0f); // titik 5
//    glVertex3f(0.80f, 0.61f, 0.0f);
//    glColor3f(0.5f, 1.0f, 1.0f); // titik 6
//    glVertex3f(0.60f, 0.30f, 0.0f); 
//    glColor3f(0.5f, 1.0f, 1.0f); // titik 7
//    glVertex3f(0.78f, 0.35f, 0.0f);
//    glEnd();
//
//    // Menggambar garis Rasi Bintang Ursa Mayor atau Biduk (kiri atas)
//    glBegin(GL_LINES);
//    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // garis 1
//    glVertex3f(0.20f, 0.50f, 0.0f);
//    glVertex3f(0.40f, 0.60f, 0.0f);
//    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // garis 2
//    glVertex3f(0.40f, 0.60f, 0.0f);
//    glVertex3f(0.50f, 0.52f, 0.0f);
//    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // garis 3
//    glVertex3f(0.50f, 0.52f, 0.0f);
//    glVertex3f(0.55f, 0.49f, 0.0f);
//    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // garis 4
//    glVertex3f(0.55f, 0.49f, 0.0f);
//    glVertex3f(0.80f, 0.61f, 0.0f);
//    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // garis 5
//    glVertex3f(0.80f, 0.61f, 0.0f);
//    glVertex3f(0.78f, 0.35f, 0.0f);
//    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // garis 6
//    glVertex3f(0.55f, 0.49f, 0.0f); 
//    glVertex3f(0.60f, 0.30f, 0.0f);
//    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // garis 7
//    glVertex3f(0.78f, 0.35f, 0.0f);
//    glVertex3f(0.60f, 0.30f, 0.0f);
//    glEnd();
//    
//    // Menggambar titik bintang Orion
//    glBegin(GL_POINTS);
//    glColor3f(0.5f, 1.0f, 1.0f); // titik 1
//    glVertex3f(-0.90f, 0.90f,0.0f);
//    glColor3f(0.5f, 1.0f, 1.0f); // titik 2
//    glVertex3f(-0.87f, 0.65f, 0.0f);
//    glColor3f(0.5f, 1.0f, 1.0f); // titik 3
//    glVertex3f(-0.83f, 0.87f, 0.0f);
//    glColor3f(0.5f, 1.0f, 1.0f); // titik 4
//    glVertex3f(-0.70f, 0.72f, 0.0f);
//    glColor3f(0.5f, 1.0f, 1.0f); // titik 5
//    glVertex3f(-0.61, 0.63f, 0.0f);
//    glColor3f(0.5f, 1.0f, 1.0f); // titik 6
//    glVertex3f(-0.64f, 0.40f, 0.0f); 
//    glColor3f(0.5f, 1.0f, 1.0f); // titik 7
//    glVertex3f(-0.69f, 0.36f, 0.0f);
//    glColor3f(0.5f, 1.0f, 1.0f); // titik 8
//    glVertex3f(-0.80f, 0.30f, 0.0f);
//    glColor3f(0.5f, 1.0f, 1.0f); // titik 9
//    glVertex3f(-0.85, 0.10, 0.0f);
//    glColor3f(0.5f, 1.0f, 1.0f); // titik 10
//    glVertex3f(-0.58f, 0.30f, 0.0f);
//    glColor3f(0.5f, 1.0f, 1.0f); // titik 11
//    glVertex3f(-0.55f, 0.13f, 0.0f);
//    glColor3f(0.5f, 1.0f, 1.0f); // titik 12
//    glVertex3f(-0.37f, 0.70f, 0.0f);
//    glColor3f(0.5f, 1.0f, 1.0f); // titik 13
//    glVertex3f(-0.40, 0.79f, 0.0f);
//    glColor3f(0.5f, 1.0f, 1.0f); // titik 14
//    glVertex3f(-0.49f, 0.95f, 0.0f);
//    glColor3f(0.5f, 1.0f, 1.0f); // titik 15
//    glVertex3f(-0.38f, 0.62f, 0.0f);
//    glColor3f(0.5f, 1.0f, 1.0f); // titik 16
//    glVertex3f(-0.42f, 0.48f, 0.0f);
//    
//    glEnd();
//    
//    // Menggambar garis bintang Orian
//    glBegin(GL_LINES);
//    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // garis 1
//    glVertex3f(-0.90f, 0.90f,0.0f);
//    glVertex3f(-0.87f, 0.65f, 0.0f);
//    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // garis 2
//    glVertex3f(-0.83f, 0.87f, 0.0f);
//    glVertex3f(-0.87f, 0.65f, 0.0f);
//    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // garis 3
//    glVertex3f(-0.87f, 0.65f, 0.0f);
//    glVertex3f(-0.70f, 0.72f, 0.0f);
//    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // garis 4
//    glVertex3f(-0.70f, 0.72f, 0.0f);
//    glVertex3f(-0.61, 0.63f, 0.0f);
//    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // garis 5
//    glVertex3f(-0.61, 0.63f, 0.0f);
//    glVertex3f(-0.64f, 0.40f, 0.0f);
//    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // garis 7
//    glVertex3f(-0.64f, 0.40f, 0.0f);
//    glVertex3f(-0.69f, 0.36f, 0.0f);
//    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // garis 8
//    glVertex3f(-0.69f, 0.36f, 0.0f);
//    glVertex3f(-0.80f, 0.30f, 0.0f);
//    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // garis 9
//    glVertex3f(-0.87f, 0.65f, 0.0f);
//    glVertex3f(-0.80f, 0.30f, 0.0f);
//    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // garis 10
//    glVertex3f(-0.80f, 0.30f, 0.0f);
//    glVertex3f(-0.85, 0.10, 0.0f);
//    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // garis 11
//    glVertex3f(-0.64f, 0.40f, 0.0f); 
//    glVertex3f(-0.58f, 0.30f, 0.0f);
//    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // garis 12
//    glVertex3f(-0.58f, 0.30f, 0.0f);
//    glVertex3f(-0.55f, 0.13f, 0.0f);
//    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // garis 13
//    glVertex3f(-0.61, 0.63f, 0.0f);
//    glVertex3f(-0.37f, 0.70f, 0.0f);
//    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // garis 12
//    glVertex3f(-0.37f, 0.70f, 0.0f);
//    glVertex3f(-0.40, 0.79f, 0.0f);
//    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // garis 14
//    glVertex3f(-0.37f, 0.70f, 0.0f);
//    glVertex3f(-0.38f, 0.62f, 0.0f);
//    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // garis 15
//    glVertex3f(-0.38f, 0.62f, 0.0f);
//    glVertex3f(-0.42f, 0.48f, 0.0f);
//    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // garis 16
//    glVertex3f(-0.40, 0.79f, 0.0f);
//    glVertex3f(-0.49f, 0.95f, 0.0f);
//    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // garis 17
//    glVertex3f(-0.85, 0.10, 0.0f);
//    glVertex3f(-0.55f, 0.13f, 0.0f);
//    glEnd();
//    
//    // Rasi Bintang Scorpio atau kalajengking (kiri bawah)
//    glBegin(GL_POINTS);
//    glColor3f(0.5f, 1.0f, 1.0f); // titik 1
//    glVertex3f(-0.80f, -0.40f, 0.0f);
//    glColor3f(0.5f, 1.0f, 1.0f); // titik 2
//    glVertex3f(-0.6f, -0.50f, 0.0f);
//    glColor3f(0.5f, 1.0f, 1.0f); // titik 3
//    glVertex3f(-0.70f, -0.32f, 0.0f);
//    glColor3f(0.5f, 1.0f, 1.0f); // titik 4
//    glVertex3f(-0.61f, -0.24f, 0.0f);
//    glColor3f(0.5f, 1.0f, 1.0f); // titik 5
//    glVertex3f(-0.52, -0.53f,0.0f);
//    glColor3f(0.5f, 1.0f, 1.0f); // titik 6
//    glVertex3f(-0.35f, -0.57f, 0.0f);
//    glColor3f(0.5f, 1.0f, 1.0f); // titik 7
//    glVertex3f(-0.30f, -0.54f, 0.0f);
//    glColor3f(0.5f, 1.0f, 1.0f); // titik 8
//    glVertex3f(-0.26f, -0.75f, 0.0f);
//    glColor3f(0.5f, 1.0f, 1.0f); // titik 9
//    glVertex3f(-0.25, -0.80f, 0.0f);
//    glColor3f(0.5f, 1.0f, 1.0f); // titik 10
//    glVertex3f(-0.16f, -0.78f, 0.0f);
//    glColor3f(0.5f, 1.0f, 1.0f); // titik 11
//    glVertex3f(-0.12f, -0.76f, 0.0f);
//    glColor3f(0.5f, 1.0f, 1.0f); // titik 12
//    glVertex3f(-0.07, -0.66f, 0.0f);
//    glColor3f(0.5f, 1.0f, 1.0f); // titik 13
//    glVertex3f(-0.10, -0.50f, 0.0f);
//    glColor3f(0.5f, 1.0f, 1.0f); // titik 14
//    glVertex3f(-0.19f, -0.33f, 0.0f);
//    
//    glEnd();
//    
//    glBegin(GL_LINES);
//    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // garis 1
//    glVertex3f(-0.80f, -0.40f, 0.0f);
//    glVertex3f(-0.6f, -0.50f, 0.0f);
//    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // garis 2
//    glVertex3f(-0.6f, -0.50f, 0.0f);
//    glVertex3f(-0.70f, -0.32f, 0.0f);
//    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // garis 3
//    glVertex3f(-0.6f, -0.50f, 0.0f);
//    glVertex3f(-0.61f, -0.24f, 0.0f);
//    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // garis 4
//    glVertex3f(-0.6f, -0.50f, 0.0f);
//    glVertex3f(-0.52, -0.53f,0.0f);
//    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // garis 5
//    glVertex3f(-0.52, -0.53f,0.0f);
//    glVertex3f(-0.35f, -0.57f, 0.0f);
//    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // garis 6
//    glVertex3f(-0.35f, -0.57f, 0.0f);
//    glVertex3f(-0.30f, -0.54f, 0.0f);
//    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // garis 7
//    glVertex3f(-0.30f, -0.54f, 0.0f);
//    glVertex3f(-0.26f, -0.75f, 0.0f);
//    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // garis 8
//    glVertex3f(-0.26f, -0.75f, 0.0f);
//    glVertex3f(-0.25, -0.80f, 0.0f);
//    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // garis 9
//    glVertex3f(-0.25, -0.80f, 0.0f);
//    glVertex3f(-0.16f, -0.78f, 0.0f);
//    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // garis 10
//    glVertex3f(-0.16f, -0.78f, 0.0f);
//    glVertex3f(-0.12f, -0.76f, 0.0f);
//    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // garis 11
//    glVertex3f(-0.12f, -0.76f, 0.0f);
//    glVertex3f(-0.07, -0.66f, 0.0f);
//    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // garis 12
//    glVertex3f(-0.07, -0.66f, 0.0f);
//    glVertex3f(-0.10, -0.50f, 0.0f);
//    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // garis 13
//    glVertex3f(-0.10, -0.50f, 0.0f);
//    glVertex3f(-0.19f, -0.33f, 0.0f);
//    glEnd();
//    
//    // Rasi Bintang Crux (kanan bawah)
//    glBegin(GL_POINTS);
//    glColor3f(0.5f, 1.0f, 1.0f); // titik 1
//    glVertex3f(0.40f, -0.20f, 0.0f);
//    glColor3f(0.5f, 1.0f, 1.0f); // titik 2
//    glVertex3f(0.80f, -0.90f, 0.0f);
//    glColor3f(0.5f, 1.0f, 1.0f); // titik 3
//    glVertex3f(0.30f, -0.60f, 0.0f);
//    glColor3f(0.5f, 1.0f, 1.0f); // titik 4
//    glVertex3f(0.80f, -0.30f, 0.0f);
//    glEnd();
//    
//    glBegin(GL_LINES);
//    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // garis 1
//    glVertex3f(0.40f, -0.20f, 0.0f);
//    glVertex3f(0.80f, -0.90f, 0.0f);
//    glColor4f(1.0f, 1.0f, 1.0f, 0.0f); // garis 1
//    glVertex3f(0.30f, -0.60f, 0.0f);
//    glVertex3f(0.80f, -0.30f, 0.0f);
//    glEnd();
//    glFlush();
//}
//
//int main(int argc, char *argv[]) {
//    glutInit(&argc, argv);
//    glutInitWindowSize(640, 480);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
//    glutCreateWindow("Rasi Bintang Arah");
//    glutDisplayFunc(RasiBintangArah);
//    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
//    glutMainLoop();
//    return 0;
//}

