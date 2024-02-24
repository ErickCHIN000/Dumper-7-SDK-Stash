#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x158 - 0xA8)
// BlueprintGeneratedClass BasicMelee_RootMotionMovementTask.BasicMelee_RootMotionMovementTask_C
class UBasicMelee_RootMotionMovementTask_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                TargetActor;                                       // 0xB0(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                WaitForAttack;                                     // 0xD8(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                AbortWaitAfterAttack_;                             // 0x100(0x28)(Edit, BlueprintVisible)
	class AEnemyCharacter_C*                     EnemyCharReference;                                // 0x128(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          WalkBackMontage;                                   // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          DashBackMontage;                                   // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          WalkLeftMontage;                                   // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          WalkRightMontage;                                  // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ChanceToPlay;                                      // 0x150(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        StrafeIfWithinDistance;                            // 0x154(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBasicMelee_RootMotionMovementTask_C* GetDefaultObj();

	bool CheckAllyInDirection(struct FVector& Direction, float Distance, class APawn* CallFunc_GetPlayerPawn_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TArray<class AActor*>& K2Node_MakeArray_Array_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	bool CheckDirection(struct FVector& Direction, float Distance, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetScaledCapsuleRadius_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_Abs_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class UNavigationPath* CallFunc_FindPathToLocationSynchronously_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetPathLength_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void GetRandomStrafeMontage(class UAnimMontage** AnimMontage, const TArray<class UAnimMontage*>& MontagesNoAlly, const TArray<class UAnimMontage*>& Montages, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, bool CallFunc_CheckAllyInDirection_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue_1, bool CallFunc_CheckAllyInDirection_ReturnValue_1, bool CallFunc_CheckDirection_ReturnValue, bool CallFunc_CheckDirection_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_3, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_4, bool CallFunc_CheckAllyInDirection_ReturnValue_2, bool CallFunc_CheckDirection_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_5, bool Temp_bool_Variable, TArray<class UAnimMontage*>& K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_RandomInteger_ReturnValue, class UAnimMontage* CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue_6, int32 CallFunc_Array_Add_ReturnValue_7);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BasicMelee_RootMotionMovementTask(int32 EntryPoint, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class UAnimMontage* CallFunc_GetRandomStrafeMontage_AnimMontage, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
};

}


