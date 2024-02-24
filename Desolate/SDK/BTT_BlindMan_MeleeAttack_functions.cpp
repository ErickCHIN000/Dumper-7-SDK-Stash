#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTT_BlindMan_MeleeAttack.BTT_BlindMan_MeleeAttack_C
// (None)

class UClass* UBTT_BlindMan_MeleeAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTT_BlindMan_MeleeAttack_C");

	return Clss;
}


// BTT_BlindMan_MeleeAttack_C BTT_BlindMan_MeleeAttack.Default__BTT_BlindMan_MeleeAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTT_BlindMan_MeleeAttack_C* UBTT_BlindMan_MeleeAttack_C::GetDefaultObj()
{
	static class UBTT_BlindMan_MeleeAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTT_BlindMan_MeleeAttack_C*>(UBTT_BlindMan_MeleeAttack_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTT_BlindMan_MeleeAttack.BTT_BlindMan_MeleeAttack_C.StopAndAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBTT_BlindMan_MeleeAttack_C::StopAndAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_BlindMan_MeleeAttack_C", "StopAndAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BTT_BlindMan_MeleeAttack.BTT_BlindMan_MeleeAttack_C.ExecuteUbergraph_BTT_BlindMan_MeleeAttack
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDotToEnemyCharacter_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                CallFunc_GetCurrentActiveMontage_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Montage_IsPlaying_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPathFollowingStatus    CallFunc_GetMoveStatus_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPathFollowingRequestResultCallFunc_MoveToActor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPathLength_PathLength                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENavigationQueryResult  CallFunc_GetPathLength_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                CallFunc_GetCurrentActiveMontage_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanStartJumpAttack_Result                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StartJumpAttack_Result                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanStartBlindness_Result                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StartBlindness_Result                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanStartHealing_Result                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StartHealing_Result                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanStartTaran_Result                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StartTaran_Result                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABlindMan_Character_C*       K2Node_DynamicCast_AsBlind_Man_Character                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanStartQte_Result                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StartQte_Result                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBTT_BlindMan_MeleeAttack_C::ExecuteUbergraph_BTT_BlindMan_MeleeAttack(int32 EntryPoint, float CallFunc_GetDotToEnemyCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UAnimMontage* CallFunc_GetCurrentActiveMontage_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Montage_IsPlaying_ReturnValue, enum class EPathFollowingStatus CallFunc_GetMoveStatus_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EPathFollowingRequestResult CallFunc_MoveToActor_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, float CallFunc_GetPathLength_PathLength, enum class ENavigationQueryResult CallFunc_GetPathLength_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UAnimMontage* CallFunc_GetCurrentActiveMontage_ReturnValue_1, bool CallFunc_CanStartJumpAttack_Result, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_StartJumpAttack_Result, bool CallFunc_CanStartBlindness_Result, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_StartBlindness_Result, bool CallFunc_CanStartHealing_Result, bool CallFunc_StartHealing_Result, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_CanStartTaran_Result, bool CallFunc_StartTaran_Result, bool CallFunc_Not_PreBool_ReturnValue_5, class ABlindMan_Character_C* K2Node_DynamicCast_AsBlind_Man_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanStartQte_Result, bool CallFunc_Not_PreBool_ReturnValue_6, bool CallFunc_StartQte_Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_BlindMan_MeleeAttack_C", "ExecuteUbergraph_BTT_BlindMan_MeleeAttack");

	Params::UBTT_BlindMan_MeleeAttack_C_ExecuteUbergraph_BTT_BlindMan_MeleeAttack_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDotToEnemyCharacter_ReturnValue = CallFunc_GetDotToEnemyCharacter_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetCurrentActiveMontage_ReturnValue = CallFunc_GetCurrentActiveMontage_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Montage_IsPlaying_ReturnValue = CallFunc_Montage_IsPlaying_ReturnValue;
	Parms.CallFunc_GetMoveStatus_ReturnValue = CallFunc_GetMoveStatus_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_MoveToActor_ReturnValue = CallFunc_MoveToActor_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_3 = CallFunc_K2_GetActorLocation_ReturnValue_3;
	Parms.CallFunc_GetPathLength_PathLength = CallFunc_GetPathLength_PathLength;
	Parms.CallFunc_GetPathLength_ReturnValue = CallFunc_GetPathLength_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_1 = CallFunc_LessEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetCurrentActiveMontage_ReturnValue_1 = CallFunc_GetCurrentActiveMontage_ReturnValue_1;
	Parms.CallFunc_CanStartJumpAttack_Result = CallFunc_CanStartJumpAttack_Result;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_StartJumpAttack_Result = CallFunc_StartJumpAttack_Result;
	Parms.CallFunc_CanStartBlindness_Result = CallFunc_CanStartBlindness_Result;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_StartBlindness_Result = CallFunc_StartBlindness_Result;
	Parms.CallFunc_CanStartHealing_Result = CallFunc_CanStartHealing_Result;
	Parms.CallFunc_StartHealing_Result = CallFunc_StartHealing_Result;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_CanStartTaran_Result = CallFunc_CanStartTaran_Result;
	Parms.CallFunc_StartTaran_Result = CallFunc_StartTaran_Result;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsBlind_Man_Character = K2Node_DynamicCast_AsBlind_Man_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CanStartQte_Result = CallFunc_CanStartQte_Result;
	Parms.CallFunc_Not_PreBool_ReturnValue_6 = CallFunc_Not_PreBool_ReturnValue_6;
	Parms.CallFunc_StartQte_Result = CallFunc_StartQte_Result;

	UObject::ProcessEvent(Func, &Parms);

}

}


