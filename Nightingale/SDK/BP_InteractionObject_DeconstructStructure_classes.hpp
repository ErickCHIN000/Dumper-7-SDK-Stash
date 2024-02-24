#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x50 - 0x50)
// BlueprintGeneratedClass BP_InteractionObject_DeconstructStructure.BP_InteractionObject_DeconstructStructure_C
class UBP_InteractionObject_DeconstructStructure_C : public UBP_StructureInteractionObject_C
{
public:

	static class UClass* StaticClass();
	static class UBP_InteractionObject_DeconstructStructure_C* GetDefaultObj();

	void ExecuteInteraction(class UObject* Structure, class APawn* Pawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, const struct FGameplayAbilityPayloadHandle& Payload, int32 StartingParseIndex, bool* Success, int32* NewParsingIndex, TSubclassOf<class IInterface> Temp_class_Variable, class AController* CallFunc_GetController_ReturnValue, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface, bool K2Node_DynamicCast_bSuccess);
	void GetDisabledDescription(class UObject* Structure, class APawn* Pawn, class FText* Description, TSoftObjectPtr<class UBuildingFeedbackDescriptions> DA_BuildingFeedback, bool Temp_bool_Variable, class AController* CallFunc_GetController_ReturnValue, enum class EBuildingFeedback Temp_byte_Variable, TSubclassOf<class IInterface> Temp_class_Variable, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UBuildingFeedbackDescriptions* K2Node_DynamicCast_AsBuilding_Feedback_Descriptions, bool K2Node_DynamicCast_bSuccess_1, class FText CallFunc_GetFeedbackDescription_ReturnValue, enum class EBuildingFeedback CallFunc_CanStartDeconstruct_OutFeedbackId, bool CallFunc_CanStartDeconstruct_ReturnValue);
	void IsInteractionAvailable(class UObject* Structure, class APawn* Pawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, bool* CanInteract, bool Temp_bool_Variable, class AController* CallFunc_GetController_ReturnValue, enum class EBuildingFeedback Temp_byte_Variable, TSubclassOf<class IInterface> Temp_class_Variable, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsInteractionAvailable_CanInteract, enum class EBuildingFeedback CallFunc_CanStartDeconstruct_OutFeedbackId, bool CallFunc_CanStartDeconstruct_ReturnValue);
};

}


