#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x400 - 0x340)
// WidgetBlueprintGeneratedClass WBP_sw_LoadoutSlots.WBP_sw_LoadoutSlots_C
class UWBP_sw_LoadoutSlots_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_sw_InventoryEquipSlot_C*          Slot_Back;                                         // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_sw_InventoryEquipSlot_C*          Slot_Bottom;                                       // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_sw_InventoryEquipSlot_C*          Slot_Gear;                                         // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_sw_InventoryEquipSlot_C*          Slot_Gloves;                                       // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_sw_InventoryEquipSlot_C*          Slot_Hat;                                          // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_sw_InventoryEquipSlot_C*          Slot_shoes;                                        // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_sw_InventoryEquipSlot_C*          Slot_Top;                                          // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_sw_CombinedCharacterStat_Primary_C* WBP_sw_CombinedCharacterStat_Primary;              // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_sw_InventoryEquipSlot_C*>  Slots;                                             // 0x388(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_            LoadoutSlotDragDropped;                            // 0x398(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UBP_LoadoutComponent_C*                LoadoutComponent;                                  // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            LoadoutSlotDrag_Cancelled;                         // 0x3B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            LoadoutSlotDrag_Started;                           // 0x3C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            MouseButtonUp;                                     // 0x3D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            RightClickContextMenuEvent;                        // 0x3E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnLoadoutSlotHovered;                              // 0x3F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_sw_LoadoutSlots_C* GetDefaultObj();

	void RefreshSlot(enum class ELoadoutSlotType SlotType, class AEquippableItem* Item, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWBP_sw_InventoryEquipSlot_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ELoadoutSlotType CallFunc_GetSlotType_LoadoutSlotType, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void InitializeLoadoutSlots(class UBP_LoadoutComponent_C* LoadoutComp, TArray<class UWBP_sw_InventoryEquipSlot_C*>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void HighlightAppropriateSlot(enum class ELoadoutSlotType SlotType, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWBP_sw_InventoryEquipSlot_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void OnRightClickContextMenu(const struct FInventoryEntry& SlottedItem, class UWidget* Widget);
	class UWidget* GetDefaultFocusWidget();
	void MouseButtonUp_FromSubWidget(const struct FPointerEvent& Mouse_Button);
	void OnSlotHovered(bool IsHovered, const struct FInventoryEntry& ItemEntry);
	void Equip_Slot(enum class ELoadoutSlotType LoadoutSlot, const struct FInventoryEntry& ItemEntry);
	void RefreshSlots(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_sw_InventoryEquipSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class ELoadoutSlotType CallFunc_GetSlotType_LoadoutSlotType, const struct FLoadoutSlot& CallFunc_GetSlotByType_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void LoadoutSlots_DragCancelled(const struct FInventoryEntry& Item, enum class ELoadoutSlotType Slot);
	void LoadoutSlots_DragStarted(const struct FInventoryEntry& Item, enum class ELoadoutSlotType Slot);
	void RemoveSlotBindings(class UWBP_sw_InventoryEquipSlot_C* L_CurrentSlot, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UWBP_sw_InventoryEquipSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SetupSlotBinding(class UWBP_sw_InventoryEquipSlot_C* L_CurrentSlot, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UWBP_sw_InventoryEquipSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Destruct();
	void ExecuteUbergraph_WBP_sw_LoadoutSlots(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue);
	void OnLoadoutSlotHovered__DelegateSignature(bool IsHovered, const struct FInventoryEntry& ItemEntry, enum class ETooltipSource TooltipSource);
	void RightClickContextMenuEvent__DelegateSignature(const struct FInventoryEntry& SlottedItem, class UWidget* Widget);
	void MouseButtonUp__DelegateSignature(const struct FPointerEvent& Mouse_Event);
	void LoadoutSlotDrag_Started__DelegateSignature(const struct FInventoryEntry& Item, enum class ELoadoutSlotType Slot);
	void LoadoutSlotDrag_Cancelled__DelegateSignature(const struct FInventoryEntry& Item, enum class ELoadoutSlotType Slot);
	void LoadoutSlotDragDropped__DelegateSignature(enum class ELoadoutSlotType Slot, const struct FInventoryEntry& ItemEntry);
};

}


