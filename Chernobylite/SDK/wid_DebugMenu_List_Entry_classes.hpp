#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2A0 - 0x260)
// WidgetBlueprintGeneratedClass wid_DebugMenu_List_Entry.wid_DebugMenu_List_Entry_C
class UWid_DebugMenu_List_Entry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UTextBlock*                            TextName;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_1CB6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_MainMenu_Debug_C*                 Owner;                                             // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EEventMap                         LevelName;                                         // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_1CBD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Item;                                              // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UListView*                             List;                                              // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                  EventName;                                         // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_DebugMenu_List_Entry_C* GetDefaultObj();

	void SetText(enum class EEventMap Enumerator, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void Select(bool Select, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void ExecuteUbergraph_wid_DebugMenu_List_Entry(int32 EntryPoint, class UWid_DebugMenu_List_Entry_C* K2Node_DynamicCast_AsWid_Debug_Menu_List_Entry, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UObject* K2Node_Event_ListItemObject, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool K2Node_Event_bIsSelected, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_Select_Default, bool K2Node_Event_IsDesignTime, bool K2Node_Event_bIsExpanded);
};

}


