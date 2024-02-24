#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x179 - 0x168)
// BlueprintGeneratedClass BTT_BlindMan_MeleeAttack.BTT_BlindMan_MeleeAttack_C
class UBTT_BlindMan_MeleeAttack_C : public UBTT_BaseAi_MeleeAttack_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x168(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABlindMan_Character_C*                 BlindManCharacter;                                 // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bMovementStop;                                     // 0x178(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBTT_BlindMan_MeleeAttack_C* GetDefaultObj();

	void StopAndAttack();
	void ExecuteUbergraph_BTT_BlindMan_MeleeAttack(int32 EntryPoint, float CallFunc_GetDotToEnemyCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UAnimMontage* CallFunc_GetCurrentActiveMontage_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Montage_IsPlaying_ReturnValue, enum class EPathFollowingStatus CallFunc_GetMoveStatus_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EPathFollowingRequestResult CallFunc_MoveToActor_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, float CallFunc_GetPathLength_PathLength, enum class ENavigationQueryResult CallFunc_GetPathLength_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UAnimMontage* CallFunc_GetCurrentActiveMontage_ReturnValue_1, bool CallFunc_CanStartJumpAttack_Result, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_StartJumpAttack_Result, bool CallFunc_CanStartBlindness_Result, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_StartBlindness_Result, bool CallFunc_CanStartHealing_Result, bool CallFunc_StartHealing_Result, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_CanStartTaran_Result, bool CallFunc_StartTaran_Result, bool CallFunc_Not_PreBool_ReturnValue_5, class ABlindMan_Character_C* K2Node_DynamicCast_AsBlind_Man_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanStartQte_Result, bool CallFunc_Not_PreBool_ReturnValue_6, bool CallFunc_StartQte_Result);
};

}


