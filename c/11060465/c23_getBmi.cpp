float getBmi(float height, float weight)
{
	float bmi;

	bmi = weight / (height * 0.01 * height * 0.01);

	return bmi;
}