#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x3B8 - 0x360)
// WidgetBlueprintGeneratedClass WBP_GuideBook_DetailPane_Codex.WBP_GuideBook_DetailPane_Codex_C
class UWBP_GuideBook_DetailPane_Codex_C : public UNWXGuidebookDetailPane
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Appear;                                            // 0x368(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_Read;                                          // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_card;                                          // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        Rich_txt_title;                                    // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        Rtxt_body;                                         // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            Scrollbox_description;                             // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_subtitle;                                      // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_SurTitle;                                      // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnEntryPopupUpdated;                               // 0x3A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_GuideBook_DetailPane_Codex_C* GetDefaultObj();

	void OnExecuteCategoryOperation(class UCodexTrackerComponent* LCodexTracker, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UCodexTrackerComponent* CallFunc_GetComponentByClass_ReturnValue, class UWBP_Popup_Codex_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_MenuDataEntry_Codex_C* K2Node_DynamicCast_AsBP_Menu_Data_Entry_Codex, bool K2Node_DynamicCast_bSuccess, class UCodexBaseDataAsset* CallFunc_GetCodexDataAsset_CodexDataAsset, TScriptInterface<class ICodexTrackerInterface> CallFunc_GetCodexEntry_self_CastInput, const struct FCodexEntry& CallFunc_GetCodexEntry_OutCodexEntry, bool CallFunc_GetCodexEntry_ReturnValue);
	void OnPopupClosed(class UNWXCommonWindowWidget* Window, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void UpdateCosmetics(class UCodexBaseDataAsset* CodexDataAsset, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_GetImage_IsValidReference, TSoftObjectPtr<class UTexture2D> CallFunc_GetImage_EntryImage, class UBP_MenuDataEntry_Codex_C* K2Node_DynamicCast_AsBP_Menu_Data_Entry_Codex, bool K2Node_DynamicCast_bSuccess, class UCodexBaseDataAsset* CallFunc_GetCodexDataAsset_CodexDataAsset, class FText CallFunc_Get_Codex_Subentries_In_Guidebook_Codex_Subentry_Text, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_TextIsEmpty_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_TextIsEmpty_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default_2, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState);
	void ResetCosmetics();
	void Construct();
	void Destruct();
	void BndEvt__WBP_GuideBook_DetailPane_Codex_CBU_Read_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_GuideBook_DetailPane_Codex(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button);
	void OnEntryPopupUpdated__DelegateSignature(bool IsOpening);
};

}


