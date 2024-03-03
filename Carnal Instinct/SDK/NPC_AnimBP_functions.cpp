#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass NPC_AnimBP.NPC_AnimBP_C
// (None)

class UClass* UNPC_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NPC_AnimBP_C");

	return Clss;
}


// NPC_AnimBP_C NPC_AnimBP.Default__NPC_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNPC_AnimBP_C* UNPC_AnimBP_C::GetDefaultObj()
{
	static class UNPC_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNPC_AnimBP_C*>(UNPC_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NPC_AnimBP.NPC_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UNPC_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_AnimBP_C", "AnimGraph");

	Params::UNPC_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function NPC_AnimBP.NPC_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_AnimBP_AnimGraphNode_TransitionResult_F867B5374C7EFB9ED9010FA7431019DF
// (BlueprintEvent)
// Parameters:

void UNPC_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_AnimBP_AnimGraphNode_TransitionResult_F867B5374C7EFB9ED9010FA7431019DF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_AnimBP_AnimGraphNode_TransitionResult_F867B5374C7EFB9ED9010FA7431019DF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPC_AnimBP.NPC_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_AnimBP_AnimGraphNode_TransitionResult_175FFF54400CA0EC412B7083B0989D7E
// (BlueprintEvent)
// Parameters:

void UNPC_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_AnimBP_AnimGraphNode_TransitionResult_175FFF54400CA0EC412B7083B0989D7E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_AnimBP_AnimGraphNode_TransitionResult_175FFF54400CA0EC412B7083B0989D7E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPC_AnimBP.NPC_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_AnimBP_C", "BlueprintUpdateAnimation");

	Params::UNPC_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_AnimBP.NPC_AnimBP_C.AnimNotify_NPCM_StationSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_AnimBP_C::AnimNotify_NPCM_StationSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_AnimBP_C", "AnimNotify_NPCM_StationSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPC_AnimBP.NPC_AnimBP_C.AnimNotify_NPCM_StationAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_AnimBP_C::AnimNotify_NPCM_StationAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_AnimBP_C", "AnimNotify_NPCM_StationAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPC_AnimBP.NPC_AnimBP_C.ExecuteUbergraph_NPC_AnimBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UComp_NPC_Controller_C*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_fnGetStationSound_Found_Sound                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_NPC_SoundInfo       CallFunc_fnGetStationSound_Selected_Sound                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UNPC_AnimBP_C::ExecuteUbergraph_NPC_AnimBP(int32 EntryPoint, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, bool CallFunc_IsFalling_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, class UComp_NPC_Controller_C* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_fnGetStationSound_Found_Sound, const struct FStruct_NPC_SoundInfo& CallFunc_fnGetStationSound_Selected_Sound, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_AnimBP_C", "ExecuteUbergraph_NPC_AnimBP");

	Params::UNPC_AnimBP_C_ExecuteUbergraph_NPC_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetMovementComponent_ReturnValue = CallFunc_GetMovementComponent_ReturnValue;
	Parms.CallFunc_IsFalling_ReturnValue = CallFunc_IsFalling_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_fnGetStationSound_Found_Sound = CallFunc_fnGetStationSound_Found_Sound;
	Parms.CallFunc_fnGetStationSound_Selected_Sound = CallFunc_fnGetStationSound_Selected_Sound;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


