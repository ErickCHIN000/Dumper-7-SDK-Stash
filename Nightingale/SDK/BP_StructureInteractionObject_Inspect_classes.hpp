#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x50 - 0x50)
// BlueprintGeneratedClass BP_StructureInteractionObject_Inspect.BP_StructureInteractionObject_Inspect_C
class UBP_StructureInteractionObject_Inspect_C : public UBP_InteractionObject_OpenMenu_C
{
public:

	static class UClass* StaticClass();
	static class UBP_StructureInteractionObject_Inspect_C* GetDefaultObj();

	void SpawnMenu(class UObject* Pawn, class UClass* Class, class UObject* Structure, bool* Success, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess_1, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UWBP_StructureTraitsScreen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void CanInteract(class UObject* Structure, class APawn* InteractingPawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, bool* CanInteract, class FText* InteractionText);
	void GetInteractionDescription(class UObject* Structure, class APawn* Pawn, class FText* Description);
	void IsInteractionDisabled(class UObject* Structure, class APawn* InteractingPawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, bool* IsDisabled, class FText* DisabledText);
	void ExecuteInteraction(class UObject* Structure, class APawn* Pawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, const struct FGameplayAbilityPayloadHandle& Payload, int32 StartingParseIndex, bool* Success, int32* NewParsingIndex);
};

}


