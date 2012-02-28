#include <ma.h>
#include <conprint.h>

extern "C" int MAMain()
{
	MAEvent event;

	printf("Press zero or back to exit\n");

	while (TRUE)
	{
		maWait(0);
		maGetEvent(&event);

		if (EVENT_TYPE_CLOSE == event.type)
		{

			break;
		}
		else if (EVENT_TYPE_KEY_PRESSED == event.type)
		{
			if (MAK_BACK == event.key || MAK_0 == event.key)
			{
				break;
			}

			printf("You typed: %c\n", event.key);
		}
	}

	return 0;
}
