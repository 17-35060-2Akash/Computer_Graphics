#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846

GLfloat i = 0.0f;



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

void triangleFan(GLfloat a,GLfloat b,GLfloat r, GLint c1, GLint c2, GLint c3)
{
    int i;
    GLfloat x=a; GLfloat y=b; GLfloat radius =r;
	int triangleAmount = 25; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;


	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(c1,c2,c3);
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

	glBegin(GL_QUADS);//sky 2
	glColor3ub(153, 221, 255);
	glVertex2f(-1.0, 0.2);
	glVertex2f(1.0, 0.2);
	glVertex2f(1,1);
	glVertex2f(-1,1);
	glEnd();

	glBegin(GL_QUADS);//sky upper 1
	glColor3ub(128, 212, 255);
	glVertex2f(-1.0, 0.8);
	glVertex2f(1.0, 0.8);
	glVertex2f(1,1);
	glVertex2f(-1,1);
	glEnd();

	glBegin(GL_QUADS);//sky down 3
	glColor3ub(179, 230, 255);
	glVertex2f(-1.0, 0.2);
	glVertex2f(1.0, 0.2);
	glVertex2f(1,.5);
	glVertex2f(-1,.5);
	glEnd();

	glBegin(GL_QUADS);//sky down 4
	glColor3ub(204, 238, 255);
	glVertex2f(-1.0, -0.8);
	glVertex2f(1.0, -0.8);
	glVertex2f(1,.2);
	glVertex2f(-1,.2);
	glEnd();




	glBegin(GL_QUADS);//water 1
	glColor3ub(194, 240, 240);
	glVertex2f(-1,-.8);
	glVertex2f(1,-.8);
	glVertex2f(1,-.1);
	glVertex2f(-1,-.1);
	glEnd();

	glBegin(GL_QUADS);//water 1
	glColor3ub(111, 220, 220);
	glVertex2f(-1.0, -0.6);
	glVertex2f(1.0, -0.6);
	glVertex2f(1,-.8);
	glVertex2f(-1,-.8);
	glEnd();



	glBegin(GL_QUADS);//water 2
	glColor3ub(152, 230, 230);
	glVertex2f(-1,-.3);
	glVertex2f(1,-.3);
	glVertex2f(1,-.6);
	glVertex2f(-1,-.6);
	glEnd();

	glBegin(GL_QUADS);//water 4
	glColor3ub(0, 230, 230);
	glVertex2f(-1,-.8);
	glVertex2f(1,-.8);
	glVertex2f(1,-1);
	glVertex2f(-1,-1);
	glEnd();

	glBegin(GL_QUADS);//sky water Boundary
	glColor3ub(0, 153, 255);
	glVertex2f(1,-.1);
	glVertex2f(-1,-.1);
	glEnd();

	//right side last building
	glBegin(GL_QUADS);
	glColor3ub(51, 51, 0);
	glVertex2f(0.1, 0.28f);
	glVertex2f(0.2f, 0.28f);
	glVertex2f(0.2f, 0.55f);
	glVertex2f(0.1f, 0.55f);
	glEnd();

	//right side backside building
    glBegin(GL_QUADS);
    glColor3ub(0, 128, 0);
    glVertex2f(1.0f, 0.23f);
    glVertex2f(0.75f, 0.1f);
    glVertex2f(0.75f, 0.72f);
    glVertex2f(1.0f, 0.72f);
    glEnd();

    //right side backside building partitions
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.88f, 0.1f);
    glVertex2f(0.88f, 0.72f);

    glVertex2f(0.75f, 0.67f);
    glVertex2f(1.0f, 0.67f);

    glVertex2f(0.75f, 0.60f);
    glVertex2f(1.0f, 0.60f);

    glVertex2f(0.75f, 0.53f);
    glVertex2f(1.0f, 0.53f);

    glVertex2f(0.75f, 0.46f);
    glVertex2f(1.0f, 0.46f);
    glEnd();

	//right side 5th building
    glBegin(GL_QUADS);
    glColor3ub(153, 0, 255);
    glVertex2f(0.18f, 0.23f);
    glVertex2f(0.35f, 0.1f);
    glVertex2f(0.35f, 0.45f);
    glVertex2f(0.18f, 0.45f);
    glEnd();

    //right side 5th building border
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.18f, 0.23f);
    glVertex2f(0.35f, 0.1f);

    glVertex2f(0.35f, 0.1f);
    glVertex2f(0.35f, 0.45f);

    glVertex2f(0.35f, 0.45f);
    glVertex2f(0.18f, 0.45f);

    glVertex2f(0.18f, 0.45f);
    glVertex2f(0.18f, 0.23f);
    glEnd();

    //right side 5th building windows
    glBegin(GL_QUADS);  //window1
    glColor3ub(0,0,0);
    glVertex2f(0.20f, 0.42f);
    glVertex2f(0.25f, 0.42);
    glVertex2f(0.25f, 0.40);
    glVertex2f(0.20f, 0.40);
    glEnd();

    glBegin(GL_QUADS);  //window2
    glColor3ub(0,0,0);
    glVertex2f(0.20f, 0.32f);
    glVertex2f(0.25f, 0.32);
    glVertex2f(0.25f, 0.30);
    glVertex2f(0.20f, 0.30);
    glEnd();

	//right side 4th building upper portion top
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.45f, 0.15f);
    glVertex2f(0.7f, 0.1f);
    glVertex2f(0.7f, 0.65f);
    glVertex2f(0.45f, 0.65f);
    glEnd();

	//right side 4th building upper portion
    glBegin(GL_QUADS);
    glColor3ub(191, 191, 191);
    glVertex2f(0.35f, 0.15f);
    glVertex2f(0.7f, 0.1f);
    glVertex2f(0.7f, 0.6f);
    glVertex2f(0.35f, 0.6f);
    glEnd();

    //right side 4th building upper portion border
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.35f, 0.15f);
    glVertex2f(0.7f, 0.1f);

    glVertex2f(0.7f, 0.1f);
    glVertex2f(0.7f, 0.6f);

    glVertex2f(0.7f, 0.6f);
    glVertex2f(0.35f, 0.6f);

    glVertex2f(0.35f, 0.6f);
    glVertex2f(0.35f, 0.15f);
    glEnd();

    //right side 4th building upper portion partition
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.385f, 0.15f);
    glVertex2f(0.385f, 0.60f);

    glVertex2f(0.485f, 0.15f);
    glVertex2f(0.485f, 0.60f);
    glEnd();


	//right side 4th building
    glBegin(GL_QUADS);
    glColor3ub(204, 102, 255);
    glVertex2f(0.3f, 0.15f);
    glVertex2f(0.7f, 0.1f);
    glVertex2f(0.7f, 0.5f);
    glVertex2f(0.3f, 0.5f);
    glEnd();

    //right side 4th building partition
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.3f, 0.45f);
    glVertex2f(0.7f, 0.45f);

    glVertex2f(0.3f, 0.4f);
    glVertex2f(0.7f, 0.4f);

    glVertex2f(0.3f, 0.35f);
    glVertex2f(0.7f, 0.35f);

    glVertex2f(0.3f, 0.30f);
    glVertex2f(0.7f, 0.30f);

    glVertex2f(0.3f, 0.25f);
    glVertex2f(0.7f, 0.25f);

    glVertex2f(0.3f, 0.20f);
    glVertex2f(0.7f, 0.20f);
    glEnd();

    //right side 4th building windows
    glBegin(GL_QUADS);  //window1
    glColor3ub(0,0,0);
    glVertex2f(0.32f, 0.465f);
    glVertex2f(0.37f, 0.465f);
    glVertex2f(0.37f, 0.485f);
    glVertex2f(0.32f, 0.485);
    glEnd();

    glBegin(GL_QUADS);  //window2
    glColor3ub(0,0,0);
    glVertex2f(0.40f, 0.465f);
    glVertex2f(0.45f, 0.465f);
    glVertex2f(0.45f, 0.485f);
    glVertex2f(0.40f, 0.485);
    glEnd();

    glBegin(GL_QUADS);  //window3
    glColor3ub(0,0,0);
    glVertex2f(0.48f, 0.465f);
    glVertex2f(0.50f, 0.465f);
    glVertex2f(0.50f, 0.485f);
    glVertex2f(0.48f, 0.485);
    glEnd();

    glBegin(GL_QUADS);  //window4
    glColor3ub(0,0,0);
    glVertex2f(0.32f, 0.365f);
    glVertex2f(0.37f, 0.365f);
    glVertex2f(0.37f, 0.385f);
    glVertex2f(0.32f, 0.385);
    glEnd();

    glBegin(GL_QUADS);  //window5
    glColor3ub(0,0,0);
    glVertex2f(0.40f, 0.365f);
    glVertex2f(0.45f, 0.365f);
    glVertex2f(0.45f, 0.385f);
    glVertex2f(0.40f, 0.385);
    glEnd();

    glBegin(GL_QUADS);  //window6
    glColor3ub(0,0,0);
    glVertex2f(0.48f, 0.365f);
    glVertex2f(0.50f, 0.365f);
    glVertex2f(0.50f, 0.385f);
    glVertex2f(0.48f, 0.385);
    glEnd();

    glBegin(GL_QUADS);  //window7
    glColor3ub(0,0,0);
    glVertex2f(0.32f, 0.265f);
    glVertex2f(0.37f, 0.265f);
    glVertex2f(0.37f, 0.285f);
    glVertex2f(0.32f, 0.285);
    glEnd();

    glBegin(GL_QUADS);  //window8
    glColor3ub(0,0,0);
    glVertex2f(0.40f, 0.265f);
    glVertex2f(0.45f, 0.265f);
    glVertex2f(0.45f, 0.285f);
    glVertex2f(0.40f, 0.285);
    glEnd();

    glBegin(GL_QUADS);  //window9
    glColor3ub(0,0,0);
    glVertex2f(0.48f, 0.265f);
    glVertex2f(0.50f, 0.265f);
    glVertex2f(0.50f, 0.285f);
    glVertex2f(0.48f, 0.285);
    glEnd();

    glBegin(GL_QUADS);  //window10
    glColor3ub(0,0,0);
    glVertex2f(0.32f, 0.165f);
    glVertex2f(0.37f, 0.165f);
    glVertex2f(0.37f, 0.185f);
    glVertex2f(0.32f, 0.185);
    glEnd();

    glBegin(GL_QUADS);  //window11
    glColor3ub(0,0,0);
    glVertex2f(0.40f, 0.165f);
    glVertex2f(0.45f, 0.165f);
    glVertex2f(0.45f, 0.185f);
    glVertex2f(0.40f, 0.185);
    glEnd();

    glBegin(GL_QUADS);  //window12
    glColor3ub(0,0,0);
    glVertex2f(0.48f, 0.165f);
    glVertex2f(0.50f, 0.165f);
    glVertex2f(0.50f, 0.185f);
    glVertex2f(0.48f, 0.185);
    glEnd();

    //right side 4th building border
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.3f, 0.15f);
    glVertex2f(0.7f, 0.1f);

    glVertex2f(0.7f, 0.1f);
    glVertex2f(0.7f, 0.5f);

    glVertex2f(0.7f, 0.5f);
    glVertex2f(0.3f, 0.5f);

    glVertex2f(0.3f, 0.5f);
    glVertex2f(0.3f, 0.15f);
    glEnd();



	//right side 3d building oval
    triangleFan(0.7f, 0.45f, 0.2f, 204, 204, 0);

    glBegin(GL_TRIANGLES);
    glColor3ub(204, 204, 0);
    glVertex2f(0.53f, 0.567f);
    glVertex2f(0.872f, 0.567f);
    glVertex2f(0.7f, 0.70f);
    glEnd();
    //oval end

    //right side 3d building oval border
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.6f, 0.3f);
    glVertex2f(0.82f, 0.6f);

    glVertex2f(0.55f, 0.3f);
    glVertex2f(0.785f, 0.625f);

    glVertex2f(0.9f, 0.45f);
    glVertex2f(0.63f, 0.645f);

    glVertex2f(0.87f, 0.40f);
    glVertex2f(0.58f, 0.61f);

    glVertex2f(0.82f, 0.37f);
    glVertex2f(0.53f, 0.57f);

    glVertex2f(0.82f, 0.3f);
    glVertex2f(0.515f, 0.515f);

    glVertex2f(0.82f, 0.2f);
    glVertex2f(0.5f, 0.427f);
    glEnd();


	//right side chimny
    glBegin(GL_QUADS);
    glColor3ub(115, 38, 38);
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
    glColor3ub(255, 255, 255);
    glVertex2f(0.5f, 0.27f);
    glVertex2f(0.7f, 0.27f);
    glVertex2f(0.6f, 0.32);
    glEnd();

    //chimny head border
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.5f, 0.27f);
    glVertex2f(0.7f, 0.27f);

    glVertex2f(0.7f, 0.27f);
    glVertex2f(0.6f, 0.32);

    glVertex2f(0.6f, 0.32);
    glVertex2f(0.5f, 0.27f);
    glEnd();



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
    glEnd();

    //right side front 2nd building partition
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.57f, 0.0f);
    glVertex2f(0.57f, 0.2f);

    glVertex2f(0.5f, 0.15);
    glVertex2f(0.63f, 0.15);

    glVertex2f(0.5f, 0.10);
    glVertex2f(0.63f, 0.10);
    glEnd();

	//right side 2nd building circle
    triangleFan(0.85f, 0.25f, 0.15f, 140, 140, 140);

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
    glEnd();

    //right side 1st building
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 77);
    glVertex2f(0.75f, -0.1f);
    glVertex2f(1.0f, -0.1f);
    glVertex2f(1.0f, 0.20f);
    glVertex2f(0.75f, 0.20f);
    glEnd();

    //right side 1st building border
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.75f, -0.1f);
    glVertex2f(1.0f, -0.1f);

    glVertex2f(1.0f, -0.1f);
    glVertex2f(1.0f, 0.20f);

    glVertex2f(1.0f, 0.20f);
    glVertex2f(0.75f, 0.20f);

    glVertex2f(0.75f, 0.20f);
    glVertex2f(0.75f, -0.1f);
    glEnd();

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
    glEnd();

    //right side 1st building divider
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.88f, -0.1f);
    glVertex2f(0.88f, 0.20f);
    glEnd();

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

    //right side front 1st building

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(0.65f, -0.10f);
    glVertex2f(0.75f, -0.10f);
    glVertex2f(0.75f, 0.18f);
    glVertex2f(0.65f, 0.18f);
    glEnd();

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

    //right side front 1st building partition

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
    glEnd();

    //right side front 1st building windows

    glBegin(GL_QUADS);  //window1
    glColor3ub(0,0,0);
    glVertex2f(0.8f, 0.115f);
    glVertex2f(0.85f,0.115f);
    glVertex2f(0.85f, 0.138f);
    glVertex2f(0.8f, 0.138f);
    glEnd();

    glBegin(GL_QUADS);  //window2
    glColor3ub(0,0,0);
    glVertex2f(0.8f, 0.065f);
    glVertex2f(0.85f,0.065f);
    glVertex2f(0.85f, 0.088f);
    glVertex2f(0.8f, 0.088f);
    glEnd();

    glBegin(GL_QUADS);  //window3
    glColor3ub(0,0,0);
    glVertex2f(0.8f, 0.015f);
    glVertex2f(0.85f,0.015f);
    glVertex2f(0.85f, 0.04f);
    glVertex2f(0.8f, 0.04f);
    glEnd();

    glBegin(GL_QUADS);  //window4
    glColor3ub(0,0,0);
    glVertex2f(0.92f, 0.115f);
    glVertex2f(0.97f,0.115f);
    glVertex2f(0.97f, 0.138f);
    glVertex2f(0.92f, 0.138f);
    glEnd();

    glBegin(GL_QUADS);  //window5
    glColor3ub(0,0,0);
    glVertex2f(0.92f, 0.065f);
    glVertex2f(0.97f,0.065f);
    glVertex2f(0.97f, 0.088f);
    glVertex2f(0.92f, 0.088f);
    glEnd();

    glBegin(GL_QUADS);  //window6
    glColor3ub(0,0,0);
    glVertex2f(0.92f, 0.015f);
    glVertex2f(0.97f,0.015f);
    glVertex2f(0.97f, 0.04f);
    glVertex2f(0.92f, 0.04f);
    glEnd();

    glBegin(GL_QUADS);  //window7
    glColor3ub(0,0,0);
    glVertex2f(0.92f, -0.012f);
    glVertex2f(0.97f, -0.012f);
    glVertex2f(0.97f, -0.04f);
    glVertex2f(0.92f, -0.04f);
    glEnd();

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



    //##railing over right side wall##
    glBegin(GL_QUADS);      //railing upper bar
    glColor3ub(0,0,0);
    glVertex2f(1.0f, -0.12f);
    glVertex2f(0.08f, 0.38f);
    glVertex2f(0.08f, 0.37f);
    glVertex2f(1.0f, -0.15f);
    glEnd();


    glBegin(GL_LINES);   //railing middle bars
    glColor3ub(0,0,0);
    glVertex2f(0.30f, 0.28f);
    glVertex2f(0.30f, 0.2f);

    glVertex2f(0.40f, 0.23f);
    glVertex2f(0.40f, 0.15f);

    glVertex2f(0.50f, 0.18f);
    glVertex2f(0.50f, 0.10f);

    glVertex2f(0.60f, 0.12f);
    glVertex2f(0.60f, 0.03f);

    glVertex2f(0.75f, 0.03f);
    glVertex2f(0.75f, -0.1f);

    glVertex2f(0.90f, -0.07f);
    glVertex2f(0.90f, -0.15f);
    glEnd();

    //##railing over right side wall end ##


    //left side wall
    glBegin(GL_QUADS);
    glColor3ub(179, 60, 0);
    glVertex2f(-1.0f, -0.4f);
    glVertex2f(-0.30f, 0.2f);
    glVertex2f(-0.30, 0.25f);
    glVertex2f(-1.0f, -0.2f);
    glEnd();

    //left side wall middle border
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-1.0f, -0.32f);
    glVertex2f(-0.30f, 0.215f);
    glVertex2f(-0.30, 0.23f);
    glVertex2f(-1.0f, -0.28f);
    glEnd();

    //left side wall border
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-1.0f, -0.4f);
    glVertex2f(-0.30f, 0.2f);
    glVertex2f(-0.30f, 0.2f);
    glVertex2f(-0.30f, 0.2f);
    glVertex2f(-0.30, 0.25f);
    glVertex2f(-1.0f, -0.2f);
    glVertex2f(-1.0f, -0.4f);
    glEnd();



    //right side wall
    glBegin(GL_QUADS);
    glColor3ub(179, 60, 0);
    glVertex2f(1.0f, -0.4f);
    glVertex2f(0.08f, 0.30f);
    glVertex2f(0.08, 0.35f);
    glVertex2f(1.0f, -0.2f);
    glEnd();

    //right side wall middle border
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(1.0f, -0.32f);
    glVertex2f(0.08f, 0.33f);
    glVertex2f(0.08f, 0.32f);
    glVertex2f(1.0f, -0.28f);
    glEnd();

    //right side wall border
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(1.0f, -0.32f);
    glVertex2f(0.08f, 0.33f);
    glVertex2f(0.08f, 0.33f);
    glVertex2f(0.08f, 0.32f);
    glVertex2f(0.08f, 0.32f);
    glVertex2f(1.0f, -0.28f);
    glVertex2f(1.0f, -0.32f);
    glEnd();



//-----Right Tower-------//





	glBegin(GL_QUADS);//Tower 1 down
	glColor3ub(204, 163, 0);
	glVertex2f(.55, -.53);
	glVertex2f(.81, -.53);
	glVertex2f(.81,-.43);
	glVertex2f(.55,-.43);
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

//////--------
	glBegin(GL_TRIANGLES);//Tower right shed back
	glColor3ub(133, 133, 173);
	glVertex2f(.79, .42);
	glVertex2f(.73, .42);
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

	glLineWidth(1);

	glBegin(GL_TRIANGLES);//Tower left shed back
	glColor3ub(133, 133, 173);
	glVertex2f(.63, .42);
	glVertex2f(.57, .42);
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

	glBegin(GL_TRIANGLES);//Tower left shed
	glColor3ub(83, 83, 121);
	glVertex2f(.61, .42);
	glVertex2f(.55, .42);
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

	//-----Right Tower ends-------//

	//-----Left Tower-------//


	glBegin(GL_QUADS);//Tower 1 down
	glColor3ub(204, 163, 0);
	glVertex2f(-.55, -.53);
	glVertex2f(-.81, -.53);
	glVertex2f(-.81,-.43);
	glVertex2f(-.55,-.43);
	glEnd();

	glBegin(GL_QUADS);//Tower 2 down
	glColor3ub(255, 204, 0);
	glVertex2f(-.56, -.43);
	glVertex2f(-.8, -.43);
	glVertex2f(-.8,.1);
	glVertex2f(-.56,.1);
	glEnd();


	glBegin(GL_POLYGON);//Tower 3 down
	glColor3ub(255, 204, 0);
	glVertex2f(-.56,.1);
	glVertex2f(-.8,.1);
	glVertex2f(-.81, .11);
	glVertex2f(-.81, .31);
	glVertex2f(-.55,.31);
	glVertex2f(-.55,.11);

	glEnd();

//////--------
	glBegin(GL_TRIANGLES);//Tower right shed back
	glColor3ub(133, 133, 173);
	glVertex2f(-.79, .42);
	glVertex2f(-.73, .42);
	glVertex2f(-.76,.63);

	glEnd();

	glLineWidth(4);
	glBegin(GL_LINES);//Tower right cross back
	glColor3ub(133, 133, 173);
	glVertex2f(-.76,.61);
	glVertex2f(-.76, .67);

	glVertex2f(-.75, .65);
	glVertex2f(-.77, .65);
	glEnd();

	glLineWidth(1);

	glBegin(GL_TRIANGLES);//Tower left shed back
	glColor3ub(133, 133, 173);
	glVertex2f(-.63, .42);
	glVertex2f(-.57, .42);
    glVertex2f(-.60, .63);

	glEnd();

	glLineWidth(4);

	glBegin(GL_LINES);//Tower left cross back
	glColor3ub(133, 133, 173);
	glVertex2f(-.60, .61);
	glVertex2f(-.60, .67);

	glVertex2f(-.59, .65);
	glVertex2f(-.61, .65);
	glEnd();

	glLineWidth(1);

	glBegin(GL_POLYGON);//Tower roof back
	glColor3ub(41, 41, 61);
	glVertex2f(-.57,.31);
	glVertex2f(-.79,.31);
	glVertex2f(-.69, .63);
	glVertex2f(-.65,.63);
	glVertex2f(-.57,.31);

	glEnd();




	glBegin(GL_POLYGON);//Tower roof back top
	glColor3ub(52, 52, 76);
	glVertex2f(-.65,.63);
	glVertex2f(-.69, .63);
	glVertex2f(-.7, .67);
	glVertex2f(-.64,.67);
    glEnd();

    glBegin(GL_POLYGON);//Tower right
	glColor3ub(255, 204, 0);
	glVertex2f(-.74,.31);
	glVertex2f(-.81,.31);
	glVertex2f(-.81, .42);
	glVertex2f(-.75, .42);
	glVertex2f(-.75,.34);
	glVertex2f(-.74,.34);


	glEnd();



	glBegin(GL_POLYGON);//Tower left
	glColor3ub(255, 204, 0);
	glVertex2f(-.55,.31);
	glVertex2f(-.62,.31);
	glVertex2f(-.62, .34);
	glVertex2f(-.61, .34);
	glVertex2f(-.61,.42);
	glVertex2f(-.55,.42);

	glEnd();






	glBegin(GL_POLYGON);//Tower back extra
	glColor3ub(52, 52, 76);
	glVertex2f(-.72,.34);
	glVertex2f(-.75,.34);
	glVertex2f(-.75, .4);
	glVertex2f(-.72, .4);
	glEnd();

	glBegin(GL_POLYGON);//window top center
	glColor3ub(255, 204, 0);
	glVertex2f(-.63,.31);
	glVertex2f(-.73,.31);
	glVertex2f(-.73, .34);
	glVertex2f(-.63, .34);

	glEnd();

	glBegin(GL_POLYGON);//window top center
	glColor3ub(255, 204, 0);
	glVertex2f(-.64,.34);
	glVertex2f(-.72,.34);
	glVertex2f(-.72, .45);
	glVertex2f(-.64, .45);

	glEnd();

	glBegin(GL_POLYGON);//window top trinagle
	glColor3ub(255, 204, 0);
	glVertex2f(-.63,.36);
	glVertex2f(-.73,.36);
	glVertex2f(-.68, .46);
	glEnd();

	glBegin(GL_POLYGON);//window top trinagle
	glColor3ub(255, 204, 0);
	glVertex2f(-.63,.41);
	glVertex2f(-.73,.41);
	glVertex2f(-.68, .51);
	glEnd();

	glBegin(GL_QUADS);//Tower inner dark potion
	glColor3ub(230, 184, 0);
	glVertex2f(-.6, -.43);
	glVertex2f(-.75, -.43);
	glVertex2f(-.75,.29);
	glVertex2f(-.6,.29);
	glEnd();

	glBegin(GL_QUADS);//Tower sunset
	glColor3ub(204, 163, 0);
	glVertex2f(-.54, .28);
	glVertex2f(-.82, .28);
	glVertex2f(-.82,.3);
	glVertex2f(-.54,.3);
	glEnd();

	glBegin(GL_LINES);//Tower sunset border
	glColor3ub(102, 82, 0);
	glVertex2f(-.54, .28);
	glVertex2f(-.82, .28);

	glVertex2f(-.82,.3);
	glVertex2f(-.54,.3);
	glEnd();

	glBegin(GL_QUADS);//Tower sunset
	glColor3ub(204, 163, 0);
	glVertex2f(-.54, .12);
	glVertex2f(-.82, .12);
	glVertex2f(-.82,.13);
	glVertex2f(-.54,.13);
	glEnd();

	glBegin(GL_LINES);//Tower sunset border
	glColor3ub(102, 82, 0);
	glVertex2f(-.54, .12);
	glVertex2f(-.82, .12);

	glVertex2f(-.82,.13);
	glVertex2f(-.54,.13);
	glEnd();

	glBegin(GL_QUADS);//Tower sunset
	glColor3ub(204, 163, 0);
	glVertex2f(-.54, .15);
	glVertex2f(-.82, .15);
	glVertex2f(-.82,.16);
	glVertex2f(-.54,.16);
	glEnd();

	glBegin(GL_LINES);//Tower sunset border
	glColor3ub(102, 82, 0);
	glVertex2f(-.54, .15);
	glVertex2f(-.82, .15);

	glVertex2f(-.82,.16);
	glVertex2f(-.54,.16);
	glEnd();

	glBegin(GL_QUADS);//Tower sunset
	glColor3ub(204, 163, 0);
	glVertex2f(-.55, .005);
	glVertex2f(-.81, .005);
	glVertex2f(-.81,.015);
	glVertex2f(-.55,.015);
	glEnd();

	glBegin(GL_LINES);//Tower sunset border
	glColor3ub(102, 82, 0);
    glVertex2f(-.55, .005);
	glVertex2f(-.81, .005);

	glVertex2f(-.81,.015);
	glVertex2f(-.55,.015);
	glEnd();

	glBegin(GL_QUADS);//Tower sunset
	glColor3ub(204, 163, 0);
	glVertex2f(-.55, -.015);
	glVertex2f(-.81, -.015);
	glVertex2f(-.81,-.025);
	glVertex2f(-.55,-.025);
	glEnd();

	glBegin(GL_LINES);//Tower sunset border
	glColor3ub(102, 82, 0);
    glVertex2f(-.55, -.015);
	glVertex2f(-.81, -.015);

	glVertex2f(-.81,-.025);
	glVertex2f(-.55,-.025);
	glEnd();

	glBegin(GL_QUADS);//Tower sunset
	glColor3ub(204, 163, 0);
	glVertex2f(-.55, -.17);
	glVertex2f(-.81, -.17);
	glVertex2f(-.81,-.18);
	glVertex2f(-.55,-.18);
	glEnd();

	glBegin(GL_LINES);//Tower sunset border
	glColor3ub(102, 82, 0);
    glVertex2f(-.55, -.17);
	glVertex2f(-.81, -.17);

	glVertex2f(-.81,-.18);
	glVertex2f(-.55,-.18);
	glEnd();

	glBegin(GL_QUADS);//Tower sunset
	glColor3ub(204, 163, 0);
	glVertex2f(-.55, -.14);
	glVertex2f(-.81, -.14);
	glVertex2f(-.81,-.15);
	glVertex2f(-.55,-.15);
	glEnd();

	glBegin(GL_LINES);//Tower sunset border
	glColor3ub(102, 82, 0);
    glVertex2f(-.55, -.14);
	glVertex2f(-.81, -.14);

	glVertex2f(-.81,-.15);
	glVertex2f(-.55,-.15);
	glEnd();


	glBegin(GL_POLYGON);//Tower right sunset
	glColor3ub(204, 163, 0);
	glVertex2f(-.74,.38);
	glVertex2f(-.82,.38);
	glVertex2f(-.82, .39);
	glVertex2f(-.74, .39);
	glEnd();

	glBegin(GL_LINES);//Tower right sunset
	glColor3ub(102, 82, 0);
    glVertex2f(-.74,.38);
	glVertex2f(-.82,.38);

	glVertex2f(-.82, .39);
	glVertex2f(-.74, .39);
	glEnd();

	glBegin(GL_POLYGON);//Tower right sunset
	glColor3ub(204, 163, 0);
	glVertex2f(-.74,.41);
	glVertex2f(-.82,.41);
	glVertex2f(-.82, .42);
	glVertex2f(-.74, .42);
	glEnd();

	glBegin(GL_LINES);//Tower right sunset
	glColor3ub(102, 82, 0);
    glVertex2f(-.74,.41);
	glVertex2f(-.82,.41);

	glVertex2f(-.82, .42);
	glVertex2f(-.74, .42);
	glEnd();

	glBegin(GL_POLYGON);//Tower left sunset
	glColor3ub(204, 163, 0);
	glVertex2f(-.54,.38);
	glVertex2f(-.62,.38);
	glVertex2f(-.62, .39);
	glVertex2f(-.54, .39);
	glEnd();

	glBegin(GL_LINES);//Tower left sunset
	glColor3ub(102, 82, 0);
    glVertex2f(-.54,.38);
	glVertex2f(-.62,.38);

	glVertex2f(-.62, .39);
	glVertex2f(-.54, .39);
	glEnd();

	glBegin(GL_POLYGON);//Tower left sunset
	glColor3ub(204, 163, 0);
	glVertex2f(-.54,.41);
	glVertex2f(-.62,.41);
	glVertex2f(-.62, .42);
	glVertex2f(-.54, .42);
	glEnd();

	glBegin(GL_LINES);//Tower left sunset
	glColor3ub(102, 82, 0);
    glVertex2f(-.54,.41);
	glVertex2f(-.62,.41);

	glVertex2f(-.62, .42);
	glVertex2f(-.54, .42);
	glEnd();

	glBegin(GL_TRIANGLES);//Tower right shed
	glColor3ub(83, 83, 121);
	glVertex2f(-.81, .42);
	glVertex2f(-.75, .42);
	glVertex2f(-.78,.63);

	glEnd();

	glBegin(GL_TRIANGLES);//Tower left shed
	glColor3ub(83, 83, 121);
	glVertex2f(-.61, .42);
	glVertex2f(-.55, .42);
    glVertex2f(-.58, .63);

	glEnd();

	glLineWidth(4);

	glBegin(GL_LINES);//Tower left cross
	glColor3ub(52, 52, 76);
	glVertex2f(-.58, .62);
	glVertex2f(-.58, .68);

	glVertex2f(-.57, .66);
	glVertex2f(-.59, .66);
	glEnd();

	glBegin(GL_LINES);//Tower right cross
	glColor3ub(52, 52, 76);
	glVertex2f(-.78,.62);
	glVertex2f(-.78, .68);

	glVertex2f(-.77, .66);
	glVertex2f(-.79, .66);
	glEnd();

	glBegin(GL_POLYGON);//Tower Top sunset
	glColor3ub(62, 62, 91);
	glVertex2f(-.7, .67);
	glVertex2f(-.64,.67);
	glVertex2f(-.64, .69);
	glVertex2f(-.7, .69);
	glEnd();

	glBegin(GL_LINES);//Tower top sunset
	glColor3ub(83, 83, 121);
	glVertex2f(-.7, .67);
	glVertex2f(-.64,.67);

	glVertex2f(-.64, .69);
	glVertex2f(-.7, .69);
	glEnd();


	glBegin(GL_POLYGON);//Tower Top sunset cross
	glColor3ub(230, 184, 0);
	glVertex2f(-.64, .69);
	glVertex2f(-.7, .69);
	glVertex2f(-.67, .74);
	glEnd();

	glLineWidth(5);


	glBegin(GL_LINES);//Tower top sunset cross
	glColor3ub(230, 184, 0);
	glVertex2f(-.67, .73);
	glVertex2f(-.67,.80);

	glVertex2f(-.66, .78);
	glVertex2f(-.68, .78);

	glVertex2f(-.64, .69);
	glVertex2f(-.64, .71);

	glVertex2f(-.7, .69);
	glVertex2f(-.7, .71);
	glEnd();



	glBegin(GL_POLYGON);//window set 1
	glColor3ub(0,0, 0);
	glVertex2f(-.655,.34);
	glVertex2f(-.665,.34);
	glVertex2f(-.665, .42);
	glVertex2f(-.66, .43);
	glVertex2f(-.655, .42);
	glEnd();


	glBegin(GL_POLYGON);//window set 1
	glColor3ub(0,0, 0);
	glVertex2f(-.675,.34);
	glVertex2f(-.685,.34);
	glVertex2f(-.685, .42);
	glVertex2f(-.68, .43);
	glVertex2f(-.675, .42);
	glEnd();

	glBegin(GL_POLYGON);//window set 1
	glColor3ub(0,0, 0);
	glVertex2f(-.695,.34);
	glVertex2f(-.705,.34);
	glVertex2f(-.705, .42);
	glVertex2f(-.7, .43);
	glVertex2f(-.695, .42);
	glEnd();

	glBegin(GL_POLYGON);//window set 1 line
	glColor3ub(255, 204, 0);
	glVertex2f(-.64,.39);
	glVertex2f(-.72,.39);
	glVertex2f(-.72, .40);
	glVertex2f(-.64, .40);
	glEnd();

	glBegin(GL_POLYGON);//window set 2
	glColor3ub(0,0, 0);
	glVertex2f(-.655,.21);
	glVertex2f(-.665,.21);
	glVertex2f(-.665, .265);
	glVertex2f(-.66, .275);
	glVertex2f(-.655, .265);
	glEnd();


	glBegin(GL_POLYGON);//window set 2
	glColor3ub(0,0, 0);
	glVertex2f(-.675,.21);
	glVertex2f(-.685,.21);
	glVertex2f(-.685, .265);
	glVertex2f(-.68, .275);
	glVertex2f(-.675, .265);
	glEnd();

	glBegin(GL_POLYGON);//window set 2
	glColor3ub(0,0, 0);
	glVertex2f(-.695,.21);
	glVertex2f(-.705,.21);
	glVertex2f(-.705, .265);
	glVertex2f(-.7, .275);
	glVertex2f(-.695, .265);
	glEnd();

	glBegin(GL_POLYGON);//window set 2
	glColor3ub(0,0, 0);
	glVertex2f(-.61,.21);
	glVertex2f(-.62,.21);
	glVertex2f(-.62, .265);
	glVertex2f(-.615, .275);
	glVertex2f(-.61, .265);
	glEnd();

	glBegin(GL_POLYGON);//window set 2
	glColor3ub(0,0, 0);
	glVertex2f(-.73,.21);
	glVertex2f(-.74,.21);
	glVertex2f(-.74, .265);
	glVertex2f(-.735, .275);
	glVertex2f(-.73, .265);
	glEnd();

	glBegin(GL_POLYGON);//window set 2 line
	glColor3ub(230, 184, 0);
	glVertex2f(-.6,.245);
	glVertex2f(-.75,.245);
	glVertex2f(-.75, .255);
	glVertex2f(-.6, .255);
	glEnd();

	glLineWidth(4);
	glBegin(GL_LINES);//Tower inner dark art
	glColor3ub(255, 204, 0);
	glVertex2f(-.6, .20);
	glVertex2f(-.75, .20);

	glVertex2f(-.6,.18);
	glVertex2f(-.75,.18);
	glEnd();

	glBegin(GL_LINES);//Tower inner dark art
	glColor3ub(255, 204, 0);

	glVertex2f(-.63,.16);
	glVertex2f(-.63,.28);

	glVertex2f(-.72,.16);
	glVertex2f(-.72,.28);
	glEnd();

	glLineWidth(2);//Circles
	glColor3ub(0, 0, 0);
    triangleLines(-.66,.19,.007);

    glColor3ub(0, 0, 0);
    triangleLines(-.68,.19,.007);

    glColor3ub(0, 0, 0);
    triangleLines(-.70,.19,.007);

    glBegin(GL_POLYGON);//window set 3
	glColor3ub(255, 204, 0);
	glVertex2f(-.615,.025);
	glVertex2f(-.645,.025);
	glVertex2f(-.645, .09);
	glVertex2f(-.63, .11);
	glVertex2f(-.615, .09);
	glEnd();


	glBegin(GL_POLYGON);//window set 3
	glColor3ub(255, 204, 0);
	glVertex2f(-.665,.025);
	glVertex2f(-.695,.025);
	glVertex2f(-.695, .09);
	glVertex2f(-.68, .11);
	glVertex2f(-.665, .09);
	glEnd();

	glBegin(GL_POLYGON);//window set 3
	glColor3ub(255, 204, 0);
	glVertex2f(-.715,.025);
	glVertex2f(-.745,.025);
	glVertex2f(-.745, .09);
	glVertex2f(-.73, .11);
	glVertex2f(-.715, .09);
	glEnd();


	glBegin(GL_POLYGON);//window set 3 black
	glColor3ub(0, 0, 0);
	glVertex2f(-.62,.027);
	glVertex2f(-.64,.027);
	glVertex2f(-.64, .08);
	glVertex2f(-.63, .10);
	glVertex2f(-.62, .08);
	glEnd();


	glBegin(GL_POLYGON);//window set 3 black
	glColor3ub(0, 0, 0);
	glVertex2f(-.67,.027);
	glVertex2f(-.69,.027);
	glVertex2f(-.69, .08);
	glVertex2f(-.68, .10);
	glVertex2f(-.67, .08);
	glEnd();

	glBegin(GL_POLYGON);//window set 3 black
	glColor3ub(0, 0, 0);
	glVertex2f(-.72,.027);
	glVertex2f(-.74,.027);
	glVertex2f(-.74, .08);
	glVertex2f(-.73, .10);
	glVertex2f(-.72, .08);
	glEnd();

	glBegin(GL_POLYGON);//window set 3 line
	glColor3ub(230, 184, 0);
	glVertex2f(-.615,.055);
	glVertex2f(-.745,.055);
	glVertex2f(-.745, .07);
	glVertex2f(-.615, .07);
	glEnd();

	glBegin(GL_POLYGON);//window set 4
	glColor3ub(255, 204, 0);
	glVertex2f(-.61,-.125);
	glVertex2f(-.64,-.125);
	glVertex2f(-.64, -.055);
	glVertex2f(-.625, -.04);
	glVertex2f(-.61, -.055);
	glEnd();


	glBegin(GL_POLYGON);//window set 4
	glColor3ub(255, 204, 0);
	glVertex2f(-.65,-.125);
	glVertex2f(-.71,-.125);
	glVertex2f(-.71,-.055);
	glVertex2f(-.68, -.03);
	glVertex2f(-.65,- .055);
	glEnd();

	glBegin(GL_POLYGON);//window set 4
	glColor3ub(255, 204, 0);
	glVertex2f(-.715,-.125);
	glVertex2f(-.745,-.125);
	glVertex2f(-.745,-.055);
	glVertex2f(-.73,  -.04);
	glVertex2f(-.715,-.055);
	glEnd();

	glBegin(GL_POLYGON);//window set 4 black
	glColor3ub(0, 0, 0);
	glVertex2f(-.615,-.12);
	glVertex2f(-.635,-.12);
	glVertex2f(-.635, -.06);
	glVertex2f(-.625, -.04);
	glVertex2f(-.615, -.06);
	glEnd();

//middle windows
	glBegin(GL_POLYGON);//window set 4 black
	glColor3ub(0, 0, 0);
	glVertex2f(-.655,-.12);
	glVertex2f(-.675,-.12);
	glVertex2f(-.675, -.06);
	glVertex2f(-.665, -.04);
	glVertex2f(-.655,-.06);
	glEnd();

	glBegin(GL_POLYGON);//window set 4 black
	glColor3ub(0, 0, 0);
	glVertex2f(-.685,-.12);
	glVertex2f(-.705,-.12);
	glVertex2f(-.705, -.06);
	glVertex2f(-.695, -.04);
	glVertex2f(-.685,-.06);
	glEnd();

	glBegin(GL_POLYGON);//window set 4 black
	glColor3ub(0, 0, 0);
	glVertex2f(-.72,-.12);
	glVertex2f(-.74,-.12);
	glVertex2f(-.74,-.06);
	glVertex2f(-.73, -.04);
	glVertex2f(-.72, -.06);
	glEnd();

    glBegin(GL_POLYGON);//window set 4 line
	glColor3ub(230, 184, 0);
	glVertex2f(-.615,-.09);
	glVertex2f(-.745,-.09);
	glVertex2f(-.745, -.08);
	glVertex2f(-.615, -.08);
	glEnd();

	glBegin(GL_POLYGON);//window set 5 line design
	glColor3ub(255, 204, 0);
	glVertex2f(-.6,-.27);
	glVertex2f(-.75,-.27);
	glVertex2f(-.75, -.26);
	glVertex2f(-.6, -.26);
	glEnd();

	glBegin(GL_POLYGON);//window set 5 line design
	glColor3ub(255, 204, 0);
	glVertex2f(-.6,-.33);
	glVertex2f(-.75,-.33);
	glVertex2f(-.75, -.32);
	glVertex2f(-.6, -.32);
	glEnd();
//windlow 5
	glBegin(GL_POLYGON);//window set 5 back left
	glColor3ub(255, 204, 0);
	glVertex2f(-.615,-.26);
	glVertex2f(-.64,-.26);
	glVertex2f(-.64, -.19);
	glVertex2f(-.615, -.19);
	glEnd();



	glBegin(GL_POLYGON);//window set 5 back r8
	glColor3ub(255, 204, 0);
	glVertex2f(-.735,-.26);
	glVertex2f(-.71,-.26);
	glVertex2f(-.71, -.19);
	glVertex2f(-.735, -.19);
	glEnd();

	glBegin(GL_POLYGON);//window set 5 back left black
	glColor3ub(0, 0, 0);
	glVertex2f(-.62,-.26);
	glVertex2f(-.635,-.26);
	glVertex2f(-.635, -.2);
	glVertex2f(-.627, -.19);
	glVertex2f(-.62, -.2);
	glEnd();



	glBegin(GL_POLYGON);//window set 5 back r8 black
	glColor3ub(0, 0, 0);
	glVertex2f(-.73,-.26);
	glVertex2f(-.715,-.26);
	glVertex2f(-.715, -.2);
    glVertex2f(-.72, -.19);
	glVertex2f(-.73, -.2);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);//window set 5 line design
	glColor3ub(230, 184, 0);
	glVertex2f(-.6,-.22);
	glVertex2f(-.75,-.22);

	glEnd();



	glBegin(GL_POLYGON);//window set 5 middle
	glVertex2f(-.65,-.26);
	glVertex2f(-.7,-.26);
	glVertex2f(-.7,-.19);
	glVertex2f(-.65,- .19);
	glEnd();

	glBegin(GL_POLYGON);//window set 5 middle  black
	glColor3ub(255, 204, 0);
	glColor3ub(0, 0, 0);
	glVertex2f(-.66,-.25);
	glVertex2f(-.69,-.25);
	glVertex2f(-.69,-.2);
	glVertex2f(-.66,- .2);
	glEnd();

	glLineWidth(3);
	glBegin(GL_LINES);//window set 5 middle
	glColor3ub(230, 184, 0);
	glVertex2f(-.675,-.26);
	glVertex2f(-.675,-.19);

	glVertex2f(-.65,-.225);
	glVertex2f(-.7,- .225);
	glEnd();

	//window 6

	glBegin(GL_POLYGON);//window set 5 back left
	glColor3ub(255, 204, 0);
	glVertex2f(-.615,-.32);
	glVertex2f(-.64,-.32);
	glVertex2f(-.64, -.28);
	glVertex2f(-.615, -.28);
	glEnd();



	glBegin(GL_POLYGON);//window set 5 back r8
	glColor3ub(255, 204, 0);
	glVertex2f(-.735,-.32);
	glVertex2f(-.71,-.32);
	glVertex2f(-.71, -.28);
	glVertex2f(-.735, -.28);
	glEnd();

	glBegin(GL_POLYGON);//window set 5 back left black
	glColor3ub(0, 0, 0);
	glVertex2f(-.62,-.31);
	glVertex2f(-.635,-.31);
	glVertex2f(-.635, -.285);
	glVertex2f(-.62, -.285);
	glEnd();



	glBegin(GL_POLYGON);//window set 5 back r8 black
	glColor3ub(0, 0, 0);
	glVertex2f(-.73,-.31);
	glVertex2f(-.715,-.31);
	glVertex2f(-.715, -.285);
	glVertex2f(-.73, -.285);
	glEnd();

	glBegin(GL_POLYGON);//window set 5 middle
	glColor3ub(255, 204, 0);
	glVertex2f(-.655,-.315);
	glVertex2f(-.695,-.315);
	glVertex2f(-.695,-.28);
	glVertex2f(-.655,- .28);
	glEnd();

	glBegin(GL_POLYGON);//window set 5 middle black
	glColor3ub(0, 0, 0);
	glVertex2f(-.66,-.31);
	glVertex2f(-.69,-.31);
	glVertex2f(-.69,-.285);
	glVertex2f(-.66,- .285);
	glEnd();

	glBegin(GL_LINES);//window set 5 middle
	glColor3ub(230, 184, 0);
	glVertex2f(-.675,-.28);
	glVertex2f(-.675,-.315);
	glEnd();

	//windows 6
	glBegin(GL_POLYGON);//window set 5 back left
	glColor3ub(255, 204, 0);
	glVertex2f(-.615,-.43);
	glVertex2f(-.64,-.43);
	glVertex2f(-.64, -.36);
	glVertex2f(-.615, -.36);
	glEnd();



	glBegin(GL_POLYGON);//window set 5 back r8
	glColor3ub(255, 204, 0);
	glVertex2f(-.735,-.43);
	glVertex2f(-.71,-.43);
	glVertex2f(-.71, -.36);
	glVertex2f(-.735, -.36);
	glEnd();

	glBegin(GL_POLYGON);//window set 5 back left black
	glColor3ub(0, 0, 0);
	glVertex2f(-.62,-.43);
	glVertex2f(-.635,-.43);
	glVertex2f(-.635, -.365);
	glVertex2f(-.62, -.365);
	glEnd();



	glBegin(GL_POLYGON);//window set 5 back r8 black
	glColor3ub(0, 0, 0);
	glVertex2f(-.73,-.43);
	glVertex2f(-.715,-.43);
	glVertex2f(-.715, -.365);
	glVertex2f(-.73, -.365);
	glEnd();

	glBegin(GL_POLYGON);//window set 6 middle
	glColor3ub(255, 204, 0);
	glVertex2f(-.66,-.43);
	glVertex2f(-.69,-.43);
	glVertex2f(-.69,-.36);
	glVertex2f(-.66,- .36);
	glEnd();

	glBegin(GL_POLYGON);//window set 6 middle black
	glColor3ub(0, 0, 0);
	glVertex2f(-.665,-.43);
	glVertex2f(-.685,-.43);
	glVertex2f(-.685,-.365);
	glVertex2f(-.665,- .365);
	glEnd();

	glBegin(GL_TRIANGLES);//window set 6 middle top
	glColor3ub(255, 204, 0);
	glVertex2f(-.655,- .365);
	glVertex2f(-.695,-.365);
	glVertex2f(-.675,- .335);
	glEnd();

	//-----Left Tower ends-------//


	glFlush();
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint


	glutIdleFunc(Idle);//glutIdleFunc sets the global idle callback to be func so a GLUT program can perform background processing tasks or continuous animation when window system events are not being received.

	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
