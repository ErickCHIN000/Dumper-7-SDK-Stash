#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x350 - 0x260)
// WidgetBlueprintGeneratedClass wid_MainMenu_graphics_Option.wid_MainMenu_graphics_Option_C
class UWid_MainMenu_graphics_Option_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UTextBlock*                            DescriptionText;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               NextButton;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                NextImage;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                NextImageHighlight;                                // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_3;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               PreviousButton;                                    // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PreviousImage;                                     // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PreviousImageHighlight;                            // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               SelectionButton;                                   // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SelectionImage;                                    // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ValueText;                                         // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Title;                                             // 0x2C0(0x18)(Edit, BlueprintVisible)
	FMulticastInlineDelegateProperty_            ValChangedPlus;                                    // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            ValChangedMinus;                                   // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         TwoLines;                                          // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsSelected;                                        // 0x2F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E5E[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EntryIndex;                                        // 0x2FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISelectableEntryOwnerInterface_C> SelectableEntryOwner;                              // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class FText>                          Values;                                            // 0x310(0x10)(Edit, BlueprintVisible)
	int32                                        CurrentlySelected;                                 // 0x320(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRollAround;                                      // 0x324(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E6C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<bool>                                 ValuesState;                                       // 0x338(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FIntPoint                             Clamp;                                             // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_MainMenu_graphics_Option_C* GetDefaultObj();

	void GetEntryIndex(int32* EntryIndex);
	void GetClampedValue(int32 Value, bool Roll, int32* Result, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue, int32 CallFunc_Max_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_2, int32 CallFunc_SelectInt_ReturnValue_3);
	void SetArrowsState(class UImage* Normal, class UImage* Highlighted, bool IsHighlighted, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1);
	void SetImageState(class UImage* Image, bool IsDown, bool Temp_bool_Variable, float Temp_float_Variable, class UOverlaySlot* K2Node_DynamicCast_AsOverlay_Slot, bool K2Node_DynamicCast_bSuccess, float Temp_float_Variable_1, float K2Node_Select_Default, const struct FMargin& K2Node_MakeStruct_Margin);
	void InitStyle(class FText CallFunc_GetText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_TrimTrailing_ReturnValue, const class FString& CallFunc_TrimTrailing_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_FormatText_Output);
	void SetValueEnabled(int32 Index, bool IsEnabled, bool SelectNextIfSelected, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_InRange_IntInt_ReturnValue);
	void GetCurrentlySelectedIndex(int32* CurrentlySelected);
	void GetCurrentlySelectedValue();
	void SelectValue(int32 ValueIndex, int32 CallFunc_GetClampedValue_Result, class FText CallFunc_TextToUpper_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const class FString& CallFunc_TrimTrailing_ReturnValue, int32 CallFunc_Clamp_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void SelectPrevious(int32 NewIndex, bool Temp_bool_Variable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_InRange_IntInt_ReturnValue, bool CallFunc_Array_Get_Item, bool CallFunc_Array_Get_Item_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_GetClampedValue_Result, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FDelegateProperty_ Temp_delegate_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_PostEvent_ReturnValue);
	void SelectNext(int32 NewIndex, bool Temp_bool_Variable, FDelegateProperty_ Temp_delegate_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_InRange_IntInt_ReturnValue, bool CallFunc_Array_Get_Item, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, bool CallFunc_Array_Get_Item_1, int32 CallFunc_PostEvent_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_GetClampedValue_Result, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1);
	void SetValues(TArray<class FText>& Values, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SetBoldFont(bool IsFontBold, class FName Temp_name_Variable, class FName Temp_name_Variable_1, bool Temp_bool_Variable, class FName K2Node_Select_Default, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_1);
	void Update_Size(class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_GetSize_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1);
	void Set_Selected(bool NewSelected, bool PlaySoundEffect, FDelegateProperty_ Temp_delegate_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostEvent_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_2);
	void BndEvt__BtnM_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__BtnP_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature();
	void Construct();
	void BndEvt__SelectionButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature();
	void SetSelectableEntryOwner(TScriptInterface<class ISelectableEntryOwnerInterface_C> Owner);
	void Select(bool IsSelected, bool PostSoundEvent);
	void SetEntryIndex(int32 EntryIndex);
	void PreConstruct(bool IsDesignTime);
	void IncrementValue();
	void DecrementValue();
	void DecrementValueReleased();
	void IncrementValueRelesed();
	void BndEvt__PreviousButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__NextButton_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__SelectionButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_wid_MainMenu_graphics_Option(int32 EntryPoint, TScriptInterface<class ISelectableEntryOwnerInterface_C> K2Node_Event_Owner, bool K2Node_Event_IsSelected, bool K2Node_Event_PostSoundEvent, int32 K2Node_Event_EntryIndex, bool K2Node_Event_IsDesignTime);
	void OnValueChanged__DelegateSignature();
	void ValChangedMinus__DelegateSignature();
	void ValChangedPlus__DelegateSignature();
	void Changed__DelegateSignature(bool NewParam);
};

}


