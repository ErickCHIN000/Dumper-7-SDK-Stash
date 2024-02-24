#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESwitcherooInputDevice : uint8
{
	KeyboardMouse                  = 0,
	Gamepad                        = 1,
	ESwitcherooInputDevice_MAX     = 2,
};

enum class ESwitcherooInputDeviceType : uint8
{
	Generic                        = 0,
	Nintendo                       = 1,
	PS4                            = 2,
	Stadia                         = 3,
	ESwitcherooInputDeviceType_MAX = 4,
};

enum class ESwitcherooAnalogStick : uint8
{
	Both                           = 0,
	Left                           = 1,
	Right                          = 2,
	ESwitcherooAnalogStick_MAX     = 3,
};

enum class ESwitcherooAnalogDeadZoneMode : uint8
{
	Disabled                       = 0,
	Axial                          = 1,
	Radial                         = 2,
	ESwitcherooAnalogDeadZoneMode_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}


