1������˵��

	1��������չʾͨ���ⲿ�����жϣ����� LED ��˸


2��ʹ�û���

	������������� KEIL MDK-ARM V5.34.0.0
	Ӳ��������    ����N32G032R8L7_STB V1.0����

3��ʹ��˵��
	
	/* �������ģ�����÷���������:ʱ�ӣ�I/O�� */
	SystemClock��48MHz
	GPIO��PA5 ѡ����Ϊ�ⲿ�ж���ڣ�PB7 ���� LED(D3) ��˸


	/* ����Demo�Ĳ��Բ�������� */
	1.��������س���λ���У�
	2.�����ɿ� KEY2 ������LED ��˸��


4��ע������
	��


1. Functional Description:
    1. This example demonstrates controlling LED blinking through an external trigger interrupt.
	
2. Usage Environment:

	Software Development Environment: KEIL MDK-ARM V5.34.0.0
	Hardware Environment: Developed based on the evaluation board N32G032R8L7-STB V1.0

3. Usage Instructions:

	/* Describe the configuration methods for relevant modules, e.g., clock, I/O, etc */
	System Clock: 48MHz
	GPIO: PA5 selected as an external interrupt input, PB7 controls LED (D3) blinking.

	/* Describe the testing steps and observed behavior of the demo */

	1. After compilation, download the program and reset to run.
	Press and release the KEY2 button; the LED will blink.

4. Notes:
	None