#include"stdafx.h"
//#include <glut.h>
//#pragma comment(linker,"/subsystem:\"windows\" /entry:\"mainCRTStartup\"")
//
//GLfloat yRot = 0;
//
////������һ��������ĺ���
//void axis(double length)
//{
//	glColor3f(1.0f, 1.0f, 1.0f);
//	glPushMatrix();
//	glBegin(GL_LINES);
//	glVertex3d(0.0, 0.0, 0.0);
//	glVertex3d(0.0, 0.0, length);
//	glEnd();
//	//����ǰ�������Ƶ�ָ��λ��
//	glTranslated(0.0, 0.0, length - 0.2);
//	glColor3f(1.0, 0.0, 0.0);
//	glutWireCone(0.04, 0.3, 8, 8);
//	glPopMatrix();
//}
//void paint(void)
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//
//	glOrtho(-2.0, 2.0, -2.0, 2.0, -100,100);
//	glPointSize(1);
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//	gluLookAt(1.3, 1.6, 2.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
//
//	//������ϵ
//	axis(2);
//
//	glPushMatrix();
//	glRotated(90.0, 0, 1.0, 0);//��y����������ת90��
//	axis(2);
//	glPopMatrix();
//
//	glPushMatrix();
//	glRotated(-90.0, 1.0, 0.0, 0.0);//��x�Ḻ������ת
//	axis(2);
//	glPopMatrix();
//
//	glPushMatrix();//��ת��������֮�������
//	glRotated(yRot, 0.0, yRot, 0.0);
//	glPushMatrix();
//	glColor3f(0.0f, 0.0f, 1.0f);
//	glTranslated(0.125, 0.125, 0.125);
//	glutWireCube(0.25);
//	glPopMatrix();
//
//	glPushMatrix();
//	glTranslated(1.125, 0.125, 0.125);
//	glutWireTeapot(0.25);
//	glPopMatrix();
//
//	glPushMatrix();
//	glTranslated(0.125, 0.125, 1.125);
//	glutWireSphere(0.25, 12, 8);
//	glPopMatrix();
//
//	glPushMatrix();
//	glTranslated(1.125, 0.125, 1.125);
//	glRotated(-90, 1.0, 0.0, 0.0);
//	glutWireTorus(0.1, 0.25, 12, 12);
//	glPopMatrix();
//
//	glPushMatrix();
//	glTranslated(0.125, 1.125, 0.125);
//	glScaled(0.5*0.25, 0.5*0.25, 0.5*0.25);
//	glRotated(-90, 0.0, 0.0, 1.0);
//	glutWireDodecahedron();
//	glPopMatrix();
//
//	glPushMatrix();
//	glTranslated(0.0, 1.0, 1.0);
//	GLUquadricObj * quadricObj = gluNewQuadric();
//	gluQuadricDrawStyle(quadricObj, GLU_LINE);
//	gluCylinder(quadricObj, 0.2, 0.2, 0.3, 6, 6);
//	glRotated(-90, 0.0, 0.0, 0.0);
//	glPopMatrix();
//
//	glPopMatrix();//����������y����ת
//	glutSwapBuffers();
//}
//void Init()
//{
//	glClearColor(0.8, 0.8, 0.8, 1.0);
//}
//void reshape(int w, int h)
//{
//	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	gluPerspective(60.0, (GLfloat)w / (GLfloat)h, 1.0, 20.0);
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//	gluLookAt(1.3, 1.6, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
//}
//void SpecialKeys(int key, int x, int y)
//{
//	if (key == GLUT_KEY_LEFT)
//		yRot -= 5.0f;
//
//	if (key == GLUT_KEY_RIGHT)
//		yRot += 5.0f;
//
//	if (key> 356.0f)
//		yRot = 0.0f;
//
//	if (key< -1.0f)
//		yRot = 355.0f;
//	glutPostRedisplay();
//}
//int smain(int argv, char *argc[])
//{
//	glutInit(&argv, argc);
//	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
//	glutInitWindowSize(400, 400);
//	glutInitWindowPosition(400, 300);
//	glutCreateWindow("3D�ռ���Ƹ���ϵͳ�Դ�������");
//	Init();
//	glutDisplayFunc(paint);
//	glutReshapeFunc(reshape);
//	glutSpecialFunc(SpecialKeys);
//	glutMainLoop();
//	return 0;
//}






