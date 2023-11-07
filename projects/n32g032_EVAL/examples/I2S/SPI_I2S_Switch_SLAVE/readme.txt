1������˵��

	1��I2S ��ģʽ������������Ժ��л��� SPI ��ģʽ�������ݣ����л��� I2S ��ģʽ��������


2��ʹ�û���

	������������� KEIL MDK-ARM V5.34.0.0
	Ӳ��������    ����N32G032R8L7_STB V1.0����

3��ʹ��˵��
	
	/* �������ģ�����÷���������:ʱ�ӣ�I/O�� */
	1��SystemClock��48MHz
	2��GPIO������ģʽ DEMO �壩I2S1: WS--PA4��CK--PA5��SD--PA7
			 ����ģʽ DEMO �壩I2S1: WS--PA4��CK--PA5��SD--PA7

	/* ����Demo�Ĳ��Բ�������� */
	1.��������س���λ���У�
	2.��ģʽ DEMO ��������ģʽ���Ȱ�ס��ģʽ DEMO �帴λ����Ȼ���ģʽ DEMO ��ȫ���ܣ����ɿ���ģʽ DEMO �帴λ�����鿴 TransferStatus1��TransferStatus2��TransferStatus3 ״̬Ϊ PASSED


4��ע������
	��Ҫ���� demo ����ϣ�һ�������¼��ģʽ����һ�������¼��ģʽ�������������һ���ϵ磬����������ӵ� VCC �� GND
	
	
1. Functional Description:
    1. After completing data reception in I2S slave mode, switch to SPI slave mode for data reception, and then switch back to I2S master mode for data reception.
	
2. Usage Environment:

	Software Development Environment: KEIL MDK-ARM V5.34.0.0
	Hardware Environment: Developed based on the evaluation board N32G032R8L7-STB V1.0

3. Usage Instructions:

	/* Describe the configuration methods for relevant modules, e.g., clock, I/O, etc */
	1. System Clock: 48MHz
	2. GPIO: (Master Mode DEMO Board) I2S1: WS--PA4, CK--PA5, SD--PA7
			 (Slave Mode DEMO Board)  I2S1: WS--PA4, CK--PA5, SD--PA7


	/* Describe the testing steps and observed behavior of the demo */
	1. After compiling, download the program, reset, and run it.
	2. Enter debug mode on the Slave Mode DEMO Board. First, hold down the reset button on the Master Mode DEMO Board, 
	   then start the Slave Mode DEMO Board at full speed, and then release the reset button on the Master Mode DEMO Board. 
	   Check that TransferStatus1, TransferStatus2, and TransferStatus3 are all marked as PASSED.

4. Notes:
	Two demo boards are required to cooperate. One board is programmed with the master mode program, and the other board is programmed with the slave mode program. 
	Both boards need to be powered on together, and VCC and GND connections between the two boards are necessary.	
	