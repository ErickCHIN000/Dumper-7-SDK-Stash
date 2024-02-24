#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x38 - 0x38)
// BlueprintGeneratedClass PlayFXifSwordTraceMissed.PlayFXifSwordTraceMissed_C
class UPlayFXifSwordTraceMissed_C : public UAnimNotify
{
public:

	static class UClass* StaticClass();
	static class UPlayFXifSwordTraceMissed_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess);
};

}


