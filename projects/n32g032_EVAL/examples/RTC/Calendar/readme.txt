1������˵��
    1��ͨ��EXTI��������������ӡ�����


2��ʹ�û���

	������������� KEIL MDK-ARM V5.34.0.0
	Ӳ��������    ����N32G032R8L7_STB V1.0����


3��ʹ��˵��

    /* �������ģ�����÷���������:ʱ�ӣ�I/O�� */
	1��RTCʱ��Դ��LSI
	2���ж��ߣ�EXTI_LINE7
	3���������ã�
				- ����ΪUSART1��TX��PA9  RX��PA10��:
				- ����λ��8
				- ֹͣλ��1
				- ��żУ�飺��
				- �����ʣ� 115200 

    /* ����Demo�Ĳ��Բ�������� */
	��KEIL�±������¼�������壬PC13���ӵ�PA7�ڣ��ϵ�󣬴���ÿ��1S���ӡһ�ζ�Ӧ����ʱ��


4��ע������
    ���غ��������ϵ�
	
		
1. Functional Description:
    1. Trigger calendar printing output through the EXTI line.
	
2. Usage Environment:

	Software Development Environment: KEIL MDK-ARM V5.34.0.0
	Hardware Environment: Developed based on the evaluation board N32G032R8L7-STB V1.0

3. Usage Instructions:

	/* Describe the configuration methods for relevant modules, e.g., clock, I/O, etc */
	1. RTC Clock Source: LSI
	2. Interrupt Line: EXTI_LINE7
	3. Serial Configuration:
			Serial Port: USART1 (TX: PA9, RX: PA10)
			Data Bits: 8
			Stop Bits: 1
			Parity: None
			Baud Rate: 115200

	/* Describe the testing steps and observed behavior of the demo */
	After compiling in KEIL, burn the code to the evaluation board. Connect PC13 to PA7, power on the board, and the serial port will print the corresponding calendar time every 1 second.

4. Notes:
	After downloading, the board needs to be powered off and then powered on again.