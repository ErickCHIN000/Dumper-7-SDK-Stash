#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x2D8 - 0x230)
// WidgetBlueprintGeneratedClass Inventory_Slot.Inventory_Slot_C
class UInventory_Slot_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            Amount;                                            // 0x238(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Background;                                        // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon;                                              // 0x248(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               ItemBorder;                                        // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ItemDamage;                                        // 0x258(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               ItemDmgOverlay;                                    // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               SelectionBorder;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               SlotBorder;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class APlayerController*                     ControllerReference;                               // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InventorySlot;                                     // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_16ED[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemInformation                      ItemInformation;                                   // 0x288(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         IsSlotHovered;                                     // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsNewHover;                                        // 0x2B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsRightMouseButtonDown;                            // 0x2BA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsIdentifyMode;                                    // 0x2BB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        DeltaTimeSinceUpdate;                              // 0x2BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLeftMouseButtonDown;                             // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         UseItemPressed;                                    // 0x2C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16F8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGamePlayGameState_C*                  GameStateRef;                                      // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            SlotIcon;                                          // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UInventory_Slot_C* GetDefaultObj();

	struct FSlateBrush Get_Icon_Brush_0(bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, class UTexture2D* K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	class FText Get_ItemDmg_Text(TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, const struct FInventoryItem& CallFunc_UI_GetInventoryItemFromSlot_InventoryItem, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	enum class ESlateVisibility Get_IdentifyBorder_Visibility();
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue);
	enum class ESlateVisibility Get_Background_Visibility(int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	struct FLinearColor Get_Border_Color(const struct FQualityColors& LocalQualityColors, const struct FLinearColor& LocalColor, bool K2Node_SwitchEnum_CmpSuccess);
	class FText Get_Amount_Text(class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	enum class ESlateVisibility Get_Border_Visibility(bool CallFunc_IsValid_ReturnValue);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, int32 LocalDraggedSlotIndex, int32 CallFunc_MakeLiteralInt_ReturnValue, class UDragItem_C* K2Node_DynamicCast_AsDrag_Item, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IInventoryHUDInterface_C> K2Node_DynamicCast_AsInventory_HUDInterface, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IInventoryHUDInterface_C> K2Node_DynamicCast_AsInventory_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IInventoryHUDInterface_C> K2Node_DynamicCast_AsInventory_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IInventoryHUDInterface_C> K2Node_DynamicCast_AsInventory_HUDInterface_3, bool K2Node_DynamicCast_bSuccess_4, TScriptInterface<class IInventoryHUDInterface_C> K2Node_DynamicCast_AsInventory_HUDInterface_4, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_UI_Get_IsShiftKeyDown_IsShiftKeyDown, TScriptInterface<class IInventoryHUDInterface_C> K2Node_DynamicCast_AsInventory_HUDInterface_5, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_UI_Get_IsShiftKeyDown_IsShiftKeyDown_1, TScriptInterface<class IInventoryHUDInterface_C> K2Node_DynamicCast_AsInventory_HUDInterface_6, bool K2Node_DynamicCast_bSuccess_7, int32 CallFunc_MakeLiteralInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IInventoryHUDInterface_C> K2Node_DynamicCast_AsInventory_HUDInterface_7, bool K2Node_DynamicCast_bSuccess_8, TScriptInterface<class IInventoryHUDInterface_C> K2Node_DynamicCast_AsInventory_HUDInterface_8, bool K2Node_DynamicCast_bSuccess_9, bool CallFunc_Less_IntInt_ReturnValue_1);
	void OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation, class UDragItem_C* CallFunc_CreateDragDropOperation_ReturnValue, class UDraggedItem_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_DetectDragIfPressed_ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void AtkPrimaryPressed();
	void AtkPrimaryReleased();
	void Destruct();
	void Construct();
	void ExecuteUbergraph_Inventory_Slot(int32 EntryPoint, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry_1, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IInventoryHUDInterface_C> K2Node_DynamicCast_AsInventory_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IInventoryHUDInterface_C> K2Node_DynamicCast_AsInventory_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IInventoryHUDInterface_C> K2Node_DynamicCast_AsInventory_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AGamePlayGameState_C* K2Node_DynamicCast_AsGame_Play_Game_State, bool K2Node_DynamicCast_bSuccess_3, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, class AGamePlayGameState_C* K2Node_DynamicCast_AsGame_Play_Game_State_1, bool K2Node_DynamicCast_bSuccess_4);
};

}


