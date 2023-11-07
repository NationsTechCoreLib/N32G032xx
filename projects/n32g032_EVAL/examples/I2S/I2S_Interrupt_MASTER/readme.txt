1、功能说明

	1、I2S 主模式通过中断发送数据


2、使用环境

	软件开发环境： KEIL MDK-ARM V5.34.0.0
	硬件环境：    基于N32G032R8L7_STB V1.0开发

3、使用说明
	
	/* 描述相关模块配置方法；例如:时钟，I/O等 */
	1、SystemClock：48MHz
	2、GPIO：（主模式 DEMO 板）I2S1: WS--PA4、CK--PA5、SD--PA7
			 （从模式 DEMO 板）I2S1: WS--PA4、CK--PA5、SD--PA7
	3、中断：I2S1 中断入口函数 SPI1_IRQHandler


	/* 描述Demo的测试步骤和现象 */
	1.编译后下载程序复位运行；
	2.从模式 DEMO 板进入调试模式，先按住主模式 DEMO 板复位键，然后从模式 DEMO 板全速跑，再松开主模式 DEMO 板复位键。


4、注意事项
	需要两块 demo 板配合，一块板子烧录主模式程序，一块板子烧录从模式程序，两块板子需一起上电，连接两块板子的 VCC 和 GND
	
	
1. Functional Description:
    1. Transmit data in I2S master mode using interrupts.
	
2. Usage Environment:

	Software Development Environment: KEIL MDK-ARM V5.34.0.0
	Hardware Environment: Developed based on the evaluation board N32G032R8L7-STB V1.0

3. Usage Instructions:

	/* Describe the configuration methods for relevant modules, e.g., clock, I/O, etc */
	1. System Clock: 48MHz
	2. GPIO: (Master Mode DEMO Board) I2S1: WS--PA4, CK--PA5, SD--PA7
			 (Slave Mode DEMO Board)  I2S1: WS--PA4, CK--PA5, SD--PA7
	3. Interrupts: I2S1 interrupt entry function SPI1_IRQHandler.


	/* Describe the testing steps and observed behavior of the demo */
	1. After compiling, download the program, reset, and run it.
	2. Enter debug mode on the Slave Mode DEMO Board. First, hold down the reset button on the Master Mode DEMO Board, 
	   then start the Slave Mode DEMO Board at full speed, and then release the reset button on the Master Mode DEMO Board.

4. Notes:
	Two demo boards are required to cooperate. One board is programmed with the master mode program, and the other board is programmed with the slave mode program. 
	Both boards need to be powered on together, and VCC and GND connections between the two boards are necessary.