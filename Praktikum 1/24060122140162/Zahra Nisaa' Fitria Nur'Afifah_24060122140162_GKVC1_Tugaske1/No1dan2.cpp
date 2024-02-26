////Nama: Zahra Nisaa' Fitria Nur'Afifah
////NIM:24060122140162
////Deskripsi:1. Selain membuat titik menggunakan GL_POINT, garis menggunakan GL_LINES, 
////			2.buatlah program yang memanfaatkan fungsi GL_LINE_STRIP, GL_LINE_LOOP, GL_TRIANGLE_FAN, GL_TRIANGLE_STRIP, GL_QUADS, dan GL_QUAD_STRIP
//
//#include <GL/glut.h>
//void display()
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	
//	//GL_LINE_STRIP
//	glColor3f(0.0, 1.0, 1.0);// untuk pemberian warna cyan pada objek
//    glBegin(GL_LINE_STRIP);//Menggambar objek
//    glVertex2f(-0.8, -0.8); // Titik Awal
//    glVertex2f(-0.6, -0.6);
//    glVertex2f(-0.4, -0.8); 
//    glVertex2f(-0.2, -0.6);
//    glVertex2f(0.0, -0.8);
//    glVertex2f(0.2, -0.6);
//    glVertex2f(0.4, -0.8);
//    glVertex2f(0.6, -0.6);
//    glVertex2f(0.8, -0.8); // Titik Akhir
//    glEnd();
//    
//    //GL_LINE_LOOP
//    glColor3f(1.0, 0.0, 1.0);// untuk pemberian warna magenta objek
//    glBegin(GL_LINE_LOOP);//Menggambar objek
//    glVertex2f(0.0, 0.2);   // Titik atas
//    glVertex2f(-0.4, 0.0);  // Titik kiri
//    glVertex2f(0.0, -0.2); // Titik bawah
//    glVertex2f(0.4, 0.0);   // Titik kanan
//    glEnd();
//    
//    // GL_TRIANGLE_FAN
//    glColor3f(0.0, 0.0, 1.0); // Warna biru
//    glBegin(GL_TRIANGLE_FAN);
//   	glVertex2f(-0.8, 0.8);   // Titik pusat (pojok atas)
//    glVertex2f(-0.6, 0.6);   // Titik kiri
//    glVertex2f(-0.4, 0.8);   // Titik atas
//    glVertex2f(-0.2, 0.6);   // Titik kanan bawah
//    glVertex2f(0.0, 0.8);    // Titik atas (menutup segitiga)
//    glEnd();
//
//	// GL_TRIANGLE_STRIP
//	glColor3f(0.0,1.0,0.0);//kode warna hijau
//	glBegin(GL_TRIANGLE_STRIP);//objek
//	glVertex2f(0.5, 0.5);    // Titik atas (kanan atas)
//    glVertex2f(0.625, 0.75); // Titik kanan bawah
//    glVertex2f(0.75, 0.5);   // Titik kiri atas
//    glVertex2f(0.875, 0.75); // Titik kanan bawah
//    glVertex2f(1.0, 0.5);    // Titik kiri atas
//	glEnd();
//	
//	//GL_QUADS
//	glColor3f(1.0, 1.0, 0.0); // Warna kuning
//    glBegin(GL_QUADS);
//    glVertex2f(-0.6, -0.5);  // Titik kiri bawah
//    glVertex2f(-0.5, -0.5);   // Titik kanan bawah
//    glVertex2f(-0.5, 0.5);    // Titik kanan atas
//    glVertex2f(-0.6, 0.5);   // Titik kiri atas
//    glEnd();
//    
//    
//    // GL_QUAD_STRIP
//    glColor3f(1.0, 0.0, 0.0); // Warna merah
//    glBegin(GL_QUAD_STRIP);
//    glVertex2f(0.7, -0.6);
//    glVertex2f(0.8, -0.7);
//    glVertex2f(0.9, -0.6);
//    glVertex2f(0.9, -0.3);
//    glVertex2f(0.8, -0.6);
//    glVertex2f(0.7, -0.3);
//    glEnd();
//    
//    glFlush();
//}
//
//int main(int argc, char** argv) {
//    glutInit(&argc, argv);
//    glutCreateWindow("Tugas No 1 dan 2");
//    glutDisplayFunc(display);
//    glutMainLoop();
//    return 0;
//}
//

