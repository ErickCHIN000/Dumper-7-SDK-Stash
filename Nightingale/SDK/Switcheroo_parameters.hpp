#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// Function Switcheroo.SwitcherooBlueprintLibrary.UnbindDetectedInputDeviceChanged
struct USwitcherooBlueprintLibrary_UnbindDetectedInputDeviceChanged_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Switcheroo.SwitcherooBlueprintLibrary.SetInputDetectionEnabled
struct USwitcherooBlueprintLibrary_SetInputDetectionEnabled_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Switcheroo.SwitcherooBlueprintLibrary.IsInputDetectionEnabled
struct USwitcherooBlueprintLibrary_IsInputDetectionEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Switcheroo.SwitcherooBlueprintLibrary.IsAnalogInputOutsideDeadZone
struct USwitcherooBlueprintLibrary_IsAnalogInputOutsideDeadZone_Params
{
public:
	struct FVector2D                             Input;                                             // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FB7[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function Switcheroo.SwitcherooBlueprintLibrary.GetDetectedInputDevice
struct USwitcherooBlueprintLibrary_GetDetectedInputDevice_Params
{
public:
	enum class ESwitcherooInputDevice            ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Switcheroo.SwitcherooBlueprintLibrary.BindDetectedInputDeviceChanged
struct USwitcherooBlueprintLibrary_BindDetectedInputDeviceChanged_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Switcheroo.SwitcherooBlueprintLibrary.ApplyDeadZoneToAnalogInput
struct USwitcherooBlueprintLibrary_ApplyDeadZoneToAnalogInput_Params
{
public:
	struct FVector2D                             Input;                                             // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Switcheroo.SwitcherooSettings.SetMouseMoveThreshold
struct USwitcherooSettings_SetMouseMoveThreshold_Params
{
public:
	float                                        NewMouseMoveThreshold;                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Switcheroo.SwitcherooSettings.SetDefaultInputDevice
struct USwitcherooSettings_SetDefaultInputDevice_Params
{
public:
	enum class ESwitcherooInputDevice            NewDefaultInputDevice;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Switcheroo.SwitcherooSettings.SetAnalogStick
struct USwitcherooSettings_SetAnalogStick_Params
{
public:
	enum class ESwitcherooAnalogStick            NewAnalogStick;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Switcheroo.SwitcherooSettings.SetAnalogDeadZoneSize
struct USwitcherooSettings_SetAnalogDeadZoneSize_Params
{
public:
	float                                        NewAnalogDeadZoneSize;                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Switcheroo.SwitcherooSettings.SetAnalogDeadZoneMode
struct USwitcherooSettings_SetAnalogDeadZoneMode_Params
{
public:
	enum class ESwitcherooAnalogDeadZoneMode     NewAnalogDeadZoneMode;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Switcheroo.SwitcherooSettings.GetSwitcherooSettings
struct USwitcherooSettings_GetSwitcherooSettings_Params
{
public:
	class USwitcherooSettings*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Switcheroo.SwitcherooSettings.GetMouseMoveThreshold
struct USwitcherooSettings_GetMouseMoveThreshold_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Switcheroo.SwitcherooSettings.GetDefaultInputDevice
struct USwitcherooSettings_GetDefaultInputDevice_Params
{
public:
	enum class ESwitcherooInputDevice            ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Switcheroo.SwitcherooSettings.GetAnalogStick
struct USwitcherooSettings_GetAnalogStick_Params
{
public:
	enum class ESwitcherooAnalogStick            ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Switcheroo.SwitcherooSettings.GetAnalogDeadZoneSize
struct USwitcherooSettings_GetAnalogDeadZoneSize_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Switcheroo.SwitcherooSettings.GetAnalogDeadZoneMode
struct USwitcherooSettings_GetAnalogDeadZoneMode_Params
{
public:
	enum class ESwitcherooAnalogDeadZoneMode     ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


