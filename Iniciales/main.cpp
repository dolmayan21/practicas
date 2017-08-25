//Semestre 2017 - 2
//************************************************************//
//************************************************************//
//************** Alumno (s): Le�n Del Vllar Rub�n Alejandro *********************************//
//*************											******//
//*************											******//
//************************************************************//
#include "Main.h"
void InitGL(GLvoid)     // Inicializamos parametros
{
	//glShadeModel(GL_FLAT);							// Habilitamos Smooth Shading
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo
														//glClearDepth(1.0f);									// Configuramos Depth Buffer
														//glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
														//glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar


}

void display(void)   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();									// Reinicializamos la actual matriz Modelview

														//Poner aqui codigo ha dibujar

	glPointSize(1.0);
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);	// AGREGAR COLORES				

	glVertex3f(2.0,1.0,-1.2);					///		LETRA "A"
	glVertex3f(6.0,1.0,-1.2);
	glVertex3f(6.0, 10.0, -1.2);
	glEnd();

	glPointSize(1.0);
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);	// AGREGAR COLORES

	glVertex3f(6.0, 3.0, -1.2);
	glVertex3f(7.0, 3.0, -1.2);
	glVertex3f(7.0, 5.5, -1.2);
	glVertex3f(6.0, 5.5, -1.2);
	glEnd();

	glPointSize(1.0);
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);


	glVertex3f(6.0, 8.0, -1.2);
	glVertex3f(7.0, 8.0, -1.2);
	glVertex3f(7.0, 10.0, -1.2);
	glVertex3f(6.0, 10.0, -1.2);

	glEnd();

	glPointSize(1.0);
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 7.5);	// AGREGAR COLORES

	glVertex3f(7.0, 1.0, -1.2);
	glVertex3f(11.0, 1.0, -1.2);
	glVertex3f(7.0, 10.0, -1.2);
	glEnd();

	glPointSize(1.0);						///		LETRA L
	glBegin(GL_LINE_LOOP);
	glColor3f(1.0, 1.0, 1.0);	// AGREGAR COLORES

	glVertex3f(12.0, 1.0, -1.2);
	glVertex3f(18.0, 1.0, -1.2);
	glVertex3f(18.0, 4.0, -1.2);
	glVertex3f(14.0, 4.0, -1.2);
	glVertex3f(14.0, 10.0, -1.2);
	glVertex3f(12.0, 10.0, -1.2);
	glEnd();

	
	glPointSize(1.0);				/// LETRA V
	glBegin(GL_POLYGON);
	glColor3f(1.0, .0, 1.0);	// AGREGAR COLORES
	glVertex3f(23.0, 1.0, -1.2);
	glVertex3f(23.0, 10.0, -1.2);
	glVertex3f(20.0, 10.0, -1.2);
	glEnd();
	
	glPointSize(1.0);
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 1.0);	// AGREGAR COLORES
	glVertex3f(23.0, 1.0, -1.2);
	glVertex3f(25.0, 1.0, -1.2);
	glVertex3f(25.0, 3.0, -1.2);
	glVertex3f(23.0, 3.0, -1.2);
	glEnd();

	glPointSize(1.0);				
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 1.0);	// AGREGAR COLORES
	glVertex3f(25.0, 1.0, -1.2);
	glVertex3f(28.0, 10.0, -1.2);
	glVertex3f(25.0, 10.0, -1.2);
	glEnd();

	glPointSize(1.0);				///		ESTRELLA
	glBegin(GL_POLYGON);
	glColor3f(0.3, 0.0, 0.0);
	///			 x		y	  z
	glVertex3f(0.0, -20.0, -1.2);
	glVertex3f(20.0, -20.0, -1.2);
	glVertex3f(10.0, -30.0, -1.2);
	glEnd();

	glPointSize(1.0);				///		triangulo arriba ESTRELLA
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	///			 x		y	  z
	glVertex3f(6.5, -20.0, -1.2);
	glVertex3f(13.5, -20.0, -1.2);
	glVertex3f(10.0, -10.0, -1.2);
	glEnd();

	glPointSize(1.0);			///		TRIANGULO IZQUIERDA
	glBegin(GL_POLYGON);
	glColor3f(0.5,0.0,0.0);
	///			 x		y	  z
	glVertex3f(10.0, -30.0, -1.2);
	glVertex3f(0.0, -40.0, -1.2);
	glVertex3f(5.0, -25.0, -1.2);
	glEnd();

	glPointSize(1.0);			///		TRIANGULO DERECHA
	glBegin(GL_POLYGON);
	glColor3f(0.5, 0.0, 0.0);
	///			 x		y	  z
	glVertex3f(10.0, -30.0, -1.2);
	glVertex3f(20.0, -40.0, -1.2);
	glVertex3f(15.0, -25.0, -1.2);
	glEnd();



	glFlush();
}

void reshape(int width, int height)   // Creamos funcion Reshape
{
	if (height == 0)										// Prevenir division entre cero
	{
		height = 1;
	}

	glViewport(0, 0, width, height);

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Ortogonal
	glOrtho(-50, 50, -50, 50, 0.1, 2);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	glLoadIdentity();
}

// Termina la ejecucion del programa cuando se presiona ESC
void keyboard(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 27: exit(0);
		break;
	}
	glutPostRedisplay();
}

int main(int argc, char** argv)   // Main Function
{
	glutInit(&argc, argv); // Inicializamos OpenGL
	glutInitDisplayMode(GLUT_RGBA | GLUT_SINGLE); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
	glutInitWindowSize(500, 500);	// Tama�o de la Ventana
	glutInitWindowPosition(0, 0);	//Posicion de la Ventana
	glutCreateWindow("Practica 2"); // Nombre de la Ventana
	InitGL();						// Parametros iniciales de la aplicacion
	glutDisplayFunc(display);  //Indicamos a Glut funci�n de dibujo
	glutReshapeFunc(reshape);	//Indicamos a Glut funci�n en caso de cambio de tamano
	glutKeyboardFunc(keyboard);	//Indicamos a Glut funci�n de manejo de teclado
	glutMainLoop();          // 

	return 0;
}