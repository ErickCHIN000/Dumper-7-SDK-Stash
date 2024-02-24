#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9B (0x2CB - 0x230)
// WidgetBlueprintGeneratedClass Inventory.Inventory_C
class UInventory_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            GoldAmount;                                        // 0x238(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_390;                                         // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_391;                                         // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_392;                                         // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_395;                                         // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_396;                                         // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_397;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_398;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_399;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                     InventoryGridPanel;                                // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Title;                                             // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class APlayerController*                     ControllerReference;                               // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             DragWindowOffset;                                  // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        GamepadIndex;                                      // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LastAnalogStickPress_X;                            // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZero_Base_C*                          PawnReference;                                     // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UInventory_Slot_C*>             InventorySlots;                                    // 0x2B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	class AGamePlayGameState_C*                  GameStateRef;                                      // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WasUsePressed_;                                    // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ProcessedDPadPress_;                               // 0x2C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         InputsEnabled_;                                    // 0x2CA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UInventory_C* GetDefaultObj();

	void HideInventory();
	void ClampGamepadIndex(int32 CallFunc_Clamp_ReturnValue);
	void GetAnalogStickState();
	class FText Get_Gold_Text(TScriptInterface<class IInventoryHUDInterface_C> K2Node_DynamicCast_AsInventory_HUDInterface, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_UI_Get_PlayerStats_Gold, int32 CallFunc_UI_Get_PlayerStats_Damage, int32 CallFunc_UI_Get_PlayerStats_Armor, int32 CallFunc_UI_Get_PlayerStats_Strength, int32 CallFunc_UI_Get_PlayerStats_Dexterity, int32 CallFunc_UI_Get_PlayerStats_Intelligence, int32 CallFunc_UI_Get_PlayerStats_InventorySize, class FText CallFunc_Conv_IntToText_ReturnValue);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, bool CallFunc_IsVisible_ReturnValue, class UDragItem_C* K2Node_DynamicCast_AsDrag_Item, bool K2Node_DynamicCast_bSuccess);
	void OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation, class UDragWidget_C* CallFunc_CreateDragDropOperation_ReturnValue, const struct FVector2D& CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue, const struct FVector2D& CallFunc_AbsoluteToLocal_ReturnValue);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_DetectDragIfPressed_ReturnValue);
	void Construct();
	void BndEvt__CloseWindowButton_K2Node_ComponentBoundEvent_170_OnButtonClickedEvent__DelegateSignature();
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void CloseUIButtonPressed();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void EventGetAnalogStick();
	void EventAtkPressed();
	void NextInventoryItem();
	void PreviousInventoryItem();
	void PrevInvRow();
	void NextInvRow();
	void ExecuteUbergraph_Inventory(int32 EntryPoint, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, int32 Temp_int_Array_Index_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry_1, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, TScriptInterface<class IInventoryHUDInterface_C> K2Node_DynamicCast_AsInventory_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IInventoryHUDInterface_C> K2Node_DynamicCast_AsInventory_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TScriptInterface<class IInventoryHUDInterface_C> K2Node_DynamicCast_AsInventory_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, TScriptInterface<class IInventoryHUDInterface_C> K2Node_DynamicCast_AsInventory_HUDInterface_3, bool K2Node_DynamicCast_bSuccess_3, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess_4, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_GetInputAnalogStickState_StickX, float CallFunc_GetInputAnalogStickState_StickY, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, TScriptInterface<class IInventoryHUDInterface_C> K2Node_DynamicCast_AsInventory_HUDInterface_4, bool K2Node_DynamicCast_bSuccess_5, int32 CallFunc_Clamp_ReturnValue, TArray<class UInventory_Slot_C*>& CallFunc_UI_Get_InventorySlots_NewParam, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IInventoryHUDInterface_C> K2Node_DynamicCast_AsInventory_HUDInterface_5, bool K2Node_DynamicCast_bSuccess_6, TScriptInterface<class IInventoryHUDInterface_C> K2Node_DynamicCast_AsInventory_HUDInterface_6, bool K2Node_DynamicCast_bSuccess_7, TArray<class UInventory_Slot_C*>& CallFunc_UI_Get_InventorySlots_NewParam_1, class UInventory_Slot_C* CallFunc_Array_Get_Item, TScriptInterface<class IInventoryHUDInterface_C> K2Node_DynamicCast_AsInventory_HUDInterface_7, bool K2Node_DynamicCast_bSuccess_8, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AGamePlayGameState_C* K2Node_DynamicCast_AsGame_Play_Game_State, bool K2Node_DynamicCast_bSuccess_9, int32 Temp_int_Array_Index_Variable_1, class UInventory_Slot_C* CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 CallFunc_Subtract_IntInt_ReturnValue_3, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier_1);
};

}


