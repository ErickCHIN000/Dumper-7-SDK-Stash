#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x2E8 - 0x260)
// WidgetBlueprintGeneratedClass wid_CompanionEquipment_ItemSlot.wid_CompanionEquipment_ItemSlot_C
class UWid_CompanionEquipment_ItemSlot_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UButton*                               InteractableButton;                                // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Item;                                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ItemBackground;                                    // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                     UpgradeIcons;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class ECompanionEquipmentSlotType       SlotType;                                          // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C87[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSlotHovered;                                     // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnSlotUnhovered;                                   // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnSlotPressed;                                     // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                  CompanionID;                                       // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnSelected;                                        // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnSlotButtonUp;                                    // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWid_CompanionEquipment_ItemSlot_C* GetDefaultObj();

	void UpdateUpgrades(struct FInventoryEntry& InventoryEntry, struct FItemEntry& ItemInfo, class UWid_Upgrade_Icon_C* UpgradeIconWidget, const TArray<class FName>& AvailableUpgrades, int32 Column, class UWid_Upgrade_Icon_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, TArray<class FName>& CallFunc_GetUpgrades_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_GetUpgradeInfo_isVaid, const struct FUpgradeEntry& CallFunc_GetUpgradeInfo_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void GetEquippedItemAndItemInfo(struct FInventoryEntry* EquippedItem, struct FItemEntry* ItemInfo, bool* IsValid, const struct FItemEntry& LocalItemInfo, const struct FInventoryEntry& LocalEquippedItem, bool CallFunc_IsSlotValid_Result, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, bool CallFunc_GetItemInfo_IsValid, const struct FItemEntry& CallFunc_GetItemInfo_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool CallFunc_CompanionGetEquippedItem_outResult, const struct FInventoryEntry& CallFunc_CompanionGetEquippedItem_ReturnValue);
	void Update(const struct FItemEntry& ItemInfo, const struct FInventoryEntry& EquippedItem, const struct FInventoryEntry& CallFunc_GetEquippedItemAndItemInfo_EquippedItem, const struct FItemEntry& CallFunc_GetEquippedItemAndItemInfo_ItemInfo, bool CallFunc_GetEquippedItemAndItemInfo_IsValid);
	void GetBackgroundBasedOnSelectionType(enum class ECompanionEquipmentSlotSelectionType SelectionType, class UTexture2D** Texture, enum class ECompanionEquipmentSlotSelectionType Temp_byte_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, class UTexture2D* Temp_object_Variable_3, class UTexture2D* K2Node_Select_Default);
	void UpdateBackground(enum class ECompanionEquipmentSlotSelectionType SelectionType, class UTexture2D* CallFunc_GetBackgroundBasedOnSelectionType_Texture);
	void IsSlotValid(bool* Result, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Init(enum class ECompanionEquipmentSlotType InSlotType, class FName InCompanionID);
	void BndEvt__InteractableButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__InteractableButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__InteractableButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void ExecuteUbergraph_wid_CompanionEquipment_ItemSlot(int32 EntryPoint, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, FDelegateProperty_ Temp_delegate_Variable, bool K2Node_Event_IsDesignTime, enum class ECompanionEquipmentSlotType K2Node_CustomEvent_InSlotType, class FName K2Node_CustomEvent_InCompanionID, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostEvent_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue);
	void OnSlotButtonUp__DelegateSignature();
	void OnSelected__DelegateSignature(enum class ECompanionEquipmentSlotType SlotType, bool NewIsSelected);
	void OnSlotPressed__DelegateSignature(enum class ECompanionEquipmentSlotType SlotType);
	void OnSlotUnhovered__DelegateSignature(enum class ECompanionEquipmentSlotType SlotType);
	void OnSlotHovered__DelegateSignature(enum class ECompanionEquipmentSlotType SlotType);
};

}


