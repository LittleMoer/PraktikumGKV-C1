// Nama		: Naufal Rizki Saputra
// NIM		: 24060122120011
// Membuat program tangan bergerak dengan menambahkan lengan, telapak tangan, beserta jari-jari dari lengan tersebut, dimana telapak tangan dan jari-jari tersebut dapat bergerak sesuai dengan inputan keyboard yang diberikan

#include <gl/glut.h>

static int siku = 0;
static int bahu = 0;
static int telapak = 0;
static int ibujari = 0;
static int telunjuk1 = 0, telunjuk2 = 0;
static int tengah1 = 0, tengah2 = 0;
static int manis1 = 0, manis2 = 0;
static int kelingking1 = 0, kelingking2 = 0;

void init(void) {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_FLAT);
}

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();

    //Bahu
    glTranslatef(-1.0, 0.0, 0.0);
    glRotatef((GLfloat)bahu, 0.0, 0.0, 1.0);
    glTranslatef(1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef(2.0, 0.4, 1.0);
    glutWireCube(1.0);
    glPopMatrix();

    //Siku
    glTranslatef(1.0, 0.0, 0.0);
    glRotatef((GLfloat)siku, 0.0, 0.0, 1.0);
    glTranslatef(1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef(2.0, 0.4, 1.0);
    glutWireCube(1.0);
    glPopMatrix();

    //Telapak
    glTranslatef(1.0, 0.0, 0.0);
    glRotatef((GLfloat)telapak, 0.0, 0.0, 1.0);
    glTranslatef(0.5, 0.0, 0.0);
    glPushMatrix();
    glScalef(1.0, 0.4, 1.0);
    glutWireCube(1.0);
    glPopMatrix();

    //Telunjuk1
    glPushMatrix();
    glTranslatef(0.5, 0.0, 0.0);
    glRotatef((GLfloat)telunjuk1, 0.0, 0.0, 1.0);
    glTranslatef(0.25, 0.0, 0.0);
    glPushMatrix();
    glScalef(0.5, 0.2, 0.20);
    glutWireCube(1.0);
    glPopMatrix();

    //Telunjuk2
    glTranslatef(0.25, 0.0, 0.0);
    glRotatef((GLfloat)telunjuk2, 0.0, 0.0, 1.0);
    glTranslatef(0.25, 0.0, 0.0);
    glPushMatrix();
    glScalef(0.5, 0.2, 0.20);
    glutWireCube(1.0);
    glPopMatrix();
    glPopMatrix();

    //Tengah1
    glPushMatrix();
    glTranslatef(0.5, 0.0, 0.0);
    glRotatef((GLfloat)tengah1, 0.0, 0.0, 1.0);
    glTranslatef(0.25, 0.0, 0.0);
    glPushMatrix();
    glScalef(0.5, 0.2, 0.20);
    glutWireCube(1.0);
    glPopMatrix();

    //Tengah2
    glTranslatef(0.25, 0.0, 0.0);
    glRotatef((GLfloat)tengah2, 0.0, 0.0, 1.0);
    glTranslatef(0.25, 0.0, 0.0);
    glPushMatrix();
    glScalef(0.5, 0.2, 0.20);
    glutWireCube(1.0);
    glPopMatrix();
    glPopMatrix();

    //Manis1
    glPushMatrix();
    glTranslatef(0.5, 0.0, -0.2);
    glRotatef((GLfloat)manis1, 0.0, 0.0, 1.0);
    glTranslatef(0.25, 0.0, 0.0);
    glPushMatrix();
    glScalef(0.5, 0.2, 0.20);
    glutWireCube(1.0);
    glPopMatrix();

    //Manis2
    glTranslatef(0.25, 0.0, 0.0);
    glRotatef((GLfloat)manis2, 0.0, 0.0, 1.0);
    glTranslatef(0.25, 0.0, 0.0);
    glPushMatrix();
    glScalef(0.5, 0.2, 0.20);
    glutWireCube(1.0);
    glPopMatrix();
    glPopMatrix();

    //Kelingking1
    glPushMatrix();
    glTranslatef(0.5, 0.0, -0.4);
    glRotatef((GLfloat)kelingking1, 0.0, 0.0, 1.0);
    glTranslatef(0.25, 0.0, 0.0);
    glPushMatrix();
    glScalef(0.5, 0.2, 0.20);
    glutWireCube(1.0);
    glPopMatrix();

    //Kelingking2
    glTranslatef(0.25, 0.0, 0.0);
    glRotatef((GLfloat)kelingking2, 0.0, 0.0, 1.0);
    glTranslatef(0.25, 0.0, 0.0);
    glPushMatrix();
    glScalef(0.5, 0.2, 0.20);
    glutWireCube(1.0);
    glPopMatrix();
    glPopMatrix();

    //Ibu Jari1
    glPushMatrix();
    glTranslatef(0.2, 0.0, 0.4);
    glRotatef((GLfloat)ibujari, -1.0, 0.0, 0.0);
    glTranslatef(0.0, 0.0, 0.25);
    glPushMatrix();
    glScalef(0.2, 0.2, 0.50);
    glutWireCube(1.0);
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();

    glutSwapBuffers();
}

void reshape(int w, int h) {
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(65.0, (GLfloat)w / (GLfloat)h, 1.0, 20.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.0, 0.0, -5.0);
}

void keyboard(unsigned char key, int x, int y) {
    switch (key) {
    case 'b': bahu = (bahu + 5) % 360;
        glutPostRedisplay();
        break;
    case 'B': bahu = (bahu - 5) % 360;
        glutPostRedisplay();
        break;
    case 's': if (siku < 90) siku = (siku + 5) % 360;
        glutPostRedisplay();
        break;
    case 'S': if (siku > 0) siku = (siku - 5) % 360;
        glutPostRedisplay();
        break;
    case 't': if (telapak < 90) telapak = (telapak + 5) % 360;
        glutPostRedisplay();
        break;
    case 'T': if (telapak > 0) telapak = (telapak - 5) % 360;
        glutPostRedisplay();
        break;
    case 'a': if (telunjuk1 < 90) telunjuk1 = (telunjuk1 + 5) % 360;
        glutPostRedisplay();
        break;
    case 'A': if (telunjuk1 > 0) telunjuk1 = (telunjuk1 - 5) % 360;
        glutPostRedisplay();
        break;
    case 'd': if (telunjuk2 < 90) telunjuk2 = (telunjuk2 + 5) % 360;
        glutPostRedisplay();
        break;
    case 'D': if (telunjuk2 > 0) telunjuk2 = (telunjuk2 - 5) % 360;
        glutPostRedisplay();
        break;
    case 'f': if (tengah1 < 90) tengah1 = (tengah1 + 5) % 360;
        glutPostRedisplay();
        break;
    case 'F': if (tengah1 > 0) tengah1 = (tengah1 - 5) % 360;
        glutPostRedisplay();
        break;
    case 'g': if (tengah2 < 90) tengah2 = (tengah2 + 5) % 360;
        glutPostRedisplay();
        break;
    case 'G': if (tengah2 > 0) tengah2 = (tengah2 - 5) % 360;
        glutPostRedisplay();
        break;
    case 'h': if (manis1 < 90) manis1 = (manis1 + 5) % 360;
        glutPostRedisplay();
        break;
    case 'H': if (manis1 > 0) manis1 = (manis1 - 5) % 360;
        glutPostRedisplay();
        break;
    case 'j': if (manis2 < 90) manis2 = (manis2 + 5) % 360;
        glutPostRedisplay();
        break;
    case 'J': if (manis2 > 0) manis2 = (manis2 - 5) % 360;
        glutPostRedisplay();
        break;
    case 'k': if (kelingking1 < 90) kelingking1 = (kelingking1 + 5) % 360;
        glutPostRedisplay();
        break;
    case 'K': if (kelingking1 > 0) kelingking1 = (kelingking1 - 5) % 360;
        glutPostRedisplay();
        break;
    case 'l': if (kelingking2 < 90) kelingking2 = (kelingking2 + 5) % 360;
        glutPostRedisplay();
        break;
    case 'L': if (kelingking2 > 0) kelingking2 = (kelingking2 - 5) % 360;
        glutPostRedisplay();
        break;
    case 'i': if (ibujari < 90) ibujari = (ibujari + 5) % 360;
        glutPostRedisplay();
        break;
    case 'I': if (ibujari > 0) ibujari = (ibujari - 5) % 360;
        glutPostRedisplay();
        break;
    case 27: exit(0);
        break;
    default:
        break;
    }
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1200, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow(argv[0]);
    init();

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);

    glutMainLoop();
    return 0;
}
