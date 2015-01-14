#include<GL/glut.h>
#include <stdlib.h>
#include <stdio.h>

/* GLUT callback Handlers */

int flag = 0;

void RenderString(float x, float y, void *font, const char* string)
{  
	if(flag==0){
		char *c;
		glRasterPos2f(x, y);
		for (c=string; *c != '\0'; c++) 
		{
			if(*c == '\n')
			{
				y = y - 0.1f;
				glRasterPos2f(x,y);
				continue;
			}
			glutBitmapCharacter(font, *c);
		}
	}
}

void RenderError(int x, int y, void *font, const char* string)
{
	char *c;
	glRasterPos2f(x, y);
	for (c=string; *c != '\0'; c++)
	{
		glutBitmapCharacter(font, *c);
	}
}

static void resize(int width, int height)
{
	const float ar = (float) width / (float) height;

	glViewport(0, 0, width, height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glFrustum(-ar, ar, -1.0, 1.0, 2.0, 100.0);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity() ;
}

int draw = 0;
char str[100000];
float u = -1.0f,v = 0.5f;
static void display(void)
{

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);    
	glColor3f(1,0,0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	if(draw == 1)
	{
		RenderString(u,v, GLUT_BITMAP_TIMES_ROMAN_24,str);
		glColor3f(1,1,1);
		glBegin(GL_POLYGON);
		{
			glVertex2f(0,-0.3f);
			glVertex2f(0.2f,-0.3f);
			glVertex2f(0.2f,-0.4f);
			glVertex2f(0,-0.4f);
		}
		glEnd();
		glColor3f(1,0,0);
		RenderString(0,-0.4f, GLUT_BITMAP_TIMES_ROMAN_24,"Check");
		glColor3f(1,1,0);
		RenderString(-0.2,0.9f, GLUT_BITMAP_TIMES_ROMAN_24,"Parser Pack");
		RenderString(-0.2,0.8f, GLUT_BITMAP_TIMES_ROMAN_24,"---------");
		glColor3f(0,1,0);
		glBegin(GL_LINE);
		glVertex2f(-0.8f,0.7f);
		glVertex2f(0.8f,0.7f);
		glEnd();
	}
	glutSwapBuffers();
}


void mouse_callback(int button, int state,int x, int y)
{
	if(draw == 1 && button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if(x > 320 && x < 385 &&  y > 310 && y < 340)
		{
			FILE *f;
			f = fopen("program","w");
			fprintf(f,"%s",str);
			fclose(f);
			system("./main program > output");
			f = fopen("output","r");
			int xpos=0,ypos=y;
			while(fgets(str,100000,f) != NULL)
			{
				RenderError(xpos, ypos,GLUT_BITMAP_TIMES_ROMAN_24,str);
				ypos += 50;
			}
			fclose(f);
		}
	}
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		draw = 1;
	}

	glutPostRedisplay();
}

void kb(unsigned char key,int x, int y)
{
	static cnt = 0;
	if(key == '\b')
	{
		cnt--;
		str[cnt] = '\0';
	}
	else
	{
		str[cnt] = key;
		str[cnt + 1] = '\0';
		cnt++;
	}
	glutPostRedisplay();
}

/* Program entry point */

	int 
main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(640,480);
	glutInitWindowPosition(10,10);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

	glutCreateWindow("Grammar Checker");

	glutReshapeFunc(resize);
	glutDisplayFunc(display);
	glutKeyboardFunc(kb);
	glutMouseFunc(mouse_callback);
	glClearColor(0,0,0,1);


	glutMainLoop();

	return 0;
}

