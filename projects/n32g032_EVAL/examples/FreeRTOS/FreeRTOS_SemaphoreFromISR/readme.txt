1、功能说明

    此例程为FreeRTOS通过ISR释放信号量来切换LED灯的示例。创建一个线程，不断尝试获取信号量以切换LED灯。用户可通过按下按键触发中断来释放信号量，使线程实现LED灯切换的功能。
    
2、使用环境

    软件开发环境：
        IDE工具：KEIL MDK-ARM 5.30
    
    硬件环境：
        开发板 N32G032R8L7-STB

3、使用说明
	
    1、LED1----------PB1
    2、KEY-----------PA5

    3、测试步骤与现象
        a，编译下载代码复位运行
        b，LED1亮，按下按键KEY2 LED1灭，再按LED1又被点亮，以此反复。
	
4、注意事项
     1、systick作为时间基准源，并配置为1ms tick 


1、Function Description

    This routine is an example of FreeRTOS toggling LEDs by releasing a semaphore via ISR. A thread is created to keep trying to get the signal quantity to switch the LED light. Users can trigger an interrupt by pressing a key to release the signal quantity, so that the thread can realize the function of switching the LED light.
    
2、Using environment

    Software development environment:
        IDE tool: KEIL MDK-ARM 5.30
    
    Hardware environment:
        Development board N32G032R8L7-STB

3、Use instructions
	
    1、LED1----------PB1
    2、KEY-----------PA5

    3、test steps and phenomena
        a, compile and download the code reset run
        b, LED1 is bright, press the key KEY2 LED1 extinguished, and then press LED1 is lit again, and so on.
	
4, Notes
     1, systick as a time reference source, and configured as 1ms tick 

