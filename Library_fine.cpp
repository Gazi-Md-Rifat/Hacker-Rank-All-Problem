// Hacker Rank Questioin Link : https://www.hackerrank.com/challenges/library-fine/problem?isFullScreen=true

/*
 * Complete the 'libraryFine' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER d1
 *  2. INTEGER m1
 *  3. INTEGER y1
 *  4. INTEGER d2
 *  5. INTEGER m2
 *  6. INTEGER y2
 */

int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2)
{
	int fine = 0;
	if ((y1 < y2) || (y1 == y2 && m1 < m2) || y1 == y2 && m1 == m2 && d1 < d2) // this conditon for return book before expected date... 
	{
		return fine;
	}
	else
	{
		if (y2 < y1)
		{
			fine = 10000;
		}
		else if (m2 < m1)
		{
			fine = (m1 - m2) * 500;
		}
		else if (d1 > d2)
		{
			fine = (d1 - d2) * 15;
		}
	}
	return fine;
}