1������˵��
    1��TIM1�����ſ�TIM3��TIM3�����ſ�TIM4
2��ʹ�û���
    �������������  KEIL MDK-ARM V5.26.2.0
    Ӳ��������      ����N32G032R8L7_STB����
3��ʹ��˵��
    ϵͳ���ã�
        1��ʱ��Դ��
                    HSE=8M,PLL=48M,AHB=48M,APB1=48M,APB2=48M,TIM1 CLK=48M,TIM3 CLK=48M,TIM4 CLK=48M
        2���˿����ã�
                    PA8ѡ��ΪTIM1 CH1���
                    PA2ѡ��ΪTIM3 CH1���
                    PA4ѡ��ΪTIM4 CH1���
        3��TIM��
                    TIM1 �������ſ�TIM3��TIM3�������ſ�TIM4
    ʹ�÷�����
        1�������򿪵���ģʽ����ʾ���������߼������ǹ۲�TIM1 CH1��TIM3 CH1��TIM4 CH1����
        2��TIM3 4������TIM1��TIM4 4������TIM3
4��ע������
    ��

1. Function description
     1. TIM1 cycle gated TIM3
2. Use environment
    Software development environment: KEIL MDK-ARM V5.34.0.0
    Hardware environment: Developed based on the evaluation board N32G031C8L7-STB V1.0
3. Instructions for Use
    System configuration;
        1. Clock source:
            HSE=8M, PLL=48M, AHB=48M, APB1=48M, APB2=48M, TIM1 CLK=48M, TIM3 CLK=48M,TIM4 CLK=48M
        2. Port configuration:
                     PA8 is selected as TIM1 CH1 output
                     PA2 is selected as TIM3 CH1 output
		     PA4 is selected as TIM4 CH1 output
        3. TIM:
                     TIM1 cycle gating TIM3,TIM3 cycle gating TIM4
    Instructions:
        1. Open debugging mode after compilation and observe TIM1 CH1, TIM3 CH1 ��TIM4 CH1 waveforms with an oscilloscope or logic analyzer
         2. TIM3 4 times cycle TIM1,TIM4 4 times cycle TIM3
4. Matters needing attention
    None