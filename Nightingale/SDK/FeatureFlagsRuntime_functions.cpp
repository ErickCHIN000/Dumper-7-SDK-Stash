#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class FeatureFlagsRuntime.FeatureFlags
// (None)

class UClass* UFeatureFlags::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FeatureFlags");

	return Clss;
}


// FeatureFlags FeatureFlagsRuntime.Default__FeatureFlags
// (Public, ClassDefaultObject, ArchetypeObject)

class UFeatureFlags* UFeatureFlags::GetDefaultObj()
{
	static class UFeatureFlags* Default = nullptr;

	if (!Default)
		Default = static_cast<UFeatureFlags*>(UFeatureFlags::StaticClass()->DefaultObject);

	return Default;
}


// Function FeatureFlagsRuntime.FeatureFlags.IsFeatureFlagEnabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFeatureFlag            Flag                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFeatureFlags::IsFeatureFlagEnabled(class UObject* WorldContextObject, enum class EFeatureFlag Flag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeatureFlags", "IsFeatureFlagEnabled");

	Params::UFeatureFlags_IsFeatureFlagEnabled_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Flag = Flag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FeatureFlagsRuntime.FeatureFlags.IsAssetEnabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Object                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFeatureFlags::IsAssetEnabled(class UObject* WorldContextObject, class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeatureFlags", "IsAssetEnabled");

	Params::UFeatureFlags_IsAssetEnabled_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FeatureFlagsRuntime.FeatureFlags.FeatureFlagBranch
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFeatureFlag            Flag                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFeatureFlagStatus      Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFeatureFlags::FeatureFlagBranch(class UObject* WorldContextObject, enum class EFeatureFlag Flag, enum class EFeatureFlagStatus* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FeatureFlags", "FeatureFlagBranch");

	Params::UFeatureFlags_FeatureFlagBranch_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Flag = Flag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

}

}


