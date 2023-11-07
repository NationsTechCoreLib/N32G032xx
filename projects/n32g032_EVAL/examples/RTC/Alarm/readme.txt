1������˵��
	1��ͨ���趨����ʱ�������������жϡ�
	2��ͨ�����ӱ�־λ������IO���

2��ʹ�û���

	������������� KEIL MDK-ARM V5.34.0.0
	Ӳ��������    ����N32G032R8L7_STB V1.0����


3��ʹ��˵��
	
	/* �������ģ�����÷���������:ʱ�ӣ�I/O�� */
	1��RTCʱ��Դ��LSI
	2������IO�����PC13
	3���������ã�
				- ����ΪUSART1��TX��PA9  RX��PA10��:
				- ����λ��8
				- ֹͣλ��1
				- ��żУ�飺��
				- �����ʣ� 115200 


	/* ����Demo�Ĳ��Բ�������� */
	��KEIL�±������¼�������壬�ϵ磬���ڰ��������趨ʱ����д�ӡ�����
	���ӿ���ʱ��PC13�ڻ���ַ�ת��ƽ��


4��ע������
	��
	
	
1. Functional Description:
    1. Trigger an alarm interrupt by setting the alarm time.
	2. Configure IO output using the alarm flag.
	
2. Usage Environment:

	Software Development Environment: KEIL MDK-ARM V5.34.0.0
	Hardware Environment: Developed based on the evaluation board N32G032R8L7-STB V1.0

3. Usage Instructions:

	/* Describe the configuration methods for relevant modules, e.g., clock, I/O, etc */
	1. RTC Clock Source: LSI
	2. Alarm IO Output: PC13
	3. Serial Configuration:
			Serial Port: USART1 (TX: PA9, RX: PA10)
			Data Bits: 8
			Stop Bits: 1
			Parity: None
			Baud Rate: 115200

	/* Describe the testing steps and observed behavior of the demo */
	1. Compile the code in KEIL, burn it to the evaluation board, power it on, and the serial output will follow the set alarm time. When the alarm is active, a toggle level will appear on PC13.

4. Notes:
	None
	
	