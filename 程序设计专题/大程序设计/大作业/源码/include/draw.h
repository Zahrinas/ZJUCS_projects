/* 
 * File: draw.h
 * Version: 1.0
 * ------------------------------------------
 * The exception package provides some functions
 * that will be used in drawing step
 */

#ifndef _DRAW_H_
#define _DRAW_H_
#define M_PI 3.1415926535

#include"types.h"
  
 /* Exported functions */
 
 /*
  * Function: DrawTable
  * Usage: DrawTable();
  * --------------------
  * ʹ�øú�������ֱ�ӻ���̨�����棬���������ܺ��� 
  */
  
  void DrawTable();
  
 /*
  * Function: DrawBall
  * Usage: DrawBall(Ball);
  * -----------------------
  *  ʹ�øú���������Ball��x��y����ΪԲ�Ļ�һ���������������Ӧ
  */
   
  void DrawBall(Ball ball); 
  
  void DrawCue();
  
  void DrawForceBox(double);
  
  void DrawUserBox(int,Ball *,int);
  
  void DrawUserBall(double,double,int,Ball*);
  
  void DrawConfirmBox(int);
  
  void DisplayStatus(int PlayerNum);
  
  void DrawMsgBox1();
  void DrawMsgBox2(); 
  void DrawMsgBox3();
  
  void DrawMsg1(char*,char *,char*,char*);
  void DrawMsg2(char*,char *,char*);
  void DrawMsg3(char*,char *,char*);
#endif
