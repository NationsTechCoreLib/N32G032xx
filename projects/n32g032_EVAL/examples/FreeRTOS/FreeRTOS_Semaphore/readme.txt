1������˵��

    ������ΪFreeRTOS�����߳�ͨ���ź������л�LED�Ƶ�ʾ�������������߳�1��2���߳�1�����ȼ������߳�2���߳�1���Ȼ���ź����������ڽ�������5s��ÿ200ms�л�һ��LED1,Ȼ���ͷ��ź����������Լ����߳�1������߳�2����ȡ�ź�����ִ�У�һ����ʼִ�У��߳�2���ָ��߳�1��ϵͳ����ִ���߳�1�������ڴ�ʱ�ź������߳�2��ռ���߳�1����ɹ�ִ�н���ִ���߳�2���ڽ�������5s��ÿ200ms�л�һ��LED2,Ȼ���ͷŵ��ź�����
    
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
        b��LED1�����Ե���˸5s���л���LED2�����Ե���˸5s���ɴ�ѭ����˵��ϵͳ������ȷ���С�
	
4��ע������
     1��systick��Ϊʱ���׼Դ��������Ϊ1ms tick 



1��Function Description

    This is an example of FreeRTOS scheduling threads to switch LEDs by signaling. Create two threads 1 and 2, thread 1 has higher priority than thread 2. thread 1 will first get the signal quantity and switch LED1 every 200ms in the next 5s, then release the signal quantity and hang itself. After thread 1 hangs up, thread 2 will get the signal quantity and execute it, once it starts to execute, thread 2 will restore thread 1, and the system schedules the execution of thread 1. However, since the signal quantity is seized by thread 2 at this time, thread 1 won't be executed successfully, and then it will execute thread 2, and it will switch the LED2 once in every 200ms in the next 5s, and then it will release the signal quantity.
    
2��Using environment

    Software development environment:
        IDE tool: KEIL MDK-ARM 5.30
    
    Hardware environment:
        Development board N32G032R8L7-STB

3��Use instructions
	
    1��LED1----------PB1
    2��LED2----------PB6

    3��test steps and phenomena
        a, compile and download the code reset run
        b, LED1 periodically flashes for 5s and then switches to LED2 periodically flashes for 5s, thus cycling, indicating that the system is running correctly.
	
4��Notes
     1, systick as a time reference source, and configured as 1ms tick 

