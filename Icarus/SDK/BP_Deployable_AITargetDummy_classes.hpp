#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x798 - 0x774)
// BlueprintGeneratedClass BP_Deployable_AITargetDummy.BP_Deployable_AITargetDummy_C
class ABP_Deployable_AITargetDummy_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_38AE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x778(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UGenericAITargetComponent*             GenericAITarget;                                   // 0x780(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMoving;                                          // 0x788(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38BF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector_NetQuantize10                 TargetLocation;                                    // 0x78C(0xC)(Edit, BlueprintVisible, Net, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Deployable_AITargetDummy_C* GetDefaultObj();

	bool ShouldOverrideTargetNeutrality(class AActor* TargetActor, bool* bIsTargetHostile);
	TArray<struct FCriticalHitLocation> GetCriticalHitBones();
	struct FAIRelationshipsRowHandle GetRelationshipData();
	int32 GetTargetAlertness();
	struct FVector GetTargetLocation(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	bool IsActorAlive(bool CallFunc_IsAlive_ReturnValue);
	bool IsCriticalHitDisabled();
	bool IsHidden();
	void GetIsMoving(bool* IsMoving);
	void ToggleMovement(bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void DeployableTick(float DeltaSeconds);
	void ChooseNewMoveTarget();
	void IcarusBeginPlay();
	void ExecuteUbergraph_BP_Deployable_AITargetDummy(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float K2Node_Event_DeltaSeconds, bool CallFunc_IsServer_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation, bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector_NetQuantize10& K2Node_MakeStruct_Vector_NetQuantize10, bool CallFunc_NotEqualExactly_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_VInterpTo_Constant_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_Vector_Distance_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FRotator& CallFunc_REase_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
};

}


