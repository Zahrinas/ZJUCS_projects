/*
	File: 		physics.h
	Edition: 	2021/6/2
	
	Physics simulator.
*/

#ifndef _PHYSICS_H_
#define _PHYSICS_H_
#define M_PI 3.1415926535

//��������
double CoorDistance(double x1,double y1,double x2,double y2);

//��ʼ����ʱ���
void SetTime(double t);

//�ô洢�����ݵ����鼰���С��ʼ��
void SetBalls(Ball* bptr,int size);

//�����ٶȣ�����ȣ�
void SetSpeed(Ball* bptr,double spd,double radian);

//����ʱ���������������ˢ��
void CheckCollide();

//���Ƿ����˶�
int StillMoving();
#endif