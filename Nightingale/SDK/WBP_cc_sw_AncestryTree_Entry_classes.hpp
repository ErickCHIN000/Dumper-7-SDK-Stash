#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x71 (0x3B9 - 0x348)
// WidgetBlueprintGeneratedClass WBP_cc_sw_AncestryTree_Entry.WBP_cc_sw_AncestryTree_Entry_C
class UWBP_cc_sw_AncestryTree_Entry_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Common_Button_No_Text_C*          CBU_FocusTarget;                                   // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_portrait;                                      // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_0;                                     // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_influence_A;                                   // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_0;                                  // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            AncestrySlotSelected;                              // 0x378(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsEmpty;                                           // 0x388(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D0F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Family_Tree_Index;                                 // 0x38C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   Appearance_Row;                                    // 0x390(0x10)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  RelationtextLabel;                                 // 0x3A0(0x18)(Edit, BlueprintVisible)
	bool                                         ReferenceOnlyMode;                                 // 0x3B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_cc_sw_AncestryTree_Entry_C* GetDefaultObj();

	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget();
	class UWidget* GetTooltipWidget(class FText L_Text_NoRelation, class FText L_Text_Select, class FText L_Text_Add, bool Temp_bool_Variable, class FText Temp_text_Variable, bool Temp_bool_Variable_1, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1);
	void Fill_Slot(const struct FDataTableRowHandle& AppearanceRow);
	void RefreshSlot(float Temp_real_Variable, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, float Temp_real_Variable_1, bool Temp_bool_Variable_2, bool CallFunc_BooleanAND_ReturnValue, int32 K2Node_Select_Default, float K2Node_Select_Default_1, const struct FCharacterAppearance_Preset& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 K2Node_Select_Default_2, bool CallFunc_DoesDataTableRowExist_ReturnValue);
	void ClearSlot();
	void BndEvt__WBP_cc_sw_AncestryTree_Entry_WBP_Common_Button_No_Text_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void Construct();
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void ExecuteUbergraph_WBP_cc_sw_AncestryTree_Entry(int32 EntryPoint, const struct FGameplayTag& CallFunc_SelectedLeftEventTag_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, enum class ECommonInputType CallFunc_GetOwningPlayerInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue);
	void AncestrySlotSelected__DelegateSignature(const struct FDataTableRowHandle& AppearanceRow, int32 FamilyTreeIndex, bool IsEmpty);
};

}


