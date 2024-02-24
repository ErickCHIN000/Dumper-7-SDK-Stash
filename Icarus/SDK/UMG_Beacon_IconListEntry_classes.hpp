#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x278 - 0x260)
// WidgetBlueprintGeneratedClass UMG_Beacon_IconListEntry.UMG_Beacon_IconListEntry_C
class UUMG_Beacon_IconListEntry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_HoverIcon;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_ItemIcon;                                    // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_Beacon_IconListEntry_C* GetDefaultObj();

	struct FSlateBrush Get_Image_HoverIcon_Brush_0();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void Construct();
	void BP_OnEntryReleased();
	void SetVisuallySelected(bool IsSelected);
	void ExecuteUbergraph_UMG_Beacon_IconListEntry(int32 EntryPoint, bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, bool K2Node_Event_bIsExpanded, class UObject* K2Node_Event_ListItemObject, class UTextureListItem* K2Node_DynamicCast_AsTexture_List_Item, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_bIsSelected, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_CustomEvent_IsSelected, class UMaterialInterface* K2Node_Select_Default);
};

}


