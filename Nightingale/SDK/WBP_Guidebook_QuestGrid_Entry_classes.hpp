#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x148 (0x490 - 0x348)
// WidgetBlueprintGeneratedClass WBP_Guidebook_QuestGrid_Entry.WBP_Guidebook_QuestGrid_Entry_C
class UWBP_Guidebook_QuestGrid_Entry_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_Color;                                      // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_No_Text_C*          CBU_Select;                                        // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_SelectedState;                             // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_objectiveListView_Name;                        // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            GuideBookQuestSelected;                            // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            GuideBookQuestHovered;                             // 0x380(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FOngoingTaskProgress                  TaskProgress;                                      // 0x390(0xB0)(Edit, BlueprintVisible, ExposeOnSpawn)
	enum class E_Contract_StateType              ContractState;                                     // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsSelected;                                        // 0x441(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_657C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           SelectedColor;                                     // 0x444(0x14)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           UnselectedColor;                                   // 0x458(0x14)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_6584[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            GuideBookQuestTrackingChanged;                     // 0x470(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            GuideBookQuestUnselected;                          // 0x480(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_Guidebook_QuestGrid_Entry_C* GetDefaultObj();

	void SetBuildBookSelectedWidgetEntry(const struct FOngoingTaskProgress& TaskProgress, enum class E_Contract_StateType State, class UBP_GuideBookComponent_C* CallFunc_GetLocalPlayerGuideBookComponent_GuideBook);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_Not_PreBool_ReturnValue);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	class UWidget* GetDefaultFocusWidget();
	void Initialize(const struct FQuestPresentationData& CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData, bool CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue);
	void Construct();
	void Destruct();
	void BndEvt__WBP_Guidebook_QuestGrid_Entry_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Guidebook_QuestGrid_Entry_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Guidebook_QuestGrid_Entry_CBU_Select_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_Guidebook_QuestGrid_Entry(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, bool CallFunc_IsUsingGamepad_ReturnValue);
	void GuideBookQuestUnselected__DelegateSignature();
	void GuideBookQuestTrackingChanged__DelegateSignature(const struct FOngoingTaskProgress& TaskProgress, enum class E_Contract_StateType State);
	void GuideBookQuestHovered__DelegateSignature(bool Hovered, const struct FOngoingTaskProgress& TaskProgress, enum class E_Contract_StateType State);
	void GuideBookQuestSelected__DelegateSignature(const struct FOngoingTaskProgress& TaskProgress, enum class E_Contract_StateType State);
};

}


