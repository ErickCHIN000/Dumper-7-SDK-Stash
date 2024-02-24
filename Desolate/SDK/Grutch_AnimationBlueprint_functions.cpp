#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Grutch_AnimationBlueprint.Grutch_AnimationBlueprint_C
// (None)

class UClass* UGrutch_AnimationBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Grutch_AnimationBlueprint_C");

	return Clss;
}


// Grutch_AnimationBlueprint_C Grutch_AnimationBlueprint.Default__Grutch_AnimationBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGrutch_AnimationBlueprint_C* UGrutch_AnimationBlueprint_C::GetDefaultObj()
{
	static class UGrutch_AnimationBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGrutch_AnimationBlueprint_C*>(UGrutch_AnimationBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Grutch_AnimationBlueprint.Grutch_AnimationBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UGrutch_AnimationBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grutch_AnimationBlueprint_C", "AnimGraph");

	Params::UGrutch_AnimationBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Grutch_AnimationBlueprint.Grutch_AnimationBlueprint_C.AB_SyncPoiType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGrutch_PatrolPoiType   Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGrutch_AnimationBlueprint_C::AB_SyncPoiType(enum class EGrutch_PatrolPoiType Type, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grutch_AnimationBlueprint_C", "AB_SyncPoiType");

	Params::UGrutch_AnimationBlueprint_C_AB_SyncPoiType_Params Parms{};

	Parms.Type = Type;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Grutch_AnimationBlueprint.Grutch_AnimationBlueprint_C.AB_SyncState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAIStates               State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGrutch_AnimationBlueprint_C::AB_SyncState(enum class EAIStates State, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grutch_AnimationBlueprint_C", "AB_SyncState");

	Params::UGrutch_AnimationBlueprint_C_AB_SyncState_Params Parms{};

	Parms.State = State;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Grutch_AnimationBlueprint.Grutch_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Grutch_AnimationBlueprint_AnimGraphNode_TransitionResult_DC59086A472077FBA40D5088C62FE5C2
// (BlueprintEvent)
// Parameters:

void UGrutch_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Grutch_AnimationBlueprint_AnimGraphNode_TransitionResult_DC59086A472077FBA40D5088C62FE5C2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grutch_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Grutch_AnimationBlueprint_AnimGraphNode_TransitionResult_DC59086A472077FBA40D5088C62FE5C2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Grutch_AnimationBlueprint.Grutch_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Grutch_AnimationBlueprint_AnimGraphNode_TransitionResult_B6C33F3D4B7149F8F04311AAE304B920
// (BlueprintEvent)
// Parameters:

void UGrutch_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Grutch_AnimationBlueprint_AnimGraphNode_TransitionResult_B6C33F3D4B7149F8F04311AAE304B920()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grutch_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Grutch_AnimationBlueprint_AnimGraphNode_TransitionResult_B6C33F3D4B7149F8F04311AAE304B920");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Grutch_AnimationBlueprint.Grutch_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Grutch_AnimationBlueprint_AnimGraphNode_TransitionResult_D8937F5F4A30B969B54375BA6B04847C
// (BlueprintEvent)
// Parameters:

void UGrutch_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Grutch_AnimationBlueprint_AnimGraphNode_TransitionResult_D8937F5F4A30B969B54375BA6B04847C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grutch_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Grutch_AnimationBlueprint_AnimGraphNode_TransitionResult_D8937F5F4A30B969B54375BA6B04847C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Grutch_AnimationBlueprint.Grutch_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Grutch_AnimationBlueprint_AnimGraphNode_TransitionResult_7C8B1C7148A8C031E263039C186EF1CC
// (BlueprintEvent)
// Parameters:

void UGrutch_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Grutch_AnimationBlueprint_AnimGraphNode_TransitionResult_7C8B1C7148A8C031E263039C186EF1CC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grutch_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Grutch_AnimationBlueprint_AnimGraphNode_TransitionResult_7C8B1C7148A8C031E263039C186EF1CC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Grutch_AnimationBlueprint.Grutch_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Grutch_AnimationBlueprint_AnimGraphNode_TransitionResult_9A4F1A77471AEB28E31CC8872EA8CDFF
// (BlueprintEvent)
// Parameters:

void UGrutch_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Grutch_AnimationBlueprint_AnimGraphNode_TransitionResult_9A4F1A77471AEB28E31CC8872EA8CDFF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grutch_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Grutch_AnimationBlueprint_AnimGraphNode_TransitionResult_9A4F1A77471AEB28E31CC8872EA8CDFF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Grutch_AnimationBlueprint.Grutch_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Grutch_AnimationBlueprint_AnimGraphNode_ModifyBone_5F6824CC497B1493EABF949888D9CE0A
// (BlueprintEvent)
// Parameters:

void UGrutch_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Grutch_AnimationBlueprint_AnimGraphNode_ModifyBone_5F6824CC497B1493EABF949888D9CE0A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grutch_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Grutch_AnimationBlueprint_AnimGraphNode_ModifyBone_5F6824CC497B1493EABF949888D9CE0A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Grutch_AnimationBlueprint.Grutch_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Grutch_AnimationBlueprint_AnimGraphNode_TransitionResult_E8DB889445E9F0759C7E62811C4508F7
// (BlueprintEvent)
// Parameters:

void UGrutch_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Grutch_AnimationBlueprint_AnimGraphNode_TransitionResult_E8DB889445E9F0759C7E62811C4508F7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grutch_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Grutch_AnimationBlueprint_AnimGraphNode_TransitionResult_E8DB889445E9F0759C7E62811C4508F7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Grutch_AnimationBlueprint.Grutch_AnimationBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Grutch_AnimationBlueprint_AnimGraphNode_TransitionResult_C21A9D0744F6C0A226826A94665D89DD
// (BlueprintEvent)
// Parameters:

void UGrutch_AnimationBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Grutch_AnimationBlueprint_AnimGraphNode_TransitionResult_C21A9D0744F6C0A226826A94665D89DD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grutch_AnimationBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Grutch_AnimationBlueprint_AnimGraphNode_TransitionResult_C21A9D0744F6C0A226826A94665D89DD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Grutch_AnimationBlueprint.Grutch_AnimationBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGrutch_AnimationBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grutch_AnimationBlueprint_C", "BlueprintUpdateAnimation");

	Params::UGrutch_AnimationBlueprint_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Grutch_AnimationBlueprint.Grutch_AnimationBlueprint_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UGrutch_AnimationBlueprint_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grutch_AnimationBlueprint_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Grutch_AnimationBlueprint.Grutch_AnimationBlueprint_C.AnimNotify_Footstep
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGrutch_AnimationBlueprint_C::AnimNotify_Footstep()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grutch_AnimationBlueprint_C", "AnimNotify_Footstep");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Grutch_AnimationBlueprint.Grutch_AnimationBlueprint_C.AnimNotify_StartGrowl
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGrutch_AnimationBlueprint_C::AnimNotify_StartGrowl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grutch_AnimationBlueprint_C", "AnimNotify_StartGrowl");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Grutch_AnimationBlueprint.Grutch_AnimationBlueprint_C.AnimNotify_StopGrowl
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGrutch_AnimationBlueprint_C::AnimNotify_StopGrowl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grutch_AnimationBlueprint_C", "AnimNotify_StopGrowl");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Grutch_AnimationBlueprint.Grutch_AnimationBlueprint_C.AnimNotify_GrutchFrontalAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGrutch_AnimationBlueprint_C::AnimNotify_GrutchFrontalAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grutch_AnimationBlueprint_C", "AnimNotify_GrutchFrontalAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Grutch_AnimationBlueprint.Grutch_AnimationBlueprint_C.AnimNotify_GrutchCircularAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGrutch_AnimationBlueprint_C::AnimNotify_GrutchCircularAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grutch_AnimationBlueprint_C", "AnimNotify_GrutchCircularAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Grutch_AnimationBlueprint.Grutch_AnimationBlueprint_C.AnimNotify_Grutch_ApplyGrowlFearEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGrutch_AnimationBlueprint_C::AnimNotify_Grutch_ApplyGrowlFearEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grutch_AnimationBlueprint_C", "AnimNotify_Grutch_ApplyGrowlFearEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Grutch_AnimationBlueprint.Grutch_AnimationBlueprint_C.AnimNotify_GrutchJumpAttackStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGrutch_AnimationBlueprint_C::AnimNotify_GrutchJumpAttackStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grutch_AnimationBlueprint_C", "AnimNotify_GrutchJumpAttackStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Grutch_AnimationBlueprint.Grutch_AnimationBlueprint_C.AnimNotify_GrutchJumpAttackUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGrutch_AnimationBlueprint_C::AnimNotify_GrutchJumpAttackUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grutch_AnimationBlueprint_C", "AnimNotify_GrutchJumpAttackUpdate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Grutch_AnimationBlueprint.Grutch_AnimationBlueprint_C.AnimNotify_GrutchJumpAttackStop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGrutch_AnimationBlueprint_C::AnimNotify_GrutchJumpAttackStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grutch_AnimationBlueprint_C", "AnimNotify_GrutchJumpAttackStop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Grutch_AnimationBlueprint.Grutch_AnimationBlueprint_C.ExecuteUbergraph_Grutch_AnimationBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_2 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_3 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGrutch_Character_C*         K2Node_DynamicCast_AsGrutch_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnFootStep_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHCharacter*                CallFunc_GetEnemyCharacter_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAlive_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USHGameInstance*             K2Node_DynamicCast_AsSHGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGrutch_AnimationBlueprint_C::ExecuteUbergraph_Grutch_AnimationBlueprint(int32 EntryPoint, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_3, bool CallFunc_LessEqual_FloatFloat_ReturnValue_4, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class AGrutch_Character_C* K2Node_DynamicCast_AsGrutch_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_OnFootStep_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, class ASHCharacter* CallFunc_GetEnemyCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsAlive_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, float CallFunc_Lerp_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, class USHGameInstance* K2Node_DynamicCast_AsSHGame_Instance, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Grutch_AnimationBlueprint_C", "ExecuteUbergraph_Grutch_AnimationBlueprint");

	Params::UGrutch_AnimationBlueprint_C_ExecuteUbergraph_Grutch_AnimationBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_1 = CallFunc_LessEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_2 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_2;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_2 = CallFunc_LessEqual_FloatFloat_ReturnValue_2;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_3 = CallFunc_LessEqual_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_3 = CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_3;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_4 = CallFunc_LessEqual_FloatFloat_ReturnValue_4;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsGrutch_Character = K2Node_DynamicCast_AsGrutch_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_OnFootStep_ReturnValue = CallFunc_OnFootStep_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_GetEnemyCharacter_ReturnValue = CallFunc_GetEnemyCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_IsAlive_ReturnValue = CallFunc_IsAlive_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsSHGame_Instance = K2Node_DynamicCast_AsSHGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;

	UObject::ProcessEvent(Func, &Parms);

}

}


