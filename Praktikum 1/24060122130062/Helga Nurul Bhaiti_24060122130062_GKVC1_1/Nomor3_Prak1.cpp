//#include <GL/glut.h>
//
//void SegiEmpat(void) {
//    glClear(GL_COLOR_BUFFER_BIT);
//    
//    //Kepala
//    glColor3f(1.0f, 0.0f, 0.0f);
//    glRectf(-0.1, 0.6, 0.16, 0.3);
//    glColor3f(0.0f, 0.0f, 1.0f);
//    glRectf(-0.13, 0.6, -0.1, 0.33);
//    glColor3f(0.0f, 0.0f, 1.0f);
//    glRectf(0.16, 0.6, 0.19, 0.33);
//    glColor3f(0.0f, 0.0f, 1.0f);
//    glRectf(-0.1, 0.695, 0.16, 0.605);
//    glColor3f(0.0f, 1.0f, 1.0f);
//    glRectf(-0.005, 0.695, 0.065, 0.721);
//    
//    //Badan
//    glColor3f(0.0f, 0.0f, 1.0f);
//    glRectf(-0.205, -0.3, 0.265, 0.3);
//    glColor3f(1.0f, 0.5f, 0.0f);
//    glRectf(-0.15, 0.2, -0.05, 0.1);
//    
//    //Tangan
//    glColor3f(0.0f, 1.0f, 1.0f); // Lengan Kiri
//    glRectf(-0.23, 0.15, -0.205, 0.27);
//    glColor3f(0.0f, 1.0f, 1.0f); //Lengan Kanan
//    glRectf(0.265, 0.15, 0.29, 0.27);
//    glColor3f(1.0f, 1.0f, 1.0f); //Lengan lanjutan Kiri
//    glRectf(-0.3, 0.1, -0.23, 0.3);
//    glColor3f(1.0f, 1.0f, 1.0f); //Lengan Lanjutan Kanan
//    glRectf(0.36, 0.1, 0.29, 0.3);
//    
//    //Kaki
//    glColor3f(0.0f, 0.0f, 0.5f); //Kiri
//    glRectf(-0.105, -0.8, 0.005, -0.3);
//    glColor3f(0.0f, 0.0f, 0.5f); //Kanan
//    glRectf(0.075, -0.8, 0.175, -0.3);
//    
//    //Sepatu
//    glColor3f(1.0f, 0.0f, 0.0f); //Kiri
//    glRectf(-0.11, -0.8, 0.01, -0.7);
//    glColor3f(1.0f, 0.0f, 0.0f); //Kanan
//    glRectf(0.069, -0.8, 0.185, -0.7);
//    glFlush();
//}
//
//int main(int argc, char* argv[]) {
//    glutInit(&argc, argv);
//    glutInitWindowSize(960, 640);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
//    glutCreateWindow("Segi Empat");
//    glutDisplayFunc(SegiEmpat);
//    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
//    glutMainLoop();
//    return 0;
//}
