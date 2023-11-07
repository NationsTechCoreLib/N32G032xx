1������˵��
    1��IWDG��λ���ܡ�


2��ʹ�û���

    �������������KEIL MDK-ARM V5.25

    Ӳ��������
        1������������N32G032R8L7-STB V1.1����
        2��MCU��N32G032R8L7

3��ʹ��˵��
	
    ϵͳ���ã�
        1��IWDGʱ��Դ��LSI
        2����ʱʱ��ֵ��250ms(1.06666ms*234 = 249.99)
        3��ָʾ�ƣ�LED1(PA4) LED1(PA5)
            
    ʹ�÷�����
        1����KEIL�±������¼�������壬�ϵ��ָʾ��LED2��ͣ����˸��˵��IWDG����ι���������������С�
        2����Delay(200)���������ĳ�250���ϣ�����ϵͳ��һֱ���ڸ�λ״̬��LED1����


4��ע������
    1�����ͨ����¼�����棬��Ҫ����DBG_ConfigPeriph(DBG_IWDG_STOP,ENABLE);
    2��250ms�����ۼ���õ��ĳ�ʱʱ��ֵ��ʵ������£�LSIʱ�Ӵ���ƫ�����ʱ�����Ĳ�����ʵ�ʶ�����LSIʱ�ӵ�ƫ�Χ��������ֲᡣ


1��Function Description
    1��IWDG reset function.


2��Using environment

    Software development environment: KEIL MDK-ARM V5.25

    Hardware environment:
        1��based on the evaluation board N32G032R8L7-STB V1.1 development
        2��MCU��N32G032R8L7

3��Use instructions
	
    System configuration;
        1��IWDG clock source: LSI
        2��timeout time value: 250ms (1.06666ms * 234 = 249.99)
        3��Indicator: LED1 (PA4) LED1 (PA5)
            
    Usage:
        1��compiled under KEIL and burned to the evaluation board, after power on, the indicator LED2 keeps flashing. It means that IWDG feeds the dog normally and the code runs normally.
        2��the Delay (200) function parameter is changed to 250 or more, the whole system will always be in the reset state, LED1 is on.

4, Notes
    1��if through the burner emulation, you need to turn on DBG_ConfigPeriph(DBG_IWDG_STOP,ENABLE);
    2��250ms is the theoretical calculation of the timeout value, in practice, the LSI clock deviation, so the parameters of the delay function for the actual depending on the LSI clock deviation range see the datasheet.