#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x2C8 - 0x260)
// WidgetBlueprintGeneratedClass wid_menu_Benchmark_button.wid_menu_Benchmark_button_C
class UWid_menu_Benchmark_button_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UButton*                               Btn;                                               // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text;                                              // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            BtnClicked;                                        // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  BntText;                                           // 0x298(0x18)(Edit, BlueprintVisible)
	int32                                        EntryIndex;                                        // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_685[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ISelectableEntryOwnerInterface_C> SelectableEntryOwner;                              // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_menu_Benchmark_button_C* GetDefaultObj();

	void GetEntryIndex(int32* EntryIndex);
	void PlayClickEffect(TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const struct FSlateColor& K2Node_MakeStruct_SlateColor, int32 CallFunc_PostEvent_ReturnValue);
	void SetSelected(bool New_Selected, bool PlaySoundEffect, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, float K2Node_Select_Default, int32 CallFunc_PostEvent_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void DecrementValue();
	void IncrementValueRelesed();
	void DecrementValueReleased();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void SetSelectableEntryOwner(TScriptInterface<class ISelectableEntryOwnerInterface_C> Owner);
	void Select(bool IsSelected, bool PostSoundEvent);
	void SetEntryIndex(int32 EntryIndex);
	void IncrementValue();
	void BndEvt__Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Btn_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
	void Triggered_By_Keyboard();
	void ExecuteUbergraph_wid_menu_Benchmark_button(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class FText CallFunc_TextToUpper_ReturnValue, TScriptInterface<class ISelectableEntryOwnerInterface_C> K2Node_Event_Owner, bool K2Node_Event_IsSelected, bool K2Node_Event_PostSoundEvent, int32 K2Node_Event_EntryIndex, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_IsPressed_ReturnValue);
	void BtnClicked__DelegateSignature();
};

}


