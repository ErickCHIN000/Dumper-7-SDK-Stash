#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3D0 (0x710 - 0x340)
// WidgetBlueprintGeneratedClass WBP_GridItem_Draggable.WBP_GridItem_Draggable_C
class UWBP_GridItem_Draggable_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Icon;                                              // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                           ImageBrush;                                        // 0x350(0xD0)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FInventoryEntry                       InventoryItemEntry;                                // 0x420(0x2F0)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWBP_GridItem_Draggable_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_WBP_GridItem_Draggable(int32 EntryPoint);
};

}


