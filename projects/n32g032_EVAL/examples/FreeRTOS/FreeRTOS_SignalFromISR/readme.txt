1������˵��

    ������ΪFreeRTOSͨ��ISR�����ź���֪ͨ�л�LED��ʾ��������һ���̣߳����Ի�ȡBIT_1 | BIT_2���ź����л�LED1���жϷ�������м������ﵽ400ʱ���̷߳���BIT_1�źţ��ﵽ1000ʱ���̷߳���BIT_1 | BIT_2�źţ�����0��������
    
2��ʹ�û���

    �������������
        IDE���ߣ�KEIL MDK-ARM 5.30
    
    Ӳ��������
        ������ N32G032R8L7-STB

3��ʹ��˵��
	
    1��LED1----------PB1

    2�����Բ���������
        a���������ش��븴λ����
        b��LED1����ÿ1000ms�л�һ�Ρ�
	
4��ע������
     1��systick��Ϊʱ���׼Դ��������Ϊ1ms tick 


1��Function Description

    This routine is an example of FreeRTOS sending signals via ISR to notify switching LEDs. Create a thread to try to get the signal of BIT_1 | BIT_2 to switch LED1. The counter in the interrupt service program sends the BIT_1 signal to the thread when it reaches 400, and sends the BIT_1 | BIT_2 signal to the thread when it reaches 1000, and clears the counter at 0.
    
2��Using environment

    Software development environment:
        IDE tool: KEIL MDK-ARM 5.30
    
    Hardware environment:
        Development board N32G032R8L7-STB

3��Use instructions
	
    1��LED1----------PB1

    2��test steps and phenomena
        a, compile and download the code reset run
        b, LED1 light on and off every 1000ms switch.
	
4��Note
     1, systick as a time reference source, and configured as 1ms tick 
