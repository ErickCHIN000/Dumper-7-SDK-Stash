#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x208 (0x468 - 0x260)
// WidgetBlueprintGeneratedClass UMG_ReturnedItemEntry.UMG_ReturnedItemEntry_C
class UUMG_ReturnedItemEntry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                ItemIcon;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ItemName;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FItemData                             Item;                                              // 0x278(0x1F0)(Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UUMG_ReturnedItemEntry_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_UMG_ReturnedItemEntry(int32 EntryPoint, enum class EDataValid CallFunc_ItemDataValid_Paths, class FText CallFunc_GetItemName_Name, bool K2Node_SwitchEnum_CmpSuccess, TSoftObjectPtr<class UTexture2D> CallFunc_GetItemIcon_Icon, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess);
};

}


