1、功能说明

    此例程展示蜂鸣器模块的用法。
    
2、使用环境

    软件开发环境：
        IDE工具：KEIL MDK-ARM 5.26
    
    硬件环境：
        开发板 N32G032R8L7-STB

3、使用说明
	
    1、时钟源：HSE+PLL
    2、主时钟：48MHz
    3、输出端口：
	PA6		AF_PP
	PB6		AF_PP
	PB7		AF_PP

    4、测试步骤与现象
        a，编译下载代码复位运行
        b，用示波器查看波形，验证结果
	
4、注意事项
    PB6与PB7的波形互补


1. Function Description

    This routine demonstrates the usage of the beeper module.
    
2、Usage environment

    Software development environment:
        IDE tool: KEIL MDK-ARM 5.26
    
    Hardware environment:
        Development board N32G032R8L7-STB

3、Use instructions
	
    1、clock source: HSE + PLL
    2、Master clock: 48MHz
    3、Output port:
	PA6 AF_PP
	PB6 AF_PP
	PB7 AF_PP

    4、Test steps and phenomena
        a, compile and download the code reset run
        b, use an oscilloscope to check the waveform and verify the result.
	
4, Notes
    Complementary waveforms of PB6 and PB7