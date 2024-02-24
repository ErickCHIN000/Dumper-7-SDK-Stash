#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AITrigger.BP_AITrigger_C
// (Actor)

class UClass* ABP_AITrigger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AITrigger_C");

	return Clss;
}


// BP_AITrigger_C BP_AITrigger.Default__BP_AITrigger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AITrigger_C* ABP_AITrigger_C::GetDefaultObj()
{
	static class ABP_AITrigger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AITrigger_C*>(ABP_AITrigger_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AITrigger.BP_AITrigger_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AITrigger_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AITrigger_C", "ReceiveActorBeginOverlap");

	Params::ABP_AITrigger_C_ReceiveActorBeginOverlap_Params Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AITrigger.BP_AITrigger_C.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AITrigger_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AITrigger_C", "ReceiveActorEndOverlap");

	Params::ABP_AITrigger_C_ReceiveActorEndOverlap_Params Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AITrigger.BP_AITrigger_C.ExecuteUbergraph_BP_AITrigger
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OtherActor_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OtherActor                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AITrigger_C::ExecuteUbergraph_BP_AITrigger(int32 EntryPoint, class AActor* K2Node_Event_OtherActor_1, class AActor* K2Node_Event_OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AITrigger_C", "ExecuteUbergraph_BP_AITrigger");

	Params::ABP_AITrigger_C_ExecuteUbergraph_BP_AITrigger_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OtherActor_1 = K2Node_Event_OtherActor_1;
	Parms.K2Node_Event_OtherActor = K2Node_Event_OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AITrigger.BP_AITrigger_C.Trigger Deactivated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      End_Overlap_Actor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_AITrigger_C*             AI_Trigger                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AITrigger_C::Trigger_Deactivated__DelegateSignature(class AActor* End_Overlap_Actor, class ABP_AITrigger_C* AI_Trigger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AITrigger_C", "Trigger Deactivated__DelegateSignature");

	Params::ABP_AITrigger_C_Trigger_Deactivated__DelegateSignature_Params Parms{};

	Parms.End_Overlap_Actor = End_Overlap_Actor;
	Parms.AI_Trigger = AI_Trigger;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AITrigger.BP_AITrigger_C.Trigger Activated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Overlap_Actor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_AITrigger_C*             AI_Trigger                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AITrigger_C::Trigger_Activated__DelegateSignature(class AActor* Overlap_Actor, class ABP_AITrigger_C* AI_Trigger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AITrigger_C", "Trigger Activated__DelegateSignature");

	Params::ABP_AITrigger_C_Trigger_Activated__DelegateSignature_Params Parms{};

	Parms.Overlap_Actor = Overlap_Actor;
	Parms.AI_Trigger = AI_Trigger;

	UObject::ProcessEvent(Func, &Parms);

}

}


