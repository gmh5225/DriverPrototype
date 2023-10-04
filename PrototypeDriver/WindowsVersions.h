#pragma once

typedef enum _WINDOWS_VERSION
{
	WINDOWS_UNSUPPORTED,
	WINDOWS_REDSTONE_1,		// 14393,
	WINDOWS_REDSTONE_2,		// 15063,
	WINDOWS_REDSTONE_3,		// 16299,
	WINDOWS_REDSTONE_4,		// 17134,
	WINDOWS_REDSTONE_5,		// 17763
	WINDOWS_19H1, 			// 18362
	WINDOWS_19H2,			// 18363
	WINDOWS_20H1,			// 19041
	WINDOWS_20H2,			// 19042
	WINDOWS_21H1,			// 19043
	WINDOWS_21H2,			// 19044
	WINDOWS1019				// 19045
} WINDOWS_VERSION, * PWINDOWS_VERSION;