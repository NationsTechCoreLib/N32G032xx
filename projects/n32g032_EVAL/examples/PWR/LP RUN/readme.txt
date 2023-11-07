1������˵��
    1��LP RUNģʽ�Ľ�����˳���


2��ʹ�û���

    ������������� KEIL MDK-ARM V5.34.0.0
	Ӳ��������    ����N32G032R8L7_STB V1.0����

3��ʹ��˵��

    /* �������ģ�����÷���������:ʱ�ӣ�I/O�� */
	1��ʱ��Դ��HSE+PLL
	2��ʱ��Ƶ�ʣ�48M

    /* ����Demo�Ĳ��Բ�������� */
	��KEIL�±������¼�������壬���ӵ������ϵ���һ�ᣬ�������Ա�С���ֹ�һ������ֱ��
    ѭ��������

4��ע������
    ������LP RUNģʽʱ��ϵͳʱ���л�����LSE/LSI�����˳�ʱ����Ҫ�л��û�Ĭ��ϵͳʱ��
	
	
1. Functional Description:
    1. Entry and Exit from LP RUN Mode.
	
2. Usage Environment:

	Software Development Environment: KEIL MDK-ARM V5.34.0.0
	Hardware Environment: Developed based on the evaluation board N32G032R8L7-STB V1.0

3. Usage Instructions:

	/* Describe the configuration methods for relevant modules, e.g., clock, I/O, etc */
	1. Clock Source: HSE+PLL
	2. Clock Frequency: 48MHz

	/* Describe the testing steps and observed behavior of the demo */
	1. After compiling with KEIL, burn the program onto the evaluation board, and connect a current meter. After powering on, observe that the current consumption decreases significantly after a while. 
	   Then, the current consumption increases again after some time. This cycle repeats.

4. Notes:
	When entering LP RUN mode, the system clock switches to LSE/LSI. When exiting this mode, it's necessary to switch back to the user's default system clock.
	

