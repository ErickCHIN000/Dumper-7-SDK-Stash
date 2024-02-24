#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CgSDK.CgSDKBlueprint
// (None)

class UClass* UCgSDKBlueprint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CgSDKBlueprint");

	return Clss;
}


// CgSDKBlueprint CgSDK.Default__CgSDKBlueprint
// (Public, ClassDefaultObject, ArchetypeObject)

class UCgSDKBlueprint* UCgSDKBlueprint::GetDefaultObj()
{
	static class UCgSDKBlueprint* Default = nullptr;

	if (!Default)
		Default = static_cast<UCgSDKBlueprint*>(UCgSDKBlueprint::StaticClass()->DefaultObject);

	return Default;
}


// Function CgSDK.CgSDKBlueprint.ShowProgressBar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ProgressBarName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCgSDKBlueprint::ShowProgressBar(const class FString& ProgressBarName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CgSDKBlueprint", "ShowProgressBar");

	Params::UCgSDKBlueprint_ShowProgressBar_Params Parms{};

	Parms.ProgressBarName = ProgressBarName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CgSDK.CgSDKBlueprint.SetStateWithKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      StateName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFCgSdkLedId            Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCgSDKBlueprint::SetStateWithKey(const class FString& StateName, enum class EFCgSdkLedId Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CgSDKBlueprint", "SetStateWithKey");

	Params::UCgSDKBlueprint_SetStateWithKey_Params Parms{};

	Parms.StateName = StateName;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CgSDK.CgSDKBlueprint.SetState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      StateName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCgSDKBlueprint::SetState(const class FString& StateName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CgSDKBlueprint", "SetState");

	Params::UCgSDKBlueprint_SetState_Params Parms{};

	Parms.StateName = StateName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CgSDK.CgSDKBlueprint.SetProgressBarValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ProgressBarName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCgSDKBlueprint::SetProgressBarValue(const class FString& ProgressBarName, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CgSDKBlueprint", "SetProgressBarValue");

	Params::UCgSDKBlueprint_SetProgressBarValue_Params Parms{};

	Parms.ProgressBarName = ProgressBarName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CgSDK.CgSDKBlueprint.SetGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      GameName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCgSDKBlueprint::SetGame(const class FString& GameName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CgSDKBlueprint", "SetGame");

	Params::UCgSDKBlueprint_SetGame_Params Parms{};

	Parms.GameName = GameName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CgSDK.CgSDKBlueprint.SetEventWithKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFCgSdkLedId            Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCgSDKBlueprint::SetEventWithKey(const class FString& EventName, enum class EFCgSdkLedId Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CgSDKBlueprint", "SetEventWithKey");

	Params::UCgSDKBlueprint_SetEventWithKey_Params Parms{};

	Parms.EventName = EventName;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CgSDK.CgSDKBlueprint.SetEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCgSDKBlueprint::SetEvent(const class FString& EventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CgSDKBlueprint", "SetEvent");

	Params::UCgSDKBlueprint_SetEvent_Params Parms{};

	Parms.EventName = EventName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CgSDK.CgSDKBlueprint.RequestControl
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCgSDKBlueprint::RequestControl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CgSDKBlueprint", "RequestControl");

	Params::UCgSDKBlueprint_RequestControl_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CgSDK.CgSDKBlueprint.ReleaseControl
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCgSDKBlueprint::ReleaseControl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CgSDKBlueprint", "ReleaseControl");

	Params::UCgSDKBlueprint_ReleaseControl_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CgSDK.CgSDKBlueprint.PerformProtocolHandshake
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UCgSDKBlueprint::PerformProtocolHandshake()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CgSDKBlueprint", "PerformProtocolHandshake");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CgSDK.CgSDKBlueprint.HideProgressBar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ProgressBarName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCgSDKBlueprint::HideProgressBar(const class FString& ProgressBarName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CgSDKBlueprint", "HideProgressBar");

	Params::UCgSDKBlueprint_HideProgressBar_Params Parms{};

	Parms.ProgressBarName = ProgressBarName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CgSDK.CgSDKBlueprint.ClearStateWithKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      StateName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFCgSdkLedId            Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCgSDKBlueprint::ClearStateWithKey(const class FString& StateName, enum class EFCgSdkLedId Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CgSDKBlueprint", "ClearStateWithKey");

	Params::UCgSDKBlueprint_ClearStateWithKey_Params Parms{};

	Parms.StateName = StateName;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CgSDK.CgSDKBlueprint.ClearState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      StateName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCgSDKBlueprint::ClearState(const class FString& StateName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CgSDKBlueprint", "ClearState");

	Params::UCgSDKBlueprint_ClearState_Params Parms{};

	Parms.StateName = StateName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CgSDK.CgSDKBlueprint.ClearAllStates
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCgSDKBlueprint::ClearAllStates()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CgSDKBlueprint", "ClearAllStates");

	Params::UCgSDKBlueprint_ClearAllStates_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CgSDK.CgSDKBlueprint.ClearAllEvents
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCgSDKBlueprint::ClearAllEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CgSDKBlueprint", "ClearAllEvents");

	Params::UCgSDKBlueprint_ClearAllEvents_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


