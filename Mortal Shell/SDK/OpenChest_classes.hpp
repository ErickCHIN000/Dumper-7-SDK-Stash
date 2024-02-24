#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x38 - 0x38)
// BlueprintGeneratedClass OpenChest.OpenChest_C
class UOpenChest_C : public UAnimNotify
{
public:

	static class UClass* StaticClass();
	static class UOpenChest_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, class ASK_Loot_Chest_C* K2Node_DynamicCast_AsSK_Loot_Chest, bool K2Node_DynamicCast_bSuccess_1);
};

}


