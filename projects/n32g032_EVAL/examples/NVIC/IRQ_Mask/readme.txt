1������˵��

	/* ���������̹��� */
        ����������ò���ʾʹ��EXIT�ⲿ�жϼ�TIM��ʱ���ж�


2��ʹ�û���

	�������������KEIL MDK-ARM V5.34.0.0
    Ӳ������������������N32G032R8L7-STBV1.0����
        

3��ʹ��˵��
	
	/* �������ģ�����÷���������:ʱ�ӣ�I/O�� */
        SystemClock��48MHz
        USART��TX - PA9��������115200
	EXIT��PA0Ϊ��������ģʽ���ⲿ�ж��� - EXIT_LINE0�������ⲿ�ж�
	TIM��Ԥ��Ƶϵ�� - ��SystemClock/1200-1�������� - ��1200-1����������ʱ���ж�

	/* ����Demo�Ĳ��Բ�������� */
        1.��������س���λ���У�
        2.�鿴���ڴ�ӡ��Ϣ����ʱ���ж���Ϣÿ1S��ӡһ�Σ����°�����ӡֹͣ���ٴΰ����������ӡ��������������������


4��ע������
	1����������WAKEUP�����棨WAKEUP-PA0������ʱע��J11����ñ


1. Functional description

    /* A brief description of the function of the project */
    This routine configures and demonstrates the use of EXIT external interrupt and TIM timer interrupt.

2��Using environment

    Software Development Environment: KEIL MDK-ARM V5.34.0.0
    Hardware environment: based on the evaluation board N32G032R8L7-STBV1.0 development
        

3��Use instructions
	
        /* Describe how to configure the related modules; e.g.: Clock, I/O, etc. */
        SystemClock: 48MHz
        USART: TX - PA9, baud rate 115200
        EXIT: PA0 for floating input mode, external interrupt line - EXIT_LINE0, open external interrupt
        TIM: prescaler factor - (SystemClock/1200-1), period - (1200-1), turn on timer interrupt

	/* Describe the test steps and phenomenon of Demo */
        1��Compile and download the program to reset and run;
        2��View the serial port print information, timer interrupt information is printed every 1S, press the key to print stop, and press it again to continue printing, indicating that the program is running normally;


4��Notes
	1��the key can be used instead of WAKEUP key (WAKEUP-PA0), at this time pay attention to the J11 jumper cap