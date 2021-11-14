///Instructions:

///press p to OFF
///press r to ON
///press Left Mouse Button to Increase Speed
///press Right Mouse Button to Decrease Speed








#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846

void displayPause();
void displayRun();
void displayInc();
void displayDec();


GLfloat i = 0.0f;


GLfloat position = 0.0f;

GLfloat speed = 10.f;


void update(int value) {

    if(position >1.0)
        position = -1.0f;

    position -= speed;//+.2;

	glutPostRedisplay();


	glutTimerFunc(1, update, 0);

}


void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 'p':
    speed = 0.0f;
    break;
case 'r':
    speed = 10.0f;
    break;
glutPostRedisplay();
	}
}

void handleMouse(int button, int state, int x, int y)
{
	if (button == GLUT_LEFT_BUTTON){
			speed += 5.0f;
			}
			if (button == GLUT_RIGHT_BUTTON)
	        {
            speed -= 5.0f;
			}
	glutPostRedisplay();
}


void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}
void triangleLines(GLfloat a,GLfloat b,GLfloat r)
{
    GLfloat x=a; GLfloat y=b; GLfloat radius =r;
	int i;
	int lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;


	glBegin(GL_LINE_LOOP);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();
}

void triangleFan(GLfloat a,GLfloat b,GLfloat r)
{
    int i;
    GLfloat x=a; GLfloat y=b; GLfloat radius =r;
	int triangleAmount = 200; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;


	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}





void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(1);

	///Car BIGINS---------------------------------------------------------------------
                glPushMatrix();
                glTranslatef(position1,0,0);
                glTranslatef(-.8,0,0);

    ///left tire begins------
	glColor3ub(31, 31, 46);
    triangleFan(-.45,0,.17);

    glColor3ub(255, 255, 255);
    triangleFan(-.45,0,.10);

    glLineWidth(4);
    glColor3ub(128, 128, 128);
    triangleLines(-.45,0,.05);
    ///left tire ends------

    ///Right tire begins------
	glColor3ub(31, 31, 46);
    triangleFan(.45,0,.17);

    glColor3ub(255, 255, 255);
    triangleFan(.45,0,.10);

    glLineWidth(4);
    glColor3ub(128, 128, 128);
    triangleLines(.45,0,.05);
    ///Right tire ends------

    ///body begins------

    glBegin(GL_QUADS);
	glColor3ub(255, 204, 0);
	glVertex2f(-.27, -.1);
	glVertex2f(.27, -.1);
	glVertex2f(.4,.35);
	glVertex2f(-.4,.35);
	glEnd();

	glBegin(GL_QUADS);///square
	glColor3ub(255, 204, 0);
	glVertex2f(-.75, .14);
	glVertex2f(.55, .14);
	glVertex2f(.55,.35);
	glVertex2f(-.75,.35);
	glEnd();

	glColor3ub(255, 204, 0);
    triangleFan(-.75,.20,.15);



    glBegin(GL_POLYGON);
	glColor3ub(255, 204, 0);
	glVertex2f(-.9, .2);
	glVertex2f(-.95, .0);
	glVertex2f(-.95,-.05);
	glVertex2f(-.63,-.08);
	glVertex2f(-.57,.2);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 204, 0);
	glVertex2f(-.7, .2);
	glVertex2f(-.7, .0);
	glVertex2f(-.4,.2);

	glEnd();



	glBegin(GL_POLYGON);
	glColor3ub(255, 204, 0);
	glVertex2f(.67, .25);
	glVertex2f(.75, .0);
	glVertex2f(.75,-.02);
	glVertex2f(.63,-.02);
	glVertex2f(.57,.2);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 204, 0);
	glVertex2f(.7, .2);
	glVertex2f(.7, .0);
	glVertex2f(.4,.2);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 204, 0);
	glVertex2f(-.5, .2);
	glVertex2f(-.2, .0);
	glVertex2f(-.2,.2);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 204, 0);
	glVertex2f(.5, .2);
	glVertex2f(.2, .0);
	glVertex2f(.2,.2);

	glEnd();

	glColor3ub(255, 204, 0);
    triangleFan(.58,.25,.10);

    glBegin(GL_POLYGON);
	glColor3ub(255, 204, 0);
	glVertex2f(-.62, .35);
	glVertex2f(.32, .35);
	glVertex2f(.2,.58);
	glVertex2f(-.55,.58);
	glEnd();
	///body ends

	///glasses
	glBegin(GL_POLYGON);
	glColor3ub(204, 163, 0);
	glVertex2f(-.57, .35);
	glVertex2f(.26, .35);
	glVertex2f(.15,.55);
	glVertex2f(-.50,.55);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 204, 0);
	glVertex2f(-.3, .35);
	glVertex2f(-.2, .35);
	glVertex2f(-.2,.55);
	glVertex2f(-.3,.55);
	glEnd();

	glLoadIdentity();
      glPopMatrix();

///Car ENDS---------------------------------------------------------------------

    /*
	glBegin(GL_TRIANGLES);
	glColor3ub(194, 194, 214);
	glVertex2f(.33, 0.2);
	glVertex2f(-.33, 0.2);
	glVertex2f(0,-.39);
	glEnd();
*/







	glFlush();

}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint

	glutIdleFunc(Idle);//glutIdleFunc sets the global idle callback to be func so a GLUT program can perform background processing tasks or continuous animation when window system events are not being received.
    glutTimerFunc(1, update, 0);
    glutKeyboardFunc(handleKeypress);
    glutMouseFunc(handleMouse);
//    glutSpecialFunc(SpecialInput);
    //glutTimerFunc(100, update, 0);
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
