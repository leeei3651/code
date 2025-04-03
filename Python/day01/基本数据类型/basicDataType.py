# 基本的计算
# Number(数字)
print(5 + 4)
print(4.3 - 2)
print(3 * 6)
print(2 / 4)
print(2 // 4)
print(17 % 3)
print(2**5)

# String(字符串)
str1 = "runoob"
print(str1)
print(str1[0:-1])
print(str1[0])
print(str1[2:5])
print(str1[2:])
print(str1 * 2)
print(str1 + "test")
# python的字符串不能被改变
# python没有字符类型，一个字符就是长度为1的字符串
print(str1[3])
print(str1[5])

# bool类型
a = True
b = False
print(type(a))
print(type(b))
# bool类型的整数表现
print(int(True))
print(int(False))
# 使用bool（）函数进行转换
print(bool(0))
print(bool(1))
print(bool(""))
print(bool("python"))
print(bool([]))
print(bool([1, 2, 3]))
# 布尔逻辑运算
print(True and False)  # False
print(True or False)  # True
print(not True)  # False
print(not False)  # True
# 布尔比较运算
print(5 > 3)  # True
print(2 == 2)  # True
print(7 < 4)  # False
# 布尔值在控制流中的运用
if True:
    print("This will aways print")
if not False:
    print("This will aways print")
x = 10
if x:
    print("x is non-zero and thus True is a boolean context")

# List(列表)python中使用最为频繁的数据类型
"""
列表可以完成大多数集合类的数据实现
列表中元素的类型可以不相同
它支持数字,字符串甚至可以包含列表（嵌套）
列表写在[]方块号之间、用逗号分隔开的元素列表
和字符串一样, 列表同样可以被索引和截取
列表被截取后返回一个包含所需元素的新列表
列表截取的语法格式如下
"""
# 变量[头下标:尾下标]
list = ["abcd", 786, 2.23, "runoob", 70.2]
tinylist = [123, "runoob"]
print(list)
print(list[0])
print(list[1:3])
print(list[2:])
print(tinylist * 2)
print(list + tinylist)
# 与Python字符串不一样的是, 列表中的元素是可以改变的
a = [1, 2, 3, 4, 5, 6]
a[0] = 9
a[2:5] = [13, 14, 15]
print(b)
print(a)
a[2:5] = []
print(a)


# 列表的基本操作
def reverseWords(input):
    # 通过空格将字符串分隔符,把各个单词分隔为列表
    inputWords = input.split(" ")
    # 翻转字符串
    # 假设列表list = [1,2,3,4],
    # list[0]=1,list[1]=2,而-1表示最后一个元素list[-1]=4(与list[3]=4一样)
    # inputWords[-1::-1]有三个参数
    # 第一个参数-1表示最后一个元素
    # 第二个参数为空,表示移动到列表末尾
    # 第三个参数为步长,此处为-1，表示逆向
    inputWords = inputWords[-1::-1]
    # 重新组合字符串
    output = " ".join(inputWords)
    return output


if __name__ == "__main__":
    input = "I like runoob"
    rw = reverseWords(input)
    print(rw)
# Tuple(元组)
"""
元组(tuple)与列表类似,不同之处在于元组的元素不能修改
元组写在小括号()里,元素之间用逗号隔开
元组中的元素类型也可以不相同
"""
tuple = ("abcd", 786, 2.23, "runoob", 70.2)
tinytuple = (123, "runoob")
print(tuple)
print(tuple[0])
print(tuple[1:3])
print(tuple[2:])
print(tinytuple * 2)
print(tuple + tinytuple)
# 元组与字符串类似，可以被索引且下标索引从0开始，-1为从末尾开始的位置
# 可以把字符串看作是一种特殊的元组
tup = (1, 2, 3, 4, 5, 6)
print(tup[0])
print(tup[1:5])
r"""
tup[0] = 11 #修改元组元素的操作是非法的
Traceback (most recent call last):
  File "d:\code\Python\day01\基本数据类型\compute.py", line 123, in <module>
    tup[0] = 11 #修改元组元素的操作是非法的
    ~~~^^^
TypeError: 'tuple' object does not support item assignment
"""
# 空元组
tup1 = ()
tup2 = (20,)  # 元组中只包含一个元素时,需要在元素后面添加逗号,否则括号会被当作运算符使用
# 如果不添加逗号，如下所示，它将被解释为一个普通的值而不是元组：
not_a_tuple = 50
print(type(not_a_tuple))  # 输出: <class 'int'>

# Set(集合)
"""
Python 中的集合(set)是一种无序、可变的数据类型，用于存储唯一的元素。
集合中的元素不会重复，并且可以进行交集、并集、差集等操作。
集合使用大括号{}来表示，元素之间用逗号分隔。
另外也可以使用set()函数创建集合
注意！！！
创建一个空集合必须用set()而不是{},因为{}是用来创建一个空字典
"""
"""
创建格式：
parame = {value01,value02,...}
或者
set(value)
"""
student = {"Tom", "Jim", "Mary", "Tom", "Jack", "Rose"}
print(student)  # 输出集合,重复的元素被自动去掉
# 成员测试
if "Rose" in student:
    print("Rose在集合中")
else:
    print("Rose不在集合中")
# set可以进行集合运算
a = set("abracadabra")
b = set("alacazam")
print(a)
print(b)
print(a - b)  # a和b的差集
print(a | b)  # a和b的并集
print(a & b)  # a和b的交集
print(a ^ b)  # a和b中不同时存在的元素

# Dictionary(字典)
"""
字典(dictionary)是Python中另一个非常有用的内置数据类型
列表是有序的对象集合,字典是无序的对象集合
两者之间的区别在于:字典当中的元素是通过键来存取的,而不是通过偏移存取
字典是一种映射类型,字典用"{ }"标识,它是一个无序的键(key) : 值(value)对集合
键(key)必须使用不可变类型,不可变类型：字符串(string)、整数(int)、元组(tuple)
值(value)可以取任何数据类型
在同一个字典中,键(key)必须是唯一的
"""
"""
创建格式：
dict = {key1 : value1, key2 : value2 }
"""
dict1 = {}
dict1["one"] = "1-菜鸟教程"
dict1[2] = "2-菜鸟工具"
tinydict = {"name": "runoob", "code": 1, "site": "www.runoob.com"}
print(dict1["one"])
print(dict1[2])
print(tinydict)
print(tinydict.keys())  # 输出所有键
print(tinydict.values())  # 输出所有值
print(tinydict.items())  # 输出所有键值对
# 构造函数dict()可以直接从键值对序列中构建字典如下：
dict2 = dict([("Runoob", 1), ("Google", 2), ("Taobao", 3)])
print("diict2 = :" + str(dict2))
dict3 = {x: x**x for x in (2, 4, 6)}
print("diict3 = :" + str(dict3))
dict4 = dict(Runoob=1, Google=2, Taobao=3)
print("diict4 = :" + str(dict4))
# bytes类型
"""
在Python3中,bytes类型表示的是不可变的二进制序列(byte sequence)
与字符串类型不同的是,bytes类型中的元素是整数值(0~255),而不是Unicode字符
bytes类型通常用于处理二进制数据,比如图像、音频、视频等
在网络编程中,也经常使用bytes类型来传输数据
创建bytes类型的方式有多种,最常见的方式是使用b前缀来表示
此外,还可以使用bytes()函数来创建bytes类型的对象
bytes()函数的的第一个参数是要转换的对象,第二个参数是编码方式,如果省略第二个
参数,则默认使用UTF-8编码方式
格式:
x = bytes("Hello",encoding="utf-8")
与字符串类似,bytes类型也支持许多操作和方法,如切片、拼接、查找、替换等
同时,由于bytes类型是不可变的,因此在进行修改操作时需要创建一个新的bytes对象
"""
# 实例
x = b"hello"
y = x[1:3]
z = x + b"world"
print(x)
print(y)
print(z)
# ord()函数可以将字符转换为对应的整数值
if x[0] == ord("h"):
    print("The first element is 'h'")
"""
Python数据类型转换
int(x)将x转换为一个整数
int(x,base)将x转换为一个整数,base指定进制
float(x)将x转换为一个浮点数
complex(real,[,imag])创建一个复数
str(x)将对象x转换为字符串
repr(x)将对象x转换为表达式字符串
eval(str)用来计算在字符串中的有效Python表达式,并返回一个对象
tuple(s)将序列s转换为一个元组
list(s)将序列s转换为一个列表
set(s)转换为可变集合
dict(d)创建一个字典。d必须是一个序列(key,value)元组
frozenset(s)转换为不可变集合
chr(x)将一个整数转换为一个字符
ord(x)将一个字符转换为它的整数值
hex(x)将一个整数转换为一个十六进制字符串
oct(x)将一个整数转换为一个八进制字符串
bin(x)将一个整数转换为一个二进制字符串
"""
