#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xF0 - 0xF0)
// BlueprintGeneratedClass BP_InteractionComponent.BP_InteractionComponent_C
class UBP_InteractionComponent_C : public UPlayerInteractionComponent
{
public:

	static class UClass* StaticClass();
	static class UBP_InteractionComponent_C* GetDefaultObj();

	void GetWeakpointComponent(bool* HasInterface, TScriptInterface<class IBPI_WeakPoint_C>* Interface);
	void GetPingInterface(bool* bHasInterface, TScriptInterface<class IBPI_Ping_C>* PingInterface);
	bool CanQueryInteractable(class UObject* InteractableObject, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_Interactable_C> K2Node_DynamicCast_AsBPI_Interactable, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanQueryInteractable_Can_Query);
	bool IsInteractionDisabled(class UObject* InteractableObject, class AController* Controller, struct FInteractionData& InteractionData, class FString* OutDisabledText, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_Interactable_C> K2Node_DynamicCast_AsBPI_Interactable, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsInteractionDisabled_bIsDisabled, const class FString& CallFunc_IsInteractionDisabled_DisabledText);
	bool IsInteractableHarvestable(class UObject* InteractableObject, struct FInteractionData& InteractionData, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_Interactable_C> K2Node_DynamicCast_AsBPI_Interactable, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsHarvestable_IsHarvestable);
	bool GetInteractRaycastEndpoints(float InRange, struct FVector* OutRaycastStart, struct FVector* OutRaycastEnd, class AActor* Owner, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetRaycastEndpoints_Start, const struct FVector& CallFunc_GetRaycastEndpoints_End, class AActor* CallFunc_GetOwner_ReturnValue, double CallFunc_GetRaycastEndpoints_Range_ImplicitCast);
	TSoftObjectPtr<class UTexture2D> GetHarvestableIcon(class UObject* InteractableObject, struct FInteractionData& InteractionData, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_Interactable_C> K2Node_DynamicCast_AsBPI_Interactable, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<class UTexture2D> CallFunc_GetInteractIcon_Icon);
	bool CanInteractWithActor(class UObject* InteractableObject, class AController* Controller, struct FInteractionData& InteractionData, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_Interactable_C> K2Node_DynamicCast_AsBPI_Interactable, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanInteractWithActor_InteractAvailable);
	void BuildInteractionAbilityPayloadHandle(class UObject* InteractableObject, class AController* Controller, struct FGameplayAbilityPayloadHandle* OutPayloadHandle, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IBPI_Interactable_C> K2Node_DynamicCast_AsBPI_Interactable, bool K2Node_DynamicCast_bSuccess, bool CallFunc_InteractionRequiresClientOnly_RequiresClientAction, TScriptInterface<class IBPI_Interactable_C> K2Node_DynamicCast_AsBPI_Interactable_1, bool K2Node_DynamicCast_bSuccess_1, const struct FGameplayAbilityPayloadHandle& CallFunc_AbilityPayloadFromBool_ReturnValue, bool CallFunc_HoldInteractionAvailable_bAvailable, const struct FGameplayAbilityPayloadHandle& CallFunc_AbilityPayloadFromBool_ReturnValue_1, const struct FGameplayAbilityPayloadHandle& CallFunc_AppendPayloadHandle_ReturnValue);
};

}


