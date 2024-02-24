#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class TimeManagement.FixedFrameRateCustomTimeStep
// (None)

class UClass* UFixedFrameRateCustomTimeStep::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FixedFrameRateCustomTimeStep");

	return Clss;
}


// FixedFrameRateCustomTimeStep TimeManagement.Default__FixedFrameRateCustomTimeStep
// (Public, ClassDefaultObject, ArchetypeObject)

class UFixedFrameRateCustomTimeStep* UFixedFrameRateCustomTimeStep::GetDefaultObj()
{
	static class UFixedFrameRateCustomTimeStep* Default = nullptr;

	if (!Default)
		Default = static_cast<UFixedFrameRateCustomTimeStep*>(UFixedFrameRateCustomTimeStep::StaticClass()->DefaultObject);

	return Default;
}


// Class TimeManagement.TimeManagementBlueprintLibrary
// (None)

class UClass* UTimeManagementBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TimeManagementBlueprintLibrary");

	return Clss;
}


// TimeManagementBlueprintLibrary TimeManagement.Default__TimeManagementBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UTimeManagementBlueprintLibrary* UTimeManagementBlueprintLibrary::GetDefaultObj()
{
	static class UTimeManagementBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UTimeManagementBlueprintLibrary*>(UTimeManagementBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              TimeInSeconds                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameRate                  FrameRate                                                        (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameTime                  ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FFrameTime UTimeManagementBlueprintLibrary::Multiply_SecondsFrameRate(float TimeInSeconds, struct FFrameRate& FrameRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeManagementBlueprintLibrary", "Multiply_SecondsFrameRate");

	Params::UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Params Parms{};

	Parms.TimeInSeconds = TimeInSeconds;
	Parms.FrameRate = FrameRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTimecode                   ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTimecode UTimeManagementBlueprintLibrary::GetTimecode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeManagementBlueprintLibrary", "GetTimecode");

	Params::UTimeManagementBlueprintLibrary_GetTimecode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTimecode                   InTimecode                                                       (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForceSignDisplay                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UTimeManagementBlueprintLibrary::Conv_TimecodeToString(struct FTimecode& InTimecode, bool bForceSignDisplay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeManagementBlueprintLibrary", "Conv_TimecodeToString");

	Params::UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Params Parms{};

	Parms.InTimecode = InTimecode;
	Parms.bForceSignDisplay = bForceSignDisplay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FQualifiedFrameTime         InFrameTime                                                      (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UTimeManagementBlueprintLibrary::Conv_QualifiedFrameTimeToSeconds(struct FQualifiedFrameTime& InFrameTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeManagementBlueprintLibrary", "Conv_QualifiedFrameTimeToSeconds");

	Params::UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Params Parms{};

	Parms.InFrameTime = InFrameTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameRate                  InFrameRate                                                      (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UTimeManagementBlueprintLibrary::Conv_FrameRateToSeconds(struct FFrameRate& InFrameRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeManagementBlueprintLibrary", "Conv_FrameRateToSeconds");

	Params::UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Params Parms{};

	Parms.InFrameRate = InFrameRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TimeManagement.TimeSynchronizationSource
// (None)

class UClass* UTimeSynchronizationSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TimeSynchronizationSource");

	return Clss;
}


// TimeSynchronizationSource TimeManagement.Default__TimeSynchronizationSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UTimeSynchronizationSource* UTimeSynchronizationSource::GetDefaultObj()
{
	static class UTimeSynchronizationSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UTimeSynchronizationSource*>(UTimeSynchronizationSource::StaticClass()->DefaultObject);

	return Default;
}

}


