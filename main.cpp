#include <iostream>
#include <GL/glut.h>

using namespace std;

void init () {
  glClearColor (1.0, 1.0, 1.0, 0.0);

  glMatrixMode (GL_PROJECTION);

  glOrtho(0.0, 500.0, 0.0, 400.0, -1.0, 1.0);
}

void draw () {
    glClear(GL_COLOR_BUFFER_BIT);

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
