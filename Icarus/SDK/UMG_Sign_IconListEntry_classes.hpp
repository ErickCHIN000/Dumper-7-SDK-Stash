#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x278 - 0x260)
// WidgetBlueprintGeneratedClass UMG_Sign_IconListEntry.UMG_Sign_IconListEntry_C
class UUMG_Sign_IconListEntry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_HoverIcon;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_ItemIcon;                                    // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_Sign_IconListEntry_C* GetDefaultObj();

	struct FSlateBrush Get_Image_HoverIcon_Brush_0();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void Construct();
	void BP_OnEntryReleased();
	void SetVisuallySelected(bool IsSelected);
	void ExecuteUbergraph_UMG_Sign_IconListEntry(int32 EntryPoint, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, bool K2Node_Event_bIsExpanded, class UObject* K2Node_Event_ListItemObject, class USignIconListItem* K2Node_DynamicCast_AsSign_Icon_List_Item, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_bIsSelected, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FItemableData& CallFunc_GetItemableStruct_Itemable, enum class EValid CallFunc_GetItemableStruct_Paths, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_Variable, bool K2Node_CustomEvent_IsSelected, class UMaterialInterface* K2Node_Select_Default, TScriptInterface<class IUserListEntry> CallFunc_IsListItemSelected_UserListEntry_CastInput, bool CallFunc_IsListItemSelected_ReturnValue);
};

}


