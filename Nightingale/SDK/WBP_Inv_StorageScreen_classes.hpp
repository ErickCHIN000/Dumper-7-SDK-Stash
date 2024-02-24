#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x328 (0x7E0 - 0x4B8)
// WidgetBlueprintGeneratedClass WBP_Inv_StorageScreen.WBP_Inv_StorageScreen_C
class UWBP_Inv_StorageScreen_C : public UNWXCommonWindowWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               ItemDetails;                                       // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemTooltip_C*                    WBP_ItemTooltip;                                   // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_NavBar_C*                         WBP_NavBar;                                        // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StoragePanel_C*                   WBP_StoragePanel;                                  // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            PickupItem;                                        // 0x4E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FInventoryEntry                       SelectedItemEntry;                                 // 0x4F0(0x2F0)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_Inv_StorageScreen_C* GetDefaultObj();

	void BndEvt__WBP_NavBar_K2Node_ComponentBoundEvent_1_CloseClicked__DelegateSignature();
	void BndEvt__WBP_Inv_StorageScreen_WBP_StoragePanel_K2Node_ComponentBoundEvent_3_OnEntryHovered__DelegateSignature(bool IsHovered, struct FInventoryEntry& InventoryEntry, enum class ETooltipSource TooltipSource);
	void BndEvt__WBP_Inv_StorageScreen_WBP_StoragePanel_K2Node_ComponentBoundEvent_2_OnSelectedEntryUpdated__DelegateSignature();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_Inv_StorageScreen(int32 EntryPoint, bool Temp_bool_Variable, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool K2Node_ComponentBoundEvent_IsHovered, const struct FInventoryEntry& K2Node_ComponentBoundEvent_InventoryEntry, enum class ETooltipSource K2Node_ComponentBoundEvent_TooltipSource, const struct FInventoryEntry& K2Node_Select_Default, const struct FInventoryEntry& CallFunc_GetSelectedEntry_ReturnValue);
	void PickupItem__DelegateSignature(class FName ItemName, int32 Count);
};

}


