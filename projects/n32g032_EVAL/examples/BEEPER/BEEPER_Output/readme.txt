1������˵��

    ������չʾ������ģ����÷���
    
2��ʹ�û���

    �������������
        IDE���ߣ�KEIL MDK-ARM 5.26
    
    Ӳ��������
        ������ N32G032R8L7-STB

3��ʹ��˵��
	
    1��ʱ��Դ��HSE+PLL
    2����ʱ�ӣ�48MHz
    3������˿ڣ�
	PA6		AF_PP
	PB6		AF_PP
	PB7		AF_PP

    4�����Բ���������
        a���������ش��븴λ����
        b����ʾ�����鿴���Σ���֤���
	
4��ע������
    PB6��PB7�Ĳ��λ���


1. Function Description

    This routine demonstrates the usage of the beeper module.
    
2��Usage environment

    Software development environment:
        IDE tool: KEIL MDK-ARM 5.26
    
    Hardware environment:
        Development board N32G032R8L7-STB

3��Use instructions
	
    1��clock source: HSE + PLL
    2��Master clock: 48MHz
    3��Output port:
	PA6 AF_PP
	PB6 AF_PP
	PB7 AF_PP

    4��Test steps and phenomena
        a, compile and download the code reset run
        b, use an oscilloscope to check the waveform and verify the result.
	
4, Notes
    Complementary waveforms of PB6 and PB7