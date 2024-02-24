#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PsyZone.PsyZone_C
// (Actor)

class UClass* APsyZone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PsyZone_C");

	return Clss;
}


// PsyZone_C PsyZone.Default__PsyZone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APsyZone_C* APsyZone_C::GetDefaultObj()
{
	static class APsyZone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APsyZone_C*>(APsyZone_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PsyZone.PsyZone_C.EnableAnomaly
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EnableAnomaly_Result                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void APsyZone_C::EnableAnomaly(bool* Result, bool CallFunc_EnableAnomaly_Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PsyZone_C", "EnableAnomaly");

	Params::APsyZone_C_EnableAnomaly_Params Parms{};

	Parms.CallFunc_EnableAnomaly_Result = CallFunc_EnableAnomaly_Result;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function PsyZone.PsyZone_C.DisableAnomaly
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DisableAnomaly_Result                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void APsyZone_C::DisableAnomaly(bool* Result, bool CallFunc_DisableAnomaly_Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PsyZone_C", "DisableAnomaly");

	Params::APsyZone_C_DisableAnomaly_Params Parms{};

	Parms.CallFunc_DisableAnomaly_Result = CallFunc_DisableAnomaly_Result;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function PsyZone.PsyZone_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APsyZone_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PsyZone_C", "ReceiveActorBeginOverlap");

	Params::APsyZone_C_ReceiveActorBeginOverlap_Params Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PsyZone.PsyZone_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APsyZone_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PsyZone_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PsyZone.PsyZone_C.ExecuteUbergraph_PsyZone
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OtherActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_DynamicCast_AsCharacter                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void APsyZone_C::ExecuteUbergraph_PsyZone(int32 EntryPoint, class AActor* K2Node_Event_OtherActor, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PsyZone_C", "ExecuteUbergraph_PsyZone");

	Params::APsyZone_C_ExecuteUbergraph_PsyZone_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OtherActor = K2Node_Event_OtherActor;
	Parms.K2Node_DynamicCast_AsCharacter = K2Node_DynamicCast_AsCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


