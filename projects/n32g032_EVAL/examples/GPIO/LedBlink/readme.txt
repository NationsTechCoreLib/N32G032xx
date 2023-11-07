1������˵��

	1��������չʾ IO ���� LED ��˸

2��ʹ�û���

	������������� KEIL MDK-ARM V5.34.0.0
	Ӳ��������    ����N32G032R8L7_STB V1.0����

3��ʹ��˵��
	
	/* �������ģ�����÷���������:ʱ�ӣ�I/O�� */
	SystemClock��48MHz
	GPIO��PB1��PB6��PB7 ���� LED(D1��D2��D3) ��˸

	/* ����Demo�Ĳ��Բ�������� */
	1.��������س���λ���У�
	2. LED(D1��D2��D3) ��˸��

4��ע������
	��
	
1. Functional Description:
    1. This routine shows IO control LED flashing
	
2. Usage Environment:

	Software Development Environment: KEIL MDK-ARM V5.34.0.0
	Hardware Environment: Developed based on the evaluation board N32G032R8L7-STB V1.0

3. Usage Instructions:

	/* Describe the configuration methods for relevant modules, e.g., clock, I/O, etc */
	System Clock: 48MHz
	GPIO: PB1, PB6, PB7 control LED(D1, D2, D3) flashing


	/* Describe the testing steps and observed behavior of the demo */

	1. After compiling, the downloaded program is reset and run;
	2. LED(D1, D2, D3) flickers;

4. Notes:
	None
