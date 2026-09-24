MATLAB笔记
clc   清楚命令行
变量以字母开头，区分大小写
clear all清除工作区内的数据

%%注释掉这一行
''表示字符串
abs()执行ASCII码
char()和abs()互为逆运算，转换为字符串

num2str将数字转换为字符串
length()计算字符串的长度，包括空格

矩阵用[ ]表示，按行来写，不同行用;间隔，数字间用空格或，间隔
a为一个矩阵
用a'表示a的转置
a(:)表示把矩阵按照列换成一列
inv(a)表示a的逆

zeros(a,b,d)
代表d维,a行,b列的0矩阵

rand函数  rand(m,n)
均匀分布的伪随机数，分布在0，1之间,m行n列

randn函数
标准正态分布的伪随机数
均值为0，方差为1,所以有正有负

randi生成均匀分布的伪随机整数
randi（imax,m,n）
闭区间[0,imax]中随机矩阵


eye(n)代表n维的单位矩阵

元胞数组,cell(m,n)
matlab索引从1开始

magic函数,生成一个n阶幻方(满足数独)

结构体
A=struct('name',{{'a','b'}},'price',[30 40])
A.name 代表提取A的name属性
A.name(1)  代表提取A的name第一个属性,取出的是cell
A.name{1}  代表提取A的name第一个属性,取出的是字符串




矩阵构造
a:b:c代表从a到c的一串数字,步长为b

repmat(a,m,n)
a作为一个子阵,重复m行,n列

ones(m,n)代表m行n列,元素全为1的矩阵

矩阵的四则运算
符号前带点.代表非代数意义的对应相乘

非方阵可以用pinv(A)求其伪逆

矩阵的下标
a(m,n)代表第m行第n列的元素
a(m,:)代表第m行的全部元素

find函数
find(a>10)代表a中大于元素10的矩阵


逻辑与流程
for,end
步长默认为1,可以省略
eg:
sum=0;
for i=1:10
    sum =sum+i^2;
end

while,end

if,end

if,else,end

switch,case(otherwise),end

figure建立一个幕布
plot(x,y)绘制二维图像,横纵坐标分别为想，y
pi代表圆周率
函数是机械的直线连接相连的点
用xlabel和ylabel分别标注横纵坐标的变量值,用title标注图像名称
用xlim限制图像的左右范围