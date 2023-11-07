1������˵��
    1��TIM3 TIM4��TIM1�����¼���
2��ʹ�û���
    �������������  KEIL MDK-ARM V5.26.2.0
    Ӳ��������      ����N32G032R8L7_STB����
3��ʹ��˵��
    ϵͳ���ã�
        1��ʱ��Դ��
                    HSE=8M,PLL=48M,AHB=48M,APB1=48M,APB2=48M,TIM1 CLK=48M,TIM3 CLK=48M,TIM4 CLK=48M
        2���˿����ã�
                    PA6ѡ��ΪTIM3��CH1���
                    PA4ѡ��ΪTIM4��CH1���
                    PA8ѡ��ΪTIM1��CH1���
        3��TIM��
                    TIM1 CH1 ���ڴ���TIM3 TIM4���ſ�
    ʹ�÷�����
        1�������򿪵���ģʽ����ʾ���������߼������ǹ۲�TIM1 CH1��TIM3 CH1��TIM4 CH1�Ĳ���
        2���������к�TIM3 15������TIM1��TIM4 10������TIM1
4��ע������
    ��

1. Function description
     1. TIM3 counts under TIM1 cycle
2. Use environment
     Software development environment: KEIL MDK-ARM V5.34.0.0
     Hardware environment: Developed based on N32G031C8L7_STB V1.0
3. Instructions for use
     System Configuration;
         1. Clock source:
                     HSE=8M,PLL=48M,AHB=48M,APB1=48M,APB2=48M,TIM1 CLK=48M,TIM3 CLK=48M,TIM4 CLK=48M
         2. Port configuration:
                     PA6 is selected as the CH1 output of TIM3
		     PA4 is selected as the CH1 output of TIM4
                     PA8 is selected as the CH1 output of TIM1
         3. TIM:
                     TIM1 CH1 periodically triggers the gate control of TIM3/TIM4
     Instructions:
         1. Open the debug mode after compiling, and observe the waveforms of TIM1 CH1, TIM3 CH1,TIM4 CH1 with an oscilloscope or logic analyzer
         2. After the program runs, The period of TIM3 is 15 times that of TIM1.The period of TIM4 is 10 times that of TIM1
4. Matters needing attention
    None