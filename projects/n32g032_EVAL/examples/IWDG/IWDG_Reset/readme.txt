1、功能说明
    1、IWDG复位功能。


2、使用环境

    软件开发环境：KEIL MDK-ARM V5.25

    硬件环境：
        1、基于评估板N32G032R8L7-STB V1.1开发
        2、MCU：N32G032R8L7

3、使用说明
	
    系统配置；
        1、IWDG时钟源：LSI
        2、超时时间值：250ms(1.06666ms*234 = 249.99)
        3、指示灯：LED1(PA4) LED1(PA5)
            
    使用方法：
        1、在KEIL下编译后烧录到评估板，上电后，指示灯LED2不停的闪烁。说明IWDG正常喂狗，代码正常运行。
        2、把Delay(200)函数参数改成250以上，整个系统将一直处于复位状态，LED1亮。


4、注意事项
    1、如果通过烧录器仿真，需要开启DBG_ConfigPeriph(DBG_IWDG_STOP,ENABLE);
    2、250ms是理论计算得到的超时时间值，实际情况下，LSI时钟存在偏差，故延时函数的参数因实际而定。LSI时钟的偏差范围详见数据手册。


1、Function Description
    1、IWDG reset function.


2、Using environment

    Software development environment: KEIL MDK-ARM V5.25

    Hardware environment:
        1、based on the evaluation board N32G032R8L7-STB V1.1 development
        2、MCU：N32G032R8L7

3、Use instructions
	
    System configuration;
        1、IWDG clock source: LSI
        2、timeout time value: 250ms (1.06666ms * 234 = 249.99)
        3、Indicator: LED1 (PA4) LED1 (PA5)
            
    Usage:
        1、compiled under KEIL and burned to the evaluation board, after power on, the indicator LED2 keeps flashing. It means that IWDG feeds the dog normally and the code runs normally.
        2、the Delay (200) function parameter is changed to 250 or more, the whole system will always be in the reset state, LED1 is on.

4, Notes
    1、if through the burner emulation, you need to turn on DBG_ConfigPeriph(DBG_IWDG_STOP,ENABLE);
    2、250ms is the theoretical calculation of the timeout value, in practice, the LSI clock deviation, so the parameters of the delay function for the actual depending on the LSI clock deviation range see the datasheet.