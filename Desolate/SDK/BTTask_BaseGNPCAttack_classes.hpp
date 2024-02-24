#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x69 (0x111 - 0xA8)
// BlueprintGeneratedClass BTTask_BaseGNPCAttack.BTTask_BaseGNPCAttack_C
class UBTTask_BaseGNPCAttack_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AAIController*                         TempController;                                    // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGenericNPC_Character_C*               TempCharacter;                                     // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                         TempAnimInstance;                                  // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                EnemyCharacter;                                    // 0xC8(0x28)(Edit, BlueprintVisible)
	class ASHCharacter*                          TempEnemyActor;                                    // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DistanceToEnemy;                                   // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bRotateToTarget;                                   // 0xFC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bRotateTeleport;                                   // 0xFD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bFinishExecuteAfterAttack;                         // 0xFE(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseKicks;                                          // 0xFF(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        KickCooldown;                                      // 0x100(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         KickBlocks;                                        // 0x104(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         KickHeavyAttacks;                                  // 0x105(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_120B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        KickChance;                                        // 0x108(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RotationSpeed;                                     // 0x10C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bMovementRotation;                                 // 0x110(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBTTask_BaseGNPCAttack_C* GetDefaultObj();

	void StartKickCooldown();
	void StartKick(bool CallFunc_CanKick_Result, bool CallFunc_ShouldHappen_ReturnValue, class ASHWeapon* CallFunc_GetKickWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void CanKick(bool* Result, class ASHWeapon* CallFunc_GetWeapon_ReturnValue, class ASHWeapon_Melee* K2Node_DynamicCast_AsSHWeapon_Melee, bool K2Node_DynamicCast_bSuccess, class ASHWeapon* CallFunc_GetWeapon_ReturnValue_1, bool CallFunc_IsStartedHeavyAttack_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_CanKick_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void CanMove(bool* Result, bool CallFunc_KickCanMove_ReturnValue);
	void RotateToTarget(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue_1);
	void MoveToEnemy(float AcceptanceRadius, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, enum class EPathFollowingStatus CallFunc_GetMoveStatus_ReturnValue, enum class EPathFollowingRequestResult CallFunc_MoveToActor_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1);
	void CalculateDistanceToEnemy();
	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_BTTask_BaseGNPCAttack(int32 EntryPoint, class ASHWeapon* CallFunc_GetKickWeapon_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AGenericNPC_Character_C* K2Node_DynamicCast_AsGeneric_NPC_Character, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_OwnerActor, class AAIController* K2Node_DynamicCast_AsAIController, bool K2Node_DynamicCast_bSuccess_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue);
};

}


