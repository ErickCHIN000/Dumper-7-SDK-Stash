#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Guitar_AnimBlueprint.Guitar_AnimBlueprint_C
// (None)

class UClass* UGuitar_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Guitar_AnimBlueprint_C");

	return Clss;
}


// Guitar_AnimBlueprint_C Guitar_AnimBlueprint.Default__Guitar_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGuitar_AnimBlueprint_C* UGuitar_AnimBlueprint_C::GetDefaultObj()
{
	static class UGuitar_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGuitar_AnimBlueprint_C*>(UGuitar_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Guitar_AnimBlueprint.Guitar_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UGuitar_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Guitar_AnimBlueprint_C", "AnimGraph");

	Params::UGuitar_AnimBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Guitar_AnimBlueprint.Guitar_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Guitar_AnimBlueprint_AnimGraphNode_TransitionResult_104350834D7371400979ECADC948D1CB
// (BlueprintEvent)
// Parameters:

void UGuitar_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Guitar_AnimBlueprint_AnimGraphNode_TransitionResult_104350834D7371400979ECADC948D1CB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Guitar_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Guitar_AnimBlueprint_AnimGraphNode_TransitionResult_104350834D7371400979ECADC948D1CB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Guitar_AnimBlueprint.Guitar_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Guitar_AnimBlueprint_AnimGraphNode_TransitionResult_2DF0462F467787C91806BABCB9BE2900
// (BlueprintEvent)
// Parameters:

void UGuitar_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Guitar_AnimBlueprint_AnimGraphNode_TransitionResult_2DF0462F467787C91806BABCB9BE2900()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Guitar_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Guitar_AnimBlueprint_AnimGraphNode_TransitionResult_2DF0462F467787C91806BABCB9BE2900");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Guitar_AnimBlueprint.Guitar_AnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuitar_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Guitar_AnimBlueprint_C", "BlueprintUpdateAnimation");

	Params::UGuitar_AnimBlueprint_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Guitar_AnimBlueprint.Guitar_AnimBlueprint_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UGuitar_AnimBlueprint_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Guitar_AnimBlueprint_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Guitar_AnimBlueprint.Guitar_AnimBlueprint_C.AnimNotify_ShowGuitar
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuitar_AnimBlueprint_C::AnimNotify_ShowGuitar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Guitar_AnimBlueprint_C", "AnimNotify_ShowGuitar");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Guitar_AnimBlueprint.Guitar_AnimBlueprint_C.AnimNotify_HideGuitar
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGuitar_AnimBlueprint_C::AnimNotify_HideGuitar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Guitar_AnimBlueprint_C", "AnimNotify_HideGuitar");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Guitar_AnimBlueprint.Guitar_AnimBlueprint_C.ExecuteUbergraph_Guitar_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANPC_Character_C*            K2Node_DynamicCast_AsNPC_Character                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuitar_AnimBlueprint_C::ExecuteUbergraph_Guitar_AnimBlueprint(int32 EntryPoint, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1, float K2Node_Event_DeltaTimeX, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class ANPC_Character_C* K2Node_DynamicCast_AsNPC_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Guitar_AnimBlueprint_C", "ExecuteUbergraph_Guitar_AnimBlueprint");

	Params::UGuitar_AnimBlueprint_C_ExecuteUbergraph_Guitar_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_1 = CallFunc_LessEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsNPC_Character = K2Node_DynamicCast_AsNPC_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


