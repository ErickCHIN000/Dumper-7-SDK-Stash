#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x54 (0x474 - 0x420)
// BlueprintGeneratedClass GA_Crafting_Step_Base.GA_Crafting_Step_Base_C
class UGA_Crafting_Step_Base_C : public UBP_NWXGameplayAbility_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ANWXCharacter*                         CraftingCharacter;                                 // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CraftingStationActor;                              // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_CraftingStationComponent_C*        CraftingStationComponent;                          // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   StepDefinitionHandle;                              // 0x440(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FString                                CraftingCharacterUniqueID;                         // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         bCrafterIsPlayer;                                  // 0x460(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bCharacterPresent;                                 // 0x461(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bInitializationSuccess;                            // 0x462(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6CBB[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 CurrentCraftID;                                    // 0x464(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Crafting_Step_Base_C* GetDefaultObj();

	void CraftCancelled(const struct FGuid& CancelledCraft, bool CallFunc_EqualEqual_GuidGuid_ReturnValue);
	bool ActorPresentAtCraftingStation(class AActor* Actor, bool CallFunc_IsValid_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FGameplayEffectQuery& K2Node_MakeStruct_GameplayEffectQuery, TArray<struct FActiveGameplayEffectHandle>& CallFunc_GetActiveEffects_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void InitializeCrafterVariables(class AActor* InstigatingActor, const class FString& InitialUniqueID, bool* bCharacterPresent, bool* bCharacterPlayer, class FString* PlayerUniqueId, class ANWXCharacter** CraftingCharacter, class ANWXCharacter* InstigatingCharacter, const class FString& ID, bool bIsPlayer, bool bPresent, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_1, bool CallFunc_ActorPresentAtCraftingStation_ReturnValue, bool CallFunc_ActorPresentAtCraftingStation_ReturnValue_1, class UObject* Temp_object_Variable, class ANWXCharacter* K2Node_DynamicCast_AsNWXCharacter, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IOwnershipInterface> K2Node_DynamicCast_AsOwnership_Interface, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_GetOwningPlayerPersistentID_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, class APlayerState* CallFunc_GetPlayerStateFromId_PlayerState, TScriptInterface<class IBPI_PlayerStateSystems_C> K2Node_DynamicCast_AsBPI_Player_State_Systems, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_1, class ABP_PlayerController_C* CallFunc_GetBPPlayerController_Player_Controller, bool CallFunc_IsValid_ReturnValue_2, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ANWXCharacter* K2Node_DynamicCast_AsNWXCharacter_1, bool K2Node_DynamicCast_bSuccess_3, const class FString& Temp_string_Variable, TScriptInterface<class IOwnershipAccessInterface> K2Node_DynamicCast_AsOwnership_Access_Interface, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_ActorHasTag_ReturnValue_1, class UObject* CallFunc_GetOwnershipObject_ReturnValue);
	void InitializeAbility_GetTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData, bool* Success, const class FString& CallFunc_GetCraftingStepFromTargetData_CrafterUniqueId, const struct FDataTableRowHandle& CallFunc_GetCraftingStepFromTargetData_ReturnValue);
	void InitializeAbilityFromEvent(const struct FGameplayEventData& EventData, bool* Success, class AActor* AbilityTarget, class AActor* AbilityInstigator, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_InitializeAbility_GetTargetData_Success, bool CallFunc_GetCraftInProgressIDForCrafter_bSuccess, const struct FGuid& CallFunc_GetCraftInProgressIDForCrafter_ReturnValue, bool CallFunc_InitializeCrafterVariables_bCharacterPresent, bool CallFunc_InitializeCrafterVariables_bCharacterPlayer, const class FString& CallFunc_InitializeCrafterVariables_PlayerUniqueID, class ANWXCharacter* CallFunc_InitializeCrafterVariables_CraftingCharacter, bool CallFunc_IsValid_ReturnValue, class UBP_CraftingStationComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_Crafting_Step_Base(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_InitializeAbilityFromEvent_Success, const class FString& CallFunc_Conv_ObjectToString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool K2Node_Event_bWasCancelled, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
};

}


