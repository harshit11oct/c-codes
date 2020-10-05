#include <GL/glut.h>
const int A = 500; /* length of a side of the monitor window */
const float B = 500; /* length of a side of the clipping rectangle */
const float C = 200; /* length of a side of the square the program draws */
void myinit(void)
{
glClearColor(255.0, 0, 0, 0.0); /* gray background */
glMatrixMode(GL_PROJECTION); /* In World coordinates: */
glLoadIdentity(); /* position the "clipping rectangle" */
gluOrtho2D( -B/2, B/2, -B/2, B/2);/* at -B/2, its right edge at +B/2, its bottom */
glMatrixMode(GL_MODELVIEW); /* edge at -B/2 and its top edge at +B/2 */
}
void display( void )
{
glClear(GL_COLOR_BUFFER_BIT); /* clear the window */
glMatrixMode(GL_MODELVIEW); /* The following coordinates are expressed */
glLoadIdentity(); /* in terms of World coordinates */
glBegin(GL_POLYGON) ; /* draw a filled polygon */
glColor3f ( 0,255.0, 0); /* draw in light red */
glVertex2f( -C/2, -C/2 ); /* (x,y) */
glVertex2f( C/2, -C/2 ); /* (x,y) */
glVertex2f( C/2, C/2 ); /* (x,y) */
glVertex2f( -C/2, C/2 ); /* (x,y) */
glEnd();
glFlush(); /* send all commands */
}
int main(int argc, char** argv)
{
glutInit(&argc,argv);
glutInitWindowSize( A, A ); /* A x A pixel screen window */
glutInitWindowPosition(1500,0);
glutInitDisplayMode( GLUT_RGB | GLUT_SINGLE);
glutCreateWindow("Basic OpenGL Program"); /* window title */

glutDisplayFunc(display); /* tell OpenGL main loop what */

myinit(); /* set attributes */
glutMainLoop(); /* pass control to the main loop */

return 0;
}
