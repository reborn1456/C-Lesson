FILE *fp;

if (fp = fopen("C:\setup\配布2019\DinoChrome\HighScore.txt", "w") == NULL)
{
	printf("Cannot open HighScore file."\n);
}
fprintf(fp, "%d", highScore);

fclose(fp);