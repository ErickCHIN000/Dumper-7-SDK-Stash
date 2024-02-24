#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x51 (0x2B1 - 0x260)
// WidgetBlueprintGeneratedClass UMG_FieldGuide_List_Category.UMG_FieldGuide_List_Category_C
class UUMG_FieldGuide_List_Category_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               CategoryButton;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          List;                                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Name;                                              // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ButtonIcon_C*                     UMG_ButtonIcon;                                    // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  CategoryText;                                      // 0x288(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_            Clicked;                                           // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Selected;                                          // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUMG_FieldGuide_List_Category_C* GetDefaultObj();

	void ClearChildren();
	void UpdateCategoryButtonImage(bool Temp_bool_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, bool CallFunc_IsVisible_ReturnValue, class UTexture2D* K2Node_Select_Default);
	void AddWidget(class UUserWidget* Widget, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__UMG_Bestiary_Category_UMG_ButtonIcon_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
	void BndEvt__UMG_Bestiary_Category_CategoryButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UMG_Bestiary_Category_CategoryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UMG_Bestiary_Category_CategoryButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void ToggleExpand();
	void ClickedInternal();
	void SetSelected(bool Selected);
	void ClearSelection();
	void Expand();
	void ExecuteUbergraph_UMG_FieldGuide_List_Category(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, int32 Temp_int_Array_Index_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, bool CallFunc_IsVisible_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool K2Node_CustomEvent_Selected, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor_4, const struct FSlateColor& K2Node_MakeStruct_SlateColor_5, bool CallFunc_NotEqual_BoolBool_ReturnValue, const struct FSlateColor& K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateColor& K2Node_Select_Default_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UUMG_FieldGuide_List_Button_Item_C* K2Node_DynamicCast_AsUMG_Field_Guide_List_Button_Item, bool K2Node_DynamicCast_bSuccess, class UUMG_FieldGuide_List_Button_Bestiary_C* K2Node_DynamicCast_AsUMG_Field_Guide_List_Button_Bestiary, bool K2Node_DynamicCast_bSuccess_1, class UUMG_FieldGuide_List_Button_Fish_C* K2Node_DynamicCast_AsUMG_Field_Guide_List_Button_Fish, bool K2Node_DynamicCast_bSuccess_2, class UUMG_FieldGuide_List_Category_C* K2Node_DynamicCast_AsUMG_Field_Guide_List_Category, bool K2Node_DynamicCast_bSuccess_3, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_2, int32 CallFunc_Add_IntInt_ReturnValue);
	void Clicked__DelegateSignature();
};

}


