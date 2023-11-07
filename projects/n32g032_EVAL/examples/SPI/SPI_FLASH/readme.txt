1������˵��

	1��SPI ����д������ W25Q128

2��ʹ�û���

	������������� KEIL MDK-ARM V5.34.0.0
	Ӳ��������    ����N32G032R8L7_STB V1.0����

3��ʹ��˵��
	
	/* �������ģ�����÷���������:ʱ�ӣ�I/O�� */
	1��SystemClock��48MHz
	2��SPI1: NSS--PA4��SCK--PA5��MISO--PA6��MOSI--PA7


	/* ����Demo�Ĳ��Բ�������� */
	1.��������س���λ���У�
	2.ͨ�� SPI1 ��ȡ W25Q128 �� ID��Ȼ��д���ݣ��ٶ��������Ƚ϶�д���ݣ��鿴 TransferStatus1 ״̬Ϊ PASSED��Ȼ������飬��������������

4��ע������
	�� N32G032R8L7_STB V1.0 �������ϵ� SPI1 �ӿڽ��� N32G457QE_EVB ������� W25Q128 �ϣ�������������Ҫ����
	
	
1. Functional Description:
    1. Read, Write, and Erase the W25Q128 SPI Flash Memory.
	
2. Usage Environment:

	Software Development Environment: KEIL MDK-ARM V5.34.0.0
	Hardware Environment: Developed based on the evaluation board N32G032R8L7-STB V1.0

3. Usage Instructions:

	/* Describe the configuration methods for relevant modules, e.g., clock, I/O, etc */
	1. SystemClock: 48MHz
	2. SPI1: NSS--PA4, SCK--PA5, MISO--PA6, MOSI--PA7

	/* Describe the testing steps and observed behavior of the demo */
	1. After compiling, download the program and reset the board.
	2. Use SPI1 to read the ID of the W25Q128 flash memory, then write data to it, read the data back, compare the read and written data, 
	   and check that TransferStatus1 status is PASSED. Then, perform a block erase and verify that the erase operation is successful.

4. Notes:
	Connect the SPI1 interface on the N32G032R8L7_STB V1.0 development board to the W25Q128 flash memory on the N32G457QE_EVB development board. Ensure that both development boards share a common ground connection.
	