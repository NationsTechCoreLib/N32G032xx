1、功能说明

	1、I2S 从模式通过 DMA 收发数据


2、使用环境

	软件开发环境： KEIL MDK-ARM V5.34.0.0
	硬件环境：    基于N32G032R8L7_STB V1.0开发

3、使用说明
	
	/* 描述相关模块配置方法；例如:时钟，I/O等 */
	1、SystemClock：48MHz
	2、GPIO：（主模式 DEMO 板）I2S1: WS--PA4、CK--PA5、SD--PA7
			 （从模式 DEMO 板）I2S1: WS--PA4、CK--PA5、SD--PA7
	3、DMA：I2S1 发送采用 DMA_CH3 通道，I2S1 接收采用 DMA_CH2 通道；
	4、日志打印：从模式 DEMO 板 PA9(TX)，波特率：115200
	
	/* 描述Demo的测试步骤和现象 */
        1.编译后下载程序复位运行；
        2.主模式 DEMO 板和从模式 DEMO 板PA4,PA5,PA7连接好后，从模式 DEMO 板连接串口打印工具，上电，
      先按住主模式 DEMO 板复位键不松，再按下从模式 DEMO 板的复位键，从模式 DEMO 板跑起来后再松开主模式 DEMO 板的复位键，查看打印测试成功；


4、注意事项
	需要两块 demo 板配合，一块板子烧录主模式程序，一块板子烧录从模式程序，两块板子需一起上电，连接两块板子的 VCC 和 GND

1. Functional Description:
    1. Transmit and receive data in I2S slave mode using DMA.
	
2. Usage Environment:

	Software Development Environment: KEIL MDK-ARM V5.34.0.0
	Hardware Environment: Developed based on the evaluation board N32G032R8L7-STB V1.0

3. Usage Instructions:

	/* Describe the configuration methods for relevant modules, e.g., clock, I/O, etc */
	1. System Clock: 48MHz
	2. GPIO: (Master Mode DEMO Board) I2S1: WS--PA4, CK--PA5, SD--PA7
			 (Slave Mode DEMO Board)  I2S1: WS--PA4, CK--PA5, SD--PA7
	3. DMA: DMA_CH3 channel is used for I2S1 transmission, DMA_CH2 channel is used for I2S1 reception.
	4. Log Printing: For the Slave Mode DEMO Board, use PA9(TX) for serial communication with a baud rate of 115200.


	/* Describe the testing steps and observed behavior of the demo */
	1. After compiling, download the program, reset, and run it.
	2. Connect PA4, PA5, and PA7 on the Master Mode DEMO Board to the corresponding pins on the Slave Mode DEMO Board. 
		Connect the Slave Mode DEMO Board to a serial communication tool and power it on. First, hold down the reset button on the Master Mode DEMO Board without releasing it, 
		then press the reset button on the Slave Mode DEMO Board. After the Slave Mode DEMO Board starts running, release the reset button on the Master Mode DEMO Board. 
		Check for successful test printing.

4. Notes:
	Two demo boards are required to cooperate. One board is programmed with the master mode program, and the other board is programmed with the slave mode program. 
	Both boards need to be powered on together, and VCC and GND connections between the two boards are necessary.