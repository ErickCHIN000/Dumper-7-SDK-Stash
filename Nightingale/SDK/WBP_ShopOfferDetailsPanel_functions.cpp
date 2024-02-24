#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ShopOfferDetailsPanel.WBP_ShopOfferDetailsPanel_C
// (None)

class UClass* UWBP_ShopOfferDetailsPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ShopOfferDetailsPanel_C");

	return Clss;
}


// WBP_ShopOfferDetailsPanel_C WBP_ShopOfferDetailsPanel.Default__WBP_ShopOfferDetailsPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ShopOfferDetailsPanel_C* UWBP_ShopOfferDetailsPanel_C::GetDefaultObj()
{
	static class UWBP_ShopOfferDetailsPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ShopOfferDetailsPanel_C*>(UWBP_ShopOfferDetailsPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ShopOfferDetailsPanel.WBP_ShopOfferDetailsPanel_C.OnHideOffer
// (Event, Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:

void UWBP_ShopOfferDetailsPanel_C::OnHideOffer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopOfferDetailsPanel_C", "OnHideOffer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ShopOfferDetailsPanel.WBP_ShopOfferDetailsPanel_C.OnShowOffer
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXShopOfferListItem*       OfferToShow                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopOfferDetailsPanel_C::OnShowOffer(class UNWXShopOfferListItem* OfferToShow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopOfferDetailsPanel_C", "OnShowOffer");

	Params::UWBP_ShopOfferDetailsPanel_C_OnShowOffer_Params Parms{};

	Parms.OfferToShow = OfferToShow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopOfferDetailsPanel.WBP_ShopOfferDetailsPanel_C.OnShowReward
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXShopRewardListItem*      RewardToShow                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopOfferDetailsPanel_C::OnShowReward(class UNWXShopRewardListItem* RewardToShow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopOfferDetailsPanel_C", "OnShowReward");

	Params::UWBP_ShopOfferDetailsPanel_C_OnShowReward_Params Parms{};

	Parms.RewardToShow = RewardToShow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopOfferDetailsPanel.WBP_ShopOfferDetailsPanel_C.SetupRewardDetails
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXShopRewardListItem*      Reward                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetIcon_ReturnValue                                     (UObjectWrapper, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                K2Node_DynamicCast_AsOverlay_Slot                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXShopOfferDetailsSimpleWidget*CallFunc_GetDisplayWidgetFromOffer_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemTypeLabel_ReturnValue                            (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopOfferDetailsPanel_C::SetupRewardDetails(class UNWXShopRewardListItem* Reward, bool CallFunc_IsValid_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetIcon_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UOverlaySlot* K2Node_DynamicCast_AsOverlay_Slot, bool K2Node_DynamicCast_bSuccess, class UNWXShopOfferDetailsSimpleWidget* CallFunc_GetDisplayWidgetFromOffer_ReturnValue, class FText CallFunc_GetItemTypeLabel_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopOfferDetailsPanel_C", "SetupRewardDetails");

	Params::UWBP_ShopOfferDetailsPanel_C_SetupRewardDetails_Params Parms{};

	Parms.Reward = Reward;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetIcon_ReturnValue = CallFunc_GetIcon_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_DynamicCast_AsOverlay_Slot = K2Node_DynamicCast_AsOverlay_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDisplayWidgetFromOffer_ReturnValue = CallFunc_GetDisplayWidgetFromOffer_ReturnValue;
	Parms.CallFunc_GetItemTypeLabel_ReturnValue = CallFunc_GetItemTypeLabel_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopOfferDetailsPanel.WBP_ShopOfferDetailsPanel_C.SetupOfferDetails
// (Exec, Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXShopOfferListItem*       Offer                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetIcon_ReturnValue                                     (UObjectWrapper, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemLabel_ReturnValue                                (None)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXShopOfferDetailsSimpleWidget*CallFunc_GetDisplayWidgetFromOffer_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemTypeLabel_ReturnValue                            (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopOfferDetailsPanel_C::SetupOfferDetails(class UNWXShopOfferListItem* Offer, bool CallFunc_IsValid_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetIcon_ReturnValue, class FText CallFunc_GetItemLabel_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UNWXShopOfferDetailsSimpleWidget* CallFunc_GetDisplayWidgetFromOffer_ReturnValue, class FText CallFunc_GetItemTypeLabel_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopOfferDetailsPanel_C", "SetupOfferDetails");

	Params::UWBP_ShopOfferDetailsPanel_C_SetupOfferDetails_Params Parms{};

	Parms.Offer = Offer;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetIcon_ReturnValue = CallFunc_GetIcon_ReturnValue;
	Parms.CallFunc_GetItemLabel_ReturnValue = CallFunc_GetItemLabel_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_GetDisplayWidgetFromOffer_ReturnValue = CallFunc_GetDisplayWidgetFromOffer_ReturnValue;
	Parms.CallFunc_GetItemTypeLabel_ReturnValue = CallFunc_GetItemTypeLabel_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopOfferDetailsPanel.WBP_ShopOfferDetailsPanel_C.GetDisplayWidgetFromOffer
// (Exec, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UNWXShopOfferDetailsSimpleWidget*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TMap<enum class ETransactableType, class UClass*>TransactableToWidgetType                                         (Edit, BlueprintVisible)
// TMap<enum class ETransactableType, class UClass*>K2Node_MakeVariable_MakeVariableOutput                           (None)
// class UWBP_ShopOfferDetailsSimple_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ETransactableType       CallFunc_GetTransactableType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ObjectIsA_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETransactableType       CallFunc_GetTransactableType_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXShopOfferDetailsSimpleWidget*CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UNWXShopOfferDetailsSimpleWidget* UWBP_ShopOfferDetailsPanel_C::GetDisplayWidgetFromOffer(TMap<enum class ETransactableType, class UClass*> TransactableToWidgetType, TMap<enum class ETransactableType, class UClass*> K2Node_MakeVariable_MakeVariableOutput, class UWBP_ShopOfferDetailsSimple_C* CallFunc_Create_ReturnValue, enum class ETransactableType CallFunc_GetTransactableType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_ObjectIsA_ReturnValue, enum class ETransactableType CallFunc_GetTransactableType_ReturnValue_1, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UNWXShopOfferDetailsSimpleWidget* CallFunc_Create_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopOfferDetailsPanel_C", "GetDisplayWidgetFromOffer");

	Params::UWBP_ShopOfferDetailsPanel_C_GetDisplayWidgetFromOffer_Params Parms{};

	Parms.TransactableToWidgetType = TransactableToWidgetType;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetTransactableType_ReturnValue = CallFunc_GetTransactableType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_ObjectIsA_ReturnValue = CallFunc_ObjectIsA_ReturnValue;
	Parms.CallFunc_GetTransactableType_ReturnValue_1 = CallFunc_GetTransactableType_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_ShopOfferDetailsPanel.WBP_ShopOfferDetailsPanel_C.GetItemTypeLabel
// (Exec, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// enum class ETransactableType       CallFunc_GetTransactableType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FText UWBP_ShopOfferDetailsPanel_C::GetItemTypeLabel(enum class ETransactableType CallFunc_GetTransactableType_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopOfferDetailsPanel_C", "GetItemTypeLabel");

	Params::UWBP_ShopOfferDetailsPanel_C_GetItemTypeLabel_Params Parms{};

	Parms.CallFunc_GetTransactableType_ReturnValue = CallFunc_GetTransactableType_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_ShopOfferDetailsPanel.WBP_ShopOfferDetailsPanel_C.UpdateRequirementsNotMetPanel
// (Private, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UNWXShopOfferListItem*       K2Node_DynamicCast_AsNWXShop_Offer_List_Item                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopOfferDetailsPanel_C::UpdateRequirementsNotMetPanel(class UNWXShopOfferListItem* K2Node_DynamicCast_AsNWXShop_Offer_List_Item, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Conv_BoolToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopOfferDetailsPanel_C", "UpdateRequirementsNotMetPanel");

	Params::UWBP_ShopOfferDetailsPanel_C_UpdateRequirementsNotMetPanel_Params Parms{};

	Parms.K2Node_DynamicCast_AsNWXShop_Offer_List_Item = K2Node_DynamicCast_AsNWXShop_Offer_List_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopOfferDetailsPanel.WBP_ShopOfferDetailsPanel_C.UpdatePurchaseButton
// (Exec, Private, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EShopOfferPurchasableStateTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXShopOfferListItem*       K2Node_DynamicCast_AsNWXShop_Offer_List_Item                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopOfferDetailsPanel_C::UpdatePurchaseButton(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, enum class EShopOfferPurchasableState Temp_byte_Variable, class UNWXShopOfferListItem* K2Node_DynamicCast_AsNWXShop_Offer_List_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopOfferDetailsPanel_C", "UpdatePurchaseButton");

	Params::UWBP_ShopOfferDetailsPanel_C_UpdatePurchaseButton_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_DynamicCast_AsNWXShop_Offer_List_Item = K2Node_DynamicCast_AsNWXShop_Offer_List_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopOfferDetailsPanel.WBP_ShopOfferDetailsPanel_C.BndEvt__WBP_ShopOfferDetailsPanel_PurchaseButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopOfferDetailsPanel_C::BndEvt__WBP_ShopOfferDetailsPanel_PurchaseButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopOfferDetailsPanel_C", "BndEvt__WBP_ShopOfferDetailsPanel_PurchaseButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_ShopOfferDetailsPanel_C_BndEvt__WBP_ShopOfferDetailsPanel_PurchaseButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopOfferDetailsPanel.WBP_ShopOfferDetailsPanel_C.ExecuteUbergraph_WBP_ShopOfferDetailsPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXShopOfferListItem*       K2Node_DynamicCast_AsNWXShop_Offer_List_Item                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopOfferDetailsPanel_C::ExecuteUbergraph_WBP_ShopOfferDetailsPanel(int32 EntryPoint, class UNWXShopOfferListItem* K2Node_DynamicCast_AsNWXShop_Offer_List_Item, bool K2Node_DynamicCast_bSuccess, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopOfferDetailsPanel_C", "ExecuteUbergraph_WBP_ShopOfferDetailsPanel");

	Params::UWBP_ShopOfferDetailsPanel_C_ExecuteUbergraph_WBP_ShopOfferDetailsPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsNWXShop_Offer_List_Item = K2Node_DynamicCast_AsNWXShop_Offer_List_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}


