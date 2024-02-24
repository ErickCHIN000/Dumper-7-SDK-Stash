#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x50 - 0x50)
// BlueprintGeneratedClass BP_StructureInteractionObject.BP_StructureInteractionObject_C
class UBP_StructureInteractionObject_C : public UStructureInteractionComponent
{
public:

	static class UClass* StaticClass();
	static class UBP_StructureInteractionObject_C* GetDefaultObj();

	void IsInteractionDisabled(class UObject* Structure, class APawn* InteractingPawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, bool* IsDisabled, class FText* DisabledText, class UBP_StructureInteractionRequirementObject_C* CallFunc_GetBPInteractionRequirementObjectFromStructureInteractionData_AsBPStructureInteractionRequirementObject, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_CheckRequirements_OutReason, bool CallFunc_CheckRequirements_ReturnValue, bool CallFunc_CanInteract_CanInteract, class FText CallFunc_CanInteract_InteractionText, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_GetDisabledDescription_Description);
	void GetButtonType(enum class ERadialButtonType* ButtonType);
	void GetInteractionDescription(class UObject* Structure, class APawn* Pawn, class FText* Description);
	void GetDisabledDescription(class UObject* Structure, class APawn* Pawn, class FText* Description);
	void Client_ExecuteInteraction(class UObject* Structure, class APawn* Pawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, const struct FGameplayAbilityPayloadHandle& Payload, int32 StartingParseIndex, bool* Success, int32* NewParsingIndex);
	void ExecuteInteraction(class UObject* Structure, class APawn* Pawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, const struct FGameplayAbilityPayloadHandle& Payload, int32 StartingParseIndex, bool* Success, int32* NewParsingIndex);
	void BuildPawnInteractionPayload(class APawn* Pawn, const struct FGameplayAbilityPayloadHandle& InitialPayload, const struct FGameplayAbilityPayloadHandle& PreviousPhaseData, int32 StartingParseIndex, bool* Success, struct FGameplayAbilityPayloadHandle* OutputtedPayload, int32* NewParseIndex);
	void BuildStructureInteractionPayload(class UObject* Structure, const struct FGameplayAbilityPayloadHandle& InputtedPayload, bool* Success, struct FGameplayAbilityPayloadHandle* ModifiedPayload);
	void CanInteract(class UObject* Structure, class APawn* InteractingPawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, bool* CanInteract, class FText* InteractionText, class APawn* LPawn, class UObject* LStructure, class FText CallFunc_GetText_InteractionText, bool CallFunc_IsInteractionAvailable_CanInteract);
	void IsInteractionAvailable(class UObject* Structure, class APawn* Pawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, bool* CanInteract, class UBP_StructureInteractionRequirementObject_C* CallFunc_GetBPInteractionRequirementObjectFromStructureInteractionData_AsBPStructureInteractionRequirementObject, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_CheckRequirements_OutReason, bool CallFunc_CheckRequirements_ReturnValue);
	void GetText(class UObject* Structure, class APawn* Pawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, class FText* InteractionText, bool CallFunc_IsValid_ReturnValue, class UStructureInteraction_InteractionText* K2Node_DynamicCast_AsStructure_Interaction_Interaction_Text, bool K2Node_DynamicCast_bSuccess);
};

}


