1������˵��

    ������ΪFreeRTOSͨ��ISR�ͷ��ź������л�LED�Ƶ�ʾ��������һ���̣߳����ϳ��Ի�ȡ�ź������л�LED�ơ��û���ͨ�����°��������ж����ͷ��ź�����ʹ�߳�ʵ��LED���л��Ĺ��ܡ�
    
2��ʹ�û���

    �������������
        IDE���ߣ�KEIL MDK-ARM 5.30
    
    Ӳ��������
        ������ N32G032R8L7-STB

3��ʹ��˵��
	
    1��LED1----------PB1
    2��KEY-----------PA5

    3�����Բ���������
        a���������ش��븴λ����
        b��LED1�������°���KEY2 LED1���ٰ�LED1�ֱ��������Դ˷�����
	
4��ע������
     1��systick��Ϊʱ���׼Դ��������Ϊ1ms tick 


1��Function Description

    This routine is an example of FreeRTOS toggling LEDs by releasing a semaphore via ISR. A thread is created to keep trying to get the signal quantity to switch the LED light. Users can trigger an interrupt by pressing a key to release the signal quantity, so that the thread can realize the function of switching the LED light.
    
2��Using environment

    Software development environment:
        IDE tool: KEIL MDK-ARM 5.30
    
    Hardware environment:
        Development board N32G032R8L7-STB

3��Use instructions
	
    1��LED1----------PB1
    2��KEY-----------PA5

    3��test steps and phenomena
        a, compile and download the code reset run
        b, LED1 is bright, press the key KEY2 LED1 extinguished, and then press LED1 is lit again, and so on.
	
4, Notes
     1, systick as a time reference source, and configured as 1ms tick 

