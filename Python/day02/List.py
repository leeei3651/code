# 常见的列表操作:索引,切片,加,乘,检查成员
# 内置了确定序列的禅读以及确定最大和最小的元素的方法
# 创建列表:把逗号分隔的不不同的数据项使用方括号括起来即可
import operator


list1 = ["Goole", "Runoob", 1997, 2000]
list2 = [1, 2, 3, 4, 5]
list3 = ["a", "b", "c", "d"]
list4 = ["red", "green", "blue", "yellow", "white", "black"]
# 访问列表中的值(正序)
print(list4[0])
# for循环打印列表list4
for x in list4:
    print(x)
# 访问列表中的值(倒序)
print(list4[-1])
print(list4[-2])
print(list4[-3])
print(list4[-4])
# for循环打印列表list4(倒序)
for x in list4[::-1]:
    print(x)
print("-" * 50)
# 打印列表
print(list4[:])
print(list4[:-1])
print("-" * 50)
# 更新列表
print("list1的第二个元素为:", list1[1])
list1[1] = "Lay"
print("更新后list1的第二个元素为:", list1[1])
list1.append("Ray")
print("更新后的列表:", list1)
print("-" * 50)
# 删除列表元素
print("原始列表:", list1)
del list1[1]
print("删除第二个元素后的列表:", list1)
print("-" * 50)
# 列表脚本操作符
# 列表对+和*的操作符与字符串相似.+用于组合列表,*用于重复列表
print(len([1, 2, 3]))
print([1, 2, 3] + [4, 5, 6])
print(["Hello"] * 3)
print(3 in [1, 2, 3])
for x in [1, 2, 3]:
    print(x, end=" ")
print("\n")
print("-" * 50)
# 列表截取与拼接
L = ["Google", "Runoob", "Taobao"]
print(L[2])
print(L[-2])
print(L[1:])
print(L[1:2])
squares = [1, 4, 9, 16, 25]
squares += [36, 49, 64, 81, 100]
print(squares)
print("-" * 50)
# 使用嵌套列表在列表里创建其它列表
a = ["a", "b", "c"]
n = [1, 2, 3]
x = [a, n]
print(x)
print(x[0])
print(x[0][1])
print(len(x))
print(len(x[0]))
print("-" * 50)
# 列表比较需要引入operator模块的eq方法
a = [1, 2]
b = [2,3]
c = [2,3]
print("operator.eq(a,b): ", operator.eq(a, b))
print("operator.eq(b,c): ", operator.eq(b, c))
print("-" * 50)
# 列表函数&方法
# 函数	描述
# len(list)	列表元素个数
# max(list)	返回列表元素最大值
# min(list)	返回列表元素最小值
# list(seq)	将元组转换为列表
# 方法	描述
# list.append(obj)	在列表末尾添加新的对象
# list.count(obj)	统计某个元素在列表中出现的次数
# list.extend(seq)	在列表末尾一次性追加另一个序列中的多个值（用新列表扩展原来的列表）
# list.index(obj)	从列表中找出某个值第一个匹配项的索引位置
# list.insert(index, obj)	将对象插入列表
# list.pop([index=-1])	移除列表中的一个元素（默认最后一个元素），并且返回该元素的值
# list.remove(obj)	移除列表中某个值的第一个匹配项
# list.reverse()	反向列表中元素
# list.sort( key=None, reverse=False)	对原列表进行排序
# list.clear()	清空列表
# list.copy()	复制列表
# 实例
list5 = [1, 2, 3, 4, 5,9]
list5.append(10)
print("list5.append(10):", list5)
list5.append(1)
print("list5.count(1):", list5.count(1))
list6 = [11, 12, 13]
list5.extend(list6)
print("list5.extend(list6):", list5)
print("list5.index(1):", list5.index(1))
print("list5.index(10):", list5.index(10))
list5.insert(1, 20)
print("list5.insert(1, 20):", list5)
list5.pop()
print("list5.pop():", list5)
list5.remove(1)
print("list5.remove(1):", list5)
list5.reverse()
print("list5.reverse():", list5)
list5.sort()
print("list5.sort():", list5)
list7 = list5.copy()
print("list7 = list5.copy():", list7)
list5.clear()
print("list5.clear():", list5)



