// Nama		: Naufal Rizki Saputra
// NIM		: 24060122120011
// Membuat sebuah mobil 2D yang memanfaatkan object2 primitif dan transformasi (translasi dan rotasi)

#include <gl/glut.h>

float banMobil = 0.0, posisiMobil = -1.65, kecepatan = 0.005;
bool gerak = true;

void mobil() {
    glPushMatrix();

    // Badan
    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.6f, -0.3f);
    glVertex2f(0.6f, -0.3f);
    glVertex2f(0.6f, 0.3f);
    glVertex2f(-0.6f, 0.3f);
    glEnd();

    // Jendela Depan
    glColor3f(0.5f, 0.5f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2f(0.2f, 0.0f);
    glVertex2f(0.55f, 0.0f);
    glVertex2f(0.55f, 0.2f);
    glVertex2f(0.2f, 0.2f);
    glEnd();

    // Jendela Tengah
    glColor3f(0.5f, 0.5f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.1f, 0.0f);
    glVertex2f(0.1f, 0.0f);
    glVertex2f(0.1f, 0.2f);
    glVertex2f(-0.1f, 0.2f);
    glEnd();

    // Jendela Belakang
    glColor3f(0.5f, 0.5f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.2f, 0.0f);
    glVertex2f(-0.55f, 0.0f);
    glVertex2f(-0.55f, 0.2f);
    glVertex2f(-0.2f, 0.2f);
    glEnd();

    // Block Jendela Depan
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2f(0.35f, 0.0f);
    glVertex2f(0.1f, 0.0f);
    glVertex2f(0.1f, 0.2f);
    glVertex2f(0.35f, 0.2f);
    glEnd();

    // Block Jendela Belakang
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.35f, 0.0f);
    glVertex2f(-0.1f, 0.0f);
    glVertex2f(-0.1f, 0.2f);
    glVertex2f(-0.35f, 0.2f);
    glEnd();

    // Lampu Depan
    glColor3f(1.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(0.55f, -0.2f);
    glVertex2f(0.6f, -0.2f);
    glVertex2f(0.6f, -0.1f);
    glVertex2f(0.55f, -0.1f);
    glEnd();

    // Lampu Belakang
    glColor3f(1.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.55f, -0.2f);
    glVertex2f(-0.6f, -0.2f);
    glVertex2f(-0.6f, -0.1f);
    glVertex2f(-0.55f, -0.1f);
    glEnd();

    // Roda Depan
    glColor3f(0.0f, 0.0f, 0.0f);
    glPushMatrix();
    glTranslatef(0.4f, -0.3f, 0.0f);
    glRotatef(-banMobil, 0.0f, 0.0f, 1.0f);
    glutSolidTorus(0.05f, 0.1f, 10, 10);
    glPopMatrix();

    // Roda Belakang
    glPushMatrix();
    glTranslatef(-0.4f, -0.3f, 0.0f);
    glRotatef(-banMobil, 0.0f, 0.0f, 1.0f);
    glutSolidTorus(0.05f, 0.1f, 10, 10);
    glPopMatrix();

    glPopMatrix();
}

void background() {
    // Jalan
    glColor3f(0.65f, 0.65f, 0.65f);
    glBegin(GL_POLYGON);
    glVertex2f(-1.0f, -0.3f);
    glVertex2f(1.0f, -0.3f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(-1.0f, -1.0f);
    glEnd();

    // Langit
    glColor3f(0.5f, 0.7f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(1.0f, -0.3f);
    glVertex2f(-1.0f, -0.3f);
    glEnd();

    // Pegunungan
    glColor3f(0.3f, 0.5f, 0.3f);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.0f, -0.3f);
    glVertex2f(0.6f, 0.45f);
    glVertex2f(1.2f, -0.3f);
    glEnd();

    glColor3f(0.3f, 0.5f, 0.3f);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.3f, -0.3f);
    glVertex2f(-0.40f, 0.80f);
    glVertex2f(-1.2f, -0.3f);
    glEnd();

    // Awan
    glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();
    glTranslatef(-0.85f, 0.5f, 0.0f);
    glutSolidSphere(0.1f, 20, 20);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.65f, 0.5f, 0.0f);
    glutSolidSphere(0.15f, 20, 20);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.45f, 0.5f, 0.0f);
    glutSolidSphere(0.1f, 20, 20);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.47f, 0.7f, 0.0f);
    glutSolidSphere(0.09f, 20, 20);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.65f, 0.7f, 0.0f);
    glutSolidSphere(0.15f, 20, 20);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.83f, 0.7f, 0.0f);
    glutSolidSphere(0.09f, 20, 20);
    glPopMatrix();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    background();
    glTranslatef(posisiMobil, -0.20f, 0.0f);
    mobil();

    if (gerak == true) {
        posisiMobil += kecepatan;
        if (posisiMobil > 1.65) {
            posisiMobil = -1.65;
        }
    }

    glFlush();
}

void update(int N) {
    banMobil += 5.0f;
    if (banMobil > 360.0f) {
        banMobil -= 360.0f;
    }

    glutPostRedisplay();
    glutTimerFunc(1000 / 60, update, 0);
}

void init() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glColor3f(0.0f, 0.0f, 0.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0f, 1.0f, -1.0f, 1.0f);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("Pokoknya Mobil");
    init();
    glutDisplayFunc(display);
    glutTimerFunc(0, update, 0);
    glutMainLoop();
    return 0;
}
