#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B0 (0x648 - 0x498)
// WidgetBlueprintGeneratedClass WBP_HUD_ConsumableToolbarEntry.WBP_HUD_ConsumableToolbarEntry_C
class UWBP_HUD_ConsumableToolbarEntry_C : public UWBP_HUD_ToolbarEntry_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x498(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAbilitySystemComponent*               ASC;                                               // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectQuery                  GEQuery;                                           // 0x4A8(0x188)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                          CooldownBarColor;                                  // 0x630(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNWXToolbarComponent*                  ToolBar;                                           // 0x640(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_HUD_ConsumableToolbarEntry_C* GetDefaultObj();

	void UpdateUISelectionState(bool IsSelected);
	void UpdateIconTexture(bool bIsEmpty, bool Temp_bool_Variable, class UTexture* Temp_object_Variable, double CallFunc_SelectFloat_ReturnValue, TScriptInterface<class IToolbarSlotEntryObjectInterface> CallFunc_GetSlotEntryObject_SlotEntryObject, TScriptInterface<class IToolbarArrangementInterface> CallFunc_IsSelectedSlotEmpty_self_CastInput, bool CallFunc_IsSelectedSlotEmpty_ReturnValue, class UTexture2D* CallFunc_GetIconTexture_ReturnValue, class UTexture* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void UpdateCooldownBar(double Percent, const struct FActiveGameplayEffectHandle& Handle, float CallFunc_GetActiveGameplayEffectRemainingDuration_ReturnValue, float CallFunc_GetActiveGameplayEffectTotalDuration_ReturnValue, double CallFunc_SafeDivide_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_GetActiveEffects_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue, float CallFunc_SetPercent_InPercent_ImplicitCast, double CallFunc_SafeDivide_A_ImplicitCast, double CallFunc_SafeDivide_B_ImplicitCast);
	void OnPawnPossessedAndReady(class APawn* NewPawn);
	void OnPawnUnpossessed(class APawn* OldPawn);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void ExecuteUbergraph_WBP_HUD_ConsumableToolbarEntry(int32 EntryPoint, class APawn* K2Node_Event_NewPawn, class APawn* K2Node_Event_OldPawn, class AController* CallFunc_GetController_ReturnValue, TScriptInterface<class IToolbarAccessInterface> K2Node_DynamicCast_AsToolbar_Access_Interface, bool K2Node_DynamicCast_bSuccess, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, TScriptInterface<class IToolbarArrangementInterface> CallFunc_FindToolbarArrangement_BP_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, class UNWXToolbarComponent* K2Node_DynamicCast_AsNWXToolbar_Component, bool K2Node_DynamicCast_bSuccess_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_IsValid_ReturnValue, const struct FGameplayEffectQuery& K2Node_MakeStruct_GameplayEffectQuery);
};

}


