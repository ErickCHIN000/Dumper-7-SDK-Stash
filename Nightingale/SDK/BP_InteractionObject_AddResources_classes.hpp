#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x50 - 0x50)
// BlueprintGeneratedClass BP_InteractionObject_AddResources.BP_InteractionObject_AddResources_C
class UBP_InteractionObject_AddResources_C : public UBP_StructureInteractionObject_C
{
public:

	static class UClass* StaticClass();
	static class UBP_InteractionObject_AddResources_C* GetDefaultObj();

	void Client_ExecuteInteraction(class UObject* Structure, class APawn* Pawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, const struct FGameplayAbilityPayloadHandle& Payload, int32 StartingParseIndex, bool* Success, int32* NewParsingIndex, class UObject* StructureActor, class AController* Controller, class AController* CallFunc_GetController_ReturnValue, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_OwnerHasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IStructureCompositePieceInterface> K2Node_DynamicCast_AsStructure_Composite_Piece_Interface, bool K2Node_DynamicCast_bSuccess_1, class AStructureComposite* CallFunc_GetCompositeStructure_Composite, bool CallFunc_IsValid_ReturnValue_1);
	void GetText(class UObject* Structure, class APawn* Pawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, class FText* InteractionText, class APawn* LPawn, class UObject* LStructure, class FText CallFunc_GetText_InteractionText, TScriptInterface<class IStructureStateInterface> K2Node_DynamicCast_AsStructure_State_Interface, bool K2Node_DynamicCast_bSuccess, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, bool CallFunc_OwnerHasAuthority_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void IsInteractionAvailable(class UObject* Structure, class APawn* Pawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, bool* CanInteract, const TArray<struct FStructureResourceRequirements>& LRequiredResources, class APawn* LPawn, class UObject* LStructure, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FStructureResourceRequirements& CallFunc_Array_Get_Item, int32 CallFunc_GetQuantityRemaining_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FStructureResourceRequirements>& Temp_struct_Variable, bool CallFunc_IsInteractionAvailable_CanInteract, TScriptInterface<class ISchematicInfoInterface> K2Node_DynamicCast_AsSchematic_Info_Interface, bool K2Node_DynamicCast_bSuccess, TArray<struct FStructureResourceRequirements>& CallFunc_GetTotalResourceRequirements_ReturnValue);
};

}


