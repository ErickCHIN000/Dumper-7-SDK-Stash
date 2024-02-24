#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x140 (0x3A0 - 0x260)
// WidgetBlueprintGeneratedClass UMG_ChatboxEntry.UMG_ChatboxEntry_C
class UUMG_ChatboxEntry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Avatar;                                            // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Message;                                           // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        PlayerInfo;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                      PlayerInfoInvalidationBox;                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PlayerName;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ChatboxItem_C*                     ChatboxItem;                                       // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                        PlayerFont;                                        // 0x298(0x58)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSlateFontInfo                        LocalFont;                                         // 0x2F0(0x58)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSlateFontInfo                        ServerFont;                                        // 0x348(0x58)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_ChatboxEntry_C* GetDefaultObj();

	void UpdateMessageFont(enum class EChatMessageType MessageType, enum class EChatMessageType Temp_byte_Variable, enum class EChatMessageType Temp_byte_Variable_1, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FSlateFontInfo& K2Node_Select_Default, const struct FLinearColor& K2Node_Select_Default_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void UpdateMessageText(const class FString& Text, class FText CallFunc_Conv_StringToText_ReturnValue);
	void UpdatePlayerInfo(enum class EChatMessageType MessageType, enum class EChatMessageType Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default);
	void Initialise(bool K2Node_SwitchEnum_CmpSuccess, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void PreConstruct(bool IsDesignTime);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void ExecuteUbergraph_UMG_ChatboxEntry(int32 EntryPoint, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, bool K2Node_Event_IsDesignTime, class UObject* K2Node_Event_ListItemObject, class UBP_ChatboxItem_C* K2Node_DynamicCast_AsBP_Chatbox_Item, bool K2Node_DynamicCast_bSuccess);
};

}


