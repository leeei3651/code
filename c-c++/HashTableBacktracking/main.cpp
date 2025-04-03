#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int m;
int main()
{
	cin >> m;
	vector<int>v(m);
	vector<int>temp;
	for (int i = 0; i < m; i++)
	{
		cin >> v[i];
		if (v[i] != -1)
			temp.push_back(v[i]);
	}
	sort(temp.begin(), temp.end());
	int length = temp.size();
	vector<bool>finding_value(length, 0);
	vector<bool>hashtable(m, 0);
	int num = 0, index = 0;
	//length 为插入数据长度
	while (num != length)
	{
		for (int i = 0; i < length; i++)
		{
			if (!finding_value[i]) //如果这个值没有找到位置
			{
				int posi = temp[i] % m;
				//temp[i]的线性探测初始位置
				if (v[posi] == temp[i])
				{
					cout<<temp[i]<<" ";
					finding_value[i] = 1;
					hashtable[posi] = 1;
					num++;
					break;
				}
				else
				{
					for (int t = 0; t < m; t++)
					{
						int new_posi = (posi + t) % m;
						if (hashtable[new_posi])
							continue;
						if (!hashtable[new_posi] && v[new_posi] != temp[i])
							break;
						finding_value[i] = hashtable[new_posi] = 1;
						cout<<temp[i]<<" ";
						num++;
						break;
					}
				}
			}
		}
	}
}
