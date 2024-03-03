#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ALS_AnimBP_NPC-Feline.ALS_AnimBP_NPC-Feline_C
// (None)

class UClass* UALS_AnimBP_NPCMinusFeline_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALS_AnimBP_NPC-Feline_C");

	return Clss;
}


// ALS_AnimBP_NPC-Feline_C ALS_AnimBP_NPC-Feline.Default__ALS_AnimBP_NPC-Feline_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UALS_AnimBP_NPCMinusFeline_C* UALS_AnimBP_NPCMinusFeline_C::GetDefaultObj()
{
	static class UALS_AnimBP_NPCMinusFeline_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UALS_AnimBP_NPCMinusFeline_C*>(UALS_AnimBP_NPCMinusFeline_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ALS_AnimBP_NPC-Feline.ALS_AnimBP_NPC-Feline_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UALS_AnimBP_NPCMinusFeline_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_AnimBP_NPC-Feline_C", "AnimGraph");

	Params::UALS_AnimBP_NPCMinusFeline_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ALS_AnimBP_NPC-Feline.ALS_AnimBP_NPC-Feline_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UALS_AnimBP_NPCMinusFeline_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_AnimBP_NPC-Feline_C", "BlueprintUpdateAnimation");

	Params::UALS_AnimBP_NPCMinusFeline_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ALS_AnimBP_NPC-Feline.ALS_AnimBP_NPC-Feline_C.ExecuteUbergraph_ALS_AnimBP_NPC-Feline
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UALS_AnimBP_NPCMinusFeline_C::ExecuteUbergraph_ALS_AnimBP_NPCMinusFeline(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, float K2Node_Event_DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_AnimBP_NPC-Feline_C", "ExecuteUbergraph_ALS_AnimBP_NPC-Feline");

	Params::UALS_AnimBP_NPCMinusFeline_C_ExecuteUbergraph_ALS_AnimBP_NPCMinusFeline_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}

}


