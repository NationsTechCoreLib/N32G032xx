1、功能说明

	1、SPI 发送接收数据进行 CRC 校验

2、使用环境

	软件开发环境： KEIL MDK-ARM V5.34.0.0
	硬件环境：    基于N32G032R8L7_STB V1.0开发

3、使用说明
	
	/* 描述相关模块配置方法；例如:时钟，I/O等 */
	SystemClock：48MHz
	GPIO：SPI1: SCK--PA5、 MISO--PA6、 MOSI--PA7,
		  SPI2: SCK--PB13、MISO--PB14、MOSI--PB15，


	/* 描述Demo的测试步骤和现象 */
	1.编译后下载程序复位运行；
	2.SPI1、SPI2 同时收发数据，传输完成后，发送 CRC 数据，检查数据和 CRC 值，查看 TransferStatus1 和 TransferStatus2 状态为 PASSED，再查看 CRC 值；


4、注意事项
    当SPI速率为12Mbps，且配置CRC校验时，只能通过DMA进行通信。
	
	
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
	
