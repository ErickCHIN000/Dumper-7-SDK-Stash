#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x128 (0x388 - 0x260)
// WidgetBlueprintGeneratedClass WB_LoadGameWindow.WB_LoadGameWindow_C
class UWB_LoadGameWindow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBorder*                               Border_thb;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Delete;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Load;                                       // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_LowerArrow;                                 // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_UpperArrow;                                 // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_2;                                           // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Delete;                                       // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Load;                                         // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_0;                                     // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_KeybindingsSwitcher_C*             WB_KeybindingsSwitcher;                            // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_189;                                // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_LoadGameSlot_C*                    SaveSlot;                                          // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_AutosaveTimer                   AutosaveFrequency;                                 // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13B8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAC_Inventory_C*                       Inventory_Component;                               // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSet<struct FKey>                            LoadGame_Keybindings;                              // 0x2E8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSet<struct FKey>                            Exit_Keybindings;                                  // 0x338(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWB_LoadGameWindow_C* GetDefaultObj();

	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FVector2D& CallFunc_PointerEvent_GetCursorDelta_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void Set_Focus_to_Slot(int32 Slot_Index, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& Key_Input, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_Set_Contains_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_Set_Contains_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, const struct FEventReply& CallFunc_Handled_ReturnValue_4, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_1);
	void Set_Active_AutosaveFrequency(enum class E_AutosaveTimer Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, int32 K2Node_Select_Default, class URPGInventory_GameInstance_C* K2Node_DynamicCast_AsRPGInventory_Game_Instance, bool K2Node_DynamicCast_bSuccess);
	struct FSlateBrush Get_Thumbnail(const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, bool CallFunc_IsValid_ReturnValue_1);
	void Construct();
	void Create_SaveSlots();
	void CloseLoadGameWindow();
	void BndEvt__Button_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Selected_Slot(class UWB_LoadGameSlot_C* Slot);
	void BndEvt__Button_144_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Delete_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_LowerArrow_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_UpperArrow_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void On_Pressed_Load_Save();
	void On_Pressed_Delete_Save();
	void Switch_Autosave_Down();
	void Switch_Autosave_Up();
	void BndEvt__Button_Load_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Load_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Delete_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Delete_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_WB_LoadGameWindow(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UWB_LoadingScreen_C* CallFunc_Create_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class URPGInventory_GameInstance_C* K2Node_DynamicCast_AsRPGInventory_Game_Instance, bool K2Node_DynamicCast_bSuccess, const struct FS_SaveSlotDetails& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWB_LoadGameSlot_C* K2Node_CustomEvent_Slot, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UWB_LoadGameSlot_C* CallFunc_Create_ReturnValue_1, class URPGInventory_GameInstance_C* K2Node_DynamicCast_AsRPGInventory_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FS_SaveSlotDetails& K2Node_MakeStruct_S_SaveSlotDetails, bool CallFunc_DoesSaveGameExist_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class URPGInventory_GameInstance_C* K2Node_DynamicCast_AsRPGInventory_Game_Instance_2, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Length_ReturnValue_1, enum class E_AutosaveTimer Temp_byte_Variable, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class URPGInventory_GameInstance_C* K2Node_DynamicCast_AsRPGInventory_Game_Instance_3, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_SaveGameToSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, const struct FS_SaveSlotDetails& CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, enum class E_AutosaveTimer Temp_byte_Variable_1, enum class E_AutosaveTimer Temp_byte_Variable_2, enum class E_AutosaveTimer Temp_byte_Variable_3, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, enum class E_AutosaveTimer Temp_byte_Variable_4, enum class E_AutosaveTimer K2Node_Select_Default, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory_1, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue);
};

}


