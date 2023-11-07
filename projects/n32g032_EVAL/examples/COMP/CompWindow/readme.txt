1、功能说明
    配置为COMP1/COMP2窗口比较器模式，查看输出波形
2、使用环境
    软件开发环境：  KEIL MDK-ARM V5.26.2.0
    硬件环境：      基于N32G032C8L7_STB开发
3、使用说明
    系统配置；
        1、时钟源：
                    HSE=8M,PLL=48M,AHB=48M,APB1=48M,APB2=48M,COMP CLK=48M
        2、端口配置：
                    VREF1选择为模拟功能COMP1 INP：设置为45（即(45+1)/64*3.3V=2.37V）
                    VREF2选择为模拟功能COMP2 INP：设置为25（即(25+1)/64*3.3V=1.34V）
                    PA4选择为模拟功能COMP1 INM、COMP2 INM
                    PA7选择为窗口比较器输出
        3、COMP：
                    配置为负端共用PA4窗口比较器模式
    使用方法：
        1、编译后下载到开发板，PA4连接到可调电源，PA7连接到示波器或万用表
4、注意事项
    无
	
1. Function description
     1. Configure in COMP1/COMP2 window comparator mode , view the output waveform

2. Use environment
     Software development environment: KEIL MDK-ARM V5.26.2.0
     Hardware environment: Developed based on the development board N32G032R8L7_STB

3. Instructions for use
     System Configuration;
         1. Clock source:
                     HSE=8M, PLL=48M, AHB=48M, APB1=48M, APB2=48M, COMP CLK=48M
         2. Port configuration:
                     Set VREF1 to analog function COMP1 INP: 45 (which corresponds to (45+1)/643.3V=2.37V).
					 Set VREF2 to analog function COMP2 INP: 25 (which corresponds to (25+1)/643.3V=1.34V).
                     PA4 is selected as the analog function, COMP1 INM,COMP2 INM
                     PA7 is selected as the analog function, COMP OUT
         3. COMP:
                    Configure it as a window comparator mode with the negative input shared with PA4
     Instructions:
         1. After compilation, download it to the development board. Connect PA4 to an adjustable power supply and PA7 to an oscilloscope or multimeter

4. Matters needing attention
   None