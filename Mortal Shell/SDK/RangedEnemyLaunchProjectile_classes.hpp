#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x38 - 0x38)
// BlueprintGeneratedClass RangedEnemyLaunchProjectile.RangedEnemyLaunchProjectile_C
class URangedEnemyLaunchProjectile_C : public UAnimNotify
{
public:

	static class UClass* StaticClass();
	static class URangedEnemyLaunchProjectile_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class ARangedEnemy_C* K2Node_DynamicCast_AsRanged_Enemy, bool K2Node_DynamicCast_bSuccess);
};

}


