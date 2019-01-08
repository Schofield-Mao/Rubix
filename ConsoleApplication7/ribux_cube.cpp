///*
//encode the cube
//- ROTATION METHOD1
//- ROTATION METHOD2
//- ROTATION METHOD3
//| ROTATION METHOD4 | ROTATION METHOD 5 | ROTATION METHOD 6
//orange up, white front
//FIRST LAYER:
//BOW : 0
//OW:1
//OWR:2
//BO:3
//O:4
//OR:5
//OYB:6
//OY:7
//OYR:8
//
//SECONDE LAYER:
//BW:9;
//W:10
//WR:11
//B:12
//CENTER:13
//R:14
//YB:15
//Y:16
//RY:17
//
//
//THIRD LAYER:
//BWG:18
//WG:19
//WGR:20
//BG:21
//G:22
//RG:23
//YBG:24
//YG:25
//RYG:26
//
//*/
#include "stdafx.h"
//#include <glut.h>
//#include <iostream>
//#include<queue>
//using namespace std;
//
//class cube {
//public:
//	cube() {
//		y_dir[0] = 0;
//		y_dir[1] = 1;
//		y_dir[2] = 0;
//		z_dir[0] = 0;
//		z_dir[1] = 0;
//		z_dir[2] = 1;
//		x_dir[0] = 1;
//		x_dir[1] = 0;
//		x_dir[2] = 0;
//	}
//
//	int x_dir[3] = { 1, 0, 0 };
//	int y_dir[3] = { 0, 1, 0 };
//	int z_dir[3] = { 0, 0, 1 };
//	void rotate_x() {
//		int temp[3];
//		temp[0] = z_dir[0];
//		temp[1] = z_dir[1];
//		temp[2] = z_dir[2];
//		z_dir[0] = y_dir[0];
//		z_dir[1] = y_dir[1];
//		z_dir[2] = y_dir[2];
//		y_dir[0] = -temp[0];
//		y_dir[1] = -temp[1];
//		y_dir[2] = -temp[2];
//	}
//
//	void rotate_y() {
//		int temp[3];
//		temp[0] = z_dir[0];
//		temp[1] = z_dir[1];
//		temp[2] = z_dir[2];
//		z_dir[0] = -x_dir[0];
//		z_dir[1] = -x_dir[1];
//		z_dir[2] = -x_dir[2];
//		x_dir[0] = temp[0];
//		x_dir[1] = temp[1];
//		x_dir[2] = temp[2];
//	}
//
//	void rotate_z(int degreen) {
//		int temp[3];
//		temp[0] = x_dir[0];
//		temp[1] = x_dir[1];
//		temp[2] = x_dir[2];
//		x_dir[0] = -y_dir[0];
//		x_dir[1] = -y_dir[1];
//		x_dir[2] = -y_dir[2];
//		y_dir[0] = temp[0];
//		y_dir[1] = temp[1];
//		y_dir[2] = temp[2];
//
//	}
//};
//cube cube_set[27];
//bool updateX[27], updateY[27], updateZ[27];
//int pos[27] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22 ,23, 24, 25, 26 };
//
////color
//GLfloat blue[3] = { 0,0,255 };
//GLfloat red[3] = { 255,0,0 };
//GLfloat orange[3] = { 1,0.5f,0 };
//GLfloat green[3] = { 0,255,0 };
//GLfloat yellow[3] = { 255,255,0 };
//GLfloat white[3] = { 255,255,255 };
//GLfloat black[3] = { 0,0,0 };
//queue<int> Q;
//float rquad = 45;
//float xRot = 45;
//float yRot = 45;
//
//
//
//float d = 0.9;
//GLfloat points1[8][3] = { { d,d,-d },{ -d,d,-d },{ -d,d,d },{ d,d,d },{ d,-d,d },{ -d,-d,d },{ -d,-d,-d },{ d,-d,-d } };
//
////立方体顶点序列号
//int vertice1[6][4] = { { 0,1,2,3 },{ 4,5,6,7 },{ 3,2,5,4 },{ 7,6,1,0 },{ 2,1,6,5 },{ 0,3,4,7 } };
//
//int theta_x[27];
//int theta_y[27];
//int theta_z[27];
//
//int Y_idx[3][9] = { { 0,1,2,3,4,5,6,7,8 },{ 9,10,11,12,13,14,15,16,17 },{ 18,19,20,21,22,23,24,25,26 } };
//int X_idx[3][9] = { { 0,3,6,9,12,15,18,21,24 },{ 1,4,7,10,13,16,19,22,25 },{ 2,5,8,11,14,17,20,23,26 } };
//int Z_idx[3][9] = { { 0,1,2,9,10,11,18,19,20 },{ 3,4,5,12,13,14,21,22,23 },{ 6,7,8,15,16,17,24,25,26 } };
//
//void rotate_methodY1() {
//	int temp[9];
//	temp[0] = pos[2];
//	temp[1] = pos[5];
//	temp[2] = pos[8];
//	temp[3] = pos[1];
//	temp[4] = pos[4];
//	temp[5] = pos[7];
//	temp[6] = pos[0];
//	temp[7] = pos[3];
//	temp[8] = pos[6];;
//
//	pos[0] = temp[0];
//	pos[1] = temp[1];
//	pos[2] = temp[2];
//	pos[3] = temp[3];
//	pos[4] = temp[4];
//	pos[5] = temp[5];
//	pos[6] = temp[6];
//	pos[7] = temp[7];
//	pos[8] = temp[8];
//
//
//	updateY[pos[0]] = true;
//	updateY[pos[1]] = true;
//	updateY[pos[2]] = true;
//	updateY[pos[3]] = true;
//	updateY[pos[4]] = true;
//	updateY[pos[5]] = true;
//	updateY[pos[6]] = true;
//	updateY[pos[7]] = true;
//	updateY[pos[8]] = true;
//
//}
//
//void rotate_method2() {
//	int temp[9];
//	temp[0] = pos[11];
//	temp[1] = pos[14];
//	temp[2] = pos[17];
//	temp[3] = pos[10];
//	temp[4] = pos[13];
//	temp[5] = pos[16];
//	temp[6] = pos[9];
//	temp[7] = pos[12];
//	temp[8] = pos[15];;
//	for (int i = 0;i < 9;i++) {
//		pos[i + 9] = temp[i];
//	}
//}
//
//void rotate_method3() {
//	int temp[9];
//	temp[0] = pos[20];
//	temp[1] = pos[23];
//	temp[2] = pos[26];
//	temp[3] = pos[19];
//	temp[4] = pos[22];
//	temp[5] = pos[25];
//	temp[6] = pos[18];
//	temp[7] = pos[21];
//	temp[8] = pos[24];;
//	for (int i = 0;i < 9;i++) {
//		pos[i + 18] = temp[i];
//	}
//}
//
//void rotate_methodX1() {
//	int temp[9];
//	temp[0] = pos[6];
//	temp[1] = pos[15];
//	temp[2] = pos[24];
//	temp[3] = pos[3];
//	temp[4] = pos[12];
//	temp[5] = pos[21];
//	temp[6] = pos[0];
//	temp[7] = pos[9];
//	temp[8] = pos[18];
//
//	pos[0] = temp[0];
//	pos[3] = temp[1];
//	pos[6] = temp[2];
//	pos[9] = temp[3];
//	pos[12] = temp[4];
//	pos[15] = temp[5];
//	pos[18] = temp[6];
//	pos[21] = temp[7];
//	pos[24] = temp[8];
//
//
//	updateX[pos[0]] = true;
//	updateX[pos[3]] = true;
//	updateX[pos[6]] = true;
//	updateX[pos[9]] = true;
//	updateX[pos[12]] = true;
//	updateX[pos[15]] = true;
//	updateX[pos[18]] = true;
//	updateX[pos[21]] = true;
//	updateX[pos[24]] = true;
//}
//
//void rotate_method5() {
//	int temp[9];
//	temp[0] = pos[7];
//	temp[1] = pos[16];
//	temp[2] = pos[25];
//	temp[3] = pos[4];
//	temp[4] = pos[13];
//	temp[5] = pos[22];
//	temp[6] = pos[1];
//	temp[7] = pos[10];
//	temp[8] = pos[19];
//
//	temp[0] = pos[1];
//	temp[1] = pos[4];
//	temp[2] = pos[8];
//	temp[3] = pos[10];
//	temp[4] = pos[13];
//	temp[5] = pos[16];
//	temp[6] = pos[19];
//	temp[7] = pos[22];
//	temp[8] = pos[25];
//
//}
//
//void rotate_method6() {
//	int temp[9];
//	temp[0] = pos[8];
//	temp[1] = pos[17];
//	temp[2] = pos[26];
//	temp[3] = pos[5];
//	temp[4] = pos[14];
//	temp[5] = pos[23];
//	temp[6] = pos[2];
//	temp[7] = pos[11];
//	temp[8] = pos[20];
//
//	temp[0] = pos[2];
//	temp[1] = pos[5];
//	temp[2] = pos[9];
//	temp[3] = pos[11];
//	temp[4] = pos[14];
//	temp[5] = pos[17];
//	temp[6] = pos[20];
//	temp[7] = pos[23];
//	temp[8] = pos[26];
//
//}
//
//void InitGl(GLvoid)
//{
//
//
//	glShadeModel(GL_SMOOTH);
//	glClearColor(1.0f, 0.5f, 1.0f, 1.0f);
//	glClearDepth(1.0f);
//
//	glEnable(GL_DEPTH_TEST);
//	glDepthFunc(GL_LEQUAL);
//	glEnable(GL_COLOR_MATERIAL);
//
//	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
//
//	for (int i = 0;i < 27;i++) {
//		theta_x[i] = 0;
//		theta_y[i] = 0;
//		theta_z[i] = 0;
//		cube_set[i] = cube();
//		updateX[i] = 0;
//		updateY[i] = 0;
//		updateZ[i] = 0;
//	}
//	/*for (int i = 0;i < 9;i++)
//	theta_x[i] = 90;
//	*/
//	//theta_y[6] = 90;
//	//theta_y[15] = 90;
//	//theta_y[24] = 90;
//	//theta_x[6] = 90;
//	//theta_x[15] = 90;
//	//theta_x[24] = 90;
//}
//
//
///*
//create cubic parm:color1,color2,color3
//*/
//void CreateCube_coner(GLfloat *color1, GLfloat *color2, GLfloat *color3, int face1, int face2, int face3)
//{
//	glBegin(GL_QUADS);
//	for (int i = 0; i<6; i++)
//	{
//		if (i == face1) {
//			glColor3fv(color1);
//		}
//		else if (i == face2) {
//			glColor3fv(color2);
//		}
//		else if (i == face3) {
//			glColor3fv(color3);
//		}
//		else {
//			glColor3fv(black);
//		}
//		for (int j = 0; j<4; j++)
//		{
//			int VtxId = vertice1[i][j];
//			glVertex3fv(points1[VtxId]);
//		}
//	}
//	glEnd();
//}
//
///*
//create cubic parm:color1,color2
//*/
//void CreateCube_edge(GLfloat *color1, GLfloat *color2, int face1, int face2)
//{
//	glBegin(GL_QUADS);
//	for (int i = 0; i<6; i++)
//	{
//		if (i == face1) {
//			glColor3fv(color1);
//		}
//		else if (i == face2) {
//			glColor3fv(color2);
//		}
//		else {
//			glColor3fv(black);
//		}
//		for (int j = 0; j<4; j++)
//		{
//			int VtxId = vertice1[i][j];
//			glVertex3fv(points1[VtxId]);
//		}
//	}
//	glEnd();
//}
//
///*
//create cubic parm:color1,color2
//*/
//void CreateCube_face(GLfloat *color1, int face)
//{
//	glBegin(GL_QUADS);
//	for (int i = 0; i<6; i++)
//	{
//		if (i == face) {
//			glColor3fv(color1);
//		}
//		else {
//			glColor3fv(black);
//		}
//		for (int j = 0; j<4; j++)
//		{
//			int VtxId = vertice1[i][j];
//			glVertex3fv(points1[VtxId]);
//		}
//	}
//	glEnd();
//}
//
///*
//create magic cubic
//*/
//void CreateMagicCube()
//{
//
//	glScaled(0.5, 0.5, 0.5);
//
//	glPushMatrix();
//	CreateCube_coner(orange, yellow, red, 1, 2, 5);
//	glPopMatrix();
//
//	glPushMatrix();
//	glTranslatef(-4.0f, 0, 0);
//	CreateCube_coner(orange, yellow, blue, 1, 2, 4);
//	glPopMatrix();
//
//	glPushMatrix();
//	glTranslatef(0, 4, 0);
//	CreateCube_coner(green, yellow, red, 0, 2, 5);
//	glPopMatrix();
//
//	glPushMatrix();
//	glTranslatef(-4, 4, 0);
//	CreateCube_coner(green, yellow, blue, 0, 2, 4);
//	glPopMatrix();
//
//	glPushMatrix();
//	glTranslatef(0, 0, -4);
//	CreateCube_coner(orange, white, red, 1, 3, 5);
//	glPopMatrix();
//
//	glPushMatrix();
//	glTranslatef(0, 4, -4);
//	CreateCube_coner(green, white, red, 0, 3, 5);
//	glPopMatrix();
//
//	glPushMatrix();
//	glTranslatef(-4, 4, -4);
//	CreateCube_coner(green, white, blue, 0, 3, 4);
//	glPopMatrix();
//
//	glPushMatrix();
//	glTranslatef(-4, 0, -4);
//	CreateCube_coner(orange, white, blue, 1, 3, 4);
//	glPopMatrix();
//
//	glPushMatrix();
//	glTranslatef(-2, 0, 0);
//	CreateCube_edge(orange, yellow, 1, 2);
//	glPopMatrix();
//
//	glPushMatrix();
//	glTranslatef(0, 2, 0);
//	CreateCube_edge(red, yellow, 5, 2);
//	glPopMatrix();
//
//	glPushMatrix();
//	glTranslatef(-2, 4, 0);
//	CreateCube_edge(green, yellow, 0, 2);
//	glPopMatrix();
//
//	glPushMatrix();
//	glTranslatef(-4, 2, 0);
//	CreateCube_edge(blue, yellow, 4, 2);
//	glPopMatrix();
//
//	glPushMatrix();
//	glTranslatef(0, 2, -4);
//	CreateCube_edge(red, white, 5, 3);
//	glPopMatrix();
//
//	glPushMatrix();
//	glTranslatef(-2, 0, -4);
//	CreateCube_edge(orange, white, 1, 3);
//	glPopMatrix();
//
//	glPushMatrix();
//	glTranslatef(-2, 4, -4);
//	CreateCube_edge(green, white, 0, 3);
//	glPopMatrix();
//
//	glPushMatrix();
//	glTranslatef(-4, 2, -4);
//	CreateCube_edge(blue, white, 4, 3);
//	glPopMatrix();
//
//	glPushMatrix();
//	glTranslatef(0, 4, -2);
//	CreateCube_edge(red, green, 5, 0);
//	glPopMatrix();
//
//	glPushMatrix();
//	glTranslatef(-4, 4, -2);
//	CreateCube_edge(green, blue, 0, 4);
//	glPopMatrix();
//
//	glPushMatrix();
//	glTranslatef(-4, 0, -2);
//	CreateCube_edge(orange, blue, 1, 4);
//	glPopMatrix();
//
//	glPushMatrix();
//	glTranslatef(0, 0, -2);
//	CreateCube_edge(red, orange, 5, 1);
//	glPopMatrix();
//
//	glPushMatrix();
//	glTranslatef(-2, 0, -2);
//	CreateCube_face(orange, 1);
//	glPopMatrix();
//
//	glPushMatrix();
//	glTranslatef(-2, 2, 0);
//	CreateCube_face(yellow, 2);
//	glPopMatrix();
//
//	glPushMatrix();
//	glTranslatef(-2, 4, -2);
//	CreateCube_face(green, 0);
//	glPopMatrix();
//
//	glPushMatrix();
//	glTranslatef(-4, 2, -2);
//	CreateCube_face(blue, 4);
//	glPopMatrix();
//
//	glPushMatrix();
//	glTranslatef(-2, 2, -4);
//	CreateCube_face(white, 3);
//	glPopMatrix();
//
//	glPushMatrix();
//	glTranslatef(0, 2, -2);
//	CreateCube_face(red, 5);
//	glPopMatrix();
//
//}
//
//
//
//void rotate(int thetax[], int thetay[], int thetaz[], int cube_no) {
//	int X1 = 1, X2 = 0, X3 = 0;
//	int Y1 = 0, Y2 = 1, Y3 = 0;
//	int Z1 = 0, Z2 = 0, Z3 = 1;
//	float xf, yf, zf = 0;
//	xf = -2;yf = 2;zf = -2;
//	queue<int> temp = Q;
//
//	while (!temp.empty()) {
//
//		glTranslatef(xf, yf, zf);
//		int T = temp.front();
//		temp.pop();
//
//		if (T == 1) {
//			X1 = cube_set[cube_no].x_dir[0];
//			X2 = cube_set[cube_no].x_dir[1];
//			X3 = cube_set[cube_no].x_dir[2];
//
//			glRotatef(thetax[cube_no], X1, X2, X3);
//
//
//		}
//
//		if (T == 2) {
//			Y1 = cube_set[cube_no].y_dir[0];
//			Y2 = cube_set[cube_no].y_dir[1];
//			Y3 = cube_set[cube_no].y_dir[2];
//
//			glRotatef(thetay[cube_no], Y1, Y2, Y3);
//
//
//		}
//
//		if (T == 3) {
//			Z1 = cube_set[cube_no].z_dir[0];
//			Z2 = cube_set[cube_no].z_dir[1];
//			Z3 = cube_set[cube_no].z_dir[2];
//
//			glRotatef(thetaz[cube_no], Z1, Z2, Z3);
//		}
//		glTranslatef(-xf, -yf, -zf);
//	}
//
//}
//
//void axis(double length, float* color)
//{
//	glPushMatrix();
//	glBegin(GL_LINES);
//	glColor3fv(color);
//	glVertex3d(0.0, 0.0, 0.0);
//	glVertex3d(0.0, 0.0, length);
//	glEnd();
//	//将当前操作点移到指定位置
//	glTranslated(0.0, 0.0, length - 0.2);
//	glColor3fv(color);
//	glutWireCone(0.04, 0.3, 8, 8);
//	glPopMatrix();
//}
//
//void cube_Rotate(int theta_x[], int theta_y[], int theta_z[], int cube_no) {
//
//
//	switch (cube_no)
//	{
//	case 0:
//		glPushMatrix();
//		rotate(theta_x, theta_y, theta_z, cube_no);
//		glTranslatef(-4, 0, -4);
//		CreateCube_coner(orange, white, blue, 1, 3, 4);
//		glPopMatrix();
//		break;
//
//	case 1:
//		glPushMatrix();
//		rotate(theta_x, theta_y, theta_z, cube_no);
//		glTranslatef(-2, 0, -4);
//		CreateCube_edge(orange, white, 1, 3);
//		glPopMatrix();
//		break;
//
//	case 2:
//		glPushMatrix();
//		rotate(theta_x, theta_y, theta_z, cube_no);
//		glTranslatef(0, 0, -4);
//		CreateCube_coner(orange, white, red, 1, 3, 5);
//		glPopMatrix();
//		break;
//
//	case 3:
//		glPushMatrix();
//		rotate(theta_x, theta_y, theta_z, cube_no);
//		glTranslatef(-4, 0, -2);
//		CreateCube_edge(orange, blue, 1, 4);
//		glPopMatrix();
//		break;
//
//	case 4:
//		glPushMatrix();
//		rotate(theta_x, theta_y, theta_z, cube_no);
//		glTranslatef(-2, 0, -2);
//		CreateCube_face(orange, 1);
//		glPopMatrix();
//		break;
//
//	case 5:
//		glPushMatrix();
//		rotate(theta_x, theta_y, theta_z, cube_no);
//		glTranslatef(0, 0, -2);
//		CreateCube_edge(red, orange, 5, 1);
//		glPopMatrix();
//		break;
//
//	case 6:
//		glPushMatrix();
//		rotate(theta_x, theta_y, theta_z, cube_no);
//		glTranslatef(-4.0f, 0, 0);
//		CreateCube_coner(orange, yellow, blue, 1, 2, 4);
//		glPopMatrix();
//		break;
//
//	case 7:
//		glPushMatrix();
//		rotate(theta_x, theta_y, theta_z, cube_no);
//		glTranslatef(-2, 0, 0);
//		CreateCube_edge(orange, yellow, 1, 2);
//		glPopMatrix();
//		break;
//
//	case 8:
//		glPushMatrix();
//		rotate(theta_x, theta_y, theta_z, cube_no);
//		CreateCube_coner(orange, yellow, red, 1, 2, 5);
//		glPopMatrix();
//		break;
//
//	case 9:
//		glPushMatrix();
//		rotate(theta_x, theta_y, theta_z, cube_no);
//		glTranslatef(-4, 2, -4);
//		CreateCube_edge(blue, white, 4, 3);
//		glPopMatrix();
//		break;
//
//	case 10:
//		glPushMatrix();
//		rotate(theta_x, theta_y, theta_z, cube_no);
//		glTranslatef(-2, 2, -4);
//		CreateCube_face(white, 3);
//		glPopMatrix();
//		break;
//
//	case 11:
//		glPushMatrix();
//		rotate(theta_x, theta_y, theta_z, cube_no);
//		glTranslatef(0, 2, -4);
//		CreateCube_edge(red, white, 5, 3);
//		glPopMatrix();
//		break;
//
//	case 12:
//		glPushMatrix();
//		rotate(theta_x, theta_y, theta_z, cube_no);
//		glTranslatef(-4, 2, -2);
//		CreateCube_face(blue, 4);
//		glPopMatrix();
//		break;
//
//	case 13:
//
//		break;
//
//	case 14:
//		glPushMatrix();
//		rotate(theta_x, theta_y, theta_z, cube_no);
//		glTranslatef(0, 2, -2);
//		CreateCube_face(red, 5);
//		glPopMatrix();
//		break;
//
//
//	case 15:
//		glPushMatrix();
//		rotate(theta_x, theta_y, theta_z, cube_no);
//		glTranslatef(-4, 2, 0);
//		CreateCube_edge(blue, yellow, 4, 2);
//		glPopMatrix();
//
//		break;
//
//
//	case 16:
//		glPushMatrix();
//		rotate(theta_x, theta_y, theta_z, cube_no);
//		glTranslatef(-2, 2, 0);
//		CreateCube_face(yellow, 2);
//		glPopMatrix();
//		break;
//
//
//	case 17:
//		glPushMatrix();
//		rotate(theta_x, theta_y, theta_z, cube_no);
//		glTranslatef(0, 2, 0);
//		CreateCube_edge(red, yellow, 5, 2);
//		glPopMatrix();
//		break;
//
//
//	case 18:
//		glPushMatrix();
//		rotate(theta_x, theta_y, theta_z, cube_no);
//		glTranslatef(-4, 4, -4);
//		CreateCube_coner(green, white, blue, 0, 3, 4);
//		glPopMatrix();
//		break;
//
//
//	case 19:
//		glPushMatrix();
//		rotate(theta_x, theta_y, theta_z, cube_no);
//		glTranslatef(-2, 4, -4);
//		CreateCube_edge(green, white, 0, 3);
//		glPopMatrix();
//		break;
//
//	case 20:
//		glPushMatrix();
//		rotate(theta_x, theta_y, theta_z, cube_no);
//		glTranslatef(0, 4, -4);
//		CreateCube_coner(green, white, red, 0, 3, 5);
//		glPopMatrix();
//		break;
//
//	case 21:
//		glPushMatrix();
//		rotate(theta_x, theta_y, theta_z, cube_no);
//		glTranslatef(-4, 4, -2);
//		CreateCube_edge(green, blue, 0, 4);
//		glPopMatrix();
//
//		break;
//
//	case 22:
//		glPushMatrix();
//		rotate(theta_x, theta_y, theta_z, cube_no);
//		glTranslatef(-2, 4, -2);
//		CreateCube_face(green, 0);
//		glPopMatrix();
//
//		break;
//
//	case 23:
//		glPushMatrix();
//		rotate(theta_x, theta_y, theta_z, cube_no);
//		glTranslatef(0, 4, -2);
//		CreateCube_edge(red, green, 5, 0);
//		glPopMatrix();
//
//		break;
//	case 24:
//
//		glPushMatrix();
//		rotate(theta_x, theta_y, theta_z, cube_no);
//		glTranslatef(-4, 4, 0);
//		CreateCube_coner(green, yellow, blue, 0, 2, 4);
//		glPopMatrix();
//		break;
//
//	case 25:
//		glPushMatrix();
//		rotate(theta_x, theta_y, theta_z, cube_no);
//		glTranslatef(-2, 4, 0);
//		CreateCube_edge(green, yellow, 0, 2);
//		glPopMatrix();
//		break;
//
//	case 26:
//		glPushMatrix();
//		rotate(theta_x, theta_y, theta_z, cube_no);
//		glTranslatef(0, 4, 0);
//		CreateCube_coner(green, yellow, red, 0, 2, 5);
//		glPopMatrix();
//		break;
//
//	default:
//		break;
//	}
//
//}
//
//void display(void)
//{
//	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//	glLoadIdentity();
//	glPushMatrix();
//
//
//	glLoadIdentity();//将矩阵归一化回原样
//
//	glTranslatef(0.0f, 0.0f, -6.0f);//平移至右侧
//	glScaled(0.5, 0.5, 0.5);
//	glScaled(0.5, 0.5, 0.5);
//	glRotatef(yRot, 0.0, 1, 0.0);
//	glRotatef(xRot, 1, 0, 0.0);
//	//CreateMagicCube();
//	//画坐标系
//
//
//	glPushMatrix();
//	glTranslated(-2, 2, -2);
//	//z axi
//	axis(10, black);
//	glPopMatrix();
//
//
//	glPushMatrix();
//	glTranslated(-2, 2, -2);
//	//x axi
//	glRotated(90.0, 0, 1.0, 0);//绕y轴正方向旋转90度
//	axis(10, white);
//	glPopMatrix();
//
//	glPushMatrix();
//	//y axi
//	glTranslated(-2, 2, -2);
//	glRotated(-90.0, 1.0, 0.0, 0.0);//绕x轴负方向旋转
//	axis(10, yellow);
//	glPopMatrix();
//
//	for (int i = 0;i < 27;i++) {
//		cube_Rotate(theta_x, theta_y, theta_z, i);
//		updateX[i] = false;
//		updateY[i] = false;
//		updateZ[i] = false;
//	}
//
//	glPopMatrix();
//	glutSwapBuffers();
//}
//
//void reshape(int width, int height)
//{
//	if (height == 0)
//	{
//		height = 1;
//	}
//
//	glViewport(0, 0, width, height);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//
//	gluPerspective(45.0f, (GLfloat)width / (GLfloat)height, 0.1f, 100.0f);
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//}
//
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
//
//	if (key == GLUT_KEY_UP)
//		xRot -= 5.0f;
//
//	if (key == GLUT_KEY_DOWN)
//		xRot += 5.0f;
//
//	if (key == GLUT_KEY_F7) {
//		for (int i = 0;i < 9;i++) {
//			theta_x[pos[i]] += 90;
//			theta_y[pos[i]] += 90;
//			theta_z[pos[i]] += 90;
//			cout << "F2" << endl;
//		}
//	}
//
//	if (key> 356.0f)
//		xRot = 0.0f;
//
//	if (key< -1.0f)
//		xRot = 355.0f;
//	glutPostRedisplay();
//
//}
//
//void myKey(unsigned char key, int x, int y) {
//
//
//
//	if (key == 'q' || key == 'Q') {
//		for (int i = 0;i < 9;i++) {
//			theta_x[pos[X_idx[0][i]]] += 90;
//			cube_set[pos[X_idx[0][i]]].rotate_x();
//		}
//		rotate_methodX1();
//		Q.push(1);
//	}
//
//	if (key == 'w' || key == 'W') {
//		for (int i = 0;i < 9;i++) {
//			theta_x[pos[X_idx[1][i]]] += 90;
//
//		}
//
//	}
//
//	if (key == 'e' || key == 'E') {
//		for (int i = 0;i < 9;i++) {
//			theta_x[pos[X_idx[2][i]]] += 90;
//
//		}
//
//	}
//
//	if (key == 'a' || key == 'A') {
//		for (int i = 0;i < 9;i++) {
//			theta_y[pos[Y_idx[0][i]]] += 90;
//			cube_set[pos[Y_idx[0][i]]].rotate_y();
//			updateY[pos[Y_idx[0][i]]] = true;
//		}
//		rotate_methodY1();
//		Q.push(2);
//	}
//
//	if (key == 's' || key == 'S') {
//		for (int i = 0;i < 9;i++) {
//			theta_y[pos[Y_idx[1][i]]] += 90;
//
//		}
//
//	}
//
//	if (key == 'd' || key == 'D') {
//		for (int i = 0;i < 9;i++) {
//			theta_y[pos[Y_idx[2][i]]] += 90;
//
//		}
//
//	}
//
//	if (key == 'z' || key == 'Z') {
//		for (int i = 0;i < 9;i++) {
//			theta_z[pos[Z_idx[0][i]]] += 90;
//		}
//	}
//
//	if (key == 'x' || key == 'X') {
//		for (int i = 0;i < 9;i++) {
//			theta_z[pos[Z_idx[1][i]]] += 90;
//		}
//	}
//
//	if (key == 'c' || key == 'C') {
//		for (int i = 0;i < 9;i++) {
//			theta_z[pos[Z_idx[2][i]]] += 90;
//		}
//	}
//}
//
//void smain(int argc, char** argv)
//{
//
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
//	glutInitWindowSize(600, 460);
//
//	glutCreateWindow("Magic cube");
//	InitGl();
//	glutDisplayFunc(display);
//
//	glutReshapeFunc(reshape);
//	glutSpecialFunc(SpecialKeys);
//	glutKeyboardFunc(myKey);
//	glutIdleFunc(display);
//	glutMainLoop();
//}
//
//
//
