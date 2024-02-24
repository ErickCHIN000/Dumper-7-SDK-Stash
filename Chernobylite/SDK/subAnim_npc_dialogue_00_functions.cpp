#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass subAnim_npc_dialogue_00.subAnim_npc_dialogue_00_C
// (None)

class UClass* USubAnim_npc_dialogue_00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("subAnim_npc_dialogue_00_C");

	return Clss;
}


// subAnim_npc_dialogue_00_C subAnim_npc_dialogue_00.Default__subAnim_npc_dialogue_00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USubAnim_npc_dialogue_00_C* USubAnim_npc_dialogue_00_C::GetDefaultObj()
{
	static class USubAnim_npc_dialogue_00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USubAnim_npc_dialogue_00_C*>(USubAnim_npc_dialogue_00_C::StaticClass()->DefaultObject);

	return Default;
}


// Function subAnim_npc_dialogue_00.subAnim_npc_dialogue_00_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USubAnim_npc_dialogue_00_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("subAnim_npc_dialogue_00_C", "AnimGraph");

	Params::USubAnim_npc_dialogue_00_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function subAnim_npc_dialogue_00.subAnim_npc_dialogue_00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_subAnim_npc_dialogue_00_AnimGraphNode_TransitionResult_47B7D4804A80BD9DF985F3B57E22C3BB
// (BlueprintEvent)
// Parameters:

void USubAnim_npc_dialogue_00_C::EvaluateGraphExposedInputs_ExecuteUbergraph_subAnim_npc_dialogue_00_AnimGraphNode_TransitionResult_47B7D4804A80BD9DF985F3B57E22C3BB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("subAnim_npc_dialogue_00_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_subAnim_npc_dialogue_00_AnimGraphNode_TransitionResult_47B7D4804A80BD9DF985F3B57E22C3BB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function subAnim_npc_dialogue_00.subAnim_npc_dialogue_00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_subAnim_npc_dialogue_00_AnimGraphNode_TransitionResult_E8F5FCD543ADC5869D881B9524855F1E
// (BlueprintEvent)
// Parameters:

void USubAnim_npc_dialogue_00_C::EvaluateGraphExposedInputs_ExecuteUbergraph_subAnim_npc_dialogue_00_AnimGraphNode_TransitionResult_E8F5FCD543ADC5869D881B9524855F1E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("subAnim_npc_dialogue_00_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_subAnim_npc_dialogue_00_AnimGraphNode_TransitionResult_E8F5FCD543ADC5869D881B9524855F1E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function subAnim_npc_dialogue_00.subAnim_npc_dialogue_00_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubAnim_npc_dialogue_00_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("subAnim_npc_dialogue_00_C", "BlueprintUpdateAnimation");

	Params::USubAnim_npc_dialogue_00_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function subAnim_npc_dialogue_00.subAnim_npc_dialogue_00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_subAnim_npc_dialogue_00_AnimGraphNode_TransitionResult_6364D7FB45EDF810C73B0FB6EBC3CF9C
// (BlueprintEvent)
// Parameters:

void USubAnim_npc_dialogue_00_C::EvaluateGraphExposedInputs_ExecuteUbergraph_subAnim_npc_dialogue_00_AnimGraphNode_TransitionResult_6364D7FB45EDF810C73B0FB6EBC3CF9C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("subAnim_npc_dialogue_00_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_subAnim_npc_dialogue_00_AnimGraphNode_TransitionResult_6364D7FB45EDF810C73B0FB6EBC3CF9C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function subAnim_npc_dialogue_00.subAnim_npc_dialogue_00_C.AnimNotify_TransitionFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USubAnim_npc_dialogue_00_C::AnimNotify_TransitionFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("subAnim_npc_dialogue_00_C", "AnimNotify_TransitionFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function subAnim_npc_dialogue_00.subAnim_npc_dialogue_00_C.AnimNotify_Reset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USubAnim_npc_dialogue_00_C::AnimNotify_Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("subAnim_npc_dialogue_00_C", "AnimNotify_Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function subAnim_npc_dialogue_00.subAnim_npc_dialogue_00_C.EvaluateGraphExposedInputs_ExecuteUbergraph_subAnim_npc_dialogue_00_AnimGraphNode_TransitionResult_A5961A0440E03A2776DD409FBE60DBD3
// (BlueprintEvent)
// Parameters:

void USubAnim_npc_dialogue_00_C::EvaluateGraphExposedInputs_ExecuteUbergraph_subAnim_npc_dialogue_00_AnimGraphNode_TransitionResult_A5961A0440E03A2776DD409FBE60DBD3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("subAnim_npc_dialogue_00_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_subAnim_npc_dialogue_00_AnimGraphNode_TransitionResult_A5961A0440E03A2776DD409FBE60DBD3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function subAnim_npc_dialogue_00.subAnim_npc_dialogue_00_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void USubAnim_npc_dialogue_00_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("subAnim_npc_dialogue_00_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function subAnim_npc_dialogue_00.subAnim_npc_dialogue_00_C.UpdateAnims
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimSequence*               InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               InAdditive                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               InTransition                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubAnim_npc_dialogue_00_C::UpdateAnims(class UAnimSequence* InPose, class UAnimSequence* InAdditive, class UAnimSequence* InTransition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("subAnim_npc_dialogue_00_C", "UpdateAnims");

	Params::USubAnim_npc_dialogue_00_C_UpdateAnims_Params Parms{};

	Parms.InPose = InPose;
	Parms.InAdditive = InAdditive;
	Parms.InTransition = InTransition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function subAnim_npc_dialogue_00.subAnim_npc_dialogue_00_C.ExecuteUbergraph_subAnim_npc_dialogue_00
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGAICharacter*              K2Node_DynamicCast_AsCGAICharacter                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGAICharacter*              K2Node_DynamicCast_AsCGAICharacter_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimSequence*               K2Node_CustomEvent_InPose                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_CustomEvent_InAdditive                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_CustomEvent_InTransition                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue_1      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimSequence*               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimSequence*               K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void USubAnim_npc_dialogue_00_C::ExecuteUbergraph_subAnim_npc_dialogue_00(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_1, bool CallFunc_EqualEqual_BoolBool_ReturnValue, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, class UAnimSequence* K2Node_CustomEvent_InPose, class UAnimSequence* K2Node_CustomEvent_InAdditive, class UAnimSequence* K2Node_CustomEvent_InTransition, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue_2, bool CallFunc_NotEqual_ObjectObject_ReturnValue_3, bool CallFunc_NotEqual_ObjectObject_ReturnValue_4, float CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_1, class UAnimSequence* K2Node_Select_Default, class UAnimSequence* K2Node_Select_Default_1, bool Temp_bool_Variable_3, class UAnimSequence* K2Node_Select_Default_2, class UAnimSequence* K2Node_Select_Default_3, bool CallFunc_EqualEqual_BoolBool_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("subAnim_npc_dialogue_00_C", "ExecuteUbergraph_subAnim_npc_dialogue_00");

	Params::USubAnim_npc_dialogue_00_C_ExecuteUbergraph_subAnim_npc_dialogue_00_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsCGAICharacter = K2Node_DynamicCast_AsCGAICharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue = CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue_1 = CallFunc_TryGetPawnOwner_ReturnValue_1;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsCGAICharacter_1 = K2Node_DynamicCast_AsCGAICharacter_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_InPose = K2Node_CustomEvent_InPose;
	Parms.K2Node_CustomEvent_InAdditive = K2Node_CustomEvent_InAdditive;
	Parms.K2Node_CustomEvent_InTransition = K2Node_CustomEvent_InTransition;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_1 = CallFunc_NotEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_2 = CallFunc_NotEqual_ObjectObject_ReturnValue_2;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_3 = CallFunc_NotEqual_ObjectObject_ReturnValue_3;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_4 = CallFunc_NotEqual_ObjectObject_ReturnValue_4;
	Parms.CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue_1 = CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue_1 = CallFunc_EqualEqual_BoolBool_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


