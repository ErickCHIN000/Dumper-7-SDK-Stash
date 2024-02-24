#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x68 - 0x48)
// BlueprintGeneratedClass ShellUpgrade_ReduceDmgTakenAfterKill.ShellUpgrade_ReduceDmgTakenAfterKill_C
class UShellUpgrade_ReduceDmgTakenAfterKill_C : public UShellUpgradeBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                          Timer;                                             // 0x50(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Icon;                                              // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CachedIconIndex;                                   // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Duration;                                          // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UShellUpgrade_ReduceDmgTakenAfterKill_C* GetDefaultObj();

	void OnAbilityGained();
	void OnAbilityLost();
	void OnDmgApplied();
	void BoostOver();
	void ExecuteUbergraph_ShellUpgrade_ReduceDmgTakenAfterKill(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, bool CallFunc_WasKilledThisFrame_bYes, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_AddStatusIcon_IconID, class FName CallFunc_MakeLiteralName_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue_1);
};

}


