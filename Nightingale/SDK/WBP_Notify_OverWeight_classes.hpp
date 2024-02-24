#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0x369 - 0x340)
// WidgetBlueprintGeneratedClass WBP_Notify_OverWeight.WBP_Notify_OverWeight_C
class UWBP_Notify_OverWeight_C : public UNWXUserWidget
{
public:
	class UWidgetAnimation*                      Anim_FlashEmphasize;                               // 0x340(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Fade;                                         // 0x348(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_0;                                          // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_Encumbered;                                    // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_Character_C*                       ActiveCharacter;                                   // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         CachedState;                                       // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Notify_OverWeight_C* GetDefaultObj();

	void OnPawnUnpossessed(class APawn* OldPawn, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void OnPawnPossessedAndReady(class APawn* NewPawn, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void SetVisibleWithAnimation(bool IsVisible, bool Temp_bool_Variable, double Temp_real_Variable, double Temp_real_Variable_1, double K2Node_Select_Default, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast);
	void Update(bool NewState, const struct FGameplayTag& Temp_struct_Variable, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_1, double Temp_real_Variable, double Temp_real_Variable_1, const struct FGameplayTag& Temp_struct_Variable_1, const struct FGameplayTag& Temp_struct_Variable_2, bool CallFunc_IsStateActive_ReturnValue, bool CallFunc_IsStateActive_ReturnValue_1, class FText K2Node_Select_Default, double K2Node_Select_Default_1, bool CallFunc_IsStateActive_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast);
};

}


