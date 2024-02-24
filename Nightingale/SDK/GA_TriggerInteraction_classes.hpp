#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A0 (0x5C0 - 0x420)
// BlueprintGeneratedClass GA_TriggerInteraction.GA_TriggerInteraction_C
class UGA_TriggerInteraction_C : public UBP_NWXGameplayAbility_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_PlayerController_C*                Controller;                                        // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 OwningPawn;                                        // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FInteractionData                      InteractionData;                                   // 0x438(0x178)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         bClientOnly;                                       // 0x5B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bInputHeld;                                        // 0x5B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F8D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          Interaction_Timer_Handle;                          // 0x5B8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_TriggerInteraction_C* GetDefaultObj();

	void On_Interact_Release(bool bInputPressed);
	void GetController(class ABP_PlayerController_C** Controller);
	void GetInteractable(class UObject** InteractableObject, class UObject* CallFunc_GetInteractableObjectFromInteractionData_ReturnValue);
	void GetPawn(class APawn** OwningPawn);
	void GetVariables(const struct FGameplayEventData& EventData, bool* bSuccess, class UObject* Interactable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FInteractionTargetData& CallFunc_GetInteractionData_OutData, bool CallFunc_K2_HasAuthority_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetBoolFromAbilityPayload_ReturnValue, bool CallFunc_AbilityPayloadHasBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_GetFunctionName_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_GetBoolFromAbilityPayload_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_AbilityPayloadHasBool_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, class UObject* CallFunc_GetInteractable_InteractableObject, bool CallFunc_DoesImplementInterface_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess_1);
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags, const struct FGameplayTagContainer& ParentTags, const struct FGameplayTagContainer& CallFunc_K2_CanActivateAbility_RelevantTags, bool CallFunc_K2_CanActivateAbility_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void OnFinishedHeld();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_TriggerInteraction(int32 EntryPoint, bool CallFunc_K2_HasAuthority_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_K2_CommitAbility_ReturnValue, bool CallFunc_GetVariables_bSuccess, class UObject* CallFunc_GetInteractable_InteractableObject, class UObject* CallFunc_GetInteractable_InteractableObject_1, TScriptInterface<class IBPI_Interactable_C> K2Node_DynamicCast_AsBPI_Interactable, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_GetPawn_OwningPawn, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_bWasCancelled, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_K2_HasAuthority_ReturnValue_1, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
};

}


