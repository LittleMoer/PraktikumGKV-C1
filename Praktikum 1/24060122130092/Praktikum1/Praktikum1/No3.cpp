/* Nama : Sausan Berliana Arrizqi
   NIM  : 24060122130092
   Lab  : C1 GKV */

#include <GLUT/GLUT.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);

        glColor3f(0.0, 0.0, 0.0); //Hitam
        glVertex2f(0.0, 0.7);
        glVertex2f(0.4, 0.7);
        glVertex2f(0.4, 0.6);
        glVertex2f(0.0, 0.6);
        
        glVertex2f(0.4, 0.6);
        glVertex2f(0.5, 0.6);
        glVertex2f(0.5, 0.5);
        glVertex2f(0.4, 0.5);
    
        glVertex2f(0.5, 0.5);
        glVertex2f(0.6, 0.5);
        glVertex2f(0.6, 0.3);
        glVertex2f(0.5, 0.3);
        
        glVertex2f(0.6, 0.4);
        glVertex2f(0.8, 0.4);
        glVertex2f(0.8, 0.3);
        glVertex2f(0.6, 0.3);
    
        glVertex2f(0.7, 0.3);
        glVertex2f(0.8, 0.3);
        glVertex2f(0.8, 0.1);
        glVertex2f(0.7, 0.1);

        glVertex2f(0.6, 0.2);
        glVertex2f(0.7, 0.2);
        glVertex2f(0.7, 0.0);
        glVertex2f(0.6, 0.0);
        
        glVertex2f(0.4, 0.1);
        glVertex2f(0.6, 0.1);
        glVertex2f(0.6, 0.0);
        glVertex2f(0.4, 0.0);
    
        glVertex2f(0.4, 0.0);
        glVertex2f(0.5, 0.0);
        glVertex2f(0.5, -0.2);
        glVertex2f(0.4, -0.2);
        
        glVertex2f(0.5, -0.2);
        glVertex2f(0.6, -0.2);
        glVertex2f(0.6, -0.5);
        glVertex2f(0.5, -0.5);

        glVertex2f(0.4, -0.5);
        glVertex2f(0.5, -0.5);
        glVertex2f(0.5, -0.6);
        glVertex2f(0.4, -0.6);
        
        glVertex2f(0.2, -0.6);
        glVertex2f(0.4, -0.6);
        glVertex2f(0.4, -0.7);
        glVertex2f(0.2, -0.7);

        glVertex2f(-0.3, -0.7);
        glVertex2f(0.3, -0.7);
        glVertex2f(0.3, -0.8);
        glVertex2f(-0.3, -0.8);
        
        glVertex2f(-0.5, -0.6);
        glVertex2f(-0.3, -0.6);
        glVertex2f(-0.3, -0.7);
        glVertex2f(-0.5, -0.7);
    
        glVertex2f(-0.6, -0.5);
        glVertex2f(-0.5, -0.5);
        glVertex2f(-0.5, -0.6);
        glVertex2f(-0.6, -0.6);
        
        glVertex2f(-0.6, -0.4);
        glVertex2f(-0.5, -0.4);
        glVertex2f(-0.5, -0.5);
        glVertex2f(-0.6, -0.5);

        glVertex2f(-0.7, 0.1);
        glVertex2f(-0.6, 0.1);
        glVertex2f(-0.6, -0.4);
        glVertex2f(-0.7, -0.4);
        
        glVertex2f(-0.6, 0.1);
        glVertex2f(-0.5, 0.1);
        glVertex2f(-0.5, 0.0);
        glVertex2f(-0.6, 0.0);

        glVertex2f(-0.5, 0.0);
        glVertex2f(-0.3, 0.0);
        glVertex2f(-0.3, -0.1);
        glVertex2f(-0.5, -0.1);
        
        glVertex2f(-0.5, -0.5);
        glVertex2f(-0.4, -0.5);
        glVertex2f(-0.4, -0.6);
        glVertex2f(-0.5, -0.6);

        glVertex2f(-0.3, -0.1);
        glVertex2f(0.0, -0.1);
        glVertex2f(0.0, -0.2);
        glVertex2f(-0.3, -0.2);
    
        glVertex2f(0.0, 0.1);
        glVertex2f(0.1, 0.1);
        glVertex2f(0.1, -0.1);
        glVertex2f(0.0, -0.1);

        glVertex2f(-0.1, 0.2);
        glVertex2f(0.0, 0.2);
        glVertex2f(0.0, 0.0);
        glVertex2f(-0.1, 0.0);
    
        glVertex2f(-0.2, 0.5);
        glVertex2f(-0.1, 0.5);
        glVertex2f(-0.1, 0.1);
        glVertex2f(-0.2, 0.1);

        glVertex2f(-0.1, 0.6);
        glVertex2f(0.0, 0.6);
        glVertex2f(0.0, 0.5);
        glVertex2f(-0.1, 0.5);
    
        glVertex2f(0.3, 0.4);
        glVertex2f(0.4, 0.4);
        glVertex2f(0.4, 0.3);
        glVertex2f(0.3, 0.3);

        glVertex2f(0.1, -0.2);
        glVertex2f(0.2, -0.2);
        glVertex2f(0.2, -0.3);
        glVertex2f(0.1, -0.3);

        glVertex2f(0.2, -0.3);
        glVertex2f(0.3, -0.3);
        glVertex2f(0.3, -0.4);
        glVertex2f(0.2, -0.4);
        
        glVertex2f(0.1, -0.4);
        glVertex2f(0.2, -0.4);
        glVertex2f(0.2, -0.5);
        glVertex2f(0.1, -0.5);
        
        glVertex2f(-0.3, -0.4);
        glVertex2f(-0.2, -0.4);
        glVertex2f(-0.2, -0.5);
        glVertex2f(-0.3, -0.5);
        
        glVertex2f(-0.4, -0.3);
        glVertex2f(-0.3, -0.3);
        glVertex2f(-0.3, -0.4);
        glVertex2f(-0.4, -0.4);
        
        glVertex2f(-0.2, -0.5);
        glVertex2f(0.1, -0.5);
        glVertex2f(0.1, -0.6);
        glVertex2f(-0.2, -0.6);
        
        glColor3f(1.0, 0.9, 0.1); //Kuning
        glVertex2f(0.0, 0.6);
        glVertex2f(0.4, 0.6);
        glVertex2f(0.4, 0.4);
        glVertex2f(0.0, 0.4);
        
        glVertex2f(-0.1, 0.5);
        glVertex2f(0.0, 0.5);
        glVertex2f(0.0, 0.2);
        glVertex2f(-0.1, 0.2);

        glVertex2f(0.3, 0.4);
        glVertex2f(0.0, 0.4);
        glVertex2f(0.0, 0.1);
        glVertex2f(0.3, 0.1);
        
        glVertex2f(0.5, 0.5);
        glVertex2f(0.4, 0.5);
        glVertex2f(0.4, 0.1);
        glVertex2f(0.5, 0.1);

        glVertex2f(0.3, 0.3);
        glVertex2f(0.4, 0.3);
        glVertex2f(0.4, -0.6);
        glVertex2f(0.3, -0.6);

        glVertex2f(0.1, 0.1);
        glVertex2f(0.3, 0.1);
        glVertex2f(0.3, -0.2);
        glVertex2f(0.1, -0.2);
        
        glVertex2f(0.2, -0.2);
        glVertex2f(0.3, -0.2);
        glVertex2f(0.3, -0.3);
        glVertex2f(0.2, -0.3);

        glVertex2f(0.0, -0.1);
        glVertex2f(0.1, -0.1);
        glVertex2f(0.1, -0.2);
        glVertex2f(0.0, -0.2);
        
        glVertex2f(0.4, -0.2);
        glVertex2f(0.5, -0.2);
        glVertex2f(0.5, -0.5);
        glVertex2f(0.4, -0.5);

        glVertex2f(0.2, -0.4);
        glVertex2f(0.3, -0.4);
        glVertex2f(0.3, -0.6);
        glVertex2f(0.2, -0.6);
        
        glVertex2f(0.1, -0.5);
        glVertex2f(0.2, -0.5);
        glVertex2f(0.2, -0.6);
        glVertex2f(0.1, -0.6);

        glVertex2f(-0.3, -0.6);
        glVertex2f(0.2, -0.6);
        glVertex2f(0.2, -0.7);
        glVertex2f(-0.3, -0.7);

        glVertex2f(-0.4, -0.5);
        glVertex2f(-0.2, -0.5);
        glVertex2f(-0.2, -0.6);
        glVertex2f(-0.4, -0.6);

        glVertex2f(-0.3, -0.2);
        glVertex2f(0.1, -0.2);
        glVertex2f(0.1, -0.4);
        glVertex2f(-0.3, -0.4);
        
        glVertex2f(-0.6, 0.0);
        glVertex2f(-0.5, 0.0);
        glVertex2f(-0.5, -0.1);
        glVertex2f(-0.6, -0.1);
        
        glVertex2f(-0.6, -0.1);
        glVertex2f(-0.3, -0.1);
        glVertex2f(-0.3, -0.3);
        glVertex2f(-0.6, -0.3);

        glVertex2f(-0.5, -0.4);
        glVertex2f(-0.3, -0.4);
        glVertex2f(-0.3, -0.5);
        glVertex2f(-0.5, -0.5);

        glVertex2f(-0.6, -0.3);
        glVertex2f(-0.4, -0.3);
        glVertex2f(-0.4, -0.4);
        glVertex2f(-0.6, -0.4);

        glVertex2f(0.1, -0.3);
        glVertex2f(0.2, -0.3);
        glVertex2f(0.2, -0.4);
        glVertex2f(0.1, -0.4);
        
        glVertex2f(-0.2, -0.4);
        glVertex2f(0.1, -0.4);
        glVertex2f(0.1, -0.5);
        glVertex2f(-0.2, -0.5);
        
        glColor3f(0.9, 0.3, 0.0); //Merah
        glVertex2f(0.5, 0.3);
        glVertex2f(0.6, 0.3);
        glVertex2f(0.6, 0.1);
        glVertex2f(0.5, 0.1);

        glVertex2f(0.6, 0.3);
        glVertex2f(0.7, 0.3);
        glVertex2f(0.7, 0.2);
        glVertex2f(0.6, 0.2);
        
        glEnd();
        glFlush();
}

int main(int argc, char * argv[]) {
    glutInit(&argc, argv);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_RGBA | GLUT_SINGLE);
    glutCreateWindow("[Praktikum 1] No 3");
    glutDisplayFunc(display);
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glutMainLoop();
    return 0;
}
