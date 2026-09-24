# 第一部分 基础知识

## 第一章 起步

### 1.2 在不同操作系统中搭建Pyhon编程环境

#### 1.2.3 在Windows系统中搭建Python编程环境

1.安装python
终端中用命令
python
出现Python提示符>>>

3.在终端会话中运行Python
在提示符>>>后执行命令
ctrl+z可以退出该会话
或者exit()

4.文本编辑器
Geany
创建文件时习惯用_表示空格
环境配好之后可以直接编译运行

### 1.4 从终端运行Python程序

#### 1.4.2 在Windows系统中从终端运行Python程序

终端命令
cd:切换到文件夹(Windows不能直接跨磁盘切换，需要先换磁盘)
dir:列出当前目录中的所有文件(direcotry)
切换到对应文件夹后，用python命令可以在终端运行脚本


## 第二章 变量和简单数据类型

### 2.1 运行hello_world.py时发生的情况
编辑器用Python解释器来运行它
解释器读取整个程序，确定其中每个单词的含义
编辑器有语法突出功能

### 2.2 变量
在程序中可随时修改变量的值，python将始终记录变量的最新值

#### 2.2.1 变量的命名和使用

不能以数字开头
不能包含空格
不能有关键字
应尽量使用小写

#### 2.2.2 使用变量时避免命名错误

traceback回溯
most recent call last最后一次调用后

### 2.3 字符串

字符串就是一系列字符，用引号括起的都是字符串，可以是单引号，也可以是双引号

#### 2.3.1 使用方法修改字符串的大小写

*方法*是Python可对数据执行的操作
每个方法后面跟着一对括号，因为方法通常需要额外的信息完成工作，若不需要则为空
方法的使用方式：
    变量.方法

title()是对变量的一种方法，效果是以首字母大写的方式显示每个单词
upper()将字符串全部大写
lower()将字符串全部小写，可以将字符串全部转为小写后储存，用的时候转换成合适的方式

#### 2.3.2 合并(拼接)字符串

直接用+拼接字符，需要加空格的时候中间加" "
用这种方法加上各种符号可以拼接一段话

#### 2.3.3 使用制表符或换行符来添加空白

空白泛指任何非打印字符，如空格，制表符和换行符
制表符\t
换行符\n
同一个字符串可以同时包含制表符和换行符

#### 2.3.4 删除空白

Python可以发现字符串中额外的空白，并认为它是有意义的
rstrip()用于确保字符串末尾没有空白
需要永久删除此空白需要将新值存放在原来的变量中

lstrip()        去除开头的空白
strip()         同时去除两端的空白

实际程序中，这些剥除函数常用于存储用户输入前对其进行清理

#### 2.3.5 使用字符串时避免语法错误

*语法错误*
非法的Python代码会导致语法错误
是最不具体的错误类型

#### 2.3.6 Python 2中的print语句

Python 2中无需将打印的内容放在括号内
Python 3中print是一个函数,括号不可少

### 2.4 数字

#### 2.4.1 整数

用**表示乘方运算
可以用括号修改运算次序

#### 2.4.2 浮点数

将带小数点的数字都称为*浮点数*
小数点可出现在数字的任何位置

通常使用浮点数无需考虑其他行为
单包含的小数位数可能是不确定的

#### 2.4.3 使用函数str()避免类型错误

当数字要作为字符串打印时,可以用str()函数,将非字符串表示为字符串

#### 2.4.4 Python 2中的整数

Python 2中,除法和C中类似
计算整数结果将小数部分直接剔除

### 2.5 注释

*注释*让你能够使用自然语言在程序中添加说明

#### 2.5.1 如何编写注释

用#标识
#后面的内容被Python解释器忽略

#### 2.5.2 该编写什么样的注释

主要目的是阐述代码要做什么,以及是如何做的

### 2.6 Python之禅

早期Pel脚本使用较多
其座右铭是解决问题的方法有多个

但过于强调灵活性会导致大型项目难以维护

>>>import this          #可以在解释器里获取Python之禅

The Zen of Python, by Tim Peters

Beautiful is better than ugly.
Explicit is better than implicit.
Simple is better than complex.
Complex is better than complicated.
Flat is better than nested.
Sparse is better than dense.
Readability counts.
Special cases aren't special enough to break the rules.
Although practicality beats purity.
Errors should never pass silently.
Unless explicitly silenced.
In the face of ambiguity, refuse the temptation to guess.
There should be one-- and preferably only one --obvious way to do it.
Although that way may not be obvious at first unless you're Dutch.
Now is better than never.
Although never is often better than *right* now.
If the implementation is hard to explain, it's a bad idea.
If the implementation is easy to explain, it may be a good idea.
Namespaces are one honking great idea -- let's do more of those!

Python程序员笃信代码可以编写得漂亮而优雅
选择简单的解决方案,是代码更容易维护
复杂代码也要让它易于理解
各种具体细节对其他程序员都易于理解
不要企图编写完美无缺的代码,先编写行之有效的代码再改进


## 第三章 列表简介

### 3.1 列表是什么

*列表*是由一系列特定顺序的元素组成
可以将任何东西加入列表中,其中的元素之间可以没有任何关系

因为列表通常包含多个元素,可以指定一个复数的名称(letters,names)

用[]表示列表
用,分隔其中的元素

打印列表会打印列表的内部表示,包括[],''

#### 3.1.1 访问列表元素

列表是有序集合
要访问列表的任何元素,指出列表的名称和元素的索引，将其放在[]内
请求列表元素的时候,只返回该元素，不包括''[]
此时可以结合字符串方法

#### 3.1.2 索引从0而不是1开始

位置减1得到索引

访问最后一个元素提供特殊的语法
通过将索引指定为-1,让Python返回最后一个列表元素
这种约定也使用于其他负数索引,-n代表倒数第n个元素

#### 3.1.3 使用列表中的各个值

可以像使用其他变量一样使用列表中的各个值
根据列表的值拼接

### 3.2 修改、添加和删除元素

创建的大多数列表都将是动态的
需要增删元素

#### 3.2.1 修改列表元素

指定列表名和要修改元素的索引,再指定要修改元素的索引

#### 3.2.2 在列表中添加新元素

1.在列表末尾添加元素
方法append()
括号中填新的元素
可以创建一个空列表,再使用一系列的append()语句添加新元素

2.在列表中插入元素
方法insert()
指定新元素的索引和值(n,'abc')
在第n+1的位置添加字符串abc
这种操作将列表中后面既有的每个元素右移一个位置

#### 3.2.3 从列表中删除元素

1.使用del语句删除元素
如果知道要删除元素的位置,可以用del语句
>>>del motocyles[2]
使用del语句将值从列表中删除后就无法再访问了

2.使用方法pop()删除元素
将元素从列表中删除,并接着使用它的值
pop()可删除列表末尾的元素,并让你能够接着使用它
此时括号中无需参数
*术语弹出*(pop)源自栈,删除列表末尾相当于出栈的操作

3.弹出列表中任何位置处的元素
可以使用pop删除列表中任何位置的元素
此时括号中加元素的索引
如果还要使用就用pop方法,如果不再使用就用del语句

4.根据值删除元素
如果只知道要删除的元素的值,使用方法remove()
只删除第一个指定的值,如果要删除的在列表中出现多次,需要循环

### 3.3 组织列表

创建的列表中,元素的排列常常是无法预测的
但是希望调整排列顺序或是保留列表元素最初的排列顺序

#### 3.3.1 使用方法sort()对列表进行永久性排序























