1������˵��

	1��SPI �����жϷ��ͺͽ�������

2��ʹ�û���

	������������� KEIL MDK-ARM V5.34.0.0
	Ӳ��������    ����N32G032R8L7_STB V1.0����

3��ʹ��˵��
	
	/* �������ģ�����÷���������:ʱ�ӣ�I/O�� */
        1��SystemClock��48MHz
        2��GPIO��SPI1: SCK--PA5�� MOSI--PA7,
		         SPI2: SCK--PB13��MISO--PB14
	3���жϣ�SPI1 �ж���ں��� SPI1_IRQHandler��SPI2 �ж���ں��� SPI2_3_IRQHandler

	/* ����Demo�Ĳ��Բ�������� */
        1.��������س���λ���У�
        2.SPI1 ��������Ҫ����ʱ���� SPI1_IRQHandler �жϺ������ͣ�SPI2 ��������Ҫ����ʱ���� SPI2_3_IRQHandler�жϺ������գ�
	  ���ݴ�����ɺ󣬲鿴 TransferStatus ״̬Ϊ PASSED��


4��ע������
    �����ߡ������������豸��ΪMOSI���ţ��ڴ��豸��ΪMISO���ţ�������SPI_InitStructure.CLKPOL = SPI_CLKPOL_HIGHʱ����Ӧ������ SPI SCK IO��Ҫ���ó�������
	

1. Functional Description:
    1. Perform SPI data transmission and reception with interrupts using a single wire.
	
2. Usage Environment:

	Software Development Environment: KEIL MDK-ARM V5.34.0.0
	Hardware Environment: Developed based on the evaluation board N32G032R8L7-STB V1.0

3. Usage Instructions:

	/* Describe the configuration methods for relevant modules, e.g., clock, I/O, etc */
	SystemClock: 48MHz
	GPIO:
		SPI1: SCK--PA5,  MOSI--PA7
		SPI2: SCK--PB13, MISO--PB14

	/* Describe the testing steps and observed behavior of the demo */
	1. After compiling, download the program and reset the board.
	2. When SPI1 has data to send, enter the SPI1_IRQHandler interrupt function to send data. When SPI2 needs to receive data, enter the SPI2_3_IRQHandler interrupt function to receive data. 
	   After data transmission is complete, check that the TransferStatus is in the PASSED state.

4. Notes:
	The "single wire" data line is MOSI at the master device and MISO at the slave device. When configuring SPI_InitStructure.CLKPOL = SPI_CLKPOL_HIGH, the corresponding master SPI SCK IO needs to be configured as pull-up.
	
	