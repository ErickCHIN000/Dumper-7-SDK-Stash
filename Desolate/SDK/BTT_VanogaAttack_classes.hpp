#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0x158 - 0x124)
// BlueprintGeneratedClass BTT_VanogaAttack.BTT_VanogaAttack_C
class UBTT_VanogaAttack_C : public UBTT_BaseAi_Attack_C
{
public:
	uint8                                        Pad_DE8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x128(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        MeleeAttackRange;                                  // 0x130(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bMeleeAttackOnCooldown;                            // 0x134(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DEC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MeleeAttackCooldown;                               // 0x138(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DF0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          TH_MeleeAttackCooldown;                            // 0x140(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          bRangeAttackOnCooldown;                            // 0x148(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AVanoga_Character_C*                   TempVanogaCharacter;                               // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTT_VanogaAttack_C* GetDefaultObj();

	void CanRangeAttack(bool* Result, TArray<class AActor*>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FHitResult& CallFunc_BoxTraceSingle_OutHit, bool CallFunc_BoxTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void OnMeleeAttackCooldownCallback();
	void StartMeleeAttackCooldown(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void EnemyInMeleeRange(bool* Result, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ExecuteUbergraph_BTT_VanogaAttack(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, float CallFunc_DistanceToEnemy_Distance, bool CallFunc_Montage_IsPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, enum class EPathFollowingStatus CallFunc_GetMoveStatus_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EPathFollowingRequestResult CallFunc_MoveToActor_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_CanRangeAttack_Result, bool CallFunc_Not_PreBool_ReturnValue_3, class AVanoga_Character_C* K2Node_DynamicCast_AsVanoga_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_ShouldStartWallState_Result, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_ShouldBombing_Result, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_CanDoCircularAttack_Return, bool CallFunc_StartCircularAttack_Result, bool CallFunc_Not_PreBool_ReturnValue_6);
};

}


