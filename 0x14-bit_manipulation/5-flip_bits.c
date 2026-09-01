#include "main.h"

/*
*Author: Chillexy Steven        
*Program: WinMingle Community C Training
*Description: returns the number of flip needed to get from one number to the other
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask1 = 1,n_result, mask2 = 1, m_result;
	unsigned long int highest;
	unsigned int count = 0;
	/* we need the highest number of mask to work with as length */

	/* get the highest possible power of 2 for n */
	while ((mask1 << 1) <= n)
		mask1 <<= 1; /* shift by one for each iteration */

	/* get the highest power of 2 for m */
	while ((mask2 << 1) <= m)
		mask2 <<= 1; /* keep shifting by 1 iteration till mask2 <= m */

	/* now we get the one with the highest value */
	if (mask1 >= mask2)
		highest = mask1;
	else 
		highest = mask2;

	/* loop through n and m with highest length*/
	while (highest > 0)
	{
		m_result = highest & m; /* store the result of (mask and m) */
		n_result = highest & n; /* store the result of (mask and n) */

		if (m_result^n_result) 
			count++; /* counts increases by 1 if both results are flipable */
		else
			count += 0; /* don't count if it doesn't flip */

		highest >>= 1; /* keep shifting the 1 bit of highest till it's 0 */
	}

	return (count);

}
