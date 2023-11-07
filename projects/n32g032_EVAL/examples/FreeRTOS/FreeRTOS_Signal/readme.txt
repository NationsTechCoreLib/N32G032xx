1������˵��

    ������ΪFreeRTOS�ź���֪ͨ�л�LED��ʾ��������3�����ȼ���ͬ���̣߳��߳�1�ȴ�����bit0λ���ź����л�LED1���߳�2�ȴ�����bit1��bit2λ���ź����л�LED2���߳�3����һ������bit0λ���źŲ���ʱ500ms����һ������bit1��bit2λ���źţ�Ȼ������ʱ500ms��
    
2��ʹ�û���

    �������������
        IDE���ߣ�KEIL MDK-ARM 5.30
    
    Ӳ��������
        ������ N32G032R8L7-STB

3��ʹ��˵��
	
    1��LED1----------PB1
    2��LED1----------PB6

    3�����Բ���������
        a���������ش��븴λ����
        b��LED1����ʱ500ms��LED2����ʱ500ms��LED1������ʱ500ms��LED2������ʱ500ms���Դ˷�����
	
4��ע������
     1��systick��Ϊʱ���׼Դ��������Ϊ1ms tick 



1��Function Description

    This routine is an example of FreeRTOS signal to notify switching LEDs. Create 3 threads with the same priority, thread 1 waits for a signal containing bit0 to switch LED1; thread 2 waits for a signal containing bit1 and bit2 to switch LED2; thread 3 sends a signal containing bit0 and delays it for 500ms, then sends a signal containing bit1 and bit2, then delays it for another 500ms.
    
2��Using environment

    Software development environment:
        IDE tool: KEIL MDK-ARM 5.30
    
    Hardware environment:
        Development board N32G032R8L7-STB

3��Use instructions
	
    1��LED1----------PB1
    2��LED1----------PB6

    3��test steps and phenomena
        a, compile and download the code reset run
        b, LED1 extinguished, delay 500ms, LED2 extinguished, delay 500ms, LED1 light, delay 500ms, LED2 light, delay 500ms, and so on repeatedly.
	
4, Notes
     1, systick as a time reference source, and configured for 1ms tick 
