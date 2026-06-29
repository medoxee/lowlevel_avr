#include "components/sht31/sht31_driver.h"
#include <avr/io.h>
#include <stdint.h>
#include <util/delay.h>
#include <util/twi.h>

void	main(void)
{
	/*
	 * data array will be filled up with:
	 * 	2 bytes of temp.
	 * 	2 bytes of humidity.
	 * this is done by passing data array as parameter in sht31_read_data().
	 */
	int16_t	data[2];
	uint8_t	error_code;

	if (sht31_init())
	{/* flag an error */}
	while (1)
	{
		if (sht31_measure())
		{/* flag an error */}
		if (sht31_read_data(data))
		{/* flag an error */}
		_delay_ms(1000);
	}
}
