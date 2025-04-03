# 元组跟列表类似,不同之处在于元组的元素不能被修改
# 元组使用小括号(),而列表使用方括号
# 元组创建很简单,只需要在括号中添加元素,并使用逗号隔开即可
tup1 = ("Goole", "Runoob", 1997, 2000)
tup2 = (1, 2, 3, 4, 5)
tup3 = "a", "b", "c", "d"
print(type(tup3))
# 创建空元组
tup4 = ()
print("tup4: ", tup4)
# 元组中只包含一个元素时,需要在元素后面添加逗号,否则括号会被当作运算符使用
tup6 = 50
print("tup6: ", type(tup6))
tup5 = (50,)
print("tup5: ", type(tup5))
print("-" * 50)
# 访问元组
# 元组可以使用下标索引来访问元组中的值
print("tup1[0]: ", tup1[0])
print("tup2[1:5]: ", tup2[1:5])
print("-" * 50)
# 修改元组
# 元组中的元素值是不允许修改的,但我们可以对元组进行连接组合
tup7 = tup1 + tup2
print("tup7: ", tup7)
print("-" * 50)
# 删除元组
# 元组中的元素值是不允许删除的,但我们可以使用del语句来删除整个元组
del tup7
# print("tup7: ",tup7)NameError: name 'tup7' is not defined.
# 元组运算符
# 与字符串一样,元组之间可以使用+,+=和*进行运算
# 可以进行组合和复制,运算后会生成一个新的新的元组
a = (1, 2, 3)
b = (4, 5, 6)
c = a + b
print("c:", c)
a += b
print("a+=b:", a)
print(("Hi!",) * 4)
print(3 in a)
for x in a:
    print(x, end="")
print()
print("-" * 50)
# 元组索引,截取
# 因为元组也是一个序列,所以我们可以访问元组中的指定位置的元素,也可以截取索引中的一段元素
tup8 = ("Google","Runoob","Taobao","Wiki","Weibo","Weixin")
print("tup8: ", tup8)
print("访问第二个元素",tup8[1])
print("反向读取倒数第二个元素:",tup8[-2])
print("截取元素,从第三个开始后的所有元素:",tup8[2:])
print("截取元素,从第一个开始到第三个元素",tup8[0:3])
print("-" * 50)
# 元组内置函数
# len(tuple)
# 计算元组元素个数
print("计算元组元素个数:",len(tup8))
# max(tuple)
# 返回元组中元素最大值
print("返回元组中元素最大值:",max(tup8))
# min(tuple)
# 返回元组中元素最小值
print("返回元组中元素最小值:",min(tup8))
List1 = ["Google", "Runoob", "Taobao", "Wiki", "Weibo", "Weixin"]
Tuple1 = tuple(List1)
print("Tuple1: ", Tuple1)
print("-"*50)
#关于元组是不可变的
#所谓元组的不可变指的是元组所指向的内存中的内容不可变
#不支持修改元素
#重新赋值的元组会绑定到新的对象,而不是修改了原来的对象
tup9 = (1, 2, 3)
print("tup9: ", id(tup9))
tup9 = (4, 5, 6)
print("tup9: ", id(tup9))