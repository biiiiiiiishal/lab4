#include <windows.h>  // for MS Windows

#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void init()
{
    glClearColor(1, 1, 1, 0);
    glMatrixMode(GL_PROJECTION);
    glOrtho(0,100,0,100,0,10);


}
void display() {

	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glBegin(GL_QUADS);
    //blue
    glColor4f(84,170,245);
    glVertex2i(10,80);
    glVertex2i(40,80);
    glVertex2i(40,70);
    glVertex2i(10,70);
    //white
    glColor3f(255,255,255);
    glVertex2i(10,70);
    glVertex2i(40,70);
    glVertex2i(40,60);
    glVertex2i(10,60);
    //blue
    glColor4f(84,170,245);
    glVertex2i(10,60);
    glVertex2i(40,60);
    glVertex2i(40,50);
    glVertex2i(10,50);
    glEnd();
    glColor3f(0.0,0.0,0.0);
    glLineWidth(13);
    glBegin(GL_LINES);
    glVertex2i(10,80);
    glVertex2i(10,10);
    glEnd();

	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);// Initialize GLUT
    glutInitWindowPosition(10,10);
    glutInitWindowSize(320,320);
    glutCreateWindow("Flag Of Argentina"); // Create a window with the given titleglutInitWindowSize(700, 500);   // Set the window's initial width & height
	init();
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();// Enter the event-processing loop
	return 0;
}
