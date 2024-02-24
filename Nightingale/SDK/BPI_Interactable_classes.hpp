#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_Interactable.BPI_Interactable_C
class IBPI_Interactable_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_Interactable_C* GetDefaultObj();

	void CanQueryInteractable(bool* Can_Query);
	void HoldInteractionAvailable(bool* bAvailable);
	void IsInteractionDisabled(class AController* Controller, const struct FInteractionData& InteractionData, bool* bIsDisabled, class FString* DisabledText);
	void DoesHaveResourceType(int32 HitId, enum class EResourceType DesiredResourceType, bool* bHasResourceType);
	void IsHarvestable(const struct FInteractionData& Interaction, bool* IsHarvestable);
	void GetInteractIcon(const struct FInteractionData& InteractionData, TSoftObjectPtr<class UTexture2D>* Icon);
	void GetInteractText(const struct FInteractionData& InteractionData, class FString* InteractText);
	void PerformClientSideInteraction(class AController* Controller);
	void InteractionRequiresClientOnly(class AController* Controller, bool* RequiresClientAction);
	void InteractReleased(bool* Success);
	void InteractPressed(bool* Success);
	void ReturnMeshToHighlight(const struct FInteractionData& InteractionData, TArray<class UStaticMeshComponent*>* StaticMesh_to_Highlight, TArray<class USkeletalMeshComponent*>* SkeletalMesh_to_Highlight, bool* Hostile_, enum class EItemQuality* Quality);
	void CanInteractWithActor(class AController* Controller, const struct FInteractionData& InteractionData, bool* InteractAvailable);
};

}


