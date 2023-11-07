1、功能说明

	1、SPI 单线中断发送和接收数据

2、使用环境

	软件开发环境： KEIL MDK-ARM V5.34.0.0
	硬件环境：    基于N32G032R8L7_STB V1.0开发

3、使用说明
	
	/* 描述相关模块配置方法；例如:时钟，I/O等 */
        1、SystemClock：48MHz
        2、GPIO：SPI1: SCK--PA5、 MOSI--PA7,
		         SPI2: SCK--PB13、MISO--PB14
	3、中断：SPI1 中断入口函数 SPI1_IRQHandler，SPI2 中断入口函数 SPI2_3_IRQHandler

	/* 描述Demo的测试步骤和现象 */
        1.编译后下载程序复位运行；
        2.SPI1 有数据需要发送时进入 SPI1_IRQHandler 中断函数发送，SPI2 有数据需要接收时进入 SPI2_3_IRQHandler中断函数接收，
	  数据传输完成后，查看 TransferStatus 状态为 PASSED；


4、注意事项
    “单线”数据线在主设备端为MOSI引脚，在从设备端为MISO引脚，当配置SPI_InitStructure.CLKPOL = SPI_CLKPOL_HIGH时，对应的主机 SPI SCK IO需要配置成上拉。
	

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
	
	