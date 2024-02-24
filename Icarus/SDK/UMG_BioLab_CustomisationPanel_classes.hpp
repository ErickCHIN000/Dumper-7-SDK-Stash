#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x438 (0x698 - 0x260)
// WidgetBlueprintGeneratedClass UMG_BioLab_CustomisationPanel.UMG_BioLab_CustomisationPanel_C
class UUMG_BioLab_CustomisationPanel_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                          ContentCanvas;                                     // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              NoWeaponSelectedPopup;                             // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BioLab_StatBox_C*                 StatBox;                                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BioLab_WireCanvas_C*              UMG_BioLab_LivingItemSlotCanvas;                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                WeaponImage;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UUMG_BioLab_UpgradeSlotSelector_C*> UpgradeSlots;                                      // 0x290(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FItemData                             CurrentItem;                                       // 0x2A0(0x1F0)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FItemData                             PendingItem;                                       // 0x490(0x1F0)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class ABP_LivingItemPreview_C*               ItemPreviewer;                                     // 0x680(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUMG_WirePin_C*>                Pins;                                              // 0x688(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UUMG_BioLab_CustomisationPanel_C* GetDefaultObj();

	void SelectItem(const struct FItemData& Item);
	void OnShowChoices(int32 SlotIndex);
	void OnChoiceHovered(int32 SlotIndex, const struct FLivingItemUpgradesRowHandle& Upgrade);
	void OnChoiceUnhovered(int32 SlotIndex, const struct FLivingItemUpgradesRowHandle& Upgrade);
	void CommitSlotChange(int32 SlotIndex, const struct FLivingItemUpgradesRowHandle& Upgrade);
	void OnInitialized();
	void OnSlotFocused(int32 SlotIndex);
	void OnSlotUnfocused(int32 SlotIndex);
	void ExecuteUbergraph_UMG_BioLab_CustomisationPanel(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FItemData& K2Node_CustomEvent_Item, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 K2Node_CustomEvent_SlotIndex_5, int32 K2Node_CustomEvent_SlotIndex_4, const struct FLivingItemUpgradesRowHandle& K2Node_CustomEvent_Upgrade_2, int32 K2Node_CustomEvent_SlotIndex_3, const struct FLivingItemUpgradesRowHandle& K2Node_CustomEvent_Upgrade_1, int32 K2Node_CustomEvent_SlotIndex_2, const struct FLivingItemUpgradesRowHandle& K2Node_CustomEvent_Upgrade, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FLivingItemUpgradeData& CallFunc_GetLivingItemUpgradesStruct_LivingItemUpgrades, enum class EValid CallFunc_GetLivingItemUpgradesStruct_Paths, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_2, TArray<struct FLivingItemSlotState>& CallFunc_GetLivingItemSlotStates_Slots, bool CallFunc_GetLivingItemSlotStates_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FItemData& K2Node_Copy_ReturnValue, class UUMG_BioLab_UpgradeSlotSelector_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UPlayerDataComponent* CallFunc_GetPlayerDataComponent_ReturnValue, const struct FLivingItemSlotState& CallFunc_Array_Get_Item_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_ClientOnly_PurchaseItemUpdate_ReturnValue, const struct FItemData& K2Node_Copy_ReturnValue_1, class ABP_LivingItemPreview_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors, class UUMG_BioLab_UpgradeSlotSelector_C* CallFunc_Create_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FVector2D& CallFunc_GetBaseSize_BaseSize, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, class ABP_LivingItemPreview_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors_1, class UUMG_WirePin_C* CallFunc_Create_ReturnValue_1, const struct FVector2D& CallFunc_GetPinSize_Size, class UUMG_WirePin_C* CallFunc_Array_Get_Item_2, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue_1, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_1, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue_1, int32 K2Node_CustomEvent_SlotIndex_1, bool CallFunc_SetLivingItemUpgrade_ReturnValue, int32 K2Node_CustomEvent_SlotIndex, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UUMG_BioLab_UpgradeSlotSelector_C* CallFunc_Array_Get_Item_3, bool CallFunc_SetLivingItemUpgrade_ReturnValue_1, class UUMG_BioLab_UpgradeSlotSelector_C* CallFunc_Array_Get_Item_4, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_3, class UUMG_BioLab_UpgradeSlotSelector_C* CallFunc_Array_Get_Item_5, bool CallFunc_Less_IntInt_ReturnValue_3);
};

}


