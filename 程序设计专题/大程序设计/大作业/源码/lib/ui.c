#include"imgui.h"
#include"graphics.h"
#include"extgraph.h"

void DrawUI(){
	DisplayClear();
	SetFont("΢���ź�");
	SetPointSize(20);
	if(button(GenUIID(1),9,9,5,1,"ʮ�������")) StartMode1();
	else if(button(GenUIID(2),9,7,5,1,"˹ŵ�˹���")) StartMode2();
	else if(button(GenUIID(3),9,5,5,1,"��ʽ�������")) StartMode3();
	else if(button(GenUIID(4),9,3,5,1,"��ȡ¼��")) InitRead();
	else if(button(GenUIID(5),9,1,5,1,"�˳�")) exit(0);
}

static void TimerEvent(int event){
	DrawUI();
}

static void MouseEvent(int x,int y,int key,int event){
	uiGetMouse(x,y,key,event);
}

void InitUI(){
	startTimer(1,20);
	registerTimerEvent(TimerEvent);
	registerMouseEvent(MouseEvent);
	DrawUI();
}