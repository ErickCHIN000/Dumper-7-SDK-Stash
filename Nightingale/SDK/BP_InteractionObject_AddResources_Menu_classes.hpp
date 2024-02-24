#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x50 - 0x50)
// BlueprintGeneratedClass BP_InteractionObject_AddResources_Menu.BP_InteractionObject_AddResources_Menu_C
class UBP_InteractionObject_AddResources_Menu_C : public UBP_InteractionObject_AddResources_C
{
public:

	static class UClass* StaticClass();
	static class UBP_InteractionObject_AddResources_Menu_C* GetDefaultObj();

	void ExecuteInteraction(class UObject* Structure, class APawn* Pawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, const struct FGameplayAbilityPayloadHandle& Payload, int32 StartingParseIndex, bool* Success, int32* NewParsingIndex);
	void Client_ExecuteInteraction(class UObject* Structure, class APawn* Pawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, const struct FGameplayAbilityPayloadHandle& Payload, int32 StartingParseIndex, bool* Success, int32* NewParsingIndex, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, bool CallFunc_IsValid_ReturnValue, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UWBP_Inv_StructureTransfer_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue);
};

}


