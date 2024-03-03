#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x380 - 0x260)
// WidgetBlueprintGeneratedClass WB_CraftingItem.WB_CraftingItem_C
class UWB_CraftingItem_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                      CraftAnim;                                         // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Anim_img;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_0;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               ItemButton;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_373;                                     // 0x288(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FS_ItemData                           Item_Data;                                         // 0x290(0xE8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	class UAC_Inventory_C*                       Inventory_Component;                               // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_CraftingItem_C* GetDefaultObj();

	class FText Get_Quantity(bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_48_OnButtonHoverEvent__DelegateSignature();
	void Event_Craft();
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_WB_CraftingItem(int32 EntryPoint, class UWB_ToolTip_C* CallFunc_Create_ReturnValue, class UAC_Crafting_C* CallFunc_Get_AC_Crafting_AC_Crafting, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory);
};

}


