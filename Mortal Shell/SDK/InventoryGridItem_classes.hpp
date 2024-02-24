#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x259 (0x489 - 0x230)
// WidgetBlueprintGeneratedClass InventoryGridItem.InventoryGridItem_C
class UInventoryGridItem_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_CantUse;                                      // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      QuickItemAssigned;                                 // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      MouseLeaveAnim;                                    // 0x248(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      MousePressedAnim;                                  // 0x250(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               Button_Item;                                       // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_BG_Quantity;                                 // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_BG_Red;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Border;                                      // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_BossGlimpse;                                 // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_CircleCross;                                 // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Effect;                                      // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStupidHoverDetectorWidget_C*          Image_HoverDetector;                               // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_ItemArt;                                     // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_ProgressBar;                                 // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_QtyBackground;                               // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_QuickItemIndicator;                          // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_ItemEntry;                                 // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Quantity;                                  // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Amount;                                       // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Index_Debug;                                  // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Weapon_Upgrade_Value;                         // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FInventoryItem                        InventoryItem;                                     // 0x2E0(0x132)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_1EB9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSelected;                                        // 0x418(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnMouseLeaveEvent;                                 // 0x428(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UMaterialInstanceDynamic*              SelectMat;                                         // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InventorySlot;                                     // 0x440(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1ECD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnItemStartedDragging;                             // 0x448(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UUI_Equipment_InventoryTab_C*          UI_Equipment_Inventory;                            // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index_Grid;                                        // 0x460(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_1EE0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGamePlayGameState_C*                  GameStateRef;                                      // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayPC_C*                         GameplayPCRef;                                     // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_InventoryItem_CanUse         CanUse;                                            // 0x478(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsQuickItem;                                      // 0x479(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F1F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SlotID;                                            // 0x47C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDragging;                                        // 0x480(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F3C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        WeaponUpgradeLevel;                                // 0x484(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowWeaponUpgradeLevel;                            // 0x488(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UInventoryGridItem_C* GetDefaultObj();

	void SetWeaponUpgrade(class FName CallFunc_GetAxatanaOreID_ID, int32 CallFunc_GetNamedPCInt_Value, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_GetNamedPCInt_Value_1, int32 CallFunc_GetNamedPCInt_Value_2, int32 CallFunc_GetNamedPCInt_Value_3, int32 CallFunc_GetNamedPCInt_Value_4, bool K2Node_SwitchName_CmpSuccess);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void PlayCantUseAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void SetGlimpseGlow(int32 Local_Index, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, const struct FLinearColor& Temp_struct_Variable_4, int32 Temp_int_Variable, const struct FLinearColor& K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool K2Node_SwitchName_CmpSuccess);
	void QuickItemIndicatorAnim(bool Condition, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void UnHover(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void ResetItem();
	void SetDebugIndexText(class FText CallFunc_Conv_IntToText_ReturnValue);
	void SetEffectMat(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void SetIsQuickItemSlot(bool CallFunc_IsQuickItem_IsQuickItem, int32 CallFunc_IsQuickItem_SlotIndex, enum class ESlateVisibility CallFunc_IsQuickItem_ReturnValue);
	void SetIsUsable(enum class ESlateVisibility Local_Visibility, enum class Enum_InventoryItem_CanUse Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, enum class ESlateVisibility Temp_byte_Variable_8, enum class ESlateVisibility Temp_byte_Variable_9, enum class ESlateVisibility Temp_byte_Variable_10, enum class ESlateVisibility Temp_byte_Variable_11, enum class ESlateVisibility Temp_byte_Variable_12, enum class ESlateVisibility K2Node_Select_Default, enum class Enum_InventoryItem_CanUse CallFunc_GetCanUseItem_ReturnValue);
	void SetItemAmount(int32 Local_Amount, bool Temp_bool_Variable, const class FString& Temp_string_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue);
	void SetItemArt();
	enum class ESlateVisibility IsQuickItem(bool* IsQuickItem, int32* SlotIndex, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void SetGameplayPC(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC);
	void SelectItem(bool MouseHover, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void MouseHover(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void SetGameState(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AGamePlayGameState_C* K2Node_DynamicCast_AsGame_Play_Game_State, bool K2Node_DynamicCast_bSuccess);
	void OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation, class UDragDropOperation* CallFunc_CreateDragDropOperation_ReturnValue, bool CallFunc_CanDrag_bCanDrag, const class FString& CallFunc_Conv_IntToString_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UItemDragImage_C* CallFunc_Create_ReturnValue);
	bool IsSelected(bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void CanDrag(bool* bCanDrag, bool CallFunc_IsKeyItem_bIsKeyItem_, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void IsKeyItem(const struct FInventoryItem& Item, bool* bIsKeyItem_);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_DetectDragIfPressed_ReturnValue, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void Deselect();
	void BndEvt__StupidHoverDetector_K2Node_ComponentBoundEvent_0_Event_OnMouseEnter__DelegateSignature();
	void BndEvt__StupidHoverDetector_K2Node_ComponentBoundEvent_1_Event_OnMouseLeave__DelegateSignature();
	void OnInitialized();
	void LeftClicked();
	void SetupItem(const struct FInventoryItem& InventoryItem, int32 InventorySlot, bool QuickItemAnim);
	void Construct();
	void RightClicked();
	void OnDragCancelled(struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void ExecuteUbergraph_InventoryGridItem(int32 EntryPoint, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FInventoryItem& K2Node_CustomEvent_InventoryItem, int32 K2Node_CustomEvent_InventorySlot, bool K2Node_CustomEvent_QuickItemAnim, float Temp_float_Variable_3, const struct FPointerEvent& K2Node_Event_PointerEvent, class UDragDropOperation* K2Node_Event_Operation, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool Temp_bool_Variable_1, bool CallFunc_Greater_IntInt_ReturnValue, float K2Node_Select_Default, float K2Node_Select_Default_1);
	void OnItemStartedDragging__DelegateSignature(int32 InventorySlot, class UInventoryGridItem_C* GridItemWidget, class UDragDropOperation* DragDropOperation);
	void OnMouseLeaveEvent__DelegateSignature();
	void OnSelected__DelegateSignature(const struct FInventoryItem& InventoryItem, class UInventoryGridItem_C* HoveredWidget, int32 InventorySlot, bool MouseHover);
};

}


