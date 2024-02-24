#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x158 (0x388 - 0x230)
// WidgetBlueprintGeneratedClass ItemDragImage.ItemDragImage_C
class UItemDragImage_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_BossGlimpse;                                 // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_ItemArt;                                     // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FInventoryItem                        DraggedItem;                                       // 0x248(0x132)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_1D32[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_Equipment_InventoryTab_C*          InventoryScreenWidget;                             // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UItemDragImage_C* GetDefaultObj();

	void SetBossGlimpse(int32 Local_Index, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, bool K2Node_SwitchName_CmpSuccess, float CallFunc_RandomFloatInRange_ReturnValue_2, const struct FLinearColor& Temp_struct_Variable_4, int32 Temp_int_Variable, const struct FLinearColor& K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void SetDraggedItem(const struct FInventoryItem& Item);
	void Destruct();
	void ExecuteUbergraph_ItemDragImage(int32 EntryPoint, const struct FInventoryItem& K2Node_CustomEvent_Item);
};

}


