1������˵��

    ������ΪFreeRTOS����ϵͳ���ͺͽ����ʼ�ʾ�������������̣߳�һ���������ߣ�һ���������ߡ������ߵ����ȼ����������ߡ��������̷߳����ʼ����������߳�����ʽ�����ʼ��������߷����ʼ�ʱ���ʼ������ʼ������У�һ���������ڶ����Ϸ������ʼ��������߾ͻ�����������ռ�����ߣ���ѻ�ȡ�ʼ���Ϣ��
    
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
        b��LED1��ͣ�������Ե���˸��LED2������˵��ʾ�������������С������ʼ�����˫���ʼ��ṹ�ı���ֵ����ͬ���κδ�������������LED2Ϩ��
	
4��ע������
     1��systick��Ϊʱ���׼Դ��������Ϊ1ms tick 



1��Function Description

    This is an example of sending and receiving emails from the FreeRTOS scheduling system. Two threads are created, one as a producer and one as a consumer. The producer has a lower priority than the consumer. The producer thread sends emails and the consumer thread receives emails in blocking mode. When the producer sends an email, it puts the email into the email queue. Once the producer releases an email on the queue, the consumer will unblock and seize the producer to get the email message for free.
    
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
        b, LED1 keeps flashing periodically, LED2 is always on, indicating that the example is running normally. Send mail error, both sides of the mail structure of the variable value is not the same, and so on any error occurs will lead to LED2 off.
	
4��Notes
     1. systick is used as the time base source and configured as 1ms tick. 