#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x518 - 0x510)
// BlueprintGeneratedClass GA_CreatureAbility_GiantOfferingInteraction.GA_CreatureAbility_GiantOfferingInteraction_C
class UGA_CreatureAbility_GiantOfferingInteraction_C : public UGA_CreatureAbilityBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x510(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_CreatureAbility_GiantOfferingInteraction_C* GetDefaultObj();

	void HandleEvent(const struct FGameplayTag& EventTags, const struct FGameplayEventData& EventData, const struct FGameplayTag& Temp_struct_Variable, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, const struct FGameplayTag& Temp_struct_Variable_1, TScriptInterface<class IBPI_Targeter_C> CallFunc_GetTarget_self_CastInput, class AActor* CallFunc_GetTarget_Target, TScriptInterface<class IBPI_Targeter_C> CallFunc_GetTarget_self_CastInput_1, class AActor* CallFunc_GetTarget_Target_1, bool CallFunc_ActorHasTag_ReturnValue, TScriptInterface<class IStructureDestroyableInterface> K2Node_DynamicCast_AsStructure_Destroyable_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ExecuteDestroyStructure_Success, bool CallFunc_ActorHasTag_ReturnValue_1);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_CreatureAbility_GiantOfferingInteraction(int32 EntryPoint, bool K2Node_Event_bWasCancelled);
};

}


