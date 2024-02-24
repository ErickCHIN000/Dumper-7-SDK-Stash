#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x44 (0x168 - 0x124)
// BlueprintGeneratedClass BTT_BaseAi_MeleeAttack.BTT_BaseAi_MeleeAttack_C
class UBTT_BaseAi_MeleeAttack_C : public UBTT_BaseAi_Attack_C
{
public:
	uint8                                        Pad_E14[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x128(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         bInitialized;                                      // 0x130(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E19[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ClosestPoint;                                      // 0x134(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ClosestDistance;                                   // 0x140(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ClosestPointIndex;                                 // 0x144(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       Points;                                            // 0x148(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         bCanAttack;                                        // 0x158(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         JumpStarted;                                       // 0x159(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E23[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          TH_JumpStartedResetted;                            // 0x160(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTT_BaseAi_MeleeAttack_C* GetDefaultObj();

	void ResetJumpStarted();
	void SetJumpStarted(bool NewValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
	void MoveAndAttack(class ASHCharacter* K2Node_DynamicCast_AsSHCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Montage_IsPlaying_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, enum class EPathFollowingRequestResult CallFunc_MoveToActor_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_VSize_ReturnValue, enum class EPathFollowingStatus CallFunc_GetMoveStatus_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1);
	void StopAndAttack(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class ABaseAiCharacter_C* K2Node_DynamicCast_AsBase_Ai_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_StartDodge_Result, class AGenericCharacter_C* K2Node_DynamicCast_AsGeneric_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_CanDodge_Result, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_StartBackwardJump_Result, bool CallFunc_CanJumpBackward_Result, bool CallFunc_StartForwardJump_Result, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_CanJumpForward_Result, bool CallFunc_Not_PreBool_ReturnValue_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_GetPathLength_PathLength, enum class ENavigationQueryResult CallFunc_GetPathLength_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Montage_IsPlaying_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, enum class EPathFollowingRequestResult CallFunc_MoveToActor_ReturnValue, enum class EPathFollowingStatus CallFunc_GetMoveStatus_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_StartCircularMovement_ReturnValue, class ASHCharacter* K2Node_DynamicCast_AsSHCharacter, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void AttackTimeoutCallback();
	void ExecuteUbergraph_BTT_BaseAi_MeleeAttack(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, bool K2Node_SwitchEnum_CmpSuccess, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, class ASHWeapon* CallFunc_GetKickWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


