#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xE8 - 0xE8)
// BlueprintGeneratedClass BP_Interactable_NoInteraction.BP_Interactable_NoInteraction_C
class UBP_Interactable_NoInteraction_C : public UInteractableBehaviour
{
public:

	static class UClass* StaticClass();
	static class UBP_Interactable_NoInteraction_C* GetDefaultObj();

	bool CanInteract(class AActor* Instigator, const struct FHitResult& HitResult);
};

}


