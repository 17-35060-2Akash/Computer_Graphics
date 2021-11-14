#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846

GLfloat i = 0.0f;///bird

GLfloat i2 = 0.1f;
GLfloat j2 = 0.0f;
GLfloat k2 = 0.0f;

GLfloat position1 = 1.0f;//cloud 1
GLfloat position11 = 1.0f;//cloud 2
GLfloat position2 = -1.0f;//sun
GLfloat position3 = -1.0f;//boat
GLfloat position4 = -1.0f;//boat 2
GLfloat position5 = 1.0f;//birds

GLfloat speed1 = 0.01f;//cloud 1
GLfloat speed11 = 0.01f;//cloud 2
GLfloat speed2 = 0.004f;//sun
GLfloat speed3 = 0.001f;//boat
GLfloat speed4 = 0.001f;//boat 2
GLfloat speed5 = 0.02f;//birds



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
	int triangleAmount = 150; //# of triangles used to draw circle

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
void update1(int value)
{

    if(position1 <-1.0)
        position1 = 1.0f;

    position1 -= speed1; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update1, 0);
}

void update11(int value)
{

    if(position11 <-1.0)
        position11 = 1.0f;

    position11 -= speed11; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update11, 0);
}

void update2(int value)
{

    if(position2 <-1.0)
        position2 = 1.0f;

    position2 -= speed2; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update2, 0);
}

void update3(int value) {

    if(position3 <-1.0)
        position3 = 1.0f;


    position3 -= speed3; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update3, 0);

}

void update4(int value) {

    if(position4 >.24)
        position4 = -1.0f;


    position4 += speed4; //position=position-speed;1-.1=.9



	glutPostRedisplay();

	glutTimerFunc(100, update4, 0);

}



void update5(int value) {

    if(position5 <-1.0)
        position5 = 1.0f;

    position5 -= speed5; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update5, 0);
}



void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(1);

///SKY Starts

	glBegin(GL_QUADS);//sky 1
	glColor3ub(0, 255, 255);
	glVertex2f(-1.0, 0.0);
	glVertex2f(1.0, 0.0);
	glVertex2f(1,1);
	glVertex2f(-1,1);
	glEnd();

	glBegin(GL_QUADS);//sky 2
	glColor3ub(26, 255, 255);
	glVertex2f(-1.0, 0.0);
	glVertex2f(1.0, 0.0);
	glVertex2f(1,0.9);
	glVertex2f(-1,0.9);
	glEnd();

    glBegin(GL_QUADS);//sky 3
	glColor3ub(51, 255, 255);
	glVertex2f(-1.0, 0.0);
	glVertex2f(1.0, 0.0);
	glVertex2f(1,0.8);
	glVertex2f(-1,0.8);
	glEnd();

	glBegin(GL_QUADS);//sky 4
	glColor3ub(77, 255, 255);
	glVertex2f(-1.0, 0.0);
	glVertex2f(1.0, 0.0);
	glVertex2f(1,0.7);
	glVertex2f(-1,0.7);
	glEnd();




	glBegin(GL_QUADS);//sky 5
	glColor3ub(102, 255, 255);
	glVertex2f(-1.0, 0.0);
	glVertex2f(1.0, 0.0);
	glVertex2f(1,.6);
	glVertex2f(-1,.6);
	glEnd();

	glBegin(GL_QUADS);//sky 6
	glColor3ub(128, 255, 255);
	glVertex2f(-1.0, 0.0);
	glVertex2f(1.0, 0.0);
	glVertex2f(1,0.5);
	glVertex2f(-1,0.5);
	glEnd();

	glBegin(GL_QUADS);//sky 7
	glColor3ub(153, 255, 255);//157, 148, 161
	glVertex2f(-1.0, 0.0);
	glVertex2f(1.0, 0.0);
	glVertex2f(1,.4);
	glVertex2f(-1,.4);
	glEnd();

	glBegin(GL_QUADS);//sky 8
	glColor3ub(179, 255, 255);
	glVertex2f(-1.0, 0.0);
	glVertex2f(1.0, 0.0);
	glVertex2f(1,0.3);
	glVertex2f(-1,0.3);
	glEnd();

	glBegin(GL_QUADS);//sky 9
	glColor3ub(204, 255, 255);
	glVertex2f(-1.0, 0.0);
	glVertex2f(1.0, 0.0);
	glVertex2f(1,.2);
	glVertex2f(-1,.2);
	glEnd();

	glBegin(GL_QUADS);//sky 10
	glColor3ub(230, 230, 255);
	glVertex2f(-1.0, 0.0);
	glVertex2f(1.0, 0.0);
	glVertex2f(1,.1);
	glVertex2f(-1,.1);
	glEnd();

	///SKY Ends

	///SUN Begins
	glPushMatrix();//moving sun
    glTranslatef(0,position2,0);



    glColor3ub(244, 252, 3);//sun 1
    triangleFan(-.0f,.0f,.20f);
    glColor3ub(252, 244, 3);//sun 2
    triangleFan(-.0f,.0f,.17f);
    glColor3ub(252, 231, 3);//sun 3
    triangleFan(-.0f,.0f,.13f);
    glColor3ub(252, 227, 3);//sun 4
    triangleFan(-.0f,.0f,.07f);
    glPopMatrix();

    ///SUN Ends

	/// Water starts


	glBegin(GL_QUADS);//Water 1
	glColor3ub(45, 185, 185);
	glVertex2f(-1.0, 0.0);
	glVertex2f(1.0, 0.0);
	glVertex2f(1,-1);
	glVertex2f(-1,-1);
	glEnd();

	glBegin(GL_QUADS);//Water 2
	glColor3ub(50, 205, 205);
	glVertex2f(-1.0, 0.0);
	glVertex2f(1.0, 0.0);
	glVertex2f(1,-0.9);
	glVertex2f(-1,-0.9);
	glEnd();

    glBegin(GL_QUADS);//Water 3
	glColor3ub(70, 210, 210);
	glVertex2f(-1.0, 0.0);
	glVertex2f(1.0, 0.0);
	glVertex2f(1,-0.8);
	glVertex2f(-1,-0.8);
	glEnd();

	glBegin(GL_QUADS);//Water 4
	glColor3ub(91, 215, 215);
	glVertex2f(-1.0, 0.0);
	glVertex2f(1.0, 0.0);
	glVertex2f(1,-0.7);
	glVertex2f(-1,-0.7);
	glEnd();




	glBegin(GL_QUADS);//Water 5
	glColor3ub(111, 220, 220);
	glVertex2f(-1.0, 0.0);
	glVertex2f(1.0, 0.0);
	glVertex2f(1,-.6);
	glVertex2f(-1,-.6);
	glEnd();

	glBegin(GL_QUADS);//Water 6
	glColor3ub(132, 225, 225);
	glVertex2f(-1.0, 0.0);
	glVertex2f(1.0, 0.0);
	glVertex2f(1,-0.5);
	glVertex2f(-1,-0.5);
	glEnd();

	glBegin(GL_QUADS);//Water 7
	glColor3ub(152, 230, 230);
	glVertex2f(-1.0, 0.0);
	glVertex2f(1.0, 0.0);
	glVertex2f(1,-.4);
	glVertex2f(-1,-.4);
	glEnd();

	glBegin(GL_QUADS);//Water 8
	glColor3ub(173, 235, 235);
	glVertex2f(-1.0, 0.0);
	glVertex2f(1.0, 0.0);
	glVertex2f(1,-0.3);
	glVertex2f(-1,-0.3);
	glEnd();

	glBegin(GL_QUADS);//Water 9
	glColor3ub(193, 240, 240);
	glVertex2f(-1.0, 0.0);
	glVertex2f(1.0, 0.0);
	glVertex2f(1,-.2);
	glVertex2f(-1,-.2);
	glEnd();

	glBegin(GL_QUADS);//Water 10
	glColor3ub(214, 245, 245);
	glVertex2f(-1.0, 0.0);
	glVertex2f(1.0, 0.0);
	glVertex2f(1,-.1);
	glVertex2f(-1,-.1);
	glEnd();
	///Water Ends

	///Clouds start------------

	glTranslatef(0,0,0);
    glScalef(.5,.5,0);

    glPushMatrix();//moving clouds 2
    glTranslatef(position1,0,0);

    glColor3ub(242, 242, 242);//Clouds
    triangleFan(-.4f,.6f,.15f);
    glColor3ub(242, 242, 242);//Clouds
    triangleFan(-.5f,.7f,.13f);
    glColor3ub(242, 242, 242);//Clouds
    triangleFan(-.57f,.58f,.07);
    glColor3ub(242, 242, 242);//Clouds
    triangleFan(-.67f,.65f,.10);
    glColor3ub(242, 242, 242);//Clouds
    triangleFan(-.3f,.63f,.03f);
    glColor3ub(242, 242, 242);//Clouds
    triangleFan(-.45f,.72f,.10f);
    glColor3ub(242, 242, 242);//Clouds
    triangleFan(-.3f,.67f,.09f);

    glPopMatrix();
    glLoadIdentity();
///
	glPushMatrix();//moving clouds 1
    glTranslatef(position1,0,0);

    glTranslatef(0,0,0);
    glScalef(.6,.6,0);

    glColor3ub(242, 242, 242);//Clouds
    triangleFan(.4f,.6f,.12f);
    glColor3ub(242, 242, 242);//Clouds
    triangleFan(.5f,.7f,.13f);
    glColor3ub(242, 242, 242);//Clouds
    triangleFan(.57f,.6f,.11);
    glColor3ub(242, 242, 242);//Clouds
    triangleFan(.67f,.65f,.11);
    glColor3ub(242, 242, 242);//Clouds
    triangleFan(.3f,.63f,.09f);
    glColor3ub(242, 242, 242);//Clouds
    triangleFan(.45f,.72f,.05f);

    glPopMatrix();
    glLoadIdentity();
    ///

    glTranslatef(0,.05,0);
    glScalef(.8,.8,0);

    glPushMatrix();//moving clouds 2
    glTranslatef(position1,0,0);

    glColor3ub(242, 242, 242);//Clouds
    triangleFan(-.4f,.6f,.15f);
    glColor3ub(242, 242, 242);//Clouds
    triangleFan(-.5f,.7f,.13f);
    glColor3ub(242, 242, 242);//Clouds
    triangleFan(-.57f,.58f,.07);
    glColor3ub(242, 242, 242);//Clouds
    triangleFan(-.67f,.65f,.10);
    glColor3ub(242, 242, 242);//Clouds
    triangleFan(-.3f,.63f,.03f);
    glColor3ub(242, 242, 242);//Clouds
    triangleFan(-.45f,.72f,.10f);
    glColor3ub(242, 242, 242);//Clouds
    triangleFan(-.3f,.67f,.09f);

    glPopMatrix();

    glLoadIdentity();

	///clouds end------------

	///BACKGROUND MOUNTAIN SHADOW BEGINS-------------------------------------------------------------------

	  glTranslatef(0.0,0.42,0);
	  glScalef(1.2,1.2,0);
      glBegin(GL_POLYGON);
        glColor3ub(84,114,135);
        glVertex2f(-.75,-.31);
        glVertex2f(-.97,-.31);
        glVertex2f(-1,-.27);
        glVertex2f(-1,-.35);
        glVertex2f(-.6,-.35);
        glVertex2f(-.6,-.3);
        glVertex2f(-.62,-.29);
        glVertex2f(-.65,-.27);

        glVertex2f(-.6,-.3);
        glVertex2f(-.6,-.35);
        glVertex2f(-.38,-.35);
	    glVertex2f(-.38,-.32);
        glVertex2f(-.39,-.31);
        glVertex2f(-.53,-.31);

        glVertex2f(-.01,-.32);
        glVertex2f(-.2,-.31);
        glVertex2f(-.21,-.3);
	    glVertex2f(-.38,-.32);
        glVertex2f(-.38,-.35);
        glVertex2f(.12,-.35);
        glVertex2f(.12,-.32);
        glVertex2f(.06,-.32);
        glVertex2f(.01,-.3);



	    glEnd();

	    glBegin(GL_POLYGON);
        glColor3ub(84,114,135);

        glVertex2f(.16,-.3);
        glVertex2f(.12,-.32);
        glVertex2f(.12,-.35);
        glVertex2f(.28,-.35);
        glVertex2f(.28,-.32);
        glVertex2f(.22,-.27);
        glVertex2f(.19,-.28);


        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(84,114,135);
        glVertex2f(.28,-.32);
        glVertex2f(.28,-.35);
        glVertex2f(.48,-.35);
        glVertex2f(.48,-.32);
        glVertex2f(.32,-.27);

        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(84,114,135);
        glVertex2f(.48,-.32);
        glVertex2f(.48,-.35);
        glVertex2f(1,-.35);
        glVertex2f(1,-.26);
        glVertex2f(.96,-.26);
        glVertex2f(.89,-.32);
        glVertex2f(.86,-.3);
        glVertex2f(.52,-.29);



        glEnd();
        glLoadIdentity();


///BACKGROUND MOUNTAIN SHADOW ENDS---------------------------------------------------------------------



///MOON REFLECTION ON WATER BEGINS------------------------------------------------------------

     glTranslatef(0.0,0.5,0.0);

     glBegin(GL_QUADS);
	 glColor3ub(252, 227, 3);
	 glVertex2f(-.05,-.6);
	 glVertex2f(-.15,-1);
	 glVertex2f(.15,-1);
     glVertex2f(.05,-.6);

	 glEnd();
	 ///DARK LINES ON THE REFLECTION
	 glLineWidth(2);
     glBegin(GL_LINES);
	 glColor3ub(255, 204, 0);
	 glVertex2f(-.05,-.6);
	 glVertex2f(-.03,-.6);

	 glVertex2f(-.07,-.62);
	 glVertex2f(-.03,-.62);

	 glVertex2f(-.07,-.64);
     glVertex2f(-.02,-.64);

     glVertex2f(-.07,-.647);
     glVertex2f(-.05,-.647);

     glVertex2f(-.05,-.665);
     glVertex2f(-.04,-.665);

     glVertex2f(-.07,-.67);
     glVertex2f(-.04,-.67);

     glVertex2f(-.08,-.68);
     glVertex2f(-.05,-.68);

     glVertex2f(-.08,-.69);
     glVertex2f(-.06,-.69);

     glVertex2f(-.08,-.7);
     glVertex2f(-.07,-.7);

     glVertex2f(-.08,-.71);
     glVertex2f(-.06,-.71);

     glVertex2f(-.08,-.72);
     glVertex2f(-.04,-.72);

     glVertex2f(-.08,-.74);
     glVertex2f(-.04,-.74);
     ///

     glVertex2f(-.09,-.76);
     glVertex2f(-.05,-.76);

     glVertex2f(-.09,-.77);
     glVertex2f(-.06,-.77);

     glVertex2f(-.1,-.79);
     glVertex2f(-.08,-.79);

     glVertex2f(-.1,-.8);
     glVertex2f(-.04,-.8);

     glVertex2f(-.1,-.81);
     glVertex2f(-.04,-.81);

     glVertex2f(-.15,-.82);
     glVertex2f(-.06,-.82);

     glVertex2f(-.15,-.84);
     glVertex2f(-.07,-.84);

     glVertex2f(-.1,-.86);
     glVertex2f(-.06,-.86);

     ///

     glVertex2f(-.1,-.9);
     glVertex2f(-.08,-.9);

     glVertex2f(-.15,-.91);
     glVertex2f(-.08,-.91);

     glVertex2f(-.15,-.92);
     glVertex2f(-.05,-.92);

     glVertex2f(-.15,-.93);
     glVertex2f(-.08,-.93);

     glVertex2f(-.1,-.94);
     glVertex2f(-.08,-.94);

     ///

     glVertex2f(-.15,-.97);
     glVertex2f(-.04,-.97);

     glVertex2f(-.15,-.98);
     glVertex2f(-.09,-.98);

     glVertex2f(-.15,-.99);
     glVertex2f(-.05,-.99);

     ///RIGHT SIDE REFLECTION

     glVertex2f(.05,-.6);
	 glVertex2f(.03,-.6);

	 glVertex2f(.07,-.62);
	 glVertex2f(.03,-.62);

	 glVertex2f(.07,-.64);
     glVertex2f(.02,-.64);

     glVertex2f(.07,-.647);
     glVertex2f(.05,-.647);

     glVertex2f(.05,-.665);
     glVertex2f(.04,-.665);

     glVertex2f(.07,-.67);
     glVertex2f(.04,-.67);

     glVertex2f(.08,-.68);
     glVertex2f(.05,-.68);

     glVertex2f(.08,-.69);
     glVertex2f(.06,-.69);

     glVertex2f(.08,-.7);
     glVertex2f(.07,-.7);

     glVertex2f(.08,-.71);
     glVertex2f(.06,-.71);

     glVertex2f(.08,-.72);
     glVertex2f(.04,-.72);

     glVertex2f(.08,-.74);
     glVertex2f(.04,-.74);
     ///

     glVertex2f(.09,-.76);
     glVertex2f(.05,-.76);

     glVertex2f(.09,-.77);
     glVertex2f(.06,-.77);

     glVertex2f(.1,-.79);
     glVertex2f(.08,-.79);

     glVertex2f(.1,-.8);
     glVertex2f(.04,-.8);

     glVertex2f(.1,-.81);
     glVertex2f(.04,-.81);

     glVertex2f(.15,-.82);
     glVertex2f(.06,-.82);

     glVertex2f(.15,-.84);
     glVertex2f(.07,-.84);

     glVertex2f(.1,-.86);
     glVertex2f(.06,-.86);

     ///

     glVertex2f(.1,-.9);
     glVertex2f(.08,-.9);

     glVertex2f(.15,-.91);
     glVertex2f(.08,-.91);

     glVertex2f(.15,-.92);
     glVertex2f(.05,-.92);

     glVertex2f(.15,-.93);
     glVertex2f(.08,-.93);

     glVertex2f(.1,-.94);
     glVertex2f(.08,-.94);

     ///

     glVertex2f(.15,-.97);
     glVertex2f(.04,-.97);

     glVertex2f(.15,-.98);
     glVertex2f(.09,-.98);

     glVertex2f(.15,-.99);
     glVertex2f(.05,-.99);
	 glEnd();

	 ///WHITE WATER EFFECTS ON REFLECTION
	 glLineWidth(2);
     glBegin(GL_LINES);
	 glColor3ub(252, 240, 3);
	 glVertex2f(-.08,-.75);
	 glVertex2f(-.12,-.75);

     glVertex2f(-.08,-.76);
	 glVertex2f(-.1,-.76);

     glVertex2f(-.1,-.87);
     glVertex2f(-.13,-.87);

     glVertex2f(-.1,-.88);
     glVertex2f(-.16,-.88);

     glVertex2f(-.1,-.89);
     glVertex2f(-.18,-.89);

     glVertex2f(-.1,-.9);
     glVertex2f(-.17,-.9);

     glVertex2f(-.1,-.92);
     glVertex2f(-.15,-.92);

     glVertex2f(-.1,-.94);
     glVertex2f(-.2,-.94);

     glVertex2f(-.1,-.95);
     glVertex2f(-.22,-.95);

     glVertex2f(-.1,-.96);
     glVertex2f(-.19,-.96);

     glVertex2f(-.1,-.99);
     glVertex2f(-.18,-.99);

     glVertex2f(-.1,-1);
     glVertex2f(-.22,-1);



     ///RIGHT SIDE

     glVertex2f(.08,-.75);
	 glVertex2f(.12,-.75);

     glVertex2f(.08,-.76);
	 glVertex2f(.1,-.76);

     glVertex2f(.1,-.87);
     glVertex2f(.13,-.87);

     glVertex2f(.1,-.88);
     glVertex2f(.16,-.88);

     glVertex2f(.1,-.89);
     glVertex2f(.18,-.89);

     glVertex2f(.1,-.9);
     glVertex2f(.17,-.9);

     glVertex2f(.1,-.92);
     glVertex2f(.15,-.92);

     glVertex2f(.1,-.94);
     glVertex2f(.2,-.94);

     glVertex2f(.1,-.95);
     glVertex2f(.22,-.95);

     glVertex2f(.1,-.96);
     glVertex2f(.19,-.96);

     glVertex2f(.1,-.99);
     glVertex2f(.18,-.99);

     glVertex2f(.1,-1);
     glVertex2f(.22,-1);



     ///WATER WAVE

     glVertex2f( -.4,-.99);
     glVertex2f(-.44,-.99);

     glVertex2f( -.8,-.99);
     glVertex2f(-.84,-.99);

     glVertex2f( -.6,-.97);
     glVertex2f(-.64,-.97);

     glVertex2f( -.3,-.93);
     glVertex2f(-.34,-.93);

     glVertex2f( -.5,-.93);
     glVertex2f(-.54,-.93);

     glVertex2f( -.9,-.93);
     glVertex2f(-.94,-.93);

     glVertex2f( -.7,-.9);
     glVertex2f(-.73,-.9);

     glVertex2f( -.6,-.87);
     glVertex2f(-.64,-.87);

     glVertex2f( -.3,-.84);
     glVertex2f(-.34,-.84);

     glVertex2f( -.7,-.82);
     glVertex2f(-.73,-.82);

     glVertex2f( -.8,-.74);
     glVertex2f(-.83,-.74);

     glVertex2f( -.9,-.64);
     glVertex2f(-.93,-.64);

     glVertex2f( -.4,-.74);
     glVertex2f(-.43,-.74);

     glVertex2f( -.6,-.65);
     glVertex2f(-.63,-.65);

     glVertex2f( -.2,-.65);
     glVertex2f(-.23,-.65);

     glVertex2f( -.2,-.55);
     glVertex2f(-.22,-.55);

     glVertex2f( -.1,-.55);
     glVertex2f(-.12,-.55);

     glVertex2f( -.5,-.63);
     glVertex2f(-.52,-.63);

     ///

     glVertex2f( .4,-.99);
     glVertex2f(.44,-.99);

     glVertex2f( .8,-.99);
     glVertex2f(.84,-.99);

     glVertex2f( .6,-.97);
     glVertex2f(.64,-.97);

     glVertex2f( .3,-.93);
     glVertex2f(.34,-.93);

     glVertex2f( .5,-.93);
     glVertex2f(.54,-.93);

     glVertex2f( .9,-.93);
     glVertex2f(.94,-.93);

     glVertex2f( .7,-.9);
     glVertex2f(.73,-.9);

     glVertex2f( .6,-.87);
     glVertex2f(.64,-.87);

     glVertex2f( .3,-.84);
     glVertex2f(.34,-.84);

     glVertex2f( .7,-.82);
     glVertex2f(.73,-.82);

     glVertex2f( .8,-.74);
     glVertex2f(.83,-.74);

     glVertex2f( .9,-.64);
     glVertex2f(.93,-.64);

     glVertex2f( .4,-.74);
     glVertex2f(.43,-.74);

     glVertex2f( .6,-.65);
     glVertex2f(.63,-.65);

     glVertex2f( .2,-.65);
     glVertex2f(.23,-.65);

     glVertex2f( .2,-.55);
     glVertex2f(.22,-.55);

     glVertex2f( .5,-.63);
     glVertex2f(.52,-.63);

	 glEnd();

	 ///WHITE WATER EFFECTS ON REFLECTION
	 glLineWidth(3);
	 glTranslatef(-.01,-.03,0);
     glBegin(GL_LINES);
	 glColor3ub(255, 255, 255);
	 glVertex2f(-.08,-.75);
	 glVertex2f(-.12,-.75);

     glVertex2f(-.08,-.76);
	 glVertex2f(-.1,-.76);

     glVertex2f(-.1,-.87);
     glVertex2f(-.13,-.87);

     glVertex2f(-.1,-.88);
     glVertex2f(-.16,-.88);

     glVertex2f(-.1,-.89);
     glVertex2f(-.18,-.89);

     glVertex2f(-.1,-.9);
     glVertex2f(-.17,-.9);

     glVertex2f(-.1,-.92);
     glVertex2f(-.15,-.92);

     glVertex2f(-.1,-.94);
     glVertex2f(-.2,-.94);

     glVertex2f(-.1,-.95);
     glVertex2f(-.22,-.95);

     glVertex2f(-.1,-.96);
     glVertex2f(-.19,-.96);

     glVertex2f(-.1,-.99);
     glVertex2f(-.18,-.99);

     glVertex2f(-.1,-1);
     glVertex2f(-.22,-1);



     ///RIGHT SIDE

     glVertex2f(.08,-.75);
	 glVertex2f(.12,-.75);

     glVertex2f(.08,-.76);
	 glVertex2f(.1,-.76);

     glVertex2f(.1,-.87);
     glVertex2f(.13,-.87);

     glVertex2f(.1,-.88);
     glVertex2f(.16,-.88);

     glVertex2f(.1,-.89);
     glVertex2f(.18,-.89);

     glVertex2f(.1,-.9);
     glVertex2f(.17,-.9);

     glVertex2f(.1,-.92);
     glVertex2f(.15,-.92);

     glVertex2f(.1,-.94);
     glVertex2f(.2,-.94);

     glVertex2f(.1,-.95);
     glVertex2f(.22,-.95);

     glVertex2f(.1,-.96);
     glVertex2f(.19,-.96);

     glVertex2f(.1,-.99);
     glVertex2f(.18,-.99);

     glVertex2f(.1,-1);
     glVertex2f(.22,-1);



     ///WATER WAVE

     glVertex2f( -.4,-.99);
     glVertex2f(-.44,-.99);

     glVertex2f( -.8,-.99);
     glVertex2f(-.84,-.99);

     glVertex2f( -.6,-.97);
     glVertex2f(-.64,-.97);

     glVertex2f( -.3,-.93);
     glVertex2f(-.34,-.93);

     glVertex2f( -.5,-.93);
     glVertex2f(-.54,-.93);

     glVertex2f( -.9,-.93);
     glVertex2f(-.94,-.93);

     glVertex2f( -.7,-.9);
     glVertex2f(-.73,-.9);

     glVertex2f( -.6,-.87);
     glVertex2f(-.64,-.87);

     glVertex2f( -.3,-.84);
     glVertex2f(-.34,-.84);

     glVertex2f( -.7,-.82);
     glVertex2f(-.73,-.82);

     glVertex2f( -.8,-.74);
     glVertex2f(-.83,-.74);

     glVertex2f( -.9,-.64);
     glVertex2f(-.93,-.64);

     glVertex2f( -.4,-.74);
     glVertex2f(-.43,-.74);

     glVertex2f( -.6,-.65);
     glVertex2f(-.63,-.65);

     glVertex2f( -.2,-.65);
     glVertex2f(-.23,-.65);

     glVertex2f( -.2,-.55);
     glVertex2f(-.22,-.55);

     glVertex2f( -.1,-.55);
     glVertex2f(-.12,-.55);

     glVertex2f( -.5,-.63);
     glVertex2f(-.52,-.63);

     ///

     glVertex2f( .4,-.99);
     glVertex2f(.44,-.99);

     glVertex2f( .8,-.99);
     glVertex2f(.84,-.99);

     glVertex2f( .6,-.97);
     glVertex2f(.64,-.97);

     glVertex2f( .3,-.93);
     glVertex2f(.34,-.93);

     glVertex2f( .5,-.93);
     glVertex2f(.54,-.93);

     glVertex2f( .9,-.93);
     glVertex2f(.94,-.93);

     glVertex2f( .7,-.9);
     glVertex2f(.73,-.9);

     glVertex2f( .6,-.87);
     glVertex2f(.64,-.87);

     glVertex2f( .3,-.84);
     glVertex2f(.34,-.84);

     glVertex2f( .7,-.82);
     glVertex2f(.73,-.82);

     glVertex2f( .8,-.74);
     glVertex2f(.83,-.74);

     glVertex2f( .9,-.64);
     glVertex2f(.93,-.64);

     glVertex2f( .4,-.74);
     glVertex2f(.43,-.74);

     glVertex2f( .6,-.65);
     glVertex2f(.63,-.65);

     glVertex2f( .2,-.65);
     glVertex2f(.23,-.65);

     glVertex2f( .2,-.55);
     glVertex2f(.22,-.55);

     glVertex2f( .5,-.63);
     glVertex2f(.52,-.63);

	 glEnd();

	 ///WHITE WATER EFFECTS ON REFLECTION
	 glTranslatef(-0.0,-0.3,0);
	 glLineWidth(2);
     glBegin(GL_LINES);
	 glColor3ub(252, 240, 3);
	 glVertex2f(-.08,-.75);
	 glVertex2f(-.12,-.75);

     glVertex2f(-.08,-.76);
	 glVertex2f(-.1,-.76);

     glVertex2f(-.1,-.87);
     glVertex2f(-.13,-.87);

     glVertex2f(-.1,-.88);
     glVertex2f(-.16,-.88);

     glVertex2f(-.1,-.89);
     glVertex2f(-.18,-.89);

     glVertex2f(-.1,-.9);
     glVertex2f(-.17,-.9);

     glVertex2f(-.1,-.92);
     glVertex2f(-.15,-.92);

     glVertex2f(-.1,-.94);
     glVertex2f(-.2,-.94);

     glVertex2f(-.1,-.95);
     glVertex2f(-.22,-.95);

     glVertex2f(-.1,-.96);
     glVertex2f(-.19,-.96);

     glVertex2f(-.1,-.99);
     glVertex2f(-.18,-.99);

     glVertex2f(-.1,-1);
     glVertex2f(-.22,-1);



     ///RIGHT SIDE

     glVertex2f(.08,-.75);
	 glVertex2f(.12,-.75);

     glVertex2f(.08,-.76);
	 glVertex2f(.1,-.76);

     glVertex2f(.1,-.87);
     glVertex2f(.13,-.87);

     glVertex2f(.1,-.88);
     glVertex2f(.16,-.88);

     glVertex2f(.1,-.89);
     glVertex2f(.18,-.89);

     glVertex2f(.1,-.9);
     glVertex2f(.17,-.9);

     glVertex2f(.1,-.92);
     glVertex2f(.15,-.92);

     glVertex2f(.1,-.94);
     glVertex2f(.2,-.94);

     glVertex2f(.1,-.95);
     glVertex2f(.22,-.95);

     glVertex2f(.1,-.96);
     glVertex2f(.19,-.96);

     glVertex2f(.1,-.99);
     glVertex2f(.18,-.99);

     glVertex2f(.1,-1);
     glVertex2f(.22,-1);



     ///WATER WAVE

     glVertex2f( -.4,-.99);
     glVertex2f(-.44,-.99);

     glVertex2f( -.8,-.99);
     glVertex2f(-.84,-.99);

     glVertex2f( -.6,-.97);
     glVertex2f(-.64,-.97);

     glVertex2f( -.3,-.93);
     glVertex2f(-.34,-.93);

     glVertex2f( -.5,-.93);
     glVertex2f(-.54,-.93);

     glVertex2f( -.9,-.93);
     glVertex2f(-.94,-.93);

     glVertex2f( -.7,-.9);
     glVertex2f(-.73,-.9);

     glVertex2f( -.6,-.87);
     glVertex2f(-.64,-.87);

     glVertex2f( -.3,-.84);
     glVertex2f(-.34,-.84);

     glVertex2f( -.7,-.82);
     glVertex2f(-.73,-.82);

     glVertex2f( -.8,-.74);
     glVertex2f(-.83,-.74);

     glVertex2f( -.9,-.64);
     glVertex2f(-.93,-.64);

     glVertex2f( -.4,-.74);
     glVertex2f(-.43,-.74);

     glVertex2f( -.6,-.65);
     glVertex2f(-.63,-.65);

     glVertex2f( -.2,-.65);
     glVertex2f(-.23,-.65);

     glVertex2f( -.2,-.55);
     glVertex2f(-.22,-.55);

     glVertex2f( -.1,-.55);
     glVertex2f(-.12,-.55);

     glVertex2f( -.5,-.63);
     glVertex2f(-.52,-.63);

     ///

     glVertex2f( .4,-.99);
     glVertex2f(.44,-.99);

     glVertex2f( .8,-.99);
     glVertex2f(.84,-.99);

     glVertex2f( .6,-.97);
     glVertex2f(.64,-.97);

     glVertex2f( .3,-.93);
     glVertex2f(.34,-.93);

     glVertex2f( .5,-.93);
     glVertex2f(.54,-.93);

     glVertex2f( .9,-.93);
     glVertex2f(.94,-.93);

     glVertex2f( .7,-.9);
     glVertex2f(.73,-.9);

     glVertex2f( .6,-.87);
     glVertex2f(.64,-.87);

     glVertex2f( .3,-.84);
     glVertex2f(.34,-.84);

     glVertex2f( .7,-.82);
     glVertex2f(.73,-.82);

     glVertex2f( .8,-.74);
     glVertex2f(.83,-.74);

     glVertex2f( .9,-.64);
     glVertex2f(.93,-.64);

     glVertex2f( .4,-.74);
     glVertex2f(.43,-.74);

     glVertex2f( .6,-.65);
     glVertex2f(.63,-.65);

     glVertex2f( .2,-.65);
     glVertex2f(.23,-.65);

     glVertex2f( .2,-.55);
     glVertex2f(.22,-.55);

     glVertex2f( .5,-.63);
     glVertex2f(.52,-.63);

	 glEnd();

	 ///WHITE WATER EFFECTS ON REFLECTION
	 glLineWidth(2);
     glBegin(GL_LINES);
	 glColor3ub(252, 240, 3);
	 glVertex2f(-.08,-.75);
	 glVertex2f(-.12,-.75);

     glVertex2f(-.08,-.76);
	 glVertex2f(-.1,-.76);

     glVertex2f(-.1,-.87);
     glVertex2f(-.13,-.87);

     glVertex2f(-.1,-.88);
     glVertex2f(-.16,-.88);

     glVertex2f(-.1,-.89);
     glVertex2f(-.18,-.89);

     glVertex2f(-.1,-.9);
     glVertex2f(-.17,-.9);

     glVertex2f(-.1,-.92);
     glVertex2f(-.15,-.92);

     glVertex2f(-.1,-.94);
     glVertex2f(-.2,-.94);

     glVertex2f(-.1,-.95);
     glVertex2f(-.22,-.95);

     glVertex2f(-.1,-.96);
     glVertex2f(-.19,-.96);

     glVertex2f(-.1,-.99);
     glVertex2f(-.18,-.99);

     glVertex2f(-.1,-1);
     glVertex2f(-.22,-1);



     ///RIGHT SIDE

     glVertex2f(.08,-.75);
	 glVertex2f(.12,-.75);

     glVertex2f(.08,-.76);
	 glVertex2f(.1,-.76);

     glVertex2f(.1,-.87);
     glVertex2f(.13,-.87);

     glVertex2f(.1,-.88);
     glVertex2f(.16,-.88);

     glVertex2f(.1,-.89);
     glVertex2f(.18,-.89);

     glVertex2f(.1,-.9);
     glVertex2f(.17,-.9);

     glVertex2f(.1,-.92);
     glVertex2f(.15,-.92);

     glVertex2f(.1,-.94);
     glVertex2f(.2,-.94);

     glVertex2f(.1,-.95);
     glVertex2f(.22,-.95);

     glVertex2f(.1,-.96);
     glVertex2f(.19,-.96);

     glVertex2f(.1,-.99);
     glVertex2f(.18,-.99);

     glVertex2f(.1,-1);
     glVertex2f(.22,-1);



     ///WATER WAVE

     glVertex2f( -.4,-.99);
     glVertex2f(-.44,-.99);

     glVertex2f( -.8,-.99);
     glVertex2f(-.84,-.99);

     glVertex2f( -.6,-.97);
     glVertex2f(-.64,-.97);

     glVertex2f( -.3,-.93);
     glVertex2f(-.34,-.93);

     glVertex2f( -.5,-.93);
     glVertex2f(-.54,-.93);

     glVertex2f( -.9,-.93);
     glVertex2f(-.94,-.93);

     glVertex2f( -.7,-.9);
     glVertex2f(-.73,-.9);

     glVertex2f( -.6,-.87);
     glVertex2f(-.64,-.87);

     glVertex2f( -.3,-.84);
     glVertex2f(-.34,-.84);

     glVertex2f( -.7,-.82);
     glVertex2f(-.73,-.82);

     glVertex2f( -.8,-.74);
     glVertex2f(-.83,-.74);

     glVertex2f( -.9,-.64);
     glVertex2f(-.93,-.64);

     glVertex2f( -.4,-.74);
     glVertex2f(-.43,-.74);

     glVertex2f( -.6,-.65);
     glVertex2f(-.63,-.65);

     glVertex2f( -.2,-.65);
     glVertex2f(-.23,-.65);

     glVertex2f( -.2,-.55);
     glVertex2f(-.22,-.55);

     glVertex2f( -.1,-.55);
     glVertex2f(-.12,-.55);

     glVertex2f( -.5,-.63);
     glVertex2f(-.52,-.63);

     ///

     glVertex2f( .4,-.99);
     glVertex2f(.44,-.99);

     glVertex2f( .8,-.99);
     glVertex2f(.84,-.99);

     glVertex2f( .6,-.97);
     glVertex2f(.64,-.97);

     glVertex2f( .3,-.93);
     glVertex2f(.34,-.93);

     glVertex2f( .5,-.93);
     glVertex2f(.54,-.93);

     glVertex2f( .9,-.93);
     glVertex2f(.94,-.93);

     glVertex2f( .7,-.9);
     glVertex2f(.73,-.9);

     glVertex2f( .6,-.87);
     glVertex2f(.64,-.87);

     glVertex2f( .3,-.84);
     glVertex2f(.34,-.84);

     glVertex2f( .7,-.82);
     glVertex2f(.73,-.82);

     glVertex2f( .8,-.74);
     glVertex2f(.83,-.74);

     glVertex2f( .9,-.64);
     glVertex2f(.93,-.64);

     glVertex2f( .4,-.74);
     glVertex2f(.43,-.74);

     glVertex2f( .6,-.65);
     glVertex2f(.63,-.65);

     glVertex2f( .2,-.65);
     glVertex2f(.23,-.65);

     glVertex2f( .2,-.55);
     glVertex2f(.22,-.55);

     glVertex2f( .5,-.63);
     glVertex2f(.52,-.63);

	 glEnd();

glLoadIdentity();

///MOON REFLECTION ON WATER ENDS------------------------------------------------------------




///Left BOAT BEGINS------------------------------------------------------------------------

glPushMatrix();

glTranslatef(position4,0,0);

glTranslatef(.1,-0.3,0);
glScalef(.2,.2,0);

   glBegin(GL_QUADS);

glColor3f(0.863, 0.863, 0.863);
glBegin(GL_POLYGON);
glVertex3f(-0.36,0.30,0.0);
glVertex3f(-0.85,0.30,0.0);
glVertex3f(-0.85,0.43,0.0);
glVertex3f(-0.36,0.60,0.0);
glEnd();
glColor3f(0.000, 0.980, 0.604);
glBegin(GL_POLYGON);
glVertex3f(-0.78,0.30,0.0);
glVertex3f(-0.82,0.30,0.0);
glVertex3f(-0.82,0.65,0.0);
glVertex3f(-0.78,0.655,0.0);
glEnd();
glColor3f(0.502, 0.000, 0.000);
glBegin(GL_POLYGON);
glVertex3f(-0.693,0.50,0.0);
glVertex3f(-0.70,0.50,0.0);
glVertex3f(-0.70,0.89,0.0);
glVertex3f(-0.693,0.89,0.0);
glEnd();
glColor3f(0.502, 0.000, 0.000);
glBegin(GL_POLYGON);
glVertex3f(-0.69,0.87,0.0);
glVertex3f(-0.703,0.87,0.0);
glVertex3f(-0.71,0.89,0.0);
glVertex3f(-0.68,0.89,0.0);
glEnd();
glColor3f(0.502, 0.000, 0.000);
glBegin(GL_POLYGON);
glVertex3f(-0.66,0.823,0.0);
glVertex3f(-0.73,0.823,0.0);
glVertex3f(-0.73,0.83,0.0);
glVertex3f(-0.66,0.83,0.0);
glEnd();
glColor3f(0.502, 0.000, 0.000);
glBegin(GL_POLYGON);
glVertex3f(-0.67,0.843,0.0);
glVertex3f(-0.72,0.843,0.0);
glVertex3f(-0.72,0.85,0.0);
glVertex3f(-0.67,0.85,0.0);
glEnd();
glColor3f(0.502, 0.000, 0.000);
glBegin(GL_POLYGON);
glVertex3f(-0.67,0.803,0.0);
glVertex3f(-0.72,0.803,0.0);
glVertex3f(-0.72,0.81,0.0);
glVertex3f(-0.67,0.81,0.0)
;
glEnd();
glColor3f(0.863, 0.863, 0.863);
glBegin(GL_POLYGON);
glVertex3f(-0.40,0.50,0.0);
glVertex3f(-0.75,0.50,0.0);
glVertex3f(-0.75,0.61,0.0);
glVertex3f(-0.40,0.71,0.0);
glEnd();
glColor3f(0.863, 0.863, 0.863);
glBegin(GL_POLYGON);
glVertex3f(-0.65,0.50,0.0);
glVertex3f(-0.75,0.50,0.0);
glVertex3f(-0.75,0.64,0.0);
glVertex3f(-0.65,0.67,0.0);
glEnd();
glColor3f(0.863, 0.863, 0.863);
glBegin(GL_POLYGON);
glVertex3f(-0.36,0.30,0.0);
glVertex3f(-0.83,0.30,0.0);
glVertex3f(-0.83,0.47,0.0);
glVertex3f(-0.36,0.64,0.0);
glEnd();
glColor3f(0.863, 0.863, 0.863);
glBegin(GL_POLYGON);
glVertex3f(-0.26,0.30,0.0);
glVertex3f(-0.36,0.30,0.0);
glVertex3f(-0.36,0.60,0.0);
glVertex3f(-0.26,0.52,0.0);
glEnd();
glColor3f(0.863, 0.863, 0.863);
glBegin(GL_POLYGON);
glVertex3f(-0.33,0.50,0.0);
glVertex3f(-0.40,0.50,0.0);
glVertex3f(-0.40,0.71,0.0);
glVertex3f(-0.33,0.65,0.0);
glEnd();
glColor3f(0.863, 0.863, 0.863);
glBegin(GL_POLYGON);
glVertex3f(-0.28,0.30,0.0);
glVertex3f(-0.36,0.30,0.0);
glVertex3f(-0.36,0.64,0.0);
glVertex3f(-0.28,0.57,0.0);
glEnd();
//Windows
glColor3f(0.184, 0.310, 0.310);
glBegin(GL_POLYGON);
glVertex3f(-0.42,0.64,0.0);
glVertex3f(-0.46,0.63,0.0);
glVertex3f(-0.46,0.67,0.0);
glVertex3f(-0.42,0.68,0.0);
glEnd();
glColor3f(0.184, 0.310, 0.310);
glBegin(GL_POLYGON);
glVertex3f(-0.49,0.62,0.0);
glVertex3f(-0.54,0.605,0.0);
glVertex3f(-0.54,0.643,0.0);
glVertex3f(-0.49,0.657,0.0);
glEnd();
glColor3f(0.184, 0.310, 0.310);
glBegin(GL_POLYGON);
glVertex3f(-0.57,0.595,0.0);
glVertex3f(-0.63,0.575,0.0);
glVertex3f(-0.63,0.615,0.0);
glVertex3f(-0.57,0.635,0.0);
glEnd();
glColor3f(0.184, 0.310, 0.310);
glBegin(GL_POLYGON);
glVertex3f(-0.66,0.565,0.0);
glVertex3f(-0.72,0.545,0.0);
glVertex3f(-0.72,0.585,0.0);
glVertex3f(-0.66,0.605,0.0);
glEnd();
glColor3f(0.184, 0.310, 0.310);
glBegin(GL_POLYGON);
glVertex3f(-0.405,0.52,0.0);
glVertex3f(-0.445,0.507,0.0);
glVertex3f(-0.445,0.547,0.0);
glVertex3f(-0.405,0.56,0.0);
glEnd();
glColor3f(0.184, 0.310, 0.310);
glBegin(GL_POLYGON);
glVertex3f(-0.48,0.497,0.0);
glVertex3f(-0.53,0.48,0.0);
glVertex3f(-0.53,0.52,0.0);
glVertex3f(-0.48,0.537,0.0);
glEnd();
glColor3f(0.184, 0.310, 0.310);
glBegin(GL_POLYGON);
glVertex3f(-0.56,0.47,0.0);
glVertex3f(-0.615,0.45,0.0);
glVertex3f(-0.615,0.49,0.0);
glVertex3f(-0.56,0.51,0.0);
glEnd();
glColor3f(0.184, 0.310, 0.310);
glBegin(GL_POLYGON);
glVertex3f(-0.647,0.44,0.0);
glVertex3f(-0.699,0.42,0.0);
glVertex3f(-0.699,0.46,0.0);
glVertex3f(-0.647,0.48,0.0);
glEnd();
glColor3f(0.663, 0.663, 0.663);
glBegin(GL_LINES);
glVertex3f(-0.85,0.43,0.0);
glVertex3f(-0.38,0.60,0.0);
glEnd();
glColor3f(0.663, 0.663, 0.663);
glBegin(GL_LINES);
glVertex3f(-0.83,0.47,0.0);
glVertex3f(-0.36,0.64,0.0);
glEnd();
glColor3f(0.663, 0.663, 0.663);
glBegin(GL_POLYGON);
glVertex3f(-0.65,0.64,0.0);
glVertex3f(-0.62,0.648,0.0);
glVertex3f(-0.65,0.67,0.0);
glVertex3f(-0.62,0.648,0.0);
glEnd();
glColor3f(0.663, 0.663, 0.663);
glBegin(GL_LINES);
glVertex3f(-0.38,0.60,0.0);
glVertex3f(-0.26,0.52,0.0);
glEnd();
glColor3f(0.663, 0.663, 0.663);
glBegin(GL_LINES);
glVertex3f(-0.36,0.64,0.0);
glVertex3f(-0.28,0.57,0.0);
glEnd();
glColor3f(0.663, 0.663, 0.663);
glBegin(GL_LINES);
glVertex3f(-0.38,0.60,0.0);
glVertex3f(-0.38,0.50,0.0);
glEnd();
glColor3f(0.663, 0.663, 0.663);
glBegin(GL_LINES);
glVertex3f(-0.36,0.64,0.0);
glVertex3f(-0.36,0.587,0.0);
glEnd();
glColor3f(0.663, 0.663, 0.663);
glBegin(GL_LINES);
glVertex3f(-0.40,0.71,0.0);
glVertex3f(-0.40,0.627,0.0);
glEnd();
//Ground of ship
glColor3f(0.000, 0.000, 1.000);
glBegin(GL_POLYGON);
glVertex3f(-0.20,0.15,0.0);
glVertex3f(-0.25,0.15,0.0);
glVertex3f(-0.13,0.50,0.0);
glVertex3f(-0.08,0.41,0.0);
glEnd();
glColor3f(0.863, 0.863, 0.863);
glBegin(GL_POLYGON);
glVertex3f(-0.20,0.15,0.0);
glVertex3f(-0.25,0.15,0.0);
glVertex3f(-0.165,0.40,0.0);
glVertex3f(-0.12,0.324,0.0);
glEnd();
glColor3f(0.863, 0.863, 0.863);
glBegin(GL_POLYGON);
glVertex3f(-0.25,0.15,0.0);
glVertex3f(-0.45,0.15,0.0);
glVertex3f(-0.365,0.40,0.0);
glVertex3f(-0.165,0.40,0.0);
glEnd();

glColor3f(0.000, 0.000, 1.000);
glBegin(GL_POLYGON);
glVertex3f(-0.15,0.40,0.0);
glVertex3f(-0.42,0.40,0.0);
glVertex3f(-0.39,0.50,0.0);
glVertex3f(-0.131,0.50,0.0);
glEnd();
glColor3f(0.863, 0.863, 0.863);
glBegin(GL_POLYGON);
glVertex3f(-0.45,0.15,0.0);
glVertex3f(-0.85,0.15,0.0);
glVertex3f(-0.93,0.35,0.0);
glVertex3f(-0.365,0.35,0.0);
glEnd();
glColor3f(0.000, 0.000, 1.000);
glBegin(GL_POLYGON);
glVertex3f(-0.384,0.35,0.0);
glVertex3f(-0.93,0.35,0.0);
glVertex3f(-0.95,0.40,0.0);
glVertex3f(-0.365,0.40,0.0);
glEnd();
glColor3f(0.663, 0.663, 0.663);
glBegin(GL_LINES);
glVertex3f(-0.22,0.24,0.0);
glVertex3f(-0.13,0.50,0.0);
glEnd();glBegin(GL_LINES);///bars
	     glColor3ub(240, 240, 237);
glColor3f(0.663, 0.663, 0.663);
glBegin(GL_LINES);
glVertex3f(-0.24,0.15,0.0);
glVertex3f(-0.22,0.24,0.0);
glEnd();
glLoadIdentity();

glPopMatrix();

///Left BOAT ENDS--------------------------------------------------------------------------

///City----------------------------------------


glTranslatef(.15,-0.27,0);
    glScalef(.9,.9,0);

	///city ground+++++
    glBegin(GL_QUADS);
    glColor3ub(96, 64, 32);
    glVertex2f(1.0f, -0.4f);
    glVertex2f(-0.08f, 0.30f);
    glVertex2f(-0.08, 0.32f);
    glVertex2f(1.0f, 0.3f);
    glEnd();
    glLoadIdentity();


    ///pineapple  building starts-----
     glTranslatef(.01,-0.4,0);
    glScalef(.8,1.2,0);
    glColor3ub(0, 179, 179);
    triangleFan(.3,.34,.03);
    glColor3ub(0, 179, 179);
    triangleFan(.3,.37,.05);
     glColor3ub(0, 179, 179);
    triangleFan(.3,.4,.07);
      glColor3ub(0, 179, 179);
    triangleFan(.3,.43,.085);
    glColor3ub(0, 179, 179);
    triangleFan(.3,.46,.095);
    glColor3ub(0, 179, 179);
    triangleFan(.3,.49,.098);
    glColor3ub(0, 179, 179);
    triangleFan(.3,.52,.1);
    glColor3ub(0, 179, 179);
    triangleFan(.3,.56,.098);
    glColor3ub(0, 179, 179);
    triangleFan(.3,.6,.094);
    glColor3ub(0, 179, 179);
    triangleFan(.3,.63,.085);
    glColor3ub(0, 179, 179);
    triangleFan(.3,.67,.07);

    glBegin(GL_POLYGON);
    glColor3ub(0, 179, 179);
    glVertex2f(0.24, .71);

    glVertex2f(0.36, 0.71);
    glVertex2f(0.3, 0.85);
    glEnd();//done

    glBegin(GL_POLYGON);//upper shed
    glColor3ub(0, 102, 102);
    glVertex2f(0.24, .71);
    glVertex2f(0.28, .69);
    glVertex2f(0.32, .69);

    glVertex2f(0.36, 0.71);
    glVertex2f(0.3, 0.85);
    glEnd();//done

    glLineWidth(1);
    glBegin(GL_LINES);//upper shed border
    glColor3ub(0, 0, 0);
    glVertex2f(0.24, .71);
    glVertex2f(0.28, .69);

    glVertex2f(0.28, .69);
    glVertex2f(0.32, .69);

     glVertex2f(0.32, .69);
    glVertex2f(0.36, 0.71);
    //
    glVertex2f(0.24, .71);
    glVertex2f(0.3, 0.85);
    glVertex2f(0.28, .69);
    glVertex2f(0.3, 0.85);
    glVertex2f(0.32, .69);
    glVertex2f(0.3, 0.85);

    glVertex2f(0.36, 0.71);
    glVertex2f(0.3, 0.85);


    glEnd();//done

    glBegin(GL_POLYGON);//design
    glColor3ub(51, 204, 204);

    glVertex2f(0.32, .69);
    glVertex2f(0.28, .69);
    glVertex2f(0.4, 0.5);
    glVertex2f(0.4, 0.52);

    glEnd();//done

    glBegin(GL_POLYGON);//design
    glColor3ub(51, 204, 204);

    glVertex2f(0.231, .68);
    glVertex2f(0.22, .644);
    glVertex2f(0.38, 0.4);
    glVertex2f(0.38, 0.42);

    glEnd();//done

    glBegin(GL_POLYGON);//design
    glColor3ub(51, 204, 204);

    glVertex2f(0.205, .58);
    glVertex2f(0.205, .554);
    glVertex2f(0.35, 0.35);
    glVertex2f(0.32, 0.37);

    glEnd();//done

    glLineWidth(0.5);
    glBegin(GL_LINES);//white Lines
    glColor3ub(255, 255, 255);
    glVertex2f(0.32, .81);
    glVertex2f(0.22, .41);

    glVertex2f(0.35, .74);
    glVertex2f(0.25, .36);

    glVertex2f(0.375, .67);
    glVertex2f(0.29, .31);
 glEnd();//done


 //glTranslatef(.01,-.013,0);
    glBegin(GL_LINES);//white Lines
    glColor3ub(255, 255, 255);
    glVertex2f(0.32, .81);
    glVertex2f(0.22, .41);

    glVertex2f(0.35, .74);
    glVertex2f(0.25, .36);

    glVertex2f(0.375, .67);
    glVertex2f(0.29, .31);
 glEnd();//done

 glLoadIdentity();

     glTranslatef(.53,-0.19,0);
    glScalef(.9,.9,0);

    glBegin(GL_LINES);//white Lines
    glColor3ub(255, 255, 255);
    glVertex2f(-0.34, .81);
    glVertex2f(-0.22, .46);

    glVertex2f(-0.36, .73);
    glVertex2f(-0.25, .36);

    glVertex2f(-0.375, .67);
    glVertex2f(-0.29, .31);
 glEnd();

glLineWidth(1);












///pineapple building ends-----

///circle building starts

glLineWidth(1);
     glTranslatef(0.15,-0.2,0);
     glScalef(0.95,1.2,0);
	//right side 2nd building circle
	glColor3ub(161, 181, 214);
    triangleFan(0.85f, 0.25f, 0.15f);//done


    //right side 2nd building circle partition
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.715f, 0.30f);
    glVertex2f(0.99f, 0.30f);

    glVertex2f(0.70f, 0.28f);
    glVertex2f(0.995f, 0.28f);

    glVertex2f(0.70f, 0.22f);
    glVertex2f(0.99f, 0.22f);

    glVertex2f(0.75f, 0.36f);
    glVertex2f(0.75f, 0.12f);

    glVertex2f(0.78f, 0.37f);
    glVertex2f(0.78f, 0.13f);

    glVertex2f(0.85f, 0.395f);
    glVertex2f(0.85f, 0.13f);
    glEnd();//done

     glTranslatef(0.008,0.009,0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.715f, 0.30f);
    glVertex2f(0.99f, 0.30f);

    glVertex2f(0.70f, 0.28f);
    glVertex2f(0.995f, 0.28f);

    glVertex2f(0.70f, 0.22f);
    glVertex2f(0.99f, 0.22f);

    glVertex2f(0.75f, 0.36f);
    glVertex2f(0.75f, 0.12f);

    glVertex2f(0.78f, 0.37f);
    glVertex2f(0.78f, 0.13f);

    glVertex2f(0.85f, 0.395f);
    glVertex2f(0.85f, 0.13f);
    glEnd();
    glLoadIdentity();


///Circular building ends----------------------------

///Ash anguler building starts-----

     glTranslatef(0.15,-0.25,0);
     glScalef(0.95,0.95,0);

    glBegin(GL_POLYGON);
    glColor3ub(193, 203, 219);
    glVertex2f(0.86, -0.1);

    glVertex2f(0.86, 0.4);
    glVertex2f(0.76, 0.47);
    glVertex2f(0.6, 0.4);
    glVertex2f(0.6, -0.1);
    glEnd();//done

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.76, 0.47);
    glVertex2f(0.76, -0.1);

    glEnd();//done

    //building partitions
    glBegin(GL_LINES);      //partition1_left
    glColor3ub(0,0,0);
    glVertex2f(0.6f, 0.35f);
    glVertex2f(0.76f, 0.42);
    glEnd();

    glBegin(GL_LINES);      //partition1_right
    glColor3ub(0,0,0);
    glVertex2f(0.76f, 0.42f);
    glVertex2f(0.86f, 0.35);
    glEnd();

    glBegin(GL_LINES);      //partition2_left
    glColor3ub(0,0,0);
    glVertex2f(0.6f, 0.3f);
    glVertex2f(0.76f, 0.37);
    glEnd();

    glBegin(GL_LINES);      //partition2_right
    glColor3ub(0,0,0);
    glVertex2f(0.76f, 0.37f);
    glVertex2f(0.86f, 0.30);
    glEnd();

    glBegin(GL_LINES);      //partition3_left
    glColor3ub(0,0,0);
    glVertex2f(0.6f, 0.25f);
    glVertex2f(0.76f, 0.32);
    glEnd();

    glBegin(GL_LINES);      //partition3_right
    glColor3ub(0,0,0);
    glVertex2f(0.76f, 0.32f);
    glVertex2f(0.86f, 0.25);
    glEnd();

    glBegin(GL_LINES);      //partition4_left
    glColor3ub(0,0,0);
    glVertex2f(0.6f, 0.20f);
    glVertex2f(0.76f, 0.27);
    glEnd();

    glBegin(GL_LINES);      //partition4_right
    glColor3ub(0,0,0);
    glVertex2f(0.76f, 0.27f);
    glVertex2f(0.86f, 0.20);
    glEnd();

    glBegin(GL_LINES);      //partition5_left
    glColor3ub(0,0,0);
    glVertex2f(0.6f, 0.15f);
    glVertex2f(0.76f, 0.22);
    glEnd();

    glBegin(GL_LINES);      //partition5_right
    glColor3ub(0,0,0);
    glVertex2f(0.76f, 0.22f);
    glVertex2f(0.86f, 0.15);
    glEnd();

    glBegin(GL_LINES);      //partition6_left
    glColor3ub(0,0,0);
    glVertex2f(0.6f, 0.10f);
    glVertex2f(0.76f, 0.17);
    glEnd();

    glBegin(GL_LINES);      //partition7_left
    glColor3ub(0,0,0);
    glVertex2f(0.6f, 0.05f);
    glVertex2f(0.76f, 0.12);
    glEnd();

    glBegin(GL_LINES);      //partition8_left
    glColor3ub(0,0,0);
    glVertex2f(0.6f, 0.00f);
    glVertex2f(0.76f, 0.07);
    glEnd();

    glBegin(GL_LINES);      //partition9_left
    glColor3ub(0,0,0);
    glVertex2f(0.6f, -0.05f);
    glVertex2f(0.76f, 0.02);
    glEnd();

///Ash angular building windows

    glBegin(GL_QUADS);      //window1_partition1_left
    glColor3ub(0,0,0);
    glVertex2f(0.62f, 0.325f);
    glVertex2f(0.64f, 0.335f);
    glVertex2f(0.64f, 0.355f);
    glVertex2f(0.62f, 0.345f);
    glEnd();

    glBegin(GL_QUADS);      //window2_partition1_left
    glColor3ub(0,0,0);
    glVertex2f(0.66f, 0.342f);
    glVertex2f(0.68f, 0.352f);
    glVertex2f(0.68f, 0.372f);
    glVertex2f(0.66f, 0.362f);
    glEnd();

    glBegin(GL_QUADS);      //window3_partition1_left
    glColor3ub(0,0,0);
    glVertex2f(0.70f, 0.36f);
    glVertex2f(0.72f, 0.37f);
    glVertex2f(0.72f, 0.39f);
    glVertex2f(0.70f, 0.38f);
    glEnd();

    glBegin(GL_QUADS);      //window1_partition1_right
    glColor3ub(0,0,0);
    glVertex2f(0.782f, 0.37f);
    glVertex2f(0.802f, 0.356f);
    glVertex2f(0.802f, 0.376f);
    glVertex2f(0.782f, 0.39f);
    glEnd();

    glBegin(GL_QUADS);      //window2_partition1_right
    glColor3ub(0,0,0);
    glVertex2f(0.83f, 0.337f);
    glVertex2f(0.85f, 0.320f);
    glVertex2f(0.85f, 0.340f);
    glVertex2f(0.83f, 0.357f);
    glEnd();


    glBegin(GL_QUADS);      //window1_partition2_left
    glColor3ub(0,0,0);
    glVertex2f(0.62f, 0.275f);
    glVertex2f(0.64f, 0.285f);
    glVertex2f(0.64f, 0.305f);
    glVertex2f(0.62f, 0.295f);
    glEnd();

    glBegin(GL_QUADS);      //window2_partition2_left
    glColor3ub(0,0,0);
    glVertex2f(0.66f, 0.292f);
    glVertex2f(0.68f, 0.302f);
    glVertex2f(0.68f, 0.322f);
    glVertex2f(0.66f, 0.312f);
    glEnd();

    glBegin(GL_QUADS);      //window3_partition2_left
    glColor3ub(0,0,0);
    glVertex2f(0.70f, 0.31f);
    glVertex2f(0.72f, 0.32f);
    glVertex2f(0.72f, 0.34f);
    glVertex2f(0.70f, 0.33f);
    glEnd();

    glBegin(GL_QUADS);      //window1_partition2_right
    glColor3ub(0,0,0);
    glVertex2f(0.782f, 0.32f);
    glVertex2f(0.802f, 0.306f);
    glVertex2f(0.802f, 0.326f);
    glVertex2f(0.782f, 0.34f);
    glEnd();

    glBegin(GL_QUADS);      //window2_partition2_right
    glColor3ub(0,0,0);
    glVertex2f(0.83f, 0.287f);
    glVertex2f(0.85f, 0.27f);
    glVertex2f(0.85f, 0.29f);
    glVertex2f(0.83f, 0.307f);
    glEnd();

    glBegin(GL_QUADS);      //window1_partition3_left
    glColor3ub(0,0,0);
    glVertex2f(0.62f, 0.225f);
    glVertex2f(0.64f, 0.235f);
    glVertex2f(0.64f, 0.255f);
    glVertex2f(0.62f, 0.245f);
    glEnd();

    glBegin(GL_QUADS);      //window2_partition3_left
    glColor3ub(0,0,0);
    glVertex2f(0.66f, 0.242f);
    glVertex2f(0.68f, 0.252f);
    glVertex2f(0.68f, 0.272f);
    glVertex2f(0.66f, 0.262f);
    glEnd();

    glBegin(GL_QUADS);      //window3_partition3_left
    glColor3ub(0,0,0);
    glVertex2f(0.70f, 0.26f);
    glVertex2f(0.72f, 0.27f);
    glVertex2f(0.72f, 0.29f);
    glVertex2f(0.70f, 0.28f);
    glEnd();

    glBegin(GL_QUADS);      //window1_partition3_right
    glColor3ub(0,0,0);
    glVertex2f(0.782f, 0.27f);
    glVertex2f(0.802f, 0.256f);
    glVertex2f(0.802f, 0.276f);
    glVertex2f(0.782f, 0.29f);
    glEnd();

    glBegin(GL_QUADS);      //window2_partition3_right
    glColor3ub(0,0,0);
    glVertex2f(0.83f, 0.237f);
    glVertex2f(0.85f, 0.22f);
    glVertex2f(0.85f, 0.24f);
    glVertex2f(0.83f, 0.257f);
    glEnd();


    glBegin(GL_QUADS);      //window2_partition4_left
    glColor3ub(0,0,0);
    glVertex2f(0.66f, 0.192f);
    glVertex2f(0.68f, 0.202f);
    glVertex2f(0.68f, 0.222f);
    glVertex2f(0.66f, 0.212f);
    glEnd();

    glBegin(GL_QUADS);      //window3_partition4_left
    glColor3ub(0,0,0);
    glVertex2f(0.70f, 0.21f);
    glVertex2f(0.72f, 0.22f);
    glVertex2f(0.72f, 0.24f);
    glVertex2f(0.70f, 0.23f);
    glEnd();

    glBegin(GL_QUADS);      //window1_partition4_right
    glColor3ub(0,0,0);
    glVertex2f(0.782f, 0.22f);
    glVertex2f(0.802f, 0.206f);
    glVertex2f(0.802f, 0.226f);
    glVertex2f(0.782f, 0.24f);
    glEnd();

    glBegin(GL_QUADS);      //window2_partition4_right
    glColor3ub(0,0,0);
    glVertex2f(0.83f, 0.187f);
    glVertex2f(0.85f, 0.17f);
    glVertex2f(0.85f, 0.19f);
    glVertex2f(0.83f, 0.207f);
    glEnd();

    glBegin(GL_QUADS);      //window3_partition5_left
    glColor3ub(0,0,0);
    glVertex2f(0.70f, 0.16f);
    glVertex2f(0.72f, 0.17f);
    glVertex2f(0.72f, 0.19f);
    glVertex2f(0.70f, 0.18f);
    glEnd();

    glBegin(GL_QUADS);      //window3_partition6_left
    glColor3ub(0,0,0);
    glVertex2f(0.70f, 0.11f);
    glVertex2f(0.72f, 0.12f);
    glVertex2f(0.72f, 0.14f);
    glVertex2f(0.70f, 0.13f);
    glEnd();

    glBegin(GL_QUADS);      //window3_partition7_left
    glColor3ub(0,0,0);
    glVertex2f(0.70f, 0.06f);
    glVertex2f(0.72f, 0.07f);
    glVertex2f(0.72f, 0.09f);
    glVertex2f(0.70f, 0.08f);
    glEnd();

    glBegin(GL_QUADS);      //window3_partition8_left
    glColor3ub(0,0,0);
    glVertex2f(0.70f, 0.01f);
    glVertex2f(0.72f, 0.02f);
    glVertex2f(0.72f, 0.04f);
    glVertex2f(0.70f, 0.03f);
    glEnd();

///Ash angular building windows end

glLoadIdentity();

///Ash anguler building ends-----

///Blue anguler building starts-----

   glLineWidth(.5);
    glTranslatef(-.02,-.06,0);
    glScalef(.8,.8,0);

    glBegin(GL_POLYGON);//up portion
    glColor3ub(51, 204, 204);
    glVertex2f(0.665, -0.1);

    glVertex2f(0.665, 0.7);
    glVertex2f(0.65, 0.77);
    glVertex2f(0.52, 0.74);
    glVertex2f(0.52, 0.1);
    glEnd();//done

    glBegin(GL_LINES);
    glColor3ub(25, 102, 102);

    glVertex2f(0.65, 0.77);
    glVertex2f(0.65, 0.2);

    glEnd();//done

    //up portion partition
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.52f, 0.72f);
    glVertex2f(0.65f, 0.75f);

    glVertex2f(0.52f, 0.70f);
    glVertex2f(0.65f, 0.73f);

    glVertex2f(0.52f, 0.68f);
    glVertex2f(0.65f, 0.71f);

    glVertex2f(0.52f, 0.66f);
    glVertex2f(0.65f, 0.69f);

    glVertex2f(0.52f, 0.64f);
    glVertex2f(0.65f, 0.67f);
    glEnd();


    glBegin(GL_POLYGON);//down base
    glColor3ub(51, 204, 204);
    glVertex2f(0.7, -0.1);

    glVertex2f(0.7, 0.6);
    glVertex2f(0.68, 0.67);
    glVertex2f(0.5, 0.64);
    glVertex2f(0.5, 0.1);
    glEnd();//done



    glBegin(GL_LINES);
    glColor3ub(25, 102, 102);
    glVertex2f(0.68, 0.67);
    glVertex2f(0.68, 0.1);

    glVertex2f(0.68, 0.67);
    glVertex2f(0.5, 0.64);

    glEnd();//done


    //Blue anguler building partitions
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.68f, 0.64);
    glVertex2f(0.5f, 0.61f);

    glVertex2f(0.68f, 0.61);
    glVertex2f(0.5f, 0.58f);

    glVertex2f(0.68f, 0.58);
    glVertex2f(0.5f, 0.55f);

    glVertex2f(0.68f, 0.55);
    glVertex2f(0.5f, 0.52f);

    glVertex2f(0.68f, 0.52);
    glVertex2f(0.5f, 0.49f);

    glVertex2f(0.68f, 0.49);
    glVertex2f(0.5f, 0.46f);

    glVertex2f(0.68f, 0.46);
    glVertex2f(0.5f, 0.43f);

    glVertex2f(0.68f, 0.43);
    glVertex2f(0.5f, 0.40f);

    glVertex2f(0.68f, 0.40);
    glVertex2f(0.5f, 0.37f);

    glVertex2f(0.68f, 0.37);
    glVertex2f(0.5f, 0.34f);

    glVertex2f(0.68f, 0.34);
    glVertex2f(0.5f, 0.31f);

    glVertex2f(0.68f, 0.31);
    glVertex2f(0.5f, 0.28f);

    glVertex2f(0.68f, 0.28);
    glVertex2f(0.5f, 0.25f);

    glVertex2f(0.68f, 0.25);
    glVertex2f(0.5f, 0.22f);

    glVertex2f(0.68f, 0.22);
    glVertex2f(0.5f, 0.19f);

    glVertex2f(0.68f, 0.19);
    glVertex2f(0.5f, 0.16f);

    glVertex2f(0.68f, 0.16);
    glVertex2f(0.5f, 0.13f);

    glVertex2f(0.68f, 0.13);
    glVertex2f(0.5f, 0.10f);

    glVertex2f(0.68f, 0.10);
    glVertex2f(0.5f, 0.07f);

    glVertex2f(0.68f, 0.07);
    glVertex2f(0.5f, 0.04f);
    glEnd();

    //bit over design
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(0.5f, 0.425f);
    glVertex2f(0.68f, 0.455f);
    glVertex2f(0.68f, 0.46f);
    glVertex2f(0.5f, 0.43f);
    glEnd();

    ///cross design
    //cross 1
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(0.5f, 0.425f);
    glVertex2f(0.505f, 0.425f);
    glVertex2f(0.55f, 0.636f);
    glVertex2f(0.56f, 0.659f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(0.498f, 0.63f);
    glVertex2f(0.555f, 0.435f);
    glVertex2f(0.555f, 0.445f);
    glVertex2f(0.499f, 0.64f);
    glEnd();

    //cross 3
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(0.6f, 0.445f);
    glVertex2f(0.605f, 0.445f);
    glVertex2f(0.672f, 0.650f);
    glVertex2f(0.682f, 0.672f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(0.615f, 0.65f);
    glVertex2f(0.680f, 0.450f);
    glVertex2f(0.680f, 0.460f);
    glVertex2f(0.610f, 0.66f);
    glEnd();

    //cross 3
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(0.554f, 0.445f);
    glVertex2f(0.556f, 0.445f);
    glVertex2f(0.610f, 0.645f);
    glVertex2f(0.612f, 0.667f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(0.565f, 0.63f);
    glVertex2f(0.600f, 0.438f);
    glVertex2f(0.600f, 0.458f);
    glVertex2f(0.560f, 0.645f);
    glEnd();

    ///cross design end
    glLoadIdentity();
    glLineWidth(1);

///Blue anguler building ends-----

    glTranslatef(.15,-0.27,0);
    glScalef(.9,.9,0);



///left  Ash building start

    glBegin(GL_POLYGON);
    glColor3ub(157, 148, 161);
    glVertex2f(-0.06f, 0.3f);
    glVertex2f(0.1f, 0.25f);
    glVertex2f(0.1f, 0.4f);
    glVertex2f(0.0f, 0.45f);
    glVertex2f(-0.06f, 0.42f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.05f, 0.55f);
    glVertex2f(0.05f, 0.25f);
    glEnd();//done

///left ash building end



///sky blue building start

    glBegin(GL_POLYGON);
    glColor3ub(102, 102, 255);
    glVertex2f(0.0f, 0.25f);
    glVertex2f(0.12f, 0.25f);
    glVertex2f(0.12f, 0.5f);
    glVertex2f(0.05f, 0.55f);
    glVertex2f(0.0f, 0.5f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.05f, 0.55f);
    glVertex2f(0.05f, 0.25f);
    glEnd();//done

///sky blue building end




///Golden building start

    glBegin(GL_QUADS);
    glColor3ub(222, 202, 22);
    glVertex2f(0.1f, 0.2f);
    glVertex2f(0.2f, 0.2f);
    glVertex2f(0.2f, 0.4f);
    glVertex2f(0.1f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.15f, 0.2f);
    glVertex2f(0.15f, 0.4f);
    glEnd();//done

///Golden ash building end








    //right side front 2nd building
    glBegin(GL_QUADS);
    glColor3ub(210, 121, 121);
    glVertex2f(0.5f, 0.0f);
    glVertex2f(0.63f, 0.0f);
    glVertex2f(0.63f, 0.2f);
    glVertex2f(0.5f, 0.2f);
    glEnd();

    //right side front 2nd building border
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.5f, 0.0f);
    glVertex2f(0.63f, 0.0f);

    glVertex2f(0.63f, 0.0f);
    glVertex2f(0.63f, 0.2f);

    glVertex2f(0.63f, 0.2f);
    glVertex2f(0.5f, 0.2f);

    glVertex2f(0.5f, 0.2f);
    glVertex2f(0.5f, 0.0f);
    glEnd();//done

    //right side front 2nd building partition
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.57f, 0.0f);
    glVertex2f(0.57f, 0.2f);

    glVertex2f(0.5f, 0.15);
    glVertex2f(0.63f, 0.15);

    glVertex2f(0.5f, 0.10);
    glVertex2f(0.63f, 0.10);
    glEnd();//done










///Yellow building starts
    //right side 1st yellow building
    glBegin(GL_QUADS);
    glColor3ub(255, 204, 0);
    glVertex2f(0.75f, -0.1f);
    glVertex2f(1.0f, -0.1f);
    glVertex2f(1.0f, 0.20f);
    glVertex2f(0.75f, 0.20f);
    glEnd();//done

    //right side 1st yellow building border
    glBegin(GL_LINES);
    glColor3ub(128, 102, 0);
    glVertex2f(0.75f, -0.1f);
    glVertex2f(1.0f, -0.1f);

    glVertex2f(1.0f, -0.1f);
    glVertex2f(1.0f, 0.20f);

    glVertex2f(1.0f, 0.20f);
    glVertex2f(0.75f, 0.20f);

    glVertex2f(0.75f, 0.20f);
    glVertex2f(0.75f, -0.1f);
    glEnd();//done

    //right side 1st building partition
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.75f, -0.05f);
    glVertex2f(1.0f, -0.05f);

    glVertex2f(0.75f, 0.0f);
    glVertex2f(1.0f, 0.0f);

    glVertex2f(0.75f, 0.05f);
    glVertex2f(1.0f, 0.05f);

    glVertex2f(0.75f, 0.1f);
    glVertex2f(1.0f, 0.1f);

    glVertex2f(0.75f, 0.15f);
    glVertex2f(1.0f, 0.15f);
    glEnd();//done

    //right side 1st building divider
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.88f, -0.1f);
    glVertex2f(0.88f, 0.20f);
    glEnd();//done

    //right side 1st building over bar
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(0.88f, 0.20f);
    glVertex2f(0.9f, 0.20f);
    glVertex2f(0.9f, 0.35f);
    glVertex2f(0.88f, 0.35f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(0.98f, 0.20f);
    glVertex2f(0.96f, 0.20f);
    glVertex2f(0.96f, 0.3f);
    glVertex2f(0.98f, 0.3f);
    glEnd();

    //right side 1st building over bar border
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.98f, 0.20f);
    glVertex2f(0.96f, 0.20f);

    glVertex2f(0.96f, 0.20f);
    glVertex2f(0.96f, 0.3f);

    glVertex2f(0.96f, 0.3f);
    glVertex2f(0.98f, 0.3f);

    glVertex2f(0.98f, 0.3f);
    glVertex2f(0.98f, 0.20f);
    glEnd();

    //right side front 1st building windows
///yellow building windows

glBegin(GL_QUADS);  //window1 line
    glColor3ub(0,0,0);
    glVertex2f(0.76f, 0.115f);
    glVertex2f(0.78f,0.115f);
    glVertex2f(0.78f, 0.138f);
    glVertex2f(0.76f, 0.138f);
    glEnd();//done


    glBegin(GL_QUADS);  //window1 line
    glColor3ub(0,0,0);
    glVertex2f(0.8f, 0.115f);
    glVertex2f(0.82f,0.115f);
    glVertex2f(0.82f, 0.138f);
    glVertex2f(0.8f, 0.138f);
    glEnd();//done

    glBegin(GL_QUADS);  //window1 line
    glColor3ub(0,0,0);
    glVertex2f(0.84f, 0.115f);
    glVertex2f(0.86f,0.115f);
    glVertex2f(0.86f, 0.138f);
    glVertex2f(0.84f, 0.138f);
    glEnd();//done

    glBegin(GL_QUADS);  //window2 line
    glColor3ub(0,0,0);
    glVertex2f(0.76f, 0.065f);
    glVertex2f(0.78f,0.065f);
    glVertex2f(0.78f, 0.088f);
    glVertex2f(0.76f, 0.088f);
    glEnd();

    glBegin(GL_QUADS);  //window2 line
    glColor3ub(0,0,0);
    glVertex2f(0.8f, 0.065f);
    glVertex2f(0.82f,0.065f);
    glVertex2f(0.82f, 0.088f);
    glVertex2f(0.8f, 0.088f);
    glEnd();

    glBegin(GL_QUADS);  //window2 line
    glColor3ub(0,0,0);
    glVertex2f(0.84f, 0.065f);
    glVertex2f(0.86f,0.065f);
    glVertex2f(0.86f, 0.088f);
    glVertex2f(0.84f, 0.088f);
    glEnd();

    glBegin(GL_QUADS);  //window3 line
    glColor3ub(0,0,0);
    glVertex2f(0.76f, 0.015f);
    glVertex2f(0.78f,0.015f);
    glVertex2f(0.78f, 0.04f);
    glVertex2f(0.76f, 0.04f);
    glEnd();

    glBegin(GL_QUADS);  //window3 line
    glColor3ub(0,0,0);
    glVertex2f(0.8f, 0.015f);
    glVertex2f(0.82f,0.015f);
    glVertex2f(0.82f, 0.04f);
    glVertex2f(0.8f, 0.04f);
    glEnd();

    glBegin(GL_QUADS);  //window3 line
    glColor3ub(0,0,0);
    glVertex2f(0.84f, 0.015f);
    glVertex2f(0.86f,0.015f);
    glVertex2f(0.86f, 0.04f);
    glVertex2f(0.84f, 0.04f);
    glEnd();
    ///
    glBegin(GL_QUADS);  //window4 line
    glColor3ub(0,0,0);
    glVertex2f(0.76f, -0.012f);
    glVertex2f(0.78f,-0.012f);
    glVertex2f(0.78f, -0.04f);
    glVertex2f(0.76f, -0.04f);
    glEnd();


    glBegin(GL_QUADS);  //window4 line
    glColor3ub(0,0,0);
    glVertex2f(0.8f, -0.012f);
    glVertex2f(0.82f,-0.012f);
    glVertex2f(0.82f, -0.04f);
    glVertex2f(0.8f, -0.04f);
    glEnd();

    glBegin(GL_QUADS);  //window4 line
    glColor3ub(0,0,0);
    glVertex2f(0.84f, -0.012f);
    glVertex2f(0.86f,-0.012f);
    glVertex2f(0.86f, -0.04f);
    glVertex2f(0.84f, -0.04f);
    glEnd();
    ///

    glBegin(GL_QUADS);  //window5 line
    glColor3ub(0,0,0);
    glVertex2f(0.90f, 0.115f);
    glVertex2f(0.92f,0.115f);
    glVertex2f(0.92f, 0.138f);
    glVertex2f(0.90f, 0.138f);
    glEnd();

    glBegin(GL_QUADS);  //window5 line
    glColor3ub(0,0,0);
    glVertex2f(0.94f, 0.115f);
    glVertex2f(0.96f,0.115f);
    glVertex2f(0.96f, 0.138f);
    glVertex2f(0.94f, 0.138f);
    glEnd();

    glBegin(GL_QUADS);  //window5 line
    glColor3ub(0,0,0);
    glVertex2f(0.98f, 0.115f);
    glVertex2f(1.0f,0.115f);
    glVertex2f(1.0f, 0.138f);
    glVertex2f(0.98f, 0.138f);
    glEnd();

    glBegin(GL_QUADS);  //window6 line
    glColor3ub(0,0,0);
    glVertex2f(0.90f, 0.065f);
    glVertex2f(0.92f,0.065f);
    glVertex2f(0.92f, 0.088f);
    glVertex2f(0.90f, 0.088f);
    glEnd();

    glBegin(GL_QUADS);  //window6 line
    glColor3ub(0,0,0);
    glVertex2f(0.94f, 0.065f);
    glVertex2f(0.96f,0.065f);
    glVertex2f(0.96f, 0.088f);
    glVertex2f(0.94f, 0.088f);
    glEnd();

    glBegin(GL_QUADS);  //window6 line
    glColor3ub(0,0,0);
    glVertex2f(0.98f, 0.065f);
    glVertex2f(1,0.065f);
    glVertex2f(1, 0.088f);
    glVertex2f(0.98f, 0.088f);
    glEnd();

    glBegin(GL_QUADS);  //window7 line
    glColor3ub(0,0,0);
    glVertex2f(0.90f, 0.015f);
    glVertex2f(0.92f,0.015f);
    glVertex2f(0.92f, 0.04f);
    glVertex2f(0.90f, 0.04f);
    glEnd();

    glBegin(GL_QUADS);  //window7 line
    glColor3ub(0,0,0);
    glVertex2f(0.94f, 0.015f);
    glVertex2f(0.96f,0.015f);
    glVertex2f(0.96f, 0.04f);
    glVertex2f(0.94f, 0.04f);
    glEnd();

    glBegin(GL_QUADS);  //window7 line
    glColor3ub(0,0,0);
    glVertex2f(0.98f, 0.015f);
    glVertex2f(1,0.015f);
    glVertex2f(1, 0.04f);
    glVertex2f(0.98f, 0.04f);
    glEnd();

    glBegin(GL_QUADS);  //window8 line
    glColor3ub(0,0,0);
    glVertex2f(0.90f, -0.012f);
    glVertex2f(0.92f, -0.012f);
    glVertex2f(0.92f, -0.04f);
    glVertex2f(0.90f, -0.04f);
    glEnd();

    glBegin(GL_QUADS);  //window8 line
    glColor3ub(0,0,0);
    glVertex2f(0.94f, -0.012f);
    glVertex2f(0.96f, -0.012f);
    glVertex2f(0.96f, -0.04f);
    glVertex2f(0.94f, -0.04f);
    glEnd();

    glBegin(GL_QUADS);  //window8 line
    glColor3ub(0,0,0);
    glVertex2f(0.98f, -0.012f);
    glVertex2f(1, -0.012f);
    glVertex2f(1, -0.04f);
    glVertex2f(0.98f, -0.04f);
    glEnd();

    //glLoadIdentity();

    ///yellow building end!

    //right side front 1st white building

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(0.65f, -0.10f);
    glVertex2f(0.75f, -0.10f);
    glVertex2f(0.75f, 0.18f);
    glVertex2f(0.65f, 0.18f);
    glEnd();//done

    //right side front 1st white building border

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.65f, -0.10f);
    glVertex2f(0.75f, -0.10f);

    glVertex2f(0.75f, -0.10f);
    glVertex2f(0.75f, 0.18f);

    glVertex2f(0.75f, 0.18f);
    glVertex2f(0.65f, 0.18f);

    glVertex2f(0.65f, 0.18f);
    glVertex2f(0.65f, -0.10f);
    glEnd();//done

    //right side front 1st white building partition

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.65f, 0.0f);
    glVertex2f(0.75f, 0.0f);

    glVertex2f(0.65f, 0.05f);
    glVertex2f(0.75f, 0.05f);

    glVertex2f(0.65f, 0.1f);
    glVertex2f(0.75f, 0.1f);

    glVertex2f(0.65f, 0.15f);
    glVertex2f(0.75f, 0.15f);

    glVertex2f(0.70f, -0.10f);
    glVertex2f(0.70f, 0.18f);
    glEnd();//done


    //right side front 1st building windows end

    //right side front 1st building border
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.65f, -0.10f);
    glVertex2f(0.75f, -0.10f);

    glVertex2f(0.75f, -0.10f);
    glVertex2f(0.75f, 0.18f);

    glVertex2f(0.75f, 0.18f);
    glVertex2f(0.65f, 0.18f);

    glVertex2f(0.65f, 0.18f);
    glVertex2f(0.65f, -0.10f);
    glEnd();
    glLoadIdentity();

    ///Brown anguler building starts-----

    glTranslatef(.05,-0.27,0);
    glScalef(.9,.9,0);

    glBegin(GL_POLYGON);
    glColor3ub(153, 153, 102);
    glVertex2f(0.6, -0.1);

    glVertex2f(0.6, 0.4);
    glVertex2f(0.45, 0.47);
    glVertex2f(0.4, 0.4);
    glVertex2f(0.4, 0.1);
    glEnd();//done

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.45, 0.47);
    glVertex2f(0.45, 0.1);

    glEnd();//done

    //Brown anguler building partitions
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.45f, 0.43f);
    glVertex2f(0.6f, 0.36f);

    glVertex2f(0.45f, 0.39f);
    glVertex2f(0.6f, 0.32f);

    glVertex2f(0.45f, 0.35f);
    glVertex2f(0.6f, 0.28f);

    glVertex2f(0.45f, 0.31f);
    glVertex2f(0.6f, 0.24f);

    glVertex2f(0.45f, 0.27f);
    glVertex2f(0.6f, 0.20f);

    glVertex2f(0.45f, 0.23f);
    glVertex2f(0.6f, 0.16f);

    glVertex2f(0.45f, 0.19f);
    glVertex2f(0.6f, 0.12f);

    glVertex2f(0.45f, 0.15f);
    glVertex2f(0.6f, 0.08f);
    glEnd();

    ///brown angular building windows
    glBegin(GL_QUADS);      //window1_partition1
    glColor3ub(0,0,0);
    glVertex2f(0.460f, 0.435);
    glVertex2f(0.470f, 0.43f);
    glVertex2f(0.470f, 0.45);
    glVertex2f(0.460f, 0.455);
    glEnd();

    glBegin(GL_QUADS);      //window2_partition1
    glColor3ub(0,0,0);
    glVertex2f(0.480f, 0.428);
    glVertex2f(0.490f, 0.422f);
    glVertex2f(0.490f, 0.442);
    glVertex2f(0.480f, 0.448);
    glEnd();

    glBegin(GL_QUADS);      //window3_partition1
    glColor3ub(0,0,0);
    glVertex2f(0.5000f, 0.420);
    glVertex2f(0.510f, 0.414f);
    glVertex2f(0.510f, 0.434);
    glVertex2f(0.5000f, 0.440);
    glEnd();

    glBegin(GL_QUADS);      //window4_partition1
    glColor3ub(0,0,0);
    glVertex2f(0.520f, 0.410);
    glVertex2f(0.530f, 0.404f);
    glVertex2f(0.530f, 0.424f);
    glVertex2f(0.520f, 0.430f);
    glEnd();

    glBegin(GL_QUADS);      //window5_partition1
    glColor3ub(0,0,0);
    glVertex2f(0.540f, 0.400);
    glVertex2f(0.550f, 0.394f);
    glVertex2f(0.550f, 0.414f);
    glVertex2f(0.540f, 0.420f);
    glEnd();

    glBegin(GL_QUADS);      //window6_partition1
    glColor3ub(0,0,0);
    glVertex2f(0.560f, 0.390);
    glVertex2f(0.570f, 0.384f);
    glVertex2f(0.570f, 0.404f);
    glVertex2f(0.560f, 0.410f);
    glEnd();

    glBegin(GL_QUADS);      //window7_partition1
    glColor3ub(0,0,0);
    glVertex2f(0.580f, 0.380);
    glVertex2f(0.590f, 0.374f);
    glVertex2f(0.590f, 0.394f);
    glVertex2f(0.580f, 0.400f);
    glEnd();

    glBegin(GL_QUADS);      //window1_partition2
    glColor3ub(0,0,0);
    glVertex2f(0.460f, 0.395);
    glVertex2f(0.470f, 0.39f);
    glVertex2f(0.470f, 0.41);
    glVertex2f(0.460f, 0.415);
    glEnd();

    glBegin(GL_QUADS);      //window2_partition2
    glColor3ub(0,0,0);
    glVertex2f(0.480f, 0.388);
    glVertex2f(0.490f, 0.382f);
    glVertex2f(0.490f, 0.402);
    glVertex2f(0.480f, 0.408);
    glEnd();

    glBegin(GL_QUADS);      //window3_partition2
    glColor3ub(0,0,0);
    glVertex2f(0.5000f, 0.380);
    glVertex2f(0.510f, 0.374f);
    glVertex2f(0.510f, 0.394);
    glVertex2f(0.5000f, 0.400);
    glEnd();

    glBegin(GL_QUADS);      //window4_partition2
    glColor3ub(0,0,0);
    glVertex2f(0.520f, 0.370);
    glVertex2f(0.530f, 0.364f);
    glVertex2f(0.530f, 0.384f);
    glVertex2f(0.520f, 0.390f);
    glEnd();

    glBegin(GL_QUADS);      //window5_partition2
    glColor3ub(0,0,0);
    glVertex2f(0.540f, 0.360);
    glVertex2f(0.550f, 0.354f);
    glVertex2f(0.550f, 0.374f);
    glVertex2f(0.540f, 0.380f);
    glEnd();

    glBegin(GL_QUADS);      //window6_partition2
    glColor3ub(0,0,0);
    glVertex2f(0.560f, 0.350);
    glVertex2f(0.570f, 0.344f);
    glVertex2f(0.570f, 0.364f);
    glVertex2f(0.560f, 0.370f);
    glEnd();

    glBegin(GL_QUADS);      //window7_partition2
    glColor3ub(0,0,0);
    glVertex2f(0.580f, 0.340);
    glVertex2f(0.590f, 0.334f);
    glVertex2f(0.590f, 0.354f);
    glVertex2f(0.580f, 0.360f);
    glEnd();

    glBegin(GL_QUADS);      //window1_partition3
    glColor3ub(0,0,0);
    glVertex2f(0.460f, 0.355);
    glVertex2f(0.470f, 0.350f);
    glVertex2f(0.470f, 0.370);
    glVertex2f(0.460f, 0.375);
    glEnd();

    glBegin(GL_QUADS);      //window2_partition3
    glColor3ub(0,0,0);
    glVertex2f(0.480f, 0.348);
    glVertex2f(0.490f, 0.342f);
    glVertex2f(0.490f, 0.362);
    glVertex2f(0.480f, 0.368);
    glEnd();

    glBegin(GL_QUADS);      //window3_partition3
    glColor3ub(0,0,0);
    glVertex2f(0.5000f, 0.340);
    glVertex2f(0.510f, 0.334f);
    glVertex2f(0.510f, 0.354);
    glVertex2f(0.5000f, 0.360);
    glEnd();

    glBegin(GL_QUADS);      //window4_partition3
    glColor3ub(0,0,0);
    glVertex2f(0.520f, 0.330);
    glVertex2f(0.530f, 0.324f);
    glVertex2f(0.530f, 0.344f);
    glVertex2f(0.520f, 0.350f);
    glEnd();

    glBegin(GL_QUADS);      //window5_partition3
    glColor3ub(0,0,0);
    glVertex2f(0.540f, 0.320);
    glVertex2f(0.550f, 0.314f);
    glVertex2f(0.550f, 0.334f);
    glVertex2f(0.540f, 0.340f);
    glEnd();

    glBegin(GL_QUADS);      //window6_partition3
    glColor3ub(0,0,0);
    glVertex2f(0.560f, 0.310);
    glVertex2f(0.570f, 0.304f);
    glVertex2f(0.570f, 0.324f);
    glVertex2f(0.560f, 0.330f);
    glEnd();

    glBegin(GL_QUADS);      //window7_partition3
    glColor3ub(0,0,0);
    glVertex2f(0.580f, 0.300);
    glVertex2f(0.590f, 0.294f);
    glVertex2f(0.590f, 0.314f);
    glVertex2f(0.580f, 0.320f);
    glEnd();

    glBegin(GL_QUADS);      //window1_partition4
    glColor3ub(0,0,0);
    glVertex2f(0.460f, 0.315);
    glVertex2f(0.470f, 0.310f);
    glVertex2f(0.470f, 0.330);
    glVertex2f(0.460f, 0.335);
    glEnd();

    glBegin(GL_QUADS);      //window2_partition4
    glColor3ub(0,0,0);
    glVertex2f(0.480f, 0.308);
    glVertex2f(0.490f, 0.302f);
    glVertex2f(0.490f, 0.322);
    glVertex2f(0.480f, 0.328);
    glEnd();

    glBegin(GL_QUADS);      //window3_partition4
    glColor3ub(0,0,0);
    glVertex2f(0.5000f, 0.300);
    glVertex2f(0.510f, 0.294f);
    glVertex2f(0.510f, 0.314);
    glVertex2f(0.5000f, 0.320);
    glEnd();

    glBegin(GL_QUADS);      //window4_partition4
    glColor3ub(0,0,0);
    glVertex2f(0.520f, 0.290);
    glVertex2f(0.530f, 0.284f);
    glVertex2f(0.530f, 0.304f);
    glVertex2f(0.520f, 0.310f);
    glEnd();

    glBegin(GL_QUADS);      //window5_partition4
    glColor3ub(0,0,0);
    glVertex2f(0.540f, 0.280);
    glVertex2f(0.550f, 0.274f);
    glVertex2f(0.550f, 0.294f);
    glVertex2f(0.540f, 0.300f);
    glEnd();

    glBegin(GL_QUADS);      //window6_partition4
    glColor3ub(0,0,0);
    glVertex2f(0.560f, 0.270);
    glVertex2f(0.570f, 0.264f);
    glVertex2f(0.570f, 0.284f);
    glVertex2f(0.560f, 0.290f);
    glEnd();

    glBegin(GL_QUADS);      //window7_partition4
    glColor3ub(0,0,0);
    glVertex2f(0.580f, 0.260);
    glVertex2f(0.590f, 0.254f);
    glVertex2f(0.590f, 0.274f);
    glVertex2f(0.580f, 0.280f);
    glEnd();

    glBegin(GL_QUADS);      //window1_partition5
    glColor3ub(0,0,0);
    glVertex2f(0.460f, 0.275);
    glVertex2f(0.470f, 0.270f);
    glVertex2f(0.470f, 0.290);
    glVertex2f(0.460f, 0.295);
    glEnd();

    glBegin(GL_QUADS);      //window2_partition5
    glColor3ub(0,0,0);
    glVertex2f(0.480f, 0.268);
    glVertex2f(0.490f, 0.262f);
    glVertex2f(0.490f, 0.282);
    glVertex2f(0.480f, 0.288);
    glEnd();

    glBegin(GL_QUADS);      //window3_partition5
    glColor3ub(0,0,0);
    glVertex2f(0.5000f, 0.260);
    glVertex2f(0.510f, 0.254f);
    glVertex2f(0.510f, 0.274);
    glVertex2f(0.5000f, 0.280);
    glEnd();

    glBegin(GL_QUADS);      //window4_partition5
    glColor3ub(0,0,0);
    glVertex2f(0.520f, 0.250);
    glVertex2f(0.530f, 0.244f);
    glVertex2f(0.530f, 0.264f);
    glVertex2f(0.520f, 0.270f);
    glEnd();

    glBegin(GL_QUADS);      //window5_partition5
    glColor3ub(0,0,0);
    glVertex2f(0.540f, 0.240);
    glVertex2f(0.550f, 0.234f);
    glVertex2f(0.550f, 0.254f);
    glVertex2f(0.540f, 0.260f);
    glEnd();

    glBegin(GL_QUADS);      //window6_partition5
    glColor3ub(0,0,0);
    glVertex2f(0.560f, 0.230);
    glVertex2f(0.570f, 0.224f);
    glVertex2f(0.570f, 0.244f);
    glVertex2f(0.560f, 0.250f);
    glEnd();

    glBegin(GL_QUADS);      //window7_partition5
    glColor3ub(0,0,0);
    glVertex2f(0.580f, 0.220);
    glVertex2f(0.590f, 0.214f);
    glVertex2f(0.590f, 0.234f);
    glVertex2f(0.580f, 0.240f);
    glEnd();

    glBegin(GL_QUADS);      //window1_partition6
    glColor3ub(0,0,0);
    glVertex2f(0.460f, 0.235);
    glVertex2f(0.470f, 0.230f);
    glVertex2f(0.470f, 0.250);
    glVertex2f(0.460f, 0.255);
    glEnd();

    glBegin(GL_QUADS);      //window2_partition6
    glColor3ub(0,0,0);
    glVertex2f(0.480f, 0.228);
    glVertex2f(0.490f, 0.222f);
    glVertex2f(0.490f, 0.242);
    glVertex2f(0.480f, 0.248);
    glEnd();

    glBegin(GL_QUADS);      //window3_partition6
    glColor3ub(0,0,0);
    glVertex2f(0.5000f, 0.220f);
    glVertex2f(0.510f, 0.214f);
    glVertex2f(0.510f, 0.234);
    glVertex2f(0.5000f, 0.240f);
    glEnd();

    glBegin(GL_QUADS);      //window4_partition6
    glColor3ub(0,0,0);
    glVertex2f(0.520f, 0.210);
    glVertex2f(0.530f, 0.204f);
    glVertex2f(0.530f, 0.224f);
    glVertex2f(0.520f, 0.230f);
    glEnd();

    glBegin(GL_QUADS);      //window5_partition6
    glColor3ub(0,0,0);
    glVertex2f(0.540f, 0.200);
    glVertex2f(0.550f, 0.194f);
    glVertex2f(0.550f, 0.214f);
    glVertex2f(0.540f, 0.220f);
    glEnd();

    glBegin(GL_QUADS);      //window6_partition6
    glColor3ub(0,0,0);
    glVertex2f(0.560f, 0.190);
    glVertex2f(0.570f, 0.184f);
    glVertex2f(0.570f, 0.204f);
    glVertex2f(0.560f, 0.210f);
    glEnd();

    glBegin(GL_QUADS);      //window7_partition6
    glColor3ub(0,0,0);
    glVertex2f(0.580f, 0.180);
    glVertex2f(0.590f, 0.174f);
    glVertex2f(0.590f, 0.194f);
    glVertex2f(0.580f, 0.200f);
    glEnd();

    glBegin(GL_QUADS);      //window1_partition7
    glColor3ub(0,0,0);
    glVertex2f(0.460f, 0.195);
    glVertex2f(0.470f, 0.190f);
    glVertex2f(0.470f, 0.210);
    glVertex2f(0.460f, 0.215);
    glEnd();

    glBegin(GL_QUADS);      //window2_partition7
    glColor3ub(0,0,0);
    glVertex2f(0.480f, 0.188);
    glVertex2f(0.490f, 0.182f);
    glVertex2f(0.490f, 0.202);
    glVertex2f(0.480f, 0.208);
    glEnd();

    glBegin(GL_QUADS);      //window1_partition8
    glColor3ub(0,0,0);
    glVertex2f(0.460f, 0.155);
    glVertex2f(0.470f, 0.150f);
    glVertex2f(0.470f, 0.170);
    glVertex2f(0.460f, 0.175);
    glEnd();

    glBegin(GL_QUADS);      //window2_partition8
    glColor3ub(0,0,0);
    glVertex2f(0.480f, 0.148);
    glVertex2f(0.490f, 0.142f);
    glVertex2f(0.490f, 0.162);
    glVertex2f(0.480f, 0.168);
    glEnd();
    glLoadIdentity();

///Brown anguler building ends-----

///House with Chimney starts --------
    glTranslatef(-0.001,-0.07,0);
    glScalef(.5,.8,0);





	//right side chimny
    glBegin(GL_QUADS);
    glColor3ub(222, 202, 22);
    glVertex2f(0.55f, 0.2f);
    glVertex2f(0.65f, 0.2f);
    glVertex2f(0.65f, 0.27f);
    glVertex2f(0.55f, 0.27);
    glEnd();

    //chimny pipe1
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(0.55f, 0.27f);
    glVertex2f(0.57f, 0.27);
    glVertex2f(0.57f, 0.33f);
    glVertex2f(0.55f, 0.33f);
    glEnd();

    //chimny pipe2
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(0.64f, 0.27f);
    glVertex2f(0.66f, 0.27);
    glVertex2f(0.66f, 0.33f);
    glVertex2f(0.64f, 0.33f);
    glEnd();

    //chimny head
    glBegin(GL_TRIANGLES);
    glColor3ub(250, 227, 17);
    glVertex2f(0.5f, 0.27f);
    glVertex2f(0.7f, 0.27f);
    glVertex2f(0.6f, 0.32);
    glEnd();

    //chimny head border
    glLineWidth(0.6);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.5f, 0.27f);
    glVertex2f(0.7f, 0.27f);

    glVertex2f(0.7f, 0.27f);
    glVertex2f(0.6f, 0.32);

    glVertex2f(0.6f, 0.32);
    glVertex2f(0.5f, 0.27f);
    glEnd();
    glLoadIdentity();


///House with chimney ends----------


///Blue Berry angular building start

glTranslatef(.15,-0.27,0);
    glScalef(.9,.9,0);
    glBegin(GL_POLYGON);
    glColor3ub(163, 112, 184);
    glVertex2f(0.20f, 0.15f);
    glVertex2f(0.30f, 0.15f);
    glVertex2f(0.30f, 0.15);
    glVertex2f(0.30f, 0.30);
    glVertex2f(0.25f, 0.35f);///
    glVertex2f(0.20f, 0.30f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.25f, 0.15f);
    glVertex2f(0.25f, 0.35f);


    glEnd();//done
    glLoadIdentity();

///Blue Berry angular building end

///Left side white building starts---------------------

    glTranslatef(-.15,-0.075,0);
    glScalef(.7,.7,0);

//right side front 1st white building

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(0.65f, -0.10f);
    glVertex2f(0.75f, -0.10f);
    glVertex2f(0.75f, 0.18f);
    glVertex2f(0.65f, 0.18f);
    glEnd();//done

    //right side front 1st white building border

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.65f, -0.10f);
    glVertex2f(0.75f, -0.10f);

    glVertex2f(0.75f, -0.10f);
    glVertex2f(0.75f, 0.18f);

    glVertex2f(0.75f, 0.18f);
    glVertex2f(0.65f, 0.18f);

    glVertex2f(0.65f, 0.18f);
    glVertex2f(0.65f, -0.10f);
    glEnd();//done

    //right side front 1st white building partition

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.65f, 0.0f);
    glVertex2f(0.75f, 0.0f);

    glVertex2f(0.65f, 0.05f);
    glVertex2f(0.75f, 0.05f);

    glVertex2f(0.65f, 0.1f);
    glVertex2f(0.75f, 0.1f);

    glVertex2f(0.65f, 0.15f);
    glVertex2f(0.75f, 0.15f);

    glVertex2f(0.70f, -0.10f);
    glVertex2f(0.70f, 0.18f);
    glEnd();//done


    //right side front 1st building windows end

    //right side front 1st building border
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.65f, -0.10f);
    glVertex2f(0.75f, -0.10f);

    glVertex2f(0.75f, -0.10f);
    glVertex2f(0.75f, 0.18f);

    glVertex2f(0.75f, 0.18f);
    glVertex2f(0.65f, 0.18f);

    glVertex2f(0.65f, 0.18f);
    glVertex2f(0.65f, -0.10f);
    glEnd();
    glLoadIdentity();


///Left side white building ends---------------------


 ///main wall starts right----------------------------------
    glTranslatef(.15,-0.27,0);
    glScalef(.9,.9,0);


    ///right side wall main
    glBegin(GL_QUADS);
    glColor3ub(117, 117, 163);
    glVertex2f(1.0f, -0.4f);
    glVertex2f(-0.08f, 0.30f);
    glVertex2f(-0.08, 0.32f);
    glVertex2f(1.0f, -0.2f);
    glEnd();//done

    ///right side wall shed down darker
    glBegin(GL_QUADS);
    glColor3ub(92, 92, 138);
    glVertex2f(1.0f, -0.2f);
    glVertex2f(-0.07f, 0.30f);
    glVertex2f(-0.08, 0.32f);
    glVertex2f(1.0f, -0.1f);
    glEnd();//done


glLineWidth(2);
    ///right side wall railing
    glBegin(GL_LINES);
    glColor3ub(101, 98, 102);
    glVertex2f(1.0f, -0.08f);
    glVertex2f(-0.08f, 0.32f);

    glVertex2f(1.0f, -0.06f);
    glVertex2f(-0.08f, 0.32f);


    glEnd();
    glLoadIdentity();

  ///main wall Ends right----------------------------------

///CITY ROAD BEGINS----------------------------------
    ///PITCH
    glBegin(GL_QUADS);
    glColor3ub(117, 117, 163);
    glVertex2f(.165,-.32);
    glVertex2f(.52,-.55);
    glVertex2f(.7,-.55);
    glVertex2f(.17,-.29);
    glEnd();



    ///PITCH SHADOW
    glBegin(GL_QUADS);
    glColor3ub(92, 92, 138);
    glVertex2f(.175,-.32);
    glVertex2f(.56,-.55);
    glVertex2f(.7,-.55);
    glVertex2f(.17,-.29);
    glEnd();

    ///ROAD LINES
	     glLineWidth(2);
         glBegin(GL_LINES);
         glColor3ub(110,111,113);
         glVertex2f(.18,  -.31);
         glVertex2f(.62,-.55);

	     glEnd();

          ///NEAR BRIDGE PITCH
         glBegin(GL_QUADS);
         glColor3ub(117, 117, 163);
         glVertex2f(1,  -.34);
         glVertex2f(.8,-.34);
	     glVertex2f(.8,-.4);
	     glVertex2f(1,  -.4);
	     glEnd();
         ///NEAR BRIDGE PITCH SHADOW
         glBegin(GL_QUADS);
         glColor3ub(92, 92, 138);
         glVertex2f(1,  -.34);
         glVertex2f(.8,-.34);
	     glVertex2f(.8,-.38);
	     glVertex2f(1,  -.38);
	     glEnd();


	     ///ROAD LINES
	     glLineWidth(2);
         glBegin(GL_LINES);
         glColor3ub(110,111,113);
         glVertex2f(1,  -.36);
         glVertex2f(.8,-.36);

	     glEnd();

    ///BIMS
    glBegin(GL_POLYGON);
    glColor3ub(122,86,72);
    glVertex2f(.17,-.33);
    glVertex2f(.169,-.295);
    glVertex2f(.12,-.32);
    glVertex2f(.52,-.57);
    glVertex2f(.55,-.57);
    glEnd();

         ///GRASS
	     glLineWidth(2);
         glBegin(GL_LINES);
         glColor3ub(153,191,52);
         glVertex2f(.169,-.295);
         glVertex2f(.17,-.33);
         glVertex2f(.17,-.33);
         glVertex2f(.55,-.57);
	     glEnd();

    ///BIM BESIDE BRIDGE
    glBegin(GL_POLYGON);
    glColor3ub(163,163,163);
    glVertex2f(1,  -.4);
    glVertex2f(.8,-.4);
    glVertex2f(.8,  -.48);
    glVertex2f(1,-.48);
    glEnd();

           ///BORDER
	       glLineWidth(1);
           glBegin(GL_LINES);
           glColor3ub(68,83,95);
           glVertex2f(1,  -.4);
           glVertex2f(.8,-.4);
           glVertex2f(.8,-.4);
           glVertex2f(.8,  -.48);
           glVertex2f(.8,  -.48);
           glVertex2f(1,-.48);
           glVertex2f(1,-.48);
           glVertex2f(1,  -.4);
           glEnd();

           ///HORIZONTAL BRICKS
           glLineWidth(1);
           glBegin(GL_LINES);
           glColor3ub(68,83,95);///68,83,95
           glVertex2f(1,  -.42);
           glVertex2f(.8,-.42);

           glVertex2f(1,  -.44);
           glVertex2f(.8,-.44);

           glVertex2f(1,  -.46);
           glVertex2f(.8,-.46);
	       glEnd();

	        ///VERTICAL BRICKS
           glLineWidth(1);
           glBegin(GL_LINES);
           glColor3ub(68,83,95);///127,176,172
           glVertex2f(.82,-.4);
           glVertex2f(.82,  -.48);

           glVertex2f(.86,-.4);
           glVertex2f(.86,  -.48);

           glVertex2f(.9,-.4);
           glVertex2f(.9,  -.48);

           glVertex2f(.93,-.4);
           glVertex2f(.93,  -.48);

           glVertex2f(.98,-.4);
           glVertex2f(.98,  -.48);
	       glEnd();

         ///GRASS
	     glLineWidth(2);
         glBegin(GL_LINES);
         glColor3ub(153,191,52);
         glVertex2f(1,  -.395);
         glVertex2f(.8,-.395);

	     glEnd();


///LAMPS POSTS
         ///POST 1
         glLineWidth(2);
         glBegin(GL_LINES);
         glColor3ub(68,83,95);
         glVertex2f(.363,-.35);
         glVertex2f(.363,-.45);

         glVertex2f(.363,-.35);
         glVertex2f(.393,-.35);

         glVertex2f(.358,-.45);
         glVertex2f(.368,-.45);

         glEnd();

         ///LAMP 1
         glLineWidth(2);
         glBegin(GL_LINES);
         glColor3ub(200,126,89);
         glVertex2f(.378,-.36);
         glVertex2f(.393,-.36);
	     glEnd();


	     ///POST 2
	     glTranslatef(.07,-0.04,0);
	     //glScaled(1,.98,0);
         glLineWidth(2);
         glBegin(GL_LINES);
         glColor3ub(50,62,71);
         glVertex2f(.363,-.35);
         glVertex2f(.363,-.45);

         glVertex2f(.363,-.35);
         glVertex2f(.393,-.35);

         glVertex2f(.358,-.45);
         glVertex2f(.368,-.45);

         glEnd();

         ///LAMP 2
         glLineWidth(2);
         glBegin(GL_LINES);
         glColor3ub(200,126,89);
         glVertex2f(.378,-.36);
         glVertex2f(.393,-.36);
	     glEnd();


	     ///POST 3
         glTranslatef(-.13,0.06,0);
	     //glScaled(1,.98,0);
         glLineWidth(2);
         glBegin(GL_LINES);
         glColor3ub(50,62,71);
         glVertex2f(.363,-.35);
         glVertex2f(.363,-.45);

         glVertex2f(.363,-.35);
         glVertex2f(.393,-.35);

         glVertex2f(.358,-.45);
         glVertex2f(.368,-.45);

         glEnd();

         ///LAMP 3
         glLineWidth(2);
         glBegin(GL_LINES);
         glColor3ub(200,126,89);
         glVertex2f(.378,-.36);
         glVertex2f(.393,-.36);
	     glEnd();


         ///POST 4
         glTranslatef(.021,-0.04,0);
	     glScaled(.8,.8,0);
         glLineWidth(2);
         glBegin(GL_LINES);
         glColor3ub(50,62,71);
         glVertex2f(.363,-.35);
         glVertex2f(.363,-.45);

         glVertex2f(.363,-.35);
         glVertex2f(.393,-.35);

         glVertex2f(.358,-.45);
         glVertex2f(.368,-.45);

         glEnd();

         ///LAMP 4
         glLineWidth(2);
         glBegin(GL_LINES);
         glColor3ub(200,126,89);
         glVertex2f(.378,-.36);
         glVertex2f(.393,-.36);
	     glEnd();

	     ///POST 5
         glTranslatef(.01,-0.05,0);
	     glScaled(.8,.8,0);
         glLineWidth(2);
         glBegin(GL_LINES);
         glColor3ub(50,62,71);
         glVertex2f(.363,-.35);
         glVertex2f(.363,-.45);

         glVertex2f(.363,-.35);
         glVertex2f(.393,-.35);

         glVertex2f(.358,-.45);
         glVertex2f(.368,-.45);

         glEnd();

         ///LAMP 5
         glLineWidth(2);
         glBegin(GL_LINES);
         glColor3ub(200,126,89);
         glVertex2f(.378,-.36);
         glVertex2f(.393,-.36);
	     glEnd();


	     ///POST 6
         glTranslatef(.77,0.38,0);
	     glScaled(2,2,0);
         glLineWidth(2);
         glBegin(GL_LINES);
         glColor3ub(50,62,71);
         glVertex2f(.363,-.35);
         glVertex2f(.363,-.45);

         glVertex2f(.363,-.35);
         glVertex2f(.393,-.35);

         glVertex2f(.358,-.45);
         glVertex2f(.368,-.45);

         glEnd();

         ///LAMP 6
         glLineWidth(2);
         glBegin(GL_LINES);
         glColor3ub(200,126,89);
         glVertex2f(.378,-.36);
         glVertex2f(.393,-.36);
	     glEnd();


	     glLoadIdentity();






///CITY ROAD ENDS------------------------------------



///city ends------------------



///right side corner upper bridge starts--------------


glLineWidth(4);
         glBegin(GL_LINES);///bars
	     glColor3ub(240, 240, 237);

	     glVertex2f(.86, .16);
	     glVertex2f(.86, -.47);

	     glVertex2f(.9, .085);
	     glVertex2f(.9, -.47);

	     glVertex2f(.96, .03);
	     glVertex2f(.96, -.47);



         glBegin(GL_LINES);///bars
	     glColor3ub(255, 255, 255);
         glVertex2f(.96, .03);
         glVertex2f(1.0, -.11);

         glVertex2f(.96, -.02);
         glVertex2f(1.0,-.04 );
         glEnd();


         glBegin(GL_POLYGON);
	     glColor3ub(107, 107, 103);

	     glVertex2f(1.0, -.02);
	     glVertex2f(.9, .085);
	     glVertex2f(.86, .16);
         glVertex2f(.811, .25);

         glVertex2f(.811, .21);
         glVertex2f(.9, .082);
         glVertex2f(1.0, -.05);

         glEnd();

         glBegin(GL_POLYGON);
	     glColor3ub(107, 107, 103);
         glVertex2f(1.0, -.08);
	     glVertex2f(.9, .055);
	     glVertex2f(.86, .13);
         glVertex2f(.811, .24);

         glVertex2f(.811, .20);
         glVertex2f(.9, .052);
         glVertex2f(1.0, -.11);



         glEnd();








///right side corner upper bridge ends--------------

///right side corner upper bridge starts--------------


glLineWidth(4);
         glBegin(GL_LINES);///bars
	     glColor3ub(240, 240, 237);

	     glVertex2f(-.86, .16);
	     glVertex2f(-.86, -.47);

	     glVertex2f(-.9, .085);
	     glVertex2f(-.9, -.47);

	     glVertex2f(-.96, .03);
	     glVertex2f(-.96, -.47);



         glBegin(GL_LINES);///bars
	     glColor3ub(255, 255, 255);
         glVertex2f(-.96, .03);
         glVertex2f(-1.0, -.11);

         glVertex2f(-.96, -.02);
         glVertex2f(-1.0,-.04 );
         glEnd();


         glBegin(GL_POLYGON);
	     glColor3ub(107, 107, 103);

	     glVertex2f(-1.0, -.02);
	     glVertex2f(-.9, .085);
	     glVertex2f(-.86, .16);
         glVertex2f(-.801, .25);

         glVertex2f(-.801, .21);
         glVertex2f(-.9, .082);
         glVertex2f(-1.0, -.05);

         glEnd();

         glBegin(GL_POLYGON);
	     glColor3ub(107, 107, 103);
         glVertex2f(-1.0, -.08);
	     glVertex2f(-.9, .055);
	     glVertex2f(-.86, .13);
         glVertex2f(-.801, .24);

         glVertex2f(-.801, .20);
         glVertex2f(-.9, .052);
         glVertex2f(-1.0, -.11);



         glEnd();








///right side corner upper bridge ends--------------





///-----Right Tower-------///----------------------------------------------------------------





	glBegin(GL_QUADS);//Tower 1 down
	glColor3ub(204, 163, 0);
	glVertex2f(.55, -.53);
	glVertex2f(.81, -.53);
	glVertex2f(.81,-.43);
	glVertex2f(.55,-.43);
	glEnd();

	///TOWER BASE
glBegin(GL_QUADS);
	glColor3ub(204, 163, 0);
	glVertex2f(.48, -.59);
	glVertex2f(.88, -.59);
	glVertex2f(.88,-.43);
	glVertex2f(.48,-.43);
	glEnd();

	///LINES
	  glLineWidth(1);
	  glBegin(GL_LINES);
	  glColor3ub(102, 82, 0);
	  //glVertex2f(.48, -.59);
	  //glVertex2f(.88, -.59);

	  glVertex2f(.88, -.59);
	  glVertex2f(.88,-.43);

	  glVertex2f(.88,-.43);
	  glVertex2f(.48,-.43);

	  glVertex2f(.48, -.59);
	  glVertex2f(.48,-.43);

	  glVertex2f(.50, -.43);
	  glVertex2f(.50, -.59);

	  glVertex2f(.52, -.43);
	  glVertex2f(.52, -.59);

	  glVertex2f(.54, -.43);
	  glVertex2f(.54, -.59);

	  glVertex2f(.56, -.43);
	  glVertex2f(.56, -.59);

	  glVertex2f(.58, -.43);
	  glVertex2f(.58, -.59);

	  glVertex2f(.61, -.43);
	  glVertex2f(.61, -.59);

	  glVertex2f(.65, -.43);
	  glVertex2f(.65, -.59);

	  glVertex2f(.70, -.43);
	  glVertex2f(.70, -.59);

	  glVertex2f(.75, -.43);
	  glVertex2f(.75, -.59);

	  glVertex2f(.78, -.43);
	  glVertex2f(.78, -.59);

	  glVertex2f(.80, -.43);
	  glVertex2f(.80, -.59);

	  glVertex2f(.82, -.43);
	  glVertex2f(.82, -.59);

	  glVertex2f(.84, -.43);
	  glVertex2f(.84, -.59);

	  glVertex2f(.86, -.43);
	  glVertex2f(.86, -.59);

	  glEnd();


	glBegin(GL_QUADS);//Tower 2 down
	glColor3ub(255, 204, 0);
	glVertex2f(.56, -.43);
	glVertex2f(.8, -.43);
	glVertex2f(.8,.1);
	glVertex2f(.56,.1);
	glEnd();


	glBegin(GL_POLYGON);//Tower 3 down
	glColor3ub(255, 204, 0);
	glVertex2f(.56,.1);
	glVertex2f(.8,.1);
	glVertex2f(.81, .11);
	glVertex2f(.81, .31);
	glVertex2f(.55,.31);
	glVertex2f(.55,.11);

	glEnd();

	/////
	///LINES
	glBegin(GL_LINES);
	glColor3ub(153, 115, 0);
	glVertex2f(.56, -.43);
	glVertex2f(.8, -.43);

	glVertex2f(.8, -.43);
	glVertex2f(.8,.1);

	glVertex2f(.8,.1);
	glVertex2f(.56,.1);

	glVertex2f(.56, -.43);
	glVertex2f(.56,.1);

    glVertex2f(.57, -.43);
	glVertex2f(.57,.1);

	glVertex2f(.585, -.43);
	glVertex2f(.585,.1);

	glVertex2f(.598, -.43);
	glVertex2f(.598,.1);

	glVertex2f(.79, -.43);
	glVertex2f(.79,.1);

	glVertex2f(.775, -.43);
	glVertex2f(.775,.1);

	glVertex2f(.765, -.43);
	glVertex2f(.765,.1);

	glVertex2f(.752, -.43);
	glVertex2f(.752,.1);

	glEnd();


	///LINES
	//glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(102, 82, 0);
	glVertex2f(.56,.1);
	glVertex2f(.8,.1);
	glVertex2f(.8,.1);
	glVertex2f(.81, .11);
	glVertex2f(.81, .11);
	glVertex2f(.81, .31);
	glVertex2f(.81, .31);
	glVertex2f(.55,.31);
	glVertex2f(.55,.31);
	glVertex2f(.55,.11);
	glVertex2f(.56,.1);
	glVertex2f(.55,.11);

	///
	glVertex2f(.56, .1);
	glVertex2f(.56, .31);

	glVertex2f(.58, .1);
	glVertex2f(.58, .31);

	glVertex2f(.598, .1);
	glVertex2f(.598, .31);

	glVertex2f(.8, .1);
	glVertex2f(.8, .31);

	glVertex2f(.78, .1);
	glVertex2f(.78, .31);

	glVertex2f(.76, .1);
	glVertex2f(.76, .31);

	glVertex2f(.75, .1);
	glVertex2f(.75, .31);

	glEnd();
//////--------
	glBegin(GL_TRIANGLES);//Tower right shed back
	glColor3ub(133, 133, 173);
	glVertex2f(.79, .42);
	glVertex2f(.73, .42);
	glVertex2f(.76,.63);

	glEnd();

	///LINES
	glBegin(GL_LINES);
	glColor3ub(95,125,139);
	glVertex2f(.79, .42);
	glVertex2f(.73, .42);

	glVertex2f(.73, .42);
	glVertex2f(.76,.63);

	glVertex2f(.79, .42);
	glVertex2f(.76,.63);

	glEnd();

	glLineWidth(4);
	glBegin(GL_LINES);//Tower right cross back
	glColor3ub(133, 133, 173);
	glVertex2f(.76,.61);
	glVertex2f(.76, .67);

	glVertex2f(.75, .65);
	glVertex2f(.77, .65);
	glEnd();

	///LINES ND
	glBegin(GL_LINES);
	glColor3ub(95,125,139);
	glVertex2f(.76,.61);
	glVertex2f(.76, .67);

	glVertex2f(.75, .65);
	glVertex2f(.77, .65);


	glEnd();

	glLineWidth(1);

	glBegin(GL_TRIANGLES);//Tower left shed back
	glColor3ub(133, 133, 173);
	glVertex2f(.63, .42);
	glVertex2f(.57, .42);
    glVertex2f(.60, .63);

	glEnd();

	///LINES ND
	glBegin(GL_LINES);
	glColor3ub(95,125,139);
	glVertex2f(.63, .42);
	glVertex2f(.57, .42);
	glVertex2f(.57, .42);
    glVertex2f(.60, .63);
    glVertex2f(.63, .42);
    glVertex2f(.60, .63);
	glEnd();

	glLineWidth(4);

	glBegin(GL_LINES);//Tower left cross back
	glColor3ub(133, 133, 173);
	glVertex2f(.60, .61);
	glVertex2f(.60, .67);

	glVertex2f(.59, .65);
	glVertex2f(.61, .65);
	glEnd();

	///LINES ND
	glBegin(GL_LINES);
	glColor3ub(95,125,139);
	glVertex2f(.60, .61);
	glVertex2f(.60, .67);

	glVertex2f(.59, .65);
	glVertex2f(.61, .65);
	glEnd();

	glLineWidth(1);

	glBegin(GL_POLYGON);//Tower roof back
	glColor3ub(41, 41, 61);
	glVertex2f(.57,.31);
	glVertex2f(.79,.31);
	glVertex2f(.69, .63);
	glVertex2f(.65,.63);
	glVertex2f(.57,.31);

	glEnd();


	glBegin(GL_POLYGON);//Tower roof back top
	glColor3ub(52, 52, 76);
	glVertex2f(.65,.63);
	glVertex2f(.69, .63);
	glVertex2f(.7, .67);
	glVertex2f(.64,.67);
    glEnd();


    glBegin(GL_POLYGON);//Tower right
	glColor3ub(255, 204, 0);
	glVertex2f(.74,.31);
	glVertex2f(.81,.31);
	glVertex2f(.81, .42);
	glVertex2f(.75, .42);
	glVertex2f(.75,.34);
	glVertex2f(.74,.34);


	glEnd();

	///LINES
      glBegin(GL_LINES);
	glColor3ub(153, 115, 0);
	glVertex2f(.74,.31);
	glVertex2f(.81,.31);
	glVertex2f(.81,.31);
	glVertex2f(.81, .42);
	glVertex2f(.81, .42);
	glVertex2f(.75, .42);
	glVertex2f(.75, .42);
	glVertex2f(.75,.34);
	glVertex2f(.75,.34);
	glVertex2f(.74,.34);
	glVertex2f(.74,.31);
	glVertex2f(.74,.34);

	glVertex2f(.75,.31);
	glVertex2f(.75,.42);

	glVertex2f(.76,.31);
	glVertex2f(.76,.42);

	glVertex2f(.77,.31);
	glVertex2f(.77,.42);

    glVertex2f(.78,.31);
	glVertex2f(.78,.42);

	glVertex2f(.79,.31);
	glVertex2f(.79,.42);

	glVertex2f(.80,.31);
	glVertex2f(.80,.42);



	glEnd();



	glBegin(GL_POLYGON);//Tower left
	glColor3ub(255, 204, 0);
	glVertex2f(.55,.31);
	glVertex2f(.62,.31);
	glVertex2f(.62, .34);
	glVertex2f(.61, .34);
	glVertex2f(.61,.42);
	glVertex2f(.55,.42);

	glEnd();

glBegin(GL_POLYGON);//Tower back extra
	glColor3ub(52, 52, 76);
	glVertex2f(.72,.34);
	glVertex2f(.75,.34);
	glVertex2f(.75, .4);
	glVertex2f(.72, .4);
	glEnd();



///LINES
      glBegin(GL_LINES);
	glColor3ub(153, 115, 0);
	glVertex2f(.55,.31);
	glVertex2f(.62,.31);

	glVertex2f(.62,.31);
	glVertex2f(.62, .34);

	glVertex2f(.62, .34);
	glVertex2f(.61, .34);

	glVertex2f(.61, .34);
	glVertex2f(.61,.42);

	glVertex2f(.61,.42);
	glVertex2f(.55,.42);

	glVertex2f(.55,.31);
	glVertex2f(.55,.42);

	///
    glVertex2f(.56,.31);
	glVertex2f(.56,.42);

	glVertex2f(.57,.31);
	glVertex2f(.57,.42);

	glVertex2f(.58,.31);
	glVertex2f(.58,.42);

	glVertex2f(.59,.31);
	glVertex2f(.59,.42);

	glVertex2f(.60,.31);
	glVertex2f(.60,.42);

	glVertex2f(.61, .31);
	glVertex2f(.61,.42);


	glEnd();




	glBegin(GL_POLYGON);//window top center
	glColor3ub(255, 204, 0);
	glVertex2f(.63,.31);
	glVertex2f(.73,.31);
	glVertex2f(.73, .34);
	glVertex2f(.63, .34);

	glEnd();

	glBegin(GL_POLYGON);//window top center
	glColor3ub(255, 204, 0);
	glVertex2f(.64,.34);
	glVertex2f(.72,.34);
	glVertex2f(.72, .45);
	glVertex2f(.64, .45);

	glEnd();

	glBegin(GL_POLYGON);//window top trinagle
	glColor3ub(255, 204, 0);
	glVertex2f(.63,.36);
	glVertex2f(.73,.36);
	glVertex2f(.68, .46);
	glEnd();

	glBegin(GL_POLYGON);//window top trinagle
	glColor3ub(255, 204, 0);
	glVertex2f(.63,.41);
	glVertex2f(.73,.41);
	glVertex2f(.68, .51);
	glEnd();

	///LINES
	glBegin(GL_LINES);
    glColor3ub(128, 96, 0);
    glVertex2f(.63,.31);
	glVertex2f(.73,.31);
	glVertex2f(.73,.31);
	glVertex2f(.73, .34);
	glVertex2f(.73, .34);
	glVertex2f(.63, .34);
    glVertex2f(.63,.31);
    glVertex2f(.63, .34);

    ///
    glVertex2f(.64,.31);
	glVertex2f(.64, .34);

	glVertex2f(.65,.31);
	glVertex2f(.65, .34);

	glVertex2f(.66,.31);
	glVertex2f(.66, .34);

	glVertex2f(.67,.31);
	glVertex2f(.67, .34);

	glVertex2f(.68,.31);
	glVertex2f(.68, .34);

	glVertex2f(.69,.31);
	glVertex2f(.69, .34);

	glVertex2f(.70,.31);
	glVertex2f(.70, .34);

	glVertex2f(.71,.31);
	glVertex2f(.71, .34);

	glVertex2f(.72,.31);
	glVertex2f(.72, .34);

	glVertex2f(.63,.325);
	glVertex2f(.73, .325);


    glEnd();




	glBegin(GL_QUADS);//Tower inner dark potion
	glColor3ub(230, 184, 0);
	glVertex2f(.6, -.43);
	glVertex2f(.75, -.43);
	glVertex2f(.75,.29);
	glVertex2f(.6,.29);
	glEnd();



	glBegin(GL_QUADS);//Tower sunset
	glColor3ub(204, 163, 0);
	glVertex2f(.54, .28);
	glVertex2f(.82, .28);
	glVertex2f(.82,.3);
	glVertex2f(.54,.3);
	glEnd();

	glBegin(GL_LINES);//Tower sunset border
	glColor3ub(102, 82, 0);
	glVertex2f(.54, .28);
	glVertex2f(.82, .28);

	glVertex2f(.82,.3);
	glVertex2f(.54,.3);
	glEnd();



	glBegin(GL_QUADS);//Tower sunset
	glColor3ub(204, 163, 0);
	glVertex2f(.54, .12);
	glVertex2f(.82, .12);
	glVertex2f(.82,.13);
	glVertex2f(.54,.13);
	glEnd();

	glBegin(GL_LINES);//Tower sunset border
	glColor3ub(102, 82, 0);
	glVertex2f(.54, .12);
	glVertex2f(.82, .12);

	glVertex2f(.82,.13);
	glVertex2f(.54,.13);
	glEnd();

	glBegin(GL_QUADS);//Tower sunset
	glColor3ub(204, 163, 0);
	glVertex2f(.54, .15);
	glVertex2f(.82, .15);
	glVertex2f(.82,.16);
	glVertex2f(.54,.16);
	glEnd();

	glBegin(GL_LINES);//Tower sunset border
	glColor3ub(102, 82, 0);
	glVertex2f(.54, .15);
	glVertex2f(.82, .15);

	glVertex2f(.82,.16);
	glVertex2f(.54,.16);
	glEnd();

	glBegin(GL_QUADS);//Tower sunset
	glColor3ub(204, 163, 0);
	glVertex2f(.55, .005);
	glVertex2f(.81, .005);
	glVertex2f(.81,.015);
	glVertex2f(.55,.015);
	glEnd();

	glBegin(GL_LINES);//Tower sunset border
	glColor3ub(102, 82, 0);
    glVertex2f(.55, .005);
	glVertex2f(.81, .005);

	glVertex2f(.81,.015);
	glVertex2f(.55,.015);
	glEnd();

	glBegin(GL_QUADS);//Tower sunset
	glColor3ub(204, 163, 0);
	glVertex2f(.55, -.015);
	glVertex2f(.81, -.015);
	glVertex2f(.81,-.025);
	glVertex2f(.55,-.025);
	glEnd();

	glBegin(GL_LINES);//Tower sunset border
	glColor3ub(102, 82, 0);
    glVertex2f(.55, -.015);
	glVertex2f(.81, -.015);

	glVertex2f(.81,-.025);
	glVertex2f(.55,-.025);
	glEnd();

	glBegin(GL_QUADS);//Tower sunset
	glColor3ub(204, 163, 0);
	glVertex2f(.55, -.17);
	glVertex2f(.81, -.17);
	glVertex2f(.81,-.18);
	glVertex2f(.55,-.18);
	glEnd();

	glBegin(GL_LINES);//Tower sunset border
	glColor3ub(102, 82, 0);
    glVertex2f(.55, -.17);
	glVertex2f(.81, -.17);

	glVertex2f(.81,-.18);
	glVertex2f(.55,-.18);
	glEnd();

	glBegin(GL_QUADS);//Tower sunset
	glColor3ub(204, 163, 0);
	glVertex2f(.55, -.14);
	glVertex2f(.81, -.14);
	glVertex2f(.81,-.15);
	glVertex2f(.55,-.15);
	glEnd();

	glBegin(GL_LINES);//Tower sunset border
	glColor3ub(102, 82, 0);
    glVertex2f(.55, -.14);
	glVertex2f(.81, -.14);

	glVertex2f(.81,-.15);
	glVertex2f(.55,-.15);
	glEnd();


	glBegin(GL_POLYGON);//Tower right sunset
	glColor3ub(204, 163, 0);
	glVertex2f(.74,.38);
	glVertex2f(.82,.38);
	glVertex2f(.82, .39);
	glVertex2f(.74, .39);
	glEnd();

	glBegin(GL_LINES);//Tower right sunset
	glColor3ub(102, 82, 0);
    glVertex2f(.74,.38);
	glVertex2f(.82,.38);

	glVertex2f(.82, .39);
	glVertex2f(.74, .39);
	glEnd();

	glBegin(GL_POLYGON);//Tower right sunset
	glColor3ub(204, 163, 0);
	glVertex2f(.74,.41);
	glVertex2f(.82,.41);
	glVertex2f(.82, .42);
	glVertex2f(.74, .42);
	glEnd();

	glBegin(GL_LINES);//Tower right sunset
	glColor3ub(102, 82, 0);
    glVertex2f(.74,.41);
	glVertex2f(.82,.41);

	glVertex2f(.82, .42);
	glVertex2f(.74, .42);
	glEnd();

	glBegin(GL_POLYGON);//Tower left sunset
	glColor3ub(204, 163, 0);
	glVertex2f(.54,.38);
	glVertex2f(.62,.38);
	glVertex2f(.62, .39);
	glVertex2f(.54, .39);
	glEnd();

	glBegin(GL_LINES);//Tower left sunset
	glColor3ub(102, 82, 0);
    glVertex2f(.54,.38);
	glVertex2f(.62,.38);

	glVertex2f(.62, .39);
	glVertex2f(.54, .39);
	glEnd();

	glBegin(GL_POLYGON);//Tower left sunset
	glColor3ub(204, 163, 0);
	glVertex2f(.54,.41);
	glVertex2f(.62,.41);
	glVertex2f(.62, .42);
	glVertex2f(.54, .42);
	glEnd();

	glBegin(GL_LINES);//Tower left sunset
	glColor3ub(102, 82, 0);
    glVertex2f(.54,.41);
	glVertex2f(.62,.41);

	glVertex2f(.62, .42);
	glVertex2f(.54, .42);
	glEnd();

	glBegin(GL_TRIANGLES);//Tower right shed
	glColor3ub(83, 83, 121);
	glVertex2f(.81, .42);
	glVertex2f(.75, .42);
	glVertex2f(.78,.63);

	glEnd();

	glBegin(GL_TRIANGLES);//Tower right shed shadow
	glColor3ub(93, 93, 137);
	glVertex2f(.79, .44);
	glVertex2f(.77, .44);
	glVertex2f(.78,.60);

	glEnd();

	///LINES
	glBegin(GL_LINES);
	glColor3ub(117, 117, 163);
	glVertex2f(.81, .42);
	glVertex2f(.75, .42);
	glVertex2f(.75, .42);
	glVertex2f(.78,.63);
	glVertex2f(.81, .42);
	glVertex2f(.78,.63);

	glEnd();

	glBegin(GL_TRIANGLES);//Tower left shed
	glColor3ub(83, 83, 121);
	glVertex2f(.61, .42);
	glVertex2f(.55, .42);
    glVertex2f(.58, .63);

	glEnd();

	glBegin(GL_TRIANGLES);//Tower left shed shadow
	glColor3ub(93, 93, 137);
	glVertex2f(.59, .44);
	glVertex2f(.57, .44);
    glVertex2f(.58, .60);

	glEnd();
	///LINES
	glBegin(GL_LINES);
	glColor3ub(117, 117, 163);
	glVertex2f(.61, .42);
	glVertex2f(.55, .42);
	glVertex2f(.55, .42);
    glVertex2f(.58, .63);
    glVertex2f(.61, .42);
    glVertex2f(.58, .63);


	glEnd();



	glLineWidth(4);

	glBegin(GL_LINES);//Tower left cross
	glColor3ub(52, 52, 76);
	glVertex2f(.58, .62);
	glVertex2f(.58, .68);

	glVertex2f(.57, .66);
	glVertex2f(.59, .66);
	glEnd();

	glBegin(GL_LINES);//Tower right cross
	glColor3ub(52, 52, 76);
	glVertex2f(.78,.62);
	glVertex2f(.78, .68);

	glVertex2f(.77, .66);
	glVertex2f(.79, .66);
	glEnd();

	glBegin(GL_POLYGON);//Tower Top sunset
	glColor3ub(62, 62, 91);
	glVertex2f(.7, .67);
	glVertex2f(.64,.67);
	glVertex2f(.64, .69);
	glVertex2f(.7, .69);
	glEnd();

	glBegin(GL_LINES);//Tower top sunset
	glColor3ub(83, 83, 121);
	glVertex2f(.7, .67);
	glVertex2f(.64,.67);

	glVertex2f(.64, .69);
	glVertex2f(.7, .69);
	glEnd();


	glBegin(GL_POLYGON);//Tower Top sunset cross
	glColor3ub(230, 184, 0);
	glVertex2f(.64, .69);
	glVertex2f(.7, .69);
	glVertex2f(.67, .74);
	glEnd();

	glLineWidth(5);


	glBegin(GL_LINES);//Tower top sunset cross
	glColor3ub(230, 184, 0);
	glVertex2f(.67, .73);
	glVertex2f(.67,.80);

	glVertex2f(.66, .78);
	glVertex2f(.68, .78);

	glVertex2f(.64, .69);
	glVertex2f(.64, .71);

	glVertex2f(.7, .69);
	glVertex2f(.7, .71);
	glEnd();



	glBegin(GL_POLYGON);//window set 1
	glColor3ub(0,0, 0);
	glVertex2f(.655,.34);
	glVertex2f(.665,.34);
	glVertex2f(.665, .42);
	glVertex2f(.66, .43);
	glVertex2f(.655, .42);
	glEnd();


	glBegin(GL_POLYGON);//window set 1
	glColor3ub(0,0, 0);
	glVertex2f(.675,.34);
	glVertex2f(.685,.34);
	glVertex2f(.685, .42);
	glVertex2f(.68, .43);
	glVertex2f(.675, .42);
	glEnd();

	glBegin(GL_POLYGON);//window set 1
	glColor3ub(0,0, 0);
	glVertex2f(.695,.34);
	glVertex2f(.705,.34);
	glVertex2f(.705, .42);
	glVertex2f(.7, .43);
	glVertex2f(.695, .42);
	glEnd();

	glBegin(GL_POLYGON);//window set 1 line
	glColor3ub(255, 204, 0);
	glVertex2f(.64,.39);
	glVertex2f(.72,.39);
	glVertex2f(.72, .40);
	glVertex2f(.64, .40);
	glEnd();

	glBegin(GL_POLYGON);//window set 2
	glColor3ub(0,0, 0);
	glVertex2f(.655,.21);
	glVertex2f(.665,.21);
	glVertex2f(.665, .265);
	glVertex2f(.66, .275);
	glVertex2f(.655, .265);
	glEnd();


	glBegin(GL_POLYGON);//window set 2
	glColor3ub(0,0, 0);
	glVertex2f(.675,.21);
	glVertex2f(.685,.21);
	glVertex2f(.685, .265);
	glVertex2f(.68, .275);
	glVertex2f(.675, .265);
	glEnd();

	glBegin(GL_POLYGON);//window set 2
	glColor3ub(0,0, 0);
	glVertex2f(.695,.21);
	glVertex2f(.705,.21);
	glVertex2f(.705, .265);
	glVertex2f(.7, .275);
	glVertex2f(.695, .265);
	glEnd();

	glBegin(GL_POLYGON);//window set 2
	glColor3ub(0,0, 0);
	glVertex2f(.61,.21);
	glVertex2f(.62,.21);
	glVertex2f(.62, .265);
	glVertex2f(.615, .275);
	glVertex2f(.61, .265);
	glEnd();

	glBegin(GL_POLYGON);//window set 2
	glColor3ub(0,0, 0);
	glVertex2f(.73,.21);
	glVertex2f(.74,.21);
	glVertex2f(.74, .265);
	glVertex2f(.735, .275);
	glVertex2f(.73, .265);
	glEnd();

	glBegin(GL_POLYGON);//window set 2 line
	glColor3ub(230, 184, 0);
	glVertex2f(.6,.245);
	glVertex2f(.75,.245);
	glVertex2f(.75, .255);
	glVertex2f(.6, .255);
	glEnd();

	glLineWidth(4);
	glBegin(GL_LINES);//Tower inner dark art
	glColor3ub(255, 204, 0);
	glVertex2f(.6, .20);
	glVertex2f(.75, .20);

	glVertex2f(.6,.18);
	glVertex2f(.75,.18);
	glEnd();

	glBegin(GL_LINES);//Tower inner dark art
	glColor3ub(255, 204, 0);

	glVertex2f(.63,.16);
	glVertex2f(.63,.28);

	glVertex2f(.72,.16);
	glVertex2f(.72,.28);
	glEnd();

	glLineWidth(2);//Circles
	glColor3ub(0, 0, 0);
    triangleLines(.66,.19,.007);

    glColor3ub(0, 0, 0);
    triangleLines(.68,.19,.007);

    glColor3ub(0, 0, 0);
    triangleLines(.70,.19,.007);

    glBegin(GL_POLYGON);//window set 3
	glColor3ub(255, 204, 0);
	glVertex2f(.615,.025);
	glVertex2f(.645,.025);
	glVertex2f(.645, .09);
	glVertex2f(.63, .11);
	glVertex2f(.615, .09);
	glEnd();


	glBegin(GL_POLYGON);//window set 3
	glColor3ub(255, 204, 0);
	glVertex2f(.665,.025);
	glVertex2f(.695,.025);
	glVertex2f(.695, .09);
	glVertex2f(.68, .11);
	glVertex2f(.665, .09);
	glEnd();

	glBegin(GL_POLYGON);//window set 3
	glColor3ub(255, 204, 0);
	glVertex2f(.715,.025);
	glVertex2f(.745,.025);
	glVertex2f(.745, .09);
	glVertex2f(.73, .11);
	glVertex2f(.715, .09);
	glEnd();


	glBegin(GL_POLYGON);//window set 3 black
	glColor3ub(0, 0, 0);
	glVertex2f(.62,.027);
	glVertex2f(.64,.027);
	glVertex2f(.64, .08);
	glVertex2f(.63, .10);
	glVertex2f(.62, .08);
	glEnd();


	glBegin(GL_POLYGON);//window set 3 black
	glColor3ub(0, 0, 0);
	glVertex2f(.67,.027);
	glVertex2f(.69,.027);
	glVertex2f(.69, .08);
	glVertex2f(.68, .10);
	glVertex2f(.67, .08);
	glEnd();

	glBegin(GL_POLYGON);//window set 3 black
	glColor3ub(0, 0, 0);
	glVertex2f(.72,.027);
	glVertex2f(.74,.027);
	glVertex2f(.74, .08);
	glVertex2f(.73, .10);
	glVertex2f(.72, .08);
	glEnd();

	glBegin(GL_POLYGON);//window set 3 line
	glColor3ub(230, 184, 0);
	glVertex2f(.615,.055);
	glVertex2f(.745,.055);
	glVertex2f(.745, .07);
	glVertex2f(.615, .07);
	glEnd();

	glBegin(GL_POLYGON);//window set 4
	glColor3ub(255, 204, 0);
	glVertex2f(.61,-.125);
	glVertex2f(.64,-.125);
	glVertex2f(.64, -.055);
	glVertex2f(.625, -.04);
	glVertex2f(.61, -.055);
	glEnd();


	glBegin(GL_POLYGON);//window set 4
	glColor3ub(255, 204, 0);
	glVertex2f(.65,-.125);
	glVertex2f(.71,-.125);
	glVertex2f(.71,-.055);
	glVertex2f(.68, -.03);
	glVertex2f(.65,- .055);
	glEnd();

	glBegin(GL_POLYGON);//window set 4
	glColor3ub(255, 204, 0);
	glVertex2f(.715,-.125);
	glVertex2f(.745,-.125);
	glVertex2f(.745,-.055);
	glVertex2f(.73,  -.04);
	glVertex2f(.715,-.055);
	glEnd();

	glBegin(GL_POLYGON);//window set 4 black
	glColor3ub(0, 0, 0);
	glVertex2f(.615,-.12);
	glVertex2f(.635,-.12);
	glVertex2f(.635, -.06);
	glVertex2f(.625, -.04);
	glVertex2f(.615, -.06);
	glEnd();

//middle windows
	glBegin(GL_POLYGON);//window set 4 black
	glColor3ub(0, 0, 0);
	glVertex2f(.655,-.12);
	glVertex2f(.675,-.12);
	glVertex2f(.675, -.06);
	glVertex2f(.665, -.04);
	glVertex2f(.655,-.06);
	glEnd();

	glBegin(GL_POLYGON);//window set 4 black
	glColor3ub(0, 0, 0);
	glVertex2f(.685,-.12);
	glVertex2f(.705,-.12);
	glVertex2f(.705, -.06);
	glVertex2f(.695, -.04);
	glVertex2f(.685,-.06);
	glEnd();

	glBegin(GL_POLYGON);//window set 4 black
	glColor3ub(0, 0, 0);
	glVertex2f(.72,-.12);
	glVertex2f(.74,-.12);
	glVertex2f(.74,-.06);
	glVertex2f(.73, -.04);
	glVertex2f(.72, -.06);
	glEnd();

    glBegin(GL_POLYGON);//window set 4 line
	glColor3ub(230, 184, 0);
	glVertex2f(.615,-.09);
	glVertex2f(.745,-.09);
	glVertex2f(.745, -.08);
	glVertex2f(.615, -.08);
	glEnd();

	glBegin(GL_POLYGON);//window set 5 line design
	glColor3ub(255, 204, 0);
	glVertex2f(.6,-.27);
	glVertex2f(.75,-.27);
	glVertex2f(.75, -.26);
	glVertex2f(.6, -.26);
	glEnd();

	glBegin(GL_POLYGON);//window set 5 line design
	glColor3ub(255, 204, 0);
	glVertex2f(.6,-.33);
	glVertex2f(.75,-.33);
	glVertex2f(.75, -.32);
	glVertex2f(.6, -.32);
	glEnd();
//windlow 5
	glBegin(GL_POLYGON);//window set 5 back left
	glColor3ub(255, 204, 0);
	glVertex2f(.615,-.26);
	glVertex2f(.64,-.26);
	glVertex2f(.64, -.19);
	glVertex2f(.615, -.19);
	glEnd();



	glBegin(GL_POLYGON);//window set 5 back r8
	glColor3ub(255, 204, 0);
	glVertex2f(.735,-.26);
	glVertex2f(.71,-.26);
	glVertex2f(.71, -.19);
	glVertex2f(.735, -.19);
	glEnd();

	glBegin(GL_POLYGON);//window set 5 back left black
	glColor3ub(0, 0, 0);
	glVertex2f(.62,-.26);
	glVertex2f(.635,-.26);
	glVertex2f(.635, -.2);
	glVertex2f(.627, -.19);
	glVertex2f(.62, -.2);
	glEnd();



	glBegin(GL_POLYGON);//window set 5 back r8 black
	glColor3ub(0, 0, 0);
	glVertex2f(.73,-.26);
	glVertex2f(.715,-.26);
	glVertex2f(.715, -.2);
    glVertex2f(.72, -.19);
	glVertex2f(.73, -.2);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);//window set 5 line design
	glColor3ub(230, 184, 0);
	glVertex2f(.6,-.22);
	glVertex2f(.75,-.22);

	glEnd();



	glBegin(GL_POLYGON);//window set 5 middle
	glVertex2f(.65,-.26);
	glVertex2f(.7,-.26);
	glVertex2f(.7,-.19);
	glVertex2f(.65,- .19);
	glEnd();

	glBegin(GL_POLYGON);//window set 5 middle  black
	glColor3ub(255, 204, 0);
	glColor3ub(0, 0, 0);
	glVertex2f(.66,-.25);
	glVertex2f(.69,-.25);
	glVertex2f(.69,-.2);
	glVertex2f(.66,- .2);
	glEnd();

	glLineWidth(3);
	glBegin(GL_LINES);//window set 5 middle
	glColor3ub(230, 184, 0);
	glVertex2f(.675,-.26);
	glVertex2f(.675,-.19);

	glVertex2f(.65,-.225);
	glVertex2f(.7,- .225);
	glEnd();

	//window 6

	glBegin(GL_POLYGON);//window set 5 back left
	glColor3ub(255, 204, 0);
	glVertex2f(.615,-.32);
	glVertex2f(.64,-.32);
	glVertex2f(.64, -.28);
	glVertex2f(.615, -.28);
	glEnd();



	glBegin(GL_POLYGON);//window set 5 back r8
	glColor3ub(255, 204, 0);
	glVertex2f(.735,-.32);
	glVertex2f(.71,-.32);
	glVertex2f(.71, -.28);
	glVertex2f(.735, -.28);
	glEnd();

	glBegin(GL_POLYGON);//window set 5 back left black
	glColor3ub(0, 0, 0);
	glVertex2f(.62,-.31);
	glVertex2f(.635,-.31);
	glVertex2f(.635, -.285);
	glVertex2f(.62, -.285);
	glEnd();



	glBegin(GL_POLYGON);//window set 5 back r8 black
	glColor3ub(0, 0, 0);
	glVertex2f(.73,-.31);
	glVertex2f(.715,-.31);
	glVertex2f(.715, -.285);
	glVertex2f(.73, -.285);
	glEnd();

	glBegin(GL_POLYGON);//window set 5 middle
	glColor3ub(255, 204, 0);
	glVertex2f(.655,-.315);
	glVertex2f(.695,-.315);
	glVertex2f(.695,-.28);
	glVertex2f(.655,- .28);
	glEnd();

	glBegin(GL_POLYGON);//window set 5 middle black
	glColor3ub(0, 0, 0);
	glVertex2f(.66,-.31);
	glVertex2f(.69,-.31);
	glVertex2f(.69,-.285);
	glVertex2f(.66,- .285);
	glEnd();

	glBegin(GL_LINES);//window set 5 middle
	glColor3ub(230, 184, 0);
	glVertex2f(.675,-.28);
	glVertex2f(.675,-.315);
	glEnd();

	//windows 6
	glBegin(GL_POLYGON);//window set 5 back left
	glColor3ub(255, 204, 0);
	glVertex2f(.615,-.43);
	glVertex2f(.64,-.43);
	glVertex2f(.64, -.36);
	glVertex2f(.615, -.36);
	glEnd();



	glBegin(GL_POLYGON);//window set 5 back r8
	glColor3ub(255, 204, 0);
	glVertex2f(.735,-.43);
	glVertex2f(.71,-.43);
	glVertex2f(.71, -.36);
	glVertex2f(.735, -.36);
	glEnd();

	glBegin(GL_POLYGON);//window set 5 back left black
	glColor3ub(0, 0, 0);
	glVertex2f(.62,-.43);
	glVertex2f(.635,-.43);
	glVertex2f(.635, -.365);
	glVertex2f(.62, -.365);
	glEnd();



	glBegin(GL_POLYGON);//window set 5 back r8 black
	glColor3ub(0, 0, 0);
	glVertex2f(.73,-.43);
	glVertex2f(.715,-.43);
	glVertex2f(.715, -.365);
	glVertex2f(.73, -.365);
	glEnd();

	glBegin(GL_POLYGON);//window set 6 middle
	glColor3ub(255, 204, 0);
	glVertex2f(.66,-.43);
	glVertex2f(.69,-.43);
	glVertex2f(.69,-.36);
	glVertex2f(.66,- .36);
	glEnd();

	glBegin(GL_POLYGON);//window set 6 middle black
	glColor3ub(0, 0, 0);
	glVertex2f(.665,-.43);
	glVertex2f(.685,-.43);
	glVertex2f(.685,-.365);
	glVertex2f(.665,- .365);
	glEnd();

	glBegin(GL_TRIANGLES);//window set 6 middle top
	glColor3ub(255, 204, 0);
	glVertex2f(.655,- .365);
	glVertex2f(.695,-.365);
	glVertex2f(.675,- .335);
	glEnd();

	///-----Right Tower ends-------///-------------------------------------------------------






	///-----Left Tower Begins-------///-------------------------------------------------------

    glTranslatef(-1.35,0,0);

	glBegin(GL_QUADS);//Tower 1 down
	glColor3ub(204, 163, 0);
	glVertex2f(.55, -.53);
	glVertex2f(.81, -.53);
	glVertex2f(.81,-.43);
	glVertex2f(.55,-.43);
	glEnd();

	///TOWER BASE
glBegin(GL_QUADS);
	glColor3ub(204, 163, 0);
	glVertex2f(.48, -.59);
	glVertex2f(.88, -.59);
	glVertex2f(.88,-.43);
	glVertex2f(.48,-.43);
	glEnd();

	///LINES
	  glLineWidth(1);
	  glBegin(GL_LINES);
	  glColor3ub(102, 82, 0);
	  //glVertex2f(.48, -.59);
	  //glVertex2f(.88, -.59);

	  glVertex2f(.88, -.59);
	  glVertex2f(.88,-.43);

	  glVertex2f(.88,-.43);
	  glVertex2f(.48,-.43);

	  glVertex2f(.48, -.59);
	  glVertex2f(.48,-.43);

	  glVertex2f(.50, -.43);
	  glVertex2f(.50, -.59);

	  glVertex2f(.52, -.43);
	  glVertex2f(.52, -.59);

	  glVertex2f(.54, -.43);
	  glVertex2f(.54, -.59);

	  glVertex2f(.56, -.43);
	  glVertex2f(.56, -.59);

	  glVertex2f(.58, -.43);
	  glVertex2f(.58, -.59);

	  glVertex2f(.61, -.43);
	  glVertex2f(.61, -.59);

	  glVertex2f(.65, -.43);
	  glVertex2f(.65, -.59);

	  glVertex2f(.70, -.43);
	  glVertex2f(.70, -.59);

	  glVertex2f(.75, -.43);
	  glVertex2f(.75, -.59);

	  glVertex2f(.78, -.43);
	  glVertex2f(.78, -.59);

	  glVertex2f(.80, -.43);
	  glVertex2f(.80, -.59);

	  glVertex2f(.82, -.43);
	  glVertex2f(.82, -.59);

	  glVertex2f(.84, -.43);
	  glVertex2f(.84, -.59);

	  glVertex2f(.86, -.43);
	  glVertex2f(.86, -.59);

	  glEnd();

	glBegin(GL_QUADS);//Tower 2 down
	glColor3ub(255, 204, 0);
	glVertex2f(.56, -.43);
	glVertex2f(.8, -.43);
	glVertex2f(.8,.1);
	glVertex2f(.56,.1);
	glEnd();


	glBegin(GL_POLYGON);//Tower 3 down
	glColor3ub(255, 204, 0);
	glVertex2f(.56,.1);
	glVertex2f(.8,.1);
	glVertex2f(.81, .11);
	glVertex2f(.81, .31);
	glVertex2f(.55,.31);
	glVertex2f(.55,.11);

	glEnd();

	/////
	///LINES
	glBegin(GL_LINES);
	glColor3ub(153, 115, 0);
	glVertex2f(.56, -.43);
	glVertex2f(.8, -.43);

	glVertex2f(.8, -.43);
	glVertex2f(.8,.1);

	glVertex2f(.8,.1);
	glVertex2f(.56,.1);

	glVertex2f(.56, -.43);
	glVertex2f(.56,.1);

    glVertex2f(.57, -.43);
	glVertex2f(.57,.1);

	glVertex2f(.585, -.43);
	glVertex2f(.585,.1);

	glVertex2f(.598, -.43);
	glVertex2f(.598,.1);

	glVertex2f(.79, -.43);
	glVertex2f(.79,.1);

	glVertex2f(.775, -.43);
	glVertex2f(.775,.1);

	glVertex2f(.765, -.43);
	glVertex2f(.765,.1);

	glVertex2f(.752, -.43);
	glVertex2f(.752,.1);

	glEnd();


	///LINES
	//glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor3ub(102, 82, 0);
	glVertex2f(.56,.1);
	glVertex2f(.8,.1);
	glVertex2f(.8,.1);
	glVertex2f(.81, .11);
	glVertex2f(.81, .11);
	glVertex2f(.81, .31);
	glVertex2f(.81, .31);
	glVertex2f(.55,.31);
	glVertex2f(.55,.31);
	glVertex2f(.55,.11);
	glVertex2f(.56,.1);
	glVertex2f(.55,.11);

	///
	glVertex2f(.56, .1);
	glVertex2f(.56, .31);

	glVertex2f(.58, .1);
	glVertex2f(.58, .31);

	glVertex2f(.598, .1);
	glVertex2f(.598, .31);

	glVertex2f(.8, .1);
	glVertex2f(.8, .31);

	glVertex2f(.78, .1);
	glVertex2f(.78, .31);

	glVertex2f(.76, .1);
	glVertex2f(.76, .31);

	glVertex2f(.75, .1);
	glVertex2f(.75, .31);

	glEnd();
//////--------
	glBegin(GL_TRIANGLES);//Tower right shed back
	glColor3ub(133, 133, 173);
	glVertex2f(.79, .42);
	glVertex2f(.73, .42);
	glVertex2f(.76,.63);

	glEnd();

	///LINES
	glBegin(GL_LINES);
	glColor3ub(95,125,139);
	glVertex2f(.79, .42);
	glVertex2f(.73, .42);

	glVertex2f(.73, .42);
	glVertex2f(.76,.63);

	glVertex2f(.79, .42);
	glVertex2f(.76,.63);

	glEnd();

	glLineWidth(4);
	glBegin(GL_LINES);//Tower right cross back
	glColor3ub(133, 133, 173);
	glVertex2f(.76,.61);
	glVertex2f(.76, .67);

	glVertex2f(.75, .65);
	glVertex2f(.77, .65);
	glEnd();

	///LINES ND
	glBegin(GL_LINES);
	glColor3ub(95,125,139);
	glVertex2f(.76,.61);
	glVertex2f(.76, .67);

	glVertex2f(.75, .65);
	glVertex2f(.77, .65);


	glEnd();

	glLineWidth(1);

	glBegin(GL_TRIANGLES);//Tower left shed back
	glColor3ub(133, 133, 173);
	glVertex2f(.63, .42);
	glVertex2f(.57, .42);
    glVertex2f(.60, .63);

	glEnd();

	///LINES ND
	glBegin(GL_LINES);
	glColor3ub(95,125,139);
	glVertex2f(.63, .42);
	glVertex2f(.57, .42);
	glVertex2f(.57, .42);
    glVertex2f(.60, .63);
    glVertex2f(.63, .42);
    glVertex2f(.60, .63);
	glEnd();

	glLineWidth(4);

	glBegin(GL_LINES);//Tower left cross back
	glColor3ub(133, 133, 173);
	glVertex2f(.60, .61);
	glVertex2f(.60, .67);

	glVertex2f(.59, .65);
	glVertex2f(.61, .65);
	glEnd();

	///LINES ND
	glBegin(GL_LINES);
	glColor3ub(95,125,139);
	glVertex2f(.60, .61);
	glVertex2f(.60, .67);

	glVertex2f(.59, .65);
	glVertex2f(.61, .65);
	glEnd();

	glLineWidth(1);

	glBegin(GL_POLYGON);//Tower roof back
	glColor3ub(41, 41, 61);
	glVertex2f(.57,.31);
	glVertex2f(.79,.31);
	glVertex2f(.69, .63);
	glVertex2f(.65,.63);
	glVertex2f(.57,.31);

	glEnd();


	glBegin(GL_POLYGON);//Tower roof back top
	glColor3ub(52, 52, 76);
	glVertex2f(.65,.63);
	glVertex2f(.69, .63);
	glVertex2f(.7, .67);
	glVertex2f(.64,.67);
    glEnd();


    glBegin(GL_POLYGON);//Tower right
	glColor3ub(255, 204, 0);
	glVertex2f(.74,.31);
	glVertex2f(.81,.31);
	glVertex2f(.81, .42);
	glVertex2f(.75, .42);
	glVertex2f(.75,.34);
	glVertex2f(.74,.34);


	glEnd();

	///LINES
      glBegin(GL_LINES);
	glColor3ub(153, 115, 0);
	glVertex2f(.74,.31);
	glVertex2f(.81,.31);
	glVertex2f(.81,.31);
	glVertex2f(.81, .42);
	glVertex2f(.81, .42);
	glVertex2f(.75, .42);
	glVertex2f(.75, .42);
	glVertex2f(.75,.34);
	glVertex2f(.75,.34);
	glVertex2f(.74,.34);
	glVertex2f(.74,.31);
	glVertex2f(.74,.34);

	glVertex2f(.75,.31);
	glVertex2f(.75,.42);

	glVertex2f(.76,.31);
	glVertex2f(.76,.42);

	glVertex2f(.77,.31);
	glVertex2f(.77,.42);

    glVertex2f(.78,.31);
	glVertex2f(.78,.42);

	glVertex2f(.79,.31);
	glVertex2f(.79,.42);

	glVertex2f(.80,.31);
	glVertex2f(.80,.42);



	glEnd();



	glBegin(GL_POLYGON);//Tower left
	glColor3ub(255, 204, 0);
	glVertex2f(.55,.31);
	glVertex2f(.62,.31);
	glVertex2f(.62, .34);
	glVertex2f(.61, .34);
	glVertex2f(.61,.42);
	glVertex2f(.55,.42);

	glEnd();

glBegin(GL_POLYGON);//Tower back extra
	glColor3ub(52, 52, 76);
	glVertex2f(.72,.34);
	glVertex2f(.75,.34);
	glVertex2f(.75, .4);
	glVertex2f(.72, .4);
	glEnd();



///LINES
      glBegin(GL_LINES);
	glColor3ub(153, 115, 0);
	glVertex2f(.55,.31);
	glVertex2f(.62,.31);

	glVertex2f(.62,.31);
	glVertex2f(.62, .34);

	glVertex2f(.62, .34);
	glVertex2f(.61, .34);

	glVertex2f(.61, .34);
	glVertex2f(.61,.42);

	glVertex2f(.61,.42);
	glVertex2f(.55,.42);

	glVertex2f(.55,.31);
	glVertex2f(.55,.42);

	///
    glVertex2f(.56,.31);
	glVertex2f(.56,.42);

	glVertex2f(.57,.31);
	glVertex2f(.57,.42);

	glVertex2f(.58,.31);
	glVertex2f(.58,.42);

	glVertex2f(.59,.31);
	glVertex2f(.59,.42);

	glVertex2f(.60,.31);
	glVertex2f(.60,.42);

	glVertex2f(.61, .31);
	glVertex2f(.61,.42);


	glEnd();




	glBegin(GL_POLYGON);//window top center
	glColor3ub(255, 204, 0);
	glVertex2f(.63,.31);
	glVertex2f(.73,.31);
	glVertex2f(.73, .34);
	glVertex2f(.63, .34);

	glEnd();

	glBegin(GL_POLYGON);//window top center
	glColor3ub(255, 204, 0);
	glVertex2f(.64,.34);
	glVertex2f(.72,.34);
	glVertex2f(.72, .45);
	glVertex2f(.64, .45);

	glEnd();

	glBegin(GL_POLYGON);//window top trinagle
	glColor3ub(255, 204, 0);
	glVertex2f(.63,.36);
	glVertex2f(.73,.36);
	glVertex2f(.68, .46);
	glEnd();

	glBegin(GL_POLYGON);//window top trinagle
	glColor3ub(255, 204, 0);
	glVertex2f(.63,.41);
	glVertex2f(.73,.41);
	glVertex2f(.68, .51);
	glEnd();

	///LINES
	glBegin(GL_LINES);
    glColor3ub(128, 96, 0);
    glVertex2f(.63,.31);
	glVertex2f(.73,.31);
	glVertex2f(.73,.31);
	glVertex2f(.73, .34);
	glVertex2f(.73, .34);
	glVertex2f(.63, .34);
    glVertex2f(.63,.31);
    glVertex2f(.63, .34);

    ///
    glVertex2f(.64,.31);
	glVertex2f(.64, .34);

	glVertex2f(.65,.31);
	glVertex2f(.65, .34);

	glVertex2f(.66,.31);
	glVertex2f(.66, .34);

	glVertex2f(.67,.31);
	glVertex2f(.67, .34);

	glVertex2f(.68,.31);
	glVertex2f(.68, .34);

	glVertex2f(.69,.31);
	glVertex2f(.69, .34);

	glVertex2f(.70,.31);
	glVertex2f(.70, .34);

	glVertex2f(.71,.31);
	glVertex2f(.71, .34);

	glVertex2f(.72,.31);
	glVertex2f(.72, .34);

	glVertex2f(.63,.325);
	glVertex2f(.73, .325);


    glEnd();




	glBegin(GL_QUADS);//Tower inner dark potion
	glColor3ub(230, 184, 0);
	glVertex2f(.6, -.43);
	glVertex2f(.75, -.43);
	glVertex2f(.75,.29);
	glVertex2f(.6,.29);
	glEnd();



	glBegin(GL_QUADS);//Tower sunset
	glColor3ub(204, 163, 0);
	glVertex2f(.54, .28);
	glVertex2f(.82, .28);
	glVertex2f(.82,.3);
	glVertex2f(.54,.3);
	glEnd();

	glBegin(GL_LINES);//Tower sunset border
	glColor3ub(102, 82, 0);
	glVertex2f(.54, .28);
	glVertex2f(.82, .28);

	glVertex2f(.82,.3);
	glVertex2f(.54,.3);
	glEnd();



	glBegin(GL_QUADS);//Tower sunset
	glColor3ub(204, 163, 0);
	glVertex2f(.54, .12);
	glVertex2f(.82, .12);
	glVertex2f(.82,.13);
	glVertex2f(.54,.13);
	glEnd();

	glBegin(GL_LINES);//Tower sunset border
	glColor3ub(102, 82, 0);
	glVertex2f(.54, .12);
	glVertex2f(.82, .12);

	glVertex2f(.82,.13);
	glVertex2f(.54,.13);
	glEnd();

	glBegin(GL_QUADS);//Tower sunset
	glColor3ub(204, 163, 0);
	glVertex2f(.54, .15);
	glVertex2f(.82, .15);
	glVertex2f(.82,.16);
	glVertex2f(.54,.16);
	glEnd();

	glBegin(GL_LINES);//Tower sunset border
	glColor3ub(102, 82, 0);
	glVertex2f(.54, .15);
	glVertex2f(.82, .15);

	glVertex2f(.82,.16);
	glVertex2f(.54,.16);
	glEnd();

	glBegin(GL_QUADS);//Tower sunset
	glColor3ub(204, 163, 0);
	glVertex2f(.55, .005);
	glVertex2f(.81, .005);
	glVertex2f(.81,.015);
	glVertex2f(.55,.015);
	glEnd();

	glBegin(GL_LINES);//Tower sunset border
	glColor3ub(102, 82, 0);
    glVertex2f(.55, .005);
	glVertex2f(.81, .005);

	glVertex2f(.81,.015);
	glVertex2f(.55,.015);
	glEnd();

	glBegin(GL_QUADS);//Tower sunset
	glColor3ub(204, 163, 0);
	glVertex2f(.55, -.015);
	glVertex2f(.81, -.015);
	glVertex2f(.81,-.025);
	glVertex2f(.55,-.025);
	glEnd();

	glBegin(GL_LINES);//Tower sunset border
	glColor3ub(102, 82, 0);
    glVertex2f(.55, -.015);
	glVertex2f(.81, -.015);

	glVertex2f(.81,-.025);
	glVertex2f(.55,-.025);
	glEnd();

	glBegin(GL_QUADS);//Tower sunset
	glColor3ub(204, 163, 0);
	glVertex2f(.55, -.17);
	glVertex2f(.81, -.17);
	glVertex2f(.81,-.18);
	glVertex2f(.55,-.18);
	glEnd();

	glBegin(GL_LINES);//Tower sunset border
	glColor3ub(102, 82, 0);
    glVertex2f(.55, -.17);
	glVertex2f(.81, -.17);

	glVertex2f(.81,-.18);
	glVertex2f(.55,-.18);
	glEnd();

	glBegin(GL_QUADS);//Tower sunset
	glColor3ub(204, 163, 0);
	glVertex2f(.55, -.14);
	glVertex2f(.81, -.14);
	glVertex2f(.81,-.15);
	glVertex2f(.55,-.15);
	glEnd();

	glBegin(GL_LINES);//Tower sunset border
	glColor3ub(102, 82, 0);
    glVertex2f(.55, -.14);
	glVertex2f(.81, -.14);

	glVertex2f(.81,-.15);
	glVertex2f(.55,-.15);
	glEnd();


	glBegin(GL_POLYGON);//Tower right sunset
	glColor3ub(204, 163, 0);
	glVertex2f(.74,.38);
	glVertex2f(.82,.38);
	glVertex2f(.82, .39);
	glVertex2f(.74, .39);
	glEnd();

	glBegin(GL_LINES);//Tower right sunset
	glColor3ub(102, 82, 0);
    glVertex2f(.74,.38);
	glVertex2f(.82,.38);

	glVertex2f(.82, .39);
	glVertex2f(.74, .39);
	glEnd();

	glBegin(GL_POLYGON);//Tower right sunset
	glColor3ub(204, 163, 0);
	glVertex2f(.74,.41);
	glVertex2f(.82,.41);
	glVertex2f(.82, .42);
	glVertex2f(.74, .42);
	glEnd();

	glBegin(GL_LINES);//Tower right sunset
	glColor3ub(102, 82, 0);
    glVertex2f(.74,.41);
	glVertex2f(.82,.41);

	glVertex2f(.82, .42);
	glVertex2f(.74, .42);
	glEnd();

	glBegin(GL_POLYGON);//Tower left sunset
	glColor3ub(204, 163, 0);
	glVertex2f(.54,.38);
	glVertex2f(.62,.38);
	glVertex2f(.62, .39);
	glVertex2f(.54, .39);
	glEnd();

	glBegin(GL_LINES);//Tower left sunset
	glColor3ub(102, 82, 0);
    glVertex2f(.54,.38);
	glVertex2f(.62,.38);

	glVertex2f(.62, .39);
	glVertex2f(.54, .39);
	glEnd();

	glBegin(GL_POLYGON);//Tower left sunset
	glColor3ub(204, 163, 0);
	glVertex2f(.54,.41);
	glVertex2f(.62,.41);
	glVertex2f(.62, .42);
	glVertex2f(.54, .42);
	glEnd();

	glBegin(GL_LINES);//Tower left sunset
	glColor3ub(102, 82, 0);
    glVertex2f(.54,.41);
	glVertex2f(.62,.41);

	glVertex2f(.62, .42);
	glVertex2f(.54, .42);
	glEnd();

	glBegin(GL_TRIANGLES);//Tower right shed
	glColor3ub(83, 83, 121);
	glVertex2f(.81, .42);
	glVertex2f(.75, .42);
	glVertex2f(.78,.63);

	glEnd();

	glBegin(GL_TRIANGLES);//Tower right shed shadow
	glColor3ub(93, 93, 137);
	glVertex2f(.79, .44);
	glVertex2f(.77, .44);
	glVertex2f(.78,.60);

	glEnd();

	///LINES
	glBegin(GL_LINES);
	glColor3ub(117, 117, 163);
	glVertex2f(.81, .42);
	glVertex2f(.75, .42);
	glVertex2f(.75, .42);
	glVertex2f(.78,.63);
	glVertex2f(.81, .42);
	glVertex2f(.78,.63);

	glEnd();

	glBegin(GL_TRIANGLES);//Tower left shed
	glColor3ub(83, 83, 121);
	glVertex2f(.61, .42);
	glVertex2f(.55, .42);
    glVertex2f(.58, .63);

	glEnd();

	glBegin(GL_TRIANGLES);//Tower left shed shadow
	glColor3ub(93, 93, 137);
	glVertex2f(.59, .44);
	glVertex2f(.57, .44);
    glVertex2f(.58, .60);

	glEnd();
	///LINES
	glBegin(GL_LINES);
	glColor3ub(117, 117, 163);
	glVertex2f(.61, .42);
	glVertex2f(.55, .42);
	glVertex2f(.55, .42);
    glVertex2f(.58, .63);
    glVertex2f(.61, .42);
    glVertex2f(.58, .63);


	glEnd();



	glLineWidth(4);

	glBegin(GL_LINES);//Tower left cross
	glColor3ub(52, 52, 76);
	glVertex2f(.58, .62);
	glVertex2f(.58, .68);

	glVertex2f(.57, .66);
	glVertex2f(.59, .66);
	glEnd();

	glBegin(GL_LINES);//Tower right cross
	glColor3ub(52, 52, 76);
	glVertex2f(.78,.62);
	glVertex2f(.78, .68);

	glVertex2f(.77, .66);
	glVertex2f(.79, .66);
	glEnd();

	glBegin(GL_POLYGON);//Tower Top sunset
	glColor3ub(62, 62, 91);
	glVertex2f(.7, .67);
	glVertex2f(.64,.67);
	glVertex2f(.64, .69);
	glVertex2f(.7, .69);
	glEnd();

	glBegin(GL_LINES);//Tower top sunset
	glColor3ub(83, 83, 121);
	glVertex2f(.7, .67);
	glVertex2f(.64,.67);

	glVertex2f(.64, .69);
	glVertex2f(.7, .69);
	glEnd();


	glBegin(GL_POLYGON);//Tower Top sunset cross
	glColor3ub(230, 184, 0);
	glVertex2f(.64, .69);
	glVertex2f(.7, .69);
	glVertex2f(.67, .74);
	glEnd();

	glLineWidth(5);


	glBegin(GL_LINES);//Tower top sunset cross
	glColor3ub(230, 184, 0);
	glVertex2f(.67, .73);
	glVertex2f(.67,.80);

	glVertex2f(.66, .78);
	glVertex2f(.68, .78);

	glVertex2f(.64, .69);
	glVertex2f(.64, .71);

	glVertex2f(.7, .69);
	glVertex2f(.7, .71);
	glEnd();



	glBegin(GL_POLYGON);//window set 1
	glColor3ub(0,0, 0);
	glVertex2f(.655,.34);
	glVertex2f(.665,.34);
	glVertex2f(.665, .42);
	glVertex2f(.66, .43);
	glVertex2f(.655, .42);
	glEnd();


	glBegin(GL_POLYGON);//window set 1
	glColor3ub(0,0, 0);
	glVertex2f(.675,.34);
	glVertex2f(.685,.34);
	glVertex2f(.685, .42);
	glVertex2f(.68, .43);
	glVertex2f(.675, .42);
	glEnd();

	glBegin(GL_POLYGON);//window set 1
	glColor3ub(0,0, 0);
	glVertex2f(.695,.34);
	glVertex2f(.705,.34);
	glVertex2f(.705, .42);
	glVertex2f(.7, .43);
	glVertex2f(.695, .42);
	glEnd();

	glBegin(GL_POLYGON);//window set 1 line
	glColor3ub(255, 204, 0);
	glVertex2f(.64,.39);
	glVertex2f(.72,.39);
	glVertex2f(.72, .40);
	glVertex2f(.64, .40);
	glEnd();

	glBegin(GL_POLYGON);//window set 2
	glColor3ub(0,0, 0);
	glVertex2f(.655,.21);
	glVertex2f(.665,.21);
	glVertex2f(.665, .265);
	glVertex2f(.66, .275);
	glVertex2f(.655, .265);
	glEnd();


	glBegin(GL_POLYGON);//window set 2
	glColor3ub(0,0, 0);
	glVertex2f(.675,.21);
	glVertex2f(.685,.21);
	glVertex2f(.685, .265);
	glVertex2f(.68, .275);
	glVertex2f(.675, .265);
	glEnd();

	glBegin(GL_POLYGON);//window set 2
	glColor3ub(0,0, 0);
	glVertex2f(.695,.21);
	glVertex2f(.705,.21);
	glVertex2f(.705, .265);
	glVertex2f(.7, .275);
	glVertex2f(.695, .265);
	glEnd();

	glBegin(GL_POLYGON);//window set 2
	glColor3ub(0,0, 0);
	glVertex2f(.61,.21);
	glVertex2f(.62,.21);
	glVertex2f(.62, .265);
	glVertex2f(.615, .275);
	glVertex2f(.61, .265);
	glEnd();

	glBegin(GL_POLYGON);//window set 2
	glColor3ub(0,0, 0);
	glVertex2f(.73,.21);
	glVertex2f(.74,.21);
	glVertex2f(.74, .265);
	glVertex2f(.735, .275);
	glVertex2f(.73, .265);
	glEnd();

	glBegin(GL_POLYGON);//window set 2 line
	glColor3ub(230, 184, 0);
	glVertex2f(.6,.245);
	glVertex2f(.75,.245);
	glVertex2f(.75, .255);
	glVertex2f(.6, .255);
	glEnd();

	glLineWidth(4);
	glBegin(GL_LINES);//Tower inner dark art
	glColor3ub(255, 204, 0);
	glVertex2f(.6, .20);
	glVertex2f(.75, .20);

	glVertex2f(.6,.18);
	glVertex2f(.75,.18);
	glEnd();

	glBegin(GL_LINES);//Tower inner dark art
	glColor3ub(255, 204, 0);

	glVertex2f(.63,.16);
	glVertex2f(.63,.28);

	glVertex2f(.72,.16);
	glVertex2f(.72,.28);
	glEnd();

	glLineWidth(2);//Circles
	glColor3ub(0, 0, 0);
    triangleLines(.66,.19,.007);

    glColor3ub(0, 0, 0);
    triangleLines(.68,.19,.007);

    glColor3ub(0, 0, 0);
    triangleLines(.70,.19,.007);

    glBegin(GL_POLYGON);//window set 3
	glColor3ub(255, 204, 0);
	glVertex2f(.615,.025);
	glVertex2f(.645,.025);
	glVertex2f(.645, .09);
	glVertex2f(.63, .11);
	glVertex2f(.615, .09);
	glEnd();


	glBegin(GL_POLYGON);//window set 3
	glColor3ub(255, 204, 0);
	glVertex2f(.665,.025);
	glVertex2f(.695,.025);
	glVertex2f(.695, .09);
	glVertex2f(.68, .11);
	glVertex2f(.665, .09);
	glEnd();

	glBegin(GL_POLYGON);//window set 3
	glColor3ub(255, 204, 0);
	glVertex2f(.715,.025);
	glVertex2f(.745,.025);
	glVertex2f(.745, .09);
	glVertex2f(.73, .11);
	glVertex2f(.715, .09);
	glEnd();


	glBegin(GL_POLYGON);//window set 3 black
	glColor3ub(0, 0, 0);
	glVertex2f(.62,.027);
	glVertex2f(.64,.027);
	glVertex2f(.64, .08);
	glVertex2f(.63, .10);
	glVertex2f(.62, .08);
	glEnd();


	glBegin(GL_POLYGON);//window set 3 black
	glColor3ub(0, 0, 0);
	glVertex2f(.67,.027);
	glVertex2f(.69,.027);
	glVertex2f(.69, .08);
	glVertex2f(.68, .10);
	glVertex2f(.67, .08);
	glEnd();

	glBegin(GL_POLYGON);//window set 3 black
	glColor3ub(0, 0, 0);
	glVertex2f(.72,.027);
	glVertex2f(.74,.027);
	glVertex2f(.74, .08);
	glVertex2f(.73, .10);
	glVertex2f(.72, .08);
	glEnd();

	glBegin(GL_POLYGON);//window set 3 line
	glColor3ub(230, 184, 0);
	glVertex2f(.615,.055);
	glVertex2f(.745,.055);
	glVertex2f(.745, .07);
	glVertex2f(.615, .07);
	glEnd();

	glBegin(GL_POLYGON);//window set 4
	glColor3ub(255, 204, 0);
	glVertex2f(.61,-.125);
	glVertex2f(.64,-.125);
	glVertex2f(.64, -.055);
	glVertex2f(.625, -.04);
	glVertex2f(.61, -.055);
	glEnd();


	glBegin(GL_POLYGON);//window set 4
	glColor3ub(255, 204, 0);
	glVertex2f(.65,-.125);
	glVertex2f(.71,-.125);
	glVertex2f(.71,-.055);
	glVertex2f(.68, -.03);
	glVertex2f(.65,- .055);
	glEnd();

	glBegin(GL_POLYGON);//window set 4
	glColor3ub(255, 204, 0);
	glVertex2f(.715,-.125);
	glVertex2f(.745,-.125);
	glVertex2f(.745,-.055);
	glVertex2f(.73,  -.04);
	glVertex2f(.715,-.055);
	glEnd();

	glBegin(GL_POLYGON);//window set 4 black
	glColor3ub(0, 0, 0);
	glVertex2f(.615,-.12);
	glVertex2f(.635,-.12);
	glVertex2f(.635, -.06);
	glVertex2f(.625, -.04);
	glVertex2f(.615, -.06);
	glEnd();

//middle windows
	glBegin(GL_POLYGON);//window set 4 black
	glColor3ub(0, 0, 0);
	glVertex2f(.655,-.12);
	glVertex2f(.675,-.12);
	glVertex2f(.675, -.06);
	glVertex2f(.665, -.04);
	glVertex2f(.655,-.06);
	glEnd();

	glBegin(GL_POLYGON);//window set 4 black
	glColor3ub(0, 0, 0);
	glVertex2f(.685,-.12);
	glVertex2f(.705,-.12);
	glVertex2f(.705, -.06);
	glVertex2f(.695, -.04);
	glVertex2f(.685,-.06);
	glEnd();

	glBegin(GL_POLYGON);//window set 4 black
	glColor3ub(0, 0, 0);
	glVertex2f(.72,-.12);
	glVertex2f(.74,-.12);
	glVertex2f(.74,-.06);
	glVertex2f(.73, -.04);
	glVertex2f(.72, -.06);
	glEnd();

    glBegin(GL_POLYGON);//window set 4 line
	glColor3ub(230, 184, 0);
	glVertex2f(.615,-.09);
	glVertex2f(.745,-.09);
	glVertex2f(.745, -.08);
	glVertex2f(.615, -.08);
	glEnd();

	glBegin(GL_POLYGON);//window set 5 line design
	glColor3ub(255, 204, 0);
	glVertex2f(.6,-.27);
	glVertex2f(.75,-.27);
	glVertex2f(.75, -.26);
	glVertex2f(.6, -.26);
	glEnd();

	glBegin(GL_POLYGON);//window set 5 line design
	glColor3ub(255, 204, 0);
	glVertex2f(.6,-.33);
	glVertex2f(.75,-.33);
	glVertex2f(.75, -.32);
	glVertex2f(.6, -.32);
	glEnd();
//windlow 5
	glBegin(GL_POLYGON);//window set 5 back left
	glColor3ub(255, 204, 0);
	glVertex2f(.615,-.26);
	glVertex2f(.64,-.26);
	glVertex2f(.64, -.19);
	glVertex2f(.615, -.19);
	glEnd();



	glBegin(GL_POLYGON);//window set 5 back r8
	glColor3ub(255, 204, 0);
	glVertex2f(.735,-.26);
	glVertex2f(.71,-.26);
	glVertex2f(.71, -.19);
	glVertex2f(.735, -.19);
	glEnd();

	glBegin(GL_POLYGON);//window set 5 back left black
	glColor3ub(0, 0, 0);
	glVertex2f(.62,-.26);
	glVertex2f(.635,-.26);
	glVertex2f(.635, -.2);
	glVertex2f(.627, -.19);
	glVertex2f(.62, -.2);
	glEnd();



	glBegin(GL_POLYGON);//window set 5 back r8 black
	glColor3ub(0, 0, 0);
	glVertex2f(.73,-.26);
	glVertex2f(.715,-.26);
	glVertex2f(.715, -.2);
    glVertex2f(.72, -.19);
	glVertex2f(.73, -.2);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);//window set 5 line design
	glColor3ub(230, 184, 0);
	glVertex2f(.6,-.22);
	glVertex2f(.75,-.22);

	glEnd();



	glBegin(GL_POLYGON);//window set 5 middle
	glVertex2f(.65,-.26);
	glVertex2f(.7,-.26);
	glVertex2f(.7,-.19);
	glVertex2f(.65,- .19);
	glEnd();

	glBegin(GL_POLYGON);//window set 5 middle  black
	glColor3ub(255, 204, 0);
	glColor3ub(0, 0, 0);
	glVertex2f(.66,-.25);
	glVertex2f(.69,-.25);
	glVertex2f(.69,-.2);
	glVertex2f(.66,- .2);
	glEnd();

	glLineWidth(3);
	glBegin(GL_LINES);//window set 5 middle
	glColor3ub(230, 184, 0);
	glVertex2f(.675,-.26);
	glVertex2f(.675,-.19);

	glVertex2f(.65,-.225);
	glVertex2f(.7,- .225);
	glEnd();

	//window 6

	glBegin(GL_POLYGON);//window set 5 back left
	glColor3ub(255, 204, 0);
	glVertex2f(.615,-.32);
	glVertex2f(.64,-.32);
	glVertex2f(.64, -.28);
	glVertex2f(.615, -.28);
	glEnd();



	glBegin(GL_POLYGON);//window set 5 back r8
	glColor3ub(255, 204, 0);
	glVertex2f(.735,-.32);
	glVertex2f(.71,-.32);
	glVertex2f(.71, -.28);
	glVertex2f(.735, -.28);
	glEnd();

	glBegin(GL_POLYGON);//window set 5 back left black
	glColor3ub(0, 0, 0);
	glVertex2f(.62,-.31);
	glVertex2f(.635,-.31);
	glVertex2f(.635, -.285);
	glVertex2f(.62, -.285);
	glEnd();



	glBegin(GL_POLYGON);//window set 5 back r8 black
	glColor3ub(0, 0, 0);
	glVertex2f(.73,-.31);
	glVertex2f(.715,-.31);
	glVertex2f(.715, -.285);
	glVertex2f(.73, -.285);
	glEnd();

	glBegin(GL_POLYGON);//window set 5 middle
	glColor3ub(255, 204, 0);
	glVertex2f(.655,-.315);
	glVertex2f(.695,-.315);
	glVertex2f(.695,-.28);
	glVertex2f(.655,- .28);
	glEnd();

	glBegin(GL_POLYGON);//window set 5 middle black
	glColor3ub(0, 0, 0);
	glVertex2f(.66,-.31);
	glVertex2f(.69,-.31);
	glVertex2f(.69,-.285);
	glVertex2f(.66,- .285);
	glEnd();

	glBegin(GL_LINES);//window set 5 middle
	glColor3ub(230, 184, 0);
	glVertex2f(.675,-.28);
	glVertex2f(.675,-.315);
	glEnd();

	//windows 6
	glBegin(GL_POLYGON);//window set 5 back left
	glColor3ub(255, 204, 0);
	glVertex2f(.615,-.43);
	glVertex2f(.64,-.43);
	glVertex2f(.64, -.36);
	glVertex2f(.615, -.36);
	glEnd();



	glBegin(GL_POLYGON);//window set 5 back r8
	glColor3ub(255, 204, 0);
	glVertex2f(.735,-.43);
	glVertex2f(.71,-.43);
	glVertex2f(.71, -.36);
	glVertex2f(.735, -.36);
	glEnd();

	glBegin(GL_POLYGON);//window set 5 back left black
	glColor3ub(0, 0, 0);
	glVertex2f(.62,-.43);
	glVertex2f(.635,-.43);
	glVertex2f(.635, -.365);
	glVertex2f(.62, -.365);
	glEnd();



	glBegin(GL_POLYGON);//window set 5 back r8 black
	glColor3ub(0, 0, 0);
	glVertex2f(.73,-.43);
	glVertex2f(.715,-.43);
	glVertex2f(.715, -.365);
	glVertex2f(.73, -.365);
	glEnd();

	glBegin(GL_POLYGON);//window set 6 middle
	glColor3ub(255, 204, 0);
	glVertex2f(.66,-.43);
	glVertex2f(.69,-.43);
	glVertex2f(.69,-.36);
	glVertex2f(.66,- .36);
	glEnd();

	glBegin(GL_POLYGON);//window set 6 middle black
	glColor3ub(0, 0, 0);
	glVertex2f(.665,-.43);
	glVertex2f(.685,-.43);
	glVertex2f(.685,-.365);
	glVertex2f(.665,- .365);
	glEnd();

	glBegin(GL_TRIANGLES);//window set 6 middle top
	glColor3ub(255, 204, 0);
	glVertex2f(.655,- .365);
	glVertex2f(.695,-.365);
	glVertex2f(.675,- .335);
	glEnd();
	glLoadIdentity();

	///-----Left Tower ends-------///

	///Left Bridge FLAG--------------------------------------------------------------------------------
      ///STAND
      glTranslatef(-.35,.5,0);
      glScalef(.3,.3,0);
      glBegin(GL_QUADS);
      glColor3ub(148,148,148);/// 196,184,170

      glVertex2f(.71,.2);
      glVertex2f(.70,-.7);
      glVertex2f(.72,-.7);
      glVertex2f(.715,.22);
      glEnd();


    ///FLAG
      glBegin(GL_POLYGON);
      glColor3ub(39, 214, 202);///188,24,51
      glVertex2f(.71,.2);
      glVertex2f(.64,.2);
      glVertex2f(.57,.14);
      glVertex2f(.67,.18);
      glVertex2f(.59,.12);
      glVertex2f(.71,.15);

      glEnd();
      glLoadIdentity();

///Left Bridge FLAG--------------------------------------------------------------------------------

	///Right Bridge FLAG--------------------------------------------------------------------------------
      ///STAND
      glTranslatef(-.0001,.5,0);
      glScalef(.3,.3,0);
      glBegin(GL_QUADS);
      glColor3ub(148,148,148);/// 196,184,170

      glVertex2f(.71,.2);
      glVertex2f(.70,-.7);
      glVertex2f(.72,-.7);
      glVertex2f(.715,.22);
      glEnd();


    ///FLAG
      glBegin(GL_POLYGON);
      glColor3ub(39, 214, 202);///188,24,51
      glVertex2f(.71,.2);
      glVertex2f(.64,.2);
      glVertex2f(.57,.14);
      glVertex2f(.67,.18);
      glVertex2f(.59,.12);
      glVertex2f(.71,.15);

      glEnd();
      glLoadIdentity();

///Right Bridge FLAG--------------------------------------------------------------------------------

	///UPER BRIDGE BEGINS--------------------------------------------------------------------

  ///RAILING
    glLineWidth(1);
    glBegin(GL_LINES);
	glColor3ub(95,125,139);
    glVertex2f(.55, .37);
	glVertex2f(-.54,.37);

	glVertex2f(.55, .36);
	glVertex2f(-.54,.36);

	glVertex2f(.55, .24);
	glVertex2f(-.54,.24);
    glEnd();

  ///ROAD SIDE 1
    glLineWidth(4);
    glBegin(GL_LINES);
	glColor3ub(136,174,169);
    glVertex2f(.54, .28);
	glVertex2f(-.53,.28);

    glEnd();
    ///BRICKS
    glLineWidth(4);
    glBegin(GL_LINES);
	glColor3ub(87,145,139);
    glVertex2f(-.53, .28);
	glVertex2f(-.48,.28);

	glVertex2f(-.43, .28);
	glVertex2f(-.38,.28);

	glVertex2f(-.28, .28);
	glVertex2f(-.23,.28);

	glVertex2f(-.18, .28);
	glVertex2f(-.13,.28);

	glVertex2f(-.08, .28);
	glVertex2f(-.03,.28);

	glVertex2f(.12, .28);
	glVertex2f(.07,.28);

	glVertex2f(.27, .28);
	glVertex2f(.22,.28);

	glVertex2f(.37, .28);
	glVertex2f(.32,.28);

	glVertex2f(.47, .28);
	glVertex2f(.42,.28);

	glVertex2f(.54, .28);
	glVertex2f(.52,.28);

    glEnd();

      ///LINES
         glLineWidth(1);
         glBegin(GL_LINES);
	     glColor3ub(95,125,139);
         glVertex2f(.54, .275);
	     glVertex2f(-.53,.275);

	     glVertex2f(.54, .289);
	     glVertex2f(-.53,.289);

	     glVertex2f(-.48, .275);
	     glVertex2f(-.48,.289);

	     glVertex2f(-.53, .275);
	     glVertex2f(-.53,.289);

	     glVertex2f(-.38, .275);
	     glVertex2f(-.38,.289);

	     glVertex2f(-.33, .275);
	     glVertex2f(-.33,.289);

	     glVertex2f(-.28, .275);
	     glVertex2f(-.28,.289);

	     glVertex2f(-.23, .275);
	     glVertex2f(-.23,.289);

	     glVertex2f(-.18, .275);
	     glVertex2f(-.18,.289);

         glVertex2f(-.13, .275);
	     glVertex2f(-.13,.289);

	     glVertex2f(-.08, .275);
	     glVertex2f(-.08,.289);

	     glVertex2f(-.03, .275);
	     glVertex2f(-.03,.289);

	     glVertex2f(.02, .275);
	     glVertex2f(.02,.289);

	     glVertex2f(.07, .275);
	     glVertex2f(.07,.289);

	     glVertex2f(.12, .275);
	     glVertex2f(.12,.289);

	     glVertex2f(.17, .275);
	     glVertex2f(.17,.289);

	     glVertex2f(.22, .275);
	     glVertex2f(.22,.289);

	     glVertex2f(.27, .275);
	     glVertex2f(.27,.289);

	     glVertex2f(.32, .275);
	     glVertex2f(.32,.289);

	     glVertex2f(.37, .275);
	     glVertex2f(.37,.289);

         glVertex2f(.42, .275);
	     glVertex2f(.42,.289);

	     glVertex2f(.47, .275);
	     glVertex2f(.47,.289);

	     glVertex2f(.52, .275);
	     glVertex2f(.52,.289);

         glEnd();

    ///ROAD SIDE 2
    glLineWidth(4);
    glBegin(GL_LINES);
	glColor3ub(136,174,169);
    glVertex2f(.5457, .2625);
	glVertex2f(-.538,.2625);

    glEnd();
     ///BRICKS
     glLineWidth(4);
     glBegin(GL_LINES);
	 glColor3ub(87,145,139);
	 glVertex2f(-.538,.2625);
	 glVertex2f(-.50,.2625);

	 glVertex2f(-.50,.2625);
	 glVertex2f(-.45,.2625);

     glVertex2f(-.40,.2625);
	 glVertex2f(-.35,.2625);

	 glVertex2f(-.30,.2625);
	 glVertex2f(-.25,.2625);

	 glVertex2f(-.1,.2625);
	 glVertex2f(-.05,.2625);

	 glVertex2f(.1,.2625);
	 glVertex2f(.05,.2625);

	 glVertex2f(.2,.2625);
	 glVertex2f(.15,.2625);

	 glVertex2f(.3,.2625);
	 glVertex2f(.25,.2625);

	 glVertex2f(.4,.2625);
	 glVertex2f(.3,.2625);

	 glVertex2f(.5,.2625);
	 glVertex2f(.45,.2625);

     glVertex2f(.53,.2625);
	 glVertex2f(.55,.2625);
	 glEnd();

	 ///LINES
         glLineWidth(1);
         glBegin(GL_LINES);
	     glColor3ub(95,125,139);
         glVertex2f(.55, .254);
         glVertex2f(-.538,.254);

         glVertex2f(.55, .267);
         glVertex2f(-.538,.267);


         glVertex2f(-.54,.254);
         glVertex2f(-.54, .267);

         glVertex2f(-.5,.254);
         glVertex2f(-.5, .267);

         glVertex2f(-.45,.254);
         glVertex2f(-.45, .267);

         glVertex2f(-.4,.254);
         glVertex2f(-.4, .267);

         glVertex2f(-.35,.254);
         glVertex2f(-.35, .267);

         glVertex2f(-.3,.254);
         glVertex2f(-.3, .267);

         glVertex2f(-.25,.254);
         glVertex2f(-.25, .267);

         glVertex2f(-.2,.254);
         glVertex2f(-.2, .267);

         glVertex2f(-.15,.254);
         glVertex2f(-.15, .267);

         glVertex2f(-.1,.254);
         glVertex2f(-.1, .267);

         glVertex2f(-.05,.254);
         glVertex2f(-.05, .267);

         glVertex2f(.0,.254);
         glVertex2f(.0, .267);

         glVertex2f(.05,.254);
         glVertex2f(.05, .267);

         glVertex2f(.1,.254);
         glVertex2f(.1, .267);

         glVertex2f(.15,.254);
         glVertex2f(.15, .267);

         glVertex2f(.2,.254);
         glVertex2f(.2, .267);

         glVertex2f(.25,.254);
         glVertex2f(.25, .267);

         glVertex2f(.3,.254);
         glVertex2f(.3, .267);

         glVertex2f(.35,.254);
         glVertex2f(.35, .267);

         glVertex2f(.4,.254);
         glVertex2f(.4, .267);

         glVertex2f(.45,.254);
         glVertex2f(.45, .267);

         glVertex2f(.50,.254);
         glVertex2f(.50, .267);

         glVertex2f(.53,.254);
         glVertex2f(.53, .267);

         glVertex2f(.55,.254);
         glVertex2f(.55, .267);


         glEnd();

///CROSS BARRICADE
         ///BACKSLASHES
         glLineWidth(3);
         glBegin(GL_LINES);
	     glColor3ub(95,125,139);
         glVertex2f(-.54, .36);
         glVertex2f(-.44, .288);

         glVertex2f(-.44, .36);
         glVertex2f(-.34, .288);

         glVertex2f(-.34, .36);
         glVertex2f(-.24, .288);

         glVertex2f(-.24, .36);
         glVertex2f(-.14, .288);

         glVertex2f(-.14, .36);
         glVertex2f(-.04, .288);

         glVertex2f(-.04, .36);
         glVertex2f(.04, .288);

         glVertex2f(.04, .36);
         glVertex2f(.14, .288);

         glVertex2f(.14, .36);
         glVertex2f(.24, .288);

         glVertex2f(.24, .36);
         glVertex2f(.34, .288);

         glVertex2f(.34, .36);
         glVertex2f(.44, .288);

         glVertex2f(.44, .36);
         glVertex2f(.54, .288);

         ///SLASHES
        glVertex2f(-.44, .36);
        glVertex2f(-.54, .288);

        glVertex2f(-.34, .36);
        glVertex2f(-.44, .288);

        glVertex2f(-.24, .36);
        glVertex2f(-.34, .288);

        glVertex2f(-.14, .36);
        glVertex2f(-.24, .288);

        glVertex2f(-.04, .36);
        glVertex2f(-.14, .288);

        glVertex2f(.04, .36);
        glVertex2f(-.04, .288);

        glVertex2f(.14, .36);
        glVertex2f(.04, .288);

        glVertex2f(.24, .36);
        glVertex2f(.14, .288);

        glVertex2f(.34, .36);
        glVertex2f(.24, .288);

        glVertex2f(.44, .36);
        glVertex2f(.34, .288);

        glVertex2f(.54, .36);
        glVertex2f(.44, .288);



         glEnd();

  ///

///Crown starts---------

glTranslatef(-.64,-.33,0);

     glBegin(GL_POLYGON);//Tower top sunset
	glColor3ub(83, 83, 121);
	glVertex2f(.71, .59);
	glVertex2f(.63,.59);
	glVertex2f(.63, .72);
	glVertex2f(.71, .72);
	glEnd();

	glBegin(GL_POLYGON);//Tower Top sunset
	glColor3ub(207, 207, 41);
	glVertex2f(.7, .60);
	glVertex2f(.64,.60);
	glVertex2f(.64, .69);
	glVertex2f(.7, .69);
	glEnd();

	glBegin(GL_LINES);//Tower top sunset
	glColor3ub(83, 83, 121);
	glVertex2f(.7, .67);
	glVertex2f(.64,.67);

	glVertex2f(.64, .69);
	glVertex2f(.7, .69);
	glEnd();


	glBegin(GL_POLYGON);//Tower Top sunset cross
	glColor3ub(230, 184, 0);
	glVertex2f(.64, .69);
	glVertex2f(.7, .69);
	glVertex2f(.67, .74);
	glEnd();

	glLineWidth(5);


	glBegin(GL_LINES);//Tower top sunset cross
	glColor3ub(230, 184, 0);
	glVertex2f(.67, .73);
	glVertex2f(.67,.78);

	glVertex2f(.66, .75);
	glVertex2f(.68, .75);

	glVertex2f(.64, .69);
	glVertex2f(.64, .71);

	glVertex2f(.7, .69);
	glVertex2f(.7, .71);

	glVertex2f(.71, .59);
	glVertex2f(.63, .72);

	glVertex2f(.63,.59);
	glVertex2f(.71, .72);


	glEnd();

	glBegin(GL_POLYGON);//Tower top sunset
	glColor3ub(94, 94, 87);
	glVertex2f(.71, .59);
	glVertex2f(.63, .68);

	glVertex2f(.63,.59);
	glVertex2f(.71, .68);
	glEnd();

	glLoadIdentity();

///Crown ends---------

///UPPER BRIDGE ENDS--------------------------------------------------------------------------




///LOWER BRIDGE BEGINS--------------------------------------------------------------------------
     ///RIGHT HALF
          ///RIGHT HALF OF UPPER RAILING
            //glPushMatrix();
            //glRotatef(-30.0, 0.0, 0.0, 1.0);
           // glTranslatef(0.15,.3,0);
            glLineWidth(2);
           glBegin(GL_POLYGON);///bridge pitch road
            glColor3ub(88, 88, 141);
            glVertex2f(.48, -.47);
            glVertex2f(0.0, -.47);
            glVertex2f(0.0,-.49);
            glVertex2f(.48, -.49);

            glEnd();


            glBegin(GL_LINES);
            glColor3ub(95,125,139);
            glVertex2f(.48, -.4325);
            glVertex2f(0.0,-.4325);

            glVertex2f(.48, -.47);
            glVertex2f(0.0,-.47);

            glVertex2f(0.0, -.47);
            glVertex2f(0.0,-.47);

            glVertex2f(.48, -.49);
            glVertex2f(0.0,-.49);

            ///VERTICAL RAILINGS


            glVertex2f(.07, -.4325);
            glVertex2f(.07,-.47);

            glVertex2f(.17, -.4325);
            glVertex2f(.17,-.47);

            glVertex2f(.27, -.4325);
            glVertex2f(.27,-.47);

            glVertex2f(.37, -.4325);
            glVertex2f(.37,-.47);

            glVertex2f(.47, -.4325);
            glVertex2f(.47,-.47);

            glVertex2f(.48, -.4325);
            glVertex2f(.48,-.585);

            glVertex2f(.0, -.4325);
            glVertex2f(.0,-.52);


            glEnd();
                 ///RIGHT HALF OF BASE
                 glLineWidth(4);
                 glBegin(GL_LINES);
                 glColor3ub(106,138,153);

                 glVertex2f(.0,-.52);
                 glVertex2f(.17,-.52);

                 glVertex2f(.17,-.52);
                 glVertex2f(.3,-.53);


                 glVertex2f(.17,-.52);
                 glVertex2f(.3,-.53);

                 glVertex2f(.3,-.53);
                 glVertex2f(.48,-.583);

                 ///ZIGZAGGED RAILINGS
                 glVertex2f(.48, -.50);
                 glVertex2f(.39,-.549);

                 glVertex2f(.39,-.549);
                 glVertex2f(.38, -.49);

                 glVertex2f(.38, -.49);
                 glVertex2f(.33, -.542);

                 glVertex2f(.33, -.542);
                 glVertex2f(.32, -.49);

                 glVertex2f(.32, -.49);
                 glVertex2f(.25, -.528);

                 glVertex2f(.25, -.528);
                 glVertex2f(.23, -.49);

                 glVertex2f(.23, -.49);
                 glVertex2f(.15, -.52);

                 glVertex2f(.15, -.52);
                 glVertex2f(.1, -.49);

                 glEnd();
                 //glLoadIdentity();
                 //glPopMatrix();
   ///LEFT HALF
        ///LEFT HALF OF UPPER RAILING
            //glPushMatrix();
            //glRotatef(30.0, 0.0, 0.0, 1.0); ///0.15,.3
            //glTranslatef(-0.15,.3,0);
            glLineWidth(2);

            glBegin(GL_POLYGON);///bridge pitch road
            glColor3ub(88, 88, 141);
            glVertex2f(0.0, -.47);
            glVertex2f(-.47, -.47);
            glVertex2f(-.47, -.49);
            glVertex2f(0.0,-.49);
            glEnd();


            glBegin(GL_LINES);
            glColor3ub(95,125,139);
            glVertex2f(0.0, -.4325);
            glVertex2f(-.47,-.4325);

            glVertex2f(0.0, -.47);
            glVertex2f(-.47,-.47);

            //glVertex2f(0.0, -.47);
           // glVertex2f(0.0,-.47);

            glVertex2f(.0, -.49);
            glVertex2f(-.47,-.49);

            ///VERTICAL RAILING
            glVertex2f(-.47, -.4325);
            glVertex2f(-.47,-.585);

            glVertex2f(-.37, -.4325);
            glVertex2f(-.37,-.47);

            glVertex2f(-.27, -.4325);
            glVertex2f(-.27,-.47);

            glVertex2f(-.17, -.4325);
            glVertex2f(-.17,-.47);

            glVertex2f(-.07, -.4325);
            glVertex2f(-.07,-.47);

            glVertex2f(-.0, -.4325);
            glVertex2f(-.0,-.52);

            glEnd();



                 ///BASE

                 ///LEFT HALF OF BASE
                 glLineWidth(4);
                 glBegin(GL_LINES);
                 glColor3ub(106,138,153);
                 glVertex2f(-.47,-.583);
                 glVertex2f(-.3,-.53);

                 glVertex2f(-.3,-.53);
                 glVertex2f(-.17,-.52);

                 glVertex2f(-.17,-.52);
                 glVertex2f(.0,-.52);

                 ///ZIGZAGGED RAILINGS
                 glVertex2f(-.47, -.50);
                 glVertex2f(-.39,-.549);

                 glVertex2f(-.39,-.549);
                 glVertex2f(-.38, -.49);

                 glVertex2f(-.38, -.49);
                 glVertex2f(-.33, -.542);

                 glVertex2f(-.33, -.542);
                 glVertex2f(-.32, -.49);

                 glVertex2f(-.32, -.49);
                 glVertex2f(-.25, -.528);

                 glVertex2f(-.25, -.528);
                 glVertex2f(-.23, -.49);

                 glVertex2f(-.23, -.49);
                 glVertex2f(-.15, -.52);

                 glVertex2f(-.15, -.52);
                 glVertex2f(-.1, -.49);

                 glEnd();
                 //glLoadIdentity();
                 //glPopMatrix();








///LOWER BRIDGE ENDS--------------------------------------------------------------------------



///Side LOWER BRIDGE BEGINS--------------------------------------------------------------------------
     ///Left HALF
          ///Left HALF OF UPPER RAILING

           glTranslatef(-1.35,0,0);
            glLineWidth(2);
           glBegin(GL_POLYGON);///bridge pitch road
            glColor3ub(88, 88, 141);
            glVertex2f(.48, -.47);
            glVertex2f(0.0, -.47);
            glVertex2f(0.0,-.49);
            glVertex2f(.48, -.49);

            glEnd();


            glBegin(GL_LINES);
            glColor3ub(95,125,139);
            glVertex2f(.48, -.4325);
            glVertex2f(0.0,-.4325);

            glVertex2f(.48, -.47);
            glVertex2f(0.0,-.47);

            glVertex2f(0.0, -.47);
            glVertex2f(0.0,-.47);

            glVertex2f(.48, -.49);
            glVertex2f(0.0,-.49);

            ///VERTICAL RAILINGS


            glVertex2f(.07, -.4325);
            glVertex2f(.07,-.47);

            glVertex2f(.17, -.4325);
            glVertex2f(.17,-.47);

            glVertex2f(.27, -.4325);
            glVertex2f(.27,-.47);

            glVertex2f(.37, -.4325);
            glVertex2f(.37,-.47);

            glVertex2f(.47, -.4325);
            glVertex2f(.47,-.47);

            glVertex2f(.48, -.4325);
            glVertex2f(.48,-.585);

            glVertex2f(.0, -.4325);
            glVertex2f(.0,-.52);


            glEnd();
                 ///Left HALF OF BASE
                 glLineWidth(4);
                 glBegin(GL_LINES);
                 glColor3ub(106,138,153);

                 glVertex2f(.0,-.52);
                 glVertex2f(.17,-.52);

                 glVertex2f(.17,-.52);
                 glVertex2f(.3,-.53);


                 glVertex2f(.17,-.52);
                 glVertex2f(.3,-.53);

                 glVertex2f(.3,-.53);
                 glVertex2f(.48,-.583);

                 ///ZIGZAGGED RAILINGS
                 glVertex2f(.48, -.50);
                 glVertex2f(.39,-.549);

                 glVertex2f(.39,-.549);
                 glVertex2f(.38, -.49);

                 glVertex2f(.38, -.49);
                 glVertex2f(.33, -.542);

                 glVertex2f(.33, -.542);
                 glVertex2f(.32, -.49);

                 glVertex2f(.32, -.49);
                 glVertex2f(.25, -.528);

                 glVertex2f(.25, -.528);
                 glVertex2f(.23, -.49);

                 glVertex2f(.23, -.49);
                 glVertex2f(.15, -.52);

                 glVertex2f(.15, -.52);
                 glVertex2f(.1, -.49);

                 glEnd();
                 glLoadIdentity();

   ///Right HALF
        ///Right HALF OF UPPER RAILING

            glTranslatef(1.35,0,0);
            glLineWidth(2);

            glBegin(GL_POLYGON);///bridge pitch road
            glColor3ub(88, 88, 141);
            glVertex2f(0.0, -.47);
            glVertex2f(-.47, -.47);
            glVertex2f(-.47, -.49);
            glVertex2f(0.0,-.49);
            glEnd();


            glBegin(GL_LINES);
            glColor3ub(95,125,139);
            glVertex2f(0.0, -.4325);
            glVertex2f(-.47,-.4325);

            glVertex2f(0.0, -.47);
            glVertex2f(-.47,-.47);

            //glVertex2f(0.0, -.47);
           // glVertex2f(0.0,-.47);

            glVertex2f(.0, -.49);
            glVertex2f(-.47,-.49);

            ///VERTICAL RAILING
            glVertex2f(-.47, -.4325);
            glVertex2f(-.47,-.585);

            glVertex2f(-.37, -.4325);
            glVertex2f(-.37,-.47);

            glVertex2f(-.27, -.4325);
            glVertex2f(-.27,-.47);

            glVertex2f(-.17, -.4325);
            glVertex2f(-.17,-.47);

            glVertex2f(-.07, -.4325);
            glVertex2f(-.07,-.47);

            glVertex2f(-.0, -.4325);
            glVertex2f(-.0,-.52);

            glEnd();



                 ///BASE

                 ///Right HALF OF BASE
                 glLineWidth(4);
                 glBegin(GL_LINES);
                 glColor3ub(106,138,153);
                 glVertex2f(-.47,-.583);
                 glVertex2f(-.3,-.53);

                 glVertex2f(-.3,-.53);
                 glVertex2f(-.17,-.52);

                 glVertex2f(-.17,-.52);
                 glVertex2f(.0,-.52);

                 ///ZIGZAGGED RAILINGS
                 glVertex2f(-.47, -.50);
                 glVertex2f(-.39,-.549);

                 glVertex2f(-.39,-.549);
                 glVertex2f(-.38, -.49);

                 glVertex2f(-.38, -.49);
                 glVertex2f(-.33, -.542);

                 glVertex2f(-.33, -.542);
                 glVertex2f(-.32, -.49);

                 glVertex2f(-.32, -.49);
                 glVertex2f(-.25, -.528);

                 glVertex2f(-.25, -.528);
                 glVertex2f(-.23, -.49);

                 glVertex2f(-.23, -.49);
                 glVertex2f(-.15, -.52);

                 glVertex2f(-.15, -.52);
                 glVertex2f(-.1, -.49);

                 glEnd();
                glLoadIdentity();









///side LOWER BRIDGE ENDS--------------------------------------------------------------------------





///Right BOAT BEGINS------------------------------------------------------------------------
    glPushMatrix();
    glTranslatef(position3,0,0);
    glTranslatef(-.05,-.06,0);

    ///BASE

    glBegin(GL_POLYGON);
    glColor3ub(60,81,96); ///27,24,33
    glVertex2f(-.3,-.72);
    glVertex2f(-.3,-.75);
    glVertex2f(-.92,-.94);
    glVertex2f(-.93,-.83);

    glEnd();
    ///RED BASE
     glBegin(GL_POLYGON);
    glColor3ub(60,81,96);///74,0,1
    glVertex2f(-.3,-.73);
    glVertex2f(-.3,-.75);
    glVertex2f(-.92,-.94);
    glVertex2f(-.924,-.90);

    glEnd();
      ///LINES

      glBegin(GL_LINES);
      glColor3ub(116,116,116);///1,1,1
      glVertex2f(-.3,-.73);
      glVertex2f(-.3,-.75);
      glVertex2f(-.3,-.75);
      glVertex2f(-.92,-.94);
      glVertex2f(-.92,-.94);
      glVertex2f(-.924,-.90);
      glVertex2f(-.3,-.73);
      glVertex2f(-.924,-.90);
      glEnd();

     ///BLUE BASE
     glBegin(GL_POLYGON);
     glColor3ub(60,81,96);///38,54,70
     glVertex2f(-.3,-.728);
     glVertex2f(-.3,-.73);
     glVertex2f(-.925,-.90);
     glVertex2f(-.928,-.87);

     glEnd();
    ///LINES
      glBegin(GL_LINES);
      glColor3ub(116,116,116);///1,1,1
      glVertex2f(-.3,-.728);
      glVertex2f(-.3,-.73);
      glVertex2f(-.3,-.73);
      glVertex2f(-.925,-.90);
      glVertex2f(-.925,-.90);
      glVertex2f(-.928,-.87);
      glVertex2f(-.3,-.728);
      glVertex2f(-.928,-.87);

      glEnd();


    ///BASE CURVE

    glBegin(GL_POLYGON);
    glColor3ub(60,81,96); ///27,24,33
    glVertex2f(-.25,-.68);
    glVertex2f(-.3,-.72);
    glVertex2f(-.93,-.83);
    glVertex2f(-.935,-.78);

    glEnd();
    ///BACK WOOD PANEL

        glBegin(GL_POLYGON);
    glColor3ub(160,142,129);
    glVertex2f(-.25,-.615);
    glVertex2f(-.25,-.65);
    glVertex2f(-.37,-.68);
    glVertex2f(-.43,-.62);

    glEnd();
    ///LINES
       glLineWidth(1);
       glBegin(GL_LINES);
       glColor3ub(1,1,1);
       glVertex2f(-.25,-.615);
       glVertex2f(-.43,-.62);
       glEnd();

///BIG FLAG--------------------------------------------------------------------------------
      ///STAND
      //glTranslatef(.05,-.06,0);
      glBegin(GL_QUADS);
      glColor3ub(148,148,148);/// 196,184,170

      glVertex2f(-.71,.2);
      glVertex2f(-.70,-.7);
      glVertex2f(-.72,-.7);
      glVertex2f(-.715,.22);
      glEnd();


    ///FLAG
      glBegin(GL_POLYGON);
      glColor3ub(129,9,19);///188,24,51
      glVertex2f(-.71,.2);
      glVertex2f(-.64,.2);
      glVertex2f(-.57,.14);
      glVertex2f(-.67,.18);
      glVertex2f(-.59,.12);
      glVertex2f(-.71,.15);

      glEnd();

    ///SMALL FLAG

      glTranslatef(0.1,-0.25,0);
      glScaled(.6,.6,0);
      ///STAND
      glBegin(GL_QUADS);
      glColor3ub(148,148,148); /// 196,184,170

      glVertex2f(-.71,.2);
      glVertex2f(-.70,-.7);
      glVertex2f(-.72,-.7);
      glVertex2f(-.715,.22);
      glEnd();


    ///FLAG
      glBegin(GL_POLYGON);
      glColor3ub(129,9,19);///188,24,51
      glVertex2f(-.71,.2);
      glVertex2f(-.64,.2);
      glVertex2f(-.57,.14);
      glVertex2f(-.67,.18);
      glVertex2f(-.59,.12);
      glVertex2f(-.71,.15);

      glEnd();
    glLoadIdentity();

///ROPES ATTACHED TO THE FLAGS
        glPushMatrix();
        glTranslatef(position3,0,0);
        glTranslatef(-.05,-.06,0);
        glLineWidth(1);
        glBegin(GL_LINES);
        glColor3ub(148,148,148);///221,218,209
        glVertex2f(-.71,-.1);
        glVertex2f(-.33,-.2);

        glVertex2f(-.71,-.12);
        glVertex2f(-.33,-.21);

        glVertex2f(-.71,-.1);
        glVertex2f(-.945,-.68);

        glVertex2f(-.71,-.13);
        glVertex2f(-.945,-.68);

        glVertex2f(-.33,-.21);
        glVertex2f(-.29,-.58);

        glVertex2f(-.33,-.2);
        glVertex2f(-.25,-.6);

        glEnd();


    ///SMALL PIPES ALONG SIDE BIG PIPE
       ///PIPE 1
       glBegin(GL_QUADS);
       glColor3ub(116,116,116);/// 196,184,170
       glVertex2f(-.36,-.545);
       glVertex2f(-.36,-.66);
       glVertex2f(-.39,-.66);
       glVertex2f(-.39,-.545);
        //
       glVertex2f(-.48,-.545);
       glVertex2f(-.48,-.66);
       glVertex2f(-.51,-.66);
       glVertex2f(-.51,-.545);

       glEnd();
       ///LINES
        glLineWidth(1);
        glBegin(GL_LINES);
        glColor3ub(1,1,1);
        glVertex2f(-.36,-.545);
        glVertex2f(-.36,-.66);
        glVertex2f(-.36,-.66);
        glVertex2f(-.39,-.66);
        glVertex2f(-.39,-.66);
        glVertex2f(-.39,-.545);
        glVertex2f(-.36,-.545);
        glVertex2f(-.39,-.545);

        //

        glVertex2f(-.48,-.545);
        glVertex2f(-.48,-.66);
        glVertex2f(-.48,-.66);
        glVertex2f(-.51,-.66);
        glVertex2f(-.51,-.66);
        glVertex2f(-.51,-.545);
        glVertex2f(-.48,-.545);
        glVertex2f(-.51,-.545);

        glEnd();
        ///CIRCLED RED PART
        glColor3ub(116,116,116);   /// 196,184,170
        triangleFan(-.38,-.545,.02);
        triangleFan(-.5,-.545,.02);

        glColor3ub(129,9,19);///188,24,51
        triangleFan(-.388,-.545,.015);
        triangleFan(-.51,-.545,.015);



    ///BOAT ROOM
      ///2ND FLOOR
      glBegin(GL_QUADS);
      glColor3ub(148,148,148);///221,218,209
      glVertex2f(-.525,-.52);
      glVertex2f(-.525,-.72);
      glVertex2f(-.57,-.72);
      glVertex2f(-.57,-.515);

      glVertex2f(-.57,-.515);
      glVertex2f(-.57,-.72);
      glVertex2f(-.65,-.70);
      glVertex2f(-.65,-.52);
      glEnd();


      ///LINES
        glLineWidth(1);
        glBegin(GL_LINES);
        glColor3ub(1,1,1);
        glVertex2f(-.525,-.52);
        glVertex2f(-.525,-.72);
        glVertex2f(-.525,-.72);
        glVertex2f(-.57,-.72);
        glVertex2f(-.57,-.72);
        glVertex2f(-.57,-.515);
        glVertex2f(-.525,-.52);
        glVertex2f(-.57,-.515);

        glVertex2f(-.57,-.515);
        glVertex2f(-.57,-.72);
        glVertex2f(-.57,-.72);
        glVertex2f(-.65,-.70);
        glVertex2f(-.65,-.70);
        glVertex2f(-.65,-.52);
        glVertex2f(-.57,-.515);
        glVertex2f(-.65,-.52);

        glEnd();
      ///LOOKING LIGHTS
      glColor3ub(237,142,78);
      triangleFan(-.59,-.535,.01);
      triangleFan(-.625,-.535,.01);
      ///ROOF

        glBegin(GL_QUADS);
        glColor3ub(148,148,148);///221,218,209
        glVertex2f(-.525,-.455);
        glVertex2f(-.525,-.465);
        glVertex2f(-.57,-.46);
        glVertex2f(-.57,-.45);

        glVertex2f(-.57,-.45);
        glVertex2f(-.57,-.46);
        glVertex2f(-.65,-.465);
        glVertex2f(-.65,-.455);


        glEnd();
        ///LINES
        glLineWidth(1);
        glBegin(GL_LINES);
        glColor3ub(1,1,1);
        glVertex2f(-.525,-.455);
        glVertex2f(-.525,-.465);
        glVertex2f(-.525,-.465);
        glVertex2f(-.57,-.46);
        glVertex2f(-.57,-.46);
        glVertex2f(-.57,-.45);
        glVertex2f(-.525,-.455);
        glVertex2f(-.57,-.45);
        //
        glVertex2f(-.57,-.45);
        glVertex2f(-.57,-.46);
        glVertex2f(-.57,-.46);
        glVertex2f(-.65,-.465);
        glVertex2f(-.65,-.465);
        glVertex2f(-.65,-.455);
        glVertex2f(-.57,-.45);
        glVertex2f(-.65,-.455);

        glEnd();

        ///ROOF SHADE
        glBegin(GL_QUADS);
        glColor3ub(166,113,69);
        glVertex2f(-.57,-.46);
        glVertex2f(-.525,-.465);
        glVertex2f(-.58,-.484);
        glVertex2f(-.65,-.465);

        glEnd();
        ///LINES
        glLineWidth(1);
        glBegin(GL_LINES);
        glColor3ub(1,1,1);
        glVertex2f(-.57,-.46);
        glVertex2f(-.525,-.465);
        glVertex2f(-.525,-.465);
        glVertex2f(-.58,-.484);
        glVertex2f(-.58,-.484);
        glVertex2f(-.65,-.465);
        glVertex2f(-.57,-.46);
        glVertex2f(-.65,-.465);

        glEnd();
        ///ROOF RODS
        glLineWidth(1);
        glBegin(GL_LINES);
        glColor3ub(148,148,148);///221,218,209
        glVertex2f(-.57,-.46);
        glVertex2f(-.57,-.515);

        glVertex2f(-.525,-.52);
        glVertex2f(-.525,-.465);

        glVertex2f(-.65,-.465);
        glVertex2f(-.65,-.52);

        glVertex2f(-.58,-.484);
        glVertex2f(-.58,-.515);

        glVertex2f(-.6,-.46);
        glVertex2f(-.6,-.515);

        glVertex2f(-.62,-.46);
        glVertex2f(-.62,-.515);

        glVertex2f(-.545,-.517);
        glVertex2f(-.545,-.465);



        glEnd();



      ///ROOM WITH SHADE
      glBegin(GL_QUADS);
      glColor3ub(116,116,116);  /// 196,184,170
      glVertex2f(-.53,-.58);
      glVertex2f(-.53,-.70);
      glVertex2f(-.66,-.70);
      glVertex2f(-.66,-.58);
      glEnd();
      ///SHADE
      glBegin(GL_QUADS);
      glColor3ub(102,102,102);  ///179,170,151
      glVertex2f(-.56,-.56);
      glVertex2f(-.53,-.58);
      glVertex2f(-.66,-.58);
      glVertex2f(-.69,-.56);

      glEnd();
       ///LINES
        glLineWidth(1);
        glBegin(GL_LINES);
        glColor3ub(1,1,1);
        glVertex2f(-.53,-.58);
        glVertex2f(-.53,-.70);
        glVertex2f(-.53,-.70);
        glVertex2f(-.66,-.70);
        glVertex2f(-.66,-.70);
        glVertex2f(-.66,-.58);
        glVertex2f(-.53,-.58);
        glVertex2f(-.66,-.58);
        //
        glVertex2f(-.56,-.56);
        glVertex2f(-.53,-.58);
        glVertex2f(-.53,-.58);
        glVertex2f(-.66,-.58);
        glVertex2f(-.66,-.58);
        glVertex2f(-.69,-.56);
        glVertex2f(-.56,-.56);
        glVertex2f(-.69,-.56);

        glEnd();
        ///
        glLineWidth(1);
        glBegin(GL_LINES);
        glColor3ub(148,148,148);///221,218,209
        glVertex2f(-.69,-.56);
        glVertex2f(-.69,-.70);

        glVertex2f(-.56,-.56);
        glVertex2f(-.56,-.7);


        glEnd();
      ///WINDOWS
      glColor3ub(237,142,78);
      triangleFan(-.545,-.615,.01);

      glLineWidth(2);
      glBegin(GL_LINES);
      glColor3ub(237,142,78);
      glVertex2f(-.57,-.6);
      glVertex2f(-.57,-.63);

      glVertex2f(-.59,-.6);
      glVertex2f(-.59,-.63);

      glVertex2f(-.625,-.6);
      glVertex2f(-.625,-.63);

      glVertex2f(-.643,-.6);
      glVertex2f(-.643,-.63);
      glEnd();
      //
       glLineWidth(3);
      glBegin(GL_LINES);
      glColor3ub(237,142,78);
      glVertex2f(-.61,-.6);
      glVertex2f(-.61,-.63);
      glEnd();



     ///DECK BASE
    glBegin(GL_QUADS);
    glColor3ub(116,116,116); /// 196,184,170

    glVertex2f(-.43,-.62);
    glVertex2f(-.3,-.685);
    glVertex2f(-.66,-.70);
    glVertex2f(-.66,-.64);
    glEnd();
     ///LINES
        glLineWidth(1);
        glBegin(GL_LINES);
        glColor3ub(1,1,1);
        glVertex2f(-.43,-.62);
        glVertex2f(-.3,-.685);

        glEnd();





      ///BIG MIDDLE PIPE
       glBegin(GL_POLYGON);
       glColor3ub(148,148,148);///221,218,209

       glVertex2f(-.43,-.44);
       glVertex2f(-.43,-.62);
       glVertex2f(-.46,-.62);
       glVertex2f(-.46,-.44);

       glEnd();
       ///LINES
       glLineWidth(1);
       glBegin(GL_LINES);
       glColor3ub(1,1,1);
       glVertex2f(-.43,-.44);
       glVertex2f(-.43,-.62);
       glVertex2f(-.43,-.62);
       glVertex2f(-.46,-.62);
       glVertex2f(-.46,-.62);
       glVertex2f(-.46,-.44);
       glVertex2f(-.43,-.44);
       glVertex2f(-.46,-.44);

       glEnd();
       //
       glBegin(GL_POLYGON);
       glColor3ub(84,93,110);

       glVertex2f(-.43,-.48);
       glVertex2f(-.43,-.55);
       glVertex2f(-.46,-.55);
       glVertex2f(-.46,-.48);

       glEnd();
       ///LINES
        glLineWidth(1);
        glBegin(GL_LINES);
        glColor3ub(1,1,1);
        glVertex2f(-.43,-.55);
        glVertex2f(-.46,-.55);
        glVertex2f(-.43,-.48);
        glVertex2f(-.46,-.48);
        glEnd();
      ///JUICED UP PIPE PART
       glBegin(GL_QUADS);
       glColor3ub(88,100,116);
       glVertex2f(-.425,-.50);
       glVertex2f(-.425,-.52);
       glVertex2f(-.465,-.52);
       glVertex2f(-.465,-.50);

       glVertex2f(-.425,-.48);
       glVertex2f(-.425,-.465);
       glVertex2f(-.465,-.465);
       glVertex2f(-.465,-.48);

       glEnd();
       ///LINES
        glLineWidth(1);
        glBegin(GL_LINES);
        glColor3ub(1,1,1);
        glVertex2f(-.425,-.50);
        glVertex2f(-.425,-.52);
        //glVertex2f(-.425,-.52);
        //glVertex2f(-.465,-.52);
        glVertex2f(-.465,-.52);
        glVertex2f(-.465,-.50);
       // glVertex2f(-.425,-.50);
       // glVertex2f(-.465,-.50);

        ///
        glVertex2f(-.425,-.48);
        glVertex2f(-.425,-.465);
        //glVertex2f(-.425,-.465);
        //glVertex2f(-.465,-.465);
        glVertex2f(-.465,-.465);
        glVertex2f(-.465,-.48);
       //glVertex2f(-.425,-.48);
       // glVertex2f(-.465,-.48);

        glEnd();






///DOOR SIDE WOODS

    glBegin(GL_POLYGON);
    glColor3ub(60,81,96);///27,24,33
    glVertex2f(-.25,-.65);
    glVertex2f(-.25,-.68);
    glVertex2f(-.935,-.78);
    glVertex2f(-.94,-.72);
    glEnd();





///RAILING SIDE WOODS

    glBegin(GL_POLYGON);
    glColor3ub(60,81,96); ///27,24,33
    glVertex2f(-.25,-.62);
    glVertex2f(-.25,-.65);
    glVertex2f(-.3,-.66);
    glVertex2f(-.3,-.63);
    glEnd();
     //
    glBegin(GL_POLYGON);
    glColor3ub(60,81,96); ///27,24,33

    glVertex2f(-.65,-.65);
    glVertex2f(-.63,-.69);
    glVertex2f(-.94,-.72);
    glVertex2f(-.945,-.67);
    glEnd();



    ///UPPER WHITE RAILINGS
    glBegin(GL_QUADS);
    glColor3ub(148,148,148); ///221,218,209
    glVertex2f(-.25,-.58);
    glVertex2f(-.25,-.59);
    glVertex2f(-.53,-.57);
    glVertex2f(-.53,-.58);

    glEnd();

    ///LINES
    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(1,1,1);
    glVertex2f(-.25,-.58);
    glVertex2f(-.25,-.59);
    glVertex2f(-.25,-.59);
    glVertex2f(-.53,-.57);
    glVertex2f(-.53,-.57);
    glVertex2f(-.53,-.58);
    glVertex2f(-.25,-.58);
    glVertex2f(-.53,-.58);

    glEnd();
    ///RAILING RODS
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(148,148,148);  ///221,218,209
    glVertex2f(-.25,-.59);
    glVertex2f(-.25,-.618);

    glVertex2f(-.28,-.59);
    glVertex2f(-.28,-.628);

    glVertex2f(-.31,-.588);
    glVertex2f(-.31,-.655);

    glVertex2f(-.34,-.588);
    glVertex2f(-.34,-.66);

    glVertex2f(-.38,-.585);
    glVertex2f(-.38,-.66);

    glVertex2f(-.43,-.585);
    glVertex2f(-.43,-.68);

    glVertex2f(-.48,-.582);
    glVertex2f(-.48,-.673);

    glVertex2f(-.53,-.582);
    glVertex2f(-.53,-.673);


    glEnd();


    ///RAILING
     glBegin(GL_QUADS);
    glColor3ub(120,98,87);
    glVertex2f(-.3,-.63);
    glVertex2f(-.3,-.64);
    glVertex2f(-.4,-.65);
    glVertex2f(-.4,-.64);


    glVertex2f(-.4,-.64);
    glVertex2f(-.4,-.65);
    glVertex2f(-.65,-.66);
    glVertex2f(-.65,-.65);
    glEnd();
    ///LINES
     glLineWidth(1);
     glBegin(GL_LINES);
     glColor3ub(1,1,1);
     glVertex2f(-.3,-.63);
     glVertex2f(-.3,-.64);
     glVertex2f(-.3,-.64);
     glVertex2f(-.4,-.65);
     glVertex2f(-.3,-.63);
     glVertex2f(-.4,-.64);


     glVertex2f(-.4,-.65);
     glVertex2f(-.65,-.66);
     glVertex2f(-.65,-.66);
     glVertex2f(-.65,-.65);
     glVertex2f(-.4,-.64);
     glVertex2f(-.65,-.65);

     glEnd();

    ///GOLDEN SIDE LINES
     ///TRIANGLES
    glBegin(GL_TRIANGLES);
    glColor3ub(90,58,43);
    glVertex2f(-.65,-.74);
    glVertex2f(-.938,-.75);
    glVertex2f(-.936,-.78);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(120,98,87);
    glVertex2f(-.25,-.68);
    glVertex2f(-.4,-.71);
    glEnd();

     glLineWidth(2);
     glBegin(GL_LINES);
     glColor3ub(120,98,87);
     glVertex2f(-.4,-.71);
     glVertex2f(-.938,-.78);

     glVertex2f(-.65,-.74);
     glVertex2f(-.938,-.75);
     glEnd();

///DOORS
    glBegin(GL_QUADS);
    glColor3ub(148,148,148);
    glVertex2f(-.4,-.665);
    glVertex2f(-.4,-.705);
    glVertex2f(-.45,-.71);
    glVertex2f(-.45,-.67);
    glEnd();

    ///LINES
    glLineWidth(2);
     glBegin(GL_LINES);
     glColor3ub(120,98,87);
     glVertex2f(-.4,-.665);
     glVertex2f(-.4,-.705);
     glVertex2f(-.4,-.705);
     glVertex2f(-.45,-.71);
     glVertex2f(-.45,-.71);
     glVertex2f(-.45,-.67);
     glVertex2f(-.4,-.665);
     glVertex2f(-.45,-.67);

     glVertex2f(-.425,-.665);
     glVertex2f(-.425,-.71);
     glEnd();

      glLineWidth(.5);
     glBegin(GL_LINES);
     glColor3ub(120,98,87);
     glVertex2f(-.4,-.68);
     glVertex2f(-.45,-.686);

     glVertex2f(-.4,-.69);
     glVertex2f(-.45,-.696);

     glEnd();

     ///BOAT CANON-HOLES
    glLineWidth(2);
    glColor3ub(71,61,70);
    triangleLines(-.45,-.74,.007);
    //triangleLines(-.4,-.73,.006);
    triangleLines(-.35,-.72,.005);
    //triangleLines(-.5,-.75,.007);
    triangleLines(-.55,-.76,.007);
    //triangleLines(-.6,-.77,.008);
    triangleLines(-.65,-.78,.009);
    //triangleLines(-.7,-.79,.009);
    triangleLines(-.75,-.80,.010);







    glLoadIdentity();

    glPopMatrix();

///Right BOAT ENDS--------------------------------------------------------------------------




///bird starts---------

///bird 1--
glPushMatrix();
glTranslatef(position5,0,0);

glTranslatef(.6,.8,0);
glScalef(.2,.2,0);

glPushMatrix();


glBegin(GL_POLYGON);//Bird 1
	glColor3ub(255, 255, 255);///birds color
	glVertex2f(0.0,0.0);
	glVertex2f(0.0,.07);
	glVertex2f(.1,-.05);
	glVertex2f(.12,-.07);
	glVertex2f(.14,-.072);
	glVertex2f(.2,-.2);
	glVertex2f(.25,-.22);
	glVertex2f(.32,-.2);
	glVertex2f(.35,-.18);
	glVertex2f(.38,-.16);
	glVertex2f(.39,-.16);
    glVertex2f(.45,-.18);
	glVertex2f(.48,-.18);
	glVertex2f(.5,-.18);
    glVertex2f(.52,-.18);
    glVertex2f(.54,-.18);
	glVertex2f(.56,-.18);
	glVertex2f(.58,-.19);
	glVertex2f(.65,-.11);
    glVertex2f(.61,-.12);
	glVertex2f(.58,-.13);
	glVertex2f(.45,-.09);
	glVertex2f(.42,-0.06);
	glVertex2f(.38,0.00);
	glVertex2f(.3,.02);
	glVertex2f(.28,.02);
	glVertex2f(.26,.02);
	glVertex2f(.24,.02);
	glVertex2f(.2,.01);
	glVertex2f(.15,.0);
	glVertex2f(.0,.07);


    glEnd();

    glBegin(GL_POLYGON);///beak
	glColor3ub(255, 255, 255);
    glVertex2f(0.0, .07);
	glVertex2f(0.0,-.07);

    glVertex2f(-.15, 0.0);
	glEnd();

	glColor3ub(255, 255, 255);
    triangleFan(0,0,0.08);
   glColor3ub(106,138,153);
    triangleLines(-.01,0.03,0.01);

    glPushMatrix();
    glRotatef(i,1.0,0.0,0.0);

    glBegin(GL_POLYGON);///Feather
	glColor3ub(255, 255, 255); ///birds color
    glVertex2f(0.0, 0.0);
	glVertex2f(0.2,0);
    glVertex2f(.4, -0.4);
    glVertex2f(0.6,-0.45);
	glVertex2f(0.42,-0.03);
	glVertex2f(0.2,0);
	glEnd();

glPopMatrix();

    i+=0.15f;
glLoadIdentity();

glPopMatrix();
///bird 1 ends--


///bird 2--
glPushMatrix();
glTranslatef(position5,0,0);

glTranslatef(.2,.7,0);
glScalef(.25,.25,0);

glPushMatrix();


glBegin(GL_POLYGON);//Bird 1
	glColor3ub(255, 255, 255);///birds color
	glVertex2f(0.0,0.0);
	glVertex2f(0.0,.07);
	glVertex2f(.1,-.05);
	glVertex2f(.12,-.07);
	glVertex2f(.14,-.072);
	glVertex2f(.2,-.2);
	glVertex2f(.25,-.22);
	glVertex2f(.32,-.2);
	glVertex2f(.35,-.18);
	glVertex2f(.38,-.16);
	glVertex2f(.39,-.16);
    glVertex2f(.45,-.18);
	glVertex2f(.48,-.18);
	glVertex2f(.5,-.18);
    glVertex2f(.52,-.18);
    glVertex2f(.54,-.18);
	glVertex2f(.56,-.18);
	glVertex2f(.58,-.19);
	glVertex2f(.65,-.11);
    glVertex2f(.61,-.12);
	glVertex2f(.58,-.13);
	glVertex2f(.45,-.09);
	glVertex2f(.42,-0.06);
	glVertex2f(.38,0.00);
	glVertex2f(.3,.02);
	glVertex2f(.28,.02);
	glVertex2f(.26,.02);
	glVertex2f(.24,.02);
	glVertex2f(.2,.01);
	glVertex2f(.15,.0);
	glVertex2f(.0,.07);


    glEnd();

    glBegin(GL_POLYGON);///beak
	glColor3ub(255, 255, 255);
    glVertex2f(0.0, .07);
	glVertex2f(0.0,-.07);

    glVertex2f(-.15, 0.0);
	glEnd();

	glColor3ub(255, 255, 255);
    triangleFan(0,0,0.08);
   glColor3ub(106,138,153);
    triangleLines(-.01,0.03,0.01);

    glPushMatrix();
    glRotatef(i,1.0,0.0,0.0);

    glBegin(GL_POLYGON);///Feather
	glColor3ub(255, 255, 255); ///birds color
    glVertex2f(0.0, 0.0);
	glVertex2f(0.2,0);
    glVertex2f(.4, -0.4);
    glVertex2f(0.6,-0.45);
	glVertex2f(0.42,-0.03);
	glVertex2f(0.2,0);
	glEnd();

glPopMatrix();

    i+=0.45f;
glLoadIdentity();

glPopMatrix();
///bird 2 ends--



///bird ends


	glFlush();
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint


	glutIdleFunc(Idle);//glutIdleFunc sets the global idle callback to be func so a GLUT program can perform background processing tasks or continuous animation when window system events are not being received.
    glutTimerFunc(100, update1, 0);
	glutTimerFunc(100, update11, 0);
    glutTimerFunc(100, update2, 0);
    glutTimerFunc(100, update3, 0);
    glutTimerFunc(100, update4, 0);
    glutTimerFunc(100, update5, 0);
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
