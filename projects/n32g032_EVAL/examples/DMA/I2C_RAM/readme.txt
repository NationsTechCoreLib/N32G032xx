1、功能说明

    此例程提供了一种DMA用法，用于在I2C外设与RAM之间传输数据。  

2、使用环境

    软件开发环境：
        IDE工具：KEIL MDK-ARM 5.30
    
    硬件环境：
        开发板 N32G032R8L7-STB V1.0


3、使用说明
	
    1、时钟源：HSE+PLL
    2、主时钟：48MHz
    3、DMA通道：DMA_CH5，DMA_CH6
    4、I2C1 配置：
            SCL   -->  PB6
            SDA   -->  PB7
            ADDR：0x30(7bit)
            CLOCK：100K
    
    5、I2C2 配置：
            SCL   -->  PA6
            SDA   -->  PA7
            ADDR：0x30(7bit)
            CLOCK：100K
    
    6、USART1配置：
            TX  -->  PA9
            波特率：115200
            数据位：8bit
            停止位：1bit
            无校验

    7、测试步骤与现象
        a，编译下载代码复位运行
        b，从串口看打印信息，验证结果

4、注意事项
    无


1、Function Description

    This routine provides a DMA usage to transfer data between I2C peripheral and RAM.  

2、Usage Environment

    Software development environment:
        IDE tool: KEIL MDK-ARM 5.30
    
    Hardware environment:
        Development board N32G032R8L7-STB V1.0


3、Use instructions
	
    1、clock source: HSE + PLL
    2、Master clock: 48MHz
    3、DMA Channel: DMA_CH5, DMA_CH6
    4、I2C1 Configuration:
            SCL --> PB6
            SDA --> PB7
            ADDR: 0x30(7bit)
            CLOCK: 100K
    
    5、I2C2 Configuration:
            SCL --> PA6
            SDA --> PA7
            ADDR: 0x30(7bit)
            CLOCK: 100K
    
    6、USART1 Configuration:
            TX --> PA9
            Baud rate: 115200
            Data bit: 8bit
            Stop bit: 1bit
            No parity

    7、test steps and phenomena
        a, compile and download the code reset run
        b, from the serial port to see the print information to verify the results

4、Notes
    No