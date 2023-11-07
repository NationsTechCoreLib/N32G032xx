1������˵��
	1. ͨ��EXTI������ʱ�����

2��ʹ�û���

	������������� KEIL MDK-ARM V5.34.0.0
	Ӳ��������    ����N32G032R8L7_STB V1.0����

3��ʹ��˵��
	
	/* �������ģ�����÷���������:ʱ�ӣ�I/O�� */
	1��ʱ��Դ��LSI
	2��EXTI��PB7
	3���������ã�
				- ����ΪUSART1��TX��PA9  RX��PA10��:
				- ����λ��8
				- ֹͣλ��1
				- ��żУ�飺��
				- �����ʣ� 115200 

	/* ����Demo�Ĳ��Բ�������� */
    1����KEIL�±������¼�������壬�ϵ�󣬸�PB7����ߵ�ƽ�����ڴ�ӡ���ʱ�����

4��ע������
	��
	
	
1. Functional Description:
    1. Trigger a timestamp using EXTI.
	
2. Usage Environment:

	Software Development Environment: KEIL MDK-ARM V5.34.0.0
	Hardware Environment: Developed based on the evaluation board N32G032R8L7-STB V1.0

3. Usage Instructions:

	/* Describe the configuration methods for relevant modules, e.g., clock, I/O, etc */
	1. RTC Clock: LSI
	2. EXTI: PB7
	3. Serial Configuration:
			Serial Port: USART1 (TX: PA9, RX: PA10)
			Data Bits: 8
			Stop Bits: 1
			Parity: None
			Baud Rate: 115200

	/* Describe the testing steps and observed behavior of the demo */
	1. After compiling in KEIL, burn the code to the evaluation board. When powered on, apply a high level to PB7. The serial port will print the timestamp.

4. Notes:
	None
	