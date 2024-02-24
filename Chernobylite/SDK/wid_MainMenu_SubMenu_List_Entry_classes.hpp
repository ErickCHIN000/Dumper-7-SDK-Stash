#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x2C8 - 0x260)
// WidgetBlueprintGeneratedClass wid_MainMenu_SubMenu_List_Entry.wid_MainMenu_SubMenu_List_Entry_C
class UWid_MainMenu_SubMenu_List_Entry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UButton*                               ClickableButton;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SelectionImage;                                    // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x280(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                        EntryIndex;                                        // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16CD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ISelectableEntryOwnerInterface_C> SelectableEntryOwner;                              // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	FMulticastInlineDelegateProperty_            EntryClicked;                                      // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UAkAudioEvent*                         ClickEvent;                                        // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_MainMenu_SubMenu_List_Entry_C* GetDefaultObj();

	void GetEntryIndex(int32* EntryIndex);
	void PlayClickEffect(TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_PostEvent_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void ClearClickSelection(const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void GetHoveredText(class FText* Text, const class FString& HoveredText, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, const class FString& CallFunc_Array_Get_Item, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Len_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SetSelected(bool IsSelected, bool PostSoundEvent, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, class FName Temp_name_Variable, class FName Temp_name_Variable_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, int32 K2Node_Select_Default, class FName K2Node_Select_Default_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, float CallFunc_Conv_BoolToFloat_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_PostEvent_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void BndEvt__Button_39_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void SetSelectableEntryOwner(TScriptInterface<class ISelectableEntryOwnerInterface_C> Owner);
	void Select(bool IsSelected, bool PostSoundEvent);
	void SetEntryIndex(int32 EntryIndex);
	void BndEvt__Button_39_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_39_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ClickableButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__ClickableButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
	void DecrementValue();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void IncrementValue();
	void DecrementValueReleased();
	void IncrementValueRelesed();
	void ExecuteUbergraph_wid_MainMenu_SubMenu_List_Entry(int32 EntryPoint, TScriptInterface<class ISelectableEntryOwnerInterface_C> K2Node_Event_Owner, bool K2Node_Event_IsSelected, bool K2Node_Event_PostSoundEvent, int32 K2Node_Event_EntryIndex, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_IsHovered_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, bool K2Node_Event_IsDesignTime);
	void EntryClicked__DelegateSignature(int32 EntryIndex);
};

}


