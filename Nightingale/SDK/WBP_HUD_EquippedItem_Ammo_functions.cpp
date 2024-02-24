#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_HUD_EquippedItem_Ammo.WBP_HUD_EquippedItem_Ammo_C
// (None)

class UClass* UWBP_HUD_EquippedItem_Ammo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_HUD_EquippedItem_Ammo_C");

	return Clss;
}


// WBP_HUD_EquippedItem_Ammo_C WBP_HUD_EquippedItem_Ammo.Default__WBP_HUD_EquippedItem_Ammo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_HUD_EquippedItem_Ammo_C* UWBP_HUD_EquippedItem_Ammo_C::GetDefaultObj()
{
	static class UWBP_HUD_EquippedItem_Ammo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_HUD_EquippedItem_Ammo_C*>(UWBP_HUD_EquippedItem_Ammo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_HUD_EquippedItem_Ammo.WBP_HUD_EquippedItem_Ammo_C.OnBackpackUpdated
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IItemContainer>Source                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FInventoryEntry             Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Quantity                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_EquippedItem_Ammo_C::OnBackpackUpdated(TScriptInterface<class IItemContainer>& Source, struct FInventoryEntry& Item, int32 Quantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_EquippedItem_Ammo_C", "OnBackpackUpdated");

	Params::UWBP_HUD_EquippedItem_Ammo_C_OnBackpackUpdated_Params Parms{};

	Parms.Source = Source;
	Parms.Item = Item;
	Parms.Quantity = Quantity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_EquippedItem_Ammo.WBP_HUD_EquippedItem_Ammo_C.SetActiveItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEquippableItem*             Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_EquippedItem_Ammo_C::SetActiveItem(class AEquippableItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_EquippedItem_Ammo_C", "SetActiveItem");

	Params::UWBP_HUD_EquippedItem_Ammo_C_SetActiveItem_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_EquippedItem_Ammo.WBP_HUD_EquippedItem_Ammo_C.GetEquippabletemDisplayName
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AEquippableItem*             EquippableItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        ItemDisplayName                                                  (Parm, OutParm)
// class ABP_EquippableItemBase_C*    K2Node_DynamicCast_AsBP_Equippable_Item_Base                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ItemDisplayName                          (None)

void UWBP_HUD_EquippedItem_Ammo_C::GetEquippabletemDisplayName(class AEquippableItem* EquippableItem, class FText* ItemDisplayName, class ABP_EquippableItemBase_C* K2Node_DynamicCast_AsBP_Equippable_Item_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetDisplayName_ItemDisplayName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_EquippedItem_Ammo_C", "GetEquippabletemDisplayName");

	Params::UWBP_HUD_EquippedItem_Ammo_C_GetEquippabletemDisplayName_Params Parms{};

	Parms.EquippableItem = EquippableItem;
	Parms.K2Node_DynamicCast_AsBP_Equippable_Item_Base = K2Node_DynamicCast_AsBP_Equippable_Item_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDisplayName_ItemDisplayName = CallFunc_GetDisplayName_ItemDisplayName;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemDisplayName != nullptr)
		*ItemDisplayName = Parms.ItemDisplayName;

}


// Function WBP_HUD_EquippedItem_Ammo.WBP_HUD_EquippedItem_Ammo_C.GetAvailableAmmoAmountfromPlayer
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBP_RangedWeaponClip_C*      RangedWeaponClip                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              AvailableAmmoFromInventory                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_WeaponUser_C>K2Node_DynamicCast_AsBPI_Weapon_User                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          CallFunc_GetLoadedAmmoType_LoadedAmmoType                        (HasGetValueTypeHash)
// int32                              CallFunc_GetAmmoAmount_Amount                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_EquippedItem_Ammo_C::GetAvailableAmmoAmountfromPlayer(class UBP_RangedWeaponClip_C* RangedWeaponClip, int32* AvailableAmmoFromInventory, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, TScriptInterface<class IBPI_WeaponUser_C> K2Node_DynamicCast_AsBPI_Weapon_User, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FItemDataReference& CallFunc_GetLoadedAmmoType_LoadedAmmoType, int32 CallFunc_GetAmmoAmount_Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_EquippedItem_Ammo_C", "GetAvailableAmmoAmountfromPlayer");

	Params::UWBP_HUD_EquippedItem_Ammo_C_GetAvailableAmmoAmountfromPlayer_Params Parms{};

	Parms.RangedWeaponClip = RangedWeaponClip;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Weapon_User = K2Node_DynamicCast_AsBPI_Weapon_User;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLoadedAmmoType_LoadedAmmoType = CallFunc_GetLoadedAmmoType_LoadedAmmoType;
	Parms.CallFunc_GetAmmoAmount_Amount = CallFunc_GetAmmoAmount_Amount;

	UObject::ProcessEvent(Func, &Parms);

	if (AvailableAmmoFromInventory != nullptr)
		*AvailableAmmoFromInventory = Parms.AvailableAmmoFromInventory;

}


// Function WBP_HUD_EquippedItem_Ammo.WBP_HUD_EquippedItem_Ammo_C.TryGetRangedWeaponData
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEquippableItem*             EquippableItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsRangedWeapon                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_RangedWeaponClip_C*      RangedWeaponClip                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              AmountLoadedAmmo                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AmountAvailableAmmo                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_RangedWeaponClip_C*      LocalRangedWeaponClipComponent                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_RangedWeaponComponent_C* LocalRangedWeaponComponent                                       (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_RangedWeapon_Base_C*     LocalRangedWeaponActor                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class ABP_RangedWeapon_Base_C*     K2Node_DynamicCast_AsBP_Ranged_Weapon_Base                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAvailableAmmoAmountfromPlayer_AvailableAmmoFromInventory(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAmmoRemaining_RemainingAmmo                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_EquippedItem_Ammo_C::TryGetRangedWeaponData(class AEquippableItem* EquippableItem, bool* IsRangedWeapon, class UBP_RangedWeaponClip_C** RangedWeaponClip, int32* AmountLoadedAmmo, int32* AmountAvailableAmmo, class UBP_RangedWeaponClip_C* LocalRangedWeaponClipComponent, class UBP_RangedWeaponComponent_C* LocalRangedWeaponComponent, class ABP_RangedWeapon_Base_C* LocalRangedWeaponActor, class ABP_RangedWeapon_Base_C* K2Node_DynamicCast_AsBP_Ranged_Weapon_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetAvailableAmmoAmountfromPlayer_AvailableAmmoFromInventory, int32 CallFunc_GetAmmoRemaining_RemainingAmmo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_EquippedItem_Ammo_C", "TryGetRangedWeaponData");

	Params::UWBP_HUD_EquippedItem_Ammo_C_TryGetRangedWeaponData_Params Parms{};

	Parms.EquippableItem = EquippableItem;
	Parms.LocalRangedWeaponClipComponent = LocalRangedWeaponClipComponent;
	Parms.LocalRangedWeaponComponent = LocalRangedWeaponComponent;
	Parms.LocalRangedWeaponActor = LocalRangedWeaponActor;
	Parms.K2Node_DynamicCast_AsBP_Ranged_Weapon_Base = K2Node_DynamicCast_AsBP_Ranged_Weapon_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetAvailableAmmoAmountfromPlayer_AvailableAmmoFromInventory = CallFunc_GetAvailableAmmoAmountfromPlayer_AvailableAmmoFromInventory;
	Parms.CallFunc_GetAmmoRemaining_RemainingAmmo = CallFunc_GetAmmoRemaining_RemainingAmmo;

	UObject::ProcessEvent(Func, &Parms);

	if (IsRangedWeapon != nullptr)
		*IsRangedWeapon = Parms.IsRangedWeapon;

	if (RangedWeaponClip != nullptr)
		*RangedWeaponClip = Parms.RangedWeaponClip;

	if (AmountLoadedAmmo != nullptr)
		*AmountLoadedAmmo = Parms.AmountLoadedAmmo;

	if (AmountAvailableAmmo != nullptr)
		*AmountAvailableAmmo = Parms.AmountAvailableAmmo;

}


// Function WBP_HUD_EquippedItem_Ammo.WBP_HUD_EquippedItem_Ammo_C.OnRangedWeaponAmmoChanged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HUD_EquippedItem_Ammo_C::OnRangedWeaponAmmoChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_EquippedItem_Ammo_C", "OnRangedWeaponAmmoChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HUD_EquippedItem_Ammo.WBP_HUD_EquippedItem_Ammo_C.UpdateAmmoBindings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEquippableItem*             CurrentEquippedItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             PreviousEquippedItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>Backpack                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UInventoryComponentBase*     InventoryComponent                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               IsNewItemRanged                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetBackpack_Container                                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetBackpack_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponentBase*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetRangedWeaponData_IsRangedWeapon                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_RangedWeaponClip_C*      CallFunc_TryGetRangedWeaponData_RangedWeaponClip                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_TryGetRangedWeaponData_AmountLoadedAmmo                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_TryGetRangedWeaponData_AmountAvailableAmmo              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetRangedWeaponData_IsRangedWeapon_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_RangedWeaponClip_C*      CallFunc_TryGetRangedWeaponData_RangedWeaponClip_1               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_TryGetRangedWeaponData_AmountLoadedAmmo_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_TryGetRangedWeaponData_AmountAvailableAmmo_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_EquippedItem_Ammo_C::UpdateAmmoBindings(class AEquippableItem* CurrentEquippedItem, class AEquippableItem* PreviousEquippedItem, TScriptInterface<class IItemContainer> Backpack, class UInventoryComponentBase* InventoryComponent, bool IsNewItemRanged, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_TryGetRangedWeaponData_IsRangedWeapon, class UBP_RangedWeaponClip_C* CallFunc_TryGetRangedWeaponData_RangedWeaponClip, int32 CallFunc_TryGetRangedWeaponData_AmountLoadedAmmo, int32 CallFunc_TryGetRangedWeaponData_AmountAvailableAmmo, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_TryGetRangedWeaponData_IsRangedWeapon_1, class UBP_RangedWeaponClip_C* CallFunc_TryGetRangedWeaponData_RangedWeaponClip_1, int32 CallFunc_TryGetRangedWeaponData_AmountLoadedAmmo_1, int32 CallFunc_TryGetRangedWeaponData_AmountAvailableAmmo_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_EquippedItem_Ammo_C", "UpdateAmmoBindings");

	Params::UWBP_HUD_EquippedItem_Ammo_C_UpdateAmmoBindings_Params Parms{};

	Parms.CurrentEquippedItem = CurrentEquippedItem;
	Parms.PreviousEquippedItem = PreviousEquippedItem;
	Parms.Backpack = Backpack;
	Parms.InventoryComponent = InventoryComponent;
	Parms.IsNewItemRanged = IsNewItemRanged;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetBackpack_Container = CallFunc_GetBackpack_Container;
	Parms.CallFunc_GetBackpack_ReturnValue = CallFunc_GetBackpack_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_TryGetRangedWeaponData_IsRangedWeapon = CallFunc_TryGetRangedWeaponData_IsRangedWeapon;
	Parms.CallFunc_TryGetRangedWeaponData_RangedWeaponClip = CallFunc_TryGetRangedWeaponData_RangedWeaponClip;
	Parms.CallFunc_TryGetRangedWeaponData_AmountLoadedAmmo = CallFunc_TryGetRangedWeaponData_AmountLoadedAmmo;
	Parms.CallFunc_TryGetRangedWeaponData_AmountAvailableAmmo = CallFunc_TryGetRangedWeaponData_AmountAvailableAmmo;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_TryGetRangedWeaponData_IsRangedWeapon_1 = CallFunc_TryGetRangedWeaponData_IsRangedWeapon_1;
	Parms.CallFunc_TryGetRangedWeaponData_RangedWeaponClip_1 = CallFunc_TryGetRangedWeaponData_RangedWeaponClip_1;
	Parms.CallFunc_TryGetRangedWeaponData_AmountLoadedAmmo_1 = CallFunc_TryGetRangedWeaponData_AmountLoadedAmmo_1;
	Parms.CallFunc_TryGetRangedWeaponData_AmountAvailableAmmo_1 = CallFunc_TryGetRangedWeaponData_AmountAvailableAmmo_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_EquippedItem_Ammo.WBP_HUD_EquippedItem_Ammo_C.OnEquippedItemChanged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEquippableItem*             NewEquippableItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_EquippedItem_Ammo_C::OnEquippedItemChanged(class AEquippableItem* NewEquippableItem, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_EquippedItem_Ammo_C", "OnEquippedItemChanged");

	Params::UWBP_HUD_EquippedItem_Ammo_C_OnEquippedItemChanged_Params Parms{};

	Parms.NewEquippableItem = NewEquippableItem;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_EquippedItem_Ammo.WBP_HUD_EquippedItem_Ammo_C.RefreshAmmoTextColours
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Total_Inventory_Ammo                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Remaining_Loaded_Ammo                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_EquippedItem_Ammo_C::RefreshAmmoTextColours(int32 Total_Inventory_Ammo, int32 Remaining_Loaded_Ammo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_EquippedItem_Ammo_C", "RefreshAmmoTextColours");

	Params::UWBP_HUD_EquippedItem_Ammo_C_RefreshAmmoTextColours_Params Parms{};

	Parms.Total_Inventory_Ammo = Total_Inventory_Ammo;
	Parms.Remaining_Loaded_Ammo = Remaining_Loaded_Ammo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_EquippedItem_Ammo.WBP_HUD_EquippedItem_Ammo_C.Refresh Ammo Text
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LocalAmmoAmountAvailable                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalAmmoAmountLoaded                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetRangedWeaponData_IsRangedWeapon                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_RangedWeaponClip_C*      CallFunc_TryGetRangedWeaponData_RangedWeaponClip                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_TryGetRangedWeaponData_AmountLoadedAmmo                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_TryGetRangedWeaponData_AmountAvailableAmmo              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)

void UWBP_HUD_EquippedItem_Ammo_C::Refresh_Ammo_Text(int32 LocalAmmoAmountAvailable, int32 LocalAmmoAmountLoaded, bool CallFunc_TryGetRangedWeaponData_IsRangedWeapon, class UBP_RangedWeaponClip_C* CallFunc_TryGetRangedWeaponData_RangedWeaponClip, int32 CallFunc_TryGetRangedWeaponData_AmountLoadedAmmo, int32 CallFunc_TryGetRangedWeaponData_AmountAvailableAmmo, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_EquippedItem_Ammo_C", "Refresh Ammo Text");

	Params::UWBP_HUD_EquippedItem_Ammo_C_Refresh_Ammo_Text_Params Parms{};

	Parms.LocalAmmoAmountAvailable = LocalAmmoAmountAvailable;
	Parms.LocalAmmoAmountLoaded = LocalAmmoAmountLoaded;
	Parms.CallFunc_TryGetRangedWeaponData_IsRangedWeapon = CallFunc_TryGetRangedWeaponData_IsRangedWeapon;
	Parms.CallFunc_TryGetRangedWeaponData_RangedWeaponClip = CallFunc_TryGetRangedWeaponData_RangedWeaponClip;
	Parms.CallFunc_TryGetRangedWeaponData_AmountLoadedAmmo = CallFunc_TryGetRangedWeaponData_AmountLoadedAmmo;
	Parms.CallFunc_TryGetRangedWeaponData_AmountAvailableAmmo = CallFunc_TryGetRangedWeaponData_AmountAvailableAmmo;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_EquippedItem_Ammo.WBP_HUD_EquippedItem_Ammo_C.RefreshName
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetEquippabletemDisplayName_ItemDisplayName             (None)

void UWBP_HUD_EquippedItem_Ammo_C::RefreshName(class FText CallFunc_GetEquippabletemDisplayName_ItemDisplayName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_EquippedItem_Ammo_C", "RefreshName");

	Params::UWBP_HUD_EquippedItem_Ammo_C_RefreshName_Params Parms{};

	Parms.CallFunc_GetEquippabletemDisplayName_ItemDisplayName = CallFunc_GetEquippabletemDisplayName_ItemDisplayName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_EquippedItem_Ammo.WBP_HUD_EquippedItem_Ammo_C.Refresh Widget Info
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HUD_EquippedItem_Ammo_C::Refresh_Widget_Info()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_EquippedItem_Ammo_C", "Refresh Widget Info");



	UObject::ProcessEvent(Func, nullptr);

}

}


