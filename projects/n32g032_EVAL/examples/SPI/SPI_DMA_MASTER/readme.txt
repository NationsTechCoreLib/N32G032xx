1������˵��

	1��SPI ��ģʽȫ˫�� DMA ���ͺ͵��߽�������

2��ʹ�û���

	������������� KEIL MDK-ARM V5.34.0.0
	Ӳ��������    ����N32G032R8L7_STB V1.0����

3��ʹ��˵��
	
	/* �������ģ�����÷���������:ʱ�ӣ�I/O�� */
	SystemClock��48MHz
	GPIO������ģʽ DEMO �壩SPI1: SCK--PA5�� MISO--PA6��MOSI--PA7,
		  ����ģʽ DEMO �壩SPI1: SCK--PA5�� MISO--PA6��MOSI--PA7,

	��־��ӡ����ģʽ DEMO �� PA9(TX)�������ʣ�115200


	/* ����Demo�Ĳ��Բ�������� */
	1.��������س���λ���У�
	2.�Ӻô��ڴ�ӡ���ߣ��ϵ磬�鿴��ӡ���Գɹ�


4��ע������
	��Ҫ���� demo ����ϣ�һ�������¼��ģʽ����һ�������¼��ģʽ�������������һ���ϵ磬����������ӵ� VCC �� GND
	
	
	
1. Functional Description:
    1. Perform SPI data transmission and reception in full-duplex mode in SPI master mode using DMA for transmission and single-line reception.
	
2. Usage Environment:

	Software Development Environment: KEIL MDK-ARM V5.34.0.0
	Hardware Environment: Developed based on the evaluation board N32G032R8L7-STB V1.0

3. Usage Instructions:

	/* Describe the configuration methods for relevant modules, e.g., clock, I/O, etc */
	SystemClock: 48MHz
	GPIO:
		(Master Mode Demo Board) SPI1: SCK--PA5, MISO--PA6, MOSI--PA7
		(Slave Mode Demo Board)  SPI1: SCK--PA5, MISO--PA6, MOSI--PA7
	Logging: Connect to the UART TX pin of the Master Mode Demo Board (PA9) with a baud rate of 115200.

	/* Describe the testing steps and observed behavior of the demo */
	1. After compiling, download the program and reset the board.
	2. Connect a UART terminal, power on, and check that the print test is successful.

4. Notes:
	Two demo boards are required for this setup: one board is programmed as the master mode and the other as the slave mode. 
	Both boards need to be powered on simultaneously, and their VCC and GND should be connected.
	
	