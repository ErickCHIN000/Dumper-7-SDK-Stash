#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SE_Burning_Default.BP_SE_Burning_Default_C
// (Actor)

class UClass* ABP_SE_Burning_Default_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SE_Burning_Default_C");

	return Clss;
}


// BP_SE_Burning_Default_C BP_SE_Burning_Default.Default__BP_SE_Burning_Default_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SE_Burning_Default_C* ABP_SE_Burning_Default_C::GetDefaultObj()
{
	static class ABP_SE_Burning_Default_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SE_Burning_Default_C*>(ABP_SE_Burning_Default_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SE_Burning_Default.BP_SE_Burning_Default_C.BPInitializeStatus
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UGGStatusEffectManager*      Manager                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EApplicationMethod      ApplicationMethod                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      SpreadFrom                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bMovedBetweenActors                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SE_Burning_Default_C::BPInitializeStatus(class UGGStatusEffectManager* Manager, enum class EApplicationMethod ApplicationMethod, class AActor* SpreadFrom, bool bMovedBetweenActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SE_Burning_Default_C", "BPInitializeStatus");

	Params::ABP_SE_Burning_Default_C_BPInitializeStatus_Params Parms{};

	Parms.Manager = Manager;
	Parms.ApplicationMethod = ApplicationMethod;
	Parms.SpreadFrom = SpreadFrom;
	Parms.bMovedBetweenActors = bMovedBetweenActors;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SE_Burning_Default.BP_SE_Burning_Default_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SE_Burning_Default_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SE_Burning_Default_C", "ReceiveEndPlay");

	Params::ABP_SE_Burning_Default_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SE_Burning_Default.BP_SE_Burning_Default_C.BPResetForPool
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SE_Burning_Default_C::BPResetForPool()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SE_Burning_Default_C", "BPResetForPool");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SE_Burning_Default.BP_SE_Burning_Default_C.BPClientInitializeStatus
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UGGStatusEffectManager*      Manager                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SE_Burning_Default_C::BPClientInitializeStatus(class UGGStatusEffectManager* Manager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SE_Burning_Default_C", "BPClientInitializeStatus");

	Params::ABP_SE_Burning_Default_C_BPClientInitializeStatus_Params Parms{};

	Parms.Manager = Manager;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SE_Burning_Default.BP_SE_Burning_Default_C.ExecuteUbergraph_BP_SE_Burning_Default
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAffectedActor_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGStatusEffectManager*      K2Node_Event_Manager_1                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EApplicationMethod      K2Node_Event_ApplicationMethod                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_SpreadFrom                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bMovedBetweenActors                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGStatusEffectManager*      K2Node_Event_Manager                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SE_Burning_Default_C::ExecuteUbergraph_BP_SE_Burning_Default(int32 EntryPoint, class AActor* CallFunc_GetAffectedActor_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UGGStatusEffectManager* K2Node_Event_Manager_1, enum class EApplicationMethod K2Node_Event_ApplicationMethod, class AActor* K2Node_Event_SpreadFrom, bool K2Node_Event_bMovedBetweenActors, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UGGStatusEffectManager* K2Node_Event_Manager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SE_Burning_Default_C", "ExecuteUbergraph_BP_SE_Burning_Default");

	Params::ABP_SE_Burning_Default_C_ExecuteUbergraph_BP_SE_Burning_Default_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAffectedActor_ReturnValue = CallFunc_GetAffectedActor_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_Event_Manager_1 = K2Node_Event_Manager_1;
	Parms.K2Node_Event_ApplicationMethod = K2Node_Event_ApplicationMethod;
	Parms.K2Node_Event_SpreadFrom = K2Node_Event_SpreadFrom;
	Parms.K2Node_Event_bMovedBetweenActors = K2Node_Event_bMovedBetweenActors;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.K2Node_Event_Manager = K2Node_Event_Manager;

	UObject::ProcessEvent(Func, &Parms);

}

}


