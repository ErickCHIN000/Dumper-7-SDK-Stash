#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class RealmTimerRuntime.RealmTimeCheats
// (None)

class UClass* URealmTimeCheats::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RealmTimeCheats");

	return Clss;
}


// RealmTimeCheats RealmTimerRuntime.Default__RealmTimeCheats
// (Public, ClassDefaultObject, ArchetypeObject)

class URealmTimeCheats* URealmTimeCheats::GetDefaultObj()
{
	static class URealmTimeCheats* Default = nullptr;

	if (!Default)
		Default = static_cast<URealmTimeCheats*>(URealmTimeCheats::StaticClass()->DefaultObject);

	return Default;
}


// Function RealmTimerRuntime.RealmTimeCheats.SetRealmTimeCycle_Server
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// double                             CycleDurationInMinutes                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             RealmHoursPerCycle                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URealmTimeCheats::SetRealmTimeCycle_Server(double CycleDurationInMinutes, double RealmHoursPerCycle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RealmTimeCheats", "SetRealmTimeCycle_Server");

	Params::URealmTimeCheats_SetRealmTimeCycle_Server_Params Parms{};

	Parms.CycleDurationInMinutes = CycleDurationInMinutes;
	Parms.RealmHoursPerCycle = RealmHoursPerCycle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RealmTimerRuntime.RealmTimeCheats.SetRealmTimeCycle
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// double                             CycleDurationInMinutes                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             RealmHoursPerCycle                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URealmTimeCheats::SetRealmTimeCycle(double CycleDurationInMinutes, double RealmHoursPerCycle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RealmTimeCheats", "SetRealmTimeCycle");

	Params::URealmTimeCheats_SetRealmTimeCycle_Params Parms{};

	Parms.CycleDurationInMinutes = CycleDurationInMinutes;
	Parms.RealmHoursPerCycle = RealmHoursPerCycle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RealmTimerRuntime.RealmTimeCheats.SetRealmTime_Server
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// double                             InNormalizedTime                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URealmTimeCheats::SetRealmTime_Server(double InNormalizedTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RealmTimeCheats", "SetRealmTime_Server");

	Params::URealmTimeCheats_SetRealmTime_Server_Params Parms{};

	Parms.InNormalizedTime = InNormalizedTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RealmTimerRuntime.RealmTimeCheats.SetRealmTime
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// double                             InNormalizedTime                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URealmTimeCheats::SetRealmTime(double InNormalizedTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RealmTimeCheats", "SetRealmTime");

	Params::URealmTimeCheats_SetRealmTime_Params Parms{};

	Parms.InNormalizedTime = InNormalizedTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RealmTimerRuntime.RealmTimeCheats.AddRealmTime_Server
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// double                             RealSecondsToAdd                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URealmTimeCheats::AddRealmTime_Server(double RealSecondsToAdd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RealmTimeCheats", "AddRealmTime_Server");

	Params::URealmTimeCheats_AddRealmTime_Server_Params Parms{};

	Parms.RealSecondsToAdd = RealSecondsToAdd;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RealmTimerRuntime.RealmTimeCheats.AddRealmTime
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// double                             RealSecondsToAdd                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URealmTimeCheats::AddRealmTime(double RealSecondsToAdd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RealmTimeCheats", "AddRealmTime");

	Params::URealmTimeCheats_AddRealmTime_Params Parms{};

	Parms.RealSecondsToAdd = RealSecondsToAdd;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class RealmTimerRuntime.RealmTimerComponent
// (None)

class UClass* URealmTimerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RealmTimerComponent");

	return Clss;
}


// RealmTimerComponent RealmTimerRuntime.Default__RealmTimerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class URealmTimerComponent* URealmTimerComponent::GetDefaultObj()
{
	static class URealmTimerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<URealmTimerComponent*>(URealmTimerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function RealmTimerRuntime.RealmTimerComponent.UpdateClientTimingConstants
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// double                             InCycleDurationInMinutes                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             InRealmHoursPerCycle                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URealmTimerComponent::UpdateClientTimingConstants(double InCycleDurationInMinutes, double InRealmHoursPerCycle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RealmTimerComponent", "UpdateClientTimingConstants");

	Params::URealmTimerComponent_UpdateClientTimingConstants_Params Parms{};

	Parms.InCycleDurationInMinutes = InCycleDurationInMinutes;
	Parms.InRealmHoursPerCycle = InRealmHoursPerCycle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RealmTimerRuntime.RealmTimerComponent.SetRealmTimerByFunctionName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FunctionName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Time                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERealmTimeFormat        TimeFormat                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bLooping                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimerHandle                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTimerHandle URealmTimerComponent::SetRealmTimerByFunctionName(class UObject* Object, const class FString& FunctionName, double Time, enum class ERealmTimeFormat TimeFormat, bool bLooping)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RealmTimerComponent", "SetRealmTimerByFunctionName");

	Params::URealmTimerComponent_SetRealmTimerByFunctionName_Params Parms{};

	Parms.Object = Object;
	Parms.FunctionName = FunctionName;
	Parms.Time = Time;
	Parms.TimeFormat = TimeFormat;
	Parms.bLooping = bLooping;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RealmTimerRuntime.RealmTimerComponent.SetRealmTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ERealmTimeFormat        TimeFormat                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETimeSpace              TimeSpace                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Time                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URealmTimerComponent::SetRealmTime(enum class ERealmTimeFormat TimeFormat, enum class ETimeSpace TimeSpace, double Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RealmTimerComponent", "SetRealmTime");

	Params::URealmTimerComponent_SetRealmTime_Params Parms{};

	Parms.TimeFormat = TimeFormat;
	Parms.TimeSpace = TimeSpace;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RealmTimerRuntime.RealmTimerComponent.OnRep_AccSeconds
// (Final, Native, Private)
// Parameters:

void URealmTimerComponent::OnRep_AccSeconds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RealmTimerComponent", "OnRep_AccSeconds");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function RealmTimerRuntime.RealmTimerComponent.GetTimerResolutionInSeconds
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double URealmTimerComponent::GetTimerResolutionInSeconds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RealmTimerComponent", "GetTimerResolutionInSeconds");

	Params::URealmTimerComponent_GetTimerResolutionInSeconds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RealmTimerRuntime.RealmTimerComponent.GetRealTimeElapsedSeconds
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double URealmTimerComponent::GetRealTimeElapsedSeconds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RealmTimerComponent", "GetRealTimeElapsedSeconds");

	Params::URealmTimerComponent_GetRealTimeElapsedSeconds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RealmTimerRuntime.RealmTimerComponent.GetRealmTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERealmTimeFormat        TimeFormat                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double URealmTimerComponent::GetRealmTime(enum class ERealmTimeFormat TimeFormat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RealmTimerComponent", "GetRealmTime");

	Params::URealmTimerComponent_GetRealmTime_Params Parms{};

	Parms.TimeFormat = TimeFormat;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RealmTimerRuntime.RealmTimerComponent.CallOnTick
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FunctionName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URealmTimerComponent::CallOnTick(class UObject* Object, const class FString& FunctionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RealmTimerComponent", "CallOnTick");

	Params::URealmTimerComponent_CallOnTick_Params Parms{};

	Parms.Object = Object;
	Parms.FunctionName = FunctionName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RealmTimerRuntime.RealmTimerComponent.AdvanceRealmTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ERealmTimeFormat        TimeFormat                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETimeSpace              TimeSpace                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Time                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URealmTimerComponent::AdvanceRealmTime(enum class ERealmTimeFormat TimeFormat, enum class ETimeSpace TimeSpace, double Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RealmTimerComponent", "AdvanceRealmTime");

	Params::URealmTimerComponent_AdvanceRealmTime_Params Parms{};

	Parms.TimeFormat = TimeFormat;
	Parms.TimeSpace = TimeSpace;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


