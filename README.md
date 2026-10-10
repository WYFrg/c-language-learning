# c-language-learning
My C language learning journey
学习变量 数据类型 基本输入输出 printf %d %f %c %s
用sizeof查了内存大小

了解多文件编译冲突（只能有一个main)
遇到bug scanf输入缓冲区 用while（getchar(） ！='\n')（用于混合输入文本+数字）; 清理回车。
解决0x0000409崩溃报错，理解字符串数组char name[50](提问的是文本非数字）（50指50个字节）
整型int a 的内存大小差异

学习了简单的运算符，scanf_s认占位符（%s)，不认提示语。
if else中if后第一句不加;最好加上{}

只要是 %d 或 %s 混合输入，遇到 %c 时必须加while（getchar(） ！='\n')
学了隐式转换，强制转换。
char < short < long < long long < float < double
当 byte 大于原变量的时，超出的高位部分被直接砍掉，所以输出结果为1（嵌入式较多）-->二进制截断

理解了自增自减的底层逻辑（++在前先增后用，++在后先用后增）不要写一串类似（a++ + a++ + ++a + ++a)编译器不同导致结果不同
学会算术运算符，关系运算符，逻辑运算符。
scanf_s中输入缓冲区的残留问题（绝对不加\n)
