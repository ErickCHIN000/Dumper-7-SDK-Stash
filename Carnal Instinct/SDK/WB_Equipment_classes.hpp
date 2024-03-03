#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC1 (0x321 - 0x260)
// WidgetBlueprintGeneratedClass WB_Equipment.WB_Equipment_C
class UWB_Equipment_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWB_EquipmentSlot_C*                   Arrows_Slot;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_EquipmentSlot_C*                   Boots;                                             // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_EquipmentSlot_C*                   Bow_Slot;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Bag;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_EquipmentSlot_C*                   ChestBra;                                          // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_EquipmentSlot_C*                   Dong_Cosmetic;                                     // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_EquipmentSlot_C*                   Dong_Slot;                                         // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_EquipmentSlot_C*                   Head_Cosmetic_Slot;                                // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_EquipmentSlot_C*                   Head_Slot;                                         // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Background;                                  // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Border;                                      // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Glow;                                        // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_EquipmentSlot_C*                   LegsSkirt;                                         // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_EquipmentSlot_C*                   Outfit_Cosmetic_Slot;                              // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_EquipmentSlot_C*                   Outfit_Slot;                                       // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_EquipmentSlot_C*                   OutfitClothes;                                     // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_EquipmentSlot_C*                   Pot1_Slot;                                         // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_EquipmentSlot_C*                   Pot2_Slot;                                         // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_EquipmentSlot_C*                   Pot3_Slot;                                         // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_EquipmentSlot_C*                   Pot4_Slot;                                         // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_EquipmentSlot_C*                   Shield_Slot;                                       // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_EquipmentSlot_C*                   Weapon_Slot;                                       // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAC_Inventory_C*                       Inventory_Component;                               // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_ItemSlot                        Last_Focused_Slot;                                 // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_Equipment_C* GetDefaultObj();

	void Set_Focus_to_Slot(enum class E_ItemSlot Slot, enum class E_ItemSlot Temp_byte_Variable, class UWB_EquipmentSlot_C* Temp_object_Variable, class UWB_EquipmentSlot_C* Temp_object_Variable_1, class UWB_EquipmentSlot_C* Temp_object_Variable_2, class UWB_EquipmentSlot_C* Temp_object_Variable_3, class UWB_EquipmentSlot_C* Temp_object_Variable_4, class UWB_EquipmentSlot_C* Temp_object_Variable_5, class UWB_EquipmentSlot_C* Temp_object_Variable_6, class UWB_EquipmentSlot_C* Temp_object_Variable_7, class UWB_EquipmentSlot_C* Temp_object_Variable_8, class UWB_EquipmentSlot_C* Temp_object_Variable_9, class UWB_EquipmentSlot_C* Temp_object_Variable_10, class UWB_EquipmentSlot_C* Temp_object_Variable_11, class UWB_EquipmentSlot_C* Temp_object_Variable_12, class UWB_EquipmentSlot_C* Temp_object_Variable_13, class UWB_EquipmentSlot_C* Temp_object_Variable_14, class UWB_EquipmentSlot_C* Temp_object_Variable_15, class UWB_EquipmentSlot_C* Temp_object_Variable_16, class UWB_EquipmentSlot_C* Temp_object_Variable_17, class UWB_EquipmentSlot_C* Temp_object_Variable_18, class UWB_EquipmentSlot_C* Temp_object_Variable_19, class UWB_EquipmentSlot_C* K2Node_Select_Default, enum class E_WidgetType CallFunc_Get_Focused_Widget_WidgetType, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	struct FLinearColor Get_UI_Border_Color(bool CallFunc_IsValid_ReturnValue);
	void Set_Equipment_Slot(class UWB_EquipmentSlot_C* Slot, const struct FS_ItemData& Item_Data, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle);
	void Construct();
	void Create_Equipment();
	void BndEvt__WB_Equipment_Button_Bag_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WB_Equipment_Button_Bag_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WB_Equipment_Button_Bag_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_WB_Equipment(int32 EntryPoint, class UWB_EquipmentSlot_C* Temp_object_Variable, int32 Temp_int_Array_Index_Variable, class UWB_EquipmentSlot_C* Temp_object_Variable_1, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, int32 Temp_int_Loop_Counter_Variable, const struct FS_ItemData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FS_ItemData& K2Node_SetFieldsInStruct_StructOut, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, enum class E_ItemSlot Temp_byte_Variable, class UWB_EquipmentSlot_C* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue);
};

}


