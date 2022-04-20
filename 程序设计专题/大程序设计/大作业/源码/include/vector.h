/*
	File: 		vector.h
	Edition: 	2021/5/26
	
	Private vector functions.
*/

#ifndef _VECTOR_H_
#define _VECTOR_H_
#define M_PI 3.1415926535

#include<math.h>

typedef struct vec{
	double l,d;
}vec;

//��ȡ����X���ϵ�ͶӰ
double VectorX(vec a);

//��ȡ����Y���ϵ�ͶӰ
double VectorY(vec a);

//�Գ��Ⱥͷ����½�����
vec NewVector(double length,double direction);

//��X��ͶӰ��Y��ͶӰ�½�����
vec ToVector(double x,double y);

//������dir�����ϵ�ͶӰ����
vec HorResolve(vec a,double direction);

//������dir�����ϵĴ�ֱ�����ֽ�
vec VerResolve(vec a,double direction);

#endif
