//Nama: Zahra Nisaa' Fitria Nur'Afifah
//NIM:24060122140162
//Deskripsi:3. Buat Gambar Persegi bertingkat dari objek primitif sekreatif mungkin. (minimal 5 persegi)
#include <GL/glut.h>


void Rumput(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    
    glColor3f(1.0, 1.0, 0.0); // Warna kuning
    glBegin(GL_QUADS);
    glRectf(-0.6, -0.5);  
    glRectf(-0.5, -0.5);   
    glRectf(-0.5, 0.5);    
    glRectf(-0.6, 0.5);   
    
    
    
    
    glEnd();
    
    
    
    
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Rumput");
    glutDisplayFunc(Rumput);
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;

}
//Belum selesai
