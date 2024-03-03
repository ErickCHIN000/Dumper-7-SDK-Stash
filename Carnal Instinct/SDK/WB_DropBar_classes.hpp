#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x288 - 0x260)
// WidgetBlueprintGeneratedClass WB_DropBar.WB_DropBar_C
class UWB_DropBar_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBorder*                               Border_0;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Drop;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Drop_img;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAC_Inventory_C*                       Inventory_Component;                               // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_DropBar_C* GetDefaultObj();

	struct FLinearColor Get_UI_Border_Color(bool CallFunc_IsValid_ReturnValue);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, class UDragDrop_ItemData_C* K2Node_DynamicCast_AsDrag_Drop_Item_Data, bool K2Node_DynamicCast_bSuccess, const struct FLinearColor& CallFunc_Get_UI_Border_Color_ReturnValue);
	bool OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, const struct FS_ItemData& Dragged_ItemData, class UDragDrop_ItemData_C* K2Node_DynamicCast_AsDrag_Drop_Item_Data, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void Construct();
	void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void ExecuteUbergraph_WB_DropBar(int32 EntryPoint, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, const struct FPointerEvent& K2Node_Event_PointerEvent, class UDragDropOperation* K2Node_Event_Operation, class UDragDrop_ItemData_C* K2Node_DynamicCast_AsDrag_Drop_Item_Data, bool K2Node_DynamicCast_bSuccess, const struct FLinearColor& CallFunc_Get_UI_Border_Color_ReturnValue, const struct FLinearColor& CallFunc_Get_UI_Border_Color_ReturnValue_1);
};

}


