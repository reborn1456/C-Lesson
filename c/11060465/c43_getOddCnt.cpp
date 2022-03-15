int getOddCnt(int d[], int cnt)
{
	int oddCnt = 0;

	for (int i = 0; i < cnt; i++)
	{
		if (d[i] % 2 == 0)
		{
			oddCnt++;
		}
	}

	return oddCnt;
}