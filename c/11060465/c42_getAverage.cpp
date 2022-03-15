float getAverage(int d[])
{
	float  sum = 0.f;

	for (int i = 0; i < 10; i++)
	{
		sum += d[i];
	}

	return sum / 10.f;
}