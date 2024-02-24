#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Switcheroo.SwitcherooBlueprintLibrary
// (None)

class UClass* USwitcherooBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SwitcherooBlueprintLibrary");

	return Clss;
}


// SwitcherooBlueprintLibrary Switcheroo.Default__SwitcherooBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USwitcherooBlueprintLibrary* USwitcherooBlueprintLibrary::GetDefaultObj()
{
	static class USwitcherooBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USwitcherooBlueprintLibrary*>(USwitcherooBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Switcheroo.SwitcherooBlueprintLibrary.UnbindDetectedInputDeviceChanged
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Event                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USwitcherooBlueprintLibrary::UnbindDetectedInputDeviceChanged(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwitcherooBlueprintLibrary", "UnbindDetectedInputDeviceChanged");

	Params::USwitcherooBlueprintLibrary_UnbindDetectedInputDeviceChanged_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Switcheroo.SwitcherooBlueprintLibrary.SetInputDetectionEnabled
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USwitcherooBlueprintLibrary::SetInputDetectionEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwitcherooBlueprintLibrary", "SetInputDetectionEnabled");

	Params::USwitcherooBlueprintLibrary_SetInputDetectionEnabled_Params Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Switcheroo.SwitcherooBlueprintLibrary.IsInputDetectionEnabled
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USwitcherooBlueprintLibrary::IsInputDetectionEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwitcherooBlueprintLibrary", "IsInputDetectionEnabled");

	Params::USwitcherooBlueprintLibrary_IsInputDetectionEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Switcheroo.SwitcherooBlueprintLibrary.IsAnalogInputOutsideDeadZone
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D                   Input                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USwitcherooBlueprintLibrary::IsAnalogInputOutsideDeadZone(const struct FVector2D& Input)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwitcherooBlueprintLibrary", "IsAnalogInputOutsideDeadZone");

	Params::USwitcherooBlueprintLibrary_IsAnalogInputOutsideDeadZone_Params Parms{};

	Parms.Input = Input;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Switcheroo.SwitcherooBlueprintLibrary.GetDetectedInputDevice
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class ESwitcherooInputDevice  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESwitcherooInputDevice USwitcherooBlueprintLibrary::GetDetectedInputDevice()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwitcherooBlueprintLibrary", "GetDetectedInputDevice");

	Params::USwitcherooBlueprintLibrary_GetDetectedInputDevice_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Switcheroo.SwitcherooBlueprintLibrary.EnableInputDetection
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:

void USwitcherooBlueprintLibrary::EnableInputDetection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwitcherooBlueprintLibrary", "EnableInputDetection");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Switcheroo.SwitcherooBlueprintLibrary.DisableInputDetection
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:

void USwitcherooBlueprintLibrary::DisableInputDetection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwitcherooBlueprintLibrary", "DisableInputDetection");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Switcheroo.SwitcherooBlueprintLibrary.BindDetectedInputDeviceChanged
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Event                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USwitcherooBlueprintLibrary::BindDetectedInputDeviceChanged(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwitcherooBlueprintLibrary", "BindDetectedInputDeviceChanged");

	Params::USwitcherooBlueprintLibrary_BindDetectedInputDeviceChanged_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Switcheroo.SwitcherooBlueprintLibrary.ApplyDeadZoneToAnalogInput
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D                   Input                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USwitcherooBlueprintLibrary::ApplyDeadZoneToAnalogInput(const struct FVector2D& Input)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwitcherooBlueprintLibrary", "ApplyDeadZoneToAnalogInput");

	Params::USwitcherooBlueprintLibrary_ApplyDeadZoneToAnalogInput_Params Parms{};

	Parms.Input = Input;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Switcheroo.SwitcherooSettings
// (None)

class UClass* USwitcherooSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SwitcherooSettings");

	return Clss;
}


// SwitcherooSettings Switcheroo.Default__SwitcherooSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class USwitcherooSettings* USwitcherooSettings::GetDefaultObj()
{
	static class USwitcherooSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<USwitcherooSettings*>(USwitcherooSettings::StaticClass()->DefaultObject);

	return Default;
}


// Function Switcheroo.SwitcherooSettings.SetMouseMoveThreshold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewMouseMoveThreshold                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USwitcherooSettings::SetMouseMoveThreshold(float NewMouseMoveThreshold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwitcherooSettings", "SetMouseMoveThreshold");

	Params::USwitcherooSettings_SetMouseMoveThreshold_Params Parms{};

	Parms.NewMouseMoveThreshold = NewMouseMoveThreshold;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Switcheroo.SwitcherooSettings.SetDefaultInputDevice
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESwitcherooInputDevice  NewDefaultInputDevice                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USwitcherooSettings::SetDefaultInputDevice(enum class ESwitcherooInputDevice NewDefaultInputDevice)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwitcherooSettings", "SetDefaultInputDevice");

	Params::USwitcherooSettings_SetDefaultInputDevice_Params Parms{};

	Parms.NewDefaultInputDevice = NewDefaultInputDevice;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Switcheroo.SwitcherooSettings.SetAnalogStick
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESwitcherooAnalogStick  NewAnalogStick                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USwitcherooSettings::SetAnalogStick(enum class ESwitcherooAnalogStick NewAnalogStick)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwitcherooSettings", "SetAnalogStick");

	Params::USwitcherooSettings_SetAnalogStick_Params Parms{};

	Parms.NewAnalogStick = NewAnalogStick;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Switcheroo.SwitcherooSettings.SetAnalogDeadZoneSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewAnalogDeadZoneSize                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USwitcherooSettings::SetAnalogDeadZoneSize(float NewAnalogDeadZoneSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwitcherooSettings", "SetAnalogDeadZoneSize");

	Params::USwitcherooSettings_SetAnalogDeadZoneSize_Params Parms{};

	Parms.NewAnalogDeadZoneSize = NewAnalogDeadZoneSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Switcheroo.SwitcherooSettings.SetAnalogDeadZoneMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESwitcherooAnalogDeadZoneModeNewAnalogDeadZoneMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USwitcherooSettings::SetAnalogDeadZoneMode(enum class ESwitcherooAnalogDeadZoneMode NewAnalogDeadZoneMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwitcherooSettings", "SetAnalogDeadZoneMode");

	Params::USwitcherooSettings_SetAnalogDeadZoneMode_Params Parms{};

	Parms.NewAnalogDeadZoneMode = NewAnalogDeadZoneMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Switcheroo.SwitcherooSettings.GetSwitcherooSettings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USwitcherooSettings*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USwitcherooSettings* USwitcherooSettings::GetSwitcherooSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwitcherooSettings", "GetSwitcherooSettings");

	Params::USwitcherooSettings_GetSwitcherooSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Switcheroo.SwitcherooSettings.GetMouseMoveThreshold
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USwitcherooSettings::GetMouseMoveThreshold()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwitcherooSettings", "GetMouseMoveThreshold");

	Params::USwitcherooSettings_GetMouseMoveThreshold_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Switcheroo.SwitcherooSettings.GetDefaultInputDevice
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESwitcherooInputDevice  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESwitcherooInputDevice USwitcherooSettings::GetDefaultInputDevice()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwitcherooSettings", "GetDefaultInputDevice");

	Params::USwitcherooSettings_GetDefaultInputDevice_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Switcheroo.SwitcherooSettings.GetAnalogStick
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESwitcherooAnalogStick  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESwitcherooAnalogStick USwitcherooSettings::GetAnalogStick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwitcherooSettings", "GetAnalogStick");

	Params::USwitcherooSettings_GetAnalogStick_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Switcheroo.SwitcherooSettings.GetAnalogDeadZoneSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USwitcherooSettings::GetAnalogDeadZoneSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwitcherooSettings", "GetAnalogDeadZoneSize");

	Params::USwitcherooSettings_GetAnalogDeadZoneSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Switcheroo.SwitcherooSettings.GetAnalogDeadZoneMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESwitcherooAnalogDeadZoneModeReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESwitcherooAnalogDeadZoneMode USwitcherooSettings::GetAnalogDeadZoneMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwitcherooSettings", "GetAnalogDeadZoneMode");

	Params::USwitcherooSettings_GetAnalogDeadZoneMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


