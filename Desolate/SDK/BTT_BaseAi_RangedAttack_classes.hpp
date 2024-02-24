#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x138 - 0x124)
// BlueprintGeneratedClass BTT_BaseAi_RangedAttack.BTT_BaseAi_RangedAttack_C
class UBTT_BaseAi_RangedAttack_C : public UBTT_BaseAi_Attack_C
{
public:
	uint8                                        Pad_D84[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x128(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                          AttackMotage;                                      // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTT_BaseAi_RangedAttack_C* GetDefaultObj();

	void MoveAndAttack(bool CallFunc_EnemyInAttackDistance_Result, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class EPathFollowingStatus CallFunc_GetMoveStatus_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_BooleanAND_ReturnValue_1, enum class EPathFollowingRequestResult CallFunc_MoveToActor_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_Montage_IsPlaying_ReturnValue);
	void GetPathLocation(struct FVector* Location, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_ProjectPointToNavigation_ProjectedLocation, bool CallFunc_K2_ProjectPointToNavigation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, float CallFunc_GetPathLength_PathLength, enum class ENavigationQueryResult CallFunc_GetPathLength_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue);
	void StopAndAttack(bool CallFunc_EnemyInAttackDistance_Result, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_GetPathLocation_Location, enum class EPathFollowingRequestResult CallFunc_MoveToLocation_ReturnValue, enum class EPathFollowingStatus CallFunc_GetMoveStatus_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Montage_IsPlaying_ReturnValue);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ExecuteUbergraph_BTT_BaseAi_RangedAttack(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
};

}


