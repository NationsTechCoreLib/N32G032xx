1������˵��

	1��SPI ���ͽ������ݽ��� CRC У��

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
	2.SPI1��SPI2 ͬʱ�շ����ݣ�������ɺ󣬷��� CRC ���ݣ�������ݺ� CRC ֵ���鿴 TransferStatus1 �� TransferStatus2 ״̬Ϊ PASSED���ٲ鿴 CRC ֵ��


4��ע������
    ��SPI����Ϊ12Mbps��������CRCУ��ʱ��ֻ��ͨ��DMA����ͨ�š�
	
	
1. Functional Description:
    1. Perform CRC validation on data sent and received through SPI.
	
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
	2. Send and receive data simultaneously using SPI1 and SPI2. After the transmission is complete, send CRC data, check the data and CRC value, 
	   and verify that TransferStatus1 and TransferStatus2 are in the PASSED state. Then, check the CRC value.

4. Notes:
	When the SPI speed is 12Mbps and CRC validation is configured, communication can only be done through DMA.
	
