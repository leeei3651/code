import json
import sqlite3
import os  # 新增模块

# 创建数据库目录（如果不存在）
os.makedirs('database', exist_ok=True)  # 新建 database 目录

# 连接到 SQLite 数据库（使用相对路径）
conn = sqlite3.connect('database/students.db')  # 改为相对路径
conn.row_factory = sqlite3.Row

# 创建表（如果不存在）
with conn:
    conn.execute('''CREATE TABLE IF NOT EXISTS students
                    (id INTEGER PRIMARY KEY,
                     name TEXT,
                     age INTEGER,
                     scores TEXT)''')  # 将 scores 数组存为 JSON 字符串

# 新增数据验证
with conn:
    row_count = conn.execute("SELECT COUNT(*) FROM students").fetchone()[0]
    print(f"\n数据库中共有 {row_count} 条学生记录")

# 从数据库读取（替代原 JSON 读取）
with conn:
    data = conn.execute('SELECT name, age, scores FROM students').fetchall()

# 打印学生名单（保持原有输出格式）
for student in data:
    print(f"-{student['name']}")

# 计算平均分（需要解析 JSON 字符串）
print("\n平均分:")
for student in data:
    scores = json.loads(student['scores'])  # 解析 JSON 数组
    avg_score = sum(scores) / len(scores)
    print(f"{student['name']}:{avg_score:.1f}")

# 查找成年学生（逻辑不变）
print("\n成年学生:")
for student in data:
    if student['age'] >= 18:
        print(student['name'])