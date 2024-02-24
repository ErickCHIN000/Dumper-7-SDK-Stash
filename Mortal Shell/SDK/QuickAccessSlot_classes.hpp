#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C9 (0x3F9 - 0x230)
// WidgetBlueprintGeneratedClass QuickAccessSlot.QuickAccessSlot_C
class UQuickAccessSlot_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_QuickAssignModeStart;                         // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_DropIcon_Blink;                               // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_DropStart;                                    // 0x248(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_BG_Red;                                      // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Border;                                      // 0x258(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_BossGlimpse;                                 // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_DropIcon;                                    // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Empty;                                       // 0x270(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_ItemArt;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Quantity;                                  // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_QuickAccessSlot;                           // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_ItemArt;                                   // 0x290(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Index;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Quantity;                                     // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FInventoryItem                        InventoryItem;                                     // 0x2A8(0x132)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_2366[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SlotID;                                            // 0x3E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bQuickAssignModeEnabled;                           // 0x3E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsFocused;                                        // 0x3E5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2367[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_Equipment_InventoryTab_C*          InventoryScreenWidget;                             // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayPC_C*                         GameplayPCRef;                                     // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bCanRemoveQuickItem;                               // 0x3F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UQuickAccessSlot_C* GetDefaultObj();

	void Slot_SetBossGlimpse(int32 Local_Index, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, const struct FLinearColor& Temp_struct_Variable_4, int32 Temp_int_Variable, const struct FLinearColor& K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool K2Node_SwitchName_CmpSuccess);
	void Slot_Remove(bool CallFunc_NotEqual_NameName_ReturnValue);
	enum class ESlateVisibility Get_Image_Border_Visibility(enum class ESlateVisibility Local_Visibility);
	enum class ESlateVisibility Get_Image_BG_Red_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class Enum_InventoryItem_CanUse Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, enum class ESlateVisibility Temp_byte_Variable_8, enum class ESlateVisibility Temp_byte_Variable_9, enum class ESlateVisibility Temp_byte_Variable_10, enum class ESlateVisibility Temp_byte_Variable_11, enum class ESlateVisibility Temp_byte_Variable_12, enum class ESlateVisibility Temp_byte_Variable_13, bool CallFunc_EqualEqual_NameName_ReturnValue, enum class Enum_InventoryItem_CanUse CallFunc_GetCanUseItem_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1);
	enum class ESlateVisibility Get_Image_DropIcon_Visibility(enum class ESlateVisibility Local_Visibility);
	enum class ESlateVisibility Get_SizeBox_ItemArt_Visibility(enum class ESlateVisibility Local_Visibility, bool CallFunc_EqualEqual_NameName_ReturnValue);
	enum class ESlateVisibility Get_Overlay_Quantity_Visibility(enum class ESlateVisibility Local_Visibility, bool CallFunc_EqualEqual_NameName_ReturnValue);
	enum class ESlateVisibility Get_Image_Empty_Visibility(enum class ESlateVisibility Local_Visibility, bool CallFunc_EqualEqual_NameName_ReturnValue);
	class FText Slot_GetQuantity(int32 InInt, bool Temp_bool_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& Temp_string_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue);
	void SetGameplayPC(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void Slot_SetSlotIndex(int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	void Slot_SetItemDetails(const struct FInventoryItem& Item, bool IsValid, int32 Local_Amount, class UTexture2D* Local_Icon, class FName Local_ID, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, float Temp_float_Variable_2, float Temp_float_Variable_3, bool CallFunc_Greater_IntInt_ReturnValue, bool Temp_bool_Variable_1, float K2Node_Select_Default, float K2Node_Select_Default_1, class FText CallFunc_Slot_GetQuantity_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue);
	void Slot_SetEmpty(const struct FInventoryItem& K2Node_MakeStruct_InventoryItem);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void QuickSlot_SetItem(const struct FInventoryItem& Item, bool IsValid);
	void OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnQuickAssignModeEnabled();
	void OnQuickAssignModeDisabled();
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void OnButtonNavLostFocus();
	void OnInitialized();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void Slot_Select();
	void Slot_Deselect();
	void ExecuteUbergraph_QuickAccessSlot(int32 EntryPoint, const struct FInventoryItem& K2Node_CustomEvent_Item, bool K2Node_CustomEvent_IsValid, const struct FGeometry& K2Node_Event_MyGeometry_1, const struct FPointerEvent& K2Node_Event_PointerEvent_1, class UDragDropOperation* K2Node_Event_Operation_1, const struct FPointerEvent& K2Node_Event_PointerEvent, class UDragDropOperation* K2Node_Event_Operation, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool K2Node_Event_IsDesignTime, bool CallFunc_EqualEqual_NameName_ReturnValue);
};

}


