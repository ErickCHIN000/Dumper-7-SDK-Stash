#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x157 (0x3DC - 0x285)
// WidgetBlueprintGeneratedClass QuickItemSelectionWidget.QuickItemSelectionWidget_C
class UQuickItemSelectionWidget_C : public UBaseAutoHideWidget_C
{
public:
	uint8                                        Pad_15D2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USHRadioGroup*                         InventoryGroupBox;                                 // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventorySlotObserver_C*              InventorySlotObserver;                             // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            InventoryTitle;                                    // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuickItemSelectionSlot_C*             LeftSlot1;                                         // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuickItemSelectionSlot_C*             LeftSlot2;                                         // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuickItemSelectionSlot_C*             LeftSlot3;                                         // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuickItemSelectionSlot_C*             LeftSlot4;                                         // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuickItemSelectionSlot_C*             RightSlot1;                                        // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuickItemSelectionSlot_C*             RightSlot2;                                        // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuickItemSelectionSlot_C*             RightSlot3;                                        // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuickItemSelectionSlot_C*             RightSlot4;                                        // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlotWearing_C*                        SlotWearing;                                       // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStoneSlot_C*                          StoneSlot;                                         // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USHRadioGroup*                         WeaponGroupBox;                                    // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            WeaponsTitle;                                      // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ASHPlayerCharacter*                    Player;                                            // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASHPlayerCharacter*                    NewVar_0_0;                                        // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CheckBindings;                                     // 0x318(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TMap<class FName, struct FKey>               Bindings1;                                         // 0x328(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, struct FKey>               Bindings2;                                         // 0x378(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UUserWidget*                           CurrentHoveredSlot;                                // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GamepadX;                                          // 0x3D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GamepadY;                                          // 0x3D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GamepadAngle;                                      // 0x3D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UQuickItemSelectionWidget_C* GetDefaultObj();

	void CheckSlotHit(class UQuickItemSelectionSlot_C* Slot, bool* Result, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_CheckHit_Result);
	void CheckHit(float Hit, float From, float To, bool* Result, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void TraceGamepadHit(bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_CheckSlotHit_Result, bool CallFunc_CheckSlotHit_Result_1, bool CallFunc_CheckSlotHit_Result_2, bool CallFunc_CheckSlotHit_Result_3, bool CallFunc_CheckSlotHit_Result_4, bool CallFunc_CheckSlotHit_Result_5, bool CallFunc_CheckSlotHit_Result_6, bool CallFunc_CheckSlotHit_Result_7);
	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, float CallFunc_GetAnalogValue_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue);
	void ReadBindings(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMapping_Bindings, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMapping_Bindings_1, bool CallFunc_Array_IsValidIndex_ReturnValue_1);
	void CheckSelected();
	void ObserveSlot(class USHInventorySlot* InventoryItemSlot, class UInventorySlot_v2_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, class USHInventoryPlaceholder* CallFunc_GetPlaceholder_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<enum class EUISlotAction>& K2Node_MakeArray_Array, TArray<enum class EUISlotAction>& K2Node_MakeArray_Array_1);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, class FName Temp_name_Variable, const struct FKey& CallFunc_GetKey_ReturnValue, class FName Temp_name_Variable_1, const struct FKey& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FKey& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, class AGenericCharacter_C* K2Node_DynamicCast_AsGeneric_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanOR_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void OnContentChanged_Event_0(class AActor* Sender);
	void OnSlotSelected_Event_0(class UQuickItemSelectionSlot_C* Slot);
	void Construct();
	void CustomEvent_0();
	void Hide();
	void OnSlotUnhovered_Event_0(class UQuickItemSelectionSlot_C* Slot);
	void CustomEvent_1();
	void Show();
	void ShowInstant();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void DrawText();
	void OnSynchronizeProperties();
	void ExecuteUbergraph_QuickItemSelectionWidget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_DegAtan2_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, int32 CallFunc_Round_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_CustomEvent_Sender, class UQuickItemSelectionSlot_C* K2Node_CustomEvent_slot_1, bool CallFunc_IsValid_ReturnValue, class USHInventorySlot* CallFunc_GetEquipmentSlot_ReturnValue, class USHInventorySlot* CallFunc_GetEquipmentSlot_ReturnValue_1, class USHInventorySlot* CallFunc_GetEquipmentSlot_ReturnValue_2, class USHInventorySlot* CallFunc_GetEquipmentSlot_ReturnValue_3, class USHInventorySlot* CallFunc_GetEquipmentSlot_ReturnValue_4, class USHInventorySlot* CallFunc_GetEquipmentSlot_ReturnValue_5, class USHInventorySlot* CallFunc_GetEquipmentSlot_ReturnValue_6, class USHInventorySlot* CallFunc_GetEquipmentSlot_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UQuickItemSelectionSlot_C* K2Node_DynamicCast_AsQuick_Item_Selection_Slot, bool K2Node_DynamicCast_bSuccess_1, class UStoneSlot_C* K2Node_DynamicCast_AsStone_Slot, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ASHPlayerController* K2Node_DynamicCast_AsSHPlayer_Controller, bool K2Node_DynamicCast_bSuccess_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UQuickItemSelectionSlot_C* K2Node_CustomEvent_slot, bool CallFunc_IsValid_ReturnValue_2, class AController* CallFunc_GetController_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess_4, float CallFunc_GetInputAnalogKeyState_ReturnValue, class USHInventorySlot* CallFunc_GetEquipmentSlot_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_GetInputAnalogKeyState_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_VSize2D_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_TextToUpper_ReturnValue_1);
};

}


