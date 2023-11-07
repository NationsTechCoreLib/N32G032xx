1������˵��

    ������ΪFreeRTOS�����߳�����з��ͺͽ���һ������ֵ��ʾ�������������̣߳�һ���������ߣ�һ���������ߡ������ߵ����ȼ����������ߡ��������̷߳��͵���ֵ���������߳�����ʽ���յ���ֵ��������ÿ��1s����з�����Ϣ����ʱ�������߽������������ռ�����ߣ���ɾ�����
    
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
        b��LED1��ͣ�������Ե���˸��1�룩��LED2����˵��ʾ�������������С�������Ϣ����˫���¼��ṹ����Ϣֵ����ͬ���κδ�������������LED2��������
	
4��ע������
    1��systick��Ϊʱ���׼Դ��������Ϊ1ms tick 
    2��ProducerValue��ConsumerValue���뱣�����



1��Function Description

    This routine is an example of FreeRTOS scheduling threads to send and receive an incremental value to and from a queue. Two threads are created, one as a producer and one as a consumer. The producer has a lower priority than the consumer. The producer thread sends the incremented value and the consumer thread receives the incremented value blockingly. The producer sends a message to the queue every 1s, at this time, the consumer will unblock, seize the producer, and delete the item.
    
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
        b, LED1 keeps flashing periodically (1 second), LED2 is always off, indicating that the example is running normally. Send message error, the two sides of the event structure of the message value is not the same, and any other error occurs will lead to LED2 is lit.
	
4��Notes
    1, systick as a time base source, and configured to 1ms tick 
    2��ProducerValue and ConsumerValue must be kept equal.