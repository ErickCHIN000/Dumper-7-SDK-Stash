#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x54 - 0x48)
// BlueprintGeneratedClass ShellUpgrade_ResetHardenCooldownOnDoubleKill.ShellUpgrade_ResetHardenCooldownOnDoubleKill_C
class UShellUpgrade_ResetHardenCooldownOnDoubleKill_C : public UShellUpgradeBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        LastKillTime;                                      // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UShellUpgrade_ResetHardenCooldownOnDoubleKill_C* GetDefaultObj();

	void OnAbilityGained();
	void OnAbilityLost();
	void OnDmgApplied();
	void ExecuteUbergraph_ShellUpgrade_ResetHardenCooldownOnDoubleKill(int32 EntryPoint, float CallFunc_GetTimeSeconds_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, float CallFunc_GetTimeSeconds_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, float CallFunc_Subtract_FloatFloat_ReturnValue, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_WasKilledThisFrame_bYes, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_2);
};

}


