#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x128 (0x388 - 0x260)
// WidgetBlueprintGeneratedClass WB_CraftingList.WB_CraftingList_C
class UWB_CraftingList_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                      ConstructAnim;                                     // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_0;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CraftingListSpacer_C*              Spacer_Boots;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CraftingListSpacer_C*              Spacer_Chest;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CraftingListSpacer_C*              Spacer_Daggers;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CraftingListSpacer_C*              Spacer_Gloves;                                     // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CraftingListSpacer_C*              Spacer_Head;                                       // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CraftingListSpacer_C*              Spacer_Legs;                                       // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CraftingListSpacer_C*              Spacer_Longswords;                                 // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CraftingListSpacer_C*              Spacer_Meat;                                       // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CraftingListSpacer_C*              Spacer_Neck;                                       // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CraftingListSpacer_C*              Spacer_Potions;                                    // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CraftingListSpacer_C*              Spacer_Shields;                                    // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CraftingListSpacer_C*              Spacer_Spears;                                     // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CraftingListSpacer_C*              Spacer_Swords;                                     // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Alchemy;                               // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_armor;                                 // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Boots;                                 // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Chest;                                 // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Cooking;                               // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Daggers;                               // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Gloves;                                // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Head;                                  // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Legs;                                  // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Longswords;                            // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Meat;                                  // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Neck;                                  // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Potions;                               // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Shields;                               // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Spears;                                // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_swords;                                // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Weapons;                               // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAC_Crafting_C*                        Crafting_Component;                                // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_CraftingListSlot_C*                Crafting_List_Slot;                                // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_ItemType                        List_Type;                                         // 0x378(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E71[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWB_CraftingListSlot_C*                Last_Focused_Slot;                                 // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_CraftingList_C* GetDefaultObj();

	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void Set_Focus_to_Slot(bool Consider_LastFocus, int32 Slot_Index, class UVerticalBox* Temp_object_Variable, class UVerticalBox* Temp_object_Variable_1, class UVerticalBox* Temp_object_Variable_2, class UVerticalBox* Temp_object_Variable_3, class UVerticalBox* Temp_object_Variable_4, class UVerticalBox* Temp_object_Variable_5, class UVerticalBox* Temp_object_Variable_6, class UVerticalBox* Temp_object_Variable_7, class APlayerController* CallFunc_GetPlayerController_ReturnValue, enum class E_ItemType Temp_byte_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UVerticalBox* K2Node_Select_Default, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	class FText Set_Title_Text(enum class E_ItemType Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, class FText Temp_text_Variable_12, class FText K2Node_Select_Default);
	void Set_Button_Image(class UWB_CraftingListSlot_C* Slot, const struct FS_Crafting& Crafting_Data, const struct FS_ItemData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle);
	void Construct();
	void Create_Items_List();
	void Create_Armor_List();
	void Create_Weapons_List();
	void Scroll_to_Slot(class UWB_CraftingListSlot_C* Focused_Slot);
	void Create_Alchemy_List();
	void Create_Cooking_List();
	void ExecuteUbergraph_WB_CraftingList(int32 EntryPoint, class UVerticalBox* Temp_object_Variable, class UVerticalBox* Temp_object_Variable_1, class UVerticalBox* Temp_object_Variable_2, class UVerticalBox* Temp_object_Variable_3, class UVerticalBox* Temp_object_Variable_4, class UVerticalBox* Temp_object_Variable_5, enum class E_ItemSlot Temp_byte_Variable, class UVerticalBox* Temp_object_Variable_6, class UVerticalBox* Temp_object_Variable_7, class UVerticalBox* Temp_object_Variable_8, class UVerticalBox* Temp_object_Variable_9, class UVerticalBox* Temp_object_Variable_10, class UVerticalBox* Temp_object_Variable_11, class UVerticalBox* Temp_object_Variable_12, enum class E_WeaponCategory Temp_byte_Variable_1, class UVerticalBox* Temp_object_Variable_13, class UVerticalBox* Temp_object_Variable_14, class UVerticalBox* Temp_object_Variable_15, enum class E_ItemSlot Temp_byte_Variable_2, class UVerticalBox* Temp_object_Variable_16, class UVerticalBox* Temp_object_Variable_17, class UVerticalBox* Temp_object_Variable_18, class UVerticalBox* Temp_object_Variable_19, class UVerticalBox* Temp_object_Variable_20, class UVerticalBox* Temp_object_Variable_21, class UVerticalBox* Temp_object_Variable_22, enum class E_WeaponCategory Temp_byte_Variable_3, class UVerticalBox* Temp_object_Variable_23, class UVerticalBox* Temp_object_Variable_24, class UVerticalBox* Temp_object_Variable_25, class UWB_CraftingListSlot_C* CallFunc_Create_ReturnValue, class UWB_CraftingListSlot_C* CallFunc_Create_ReturnValue_1, class UWB_CraftingListSlot_C* CallFunc_Create_ReturnValue_2, class UWB_CraftingListSlot_C* CallFunc_Create_ReturnValue_3, class UVerticalBox* Temp_object_Variable_26, enum class E_ItemSlot Temp_byte_Variable_4, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UVerticalBox* Temp_object_Variable_27, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, enum class E_ItemSlot Temp_byte_Variable_5, class UVerticalBox* Temp_object_Variable_28, class UAC_Crafting_C* CallFunc_Get_AC_Crafting_AC_Crafting, class UVerticalBox* Temp_object_Variable_29, class UVerticalBox* Temp_object_Variable_30, class UVerticalBox* Temp_object_Variable_31, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, class UVerticalBox* Temp_object_Variable_32, enum class E_WeaponCategory Temp_byte_Variable_6, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, const struct FS_Crafting& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, const struct FS_ItemData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UVerticalBox* Temp_object_Variable_33, class UWB_CraftingListSlot_C* K2Node_CustomEvent_Focused_Slot, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, class UVerticalBox* Temp_object_Variable_34, const struct FS_Crafting& CallFunc_Array_Get_Item_1, const struct FS_ItemData& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, class UVerticalBox* Temp_object_Variable_35, class UVerticalBox* K2Node_Select_Default, class UVerticalBox* Temp_object_Variable_36, const struct FS_Crafting& CallFunc_Array_Get_Item_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, const struct FS_ItemData& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, class UVerticalBox* K2Node_Select_Default_1, class UVerticalBox* K2Node_Select_Default_2, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UVerticalBox* Temp_object_Variable_37, enum class E_WeaponCategory Temp_byte_Variable_7, class UVerticalBox* K2Node_Select_Default_3, class UVerticalBox* Temp_object_Variable_38, class UVerticalBox* K2Node_Select_Default_4, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, class UVerticalBox* Temp_object_Variable_39, class UVerticalBox* K2Node_Select_Default_5, const struct FS_Crafting& CallFunc_Array_Get_Item_3, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, const struct FS_ItemData& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class UVerticalBox* K2Node_Select_Default_6, class UVerticalBox* K2Node_Select_Default_7, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_3);
};

}


