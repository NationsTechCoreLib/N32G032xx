1������˵��

	1��I2S ��ģʽͨ�� DMA �շ�����


2��ʹ�û���

	������������� KEIL MDK-ARM V5.34.0.0
	Ӳ��������    ����N32G032R8L7_STB V1.0����

3��ʹ��˵��
	
	/* �������ģ�����÷���������:ʱ�ӣ�I/O�� */
	1��SystemClock��48MHz
	2��GPIO������ģʽ DEMO �壩I2S1: WS--PA4��CK--PA5��SD--PA7
			 ����ģʽ DEMO �壩I2S1: WS--PA4��CK--PA5��SD--PA7
	3��DMA��I2S1 ���Ͳ��� DMA_CH3 ͨ����I2S1 ���ղ��� DMA_CH2 ͨ����
	4����־��ӡ����ģʽ DEMO �� PA9(TX)�������ʣ�115200
	
	/* ����Demo�Ĳ��Բ�������� */
	1.��������س���λ���У�
	2.��ģʽ DEMO ��ʹ�ģʽ DEMO ��PA4,PA5,PA7���Ӻú���ģʽ DEMO �����Ӵ��ڴ�ӡ���ߣ��ϵ磬
          �Ȱ�ס��ģʽ DEMO �帴λ�����ɣ��ٰ��´�ģʽ DEMO ��ĸ�λ������ģʽ DEMO �������������ɿ���ģʽ DEMO ��ĸ�λ�����鿴��ӡ���Գɹ���


4��ע������
	��Ҫ���� demo ����ϣ�һ�������¼��ģʽ����һ�������¼��ģʽ�������������һ���ϵ磬����������ӵ� VCC �� GND
	
1. Functional Description:
    1. I2S master mode sends and receives data through DMA
	
2. Usage Environment:

	Software Development Environment: KEIL MDK-ARM V5.34.0.0
	Hardware Environment: Developed based on the evaluation board N32G032R8L7-STB V1.0

3. Usage Instructions:

	/* Describe the configuration methods for relevant modules, e.g., clock, I/O, etc */
	1. System Clock: 48MHz
	2. GPIO: (Master mode DEMO board) I2S1: WS--PA4, CK--PA5, SD--PA7
	         (Slave  mode DEMO board) I2S1: WS--PA4, CK--PA5, SD--PA7
	3. DMA: DMA_CH3 channel is used for I2S1 transmission, DMA_CH2 channel is used for I2S1 reception.
	4. Log Printing: For the Slave Mode DEMO Board, use PA9(TX) for serial communication with a baud rate of 115200.


	/* Describe the testing steps and observed behavior of the demo */
	1. After compiling, the downloaded program is reset and run;
	2. After connecting the primary mode DEMO board to the secondary mode DEMO board PA4,PA5, and PA7, connect the primary mode DEMO board to the serial port printing tool, and power on the demo board.
	   First hold down the reset key of the primary mode DEMO board, then press the reset key of the secondary mode DEMO board, and then release the reset key of the primary mode DEMO board after running from the mode DEMO board to check the print test success.

4. Notes:
	Two demo boards are required to cooperate. One board is programmed with the master mode program, and the other board is programmed with the slave mode program. 
	Both boards need to be powered on together, and VCC and GND connections between the two boards are necessary.
	