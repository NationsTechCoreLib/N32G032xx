1������˵��

    ������ΪFreeRTOS����ϵͳ�����͹��ĵ�ʾ�������������̣߳�һ��Rx��һ��Tx��Rxÿ����500msͨ�����з���һ��ֵ��Txͨ�����������ȴ�����Rx��ֵ�����յ������LED1������20ms��رա������ڼ������ں�ֹͣSysTick�жϣ�����ϵͳ����sleepģʽ��
    
2��ʹ�û���

    �������������
        IDE���ߣ�KEIL MDK-ARM 5.30
    
    Ӳ��������
        ������ N32G032R8L7-STB

3��ʹ��˵��
	
    1��LED1----------PB1

    2�����Բ���������
        a���������ش��븴λ����
        b��ÿ500msϵͳ���߳��͹���״̬����LED1��Ȼ�󷵻ص��͹���״̬20ms��Ȼ���ٴ��뿪�͹���״̬�ر�LED1���۲쵽LED1������˸˵��ϵͳ�����������͹���ģʽ
	
4��ע������
    1��systick��Ϊʱ���׼Դ��������Ϊ1ms tick 
    2�����ý���SLEEPģʽ����ʱ������Ϊ��������



1��Function Description

    This routine is an example of FreeRTOS scheduling system in and out with low power consumption. Two threads are created, one Rx and one Tx. The Rx sends a value through the queue every 500ms of blocking, and the Tx waits to receive the value from the Rx by blocking through the queue, and then lights up LED1 when it receives it, and turns it off after 20ms. During the blocking period, the kernel is allowed to stop the SysTick interrupt and put the system in sleep mode.
    
2��Using environment

    Software development environment:
        IDE tool: KEIL MDK-ARM 5.30
    
    Hardware environment:
        Development board N32G032R8L7-STB

3��Use instructions
	
    1��LED1----------PB1

    2��test steps and phenomena
        a, compile and download the code reset run
        b, every 500ms the system will be out of the low-power state to light up LED1, and then return to the low-power state 20ms, and then leave the low-power state again to close the LED1, observed that LED1 rapid blinking indicates that the system is in and out of the normal low-power mode
	
4��Cautions
    1��Systick as the time reference source, and configure it as 1ms tick. 
    2��Configure the function to enter SLEEP mode, configure it to enter immediately.