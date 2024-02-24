#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass InfernoAnomaly.InfernoAnomaly_C
// (Actor)

class UClass* AInfernoAnomaly_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InfernoAnomaly_C");

	return Clss;
}


// InfernoAnomaly_C InfernoAnomaly.Default__InfernoAnomaly_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AInfernoAnomaly_C* AInfernoAnomaly_C::GetDefaultObj()
{
	static class AInfernoAnomaly_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AInfernoAnomaly_C*>(AInfernoAnomaly_C::StaticClass()->DefaultObject);

	return Default;
}


// Function InfernoAnomaly.InfernoAnomaly_C.OnDamageApplied
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASHPlayerController*         PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnDamageApplied_Result                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AInfernoAnomaly_C::OnDamageApplied(class ASHPlayerController* PlayerController, bool* Result, bool CallFunc_OnDamageApplied_Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InfernoAnomaly_C", "OnDamageApplied");

	Params::AInfernoAnomaly_C_OnDamageApplied_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.CallFunc_OnDamageApplied_Result = CallFunc_OnDamageApplied_Result;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function InfernoAnomaly.InfernoAnomaly_C.EnableAnomaly
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EnableAnomaly_Result                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AInfernoAnomaly_C::EnableAnomaly(bool* Result, bool CallFunc_EnableAnomaly_Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InfernoAnomaly_C", "EnableAnomaly");

	Params::AInfernoAnomaly_C_EnableAnomaly_Params Parms{};

	Parms.CallFunc_EnableAnomaly_Result = CallFunc_EnableAnomaly_Result;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function InfernoAnomaly.InfernoAnomaly_C.DisableAnomaly
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DisableAnomaly_Result                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AInfernoAnomaly_C::DisableAnomaly(bool* Result, bool CallFunc_DisableAnomaly_Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InfernoAnomaly_C", "DisableAnomaly");

	Params::AInfernoAnomaly_C_DisableAnomaly_Params Parms{};

	Parms.CallFunc_DisableAnomaly_Result = CallFunc_DisableAnomaly_Result;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function InfernoAnomaly.InfernoAnomaly_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInfernoAnomaly_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InfernoAnomaly_C", "ReceiveActorBeginOverlap");

	Params::AInfernoAnomaly_C_ReceiveActorBeginOverlap_Params Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InfernoAnomaly.InfernoAnomaly_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AInfernoAnomaly_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InfernoAnomaly_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InfernoAnomaly.InfernoAnomaly_C.ExecuteUbergraph_InfernoAnomaly
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OtherActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInfernoAnomaly_C::ExecuteUbergraph_InfernoAnomaly(int32 EntryPoint, class AActor* K2Node_Event_OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InfernoAnomaly_C", "ExecuteUbergraph_InfernoAnomaly");

	Params::AInfernoAnomaly_C_ExecuteUbergraph_InfernoAnomaly_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OtherActor = K2Node_Event_OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}

}


