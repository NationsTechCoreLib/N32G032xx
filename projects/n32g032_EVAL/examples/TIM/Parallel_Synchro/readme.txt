1������˵��
	1��TIM1 �����ſ�TIM3 TIM4
2��ʹ�û���
	�������������  KEIL MDK-ARM V5.26.2.0
    Ӳ��������      ����N32G032R8L7_STB����
3��ʹ��˵��
	ϵͳ���ã�
		1��ʱ��Դ��
		            HSE=8M,PLL=48M,AHB=48M,APB1=48M,APB2=48M,TIM1 CLK=48M,TIM3 CLK=48M,TIM4 CLK=48M
		2���˿����ã�
					PA8ѡ��ΪTIM1��CH1���
					PA2ѡ��ΪTIM3��CH1���
					PA4ѡ��ΪTIM4��CH1���
	    3��TIM��
		            TIM1 ���ڴ����ſ�TIM3 TIM4��CH1,��TIM3Ϊ10������TIM2����TIM4Ϊ5������TIM1
	ʹ�÷�����
		1�������򿪵���ģʽ����ʾ���������߼������ǹ۲�TIM1 CH1��TIM3 CH1��TIM4 CH1�Ĳ���
	    2��TIM4����5����TIM1��TIM3����10����TIM1
4��ע������
    ��

/*** For English users   ***/
1. Function description
    1. TIM1 cycle gated TIM3
2. Use environment
    Software development environment: KEIL MDK-ARM V5.34.0.0
    Hardware environment: Developed based on the evaluation board N32G031C8L7-STB V1.0
3. Instructions for use
    System configuration:
        1. Clock source:
            HSE=8M, PLL=48M, AHB=48M, APB1=48M, APB2=48M, TIM1 CLK=48M, TIM3 CLK=48M,TIM4 CLK=48M
        2. Port configuration:
            PA8 is selected as CH1 output of TIM1
            PA2 is selected as CH1 output of TIM3
	    PA4 is selected as CH1 output of TIM4
        3. TIM:
            TIM1 cycle triggers CH1 of gated TIM3/TIM4, i.e. TIM3 is 10 times cycle in TIM1,TIM4 is 5 times cycle in TIM1
Usage method:
Usage method:
    1. Open debugging mode after compilation and observe TIM1 CH1, TIM3 CH1,TIM4 CH1 waveforms with oscilloscope or logic analyzer
         2. The cycle of TIM3 is 10 times that of TIM1,The cycle of TIM4 is 5 times that of TIM1
4. Matters needing attention
    None