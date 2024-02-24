#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD1 (0x331 - 0x260)
// WidgetBlueprintGeneratedClass UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C
class UUMG_BioLab_UpgradeSlotSelector_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Close;                                             // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Open;                                              // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                        ChoicesHBox;                                       // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                DividerArrow;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MainBounds;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BioLab_UpgradeSlotMain_C*         MainSlot;                                          // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         ShowingChoices;                                    // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3DB4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLivingItemUpgradesRowHandle          PendingChangeUpgrade;                              // 0x29C(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        SlotIndex;                                         // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            CommitSlotChange;                                  // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnShowChoices;                                     // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnChoiceHovered;                                   // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnChoiceUnhovered;                                 // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         AllowSwappingUpgrades;                             // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3DD5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CloseChoicesAnimTimer;                             // 0x300(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UUMG_BioLab_PurchaseUpgradeDetails_C*  PurchaseDetails;                                   // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnSlotFocused;                                     // 0x310(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnSlotUnfocused;                                   // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         SlotUnlocked;                                      // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUMG_BioLab_UpgradeSlotSelector_C* GetDefaultObj();

	void GetBaseMargin(struct FVector2D* BaseSize);
	void GetBaseSize(struct FVector2D* BaseSize);
	bool CanChooseUpgrades(struct FLivingItemSlotState& LivingItemSlotState, bool CallFunc_IsRowHandleValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SetSlotState(const struct FLivingItemSlotState& SlotState);
	void OnInitialized();
	void OnMainSlotClicked();
	void ShowChoices();
	void HideChoices();
	void UpgradeChoiceClicked(const struct FLivingItemUpgradesRowHandle& Upgrade);
	void CancelChangeUpgrade();
	void ConfirmChangeUpgrade();
	void ShowCannotAffordPrompt();
	void Nothing();
	void ChoiceHovered(const struct FLivingItemUpgradesRowHandle& Upgrade);
	void ChoiceUnhovered(const struct FLivingItemUpgradesRowHandle& Upgrade);
	void FinishHideChoices();
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void OnSlotHovered();
	void ExecuteUbergraph_UMG_BioLab_UpgradeSlotSelector(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FLivingItemUpgradeData& CallFunc_GetLivingItemUpgradesStruct_LivingItemUpgrades, enum class EValid CallFunc_GetLivingItemUpgradesStruct_Paths, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UUMG_BioLab_PurchaseUpgradeDetails_C* CallFunc_Create_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, int32 Temp_int_Array_Index_Variable, const struct FLivingItemSlotState& K2Node_CustomEvent_SlotState, bool CallFunc_CanChooseUpgrades_ReturnValue, const struct FLivingItemUpgradesRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UUMG_BioLab_UpgradeSlotChoice_C* CallFunc_Create_ReturnValue_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, const struct FLivingItemUpgradesRowHandle& K2Node_CustomEvent_Upgrade_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, class UPlayerDataComponent* CallFunc_GetPlayerDataComponent_ReturnValue, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, bool CallFunc_ClientOnly_CanAffordWorkshopCosts_ReturnValue, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget, bool K2Node_SwitchEnum_CmpSuccess_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface_1, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget_1, const struct FLivingItemUpgradesRowHandle& K2Node_CustomEvent_Upgrade_1, const struct FLivingItemUpgradesRowHandle& K2Node_CustomEvent_Upgrade, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, const struct FPointerEvent& K2Node_Event_MouseEvent, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails_1);
	void OnSlotUnfocused__DelegateSignature(int32 SlotIndex);
	void OnSlotFocused__DelegateSignature(int32 SlotIndex);
	void OnChoiceUnhovered__DelegateSignature(int32 SlotIndex, const struct FLivingItemUpgradesRowHandle& Upgrade);
	void OnChoiceHovered__DelegateSignature(int32 SlotIndex, const struct FLivingItemUpgradesRowHandle& Upgrade);
	void OnShowChoices__DelegateSignature(int32 SlotIndex);
	void CommitSlotChange__DelegateSignature(int32 SlotIndex, const struct FLivingItemUpgradesRowHandle& Upgrade);
};

}


