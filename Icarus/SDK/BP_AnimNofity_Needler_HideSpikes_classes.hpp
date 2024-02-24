#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x38 - 0x38)
// BlueprintGeneratedClass BP_AnimNofity_Needler_HideSpikes.BP_AnimNofity_Needler_HideSpikes_C
class UBP_AnimNofity_Needler_HideSpikes_C : public UAnimNotify
{
public:

	static class UClass* StaticClass();
	static class UBP_AnimNofity_Needler_HideSpikes_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_NPC_Needler_Character_C* K2Node_DynamicCast_AsBP_NPC_Needler_Character, bool K2Node_DynamicCast_bSuccess);
	class FString GetNotifyName();
};

}


