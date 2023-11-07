1������˵��
	1��PVD���õ�ѹ������Ӧ���жϡ�


2��ʹ�û���

	������������� KEIL MDK-ARM V5.34.0.0
	Ӳ��������    ����N32G032R8L7_STB V1.0����

3��ʹ��˵��
	
	/* �������ģ�����÷���������:ʱ�ӣ�I/O�� */
	1��ʱ��Դ��HSE+PLL
	2��ʱ��Ƶ�ʣ�48M

	/* ����Demo�Ĳ��Բ�������� */
	��KEIL�±������¼�������壬ͨ���������������ģʽ����PVD_IRQHandler()�����öϵ㡣
	ȫ�����С�Ȼ���ٰѵ�ѹ����PVD���õ�ѹ��������ʱ�����ͣ�ڶϵ㴦��


4��ע������
	��
	
	
1. Functional Description:
    1. Configuration of the Programmable Voltage Detector (PVD) to Generate Corresponding Interrupts.
	
2. Usage Environment:

	Software Development Environment: KEIL MDK-ARM V5.34.0.0
	Hardware Environment: Developed based on the evaluation board N32G032R8L7-STB V1.0

3. Usage Instructions:

	/* Describe the configuration methods for relevant modules, e.g., clock, I/O, etc */
	1. Clock Source: HSE+PLL
	2. Clock Frequency: 48MHz

	/* Describe the testing steps and observed behavior of the demo */
	1. After compiling with KEIL, burn the program onto the evaluation board. Enter debug mode through the debugger and set a breakpoint in the PVD_IRQHandler() function. 
	   Run the program at full speed. Then adjust the voltage to be near the PVD-configured voltage threshold. At this point, the program will stop at the breakpoint.

4. Notes:
	None
	

