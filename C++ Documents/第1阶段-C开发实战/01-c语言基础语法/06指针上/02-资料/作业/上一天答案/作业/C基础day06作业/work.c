1、设计一个计算器，可以进行加、减、乘、除运算，类型全部都是int即可
	
	要求从键盘输入指令及操作数，如：
	add 15 25		//计算15+25的值，并返回结果
	sub 25 15		//计算25-15的值，并返回结果
	mux 3  5		//计算 3*5的值， 并返回结果
	dive 25 5 		//计算25/5的值，并返回结果
	strcmp();
提示：1) 需要封装函数
	  2) scanf("%s %d %d", name, &a, &b);
	  
2、不用使用库函数，编写一个函数my_strcmp()，功能和strcmp()一样，实现字符串大小比较：
	int my_strcmp(char s1[], char s2[]);

	char s1[]="hello";
	char s2[]="hellobad";
	my_strcmp(s1,s2);
	if(s1 >s2)  1== my_strcmp(s1,s2);
	if(s1 <s2)  -1== my_strcmp(s1,s2);
	if(s1 == s2)  0 == my_strcmp(s1,s2);
	
	 	