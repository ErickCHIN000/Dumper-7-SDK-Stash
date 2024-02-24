#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x170 - 0x168)
// BlueprintGeneratedClass BTT_Dog_MeleeAttack.BTT_Dog_MeleeAttack_C
class UBTT_Dog_MeleeAttack_C : public UBTT_BaseAi_MeleeAttack_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x168(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBTT_Dog_MeleeAttack_C* GetDefaultObj();

	void StopAndAttack();
	void ExecuteUbergraph_BTT_Dog_MeleeAttack(int32 EntryPoint, enum class EPathFollowingStatus CallFunc_GetMoveStatus_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Montage_IsPlaying_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class EPathFollowingRequestResult CallFunc_MoveToActor_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, float CallFunc_GetPathLength_PathLength, enum class ENavigationQueryResult CallFunc_GetPathLength_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class ABaseAiCharacter_C* K2Node_DynamicCast_AsBase_Ai_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_StartDodge_Result, bool CallFunc_CanDodge_Result, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_StartBackwardJump_Result, bool CallFunc_CanJumpBackward_Result, bool CallFunc_StartForwardJump_Result, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_CanJumpForward_Result, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_StartCircularMovement_ReturnValue, class AGenericCharacter_C* K2Node_DynamicCast_AsGeneric_Character, bool K2Node_DynamicCast_bSuccess_1, class ADog_Character_C* K2Node_DynamicCast_AsDog_Character, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_ApplyLostControlEffect_ReturnValue, class ALostControl_Dorg_C* K2Node_DynamicCast_AsLost_Control_Dorg, bool K2Node_DynamicCast_bSuccess_3, class ASHCharacter* K2Node_DynamicCast_AsSHCharacter, bool K2Node_DynamicCast_bSuccess_4, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1);
};

}


