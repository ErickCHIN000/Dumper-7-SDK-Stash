#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF2 (0x432 - 0x340)
// WidgetBlueprintGeneratedClass WBP_Dialogue_Reply.WBP_Dialogue_Reply_C
class UWBP_Dialogue_Reply_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               ButtonReply;                                       // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   GamepadIconAction;                                 // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_FocusHighlight;                                // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_pip;                                           // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RichTextBlock_64;                                  // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_reply;                                         // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DialogueBase_C*                   OwnerWidget;                                       // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UDialogueNodeBase*                     ReplyNode;                                         // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsSelected;                                        // 0x388(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4081[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          TextColour_Dark;                                   // 0x38C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                          TextColour_Light;                                  // 0x39C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_408A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            LaunchMenu;                                        // 0x3B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  MenuText;                                          // 0x3C0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         SimulatedClick;                                    // 0x3D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4091[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             QuestionMarkSoftRef;                               // 0x3E0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             ExclamationSoftRef;                                // 0x408(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	enum class E_ui_NPCMenus                     Menu;                                              // 0x430(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         OpensSubMenu;                                      // 0x431(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Dialogue_Reply_C* GetDefaultObj();

	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, bool CallFunc_IsValid_ReturnValue);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent, bool CallFunc_IsUsingGamepad_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void TryTurnInTaskCosmetics(const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UDialogueNodeTurnInTask* K2Node_DynamicCast_AsDialogue_Node_Turn_in_Task, bool K2Node_DynamicCast_bSuccess, const struct FQuest& CallFunc_GetQuestDataFromQuestAssetReference_OutData, bool CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue);
	void TryAcceptQuestCosmetics(const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UDialogueNodeAcceptQuest* K2Node_DynamicCast_AsDialogue_Node_Accept_Quest, bool K2Node_DynamicCast_bSuccess, const struct FQuest& CallFunc_GetQuestDataFromQuestAssetReference_OutData, bool CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue);
	void TryPlayerCosmetics(class UTexture2D* Temp_object_Variable, enum class EDialogueMarkup Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, class UTexture2D* Temp_object_Variable_1, enum class EDialogueMarkup Temp_byte_Variable_3, class UDialogueNodePlayer* K2Node_DynamicCast_AsDialogue_Node_Player, bool K2Node_DynamicCast_bSuccess, class UTexture2D* K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1);
	class UWidget* GetDefaultFocusWidget(class UWidget* CallFunc_GetDefaultFocusWidget_ReturnValue);
	void SetDefaultTextColour(const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void SetTextColour(const struct FLinearColor& Specified_Color, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_OnFocusReceived_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FEventReply& CallFunc_Handled_ReturnValue);
	struct FSlateColor GetTextColorAndOpacity(bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void SimulateClick();
	void SimulateHover();
	void BndEvt__Button_52_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ButtonReply_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ButtonReply_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_Dialogue_Reply(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime, class UPanelWidget* CallFunc_GetParent_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1);
	void LaunchMenu__DelegateSignature(enum class E_ui_NPCMenus NPC_Menu, class FText Menu_Text);
};

}


