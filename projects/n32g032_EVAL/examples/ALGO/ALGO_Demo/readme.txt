1、功能说明

    这个例程配置并演示使用各种算法时的计算结果。   

2、使用环境

   软件开发环境：
        IDE工具：KEIL MDK-ARM 5.21.1.0
    
    硬件环境：
        开发板 N32G032R8L7-STB


3、使用说明
	
    1、时钟源：HSI+PLL
    2、主时钟：48MHz
    3、USART1配置：
            TX  -->  PA9   
            RX  -->  PA10           
            波特率：115200       

    4、测试步骤与现象
        a.编译后下载程序复位运行；
        b.查看串口打印信息，分别确认随机数计算结果是否随机;
        AES算法的明文plain与密文解密结果decrypt out是否一致；
        SM4算法的明文plain与密文解密结果decrypt out是否一致；

4、注意事项
   无

1. Function description

     Encryption algorithm library API usage example


2. Use environment

     Software development environment: KEIL MDK-ARM 5.21.1.0
     Development board: N32G032R8L7-STB


3. Instructions for use
    
     1.Clock source: HSI+PLL
     2.Mian clock: 48MHz
     3.Debug serial port: 
            TX  -->  PA9   
            RX  -->  PA10           
            BAUT：115200 

     4.Use method:
         1. After compiling under KEIL, burn it to the EVB, power on
         2. Output status information through the serial port


4. Matters needing attention
     None