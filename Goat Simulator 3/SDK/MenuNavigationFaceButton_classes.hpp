#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB1 (0x3B9 - 0x308)
// WidgetBlueprintGeneratedClass MenuNavigationFaceButton.MenuNavigationFaceButton_C
class UMenuNavigationFaceButton_C : public UGGUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x308(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Bump;                                              // 0x310(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               Button;                                            // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ButtonDescriptionLabel;                            // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGGRichTextBlock*                      InputText;                                         // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                StarImage;                                         // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              StarSizeBox;                                       // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  ButtonText;                                        // 0x340(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  ButtonDescription;                                 // 0x358(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FName                                  ButtonAction;                                      // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FActionHintStruct                     ActionHint;                                        // 0x378(0x40)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         ShowInteractableFlag;                              // 0x3B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UMenuNavigationFaceButton_C* GetDefaultObj();

	void GetActionHint(struct FActionHintStruct* ActionHint);
	void UpdateButtonEffect(bool Enable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void UpdateButtonDescription(class FText NewText);
	void UpdateButtonText(const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void UpdateHint(const struct FActionHintStruct& Hint);
	void OnSetIsEnabled(bool bInIsEnabled);
	void ShowInteractable(bool Enabled);
	void ExecuteUbergraph_MenuNavigationFaceButton(int32 EntryPoint, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool Temp_bool_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& Temp_struct_Variable_3, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool K2Node_Event_IsDesignTime, const struct FActionHintStruct& K2Node_CustomEvent_Hint, bool K2Node_Event_bInIsEnabled, const struct FLinearColor& K2Node_Select_Default_1, const struct FMargin& K2Node_MakeStruct_Margin, const class FString& CallFunc_GetObjectName_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FMargin& K2Node_Select_Default_2, bool K2Node_CustomEvent_Enabled, const struct FMargin& K2Node_MakeStruct_Margin_2, const struct FMargin& K2Node_Select_Default_3);
};

}


