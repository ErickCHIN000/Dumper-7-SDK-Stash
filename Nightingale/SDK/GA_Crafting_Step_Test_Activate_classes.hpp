#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x591 - 0x570)
// BlueprintGeneratedClass GA_Crafting_Step_Test_Activate.GA_Crafting_Step_Test_Activate_C
class UGA_Crafting_Step_Test_Activate_C : public UGA_Crafting_Step_Activation_Base_C
{
public:
	struct FDynamicTypedStructs                  StepDefaultData;                                   // 0x570(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                TestData;                                          // 0x580(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         AutoAdvance;                                       // 0x590(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Crafting_Step_Test_Activate_C* GetDefaultObj();

	void OnPostActivation(bool* Success, bool CallFunc_OnPostActivation_Success, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromCraftingStep_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, TScriptInterface<class IInteractionInterface> K2Node_DynamicCast_AsInteraction_Interface, bool K2Node_DynamicCast_bSuccess);
	void GenerateStepData(bool* Success, const struct FDynamicTypedStructs& CurrentData);
	void InitializeAbilityFromEvent(const struct FGameplayEventData& EventData, bool* Success, bool InitializeSuccess, bool CallFunc_InitializeAbilityFromEvent_Success, const struct FS_Crafting_Step_Test& CallFunc_GetStructByType_OutStruct, bool CallFunc_GetStructByType_ReturnValue, const struct FS_Crafting_Step_Definition& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
};

}


