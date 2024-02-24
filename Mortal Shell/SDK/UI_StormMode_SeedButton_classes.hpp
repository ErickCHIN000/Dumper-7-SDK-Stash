#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x41 (0x271 - 0x230)
// WidgetBlueprintGeneratedClass UI_StormMode_SeedButton.UI_StormMode_SeedButton_C
class UUI_StormMode_SeedButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Highlighted;                                  // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               Button_Down;                                       // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_SeedButton;                                 // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Up;                                         // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Number;                                       // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Number;                                            // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_StormMode_Menu_SeedButton_C*       UI_StormMode_Menu_SeedButton;                      // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsActive;                                          // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUI_StormMode_SeedButton_C* GetDefaultObj();

	void IsButtonEnabled(bool* Enabled_);
	void HandleNumber(int32 Value, class FText CallFunc_Conv_IntToText_ReturnValue);
	void GetTextAsIntString(class FString* Number, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void SetHighlighted(bool Highlighted, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void HighlightButton(bool Highlight_);
	void SelectButton(bool Select_);
	void SetParentRef(class UWidget* Parent);
	void UpdateSettingValues(TArray<class FText>& Values);
	void Value_Next();
	void Value_Previous();
	void Value_Reset();
	void UpdateSettingName(class FText Text);
	void ForceSelectButton(bool Select);
	void EnableOrDisableButton(bool Enable);
	void NavVertical(int32 Delta);
	void NavHorizontal(int32 Delta);
	void OverrideCurrentValue(int32 Index);
	void UpdateIndexes(TArray<int32>& Indexes);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_Up_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Down_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Up_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Down_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_SeedButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void DeactivateButton();
	void ActivateButton();
	void ExecuteUbergraph_UI_StormMode_SeedButton(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_Event_Highlight_, bool K2Node_Event_Select_, class UWidget* K2Node_Event_Parent, TArray<class FText>& K2Node_Event_Values, class FText K2Node_Event_Text, bool K2Node_Event_Select, bool K2Node_Event_Enable, int32 K2Node_Event_Delta_1, int32 K2Node_Event_Delta, int32 K2Node_Event_Index, TArray<int32>& K2Node_Event_Indexes, bool K2Node_Event_IsDesignTime, class FText CallFunc_Conv_IntToText_ReturnValue);
};

}


