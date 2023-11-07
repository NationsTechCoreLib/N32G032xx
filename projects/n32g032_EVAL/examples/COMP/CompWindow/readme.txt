1������˵��
    ����ΪCOMP1/COMP2���ڱȽ���ģʽ���鿴�������
2��ʹ�û���
    �������������  KEIL MDK-ARM V5.26.2.0
    Ӳ��������      ����N32G032C8L7_STB����
3��ʹ��˵��
    ϵͳ���ã�
        1��ʱ��Դ��
                    HSE=8M,PLL=48M,AHB=48M,APB1=48M,APB2=48M,COMP CLK=48M
        2���˿����ã�
                    VREF1ѡ��Ϊģ�⹦��COMP1 INP������Ϊ45����(45+1)/64*3.3V=2.37V��
                    VREF2ѡ��Ϊģ�⹦��COMP2 INP������Ϊ25����(25+1)/64*3.3V=1.34V��
                    PA4ѡ��Ϊģ�⹦��COMP1 INM��COMP2 INM
                    PA7ѡ��Ϊ���ڱȽ������
        3��COMP��
                    ����Ϊ���˹���PA4���ڱȽ���ģʽ
    ʹ�÷�����
        1����������ص������壬PA4���ӵ��ɵ���Դ��PA7���ӵ�ʾ���������ñ�
4��ע������
    ��
	
1. Function description
     1. Configure in COMP1/COMP2 window comparator mode , view the output waveform

2. Use environment
     Software development environment: KEIL MDK-ARM V5.26.2.0
     Hardware environment: Developed based on the development board N32G032R8L7_STB

3. Instructions for use
     System Configuration;
         1. Clock source:
                     HSE=8M, PLL=48M, AHB=48M, APB1=48M, APB2=48M, COMP CLK=48M
         2. Port configuration:
                     Set VREF1 to analog function COMP1 INP: 45 (which corresponds to (45+1)/643.3V=2.37V).
					 Set VREF2 to analog function COMP2 INP: 25 (which corresponds to (25+1)/643.3V=1.34V).
                     PA4 is selected as the analog function, COMP1 INM,COMP2 INM
                     PA7 is selected as the analog function, COMP OUT
         3. COMP:
                    Configure it as a window comparator mode with the negative input shared with PA4
     Instructions:
         1. After compilation, download it to the development board. Connect PA4 to an adjustable power supply and PA7 to an oscilloscope or multimeter

4. Matters needing attention
   None