#include <GL/glut.h>
void init (void)
{
glClearColor (1.0, 1.0, 1.0, 0.0); // Set display-window color towhite.
glMatrixMode (GL_PROJECTION); // Set projection parameters.
gluOrtho2D (0.0, 200.0, 0.0, 150.0);
}
void lineSegment (void)
{
glClear (GL_COLOR_BUFFER_BIT); // Clear display window.
glColor3f (0.0, 0.4, 0.2); // Set line segments color to green.
glBegin (GL_LINES);
glVertex2i (180, 15); // Specify line-segments geometry.
glVertex2i (10, 145);
glEnd ( );
glBegin (GL_LINES);
glVertex2i (200, 35); // Specify line-segments geometry.
glVertex2i (30, 175);
glEnd ( );
glFlush ( ); // Process all OpenGL routines as quickly aspossible.
}
int main (int argc, char** argv)
{
glutInit (&argc, argv); // Initialize GLUT.
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB); // Set displaymode.
glutInitWindowPosition (50, 100); // Set top-left display-windowposition.
glutInitWindowSize (400, 300); // Set display-window width andheight.
glutCreateWindow ("An Example OpenGL Program&quot"); // Create displaywindow.
init ( ); // Execute initialization procedure.
glutDisplayFunc (lineSegment); // Send graphic to displaywindow.
glutMainLoop ( ); // Display everything and wait.
return 0;
}
