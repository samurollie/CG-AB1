#include <iostream>
#include <GL/glut.h>

using namespace std;

/* struct campo {
    GlFloat x1,x2,y1,y2;
}; */

void init () {
  glClearColor (0.0, 0.0, 0.0, 0.0);

  glMatrixMode (GL_PROJECTION);

  glOrtho(0.0, 500.0, 0.0, 400.0, -1.0, 1.0);
}

void drawCampo (GLfloat X_inicial, GLfloat Y_inicial) {
    GLfloat x_final = (X_inicial + 100) * 2;
    GLfloat y_final = (Y_inicial + 75) * 2;

    glColor3f(0.00,0.60,0.10);

    glBegin(GL_POLYGON);
        glVertex2f(X_inicial, Y_inicial);
        glVertex2f(X_inicial, y_final);
        glVertex2f(x_final, y_final);
        glVertex2f(x_final, Y_inicial);
    glEnd();

}

void draw () {
    glClear(GL_COLOR_BUFFER_BIT);

    drawCampo(100.0f, 100.0f);
    
    glFlush();
}

int main(int argc, char **argv) {
    glutInit(&argc, argv);

	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (500, 400);
	glutInitWindowPosition (200, 200);
	glutCreateWindow ("Campo de Futebol");

	init();

	glutDisplayFunc(draw);
    // glutIdleFunc();

	glutMainLoop();
    return 0;
}
