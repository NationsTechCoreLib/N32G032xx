1������˵��

	1��SPI ȫ˫����� NSS ģʽ���ͽ�������


2��ʹ�û���

	������������� KEIL MDK-ARM V5.34.0.0
	Ӳ��������    ����N32G032R8L7_STB V1.0����

3��ʹ��˵��
	
	/* �������ģ�����÷���������:ʱ�ӣ�I/O�� */
	SystemClock��48MHz
	GPIO��SPI1: SCK--PA5�� MISO--PA6�� MOSI--PA7,
		  SPI2: SCK--PB13��MISO--PB14��MOSI--PB15��

	/* ����Demo�Ĳ��Բ�������� */
	1.��������س���λ���У�
	2.SPI1 ��ʼ��λ�������������ݣ�SPI2 ��ʼ��λ�Ի����������� ��������ɺ󣬼�����ݣ��鿴 TransferStatus1 �� TransferStatus2 ״̬Ϊ PASSED��
	  SPI2 ��ʼ��λ�������������ݣ�SPI1 ��ʼ��λ�Ի����������� ��������ɺ󣬼�����ݣ��鿴 TransferStatus3 �� TransferStatus4 ״̬Ϊ PASSED��


4��ע������
	��
	

1. Functional Description:
    1. Perform full-duplex software NSS (Slave Select) mode data transmission and reception using SPI.
	
2. Usage Environment:

	Software Development Environment: KEIL MDK-ARM V5.34.0.0
	Hardware Environment: Developed based on the evaluation board N32G032R8L7-STB V1.0

3. Usage Instructions:

	/* Describe the configuration methods for relevant modules, e.g., clock, I/O, etc */
	SystemClock: 48MHz
	GPIO:
		SPI1: SCK--PA5,  MISO--PA6,  MOSI--PA7
		SPI2: SCK--PB13, MISO--PB14, MOSI--PB15

	/* Describe the testing steps and observed behavior of the demo */
	1. After compiling, download the program and reset the board.
	2. Initialize SPI1 as the host, send data, and initialize SPI2 as the slave to receive data. After the transmission is complete, check the data and verify that TransferStatus1 and TransferStatus2 are in the PASSED state. 
	   Then, initialize SPI2 as the host, send data, and initialize SPI1 as the slave to receive data. After the transmission is complete, check the data and verify that TransferStatus3 and TransferStatus4 are in the PASSED state.

4. Notes:
	None
