#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x1148 - 0x1138)
// BlueprintGeneratedClass MissileLauncher.MissileLauncher_C
class AMissileLauncher_C : public ATTLShoulderMissilePot
{
public:
	uint8                                        Pad_249[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1140(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AMissileLauncher_C* GetDefaultObj();

	void UserConstructionScript();
	void StartLaunch();
	void ExecuteUbergraph_MissileLauncher(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsPlayerControlled_ReturnValue, TArray<struct FTransform>& CallFunc_AttackWithTargetActor_spawnTransformList, const struct FVector& CallFunc_AttackWithTargetActor_ownerVelocity, TArray<float>& CallFunc_AttackWithTargetActor_speedRandRateList, TArray<struct FVector>& CallFunc_AttackWithTargetActor_impactRandOffsetList, class AActor* CallFunc_GetLockOnTarget_Target, TArray<struct FTransform>& CallFunc_AttackWithTargetActor_spawnTransformList1, const struct FVector& CallFunc_AttackWithTargetActor_ownerVelocity1, TArray<float>& CallFunc_AttackWithTargetActor_speedRandRateList1, TArray<struct FVector>& CallFunc_AttackWithTargetActor_impactRandOffsetList1);
};

}


