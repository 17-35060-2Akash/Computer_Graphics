///Instructions:

///press p to OFF
///press r to ON
///press Upper Arrow to Increase Speed
///press Lower Arrow to Decrease Speed








#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846

void displayPause();
void displayRun();
void displayInc();
void displayDec();


GLfloat i = 0.0f;

/*
GLfloat position = 0.0f;
GLfloat speed = 0.01f;

void update(int value) {

    if(position <-1.0)
        position = 1.0f;

    position -= speed; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}
*/
void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 'p':

     glutDisplayFunc(displayPause);
    break;

case 'r':

   glutDisplayFunc(displayRun);
    break;
glutPostRedisplay();

	}

}

void SpecialInput(int key, int x, int y)
{
switch(key)
{case GLUT_KEY_UP:

  glutDisplayFunc(displayInc);
break;
case GLUT_KEY_DOWN:
   glutDisplayFunc(displayDec);
break;
case GLUT_KEY_LEFT:

break;
case GLUT_KEY_RIGHT:
break;}
glutPostRedisplay();}




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





void displayPause() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(1);



	glPushMatrix();
	//glTranslatef(0,0,position);
	glRotatef(i,0.0,0.0,1.0);

	glBegin(GL_TRIANGLES);
	glColor3ub(194, 194, 214);
	glVertex2f(.33, 0.2);
	glVertex2f(-.33, 0.2);
	glVertex2f(0,-.39);
	glEnd();

	glBegin(GL_POLYGON); //fan plate 1
	glColor3ub(102, 217, 255);
	glVertex2f(.15, .25);
	glVertex2f(.22, .13);
	glVertex2f(.32,.07);
	glVertex2f(.87, 0.60);
	glVertex2f(.77, 0.7);
	glEnd();

	glBegin(GL_POLYGON); //fan plate 1 shade
	glColor3ub(102, 204, 255);
	glVertex2f(.15, .25);
	glVertex2f(.22, .13);
	glVertex2f(.82, 0.65);
	glVertex2f(.77, 0.7);
	glEnd();

	glBegin(GL_POLYGON);//fan plate 2
	glColor3ub(102, 204, 255);
	glVertex2f(-.15, .25);
	glVertex2f(-.22, .13);
	glVertex2f(-.32,.07);
	glVertex2f(-.87, 0.60);
	glVertex2f(-.77, 0.7);
	glEnd();

	glBegin(GL_POLYGON); //fan plate 2 shade
	glColor3ub(102, 217, 255);
	glVertex2f(-.15, .25);
	glVertex2f(-.22, .13);
	glVertex2f(-.82, 0.65);
	glVertex2f(-.77, 0.7);
	glEnd();

	glBegin(GL_POLYGON); //fan plate 3
	glColor3ub(102, 204, 255);
	glVertex2f(.0, -.25);
	glVertex2f(.13, -.27);
	glVertex2f(.08,-1.0);
	glVertex2f(.0, -1.0);
	glEnd();



	glBegin(GL_POLYGON); //fan plate 3 shade
	glColor3ub(102, 217, 255);
    glVertex2f(-.0, -.25);
	glVertex2f(-.13, -.27);
	glVertex2f(-.08,-1.0);
	glVertex2f(-.0, -1.0);

	glEnd();


	glBegin(GL_LINES); //fan plate lines
	glColor3ub(242, 242, 242);

	glVertex2f(.22, .13);
	glVertex2f(.82, 0.65);

	glVertex2f(-.22, .13);
	glVertex2f(-.82, 0.65);

	glVertex2f(-.0, -.25);
	glVertex2f(-.0, -0.9);

	glEnd();

	glPopMatrix();

    //i+=0.01f;





    glColor3ub(117, 117, 163); //fan circle
    triangleFan(0,0,.22);
     glColor3ub(148, 148, 184); //fan circle
    triangleFan(0,0,.18);
     glColor3ub(121, 121, 210); //fan circle
    triangleFan(0,0,.11);



    glColor3ub(255, 255, 255); //fan circle reflection
    triangleFan(0.1,-0.1,.035);
    glColor3ub(255, 255, 255); //fan circle reflection
    triangleFan(-0.1,0.1,.03);
    glColor3ub(255, 255, 255); //fan circle reflection
    triangleFan(0.08,-0.04,.02);







	glFlush();

}

void displayRun() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(1);



	glPushMatrix();
	//glTranslatef(0,0,position);
	glRotatef(i,0.0,0.0,1.0);

	glBegin(GL_TRIANGLES);
	glColor3ub(194, 194, 214);
	glVertex2f(.33, 0.2);
	glVertex2f(-.33, 0.2);
	glVertex2f(0,-.39);
	glEnd();

	glBegin(GL_POLYGON); //fan plate 1
	glColor3ub(102, 217, 255);
	glVertex2f(.15, .25);
	glVertex2f(.22, .13);
	glVertex2f(.32,.07);
	glVertex2f(.87, 0.60);
	glVertex2f(.77, 0.7);
	glEnd();

	glBegin(GL_POLYGON); //fan plate 1 shade
	glColor3ub(102, 204, 255);
	glVertex2f(.15, .25);
	glVertex2f(.22, .13);
	glVertex2f(.82, 0.65);
	glVertex2f(.77, 0.7);
	glEnd();

	glBegin(GL_POLYGON);//fan plate 2
	glColor3ub(102, 204, 255);
	glVertex2f(-.15, .25);
	glVertex2f(-.22, .13);
	glVertex2f(-.32,.07);
	glVertex2f(-.87, 0.60);
	glVertex2f(-.77, 0.7);
	glEnd();

	glBegin(GL_POLYGON); //fan plate 2 shade
	glColor3ub(102, 217, 255);
	glVertex2f(-.15, .25);
	glVertex2f(-.22, .13);
	glVertex2f(-.82, 0.65);
	glVertex2f(-.77, 0.7);
	glEnd();

	glBegin(GL_POLYGON); //fan plate 3
	glColor3ub(102, 204, 255);
	glVertex2f(.0, -.25);
	glVertex2f(.13, -.27);
	glVertex2f(.08,-1.0);
	glVertex2f(.0, -1.0);
	glEnd();



	glBegin(GL_POLYGON); //fan plate 3 shade
	glColor3ub(102, 217, 255);
    glVertex2f(-.0, -.25);
	glVertex2f(-.13, -.27);
	glVertex2f(-.08,-1.0);
	glVertex2f(-.0, -1.0);

	glEnd();


	glBegin(GL_LINES); //fan plate lines
	glColor3ub(242, 242, 242);

	glVertex2f(.22, .13);
	glVertex2f(.82, 0.65);

	glVertex2f(-.22, .13);
	glVertex2f(-.82, 0.65);

	glVertex2f(-.0, -.25);
	glVertex2f(-.0, -0.9);

	glEnd();

	glPopMatrix();

      i+=0.1f;





    glColor3ub(117, 117, 163); //fan circle
    triangleFan(0,0,.22);
     glColor3ub(148, 148, 184); //fan circle
    triangleFan(0,0,.18);
     glColor3ub(121, 121, 210); //fan circle
    triangleFan(0,0,.11);



    glColor3ub(255, 255, 255); //fan circle reflection
    triangleFan(0.1,-0.1,.035);
    glColor3ub(255, 255, 255); //fan circle reflection
    triangleFan(-0.1,0.1,.03);
    glColor3ub(255, 255, 255); //fan circle reflection
    triangleFan(0.08,-0.04,.02);







	glFlush();

}

void displayInc() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(1);



	glPushMatrix();
	//glTranslatef(0,0,position);
	glRotatef(i,0.0,0.0,1.0);

	glBegin(GL_TRIANGLES);
	glColor3ub(194, 194, 214);
	glVertex2f(.33, 0.2);
	glVertex2f(-.33, 0.2);
	glVertex2f(0,-.39);
	glEnd();

	glBegin(GL_POLYGON); //fan plate 1
	glColor3ub(102, 217, 255);
	glVertex2f(.15, .25);
	glVertex2f(.22, .13);
	glVertex2f(.32,.07);
	glVertex2f(.87, 0.60);
	glVertex2f(.77, 0.7);
	glEnd();

	glBegin(GL_POLYGON); //fan plate 1 shade
	glColor3ub(102, 204, 255);
	glVertex2f(.15, .25);
	glVertex2f(.22, .13);
	glVertex2f(.82, 0.65);
	glVertex2f(.77, 0.7);
	glEnd();

	glBegin(GL_POLYGON);//fan plate 2
	glColor3ub(102, 204, 255);
	glVertex2f(-.15, .25);
	glVertex2f(-.22, .13);
	glVertex2f(-.32,.07);
	glVertex2f(-.87, 0.60);
	glVertex2f(-.77, 0.7);
	glEnd();

	glBegin(GL_POLYGON); //fan plate 2 shade
	glColor3ub(102, 217, 255);
	glVertex2f(-.15, .25);
	glVertex2f(-.22, .13);
	glVertex2f(-.82, 0.65);
	glVertex2f(-.77, 0.7);
	glEnd();

	glBegin(GL_POLYGON); //fan plate 3
	glColor3ub(102, 204, 255);
	glVertex2f(.0, -.25);
	glVertex2f(.13, -.27);
	glVertex2f(.08,-1.0);
	glVertex2f(.0, -1.0);
	glEnd();



	glBegin(GL_POLYGON); //fan plate 3 shade
	glColor3ub(102, 217, 255);
    glVertex2f(-.0, -.25);
	glVertex2f(-.13, -.27);
	glVertex2f(-.08,-1.0);
	glVertex2f(-.0, -1.0);

	glEnd();


	glBegin(GL_LINES); //fan plate lines
	glColor3ub(242, 242, 242);

	glVertex2f(.22, .13);
	glVertex2f(.82, 0.65);

	glVertex2f(-.22, .13);
	glVertex2f(-.82, 0.65);

	glVertex2f(-.0, -.25);
	glVertex2f(-.0, -0.9);

	glEnd();

	glPopMatrix();

      i+=0.9f;





    glColor3ub(117, 117, 163); //fan circle
    triangleFan(0,0,.22);
     glColor3ub(148, 148, 184); //fan circle
    triangleFan(0,0,.18);
     glColor3ub(121, 121, 210); //fan circle
    triangleFan(0,0,.11);



    glColor3ub(255, 255, 255); //fan circle reflection
    triangleFan(0.1,-0.1,.035);
    glColor3ub(255, 255, 255); //fan circle reflection
    triangleFan(-0.1,0.1,.03);
    glColor3ub(255, 255, 255); //fan circle reflection
    triangleFan(0.08,-0.04,.02);







	glFlush();

}

void displayDec() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(1);



	glPushMatrix();
	//glTranslatef(0,0,position);
	glRotatef(i,0.0,0.0,1.0);

	glBegin(GL_TRIANGLES);
	glColor3ub(194, 194, 214);
	glVertex2f(.33, 0.2);
	glVertex2f(-.33, 0.2);
	glVertex2f(0,-.39);
	glEnd();

	glBegin(GL_POLYGON); //fan plate 1
	glColor3ub(102, 217, 255);
	glVertex2f(.15, .25);
	glVertex2f(.22, .13);
	glVertex2f(.32,.07);
	glVertex2f(.87, 0.60);
	glVertex2f(.77, 0.7);
	glEnd();

	glBegin(GL_POLYGON); //fan plate 1 shade
	glColor3ub(102, 204, 255);
	glVertex2f(.15, .25);
	glVertex2f(.22, .13);
	glVertex2f(.82, 0.65);
	glVertex2f(.77, 0.7);
	glEnd();

	glBegin(GL_POLYGON);//fan plate 2
	glColor3ub(102, 204, 255);
	glVertex2f(-.15, .25);
	glVertex2f(-.22, .13);
	glVertex2f(-.32,.07);
	glVertex2f(-.87, 0.60);
	glVertex2f(-.77, 0.7);
	glEnd();

	glBegin(GL_POLYGON); //fan plate 2 shade
	glColor3ub(102, 217, 255);
	glVertex2f(-.15, .25);
	glVertex2f(-.22, .13);
	glVertex2f(-.82, 0.65);
	glVertex2f(-.77, 0.7);
	glEnd();

	glBegin(GL_POLYGON); //fan plate 3
	glColor3ub(102, 204, 255);
	glVertex2f(.0, -.25);
	glVertex2f(.13, -.27);
	glVertex2f(.08,-1.0);
	glVertex2f(.0, -1.0);
	glEnd();



	glBegin(GL_POLYGON); //fan plate 3 shade
	glColor3ub(102, 217, 255);
    glVertex2f(-.0, -.25);
	glVertex2f(-.13, -.27);
	glVertex2f(-.08,-1.0);
	glVertex2f(-.0, -1.0);

	glEnd();


	glBegin(GL_LINES); //fan plate lines
	glColor3ub(242, 242, 242);

	glVertex2f(.22, .13);
	glVertex2f(.82, 0.65);

	glVertex2f(-.22, .13);
	glVertex2f(-.82, 0.65);

	glVertex2f(-.0, -.25);
	glVertex2f(-.0, -0.9);

	glEnd();

	glPopMatrix();

      i+=0.06f;





    glColor3ub(117, 117, 163); //fan circle
    triangleFan(0,0,.22);
     glColor3ub(148, 148, 184); //fan circle
    triangleFan(0,0,.18);
     glColor3ub(121, 121, 210); //fan circle
    triangleFan(0,0,.11);



    glColor3ub(255, 255, 255); //fan circle reflection
    triangleFan(0.1,-0.1,.035);
    glColor3ub(255, 255, 255); //fan circle reflection
    triangleFan(-0.1,0.1,.03);
    glColor3ub(255, 255, 255); //fan circle reflection
    triangleFan(0.08,-0.04,.02);







	glFlush();

}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(displayRun); // Register display callback handler for window re-paint

	glutIdleFunc(Idle);//glutIdleFunc sets the global idle callback to be func so a GLUT program can perform background processing tasks or continuous animation when window system events are not being received.

    glutKeyboardFunc(handleKeypress);
    glutSpecialFunc(SpecialInput);
    //glutTimerFunc(100, update, 0);
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
