#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Churaka_AnimationBlueprint.Churaka_AnimationBlueprint_C
// (None)

class UClass* UChuraka_AnimationBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Churaka_AnimationBlueprint_C");

	return Clss;
}


// Churaka_AnimationBlueprint_C Churaka_AnimationBlueprint.Default__Churaka_AnimationBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChuraka_AnimationBlueprint_C* UChuraka_AnimationBlueprint_C::GetDefaultObj()
{
	static class UChuraka_AnimationBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChuraka_AnimationBlueprint_C*>(UChuraka_AnimationBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Churaka_AnimationBlueprint.Churaka_AnimationBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UChuraka_AnimationBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Churaka_AnimationBlueprint_C", "AnimGraph");

	Params::UChuraka_AnimationBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Churaka_AnimationBlueprint.Churaka_AnimationBlueprint_C.AB_SyncState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAIStates               NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UChuraka_AnimationBlueprint_C::AB_SyncState(enum class EAIStates NewState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Churaka_AnimationBlueprint_C", "AB_SyncState");

	Params::UChuraka_AnimationBlueprint_C_AB_SyncState_Params Parms{};

	Parms.NewState = NewState;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Churaka_AnimationBlueprint.Churaka_AnimationBlueprint_C.AB_SyncPoiType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EChuraka_PatrolPoiType  Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UChuraka_AnimationBlueprint_C::AB_SyncPoiType(enum class EChuraka_PatrolPoiType Type, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Churaka_AnimationBlueprint_C", "AB_SyncPoiType");

	Params::UChuraka_AnimationBlueprint_C_AB_SyncPoiType_Params Parms{};

	Parms.Type = Type;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Churaka_AnimationBlueprint.Churaka_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Churaka_AnimationBlueprint_AnimGraphNode_TransitionResult_D47783CC473C73A8403D2CA1144258F4
// (BlueprintEvent)
// Parameters:

void UChuraka_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Churaka_AnimationBlueprint_AnimGraphNode_TransitionResult_D47783CC473C73A8403D2CA1144258F4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Churaka_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Churaka_AnimationBlueprint_AnimGraphNode_TransitionResult_D47783CC473C73A8403D2CA1144258F4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Churaka_AnimationBlueprint.Churaka_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Churaka_AnimationBlueprint_AnimGraphNode_ModifyBone_647C201E432FEA1C94DFADB80B0151F1
// (BlueprintEvent)
// Parameters:

void UChuraka_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Churaka_AnimationBlueprint_AnimGraphNode_ModifyBone_647C201E432FEA1C94DFADB80B0151F1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Churaka_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Churaka_AnimationBlueprint_AnimGraphNode_ModifyBone_647C201E432FEA1C94DFADB80B0151F1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Churaka_AnimationBlueprint.Churaka_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Churaka_AnimationBlueprint_AnimGraphNode_TransitionResult_B63DE8234720D3B2C6D7D8951BC0C621
// (BlueprintEvent)
// Parameters:

void UChuraka_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Churaka_AnimationBlueprint_AnimGraphNode_TransitionResult_B63DE8234720D3B2C6D7D8951BC0C621()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Churaka_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Churaka_AnimationBlueprint_AnimGraphNode_TransitionResult_B63DE8234720D3B2C6D7D8951BC0C621");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Churaka_AnimationBlueprint.Churaka_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Churaka_AnimationBlueprint_AnimGraphNode_TransitionResult_F8BEED774828D3F8B5BA5BBBF5D1B0CC
// (BlueprintEvent)
// Parameters:

void UChuraka_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Churaka_AnimationBlueprint_AnimGraphNode_TransitionResult_F8BEED774828D3F8B5BA5BBBF5D1B0CC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Churaka_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Churaka_AnimationBlueprint_AnimGraphNode_TransitionResult_F8BEED774828D3F8B5BA5BBBF5D1B0CC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Churaka_AnimationBlueprint.Churaka_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Churaka_AnimationBlueprint_AnimGraphNode_TransitionResult_99BCFA0C4F5FBDD04E91818BFBA7CCEB
// (BlueprintEvent)
// Parameters:

void UChuraka_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Churaka_AnimationBlueprint_AnimGraphNode_TransitionResult_99BCFA0C4F5FBDD04E91818BFBA7CCEB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Churaka_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Churaka_AnimationBlueprint_AnimGraphNode_TransitionResult_99BCFA0C4F5FBDD04E91818BFBA7CCEB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Churaka_AnimationBlueprint.Churaka_AnimationBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChuraka_AnimationBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Churaka_AnimationBlueprint_C", "BlueprintUpdateAnimation");

	Params::UChuraka_AnimationBlueprint_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Churaka_AnimationBlueprint.Churaka_AnimationBlueprint_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UChuraka_AnimationBlueprint_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Churaka_AnimationBlueprint_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Churaka_AnimationBlueprint.Churaka_AnimationBlueprint_C.AnimNotify_Footstep
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UChuraka_AnimationBlueprint_C::AnimNotify_Footstep()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Churaka_AnimationBlueprint_C", "AnimNotify_Footstep");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Churaka_AnimationBlueprint.Churaka_AnimationBlueprint_C.ExecuteUbergraph_Churaka_AnimationBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USHGameInstance*             K2Node_DynamicCast_AsSHGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AChuraka_Character_C*        K2Node_DynamicCast_AsChuraka_Character                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnFootStep_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAlive_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UChuraka_AnimationBlueprint_C::ExecuteUbergraph_Churaka_AnimationBlueprint(int32 EntryPoint, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USHGameInstance* K2Node_DynamicCast_AsSHGame_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class AChuraka_Character_C* K2Node_DynamicCast_AsChuraka_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, bool CallFunc_OnFootStep_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsAlive_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Churaka_AnimationBlueprint_C", "ExecuteUbergraph_Churaka_AnimationBlueprint");

	Params::UChuraka_AnimationBlueprint_C_ExecuteUbergraph_Churaka_AnimationBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsSHGame_Instance = K2Node_DynamicCast_AsSHGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_1 = CallFunc_LessEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_2 = CallFunc_LessEqual_FloatFloat_ReturnValue_2;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsChuraka_Character = K2Node_DynamicCast_AsChuraka_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_OnFootStep_ReturnValue = CallFunc_OnFootStep_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsAlive_ReturnValue = CallFunc_IsAlive_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


