#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPlatformTypeFlags : uint8
{
	None                           = 0,
	Desktop                        = 1,
	Console                        = 2,
	Mobile                         = 4,
	EPlatformTypeFlags_MAX         = 5,
};

enum class EPlatformFlagsBP : uint8
{
	None                           = 0,
	PC                             = 1,
	XSX                            = 2,
	PS5                            = 3,
	Android                        = 4,
	IOS                            = 5,
	Switch                         = 6,
	WinGDK                         = 7,
	PS4                            = 8,
	XboxOne                        = 9,
	Steam                          = 10,
	EPlatformFlagsBP_MAX           = 11,
};

enum class EPlatformFlags : uint16
{
	None                           = 0,
	PC                             = 1,
	XSX                            = 2,
	PS5                            = 4,
	Android                        = 8,
	IOS                            = 16,
	Switch                         = 32,
	WinGDK                         = 64,
	PS4                            = 128,
	XboxOne                        = 256,
	Steam                          = 512,
	EPlatformFlags_MAX             = 513,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}


