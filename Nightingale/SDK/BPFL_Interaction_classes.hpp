#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_Interaction.BPFL_Interaction_C
class UBPFL_Interaction_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_Interaction_C* GetDefaultObj();

	void GetInteractionOptions(struct FInteractionData& InteractionData, class APawn* Pawn, class UObject* __WorldContext, TArray<struct FNWXInteractionOption>* InteractionOptions, class UStructureInteraction_PostConstructionInteraction_DataAsset* LInteractionDataAsset, int32 Index, const struct FNWXInteractionOption& ExistingInteraction, bool bFoundConnectionMatch, const struct FNWXInteractionOption& NewInteraction, const TArray<struct FNWXInteractionOption>& LInteractionOptions, const TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>& LAvailable_Interactions, class APawn* LPawn, class UObject* LInteractable, class UObject* CallFunc_GetInteractableObjectFromInteractionData_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGuid& CallFunc_GetUniqueID_ReturnValue, class UStructureInteractionComponent* CallFunc_GetDefaultObject_ReturnValue, const struct FGuid& CallFunc_GetConnectionDataAssetUID_ReturnValue, TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>& CallFunc_GetAllMeshInteractions_Available_Interactions, bool CallFunc_IsValid_Guid_ReturnValue, class UStructureInteraction_PostConstructionInteraction_DataAsset* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UBP_StructureInteractionObject_C* CallFunc_Get_BPInteraction_Object_from_Structure_Interaction_Data_AsBP_Structure_Interaction_Object, TScriptInterface<class IBPI_StructureInteraction_C> K2Node_DynamicCast_AsBPI_Structure_Interaction, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetDisabledDescription_Description, bool CallFunc_EqualEqual_GuidGuid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FNWXInteractionOption& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_CanExecuteStructureInteraction_bCanInteract, class FText CallFunc_CanExecuteStructureInteraction_InteractionText, const struct FNWXInteractionOption& K2Node_MakeStruct_NWXInteractionOption);
	void HasMultipleInteractionOptions(const struct FInteractionData& CurrentInteractionData, class APawn* InteractingPawn, class UObject* __WorldContext, bool* HasMultipleInteractions, class UObject* LInteractable, class UObject* CallFunc_GetInteractableObjectFromInteractionData_ReturnValue, bool CallFunc_IsAnyKindOfStructureObject_IsValidStructure, TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>& CallFunc_GetActiveMeshInteractions_Mesh_Interactions, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void GetInteractableTransform(struct FInteractionData& InteractionData, class UObject* __WorldContext, struct FTransform* Transform, const struct FInteractionData& LInteractionData, class AActor* LInteractionActor, const struct FTransform& Temp_struct_Variable, TScriptInterface<class IInteractableGetter> K2Node_DynamicCast_AsInteractable_Getter, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FTransform& CallFunc_GetInteractableTransform_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue);
	void InteractWithInteractable(class UObject* Interactable, class APawn* Pawn, const struct FInteractionData& InteractionData, class UObject* __WorldContext, class AActor* Target, class UNWXAbilitySystemComponent* AbilitySystem, const class FString& CallFunc_GetDisplayName_ReturnValue, TScriptInterface<class IInteractionInterface> K2Node_DynamicCast_AsInteraction_Interface, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, TScriptInterface<class IInteractionInterface> K2Node_DynamicCast_AsInteraction_Interface_1, bool K2Node_DynamicCast_bSuccess_1, const struct FGameplayTag& CallFunc_GetInteractionTag_InteractionTag, bool CallFunc_GetInteractionTag_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_2, const struct FInteractionTargetData& K2Node_MakeStruct_InteractionTargetData, const struct FGameplayAbilityTargetDataHandle& CallFunc_TargetDataFromInteractionData_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData);
	void NotEqual(struct FInteractionData& A, struct FInteractionData& B, class UObject* __WorldContext, bool* NotEqual, bool CallFunc_Equal_IsEqual, bool CallFunc_Not_PreBool_ReturnValue);
	void Equal(struct FInteractionData& A, struct FInteractionData& B, class UObject* __WorldContext, bool* IsEqual, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
};

}


