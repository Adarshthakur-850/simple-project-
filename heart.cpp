#include <GL/glut.h>
#include <math.h>

#define PI 3.1415926535898

float angle = 0.0;

void drawHeartbeat() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    glTranslatef(0.0f, 0.0f, -5.0f);
    glRotatef(angle, 0.0f, 1.0f, 0.0f);

    glBegin(GL_LINE_STRIP);

    for (float t = 0; t <= 2 * PI; t += 0.01) {
        float x = 16 * pow(sin(t), 3);
        float y = 13 * cos(t) - 5 * cos(2 * t) - 2 * cos(3 * t) - cos(4 * t);
        float z = 0.5 * sin(10 * t);

        glVertex3f(x, y, z);
    }

    glEnd();

    glutSwapBuffers();
}

void update(int value) {
    angle += 2.0f;

    if (angle > 360) {
        angle -= 360;
    }

    glutPostRedisplay();
    glutTimerFunc(16, update, 0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutCreateWindow("3D Heartbeat Animation");

    glEnable(GL_DEPTH_TEST);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    gluPerspective(45.0f, 1.0f, 0.1f, 100.0f);

    glMatrixMode(GL_MODELVIEW);

    glutDisplayFunc(drawHeartbeat);
    glutTimerFunc(25, update, 0);

    glutMainLoop();

    return 0;
}
