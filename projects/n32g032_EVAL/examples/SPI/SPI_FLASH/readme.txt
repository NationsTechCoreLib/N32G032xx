1、功能说明

	1、SPI 读、写、擦除 W25Q128

2、使用环境

	软件开发环境： KEIL MDK-ARM V5.34.0.0
	硬件环境：    基于N32G032R8L7_STB V1.0开发

3、使用说明
	
	/* 描述相关模块配置方法；例如:时钟，I/O等 */
	1、SystemClock：48MHz
	2、SPI1: NSS--PA4、SCK--PA5、MISO--PA6、MOSI--PA7


	/* 描述Demo的测试步骤和现象 */
	1.编译后下载程序复位运行；
	2.通过 SPI1 读取 W25Q128 的 ID，然后写数据，再读出来，比较读写数据，查看 TransferStatus1 状态为 PASSED，然后擦除块，检查擦除块正常。

4、注意事项
	将 N32G032R8L7_STB V1.0 开发板上的 SPI1 接口接在 N32G457QE_EVB 开发板的 W25Q128 上，两个开发板需要共地
	
	
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
	