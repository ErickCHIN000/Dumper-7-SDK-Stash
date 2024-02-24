#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Sapsy_AnimBlueprint.Sapsy_AnimBlueprint_C
// (None)

class UClass* USapsy_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Sapsy_AnimBlueprint_C");

	return Clss;
}


// Sapsy_AnimBlueprint_C Sapsy_AnimBlueprint.Default__Sapsy_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USapsy_AnimBlueprint_C* USapsy_AnimBlueprint_C::GetDefaultObj()
{
	static class USapsy_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USapsy_AnimBlueprint_C*>(USapsy_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Sapsy_AnimBlueprint.Sapsy_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USapsy_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Sapsy_AnimBlueprint_C", "AnimGraph");

	Params::USapsy_AnimBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Sapsy_AnimBlueprint.Sapsy_AnimBlueprint_C.AB_SyncPoiType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESapsy_PatrolPoiType    Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void USapsy_AnimBlueprint_C::AB_SyncPoiType(enum class ESapsy_PatrolPoiType Type, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Sapsy_AnimBlueprint_C", "AB_SyncPoiType");

	Params::USapsy_AnimBlueprint_C_AB_SyncPoiType_Params Parms{};

	Parms.Type = Type;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Sapsy_AnimBlueprint.Sapsy_AnimBlueprint_C.AB_SyncState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAIStates               State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void USapsy_AnimBlueprint_C::AB_SyncState(enum class EAIStates State, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Sapsy_AnimBlueprint_C", "AB_SyncState");

	Params::USapsy_AnimBlueprint_C_AB_SyncState_Params Parms{};

	Parms.State = State;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Sapsy_AnimBlueprint.Sapsy_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Sapsy_AnimBlueprint_AnimGraphNode_TransitionResult_FDDBC2794FFFCE6AD1291B943D85BC7C
// (BlueprintEvent)
// Parameters:

void USapsy_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Sapsy_AnimBlueprint_AnimGraphNode_TransitionResult_FDDBC2794FFFCE6AD1291B943D85BC7C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Sapsy_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Sapsy_AnimBlueprint_AnimGraphNode_TransitionResult_FDDBC2794FFFCE6AD1291B943D85BC7C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Sapsy_AnimBlueprint.Sapsy_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Sapsy_AnimBlueprint_AnimGraphNode_TransitionResult_663DF56F419CDFDD3B63538B4F2DA22F
// (BlueprintEvent)
// Parameters:

void USapsy_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Sapsy_AnimBlueprint_AnimGraphNode_TransitionResult_663DF56F419CDFDD3B63538B4F2DA22F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Sapsy_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Sapsy_AnimBlueprint_AnimGraphNode_TransitionResult_663DF56F419CDFDD3B63538B4F2DA22F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Sapsy_AnimBlueprint.Sapsy_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Sapsy_AnimBlueprint_AnimGraphNode_TransitionResult_366101C9458B6A2F06FCE8BD25C9D69C
// (BlueprintEvent)
// Parameters:

void USapsy_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Sapsy_AnimBlueprint_AnimGraphNode_TransitionResult_366101C9458B6A2F06FCE8BD25C9D69C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Sapsy_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Sapsy_AnimBlueprint_AnimGraphNode_TransitionResult_366101C9458B6A2F06FCE8BD25C9D69C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Sapsy_AnimBlueprint.Sapsy_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Sapsy_AnimBlueprint_AnimGraphNode_ModifyBone_FF55E670489560C708CE8BA1D7668364
// (BlueprintEvent)
// Parameters:

void USapsy_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Sapsy_AnimBlueprint_AnimGraphNode_ModifyBone_FF55E670489560C708CE8BA1D7668364()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Sapsy_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Sapsy_AnimBlueprint_AnimGraphNode_ModifyBone_FF55E670489560C708CE8BA1D7668364");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Sapsy_AnimBlueprint.Sapsy_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Sapsy_AnimBlueprint_AnimGraphNode_TransitionResult_63AE166745DC24EF1B7FAD8860E74771
// (BlueprintEvent)
// Parameters:

void USapsy_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Sapsy_AnimBlueprint_AnimGraphNode_TransitionResult_63AE166745DC24EF1B7FAD8860E74771()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Sapsy_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Sapsy_AnimBlueprint_AnimGraphNode_TransitionResult_63AE166745DC24EF1B7FAD8860E74771");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Sapsy_AnimBlueprint.Sapsy_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Sapsy_AnimBlueprint_AnimGraphNode_TransitionResult_E7A51BA34D771F9D9EDA70BBF8EDD3A7
// (BlueprintEvent)
// Parameters:

void USapsy_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Sapsy_AnimBlueprint_AnimGraphNode_TransitionResult_E7A51BA34D771F9D9EDA70BBF8EDD3A7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Sapsy_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Sapsy_AnimBlueprint_AnimGraphNode_TransitionResult_E7A51BA34D771F9D9EDA70BBF8EDD3A7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Sapsy_AnimBlueprint.Sapsy_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Sapsy_AnimBlueprint_AnimGraphNode_TransitionResult_8D2F1EFD427F3CD91C6ED8BFEF7EE2C5
// (BlueprintEvent)
// Parameters:

void USapsy_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Sapsy_AnimBlueprint_AnimGraphNode_TransitionResult_8D2F1EFD427F3CD91C6ED8BFEF7EE2C5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Sapsy_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Sapsy_AnimBlueprint_AnimGraphNode_TransitionResult_8D2F1EFD427F3CD91C6ED8BFEF7EE2C5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Sapsy_AnimBlueprint.Sapsy_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Sapsy_AnimBlueprint_AnimGraphNode_TransitionResult_BD4A077049A1C3C4903D4197B34B108F
// (BlueprintEvent)
// Parameters:

void USapsy_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Sapsy_AnimBlueprint_AnimGraphNode_TransitionResult_BD4A077049A1C3C4903D4197B34B108F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Sapsy_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Sapsy_AnimBlueprint_AnimGraphNode_TransitionResult_BD4A077049A1C3C4903D4197B34B108F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Sapsy_AnimBlueprint.Sapsy_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Sapsy_AnimBlueprint_AnimGraphNode_TransitionResult_4D2F46FB43CFFD92ACA8AFB8DC901250
// (BlueprintEvent)
// Parameters:

void USapsy_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Sapsy_AnimBlueprint_AnimGraphNode_TransitionResult_4D2F46FB43CFFD92ACA8AFB8DC901250()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Sapsy_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Sapsy_AnimBlueprint_AnimGraphNode_TransitionResult_4D2F46FB43CFFD92ACA8AFB8DC901250");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Sapsy_AnimBlueprint.Sapsy_AnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USapsy_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Sapsy_AnimBlueprint_C", "BlueprintUpdateAnimation");

	Params::USapsy_AnimBlueprint_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Sapsy_AnimBlueprint.Sapsy_AnimBlueprint_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void USapsy_AnimBlueprint_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Sapsy_AnimBlueprint_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Sapsy_AnimBlueprint.Sapsy_AnimBlueprint_C.AnimNotify_Footstep
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USapsy_AnimBlueprint_C::AnimNotify_Footstep()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Sapsy_AnimBlueprint_C", "AnimNotify_Footstep");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Sapsy_AnimBlueprint.Sapsy_AnimBlueprint_C.ExecuteUbergraph_Sapsy_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USHGameInstance*             K2Node_DynamicCast_AsSHGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_2 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_3 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_4 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_5 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASapsy_Character_C*          K2Node_DynamicCast_AsSapsy_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_5                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnFootStep_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHCharacter*                CallFunc_GetEnemyCharacter_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAlive_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void USapsy_AnimBlueprint_C::ExecuteUbergraph_Sapsy_AnimBlueprint(int32 EntryPoint, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USHGameInstance* K2Node_DynamicCast_AsSHGame_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_3, bool CallFunc_LessEqual_FloatFloat_ReturnValue_3, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_4, bool CallFunc_LessEqual_FloatFloat_ReturnValue_4, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_5, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float K2Node_Event_DeltaTimeX, const struct FVector& CallFunc_MakeVector_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class ASapsy_Character_C* K2Node_DynamicCast_AsSapsy_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_OnFootStep_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, class ASHCharacter* CallFunc_GetEnemyCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsAlive_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, float CallFunc_Lerp_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Sapsy_AnimBlueprint_C", "ExecuteUbergraph_Sapsy_AnimBlueprint");

	Params::USapsy_AnimBlueprint_C_ExecuteUbergraph_Sapsy_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsSHGame_Instance = K2Node_DynamicCast_AsSHGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_1 = CallFunc_LessEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_2 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_2;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_2 = CallFunc_LessEqual_FloatFloat_ReturnValue_2;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_3 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_3;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_3 = CallFunc_LessEqual_FloatFloat_ReturnValue_3;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_4 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_4;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_4 = CallFunc_LessEqual_FloatFloat_ReturnValue_4;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_5 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_5;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsSapsy_Character = K2Node_DynamicCast_AsSapsy_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_5 = CallFunc_LessEqual_FloatFloat_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_OnFootStep_ReturnValue = CallFunc_OnFootStep_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_GetEnemyCharacter_ReturnValue = CallFunc_GetEnemyCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsAlive_ReturnValue = CallFunc_IsAlive_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


