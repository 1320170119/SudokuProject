
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include<stdio.h>
#include<string.h>
using namespace std;

int map[20][10][10];
int sum, ask;
int map2[10][10];
FILE *fp = fopen("sudoku.txt", "w+");
int Judge2(int x, int y, int t)
{
	int k = map2[x][y];
	map2[x][y] = t;
	int ans = 1;
	int cha[10];

	memset(cha, 0, sizeof(cha));
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			int k = map2[i][j];
			cha[k]++;
		}
		for (int i = 1; i <= 9; i++)
		{
			if (cha[i] == 2)ans = 0;
		}
		if (ans == 0)break;
		memset(cha, 0, sizeof(cha));
	}
	if (ans == 0)
	{
		map2[x][y] = k;
		return 0;
	}
	memset(cha, 0, sizeof(cha));
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			int k = map2[j][i];
			cha[k]++;
		}
		for (int i = 1; i <= 9; i++)
		{
			if (cha[i] == 2)ans = 0;
		}
		if (ans == 0)break;
		memset(cha, 0, sizeof(cha));
	}
	if (ans == 0)
	{
		map2[x][y] = k;
		return 0;
	}
	memset(cha, 0, sizeof(cha));
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			int k = map2[j][i];
			cha[k]++;
		}
	}
	for (int i = 1; i <= 9; i++)
	{
		if (cha[i] == 2)ans = 0;
	}
	if (ans == 0)
	{
		map2[x][y] = k;
		return 0;
	}
	memset(cha, 0, sizeof(cha));
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 4; j <= 6; j++)
		{
			int k = map2[j][i];
			cha[k]++;
		}
	}
	for (int i = 1; i <= 9; i++)
	{
		if (cha[i] == 2)ans = 0;
	}
	if (ans == 0)
	{
		map2[x][y] = k;
		return 0;
	}
	memset(cha, 0, sizeof(cha));
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 7; j <= 9; j++)
		{
			int k = map2[j][i];
			cha[k]++;
		}
	}
	for (int i = 1; i <= 9; i++)
	{
		if (cha[i] == 2)ans = 0;
	}
	if (ans == 0)
	{
		map2[x][y] = k;
		return 0;
	}
	memset(cha, 0, sizeof(cha));
	for (int i = 4; i <= 6; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			int k = map2[j][i];
			cha[k]++;
		}
	}
	for (int i = 1; i <= 9; i++)
	{
		if (cha[i] == 2)ans = 0;
	}
	if (ans == 0)
	{
		map2[x][y] = k;
		return 0;
	}
	memset(cha, 0, sizeof(cha));
	for (int i = 4; i <= 6; i++)
	{
		for (int j = 4; j <= 6; j++)
		{
			int k = map2[j][i];
			cha[k]++;
		}
	}
	for (int i = 1; i <= 9; i++)
	{
		if (cha[i] == 2)ans = 0;
	}
	if (ans == 0)
	{
		map2[x][y] = k;
		return 0;
	}
	memset(cha, 0, sizeof(cha));
	for (int i = 4; i <= 6; i++)
	{
		for (int j = 7; j <= 9; j++)
		{
			int k = map2[j][i];
			cha[k]++;
		}
	}
	for (int i = 1; i <= 9; i++)
	{
		if (cha[i] == 2)ans = 0;
	}
	if (ans == 0)
	{
		map2[x][y] = k;
		return 0;
	}
	memset(cha, 0, sizeof(cha));
	for (int i = 7; i <= 9; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			int k = map2[j][i];
			cha[k]++;
		}
	}
	for (int i = 1; i <= 9; i++)
	{
		if (cha[i] == 2)ans = 0;
	}
	if (ans == 0)
	{
		map2[x][y] = k;
		return 0;
	}
	memset(cha, 0, sizeof(cha));
	for (int i = 7; i <= 9; i++)
	{
		for (int j = 4; j <= 6; j++)
		{
			int k = map2[j][i];
			cha[k]++;
		}
	}
	for (int i = 1; i <= 9; i++)
	{
		if (cha[i] == 2)ans = 0;
	}
	if (ans == 0)
	{
		map2[x][y] = k;
		return 0;
	}
	memset(cha, 0, sizeof(cha));
	for (int i = 7; i <= 9; i++)
	{
		for (int j = 7; j <= 9; j++)
		{
			int k = map2[j][i];
			cha[k]++;
		}
	}
	for (int i = 1; i <= 9; i++)
	{
		if (cha[i] == 2)ans = 0;
	}
	if (ans == 0)
	{
		map2[x][y] = k;
		return 0;
	}
	map2[x][y] = k;

	return 1;


}
int Judge(int s, int x, int y, int t)
{
	int k = map[s][x][y];
	map[s][x][y] = t;
	int ans = 1;
	int cha[10];

	memset(cha, 0, sizeof(cha));
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			int k = map[s][i][j];
			cha[k]++;
		}
		for (int i = 1; i <= 9; i++)
		{
			if (cha[i] == 2)ans = 0;
		}
		if (ans == 0)break;
		memset(cha, 0, sizeof(cha));
	}
	if (ans == 0)
	{
		map[s][x][y] = k;
		return 0;
	}
	memset(cha, 0, sizeof(cha));
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			int k = map[s][j][i];
			cha[k]++;
		}
		for (int i = 1; i <= 9; i++)
		{
			if (cha[i] == 2)ans = 0;
		}
		if (ans == 0)break;
		memset(cha, 0, sizeof(cha));
	}
	if (ans == 0)
	{
		map[s][x][y] = k;
		return 0;
	}
	memset(cha, 0, sizeof(cha));
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			int k = map[s][j][i];
			cha[k]++;
		}
	}
	for (int i = 1; i <= 9; i++)
	{
		if (cha[i] == 2)ans = 0;
	}
	if (ans == 0)
	{
		map[s][x][y] = k;
		return 0;
	}
	memset(cha, 0, sizeof(cha));
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 4; j <= 6; j++)
		{
			int k = map[s][j][i];
			cha[k]++;
		}
	}
	for (int i = 1; i <= 9; i++)
	{
		if (cha[i] == 2)ans = 0;
	}
	if (ans == 0)
	{
		map[s][x][y] = k;
		return 0;
	}
	memset(cha, 0, sizeof(cha));
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 7; j <= 9; j++)
		{
			int k = map[s][j][i];
			cha[k]++;
		}
	}
	for (int i = 1; i <= 9; i++)
	{
		if (cha[i] == 2)ans = 0;
	}
	if (ans == 0)
	{
		map[s][x][y] = k;
		return 0;
	}
	memset(cha, 0, sizeof(cha));
	for (int i = 4; i <= 6; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			int k = map[s][j][i];
			cha[k]++;
		}
	}
	for (int i = 1; i <= 9; i++)
	{
		if (cha[i] == 2)ans = 0;
	}
	if (ans == 0)
	{
		map[s][x][y] = k;
		return 0;
	}
	memset(cha, 0, sizeof(cha));
	for (int i = 4; i <= 6; i++)
	{
		for (int j = 4; j <= 6; j++)
		{
			int k = map[s][j][i];
			cha[k]++;
		}
	}
	for (int i = 1; i <= 9; i++)
	{
		if (cha[i] == 2)ans = 0;
	}
	if (ans == 0)
	{
		map[s][x][y] = k;
		return 0;
	}
	memset(cha, 0, sizeof(cha));
	for (int i = 4; i <= 6; i++)
	{
		for (int j = 7; j <= 9; j++)
		{
			int k = map[s][j][i];
			cha[k]++;
		}
	}
	for (int i = 1; i <= 9; i++)
	{
		if (cha[i] == 2)ans = 0;
	}
	if (ans == 0)
	{
		map[s][x][y] = k;
		return 0;
	}
	memset(cha, 0, sizeof(cha));
	for (int i = 7; i <= 9; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			int k = map[s][j][i];
			cha[k]++;
		}
	}
	for (int i = 1; i <= 9; i++)
	{
		if (cha[i] == 2)ans = 0;
	}
	if (ans == 0)
	{
		map[s][x][y] = k;
		return 0;
	}
	memset(cha, 0, sizeof(cha));
	for (int i = 7; i <= 9; i++)
	{
		for (int j = 4; j <= 6; j++)
		{
			int k = map[s][j][i];
			cha[k]++;
		}
	}
	for (int i = 1; i <= 9; i++)
	{
		if (cha[i] == 2)ans = 0;
	}
	if (ans == 0)
	{
		map[s][x][y] = k;
		return 0;
	}
	memset(cha, 0, sizeof(cha));
	for (int i = 7; i <= 9; i++)
	{
		for (int j = 7; j <= 9; j++)
		{
			int k = map[s][j][i];
			cha[k]++;
		}
	}
	for (int i = 1; i <= 9; i++)
	{
		if (cha[i] == 2)ans = 0;
	}
	if (ans == 0)
	{
		map[s][x][y] = k;
		return 0;
	}
	map[s][x][y] = k;

	return 1;


}
void Search(int x, int y)
{
	int k = 0;
	if (sum >= ask)
		return;
	if (x > 9)
	{
		for (int i = 1; i <= 9; i++)
		{

			for (int j = 1; j <= 9; j++)
			{
				fprintf(fp, "%d", map2[i][j]);
				if (j != 9)

				{
					fprintf(fp, " ");
				}
			}

			fprintf(fp, "\n");
		}


		if (sum < ask)
		{
			fprintf(fp, "\n");
		}

		sum++;
		return;
	}

	int x_next;
	int y_next;
	if (y == 9)
	{
		x_next = x + 1;
		y_next = 1;
	}
	else
	{
		x_next = x;
		y_next = y + 1;
	}
	for (k = 1; k <= 9; k++)
	{
		if (sum >= ask)return;
		if (Judge2(x, y, k) == 1)
		{
			map2[x][y] = k;

			Search(x_next, y_next);
			map2[x][y] = 0;
		}

	}


	map2[x][y] = 0; return;
}

int Fill(int s, int x, int y)
{
	int x_next = 0, y_next = 0;
	if (y == 9)
	{
		x_next = x + 1;
		y_next = 1;
	}
	else
	{
		x_next = x;
		y_next = y + 1;
	}
	if (x >9)
	{
		return 1;
	}
	if (map[s][x][y] != 0)

	{
		if (Fill(s, x_next, y_next) == 1)return 1;

	}
	else

	{
		for (int i = 1; i <= 9; i++)
		{
			int t = i;
			if (Judge(s, x, y, t) == 1)

			{
				map[s][x][y] = t;
				if (Fill(s, x_next, y_next))return 1;
			}

			map[s][x][y] = 0;

		}




	}

	return 0;


}
int main(int argc, char** argv)
{
	
	if (argc == 3 &&strcmp(argv[1], "-s")== 0 )

	{
		memset(map, 0, sizeof(map));

		ifstream infile;
		infile.open(argv[2]);
		if (!infile) cout << "读取数独失败" << endl;
		else
		{
			string str;
			int t1;
			int a[90][9];
			memset(a, 0, sizeof(a));
			int*p = &a[0][0];
			while (infile >> t1)
			{
				*p = t1;
				p++;
			}

			infile.close();

			FILE *fp = NULL;
			fp = fopen("sudoku.txt", "w+");


			if (NULL == fp)
			{
				return -1;        //打开空文件指针要返回错误代码  
			}


			int hang = (p - &a[0][0]) / 9;
			int num = hang / 9;
			int s = 1;
			int m = 1, n = 1;
			for (int s = 1; s <= num; s++)
			{
				for (int i = 9 * s - 9, m = 1; i <= 9 * s - 1; i++, m++)
				{
					for (int j = 0, n = 1; j < 9; j++, n++)
						map[s][m][n] = a[i][j];
				}
			}



			for (s = 1; s <= num; s++)
			{
				int k = Fill(s, 1, 1);
				if (k == 1)

				{
					cout << "数独" << s << "求解成功" << endl;
					for (int i = 1; i <= 9; i++)
					{

						for (int j = 1; j <= 9; j++)
						{
							fprintf(fp, "%d", map[s][i][j]);
							if (j != 9)

							{
								fprintf(fp, " ");
							}
						}

						fprintf(fp, "\n");
					}

				}
				else
				{
					cout << "此题无解" << endl;
				}
				if (s < num)
				{
					fprintf(fp, "\n");
				}
			}
			fclose(fp);
			fp = NULL;
		}
	}
	else if (argc == 3 && strcmp(argv[1], "-c") == 0)
	{
		ask = 0;
		int i = 0;
		int flag = 1;
		while (argv[2][i] != '\0')
		{
			int t = argv[2][i] - '0';
			if (t < 0 || t>9)
			{
				flag = 0; break;
			}
			ask =ask* 10 + t;
			i++;
		}
		if (flag == 0)cout << "无效命令"<<endl;
		else {
			
			memset(map2, 0, sizeof(map2));
			map2[1][1] = 2;
			Search(1, 2);
			fclose(fp);
			fp = NULL;
			cout << "终局生成完毕" << endl;
		}
	}
	else
	{
		cout << "无效命令" << endl;
	}
		
	
	
	return 0;
}

	
