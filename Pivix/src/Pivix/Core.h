#pragma once

#ifdef PV_PLATFORM_WINDOWS
	#ifdef PV_BUILD_DLL
		#define PIVIX_API __declspec(dllexport)
	#else
		#define PIVIX_API __declspec(dllimport)
	#endif
#else
	#error Pivix only supports Windows
#endif