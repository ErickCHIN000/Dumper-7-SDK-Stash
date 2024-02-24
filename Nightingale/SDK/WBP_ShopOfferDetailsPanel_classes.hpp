#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0x468 - 0x370)
// WidgetBlueprintGeneratedClass WBP_ShopOfferDetailsPanel.WBP_ShopOfferDetailsPanel_C
class UWBP_ShopOfferDetailsPanel_C : public UNWXShopOfferDetailsPanelWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonVisibilitySwitcher*             DetailsSwitcher;                                   // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ItemPreviewImage;                                  // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_DetailsBreakdownContainer;                 // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             PurchaseButton;                                    // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox;                                         // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Itemname;                                      // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_ItemTypeLabel;                                 // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_NoPurchase;                                    // 0x3B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       Ws_PurchaseButtonSwitcher;                         // 0x3B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       Ws_RequirementsIndicator;                          // 0x3C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<enum class ETransactableType, class FText> TransactableToLocStringMap;                        // 0x3C8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<enum class EShopOfferPurchasableState, class FText> PurchasableStateToLocStringMap;                    // 0x418(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_ShopOfferDetailsPanel_C* GetDefaultObj();

	void OnHideOffer();
	void OnShowOffer(class UNWXShopOfferListItem* OfferToShow);
	void OnShowReward(class UNWXShopRewardListItem* RewardToShow);
	void SetupRewardDetails(class UNWXShopRewardListItem* Reward, bool CallFunc_IsValid_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetIcon_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UOverlaySlot* K2Node_DynamicCast_AsOverlay_Slot, bool K2Node_DynamicCast_bSuccess, class UNWXShopOfferDetailsSimpleWidget* CallFunc_GetDisplayWidgetFromOffer_ReturnValue, class FText CallFunc_GetItemTypeLabel_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void SetupOfferDetails(class UNWXShopOfferListItem* Offer, bool CallFunc_IsValid_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetIcon_ReturnValue, class FText CallFunc_GetItemLabel_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UNWXShopOfferDetailsSimpleWidget* CallFunc_GetDisplayWidgetFromOffer_ReturnValue, class FText CallFunc_GetItemTypeLabel_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	class UNWXShopOfferDetailsSimpleWidget* GetDisplayWidgetFromOffer(TMap<enum class ETransactableType, class UClass*> TransactableToWidgetType, TMap<enum class ETransactableType, class UClass*> K2Node_MakeVariable_MakeVariableOutput, class UWBP_ShopOfferDetailsSimple_C* CallFunc_Create_ReturnValue, enum class ETransactableType CallFunc_GetTransactableType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_ObjectIsA_ReturnValue, enum class ETransactableType CallFunc_GetTransactableType_ReturnValue_1, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UNWXShopOfferDetailsSimpleWidget* CallFunc_Create_ReturnValue_1);
	class FText GetItemTypeLabel(enum class ETransactableType CallFunc_GetTransactableType_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void UpdateRequirementsNotMetPanel(class UNWXShopOfferListItem* K2Node_DynamicCast_AsNWXShop_Offer_List_Item, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Conv_BoolToInt_ReturnValue);
	void UpdatePurchaseButton(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, enum class EShopOfferPurchasableState Temp_byte_Variable, class UNWXShopOfferListItem* K2Node_DynamicCast_AsNWXShop_Offer_List_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool K2Node_Select_Default);
	void BndEvt__WBP_ShopOfferDetailsPanel_PurchaseButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_ShopOfferDetailsPanel(int32 EntryPoint, class UNWXShopOfferListItem* K2Node_DynamicCast_AsNWXShop_Offer_List_Item, bool K2Node_DynamicCast_bSuccess, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button);
};

}


