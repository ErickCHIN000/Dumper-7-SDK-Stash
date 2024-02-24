#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class XeSSBlueprint.XeSSBlueprintLibrary
// (None)

class UClass* UXeSSBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("XeSSBlueprintLibrary");

	return Clss;
}


// XeSSBlueprintLibrary XeSSBlueprint.Default__XeSSBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UXeSSBlueprintLibrary* UXeSSBlueprintLibrary::GetDefaultObj()
{
	static class UXeSSBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UXeSSBlueprintLibrary*>(UXeSSBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function XeSSBlueprint.XeSSBlueprintLibrary.SetXeSSQualityMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EXeSSQualityMode        QualityMode                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UXeSSBlueprintLibrary::SetXeSSQualityMode(enum class EXeSSQualityMode QualityMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XeSSBlueprintLibrary", "SetXeSSQualityMode");

	Params::UXeSSBlueprintLibrary_SetXeSSQualityMode_Params Parms{};

	Parms.QualityMode = QualityMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function XeSSBlueprint.XeSSBlueprintLibrary.IsXeSSSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UXeSSBlueprintLibrary::IsXeSSSupported()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XeSSBlueprintLibrary", "IsXeSSSupported");

	Params::UXeSSBlueprintLibrary_IsXeSSSupported_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XeSSBlueprint.XeSSBlueprintLibrary.GetXeSSQualityModeInformation
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EXeSSQualityMode        QualityMode                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ScreenPercentage                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UXeSSBlueprintLibrary::GetXeSSQualityModeInformation(enum class EXeSSQualityMode QualityMode, float* ScreenPercentage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XeSSBlueprintLibrary", "GetXeSSQualityModeInformation");

	Params::UXeSSBlueprintLibrary_GetXeSSQualityModeInformation_Params Parms{};

	Parms.QualityMode = QualityMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ScreenPercentage != nullptr)
		*ScreenPercentage = Parms.ScreenPercentage;

	return Parms.ReturnValue;

}


// Function XeSSBlueprint.XeSSBlueprintLibrary.GetXeSSQualityMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EXeSSQualityMode        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EXeSSQualityMode UXeSSBlueprintLibrary::GetXeSSQualityMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XeSSBlueprintLibrary", "GetXeSSQualityMode");

	Params::UXeSSBlueprintLibrary_GetXeSSQualityMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XeSSBlueprint.XeSSBlueprintLibrary.GetSupportedXeSSQualityModes
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<enum class EXeSSQualityMode>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<enum class EXeSSQualityMode> UXeSSBlueprintLibrary::GetSupportedXeSSQualityModes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XeSSBlueprintLibrary", "GetSupportedXeSSQualityModes");

	Params::UXeSSBlueprintLibrary_GetSupportedXeSSQualityModes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XeSSBlueprint.XeSSBlueprintLibrary.GetDefaultXeSSQualityMode
// (Final, RequiredAPI, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FIntPoint                   ScreenResolution                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EXeSSQualityMode        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EXeSSQualityMode UXeSSBlueprintLibrary::GetDefaultXeSSQualityMode(const struct FIntPoint& ScreenResolution)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XeSSBlueprintLibrary", "GetDefaultXeSSQualityMode");

	Params::UXeSSBlueprintLibrary_GetDefaultXeSSQualityMode_Params Parms{};

	Parms.ScreenResolution = ScreenResolution;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


