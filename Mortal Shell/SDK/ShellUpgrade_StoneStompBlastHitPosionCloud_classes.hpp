#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x50 - 0x48)
// BlueprintGeneratedClass ShellUpgrade_StoneStompBlastHitPosionCloud.ShellUpgrade_StoneStompBlastHitPosionCloud_C
class UShellUpgrade_StoneStompBlastHitPosionCloud_C : public UShellUpgradeBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x48(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UShellUpgrade_StoneStompBlastHitPosionCloud_C* GetDefaultObj();

	void OnAbilityGained();
	void OnAbilityLost();
	void OnStoneStompHit(class AEnemyCharacter_C* Target);
	void ExecuteUbergraph_ShellUpgrade_StoneStompBlastHitPosionCloud(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class AEnemyCharacter_C* K2Node_CustomEvent_Target, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABPPoisonCloud_C* CallFunc_FinishSpawningActor_ReturnValue);
};

}


