1������˵��
    1��ͨ���趨����ʱ�䴥���жϡ�
    2��ͨ�����ѱ�־λ������IO���


2��ʹ�û���

	������������� KEIL MDK-ARM V5.34.0.0
	Ӳ��������    ����N32G032R8L7_STB V1.0����


3��ʹ��˵��

    /* �������ģ�����÷���������:ʱ�ӣ�I/O�� */
	1�������Ի���ʱ��Դ��RTCCLK��1HZ��
	2����������ڣ�PC13
	3���������ã�
				- ����ΪUSART1��TX��PA9  RX��PA10��:
				- ����λ��8
				- ֹͣλ��1
				- ��żУ�飺��
				- �����ʣ� 115200 


    /* ����Demo�Ĳ��Բ�������� */
	1����KEIL�±������¼�������壬�ϵ�󣬴���ÿ��5s���ӡ"I am in rtc_wkup"��PC13ÿ��5S��תһ�Ρ�

4��ע������
    ��
	
	
1. Functional Description:
    1. Trigger an interrupt by setting the wake-up time.
	2. Configure IO output using the wake-up flag.
	
2. Usage Environment:

	Software Development Environment: KEIL MDK-ARM V5.34.0.0
	Hardware Environment: Developed based on the evaluation board N32G032R8L7-STB V1.0

3. Usage Instructions:

	/* Describe the configuration methods for relevant modules, e.g., clock, I/O, etc */
	1. Periodic Wake-up Clock Source: RTCCLK (1HZ)
	2. Wake-up Output Port: PC13
	3. Serial Configuration:
			Serial Port: USART1 (TX: PA9, RX: PA10)
			Data Bits: 8
			Stop Bits: 1
			Parity: None
			Baud Rate: 115200

	/* Describe the testing steps and observed behavior of the demo */
	1. After compiling in KEIL, burn the code to the evaluation board. When powered on, the serial port will print "I am in rtc_wkup" every 5 seconds, and PC13 will toggle every 5 seconds.

4. Notes:
	None
	