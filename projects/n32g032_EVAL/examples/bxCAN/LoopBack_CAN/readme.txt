1������˵��

	/* ���������̹��� */
        ����������ò���ʾCAN1�ڻ��ز���ģʽ���շ�CAN�������


2��ʹ�û���

     �������������KEIL MDK-ARM V5.34.0.0
     Ӳ������������������N32G032R8L7-STBV1.0����


3��ʹ��˵��
	
	/* �������ģ�����÷���������:ʱ�ӣ�I/O�� */
        SystemClock��48MHz
        USART��TX - PA9��RX - PA10��������115200
	CAN1��RX - PA5��TX - PA4��������500K�����ز���ģʽ

	/* ����Demo�Ĳ��Բ�������� */
        1.��������س���λ���У�
        2.�鿴���ڴ�ӡ��Ϣ��CAN1�ѷ��͵ı��ĵ������յı��Ĳ����棬���鿴����ӡ��ϢΪ����ͨ��ʱ��������������


4��ע������


1. Functional description

	/* Simple description of project functions */
        This routine configures and demonstrates CAN1 sending and receiving CAN messages in loopback test mode.


2��Using environment

     Software development environment: KEIL MDK-ARM V5.34.0.0
     Hardware environment: based on the evaluation board N32G032R8L7-STBV1.0 development


3, the use of instructions
	
	/* Describe how to configure the related modules; e.g.: Clock, I/O, etc. */
        SystemClock: 48MHz
        USART: TX - PA9, RX - PA10, baud rate 115200
	CAN1: RX - PA5, TX - PA4, baud rate 500K, loopback test mode.

	/* Describe the test steps and phenomenon of Demo */
        1. Compile and download the program to reset and run;
        2. View the serial port print information, CAN1 take the transmitted message as received and save it, when the print information is viewed as received through the program runs normally;


4. Notes
