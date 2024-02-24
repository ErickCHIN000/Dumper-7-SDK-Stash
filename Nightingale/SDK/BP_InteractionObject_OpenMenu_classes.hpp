#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x50 - 0x50)
// BlueprintGeneratedClass BP_InteractionObject_OpenMenu.BP_InteractionObject_OpenMenu_C
class UBP_InteractionObject_OpenMenu_C : public UBP_StructureInteractionObject_C
{
public:

	static class UClass* StaticClass();
	static class UBP_InteractionObject_OpenMenu_C* GetDefaultObj();

	void SpawnMenu(class UObject* Pawn, class UClass* Class, class UObject* Structure, bool* Success, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, bool CallFunc_IsValid_ReturnValue, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UNWXCommonWindowWidget* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue);
	void OnClientOpenMenu(class UObject* Structure);
	void ExecuteInteraction(class UObject* Structure, class APawn* Pawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, const struct FGameplayAbilityPayloadHandle& Payload, int32 StartingParseIndex, bool* Success, int32* NewParsingIndex);
	void Client_ExecuteInteraction(class UObject* Structure, class APawn* Pawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, const struct FGameplayAbilityPayloadHandle& Payload, int32 StartingParseIndex, bool* Success, int32* NewParsingIndex, TSoftClassPtr<class UNWXUserWidget> LMenuToOpen, bool CallFunc_IsValid_ReturnValue, class UStructureInteraction_OpenMenu* K2Node_DynamicCast_AsStructure_Interaction_Open_Menu, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidSoftClassReference_ReturnValue, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsNWXCommon_Window_Widget, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_SpawnMenu_Success);
	void PreOpenMenu(class UObject* Structure, class APawn* Pawn);
	void IsInteractionAvailable(class UObject* Structure, class APawn* Pawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, bool* CanInteract, class UObject* LStructure, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_IsInteractionAvailable_CanInteract, const class FString& CallFunc_GetFunctionName_ReturnValue);
};

}


