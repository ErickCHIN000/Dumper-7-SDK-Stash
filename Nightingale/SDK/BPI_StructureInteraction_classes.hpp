#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_StructureInteraction.BPI_StructureInteraction_C
class IBPI_StructureInteraction_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_StructureInteraction_C* GetDefaultObj();

	void IsInteractionDisabled(class UObject* Structure, class APawn* InteractingPawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, bool* IsDisabled, class FText* DisabledText);
	void GetButtonType(enum class ERadialButtonType* ButtonType);
	void GetInteractionDescription(class UObject* Structure, class APawn* Pawn, class FText* Description);
	void GetDisabledDescription(class UObject* Structure, class APawn* Pawn, class FText* Description);
	void Client_ExecuteInteraction(class UObject* Structure, class APawn* Pawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, const struct FGameplayAbilityPayloadHandle& Payload, int32 StartingParseIndex, bool* Success, int32* NewParsingIndex);
	void ExecuteInteraction(class UObject* Structure, class APawn* Pawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, const struct FGameplayAbilityPayloadHandle& Payload, int32 StartingParseIndex, bool* Success, int32* NewParsingIndex);
	void BuildPawnInteractionPayload(class APawn* Pawn, const struct FGameplayAbilityPayloadHandle& InitialPayload, const struct FGameplayAbilityPayloadHandle& PreviousPhaseData, int32 StartingParseIndex, bool* Success, struct FGameplayAbilityPayloadHandle* OutputtedPayload, int32* NewParseIndex);
	void BuildStructureInteractionPayload(class UObject* Structure, const struct FGameplayAbilityPayloadHandle& InputtedPayload, bool* Success, struct FGameplayAbilityPayloadHandle* ModifiedPayload);
	void CanInteract(class UObject* Structure, class APawn* InteractingPawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, bool* CanInteract, class FText* InteractionText);
};

}


