#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CriWareRuntime.AtomAsrRack
// (None)

class UClass* UAtomAsrRack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AtomAsrRack");

	return Clss;
}


// AtomAsrRack CriWareRuntime.Default__AtomAsrRack
// (Public, ClassDefaultObject, ArchetypeObject)

class UAtomAsrRack* UAtomAsrRack::GetDefaultObj()
{
	static class UAtomAsrRack* Default = nullptr;

	if (!Default)
		Default = static_cast<UAtomAsrRack*>(UAtomAsrRack::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.AtomAsrRack.SetEffectBypass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      BusName                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      EffectName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Bypasses                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomAsrRack::SetEffectBypass(const class FString& BusName, const class FString& EffectName, bool Bypasses)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomAsrRack", "SetEffectBypass");

	Params::UAtomAsrRack_SetEffectBypass_Params Parms{};

	Parms.BusName = BusName;
	Parms.EffectName = EffectName;
	Parms.Bypasses = Bypasses;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomAsrRack.SetBusVolumeByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      BusName                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomAsrRack::SetBusVolumeByName(const class FString& BusName, float Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomAsrRack", "SetBusVolumeByName");

	Params::UAtomAsrRack_SetBusVolumeByName_Params Parms{};

	Parms.BusName = BusName;
	Parms.Volume = Volume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomAsrRack.SetBusSendLevelByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      SourceBusName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      DestBusName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomAsrRack::SetBusSendLevelByName(const class FString& SourceBusName, const class FString& DestBusName, float Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomAsrRack", "SetBusSendLevelByName");

	Params::UAtomAsrRack_SetBusSendLevelByName_Params Parms{};

	Parms.SourceBusName = SourceBusName;
	Parms.DestBusName = DestBusName;
	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomAsrRack.GetDefaultAsrRack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAtomAsrRack*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAtomAsrRack* UAtomAsrRack::GetDefaultAsrRack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomAsrRack", "GetDefaultAsrRack");

	Params::UAtomAsrRack_GetDefaultAsrRack_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomAsrRack.GetBusAnalyzerInfo
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      DspBusName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Num_channels                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      Rms_levels                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<float>                      Peak_levels                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<float>                      Peak_hold_levels                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAtomAsrRack::GetBusAnalyzerInfo(const class FString& DspBusName, int32* Num_channels, TArray<float>* Rms_levels, TArray<float>* Peak_levels, TArray<float>* Peak_hold_levels)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomAsrRack", "GetBusAnalyzerInfo");

	Params::UAtomAsrRack_GetBusAnalyzerInfo_Params Parms{};

	Parms.DspBusName = DspBusName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Num_channels != nullptr)
		*Num_channels = Parms.Num_channels;

	if (Rms_levels != nullptr)
		*Rms_levels = std::move(Parms.Rms_levels);

	if (Peak_levels != nullptr)
		*Peak_levels = std::move(Parms.Peak_levels);

	if (Peak_hold_levels != nullptr)
		*Peak_hold_levels = std::move(Parms.Peak_hold_levels);

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomAsrRack.GetAsrRack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              AsrRackId                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAtomAsrRack*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAtomAsrRack* UAtomAsrRack::GetAsrRack(int32 AsrRackId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomAsrRack", "GetAsrRack");

	Params::UAtomAsrRack_GetAsrRack_Params Parms{};

	Parms.AsrRackId = AsrRackId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomAsrRack.DetachDspBusSetting
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAtomAsrRack::DetachDspBusSetting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomAsrRack", "DetachDspBusSetting");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomAsrRack.AttachDspBusSetting
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      SettingName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomAsrRack::AttachDspBusSetting(const class FString& SettingName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomAsrRack", "AttachDspBusSetting");

	Params::UAtomAsrRack_AttachDspBusSetting_Params Parms{};

	Parms.SettingName = SettingName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomAsrRack.ApplyDspBusSnapshot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      SnapshotName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Milliseconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomAsrRack::ApplyDspBusSnapshot(const class FString& SnapshotName, int32 Milliseconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomAsrRack", "ApplyDspBusSnapshot");

	Params::UAtomAsrRack_ApplyDspBusSnapshot_Params Parms{};

	Parms.SnapshotName = SnapshotName;
	Parms.Milliseconds = Milliseconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CriWareRuntime.AtomCategory
// (None)

class UClass* UAtomCategory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AtomCategory");

	return Clss;
}


// AtomCategory CriWareRuntime.Default__AtomCategory
// (Public, ClassDefaultObject, ArchetypeObject)

class UAtomCategory* UAtomCategory::GetDefaultObj()
{
	static class UAtomCategory* Default = nullptr;

	if (!Default)
		Default = static_cast<UAtomCategory*>(UAtomCategory::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.AtomCategory.StopByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      CategoryName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomCategory::StopByName(const class FString& CategoryName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomCategory", "StopByName");

	Params::UAtomCategory_StopByName_Params Parms{};

	Parms.CategoryName = CategoryName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomCategory.SetVolumeByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      CategoryName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomCategory::SetVolumeByName(const class FString& CategoryName, float Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomCategory", "SetVolumeByName");

	Params::UAtomCategory_SetVolumeByName_Params Parms{};

	Parms.CategoryName = CategoryName;
	Parms.Volume = Volume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomCategory.SetAisacControlByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      CategoryName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AisacName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomCategory::SetAisacControlByName(const class FString& CategoryName, const class FString& AisacName, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomCategory", "SetAisacControlByName");

	Params::UAtomCategory_SetAisacControlByName_Params Parms{};

	Parms.CategoryName = CategoryName;
	Parms.AisacName = AisacName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomCategory.ResetAllAisacControlByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      CategoryName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAtomCategory::ResetAllAisacControlByName(const class FString& CategoryName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomCategory", "ResetAllAisacControlByName");

	Params::UAtomCategory_ResetAllAisacControlByName_Params Parms{};

	Parms.CategoryName = CategoryName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomCategory.ResetAllAisacControlById
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              CategoryID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAtomCategory::ResetAllAisacControlById(int32 CategoryID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomCategory", "ResetAllAisacControlById");

	Params::UAtomCategory_ResetAllAisacControlById_Params Parms{};

	Parms.CategoryID = CategoryID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomCategory.PauseByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      CategoryName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPause                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomCategory::PauseByName(const class FString& CategoryName, bool bPause)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomCategory", "PauseByName");

	Params::UAtomCategory_PauseByName_Params Parms{};

	Parms.CategoryName = CategoryName;
	Parms.bPause = bPause;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomCategory.IsPausedByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      CategoryName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAtomCategory::IsPausedByName(const class FString& CategoryName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomCategory", "IsPausedByName");

	Params::UAtomCategory_IsPausedByName_Params Parms{};

	Parms.CategoryName = CategoryName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomCategory.GetVolumeByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      CategoryName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAtomCategory::GetVolumeByName(const class FString& CategoryName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomCategory", "GetVolumeByName");

	Params::UAtomCategory_GetVolumeByName_Params Parms{};

	Parms.CategoryName = CategoryName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomCategory.GetNumAttachedAisacsByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      CategoryName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAtomCategory::GetNumAttachedAisacsByName(const class FString& CategoryName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomCategory", "GetNumAttachedAisacsByName");

	Params::UAtomCategory_GetNumAttachedAisacsByName_Params Parms{};

	Parms.CategoryName = CategoryName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomCategory.GetNumAttachedAisacsById
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              CategoryID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAtomCategory::GetNumAttachedAisacsById(int32 CategoryID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomCategory", "GetNumAttachedAisacsById");

	Params::UAtomCategory_GetNumAttachedAisacsById_Params Parms{};

	Parms.CategoryID = CategoryID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomCategory.GetCurrentAisacControlValueByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      CategoryName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AisacControlName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAtomCategory::GetCurrentAisacControlValueByName(const class FString& CategoryName, const class FString& AisacControlName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomCategory", "GetCurrentAisacControlValueByName");

	Params::UAtomCategory_GetCurrentAisacControlValueByName_Params Parms{};

	Parms.CategoryName = CategoryName;
	Parms.AisacControlName = AisacControlName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomCategory.GetCurrentAisacControlValueById
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              CategoryID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AisacControlId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAtomCategory::GetCurrentAisacControlValueById(int32 CategoryID, int32 AisacControlId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomCategory", "GetCurrentAisacControlValueById");

	Params::UAtomCategory_GetCurrentAisacControlValueById_Params Parms{};

	Parms.CategoryID = CategoryID;
	Parms.AisacControlId = AisacControlId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomCategory.GetAttachedAisacInfoByName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      CategoryName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AisacAttachedIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsSuccess                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAtomAisacInfo              AisacInfo                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UAtomCategory::GetAttachedAisacInfoByName(const class FString& CategoryName, int32 AisacAttachedIndex, bool* IsSuccess, struct FAtomAisacInfo* AisacInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomCategory", "GetAttachedAisacInfoByName");

	Params::UAtomCategory_GetAttachedAisacInfoByName_Params Parms{};

	Parms.CategoryName = CategoryName;
	Parms.AisacAttachedIndex = AisacAttachedIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsSuccess != nullptr)
		*IsSuccess = Parms.IsSuccess;

	if (AisacInfo != nullptr)
		*AisacInfo = std::move(Parms.AisacInfo);

}


// Function CriWareRuntime.AtomCategory.GetAttachedAisacInfoById
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              CategoryID                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AisacAttachedIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsSuccess                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAtomAisacInfo              AisacInfo                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UAtomCategory::GetAttachedAisacInfoById(int32 CategoryID, int32 AisacAttachedIndex, bool* IsSuccess, struct FAtomAisacInfo* AisacInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomCategory", "GetAttachedAisacInfoById");

	Params::UAtomCategory_GetAttachedAisacInfoById_Params Parms{};

	Parms.CategoryID = CategoryID;
	Parms.AisacAttachedIndex = AisacAttachedIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsSuccess != nullptr)
		*IsSuccess = Parms.IsSuccess;

	if (AisacInfo != nullptr)
		*AisacInfo = std::move(Parms.AisacInfo);

}


// Class CriWareRuntime.AtomComponent
// (SceneComponent)

class UClass* UAtomComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AtomComponent");

	return Clss;
}


// AtomComponent CriWareRuntime.Default__AtomComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAtomComponent* UAtomComponent::GetDefaultObj()
{
	static class UAtomComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAtomComponent*>(UAtomComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.AtomComponent.Stop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAtomComponent::Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomComponent", "Stop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.SetVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::SetVolume(float Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomComponent", "SetVolume");

	Params::UAtomComponent_SetVolume_Params Parms{};

	Parms.Volume = Volume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.SetSoundObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAtomSoundObject*            SoundObject                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::SetSoundObject(class UAtomSoundObject* SoundObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomComponent", "SetSoundObject");

	Params::UAtomComponent_SetSoundObject_Params Parms{};

	Parms.SoundObject = SoundObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.SetSound
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundAtomCue*               NewSound                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::SetSound(class USoundAtomCue* NewSound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomComponent", "SetSound");

	Params::UAtomComponent_SetSound_Params Parms{};

	Parms.NewSound = NewSound;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.SetSelectorLabel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Selector                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Label                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::SetSelectorLabel(const class FString& Selector, const class FString& Label)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomComponent", "SetSelectorLabel");

	Params::UAtomComponent_SetSelectorLabel_Params Parms{};

	Parms.Selector = Selector;
	Parms.Label = Label;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.SetPitchMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewPitchMultiplier                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::SetPitchMultiplier(float NewPitchMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomComponent", "SetPitchMultiplier");

	Params::UAtomComponent_SetPitchMultiplier_Params Parms{};

	Parms.NewPitchMultiplier = NewPitchMultiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.SetPitch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Pitch                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::SetPitch(float Pitch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomComponent", "SetPitch");

	Params::UAtomComponent_SetPitch_Params Parms{};

	Parms.Pitch = Pitch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.SetNextBlockIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              BlockIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::SetNextBlockIndex(int32 BlockIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomComponent", "SetNextBlockIndex");

	Params::UAtomComponent_SetNextBlockIndex_Params Parms{};

	Parms.BlockIndex = BlockIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.SetDefaultAttenuationEnable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::SetDefaultAttenuationEnable(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomComponent", "SetDefaultAttenuationEnable");

	Params::UAtomComponent_SetDefaultAttenuationEnable_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.SetBusSendLevelOffsetByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      BusName                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              LevelOffset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::SetBusSendLevelOffsetByName(const class FString& BusName, float LevelOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomComponent", "SetBusSendLevelOffsetByName");

	Params::UAtomComponent_SetBusSendLevelOffsetByName_Params Parms{};

	Parms.BusName = BusName;
	Parms.LevelOffset = LevelOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.SetBusSendLevelOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              BusId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              LevelOffset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::SetBusSendLevelOffset(int32 BusId, float LevelOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomComponent", "SetBusSendLevelOffset");

	Params::UAtomComponent_SetBusSendLevelOffset_Params Parms{};

	Parms.BusId = BusId;
	Parms.LevelOffset = LevelOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.SetBusSendLevelByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      BusName                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::SetBusSendLevelByName(const class FString& BusName, float Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomComponent", "SetBusSendLevelByName");

	Params::UAtomComponent_SetBusSendLevelByName_Params Parms{};

	Parms.BusName = BusName;
	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.SetBusSendLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              BusId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::SetBusSendLevel(int32 BusId, float Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomComponent", "SetBusSendLevel");

	Params::UAtomComponent_SetBusSendLevel_Params Parms{};

	Parms.BusId = BusId;
	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.SetAsrRackID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Asr_rack_id                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::SetAsrRackID(int32 Asr_rack_id)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomComponent", "SetAsrRackID");

	Params::UAtomComponent_SetAsrRackID_Params Parms{};

	Parms.Asr_rack_id = Asr_rack_id;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.SetAisacByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ControlName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ControlValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::SetAisacByName(const class FString& ControlName, float ControlValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomComponent", "SetAisacByName");

	Params::UAtomComponent_SetAisacByName_Params Parms{};

	Parms.ControlName = ControlName;
	Parms.ControlValue = ControlValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              StartTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::Play(float StartTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomComponent", "Play");

	Params::UAtomComponent_Play_Params Parms{};

	Parms.StartTime = StartTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.Pause
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bPause                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::Pause(bool bPause)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomComponent", "Pause");

	Params::UAtomComponent_Pause_Params Parms{};

	Parms.bPause = bPause;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction CriWareRuntime.AtomComponent.OnAudioFinished__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UAtomComponent::OnAudioFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomComponent", "OnAudioFinished__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CriWareRuntime.AtomComponent.IsPlaying
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAtomComponent::IsPlaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomComponent", "IsPlaying");

	Params::UAtomComponent_IsPlaying_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomComponent.IsPaused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAtomComponent::IsPaused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomComponent", "IsPaused");

	Params::UAtomComponent_IsPaused_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomComponent.GetTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAtomComponent::GetTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomComponent", "GetTime");

	Params::UAtomComponent_GetTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomComponent.GetStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EAtomComponentStatus    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EAtomComponentStatus UAtomComponent::GetStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomComponent", "GetStatus");

	Params::UAtomComponent_GetStatus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomComponent.GetSequencePosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAtomComponent::GetSequencePosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomComponent", "GetSequencePosition");

	Params::UAtomComponent_GetSequencePosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomComponent.GetNumQueuedSounds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAtomComponent::GetNumQueuedSounds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomComponent", "GetNumQueuedSounds");

	Params::UAtomComponent_GetNumQueuedSounds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomComponent.GetDefaultAttenuationEnable
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAtomComponent::GetDefaultAttenuationEnable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomComponent", "GetDefaultAttenuationEnable");

	Params::UAtomComponent_GetDefaultAttenuationEnable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomComponent.GetCueName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAtomComponent::GetCueName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomComponent", "GetCueName");

	Params::UAtomComponent_GetCueName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomComponent.GetAtomComponentID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAtomComponent::GetAtomComponentID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomComponent", "GetAtomComponentID");

	Params::UAtomComponent_GetAtomComponentID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomComponent.FadeOut
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              FadeOutDuration                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FadeVolumeLevel                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::FadeOut(float FadeOutDuration, float FadeVolumeLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomComponent", "FadeOut");

	Params::UAtomComponent_FadeOut_Params Parms{};

	Parms.FadeOutDuration = FadeOutDuration;
	Parms.FadeVolumeLevel = FadeVolumeLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.FadeIn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              FadeInDuration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FadeVolumeLevel                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomComponent", "FadeIn");

	Params::UAtomComponent_FadeIn_Params Parms{};

	Parms.FadeInDuration = FadeInDuration;
	Parms.FadeVolumeLevel = FadeVolumeLevel;
	Parms.StartTime = StartTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.EnqueueSound
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundAtomCue*               NewSound                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::EnqueueSound(class USoundAtomCue* NewSound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomComponent", "EnqueueSound");

	Params::UAtomComponent_EnqueueSound_Params Parms{};

	Parms.NewSound = NewSound;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomComponent.DestroyComponentByID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              TargetID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomComponent::DestroyComponentByID(int32 TargetID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomComponent", "DestroyComponentByID");

	Params::UAtomComponent_DestroyComponentByID_Params Parms{};

	Parms.TargetID = TargetID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CriWareRuntime.AtomCueSheetLoaderComponent
// (SceneComponent)

class UClass* UAtomCueSheetLoaderComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AtomCueSheetLoaderComponent");

	return Clss;
}


// AtomCueSheetLoaderComponent CriWareRuntime.Default__AtomCueSheetLoaderComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAtomCueSheetLoaderComponent* UAtomCueSheetLoaderComponent::GetDefaultObj()
{
	static class UAtomCueSheetLoaderComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAtomCueSheetLoaderComponent*>(UAtomCueSheetLoaderComponent::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction CriWareRuntime.AtomCueSheetLoaderComponent.OnLoadError__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UAtomCueSheetLoaderComponent::OnLoadError__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomCueSheetLoaderComponent", "OnLoadError__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction CriWareRuntime.AtomCueSheetLoaderComponent.OnLoadCompleted__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UAtomCueSheetLoaderComponent::OnLoadCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomCueSheetLoaderComponent", "OnLoadCompleted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction CriWareRuntime.AtomCueSheetLoaderComponent.OnAtomCueSheetLoaded__DelegateSignature
// (Public, Delegate)
// Parameters:
// class USoundAtomCueSheet*          Loaded                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomCueSheetLoaderComponent::OnAtomCueSheetLoaded__DelegateSignature(class USoundAtomCueSheet* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomCueSheetLoaderComponent", "OnAtomCueSheetLoaded__DelegateSignature");

	Params::UAtomCueSheetLoaderComponent_OnAtomCueSheetLoaded__DelegateSignature_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CriWareRuntime.AtomCueSheetLoaderComponent.LoadAtomCueSheet
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSoftObjectPtr<class USoundAtomCueSheet>Asset                                                            (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UDelegateProperty_                 OnLoaded                                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UAtomCueSheetLoaderComponent::LoadAtomCueSheet(class UObject* WorldContextObject, TSoftObjectPtr<class USoundAtomCueSheet> Asset, UDelegateProperty_ OnLoaded, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomCueSheetLoaderComponent", "LoadAtomCueSheet");

	Params::UAtomCueSheetLoaderComponent_LoadAtomCueSheet_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Asset = Asset;
	Parms.OnLoaded = OnLoaded;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomCueSheetLoaderComponent.Load
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAtomCueSheetLoaderComponent::Load()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomCueSheetLoaderComponent", "Load");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomCueSheetLoaderComponent.GetStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EAtomCueSheetLoaderComponentStatusReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EAtomCueSheetLoaderComponentStatus UAtomCueSheetLoaderComponent::GetStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomCueSheetLoaderComponent", "GetStatus");

	Params::UAtomCueSheetLoaderComponent_GetStatus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomCueSheetLoaderComponent.GetAtomCueSheet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundAtomCueSheet*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USoundAtomCueSheet* UAtomCueSheetLoaderComponent::GetAtomCueSheet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomCueSheetLoaderComponent", "GetAtomCueSheet");

	Params::UAtomCueSheetLoaderComponent_GetAtomCueSheet_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CriWareRuntime.AtomDeviceWatcher
// (None)

class UClass* UAtomDeviceWatcher::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AtomDeviceWatcher");

	return Clss;
}


// AtomDeviceWatcher CriWareRuntime.Default__AtomDeviceWatcher
// (Public, ClassDefaultObject, ArchetypeObject)

class UAtomDeviceWatcher* UAtomDeviceWatcher::GetDefaultObj()
{
	static class UAtomDeviceWatcher* Default = nullptr;

	if (!Default)
		Default = static_cast<UAtomDeviceWatcher*>(UAtomDeviceWatcher::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction CriWareRuntime.AtomDeviceWatcher.OnDeviceUpdated__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UAtomDeviceWatcher::OnDeviceUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomDeviceWatcher", "OnDeviceUpdated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CriWareRuntime.AtomDeviceWatcher.GetDeviceName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAtomDeviceWatcher::GetDeviceName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomDeviceWatcher", "GetDeviceName");

	Params::UAtomDeviceWatcher_GetDeviceName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomDeviceWatcher.GetDeviceChannelCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAtomDeviceWatcher::GetDeviceChannelCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomDeviceWatcher", "GetDeviceChannelCount");

	Params::UAtomDeviceWatcher_GetDeviceChannelCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CriWareRuntime.AtomDisposer
// (Actor)

class UClass* AAtomDisposer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AtomDisposer");

	return Clss;
}


// AtomDisposer CriWareRuntime.Default__AtomDisposer
// (Public, ClassDefaultObject, ArchetypeObject)

class AAtomDisposer* AAtomDisposer::GetDefaultObj()
{
	static class AAtomDisposer* Default = nullptr;

	if (!Default)
		Default = static_cast<AAtomDisposer*>(AAtomDisposer::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.AtomListenerFocusPoint
// (SceneComponent)

class UClass* UAtomListenerFocusPoint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AtomListenerFocusPoint");

	return Clss;
}


// AtomListenerFocusPoint CriWareRuntime.Default__AtomListenerFocusPoint
// (Public, ClassDefaultObject, ArchetypeObject)

class UAtomListenerFocusPoint* UAtomListenerFocusPoint::GetDefaultObj()
{
	static class UAtomListenerFocusPoint* Default = nullptr;

	if (!Default)
		Default = static_cast<UAtomListenerFocusPoint*>(UAtomListenerFocusPoint::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.AtomParameterComponent
// (None)

class UClass* UAtomParameterComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AtomParameterComponent");

	return Clss;
}


// AtomParameterComponent CriWareRuntime.Default__AtomParameterComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAtomParameterComponent* UAtomParameterComponent::GetDefaultObj()
{
	static class UAtomParameterComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAtomParameterComponent*>(UAtomParameterComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.AtomProfileData
// (None)

class UClass* UAtomProfileData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AtomProfileData");

	return Clss;
}


// AtomProfileData CriWareRuntime.Default__AtomProfileData
// (Public, ClassDefaultObject, ArchetypeObject)

class UAtomProfileData* UAtomProfileData::GetDefaultObj()
{
	static class UAtomProfileData* Default = nullptr;

	if (!Default)
		Default = static_cast<UAtomProfileData*>(UAtomProfileData::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.AtomProfileData.CriWareAdx2ProfileDataUpdate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAtomProfileItem>    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FAtomProfileItem> UAtomProfileData::CriWareAdx2ProfileDataUpdate(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomProfileData", "CriWareAdx2ProfileDataUpdate");

	Params::UAtomProfileData_CriWareAdx2ProfileDataUpdate_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomProfileData.CriWareAdx2ProfileDataSort
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FAtomProfileItem>    Original_item                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// enum class EAtomProfileSortType    Sort_type                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAtomSortOrderType      Order_type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAtomProfileItem>    Sorted_item                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UAtomProfileData::CriWareAdx2ProfileDataSort(const TArray<struct FAtomProfileItem>& Original_item, enum class EAtomProfileSortType Sort_type, enum class EAtomSortOrderType Order_type, TArray<struct FAtomProfileItem>* Sorted_item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomProfileData", "CriWareAdx2ProfileDataSort");

	Params::UAtomProfileData_CriWareAdx2ProfileDataSort_Params Parms{};

	Parms.Original_item = Original_item;
	Parms.Sort_type = Sort_type;
	Parms.Order_type = Order_type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sorted_item != nullptr)
		*Sorted_item = std::move(Parms.Sorted_item);

}


// Class CriWareRuntime.AtomSound
// (Actor)

class UClass* AAtomSound::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AtomSound");

	return Clss;
}


// AtomSound CriWareRuntime.Default__AtomSound
// (Public, ClassDefaultObject, ArchetypeObject)

class AAtomSound* AAtomSound::GetDefaultObj()
{
	static class AAtomSound* Default = nullptr;

	if (!Default)
		Default = static_cast<AAtomSound*>(AAtomSound::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.AtomSoundData
// (Actor)

class UClass* AAtomSoundData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AtomSoundData");

	return Clss;
}


// AtomSoundData CriWareRuntime.Default__AtomSoundData
// (Public, ClassDefaultObject, ArchetypeObject)

class AAtomSoundData* AAtomSoundData::GetDefaultObj()
{
	static class AAtomSoundData* Default = nullptr;

	if (!Default)
		Default = static_cast<AAtomSoundData*>(AAtomSoundData::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.AtomSoundObject
// (None)

class UClass* UAtomSoundObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AtomSoundObject");

	return Clss;
}


// AtomSoundObject CriWareRuntime.Default__AtomSoundObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UAtomSoundObject* UAtomSoundObject::GetDefaultObj()
{
	static class UAtomSoundObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UAtomSoundObject*>(UAtomSoundObject::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.AtomSpectrumAnalyzer
// (None)

class UClass* UAtomSpectrumAnalyzer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AtomSpectrumAnalyzer");

	return Clss;
}


// AtomSpectrumAnalyzer CriWareRuntime.Default__AtomSpectrumAnalyzer
// (Public, ClassDefaultObject, ArchetypeObject)

class UAtomSpectrumAnalyzer* UAtomSpectrumAnalyzer::GetDefaultObj()
{
	static class UAtomSpectrumAnalyzer* Default = nullptr;

	if (!Default)
		Default = static_cast<UAtomSpectrumAnalyzer*>(UAtomSpectrumAnalyzer::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.AtomSpectrumAnalyzer.GetLevelsDB
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              Display_range                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      Spectra                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UAtomSpectrumAnalyzer::GetLevelsDB(float Display_range, TArray<float>* Spectra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomSpectrumAnalyzer", "GetLevelsDB");

	Params::UAtomSpectrumAnalyzer_GetLevelsDB_Params Parms{};

	Parms.Display_range = Display_range;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Spectra != nullptr)
		*Spectra = std::move(Parms.Spectra);

}


// Function CriWareRuntime.AtomSpectrumAnalyzer.GetLevels
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<float>                      Spectra                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UAtomSpectrumAnalyzer::GetLevels(TArray<float>* Spectra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomSpectrumAnalyzer", "GetLevels");

	Params::UAtomSpectrumAnalyzer_GetLevels_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Spectra != nullptr)
		*Spectra = std::move(Parms.Spectra);

}


// Function CriWareRuntime.AtomSpectrumAnalyzer.CreateDspSpectra
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAtomAsrRack*                Asr_rack                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      bus_name                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Num_bands                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomSpectrumAnalyzer::CreateDspSpectra(class UAtomAsrRack* Asr_rack, const class FString& bus_name, int32 Num_bands)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomSpectrumAnalyzer", "CreateDspSpectra");

	Params::UAtomSpectrumAnalyzer_CreateDspSpectra_Params Parms{};

	Parms.Asr_rack = Asr_rack;
	Parms.bus_name = bus_name;
	Parms.Num_bands = Num_bands;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CriWareRuntime.AtomStatics
// (None)

class UClass* UAtomStatics::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AtomStatics");

	return Clss;
}


// AtomStatics CriWareRuntime.Default__AtomStatics
// (Public, ClassDefaultObject, ArchetypeObject)

class UAtomStatics* UAtomStatics::GetDefaultObj()
{
	static class UAtomStatics* Default = nullptr;

	if (!Default)
		Default = static_cast<UAtomStatics*>(UAtomStatics::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.AtomStatics.StopAllSounds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UAtomStatics::StopAllSounds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomStatics", "StopAllSounds");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomStatics.SpawnSoundAttached
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class USoundAtomCue*               Sound                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             AttachToComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        AttachPointName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
// enum class EAttachLocation         LocationType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bStopWhenAttachedToDestroyed                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              VolumeMultiplier                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PitchMultiplier                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundAttenuation*           AttenuationSettings                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundConcurrency*           ConcurrencySettings                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAutoDestroy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAtomComponent*              ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAtomComponent* UAtomStatics::SpawnSoundAttached(class USoundAtomCue* Sound, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, enum class EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomStatics", "SpawnSoundAttached");

	Params::UAtomStatics_SpawnSoundAttached_Params Parms{};

	Parms.Sound = Sound;
	Parms.AttachToComponent = AttachToComponent;
	Parms.AttachPointName = AttachPointName;
	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.LocationType = LocationType;
	Parms.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	Parms.VolumeMultiplier = VolumeMultiplier;
	Parms.PitchMultiplier = PitchMultiplier;
	Parms.StartTime = StartTime;
	Parms.AttenuationSettings = AttenuationSettings;
	Parms.ConcurrencySettings = ConcurrencySettings;
	Parms.bAutoDestroy = bAutoDestroy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomStatics.SpawnSoundAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundAtomCue*               Sound                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
// float                              VolumeMultiplier                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PitchMultiplier                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundAttenuation*           AttenuationSettings                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundConcurrency*           ConcurrencySettings                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAutoDestroy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAtomComponent*              ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAtomComponent* UAtomStatics::SpawnSoundAtLocation(class UObject* WorldContextObject, class USoundAtomCue* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomStatics", "SpawnSoundAtLocation");

	Params::UAtomStatics_SpawnSoundAtLocation_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Sound = Sound;
	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.VolumeMultiplier = VolumeMultiplier;
	Parms.PitchMultiplier = PitchMultiplier;
	Parms.StartTime = StartTime;
	Parms.AttenuationSettings = AttenuationSettings;
	Parms.ConcurrencySettings = ConcurrencySettings;
	Parms.bAutoDestroy = bAutoDestroy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomStatics.SpawnSound2D
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundAtomCue*               Sound                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PitchMultiplier                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPersistAcrossLevelTransition                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAutoDestroy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAtomComponent*              ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAtomComponent* UAtomStatics::SpawnSound2D(class UObject* WorldContextObject, class USoundAtomCue* Sound, float PitchMultiplier, float StartTime, bool bPersistAcrossLevelTransition, bool bAutoDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomStatics", "SpawnSound2D");

	Params::UAtomStatics_SpawnSound2D_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Sound = Sound;
	Parms.PitchMultiplier = PitchMultiplier;
	Parms.StartTime = StartTime;
	Parms.bPersistAcrossLevelTransition = bPersistAcrossLevelTransition;
	Parms.bAutoDestroy = bAutoDestroy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomStatics.PlaySoundForAnimNotify
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class USoundAtomCue*               Sound                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             AttachToComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        AttachPointName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bStopWhenAttachedToDestroyed                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              VolumeMultiplier                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PitchMultiplier                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundAttenuation*           AttenuationSettings                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomStatics::PlaySoundForAnimNotify(class USoundAtomCue* Sound, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct FVector& Location, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomStatics", "PlaySoundForAnimNotify");

	Params::UAtomStatics_PlaySoundForAnimNotify_Params Parms{};

	Parms.Sound = Sound;
	Parms.AttachToComponent = AttachToComponent;
	Parms.AttachPointName = AttachPointName;
	Parms.Location = Location;
	Parms.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	Parms.VolumeMultiplier = VolumeMultiplier;
	Parms.PitchMultiplier = PitchMultiplier;
	Parms.StartTime = StartTime;
	Parms.AttenuationSettings = AttenuationSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomStatics.PlaySoundAttached
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class USoundAtomCue*               Sound                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             AttachToComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        AttachPointName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bStopWhenAttachedToDestroyed                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              VolumeMultiplier                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PitchMultiplier                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundAttenuation*           AttenuationSettings                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAtomComponent*              ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAtomComponent* UAtomStatics::PlaySoundAttached(class USoundAtomCue* Sound, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct FVector& Location, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomStatics", "PlaySoundAttached");

	Params::UAtomStatics_PlaySoundAttached_Params Parms{};

	Parms.Sound = Sound;
	Parms.AttachToComponent = AttachToComponent;
	Parms.AttachPointName = AttachPointName;
	Parms.Location = Location;
	Parms.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	Parms.VolumeMultiplier = VolumeMultiplier;
	Parms.PitchMultiplier = PitchMultiplier;
	Parms.StartTime = StartTime;
	Parms.AttenuationSettings = AttenuationSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomStatics.PlaySoundAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundAtomCue*               Sound                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
// float                              VolumeMultiplier                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PitchMultiplier                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundAttenuation*           AttenuationSettings                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundConcurrency*           ConcurrencySettings                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomStatics::PlaySoundAtLocation(class UObject* WorldContextObject, class USoundAtomCue* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomStatics", "PlaySoundAtLocation");

	Params::UAtomStatics_PlaySoundAtLocation_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Sound = Sound;
	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.VolumeMultiplier = VolumeMultiplier;
	Parms.PitchMultiplier = PitchMultiplier;
	Parms.StartTime = StartTime;
	Parms.AttenuationSettings = AttenuationSettings;
	Parms.ConcurrencySettings = ConcurrencySettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomStatics.PauseAudioOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bPause                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAtomStatics::PauseAudioOutput(bool bPause)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomStatics", "PauseAudioOutput");

	Params::UAtomStatics_PauseAudioOutput_Params Parms{};

	Parms.bPause = bPause;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.AtomStatics.LoadAtomConfig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USoundAtomConfig*            AcfObject                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAtomStatics::LoadAtomConfig(class USoundAtomConfig* AcfObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomStatics", "LoadAtomConfig");

	Params::UAtomStatics_LoadAtomConfig_Params Parms{};

	Parms.AcfObject = AcfObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.AtomStatics.CreateRootedAtomComponent
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAutoDestroy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAtomComponent*              ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAtomComponent* UAtomStatics::CreateRootedAtomComponent(class UObject* WorldContextObject, bool bAutoDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomStatics", "CreateRootedAtomComponent");

	Params::UAtomStatics_CreateRootedAtomComponent_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.bAutoDestroy = bAutoDestroy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CriWareRuntime.AtomTriggerTableFunctionLibrary
// (None)

class UClass* UAtomTriggerTableFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AtomTriggerTableFunctionLibrary");

	return Clss;
}


// AtomTriggerTableFunctionLibrary CriWareRuntime.Default__AtomTriggerTableFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAtomTriggerTableFunctionLibrary* UAtomTriggerTableFunctionLibrary::GetDefaultObj()
{
	static class UAtomTriggerTableFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAtomTriggerTableFunctionLibrary*>(UAtomTriggerTableFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.AtomTriggerTableFunctionLibrary.GetDataTableRowFromName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDataTable*                  Table                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        RowName                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAtomTriggerRow             OutRow                                                           (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAtomTriggerTableFunctionLibrary::GetDataTableRowFromName(class UDataTable* Table, class FName RowName, struct FAtomTriggerRow* OutRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AtomTriggerTableFunctionLibrary", "GetDataTableRowFromName");

	Params::UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName_Params Parms{};

	Parms.Table = Table;
	Parms.RowName = RowName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutRow != nullptr)
		*OutRow = std::move(Parms.OutRow);

	return Parms.ReturnValue;

}


// Class CriWareRuntime.CriFsBinderComponent
// (SceneComponent)

class UClass* UCriFsBinderComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CriFsBinderComponent");

	return Clss;
}


// CriFsBinderComponent CriWareRuntime.Default__CriFsBinderComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UCriFsBinderComponent* UCriFsBinderComponent::GetDefaultObj()
{
	static class UCriFsBinderComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UCriFsBinderComponent*>(UCriFsBinderComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.CriFsBinderComponent.Stop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCriFsBinderComponent::Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CriFsBinderComponent", "Stop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction CriWareRuntime.CriFsBinderComponent.OnBindError__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UCriFsBinderComponent::OnBindError__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CriFsBinderComponent", "OnBindError__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction CriWareRuntime.CriFsBinderComponent.OnBindCompleted__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UCriFsBinderComponent::OnBindCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CriFsBinderComponent", "OnBindCompleted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CriWareRuntime.CriFsBinderComponent.GetStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ECriFsBinderStatus      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECriFsBinderStatus UCriFsBinderComponent::GetStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CriFsBinderComponent", "GetStatus");

	Params::UCriFsBinderComponent_GetStatus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.CriFsBinderComponent.Bind
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCriFsBinderComponent::Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CriFsBinderComponent", "Bind");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class CriWareRuntime.CriFsLoader
// (Actor)

class UClass* ACriFsLoader::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CriFsLoader");

	return Clss;
}


// CriFsLoader CriWareRuntime.Default__CriFsLoader
// (Public, ClassDefaultObject, ArchetypeObject)

class ACriFsLoader* ACriFsLoader::GetDefaultObj()
{
	static class ACriFsLoader* Default = nullptr;

	if (!Default)
		Default = static_cast<ACriFsLoader*>(ACriFsLoader::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.CriFsLoaderComponent
// (SceneComponent)

class UClass* UCriFsLoaderComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CriFsLoaderComponent");

	return Clss;
}


// CriFsLoaderComponent CriWareRuntime.Default__CriFsLoaderComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UCriFsLoaderComponent* UCriFsLoaderComponent::GetDefaultObj()
{
	static class UCriFsLoaderComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UCriFsLoaderComponent*>(UCriFsLoaderComponent::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction CriWareRuntime.CriFsLoaderComponent.OnLoadError__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UCriFsLoaderComponent::OnLoadError__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CriFsLoaderComponent", "OnLoadError__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction CriWareRuntime.CriFsLoaderComponent.OnLoadCompleted__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UCriFsLoaderComponent::OnLoadCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CriFsLoaderComponent", "OnLoadCompleted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CriWareRuntime.CriFsLoaderComponent.Load
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCriFsLoaderComponent::Load()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CriFsLoaderComponent", "Load");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.CriFsLoaderComponent.GetStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ECriFsLoaderStatus      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECriFsLoaderStatus UCriFsLoaderComponent::GetStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CriFsLoaderComponent", "GetStatus");

	Params::UCriFsLoaderComponent_GetStatus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.CriFsLoaderComponent.GetDataArray
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<uint8>                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<uint8> UCriFsLoaderComponent::GetDataArray()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CriFsLoaderComponent", "GetDataArray");

	Params::UCriFsLoaderComponent_GetDataArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CriWareRuntime.CriWareFunctionLibrary
// (None)

class UClass* UCriWareFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CriWareFunctionLibrary");

	return Clss;
}


// CriWareFunctionLibrary CriWareRuntime.Default__CriWareFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UCriWareFunctionLibrary* UCriWareFunctionLibrary::GetDefaultObj()
{
	static class UCriWareFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UCriWareFunctionLibrary*>(UCriWareFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.CriWareFunctionLibrary.SetSpeakerAngleArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class ECriWareSpeakerSystem   SpeakerSystem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      Angles                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UCriWareFunctionLibrary::SetSpeakerAngleArray(enum class ECriWareSpeakerSystem SpeakerSystem, TArray<float>& Angles)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CriWareFunctionLibrary", "SetSpeakerAngleArray");

	Params::UCriWareFunctionLibrary_SetSpeakerAngleArray_Params Parms{};

	Parms.SpeakerSystem = SpeakerSystem;
	Parms.Angles = Angles;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.CriWareFunctionLibrary.SetGlobalLabelToSelectorByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SelectorName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      LabelName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCriWareFunctionLibrary::SetGlobalLabelToSelectorByName(const class FString& SelectorName, const class FString& LabelName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CriWareFunctionLibrary", "SetGlobalLabelToSelectorByName");

	Params::UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName_Params Parms{};

	Parms.SelectorName = SelectorName;
	Parms.LabelName = LabelName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.CriWareFunctionLibrary.SetGameVariableByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      GameVariableName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCriWareFunctionLibrary::SetGameVariableByName(const class FString& GameVariableName, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CriWareFunctionLibrary", "SetGameVariableByName");

	Params::UCriWareFunctionLibrary_SetGameVariableByName_Params Parms{};

	Parms.GameVariableName = GameVariableName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CriWareRuntime.CriWareInitializer
// (None)

class UClass* UCriWareInitializer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CriWareInitializer");

	return Clss;
}


// CriWareInitializer CriWareRuntime.Default__CriWareInitializer
// (Public, ClassDefaultObject, ArchetypeObject)

class UCriWareInitializer* UCriWareInitializer::GetDefaultObj()
{
	static class UCriWareInitializer* Default = nullptr;

	if (!Default)
		Default = static_cast<UCriWareInitializer*>(UCriWareInitializer::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.CriWarePluginSettings
// (None)

class UClass* UCriWarePluginSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CriWarePluginSettings");

	return Clss;
}


// CriWarePluginSettings CriWareRuntime.Default__CriWarePluginSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UCriWarePluginSettings* UCriWarePluginSettings::GetDefaultObj()
{
	static class UCriWarePluginSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UCriWarePluginSettings*>(UCriWarePluginSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.ManaComponent
// (None)

class UClass* UManaComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ManaComponent");

	return Clss;
}


// ManaComponent CriWareRuntime.Default__ManaComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UManaComponent* UManaComponent::GetDefaultObj()
{
	static class UManaComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UManaComponent*>(UManaComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.ManaComponent.ToIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaComponent::ToIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "ToIndex");

	Params::UManaComponent_ToIndex_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaComponent.StopAndWaitCompletion
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UManaComponent::StopAndWaitCompletion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "StopAndWaitCompletion");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.Stop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UManaComponent::Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "Stop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.SetVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::SetVolume(float Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "SetVolume");

	Params::UManaComponent_SetVolume_Params Parms{};

	Parms.Volume = Volume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.SetTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UManaTexture*                Texture                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::SetTexture(class UManaTexture* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "SetTexture");

	Params::UManaComponent_SetTexture_Params Parms{};

	Parms.Texture = Texture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.SetSubVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::SetSubVolume(float Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "SetSubVolume");

	Params::UManaComponent_SetSubVolume_Params Parms{};

	Parms.Volume = Volume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.SetSubAudioTrack
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Track                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::SetSubAudioTrack(int32 Track)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "SetSubAudioTrack");

	Params::UManaComponent_SetSubAudioTrack_Params Parms{};

	Parms.Track = Track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.SetPlaybackTimer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EManaPlaybackTimer      InPlaybackTimer                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::SetPlaybackTimer(enum class EManaPlaybackTimer InPlaybackTimer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "SetPlaybackTimer");

	Params::UManaComponent_SetPlaybackTimer_Params Parms{};

	Parms.InPlaybackTimer = InPlaybackTimer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.SetFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      MovieFilePath                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::SetFile(const class FString& MovieFilePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "SetFile");

	Params::UManaComponent_SetFile_Params Parms{};

	Parms.MovieFilePath = MovieFilePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.SetExtraVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::SetExtraVolume(float Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "SetExtraVolume");

	Params::UManaComponent_SetExtraVolume_Params Parms{};

	Parms.Volume = Volume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.SetExtraAudioTrack
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Track                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::SetExtraAudioTrack(int32 Track)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "SetExtraAudioTrack");

	Params::UManaComponent_SetExtraAudioTrack_Params Parms{};

	Parms.Track = Track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.SetCachedData
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      DataArray                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UManaComponent::SetCachedData(TArray<uint8>& DataArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "SetCachedData");

	Params::UManaComponent_SetCachedData_Params Parms{};

	Parms.DataArray = DataArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.SetAudioTrack
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Track                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::SetAudioTrack(int32 Track)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "SetAudioTrack");

	Params::UManaComponent_SetAudioTrack_Params Parms{};

	Parms.Track = Track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.SeekToPosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              FrameNumber                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::SeekToPosition(int32 FrameNumber)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "SeekToPosition");

	Params::UManaComponent_SeekToPosition_Params Parms{};

	Parms.FrameNumber = FrameNumber;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.ResetCachedData
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UManaComponent::ResetCachedData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "ResetCachedData");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.Previous
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaComponent::Previous()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "Previous");

	Params::UManaComponent_Previous_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaComponent.PreparePlaylistIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::PreparePlaylistIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "PreparePlaylistIndex");

	Params::UManaComponent_PreparePlaylistIndex_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.Prepare
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UManaComponent::Prepare()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "Prepare");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UManaComponent::Play()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "Play");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.Pause
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bPause                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::Pause(bool bPause)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "Pause");

	Params::UManaComponent_Pause_Params Parms{};

	Parms.bPause = bPause;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction CriWareRuntime.ManaComponent.OnSubtitleChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FText                        Subtitle                                                         (Parm, NativeAccessSpecifierPublic)

void UManaComponent::OnSubtitleChanged__DelegateSignature(class FText Subtitle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "OnSubtitleChanged__DelegateSignature");

	Params::UManaComponent_OnSubtitleChanged__DelegateSignature_Params Parms{};

	Parms.Subtitle = Subtitle;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction CriWareRuntime.ManaComponent.OnStatusChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// enum class EManaComponentStatus    Status                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UManaComponent*              ManaComponent                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::OnStatusChanged__DelegateSignature(enum class EManaComponentStatus Status, class UManaComponent* ManaComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "OnStatusChanged__DelegateSignature");

	Params::UManaComponent_OnStatusChanged__DelegateSignature_Params Parms{};

	Parms.Status = Status;
	Parms.ManaComponent = ManaComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction CriWareRuntime.ManaComponent.OnRequestData__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UManaComponent*              ManaComponent                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::OnRequestData__DelegateSignature(class UManaComponent* ManaComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "OnRequestData__DelegateSignature");

	Params::UManaComponent_OnRequestData__DelegateSignature_Params Parms{};

	Parms.ManaComponent = ManaComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction CriWareRuntime.ManaComponent.OnEventPoint__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FManaEventPointInfo         EventPointInfo                                                   (Parm, NativeAccessSpecifierPublic)

void UManaComponent::OnEventPoint__DelegateSignature(const struct FManaEventPointInfo& EventPointInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "OnEventPoint__DelegateSignature");

	Params::UManaComponent_OnEventPoint__DelegateSignature_Params Parms{};

	Parms.EventPointInfo = EventPointInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CriWareRuntime.ManaComponent.Next
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaComponent::Next()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "Next");

	Params::UManaComponent_Next_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaComponent.Loop
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInLoop                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::Loop(bool bInLoop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "Loop");

	Params::UManaComponent_Loop_Params Parms{};

	Parms.bInLoop = bInLoop;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.IsReady
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaComponent::IsReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "IsReady");

	Params::UManaComponent_IsReady_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaComponent.IsPreparing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaComponent::IsPreparing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "IsPreparing");

	Params::UManaComponent_IsPreparing_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaComponent.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaComponent::IsPlaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "IsPlaying");

	Params::UManaComponent_IsPlaying_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaComponent.IsPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaComponent::IsPaused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "IsPaused");

	Params::UManaComponent_IsPaused_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaComponent.IsLooping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaComponent::IsLooping()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "IsLooping");

	Params::UManaComponent_IsLooping_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaComponent.GetVolume
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UManaComponent::GetVolume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "GetVolume");

	Params::UManaComponent_GetVolume_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaComponent.GetTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UManaComponent::GetTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "GetTime");

	Params::UManaComponent_GetTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaComponent.GetTexture
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UManaTexture*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UManaTexture* UManaComponent::GetTexture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "GetTexture");

	Params::UManaComponent_GetTexture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaComponent.GetSubVolume
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UManaComponent::GetSubVolume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "GetSubVolume");

	Params::UManaComponent_GetSubVolume_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaComponent.GetStatus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EManaComponentStatus    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EManaComponentStatus UManaComponent::GetStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "GetStatus");

	Params::UManaComponent_GetStatus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaComponent.GetSource
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UManaMovie*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UManaMovie* UManaComponent::GetSource()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "GetSource");

	Params::UManaComponent_GetSource_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaComponent.GetFrameNumber
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UManaComponent::GetFrameNumber()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "GetFrameNumber");

	Params::UManaComponent_GetFrameNumber_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaComponent.GetExtraVolume
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UManaComponent::GetExtraVolume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "GetExtraVolume");

	Params::UManaComponent_GetExtraVolume_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaComponent.EnableSubtitles
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::EnableSubtitles(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "EnableSubtitles");

	Params::UManaComponent_EnableSubtitles_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.EnableSeamless
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::EnableSeamless(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "EnableSeamless");

	Params::UManaComponent_EnableSeamless_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.ChangeSubtitlesEncoding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EManaSubtitlesEncoding  Encoding                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::ChangeSubtitlesEncoding(enum class EManaSubtitlesEncoding Encoding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "ChangeSubtitlesEncoding");

	Params::UManaComponent_ChangeSubtitlesEncoding_Params Parms{};

	Parms.Encoding = Encoding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaComponent.ChangeSubtitlesChannel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Channel                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaComponent::ChangeSubtitlesChannel(int32 Channel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaComponent", "ChangeSubtitlesChannel");

	Params::UManaComponent_ChangeSubtitlesChannel_Params Parms{};

	Parms.Channel = Channel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CriWareRuntime.ManaComponentTexture
// (None)

class UClass* UManaComponentTexture::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ManaComponentTexture");

	return Clss;
}


// ManaComponentTexture CriWareRuntime.Default__ManaComponentTexture
// (Public, ClassDefaultObject, ArchetypeObject)

class UManaComponentTexture* UManaComponentTexture::GetDefaultObj()
{
	static class UManaComponentTexture* Default = nullptr;

	if (!Default)
		Default = static_cast<UManaComponentTexture*>(UManaComponentTexture::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.ManaSource
// (None)

class UClass* UManaSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ManaSource");

	return Clss;
}


// ManaSource CriWareRuntime.Default__ManaSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UManaSource* UManaSource::GetDefaultObj()
{
	static class UManaSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UManaSource*>(UManaSource::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.ManaMovie
// (None)

class UClass* UManaMovie::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ManaMovie");

	return Clss;
}


// ManaMovie CriWareRuntime.Default__ManaMovie
// (Public, ClassDefaultObject, ArchetypeObject)

class UManaMovie* UManaMovie::GetDefaultObj()
{
	static class UManaMovie* Default = nullptr;

	if (!Default)
		Default = static_cast<UManaMovie*>(UManaMovie::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.FileManaMovie
// (None)

class UClass* UFileManaMovie::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FileManaMovie");

	return Clss;
}


// FileManaMovie CriWareRuntime.Default__FileManaMovie
// (Public, ClassDefaultObject, ArchetypeObject)

class UFileManaMovie* UFileManaMovie::GetDefaultObj()
{
	static class UFileManaMovie* Default = nullptr;

	if (!Default)
		Default = static_cast<UFileManaMovie*>(UFileManaMovie::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.FileManaMovie.SetFilePath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Path                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFileManaMovie::SetFilePath(const class FString& Path)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FileManaMovie", "SetFilePath");

	Params::UFileManaMovie_SetFilePath_Params Parms{};

	Parms.Path = Path;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CriWareRuntime.DataManaMovie
// (None)

class UClass* UDataManaMovie::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataManaMovie");

	return Clss;
}


// DataManaMovie CriWareRuntime.Default__DataManaMovie
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataManaMovie* UDataManaMovie::GetDefaultObj()
{
	static class UDataManaMovie* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataManaMovie*>(UDataManaMovie::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.DataManaMovie.SetDataArray
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      InDataArray                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UDataManaMovie::SetDataArray(TArray<uint8>* InDataArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataManaMovie", "SetDataArray");

	Params::UDataManaMovie_SetDataArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InDataArray != nullptr)
		*InDataArray = std::move(Parms.InDataArray);

}


// Function CriWareRuntime.DataManaMovie.GetDataArray
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> UDataManaMovie::GetDataArray()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataManaMovie", "GetDataArray");

	Params::UDataManaMovie_GetDataArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CriWareRuntime.ManaPlaylist
// (None)

class UClass* UManaPlaylist::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ManaPlaylist");

	return Clss;
}


// ManaPlaylist CriWareRuntime.Default__ManaPlaylist
// (Public, ClassDefaultObject, ArchetypeObject)

class UManaPlaylist* UManaPlaylist::GetDefaultObj()
{
	static class UManaPlaylist* Default = nullptr;

	if (!Default)
		Default = static_cast<UManaPlaylist*>(UManaPlaylist::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.ManaPlaylist.RemoveAt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaPlaylist::RemoveAt(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaPlaylist", "RemoveAt");

	Params::UManaPlaylist_RemoveAt_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaPlaylist.Remove
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UManaMovie*                  ManaMovie                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaPlaylist::Remove(class UManaMovie* ManaMovie)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaPlaylist", "Remove");

	Params::UManaPlaylist_Remove_Params Parms{};

	Parms.ManaMovie = ManaMovie;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaPlaylist.Num
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UManaPlaylist::Num()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaPlaylist", "Num");

	Params::UManaPlaylist_Num_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlaylist.IsSeamless
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaPlaylist::IsSeamless()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaPlaylist", "IsSeamless");

	Params::UManaPlaylist_IsSeamless_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlaylist.IsMixedTypes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaPlaylist::IsMixedTypes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaPlaylist", "IsMixedTypes");

	Params::UManaPlaylist_IsMixedTypes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlaylist.IsAlpha
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UManaPlaylist::IsAlpha()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaPlaylist", "IsAlpha");

	Params::UManaPlaylist_IsAlpha_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlaylist.Insert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UManaMovie*                  ManaMovie                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaPlaylist::Insert(class UManaMovie* ManaMovie, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaPlaylist", "Insert");

	Params::UManaPlaylist_Insert_Params Parms{};

	Parms.ManaMovie = ManaMovie;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.ManaPlaylist.GetRandom
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              InOutIndex                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UManaMovie*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UManaMovie* UManaPlaylist::GetRandom(int32* InOutIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaPlaylist", "GetRandom");

	Params::UManaPlaylist_GetRandom_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InOutIndex != nullptr)
		*InOutIndex = Parms.InOutIndex;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlaylist.GetPrevious
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              InOutIndex                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UManaMovie*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UManaMovie* UManaPlaylist::GetPrevious(int32* InOutIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaPlaylist", "GetPrevious");

	Params::UManaPlaylist_GetPrevious_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InOutIndex != nullptr)
		*InOutIndex = Parms.InOutIndex;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlaylist.GetNext
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              InOutIndex                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UManaMovie*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UManaMovie* UManaPlaylist::GetNext(int32* InOutIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaPlaylist", "GetNext");

	Params::UManaPlaylist_GetNext_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InOutIndex != nullptr)
		*InOutIndex = Parms.InOutIndex;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlaylist.Get
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UManaMovie*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UManaMovie* UManaPlaylist::Get(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaPlaylist", "Get");

	Params::UManaPlaylist_Get_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.ManaPlaylist.Add
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UManaMovie*                  ManaMovie                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaPlaylist::Add(class UManaMovie* ManaMovie)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaPlaylist", "Add");

	Params::UManaPlaylist_Add_Params Parms{};

	Parms.ManaMovie = ManaMovie;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CriWareRuntime.ManaTexture
// (None)

class UClass* UManaTexture::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ManaTexture");

	return Clss;
}


// ManaTexture CriWareRuntime.Default__ManaTexture
// (Public, ClassDefaultObject, ArchetypeObject)

class UManaTexture* UManaTexture::GetDefaultObj()
{
	static class UManaTexture* Default = nullptr;

	if (!Default)
		Default = static_cast<UManaTexture*>(UManaTexture::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.ManaTexture.SetMovieSource
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UManaSource*                 InSource                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UManaTexture::SetMovieSource(class UManaSource* InSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ManaTexture", "SetMovieSource");

	Params::UManaTexture_SetMovieSource_Params Parms{};

	Parms.InSource = InSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CriWareRuntime.MaterialExpressionManaColorSpaceConverter
// (None)

class UClass* UMaterialExpressionManaColorSpaceConverter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MaterialExpressionManaColorSpaceConverter");

	return Clss;
}


// MaterialExpressionManaColorSpaceConverter CriWareRuntime.Default__MaterialExpressionManaColorSpaceConverter
// (Public, ClassDefaultObject, ArchetypeObject)

class UMaterialExpressionManaColorSpaceConverter* UMaterialExpressionManaColorSpaceConverter::GetDefaultObj()
{
	static class UMaterialExpressionManaColorSpaceConverter* Default = nullptr;

	if (!Default)
		Default = static_cast<UMaterialExpressionManaColorSpaceConverter*>(UMaterialExpressionManaColorSpaceConverter::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.MaterialExpressionManaMovieFormatSwitch
// (None)

class UClass* UMaterialExpressionManaMovieFormatSwitch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MaterialExpressionManaMovieFormatSwitch");

	return Clss;
}


// MaterialExpressionManaMovieFormatSwitch CriWareRuntime.Default__MaterialExpressionManaMovieFormatSwitch
// (Public, ClassDefaultObject, ArchetypeObject)

class UMaterialExpressionManaMovieFormatSwitch* UMaterialExpressionManaMovieFormatSwitch::GetDefaultObj()
{
	static class UMaterialExpressionManaMovieFormatSwitch* Default = nullptr;

	if (!Default)
		Default = static_cast<UMaterialExpressionManaMovieFormatSwitch*>(UMaterialExpressionManaMovieFormatSwitch::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.MatineeTrackAtomFloatBase
// (None)

class UClass* UMatineeTrackAtomFloatBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MatineeTrackAtomFloatBase");

	return Clss;
}


// MatineeTrackAtomFloatBase CriWareRuntime.Default__MatineeTrackAtomFloatBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMatineeTrackAtomFloatBase* UMatineeTrackAtomFloatBase::GetDefaultObj()
{
	static class UMatineeTrackAtomFloatBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMatineeTrackAtomFloatBase*>(UMatineeTrackAtomFloatBase::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.MatineeTrackAisacControlName
// (None)

class UClass* UMatineeTrackAisacControlName::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MatineeTrackAisacControlName");

	return Clss;
}


// MatineeTrackAisacControlName CriWareRuntime.Default__MatineeTrackAisacControlName
// (Public, ClassDefaultObject, ArchetypeObject)

class UMatineeTrackAisacControlName* UMatineeTrackAisacControlName::GetDefaultObj()
{
	static class UMatineeTrackAisacControlName* Default = nullptr;

	if (!Default)
		Default = static_cast<UMatineeTrackAisacControlName*>(UMatineeTrackAisacControlName::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.MatineeTrackAtomBase
// (None)

class UClass* UMatineeTrackAtomBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MatineeTrackAtomBase");

	return Clss;
}


// MatineeTrackAtomBase CriWareRuntime.Default__MatineeTrackAtomBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMatineeTrackAtomBase* UMatineeTrackAtomBase::GetDefaultObj()
{
	static class UMatineeTrackAtomBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMatineeTrackAtomBase*>(UMatineeTrackAtomBase::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.MatineeTrackAtomSoundBase
// (None)

class UClass* UMatineeTrackAtomSoundBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MatineeTrackAtomSoundBase");

	return Clss;
}


// MatineeTrackAtomSoundBase CriWareRuntime.Default__MatineeTrackAtomSoundBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMatineeTrackAtomSoundBase* UMatineeTrackAtomSoundBase::GetDefaultObj()
{
	static class UMatineeTrackAtomSoundBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMatineeTrackAtomSoundBase*>(UMatineeTrackAtomSoundBase::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.MatineeTrackAtom
// (None)

class UClass* UMatineeTrackAtom::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MatineeTrackAtom");

	return Clss;
}


// MatineeTrackAtom CriWareRuntime.Default__MatineeTrackAtom
// (Public, ClassDefaultObject, ArchetypeObject)

class UMatineeTrackAtom* UMatineeTrackAtom::GetDefaultObj()
{
	static class UMatineeTrackAtom* Default = nullptr;

	if (!Default)
		Default = static_cast<UMatineeTrackAtom*>(UMatineeTrackAtom::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.MatineeTrackAtomCategoryName
// (None)

class UClass* UMatineeTrackAtomCategoryName::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MatineeTrackAtomCategoryName");

	return Clss;
}


// MatineeTrackAtomCategoryName CriWareRuntime.Default__MatineeTrackAtomCategoryName
// (Public, ClassDefaultObject, ArchetypeObject)

class UMatineeTrackAtomCategoryName* UMatineeTrackAtomCategoryName::GetDefaultObj()
{
	static class UMatineeTrackAtomCategoryName* Default = nullptr;

	if (!Default)
		Default = static_cast<UMatineeTrackAtomCategoryName*>(UMatineeTrackAtomCategoryName::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.MatineeTrackAtomCategoryVolume
// (None)

class UClass* UMatineeTrackAtomCategoryVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MatineeTrackAtomCategoryVolume");

	return Clss;
}


// MatineeTrackAtomCategoryVolume CriWareRuntime.Default__MatineeTrackAtomCategoryVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class UMatineeTrackAtomCategoryVolume* UMatineeTrackAtomCategoryVolume::GetDefaultObj()
{
	static class UMatineeTrackAtomCategoryVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<UMatineeTrackAtomCategoryVolume*>(UMatineeTrackAtomCategoryVolume::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.MatineeTrackAtomCueId
// (None)

class UClass* UMatineeTrackAtomCueId::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MatineeTrackAtomCueId");

	return Clss;
}


// MatineeTrackAtomCueId CriWareRuntime.Default__MatineeTrackAtomCueId
// (Public, ClassDefaultObject, ArchetypeObject)

class UMatineeTrackAtomCueId* UMatineeTrackAtomCueId::GetDefaultObj()
{
	static class UMatineeTrackAtomCueId* Default = nullptr;

	if (!Default)
		Default = static_cast<UMatineeTrackAtomCueId*>(UMatineeTrackAtomCueId::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.MatineeTrackAtomCueName
// (None)

class UClass* UMatineeTrackAtomCueName::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MatineeTrackAtomCueName");

	return Clss;
}


// MatineeTrackAtomCueName CriWareRuntime.Default__MatineeTrackAtomCueName
// (Public, ClassDefaultObject, ArchetypeObject)

class UMatineeTrackAtomCueName* UMatineeTrackAtomCueName::GetDefaultObj()
{
	static class UMatineeTrackAtomCueName* Default = nullptr;

	if (!Default)
		Default = static_cast<UMatineeTrackAtomCueName*>(UMatineeTrackAtomCueName::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.MatineeTrackAtomSelector
// (None)

class UClass* UMatineeTrackAtomSelector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MatineeTrackAtomSelector");

	return Clss;
}


// MatineeTrackAtomSelector CriWareRuntime.Default__MatineeTrackAtomSelector
// (Public, ClassDefaultObject, ArchetypeObject)

class UMatineeTrackAtomSelector* UMatineeTrackAtomSelector::GetDefaultObj()
{
	static class UMatineeTrackAtomSelector* Default = nullptr;

	if (!Default)
		Default = static_cast<UMatineeTrackAtomSelector*>(UMatineeTrackAtomSelector::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.MatineeTrackInstAtom
// (None)

class UClass* UMatineeTrackInstAtom::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MatineeTrackInstAtom");

	return Clss;
}


// MatineeTrackInstAtom CriWareRuntime.Default__MatineeTrackInstAtom
// (Public, ClassDefaultObject, ArchetypeObject)

class UMatineeTrackInstAtom* UMatineeTrackInstAtom::GetDefaultObj()
{
	static class UMatineeTrackInstAtom* Default = nullptr;

	if (!Default)
		Default = static_cast<UMatineeTrackInstAtom*>(UMatineeTrackInstAtom::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.MovieSceneAtomSection
// (None)

class UClass* UMovieSceneAtomSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneAtomSection");

	return Clss;
}


// MovieSceneAtomSection CriWareRuntime.Default__MovieSceneAtomSection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneAtomSection* UMovieSceneAtomSection::GetDefaultObj()
{
	static class UMovieSceneAtomSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneAtomSection*>(UMovieSceneAtomSection::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.MovieSceneAtomTrack
// (None)

class UClass* UMovieSceneAtomTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneAtomTrack");

	return Clss;
}


// MovieSceneAtomTrack CriWareRuntime.Default__MovieSceneAtomTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneAtomTrack* UMovieSceneAtomTrack::GetDefaultObj()
{
	static class UMovieSceneAtomTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneAtomTrack*>(UMovieSceneAtomTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.SoundAtomConfig
// (None)

class UClass* USoundAtomConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundAtomConfig");

	return Clss;
}


// SoundAtomConfig CriWareRuntime.Default__SoundAtomConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundAtomConfig* USoundAtomConfig::GetDefaultObj()
{
	static class USoundAtomConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundAtomConfig*>(USoundAtomConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class CriWareRuntime.SoundAtomCue
// (None)

class UClass* USoundAtomCue::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundAtomCue");

	return Clss;
}


// SoundAtomCue CriWareRuntime.Default__SoundAtomCue
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundAtomCue* USoundAtomCue::GetDefaultObj()
{
	static class USoundAtomCue* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundAtomCue*>(USoundAtomCue::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.SoundAtomCue.GetUserData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USoundAtomCue::GetUserData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundAtomCue", "GetUserData");

	Params::USoundAtomCue_GetUserData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.SoundAtomCue.GetLength
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USoundAtomCue::GetLength()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundAtomCue", "GetLength");

	Params::USoundAtomCue_GetLength_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CriWareRuntime.SoundAtomCueSheet
// (None)

class UClass* USoundAtomCueSheet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundAtomCueSheet");

	return Clss;
}


// SoundAtomCueSheet CriWareRuntime.Default__SoundAtomCueSheet
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundAtomCueSheet* USoundAtomCueSheet::GetDefaultObj()
{
	static class USoundAtomCueSheet* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundAtomCueSheet*>(USoundAtomCueSheet::StaticClass()->DefaultObject);

	return Default;
}


// Function CriWareRuntime.SoundAtomCueSheet.ReleaseAcb
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        AcbName                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USoundAtomCueSheet::ReleaseAcb(class FName AcbName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundAtomCueSheet", "ReleaseAcb");

	Params::USoundAtomCueSheet_ReleaseAcb_Params Parms{};

	Parms.AcbName = AcbName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.SoundAtomCueSheet.LoadAtomCueSheet
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USoundAtomCueSheet*          CueSheet                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundAtomCueSheet*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USoundAtomCueSheet* USoundAtomCueSheet::LoadAtomCueSheet(class USoundAtomCueSheet* CueSheet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundAtomCueSheet", "LoadAtomCueSheet");

	Params::USoundAtomCueSheet_LoadAtomCueSheet_Params Parms{};

	Parms.CueSheet = CueSheet;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.SoundAtomCueSheet.LoadAcb
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        AcbName                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundAtomCueSheet*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USoundAtomCueSheet* USoundAtomCueSheet::LoadAcb(class FName AcbName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundAtomCueSheet", "LoadAcb");

	Params::USoundAtomCueSheet_LoadAcb_Params Parms{};

	Parms.AcbName = AcbName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.SoundAtomCueSheet.IsLoaded
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USoundAtomCueSheet::IsLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundAtomCueSheet", "IsLoaded");

	Params::USoundAtomCueSheet_IsLoaded_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.SoundAtomCueSheet.GetAtomCueByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      CueName                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundAtomCue*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USoundAtomCue* USoundAtomCueSheet::GetAtomCueByName(const class FString& CueName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundAtomCueSheet", "GetAtomCueByName");

	Params::USoundAtomCueSheet_GetAtomCueByName_Params Parms{};

	Parms.CueName = CueName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.SoundAtomCueSheet.GetAtomCueByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              CueIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundAtomCue*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USoundAtomCue* USoundAtomCueSheet::GetAtomCueByIndex(int32 CueIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundAtomCueSheet", "GetAtomCueByIndex");

	Params::USoundAtomCueSheet_GetAtomCueByIndex_Params Parms{};

	Parms.CueIndex = CueIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.SoundAtomCueSheet.GetAtomCueById
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              CueId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundAtomCue*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USoundAtomCue* USoundAtomCueSheet::GetAtomCueById(int32 CueId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundAtomCueSheet", "GetAtomCueById");

	Params::USoundAtomCueSheet_GetAtomCueById_Params Parms{};

	Parms.CueId = CueId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CriWareRuntime.SoundAtomCueSheet.DetachDspBusSetting
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void USoundAtomCueSheet::DetachDspBusSetting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundAtomCueSheet", "DetachDspBusSetting");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.SoundAtomCueSheet.AttachDspBusSetting
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SettingName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USoundAtomCueSheet::AttachDspBusSetting(const class FString& SettingName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundAtomCueSheet", "AttachDspBusSetting");

	Params::USoundAtomCueSheet_AttachDspBusSetting_Params Parms{};

	Parms.SettingName = SettingName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CriWareRuntime.SoundAtomCueSheet.ApplyDspBusSnapshot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SnapshotName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Milliseconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USoundAtomCueSheet::ApplyDspBusSnapshot(const class FString& SnapshotName, int32 Milliseconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundAtomCueSheet", "ApplyDspBusSnapshot");

	Params::USoundAtomCueSheet_ApplyDspBusSnapshot_Params Parms{};

	Parms.SnapshotName = SnapshotName;
	Parms.Milliseconds = Milliseconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


