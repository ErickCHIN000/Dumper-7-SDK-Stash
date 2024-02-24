#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x48 - 0x48)
// BlueprintGeneratedClass Audio_Notify_RollImpact.Audio_Notify_RollImpact_C
class UAudio_Notify_RollImpact_C : public UAudio_Notify_Base_C
{
public:

	static class UClass* StaticClass();
	static class UAudio_Notify_RollImpact_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


