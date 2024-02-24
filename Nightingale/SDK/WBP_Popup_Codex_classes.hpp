#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x15A (0x612 - 0x4B8)
// WidgetBlueprintGeneratedClass WBP_Popup_Codex.WBP_Popup_Codex_C
class UWBP_Popup_Codex_C : public UNWXCommonWindowWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_appear;                                       // 0x4C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Disappear;                                         // 0x4C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_1;                                     // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_Close;                                         // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               TemplateHolder;                                    // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            Button1_Clicked;                                   // 0x4E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Button2_Clicked;                                   // 0x4F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Button3_Clicked;                                   // 0x508(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FCodexEntry                           Codex_Entry;                                       // 0x518(0xF0)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FGameplayTag                          Subentry_Tag;                                      // 0x608(0x8)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Show_All_Unlocked_Subentries;                      // 0x610(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsInGuidebook;                                     // 0x611(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Popup_Codex_C* GetDefaultObj();

	void InitializeDesignerPreview(class UWidgetSwitcher* CallFunc_SpawnObject_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UWBP_Popup_Codex_Template_TarotReading_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1);
	class UWidget* BP_GetDesiredFocusTarget();
	class UWidgetAnimation* GetOpenAnimation();
	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UWBP_Popup_Codex_TemplateBase_C* K2Node_DynamicCast_AsWBP_Popup_Codex_Template_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_IntInt_ReturnValue, const struct FEventReply& CallFunc_OnAnalogMoved_EventReplyStructure);
	class UWidget* GetDefaultFocusWidget();
	void PlayOutroAnimationAndClose(class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UWBP_Popup_Codex_TemplateBase_C* K2Node_DynamicCast_AsWBP_Popup_Codex_Template_Base, bool K2Node_DynamicCast_bSuccess);
	struct FEventReply OnInputCancel(const struct FEventReply& CallFunc_Handled_ReturnValue);
	class UWidgetAnimation* GetCloseAnimation();
	void Setup_Template(class UWBP_Popup_Codex_TemplateBase_C* NewLocalVar, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<struct FDataTableRowHandle>& CallFunc_GetDataTableRowHandles_RowHandles, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_CodexTemplateMapping& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsWBP_Popup_Codex_Template_Base, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UWBP_Popup_Codex_TemplateBase_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void Construct();
	void BndEvt__WBP_Popup_Codex_CBU_Close_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_Popup_Codex(int32 EntryPoint, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class FText K2Node_Select_Default);
	void Button3_Clicked__DelegateSignature();
	void Button2_Clicked__DelegateSignature();
	void Button1_Clicked__DelegateSignature();
};

}


