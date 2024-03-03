#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ALS_AnimBP_NPC.ALS_AnimBP_NPC_C
// (None)

class UClass* UALS_AnimBP_NPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ALS_AnimBP_NPC_C");

	return Clss;
}


// ALS_AnimBP_NPC_C ALS_AnimBP_NPC.Default__ALS_AnimBP_NPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UALS_AnimBP_NPC_C* UALS_AnimBP_NPC_C::GetDefaultObj()
{
	static class UALS_AnimBP_NPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UALS_AnimBP_NPC_C*>(UALS_AnimBP_NPC_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ALS_AnimBP_NPC.ALS_AnimBP_NPC_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UALS_AnimBP_NPC_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_AnimBP_NPC_C", "AnimGraph");

	Params::UALS_AnimBP_NPC_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ALS_AnimBP_NPC.ALS_AnimBP_NPC_C.AnimNotify_AIFootstep
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UALS_AnimBP_NPC_C::AnimNotify_AIFootstep()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_AnimBP_NPC_C", "AnimNotify_AIFootstep");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ALS_AnimBP_NPC.ALS_AnimBP_NPC_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UALS_AnimBP_NPC_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_AnimBP_NPC_C", "BlueprintUpdateAnimation");

	Params::UALS_AnimBP_NPC_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ALS_AnimBP_NPC.ALS_AnimBP_NPC_C.ExecuteUbergraph_ALS_AnimBP_NPC
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UALS_AnimBP_NPC_C::ExecuteUbergraph_ALS_AnimBP_NPC(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ALS_AnimBP_NPC_C", "ExecuteUbergraph_ALS_AnimBP_NPC");

	Params::UALS_AnimBP_NPC_C_ExecuteUbergraph_ALS_AnimBP_NPC_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


