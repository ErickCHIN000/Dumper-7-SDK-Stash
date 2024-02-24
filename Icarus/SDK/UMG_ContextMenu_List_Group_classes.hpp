#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x280 - 0x260)
// WidgetBlueprintGeneratedClass UMG_ContextMenu_List_Group.UMG_ContextMenu_List_Group_C
class UUMG_ContextMenu_List_Group_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          Divider;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                GroupIcon;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ItemContainer;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_ContextMenu_List_Group_C* GetDefaultObj();

	void SetGroupInfo(const struct FContextMenuGroupType& GroupType, bool ShowDivider);
	void AddItem(class UUserWidget* ItemWidget);
	void ExecuteUbergraph_UMG_ContextMenu_List_Group(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FContextMenuGroupType& K2Node_CustomEvent_GroupType, bool K2Node_CustomEvent_ShowDivider, class UUserWidget* K2Node_CustomEvent_ItemWidget, bool Temp_bool_Variable, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
};

}


