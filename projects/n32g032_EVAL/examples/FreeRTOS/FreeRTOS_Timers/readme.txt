1������˵��

    ������ΪFreeRTOS�����̺߳ʹ�����ʱ�����л�LED��ʾ�������ʾ��������һ��ÿ400�����л�LED2���̣߳��Լ�һ�������Լ�ʱ������ÿ200�������һ���ص��������л�LED1��
    
2��ʹ�û���

    �������������
        IDE���ߣ�KEIL MDK-ARM 5.30
    
    Ӳ��������
        ������ N32G032R8L7-STB

3��ʹ��˵��
	
    1��LED1----------PB1
    2��LED2----------PB6

    3�����Բ���������
        a���������ش��븴λ����
        b��LED1�����200ms����LED2�����400ms��ͬʱ��˸��
	
4��ע������
     1��systick��Ϊʱ���׼Դ��������Ϊ1ms tick 


1��Function Description

    This routine creates a thread and creates a timer to toggle LEDs as an example for FreeRTOS. This example creates a thread that toggles LED2 every 400 milliseconds, and a periodic timer that calls a callback function to toggle LED1 every 200 milliseconds.
    
2��Using environment

    Software development environment:
        IDE tool: KEIL MDK-ARM 5.30
    
    Hardware environment:
        Development board N32G032R8L7-STB

3��Use instructions
	
    1��LED1----------PB1
    2��LED2----------PB6

    3��Test steps and phenomena
        a, compile and download the code reset run
        b, LED1 (200ms interval) and LED2 (400ms interval) flash at the same time.
	
4��Notes
     1, systick as a time reference source, and configured as 1ms tick 
