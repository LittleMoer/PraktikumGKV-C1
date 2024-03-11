#include <GL/glut.h>

static int shoulder = 0, elbow = 0, telapak = 0, metakarpal = 0, falang = 0;
int moving, startx, starty;

GLfloat angle = 0.0; 
GLfloat angle2 = 0.0; 
//GLfloat telapak = 0.0; 

void init(void){
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_FLAT);
}

void display(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    
    // Mouse
    glRotatef(angle2, 1.0, 0.0, 0.0);
    glRotatef(angle, 0.0, 1.0, 0.0);
    glTranslatef(-1.0, 0.0, 0.0);

    // Bahu
    glTranslatef(-1.0, 0.0, 0.0);
    glRotatef((GLfloat)shoulder, 0.0, 0.0, 1.0);
    glTranslatef(1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef(2.0, 0.4, 1.0);
    glutWireCube(1.0);
    glPopMatrix();
    glTranslatef(1.0, 0.0, 0.0);

    // Siku
//    glTranslatef(1.0, 0.0, 0.0);
    glRotatef((GLfloat)elbow, 0.0, 0.0, 1.0);
    glTranslatef(1.0, 0.0, 0.0);
    glPushMatrix();
    glScalef(2.0, 0.4, 1.0);
    glutWireCube(1.0);
    glPopMatrix();
    
    // Telapak Tangan
	glTranslatef(1.0, 0.0, 0.0); 
	glRotatef((GLfloat)telapak, 0.0, 0.0, 1.0);
	glPushMatrix();
	glTranslatef(0.3, 0.0, 0.0);
	glScalef(1.0, 0.4, 0.6);
	glutWireCube(1.0);
	glPopMatrix();
    
    // Jari 1
    // Metakarpal 1
    glPushMatrix();
    glTranslatef(0.75, 0.15, 0.0);
    glRotatef(-(GLfloat)metakarpal, 0.0, 0.0, 1.0);
    glTranslatef(0.15, 0.0, -0.25);
    glPushMatrix();
    glScalef(0.3, 0.1, 0.5);
    glutWireCube(1.0);
    glPopMatrix();

    // Falang 1 
    glTranslatef(0.15, 0.0, 0.0);
    glRotatef(-(GLfloat)falang, 0.0, 0.0, 1.0);
    glTranslatef(0.15, 0.0, 0.0);
    glPushMatrix();
    glScalef(0.3, 0.1, 0.15);
    glutWireCube(1);
    glPopMatrix();

    glPopMatrix();

	// Jari 2
    //Metakarpal 2
    glPushMatrix();
    glTranslatef(0.75, 0.15, 0.0);
    glRotatef(-(GLfloat)metakarpal, 0.0, 0.0, 1.0);
    glTranslatef(0.15, 0.0, 0.0);
    glPushMatrix();
    glScalef(0.3, 0.1, 0.15);
    glutWireCube(1);
    glPopMatrix();

    // Falang 2
    glTranslatef(0.15, 0.0, 0.0);
    glRotatef(-(GLfloat)falang, 0.0, 0.0, 1.0);
    glTranslatef(0.15, 0.0, 0.0);
    glPushMatrix();
    glScalef(0.3, 0.1, 0.15);
    glutWireCube(1);
    glPopMatrix();

    glPopMatrix();

	// Jari 3
    // Metakarpal 3
    glPushMatrix();
    glTranslatef(0.75, 0.15, 0.0);
    glRotatef(-(GLfloat)metakarpal, 0.0, 0.0, 1.0);
    glTranslatef(0.15, 0.0, 0.25);
    glPushMatrix();
    glScalef(0.3, 0.1, 0.15);
    glutWireCube(1);
    glPopMatrix();

    // Falang 3
    glTranslatef(0.15, 0.0, 0.0);
    glRotatef(-(GLfloat)falang, 0.0, 0.0, 1.0);
    glTranslatef(0.15, 0.0, 0.0);
    glPushMatrix();
    glScalef(0.3, 0.1, 0.15);
    glutWireCube(1);
    glPopMatrix();

    glPopMatrix();

	// Jari 4
    // Metakarpal 4 (Ibu jari)
    glPushMatrix();
    glTranslatef(0.75, -0.15, 0.4);
    glRotatef((GLfloat)metakarpal, 0.0, 0.0, 1.0);
    glTranslatef(0.15, 0.0, 0.0);
    glPushMatrix();
    glScalef(0.3, 0.1, 0.15);
    glutWireCube(1);
    glPopMatrix();

    // Falang 4
    glTranslatef(0.15, 0.0, 0.0);
    glRotatef((GLfloat)falang, 0.0, 0.0, 1.0);
    glTranslatef(0.15, 0.0, 0.0);
    glPushMatrix();
    glScalef(0.3, 0.1, 0.15);
    glutWireCube(1);
    glPopMatrix();

    glPopMatrix();
    glPopMatrix();
    glutSwapBuffers();
}

void reshape(int w, int h){
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(85.0, (GLfloat)w / (GLfloat)h, 1.0, 20.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.0, 0.0, -5.0);
}

void keyboard(unsigned char key, int x, int y){
    switch (key) {
    case 's':
        shoulder = (shoulder + 5) % 360;
        glutPostRedisplay();
        break;
    case 'S':
        shoulder = (shoulder - 5) % 360;
        glutPostRedisplay();
        break;
    case 'e':
        elbow = (elbow + 5) % 360;
        glutPostRedisplay();
        break;
    case 'E':
        elbow = (elbow - 5) % 360;
        glutPostRedisplay();
        break;
    case 't':
    	if (telapak < 90)
    		telapak = (telapak + 5) % 360;
    	glutPostRedisplay();
    	break;
    case 'T':
    	if (telapak > -90)
    		telapak = (telapak - 5) % 360;
    	glutPostRedisplay();
    	break;
    case 'm':
        if (metakarpal < 90)
            metakarpal = (metakarpal + 5) % 360;
        glutPostRedisplay();
        break;
    case 'M':
        if (metakarpal > 0)
            metakarpal = (metakarpal - 5) % 360;
        glutPostRedisplay();
        break;
    case 'f':
        if (falang < 130)
            falang = (falang + 5) % 360;
        glutPostRedisplay();
        break;
    case 'F':
        if (falang > 0)
            falang = (falang - 5) % 360;
        glutPostRedisplay();
        break;

    case 27:
        exit(0);
        break;
    default:
        break;
    }
}

static void mouse(int button, int state, int x, int y){
    if (button == GLUT_LEFT_BUTTON){
        if (state == GLUT_DOWN){
            moving = 1;
            startx = x;
            starty = y;
        }
        if (state == GLUT_UP){
            moving = 0;
        }
    }
    if (button==GLUT_RIGHT_BUTTON)  exit(0);
}

static void motion(int x, int y){
    if (moving){
        angle = angle + (x - startx);
        angle2 = angle2 + (y - starty);
        telapak = angle;
        startx = x;
        starty = y;
        glutPostRedisplay();
    }
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(600, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Lengan Bergerak - Aura Arfannisa Az Zahra");
    init();
    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
