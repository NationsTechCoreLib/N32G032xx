1、功能说明

    此例程展示了作为主机使用CAN收发数据。   

2、使用环境

     软件开发环境：KEIL MDK-ARM V5.34.0.0
     硬件环境：基于评估板N32G032R8L7-STBV1.0开发

3、使用说明
	
    1、时钟源：HSE+PLL
    2、主时钟：48MHz
    3、CAN配置：
            TX   -->  PA4          
            RX   -->  PA5         
            波特率：500K
            
    4、USART1配置：
            TX  -->  PA9   
            RX  -->  PA10           
            波特率：115200
        

    5、测试步骤与现象
        a，跳线连接从机CAN
        b，编译下载代码复位运行
        c，从串口看打印信息，若主机接收到的数据与发出的数据一致则打印通过

4、注意事项
    从机搭配Normal_Slave_CAN例程使用


1. Function Description

    This routine shows the use of CAN to send and receive data as a host.   

2、Using environment

     Software development environment: KEIL MDK-ARM V5.34.0.0
     Hardware environment: based on evaluation board N32G032R8L7-STBV1.0 development

3, the use of instructions
	
    1、Clock source: HSE+PLL
    2、Master clock: 48MHz
    3、CAN configuration:
            TX --> PA4          
            RX --> PA5         
            Baud rate: 500K
            
    4、USART1 configuration:
            TX --> PA9   
            RX --> PA10           
            Baud rate: 115200
        

    5、Test steps and phenomena
        a, jumper connection slave CAN
        b, compile and download the code reset run
        c, from the serial port to see the print information, if the data received by the host and the data issued by the same print passes

4, Notes
    Slave with Normal_Slave_CAN routine to use