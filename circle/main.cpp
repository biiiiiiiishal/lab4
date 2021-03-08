#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

    //CREATE LINE
    glBegin(GL_LINES);
    //line 1
    glColor3f(0.0f, 1.0f, 1.0f); //
    glVertex2f(0.0f, -1.0f);
    glVertex2f(0.0f, 1.0f);

    glColor3f(0.0f, 1.0f, 1.0f); //
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glEnd();

    //CREATE POINT
	glPointSize(0.0);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
    //point1
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.0f, -0.0f);    // x, y
    //point2
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-0.5f, -0.5f);
    //point3
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0.5f, 0.5f);
	glEnd();

    //CREATE CIRCLE
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex2f(-0.5f,0.0f);
    glVertex2f(-0.4f,0.3f);
    glVertex2f(-0.3f,0.4f);
    glVertex2f(-0.2f,0.44f);
    glVertex2f(-0.1f,0.5f);
    glVertex2f(0.0f,0.5f);
    glVertex2f(0.1f,0.5f);
    glVertex2f(0.2f,0.46f);
    glVertex2f(0.3f,0.4f);
    glVertex2f(0.4f,0.3f);
    glVertex2f(0.5f,0.0f);
    glVertex2f(-0.5f,-0.0f);
    glVertex2f(-0.4f,-0.3f);
    glVertex2f(-0.3f,-0.4f);
    glVertex2f(-0.2f,-0.45f);
    glVertex2f(-0.1f,-0.5f);
    glVertex2f(0.0f,-0.5f);
    glVertex2f(0.1f,-0.5f);
    glVertex2f(0.2f,-0.47f);
    glVertex2f(0.3f,-0.4f);
    glVertex2f(0.4f,-0.3f);
    glVertex2f(0.5f,-0.0f);






    glEnd();



	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("CG Section: L"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
