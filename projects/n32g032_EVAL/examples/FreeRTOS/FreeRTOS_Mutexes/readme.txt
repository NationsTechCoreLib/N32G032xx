1������˵��

    ������ΪFreeRTOS����������ͬ���ȼ����̷߳���ͬһ��������ʾ���������ȼ��߳����ȷ��ʻ�������Ȼ�����20ms�������ڣ��ڹ����Լ�ǰ�ͷŵ��������Լ��л�LED1�������ȼ��߳�����������ʽ�ȴ����ʻ�������ֻ�и����ȼ��ͷŵ������������Ž���������ʻ��������ڹ����Լ�ǰ�ͷŵ��������Լ��л�LED1�������ȼ��߳�ͨ����������������û�������ֻ���ڸ����ȼ��������ȼ��̶߳����������ܳɹ��ػ�û�������ͬʱ���ָ�����������̣߳��ڹ����Լ�ǰ�ͷŵ��������Լ��л�LED1��
    
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
        b��LED1���ٵ������Ե���˸��LED2���𡣻�ȡ���ͷŻ����������߳�δ�ɹ�������κδ��󶼽�����LED2�л���
	
4��ע������
    1��systick��Ϊʱ���׼Դ��������Ϊ1ms tick 


1��Function Description

    This routine is an example of FreeRTOS scheduling three different priority threads to access the same mutex lock. The high-priority thread first accesses the mutex lock, then enters a 20ms sleep period, releases the mutex lock and toggles LED1 before hanging itself; the medium-priority thread waits for access to the mutex lock in blocking mode, and only after the high-priority releases the mutex lock does it unblock access to the mutex lock, and then releases the mutex lock and toggles LED1 before hanging itself; the low-priority thread acquires the mutex lock through a non-blocking call. Mutual exclusion lock, only in the high-priority and medium-priority threads are hung up, it can successfully obtain the mutual exclusion lock, at the same time, to restore the two hung up threads, before hanging themselves before releasing the mutual exclusion lock and switching LED1.
    
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
        b, LED1 flashes rapidly and periodically, and LED2 goes out. Getting, releasing the mutual exclusion lock in error, thread unsuccessfully hung and any other errors will cause LED2 switching.
	
4��Cautions
    1, systick as a time reference source, and configured to 1ms tick 