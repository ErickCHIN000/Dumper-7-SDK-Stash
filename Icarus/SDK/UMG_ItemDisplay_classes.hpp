#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x288 - 0x260)
// WidgetBlueprintGeneratedClass UMG_ItemDisplay.UMG_ItemDisplay_C
class UUMG_ItemDisplay_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Icon;                                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 Item;                                              // 0x270(0x18)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_ItemDisplay_C* GetDefaultObj();

	void Setup(const struct FItemsStaticRowHandle& Item, const struct FItemableRowHandle& Itemable, TSoftObjectPtr<class UTexture2D> Temp_wildcard_Variable, const struct FItemableData& CallFunc_GetItemableStruct_Itemable, enum class EValid CallFunc_GetItemableStruct_Paths, bool CallFunc_IsRowHandleValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData& K2Node_MakeStruct_ItemData, TSoftObjectPtr<class UTexture2D> CallFunc_GetItemIcon_Icon, class UUMG_ItemPopup_C* CallFunc_Create_ReturnValue, bool CallFunc_Show_for_Item_Shown);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UMG_ItemDisplay(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


