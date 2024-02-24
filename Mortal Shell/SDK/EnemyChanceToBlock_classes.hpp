#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x3C - 0x38)
// BlueprintGeneratedClass EnemyChanceToBlock.EnemyChanceToBlock_C
class UEnemyChanceToBlock_C : public UAnimNotify
{
public:
	int32                                        PercentChanceToBlock;                              // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UEnemyChanceToBlock_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_RollChanceToBlock_ReturnValue);
};

}


