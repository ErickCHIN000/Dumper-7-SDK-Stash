#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x6D8 - 0x668)
// BlueprintGeneratedClass GA_Interaction_Structure.GA_Interaction_Structure_C
class UGA_Interaction_Structure_C : public UGA_Interaction_Base_C
{
public:
	class UObject*                               OwningStructure;                                   // 0x668(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            StructureTransform;                                // 0x670(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStructureInteraction_PostConstructionInteraction_DataAsset* PermittedInteraction;                              // 0x6D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Interaction_Structure_C* GetDefaultObj();

	void BuildPawnPayload(class UBP_StructureInteractionObject_C* StructureInteraction, const struct FGameplayAbilityPayloadHandle& StructurePayload, bool* bSuccess, struct FGameplayAbilityPayloadHandle* Payload, const struct FGameplayAbilityPayloadHandle& EmptyPayload, class APawn* CallFunc_GetPawn_Pawn, TScriptInterface<class IBPI_StructureInteraction_C> CallFunc_BuildPawnInteractionPayload_self_CastInput, bool CallFunc_BuildPawnInteractionPayload_Success, const struct FGameplayAbilityPayloadHandle& CallFunc_BuildPawnInteractionPayload_OutputtedPayload, int32 CallFunc_BuildPawnInteractionPayload_NewParseIndex);
	void BuildStructurePayload(class UBP_StructureInteractionObject_C* StructureInteractionObject, bool* bSuccess, struct FGameplayAbilityPayloadHandle* Payload, const struct FGameplayAbilityPayloadHandle& EmptyPayload, TScriptInterface<class IBPI_StructureInteraction_C> CallFunc_BuildStructureInteractionPayload_self_CastInput, bool CallFunc_BuildStructureInteractionPayload_Success, const struct FGameplayAbilityPayloadHandle& CallFunc_BuildStructureInteractionPayload_ModifiedPayload);
	void PopulateVariables(bool* bSuccess, class UObject* CallFunc_ObtainOwningStructure_OwningStructure, bool CallFunc_PopulateVariables_bSuccess, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess);
	void ExecuteInteraction(struct FGameplayTagContainer* InteractionTags, const struct FGameplayTagContainer& ParentTags, const struct FGameplayAbilityPayloadHandle& PawnPayload, const struct FGameplayAbilityPayloadHandle& EmptyPayload, class UBP_StructureInteractionObject_C* StructureInteractionObject, class UBP_StructureInteractionObject_C* CallFunc_Get_BPInteraction_Object_from_Structure_Interaction_Data_AsBP_Structure_Interaction_Object, bool CallFunc_BuildStructurePayload_bSuccess, const struct FGameplayAbilityPayloadHandle& CallFunc_BuildStructurePayload_Payload, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_GetPawn_Pawn, TScriptInterface<class IBPI_StructureInteraction_C> CallFunc_Client_ExecuteInteraction_self_CastInput, bool CallFunc_Client_ExecuteInteraction_Success, int32 CallFunc_Client_ExecuteInteraction_NewParsingIndex, bool CallFunc_K2_HasAuthority_ReturnValue, const struct FGameplayTagContainer& CallFunc_ExecuteInteraction_InteractionTags, bool CallFunc_BuildPawnPayload_bSuccess, const struct FGameplayAbilityPayloadHandle& CallFunc_BuildPawnPayload_Payload, class APawn* CallFunc_GetPawn_Pawn_1, bool CallFunc_PawnPhaseCanExecute_Success, class UStructureInteraction_PostConstructionInteraction_DataAsset* CallFunc_PawnPhaseCanExecute_SelectedInteraction, TScriptInterface<class IBPI_StructureInteraction_C> CallFunc_ExecuteInteraction_self_CastInput, bool CallFunc_ExecuteInteraction_Success, int32 CallFunc_ExecuteInteraction_NewParsingIndex);
	void PawnPhaseCanExecute(bool* Success, class UStructureInteraction_PostConstructionInteraction_DataAsset** SelectedInteraction, class UStructureInteraction_PostConstructionInteraction_DataAsset* Interaction, const TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>& LAvailableInteractions, int32 Temp_int_Array_Index_Variable, bool CallFunc_AreAutomatedTestsRunning_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UStructureInteraction_PostConstructionInteraction_DataAsset* CallFunc_Array_Get_Item, class UStructureInteraction_PostConstructionInteraction_DataAsset* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, const struct FGuid& CallFunc_GetUniqueID_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_GuidGuid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APawn* CallFunc_GetPawn_Pawn, TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>& CallFunc_GetActiveMeshInteractions_Mesh_Interactions);
	void ObtainOwningStructure(class UObject** OwningStructure, class UObject* LocalInteractable, class UObject* CallFunc_GetInteractable_Interactable);
	void GetInteractable(class UObject** Interactable, class AStructureComposite* Structure, class UStructureCompositePiece* CompositePiece, class AStructureComposite* K2Node_DynamicCast_AsStructure_Composite, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAnyKindOfStructureObject_IsValidStructure, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class UObject* CallFunc_GetInteractableObjectFromInteractionData_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAnyKindOfStructureObject_IsValidStructure_1, class UStructureCompositeComponent* CallFunc_GetCompositeComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UStructureCompositePiece* CallFunc_GetCompositePiece_ReturnValue, class UObject* CallFunc_GetInteractable_Interactable, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, class AStructureComposite* K2Node_DynamicCast_AsStructure_Composite_1, bool K2Node_DynamicCast_bSuccess_1);
};

}


