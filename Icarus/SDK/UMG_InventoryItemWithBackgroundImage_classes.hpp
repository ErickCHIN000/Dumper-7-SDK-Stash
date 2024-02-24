#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x278 - 0x260)
// WidgetBlueprintGeneratedClass UMG_InventoryItemWithBackgroundImage.UMG_InventoryItemWithBackgroundImage_C
class UUMG_InventoryItemWithBackgroundImage_C : public UUserWidget
{
public:
	class UImage*                                OverlayImage;                                      // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_InventoryItemSlow_C*              UMG_InventoryItemSlow;                             // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventory*                            Inventory;                                         // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_InventoryItemWithBackgroundImage_C* GetDefaultObj();

	void Initialise(class UInventory* BoundInventory, int32 Location, class UTexture2D* Image);
};

}


