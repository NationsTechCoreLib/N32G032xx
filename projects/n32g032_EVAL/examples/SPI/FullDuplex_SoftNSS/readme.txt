1、功能说明

	1、SPI 全双工软件 NSS 模式发送接收数据


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
	2.SPI1 初始化位主机，发送数据，SPI2 初始化位丛机，接收数据 ，传输完成后，检查数据，查看 TransferStatus1 和 TransferStatus2 状态为 PASSED，
	  SPI2 初始化位主机，发送数据，SPI1 初始化位丛机，接收数据 ，传输完成后，检查数据，查看 TransferStatus3 和 TransferStatus4 状态为 PASSED；


4、注意事项
	无
	

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
