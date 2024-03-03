#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ALS_AnimBP_NPC-Medjai.ALS_AnimBP_NPC-Medjai_C
// (None)

class UClass* UALS_AnimBP_NPCMinusMedjai_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALS_AnimBP_NPC-Medjai_C");

	return Clss;
}


// ALS_AnimBP_NPC-Medjai_C ALS_AnimBP_NPC-Medjai.Default__ALS_AnimBP_NPC-Medjai_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UALS_AnimBP_NPCMinusMedjai_C* UALS_AnimBP_NPCMinusMedjai_C::GetDefaultObj()
{
	static class UALS_AnimBP_NPCMinusMedjai_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UALS_AnimBP_NPCMinusMedjai_C*>(UALS_AnimBP_NPCMinusMedjai_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ALS_AnimBP_NPC-Medjai.ALS_AnimBP_NPC-Medjai_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UALS_AnimBP_NPCMinusMedjai_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_AnimBP_NPC-Medjai_C", "AnimGraph");

	Params::UALS_AnimBP_NPCMinusMedjai_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ALS_AnimBP_NPC-Medjai.ALS_AnimBP_NPC-Medjai_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UALS_AnimBP_NPCMinusMedjai_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_AnimBP_NPC-Medjai_C", "BlueprintUpdateAnimation");

	Params::UALS_AnimBP_NPCMinusMedjai_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ALS_AnimBP_NPC-Medjai.ALS_AnimBP_NPC-Medjai_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UALS_AnimBP_NPCMinusMedjai_C::BlueprintBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_AnimBP_NPC-Medjai_C", "BlueprintBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ALS_AnimBP_NPC-Medjai.ALS_AnimBP_NPC-Medjai_C.ExecuteUbergraph_ALS_AnimBP_NPC-Medjai
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANpc_medjai_C*               K2Node_DynamicCast_AsNpc_Medjai                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UALS_AnimBP_NPCMinusMedjai_C::ExecuteUbergraph_ALS_AnimBP_NPCMinusMedjai(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class ANpc_medjai_C* K2Node_DynamicCast_AsNpc_Medjai, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_AnimBP_NPC-Medjai_C", "ExecuteUbergraph_ALS_AnimBP_NPC-Medjai");

	Params::UALS_AnimBP_NPCMinusMedjai_C_ExecuteUbergraph_ALS_AnimBP_NPCMinusMedjai_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsNpc_Medjai = K2Node_DynamicCast_AsNpc_Medjai;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


