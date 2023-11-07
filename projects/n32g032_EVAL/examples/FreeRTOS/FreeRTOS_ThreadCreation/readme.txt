1������˵��

    ������ΪFreeRTOS����������ͬ���ȼ����߳��������л�LED��ʾ������ǰ5�룬�߳�1ÿ200ms�л�LED1���߳�2ÿ500ms�л�LED2���ڽ�������5���У��߳�1�����Լ����߳�2�����л�LED2�������5���У��߳�2�ָ��߳�1��Ȼ������Լ����߳�1ÿ500�����л�LED1һ�Ρ�
    
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
        b��ǰ5s,LED1�����200ms����LED2�����500ms��ͬʱ��˸���м�5s��LED1��LED2������˸�����500ms������5s��LED1��˸�����400ms����LED2���Դ˷���������Ϊ15s��
	
4��ע������
     1��systick��Ϊʱ���׼Դ��������Ϊ1ms tick 



1��Function Description

    This is an example of creating two threads of the same priority for FreeRTOS to schedule switching LEDs. In the first 5 seconds, thread 1 switches LED1 every 200ms and thread 2 switches LED2 every 500ms. in the next 5 seconds, thread 1 hangs itself and thread 2 continues to switch LED2. in the last 5 seconds, thread 2 resumes thread 1 and then hangs itself, and thread 1 switches LED1 every 500 milliseconds.
    
2��Using environment

    Software development environment:
        IDE tool: KEIL MDK-ARM 5.30
    
    Hardware environment:
        Development Board N32G032R8L7-STB

3��Use instructions
	
    1��LED1----------PB1
    2��LED2----------PB6

    3��Test steps and phenomena
        a, compile and download the code reset run
        b, the first 5s, LED1 (interval 200ms) and LED2 (interval 500ms) flashing at the same time; the middle 5s, LED1 extinguished, LED2 continue to flash (interval 500ms); after 5s, LED1 flashing (interval 400ms), LED2 extinguished, and so on and so forth, the cycle is 15s.
	
4��Notes
     1, systick as a time reference source, and configured as 1ms tick 

