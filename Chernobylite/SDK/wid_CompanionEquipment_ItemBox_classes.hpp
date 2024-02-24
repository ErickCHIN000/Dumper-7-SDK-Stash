#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x328 - 0x260)
// WidgetBlueprintGeneratedClass wid_CompanionEquipment_ItemBox.wid_CompanionEquipment_ItemBox_C
class UWid_CompanionEquipment_ItemBox_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                Background;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            CurrentItem;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            CurrentItemLabel;                                  // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_CompanionEquipment_ItemSlot_C*    ItemSlot;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                            BackgroundTexture;                                 // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  LabelText;                                         // 0x290(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	enum class ECompanionEquipmentSlotType       SlotType;                                          // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_22BD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSlotHovered;                                     // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnSlotUnhovered;                                   // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnSlotPressed;                                     // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                  CompanionID;                                       // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  NoneText;                                          // 0x2E8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Selected;                                          // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_22EB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSelected;                                        // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnSlotButtonUp;                                    // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWid_CompanionEquipment_ItemBox_C* GetDefaultObj();

	void Select(bool Selected, bool Temp_bool_Variable, enum class ECompanionEquipmentSlotSelectionType Temp_byte_Variable, enum class ECompanionEquipmentSlotSelectionType Temp_byte_Variable_1, enum class ECompanionEquipmentSlotSelectionType K2Node_Select_Default);
	void Update(bool Temp_bool_Variable, const struct FInventoryEntry& CallFunc_GetEquippedItemAndItemInfo_EquippedItem, const struct FItemEntry& CallFunc_GetEquippedItemAndItemInfo_ItemInfo, bool CallFunc_GetEquippedItemAndItemInfo_IsValid, class FText K2Node_Select_Default);
	void PreConstruct(bool IsDesignTime);
	void Init(class FName Companion);
	void BndEvt__ItemSlot_K2Node_ComponentBoundEvent_0_OnSlotHovered__DelegateSignature(enum class ECompanionEquipmentSlotType SlotType);
	void BndEvt__ItemSlot_K2Node_ComponentBoundEvent_1_OnSlotUnhovered__DelegateSignature(enum class ECompanionEquipmentSlotType SlotType);
	void BndEvt__ItemSlot_K2Node_ComponentBoundEvent_2_OnSlotPressed__DelegateSignature(enum class ECompanionEquipmentSlotType SlotType);
	void Construct();
	void Destruct();
	void BndEvt__ItemSlot_K2Node_ComponentBoundEvent_3_OnSlotButtonUp__DelegateSignature();
	void ExecuteUbergraph_wid_CompanionEquipment_ItemBox(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class FName K2Node_CustomEvent_Companion, class FText CallFunc_TextToUpper_ReturnValue, enum class ECompanionEquipmentSlotType K2Node_ComponentBoundEvent_SlotType_2, enum class ECompanionEquipmentSlotType K2Node_ComponentBoundEvent_SlotType_1, enum class ECompanionEquipmentSlotType K2Node_ComponentBoundEvent_SlotType, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1);
	void OnSlotButtonUp__DelegateSignature();
	void OnSelected__DelegateSignature(enum class ECompanionEquipmentSlotType SlotType, bool IsSelected);
	void OnSlotPressed__DelegateSignature(class UWid_CompanionEquipment_ItemBox_C* ItemBox, enum class ECompanionEquipmentSlotType SlotType);
	void OnSlotUnhovered__DelegateSignature(class UWid_CompanionEquipment_ItemBox_C* ItemBox, enum class ECompanionEquipmentSlotType SlotType);
	void OnSlotHovered__DelegateSignature(class UWid_CompanionEquipment_ItemBox_C* ItemBox, enum class ECompanionEquipmentSlotType SlotType);
};

}


