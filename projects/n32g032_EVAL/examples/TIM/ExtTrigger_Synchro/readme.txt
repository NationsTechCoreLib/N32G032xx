1������˵��
    1��TIM1 CH2�ſ�CH1��TIM3 TIM4
2��ʹ�û���
    �������������  KEIL MDK-ARM V5.26.2.0
    Ӳ��������      ����N32G032R8L7_STB����
3��ʹ��˵��
    ϵͳ���ã�
        1��ʱ��Դ��
                    HSE=8M,PLL=48M,AHB=48M,APB1=48M,APB2=48M,TIM1 CLK=48M,TIM3 CLK=48M,TIM4 CLK=48M
        2���˿����ã�
                    PA8ѡ��ΪTIM1 CH1���
                    PA3ѡ��ΪTIM1 CH2����
                    PA6ѡ��ΪTIM3 CH1���
                    PA4ѡ��ΪTIM4 CH1���
        3��TIM��
                    TIM1 CH2 �ſ�TIM1 CH1���ſ�TIM3,TIM4
    ʹ�÷�����
        1�������򿪵���ģʽ����ʾ���������߼������ǹ۲�TIM1 CH1,TIM3 CH1,TIM4 CH1�Ĳ���
        2��TIM1 CH2�ߵ�ƽ��ʱ����ʼ�������͵�ƽֹͣ
4��ע������
    ��

1. Function description
     1. TIM1 CH2 gated CH1 and TIM3
2. Use environment
    Software development environment: KEIL MDK-ARM V5.34.0.0
    Hardware environment: Developed based on the evaluation board N32G031C8L7-STB V1.0
3. Instructions for Use
    System configuration��
        1. Clock source:
                     HSE=8M, PLL=48M, AHB=48M, APB1=48M, APB2=48M, TIM1 CLK=48M, TIM3 CLK=48M
        2. Port configuration:
                     PA8 is selected as TIM1 CH1 output
                     PA3 is selected as TIM1 CH2 input
                     PA6 is selected as TIM3 CH1 output
		     PA4 is selected as TIM4 CH1 output
        3. TIM:
            TIM1 CH2 Gated TIM1 CH1, Gated TIM3,Gated TIM4
     Instructions:
    1. Open debugging mode after compilation and observe TIM1 CH1, TIM3 CH1,TIM4 CH1 waveforms with an oscilloscope or logic analyzer
         2. TIM1 CH2 high level timer starts counting, low level stops
4. Matters needing attention
    None