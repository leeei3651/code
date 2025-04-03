# 分隔线
# import time





print("-" * 50)
print("-" * 20 + "python字符串" + "-" * 20)
# 创建字符串
var1 = "Hello World!"
var2 = "Runoob"
print(var1)
print(var2)
# 访问字符串中的值
print("-" * 20 + "访问字符串中的值" + "-" * 20)
# 使用方括号[]截取字符串,字符串的截取的语法格式如下:
# 变量[头下标:尾下标]
# 索引值以 0 为开始值, -1 为从末尾的开始位置。
print("var1[0]", var1[0])
print("var2[1:5]", var2[1:5])
var3 = var1 + var2
# var3的长度
print("var3的长度为", len(var3))
# python字符串更新
# 你可以截取字符串的一部分并与其他字段拼接
print("已更新字符串 : ", var1[:6] + "Runoob!")
print("-" * 20 + "python转义字符" + "-" * 20)
# Python转义字符
# 在需要在字符中使用特殊字符时，python 用反斜杠 \ 转义字符。
# 如下表:
# 转义字符	描述
# \(在行尾时)	续行符
# \\	反斜杠符号
# \'	单引号
# \"	双引号
# \a	响铃
# \b	退格(Backspace)
# \000	空
# \n	换行
# \v	纵向制表符
# \t	横向制表符
# \r	回车
# \f	换页
# \yyy	八进制数，yyy 代表的字符，例如：\012 代表换行，其中 0 是必须的。
# \xyy	十六进制数，yyy代表的字符，例如：\x0a代表换行
# \other	其它的字符以普通格式输出
# 续行符
print(
    "line1 \
line2 \
line3"
)
# 反斜杠
print("C:\\now")
# 单引号
print("I'm ok")
# 双引号
print('"ok"')
# 响铃 大多数终端下不响铃
print("\a")
# 退格(Backspace)
print("a \bc")
# 空
print("\000")
# 换行
print("a\nb")
# 纵向制表符
print("a\vb")
# 横向制表符
print("a\tb")
# 回车
print("a\rb")
# 换页
print("a\fb")
# 八进制数，yyy 代表的字符,y代表0-7的字符,\012代表换行
# 用全八进制数打印Hello World!
print("\110\145\154\154\157\40\127\157\162\154\144\41")
# 十六进制数，yyy代表的字符，例如：\x0a代表换行
# 用全十六进制数打印Hello World!
print("\x48\x65\x6c\x6c\x6f\x20\x57\x6f\x72\x6c\x64\x21")
# 实例:使用\r实现百分比进度
"""
for i in range(101):# 添加进度条图形和百分比
    bar = '[' + '=' * (i // 2) + ' ' * (50 - i // 2) + ']'
    print(f"\r{bar} {i:3}%",end='',flush=True)
    time.sleep(0.05)
print()
"""
# 使用不同的转义字符来演示单引号,换行符,制表符,退格符,换页符,ASCII,二进制,八进制数和十六进制数的效果:
print("'Hello, world!'")
print("Hello, world!\nHow are you?")
print("Hello, world!\tHow are you?")
print("Hello, \b world!")
print("Hello, \f world!")
print("A对应的ASCII码是:", ord("A"))

decimal_number = 42
binary_number = bin(decimal_number)
print("转换为二进制:", binary_number)
octal_number = oct(decimal_number)
print("转换为八进制:", octal_number)
hexadecimal_number = hex(decimal_number)
print("转换为十六进制:", hexadecimal_number)
print("-" * 20 + "python字符串运算符" + "-" * 20)
# 下表实例变量a值为字符串"Hello",b变量值为"Python"：
# 运算符	描述	实例
# +	字符串连接	如a + b输出结果为HelloPython
# *	重复输出字符串	如a*2输出结果为HelloHello
# []	通过索引获取字符串中字符	如a[1]输出结果为e
# [ : ]	截取字符串中的一部分	如a[1:4]输出结果为ell
# in	成员运算符 - 如果字符串中包含给定的字符返回True	如"H" in a输出结果为True
# not in	成员运算符 - 如果字符串中不包含给定的字符返回True	如"M" not in a输出结果为True
# r/R	原始字符串 - 原始字符串：所有的字符串都是直接按照字面的意思来使用，没有转义特殊或不能打印的字符。原始字符串除在字符串的第一个引号前加上字母"r"（可以大小写）以外，与普通字符串有着几乎完全相同的语法。
# %	格式字符串	请看下一节内容
# 实例
a = "Hello"
b = "Python"
print("a + b 输出结果：", a + b)
print("a * 2 输出结果：", a * 2)
print("a[1] 输出结果：", a[1])
print("a[1:4] 输出结果：", a[1:4])
if "H" in a:
    print("H 在变量 a 中")
else:
    print("H 不在变量 a 中")
if "M" not in a:
    print("M 不在变量 a 中")
else:
    print("M 在变量 a 中")
print(r"\n")
print(R"\n")
print("-" * 20 + "python字符串格式化" + "-" * 20)
# 字符串格式化
# Python 支持格式化字符串的输出。尽管这样可能会用到非常复杂的表达式，但最基本的用法是将一个值插入到一个有字符串格式符 %s 的字符串中。
# 在 Python 中，字符串格式化使用与 C 中 sprintf 函数一样的语法。
# 以下是一些基本的格式化类型：
# 格式符	描述
# %c 	格式化字符及其ASCII码
# %s 	格式化字符串
# %d 	格式化整数
# %u 	格式化无符号整型
# %o 	格式化无符号八进制数
# %x 	格式化无符号十六进制数
# %X 	格式化无符号十六进制数（大写）
# %f 	格式化浮点数字，可指定小数点后的精度
# %e 	用科学计数法格式化浮点数
# %E 	作用同%e，用科学计数法格式化浮点数
# %g 	根据值的大小决定使用%f或%e
# %G 	作用同%g，根据值的大小决定使用%f或%E
# %p 	用十六进制数格式化变量的地址
# 格式化操作符辅助指令
# 符号	功能
# *	定义宽度或者小数点精度
# -	用做左对齐
# +	在正数前面显示加号( + )
# <sp>	在正数前面显示空格
# #	在八进制数前面显示零('0')，在十六进制前面显示'0x'或者'0X'(取决于用的是'x'还是'X')
# 0	显示的数字前面填充'0'而不是默认的空格
# %	'%%'输出一个单一的'%'
# (var)	映射变量(字典参数)
# m.n.	m 是显示的最小总宽度,n 是小数点后的位数(如果可用的话)
# 实例
print("我叫 %s 今年 %d  岁!" % ("小明", 10))
print("-" * 20 + "python三引号" + "-" * 20)
# Python三引号
# Python三引号允许一个字符串跨多行，字符串中可以包含换行符、制表符以及其他特殊字符。
# 实例
para_str = """这是一个多行字符串的实例
多行字符串可以使用制表符
TAB ( \t )。
也可以使用换行符 [ \n ]。
"""
print(para_str)
print("-" * 20 + "f-string" + "-" * 20)
# f-string是python3.6之后版本添加的,称之为字面量格式化字符串,是新的格式化字符串的语法,之前我们习惯用%
# 实例
name = "Runoob"
print("Hello %s" % name)
# f-string 格式化字符串以f开头,后面跟着字符串,字符串中的表达式用大括号{}包起来
# 它会将变量或者表达式计算后的值替换进去,实例如下:
print(f"Hello {name}")
print(f"{1 + 2}")
w = {"name": "Runoob", "url": "www.runoob.com"}
print(f"{w['name']}:{w['url']}")
# 在3.8的版本中还可以使用=符号来拼接运算表达式与结果
x = 1
print(f"{x + 1}")
print(f"{x+1=}")
print("-" * 20 + "Unicode字符串" + "-" * 20)
print("Unicode字符串")
print(
    "在Python3中,所有的字符串都是Unicode字符串,这意味着你可以在字符串中使用任何字符,包括中文字符"
)
print("-" * 20 + "Python的字符串内建函数" + "-" * 20)
#python的字符串常用内建函数如下
# 序号	方法及描述
# 1	capitalize()将字符串的第一个字符转换为大写
# 2 center(width, fillchar)返回一个指定的宽度 width 居中的字符串,fillchar 为填充的字符,默认为空格。
# 3	count(str, beg= 0,end=len(string))返回 str 在 string 里面出现的次数,如果 beg 或者 end 指定则返回指定范围内 str 出现的次数
# 4	bytes.decode(encoding="utf-8", errors="strict")Python3中没有 decode 方法，但我们可以使用 bytes 对象的 decode() 方法来解码给定的 bytes 对象,这个 bytes 对象可以由 str.encode() 来编码返回。
# 5	encode(encoding='UTF-8',errors='strict')以 encoding 指定的编码格式编码字符串,如果出错默认报一个ValueError 的异常,除非 errors 指定的是'ignore'或者'replace'
# 6	endswith(suffix, beg=0, end=len(string))检查字符串是否以指定子字符串 suffix 结束,如果是返回 True,否则返回 False。如果 beg 和 end 指定值,则在指定范围内检查。
# 7	expandtabs(tabsize=8)把字符串 string 中的 tab 符号转为空格,tab 符号默认的空格数是 8。
# 8	find(str, beg=0 end=len(string))检测 str 是否包含在字符串中,如果指定范围 beg 和 end,则检查是否包含在指定范围内,如果包含返回开始的索引值,否则返回-1
# 9	index(str, beg=0, end=len(string))跟find()方法一样,只不过如果str不在字符串中会报一个异常。
# 10	isalnum()如果字符串至少有一个字符并且所有字符都是字母或数字则返 回 True,否则返回 False
# 11	isalpha()如果字符串至少有一个字符并且所有字符都是字母则返回 True, 否则返回 False
# 12	isdecimal()如果字符串只包含十进制数字则返回 True 否则返回 False
# 13	isdigit()如果字符串只包含数字则返回 True 否则返回 False
# 14	isnumeric()如果字符串中只包含数字字符,则返回 True,否则返回 False
# 15	isspace()如果字符串中只包含空白,则返回 True,否则返回 False
# 16	istitle()如果字符串是标题化的(见 title())则返回 True,否则返回 False
# 17    isupper()如果字符串中包含至少一个区分大小写的字符,并且所有这些(区分大小写的)字符都是大写,则返回 True,否则返回 False
# 18	join(seq)以指定字符串作为分隔符,将 seq 中所有的元素(的字符串表示)合并为一个新的字符串
# 19    len(string)返回字符串长度
# 20	ljust(width[, fillchar])返回一个原字符串左对齐,并使用 fillchar(默认空格)填充至长度 width 的新字符串
# 21	lower()转换字符串中所有大写字符为小写
# 22	lstrip()截掉字符串左边的空格或指定字符
# 23	maketrans()创建字符映射的转换表,对于接受两个参数的最简单的调用方式,第一个参数是字符串,表示需要转换的字符,第二个参数也是字符串表示转换的目标
# 24	max(str)返回字符串 str 中最大的字母。
# 25	min(str)返回字符串 str 中最小的字母。
# 26	replace(old, new [, max])把 将字符串中的 str1 替换成 str2,如果 max 指定，则替换不超过 max 次。
# 27	rfind(str, beg=0,end=len(string))类似于 find()函数,不过是从右边开始查找。
# 28	rindex( str, beg=0, end=len(string))类似于 index()，不过是从右边开始。
# 29	rjust(width,[, fillchar])返回一个原字符串右对齐,并使用fillchar(默认空格)填充至长度 width 的新字符串
# 30	rstrip()删除字符串字符串末尾的空格
# 31	split(str="", num=string.count(str))以 str 为分隔符截取字符串,如果 num 有指定值,则仅截取 num 个子字符串
# 32	splitlines([keepends])按照行('\r', '\r\n', \n')分隔,返回一个包含各行作为元素的列表,如果参数 keepends 为 False,不包含换行符,如果为 True,则保留换行符
# 33	startswith(str, beg=0,end=len(string))检查字符串是否是以指定子字符串 str 开头,是则返回 True,否则返回 False。如果beg 和 end 指定值,则在指定范围内检查。
# 34	strip([chars])在字符串上执行 lstrip()和 rstrip()
# 35	swapcase()将字符串中大写转换为小写,小写转换为大写
# 36	title()返回"标题化"的字符串,就是说所有单词都是以大写开始,其余字母均为小写(见 istitle())
# 37	translate(table, deletechars="")根据 str 给出的表(包含 256 个字符)转换 string 的字符,要过滤掉的字符放到 deletechars 参数中
# 38	upper()转换字符串中的小写字母为大写
# 39	zfill (width)返回长度为 width 的字符串,原字符串右对齐,前面填充0
# 40	isdecimal()检查字符串是否只包含十进制字符,如果是返回 true,否则返回 false
print("Done")
