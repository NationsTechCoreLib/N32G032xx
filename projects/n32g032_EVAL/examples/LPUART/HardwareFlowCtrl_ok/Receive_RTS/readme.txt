1、功能说明

	该测例演示了Board1_LPUART与Board2_LPUART间使用硬件流控制的基础通信。
    首先，Board1_LPUART利用CTS发送TxBuffer1数据，Board2_LPUART利用RTS接收
数据，存至RxBuffer1。
    随后，比较接收数据与发送数据，比较结果存入TransferStatus变量。


2、使用环境

	软件开发环境：KEIL MDK-ARM Professional Version 5.26.2.0

        硬件环境：最小系统板N32G032C8L7-STB_V1.1


3、使用说明
	
	系统时钟配置如下：
    - 时钟源 = HSI + PLL
    - 系统时钟 = 48MHz
    
    Board1_LPUART配置如下：
    - 波特率 = 9600 baud
    - 字长 = 8数据位（固定）
    - 1停止位（固定）
    - 校验控制禁用
    - CTS硬件流控制使能
    - 发送器使能
    
    Board2_LPUART配置如下：
    - 波特率 = 9600 baud
    - 字长 = 8数据位（固定）
    - 1停止位（固定）
    - 校验控制禁用
    RTS硬件流控制使能
    - 接收器使能  
    
    
    LPUART引脚连接如下：    
    - Board1_LPUART_Tx.PB6    <------->   Board2_LPUART_Rx.PB7
    - Board1_LPUART_CTS.PA6   <------->   Board2_LPUART_RTS.PB1  

    
    测试步骤与现象：
    - Demo在KEIL环境下编译后，下载至MCU
    - 复位运行，查看变量TransferStatus，其中，PASSED为测试通过，FAILED
      为测试异常


4、注意事项
1. Function description

    This test example demonstrates the basic communication between Board1_LPUART and Board2_LPUART using hardware flow control. USARTz can be USART1.
     First, Board1_LPUART uses CTS to send TxBuffer1 data, USARTz uses RTS to receive data and stores it in RxBuffer1;
     Then, compare the received data with the sent data, and the comparison results are stored in the variables TransferStatus1 and TransferStatus2 respectively.


2. Use environment

    Software development environment: KEIL MDK-ARM Professional Version 5.26.2.0

    Hardware environment: minimum system board N32G032C8L7-STB_V1.1


3. Instructions for use

    The system clock configuration is as follows:
    -Clock source = HSI + PLL
    -System clock = 48MHz
    
    The Board1_LPUART configuration is as follows:
    -Baud rate = 9600 baud
    -Word length = 8 data bits (fixed)
    -1 stop bit (fixed)
    -Verification control disabled
    -CTS and RTS hardware flow control enable
    -Receiver and transmitter enable
   
    The Board2_LPUART configuration is as follows:
    -Baud rate = 9600 baud
    -Word length = 8 data bits
    -1 stop bit
    -Verification control disabled
    -CTS and RTS hardware flow control enable)
    -Receiver and transmitter enable
    
    
    The LPUART pin connections are as follows:
    - Board1_LPUART_Tx.PB6    <------->   Board2_LPUART_Rx.PB7
    - Board1_LPUART_CTS.PA6   <------->   Board2_LPUART_RTS.PB1  

    
    Test steps and phenomena:
    -After the Demo is compiled in the KEIL environment, download it to the MCU
    -Reset operation, check the variables TransferStatus in turn, among them,
      PASSED means the test passed, FAILED means the test is abnormal


4. Matters needing attention
