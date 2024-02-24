#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x368 - 0x340)
// WidgetBlueprintGeneratedClass WBP_HUD_EquippedItem_Ammo.WBP_HUD_EquippedItem_Ammo_C
class UWBP_HUD_EquippedItem_Ammo_C : public UNWXUserWidget
{
public:
	class UTextBlock*                            Txt_ammodisplay_current;                           // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_ammodisplay_current_1;                         // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_ammodisplay_total;                             // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_equippeditemname;                              // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AEquippableItem*                       EquippedItemRef;                                   // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_HUD_EquippedItem_Ammo_C* GetDefaultObj();

	void OnBackpackUpdated(TScriptInterface<class IItemContainer>& Source, struct FInventoryEntry& Item, int32 Quantity);
	void SetActiveItem(class AEquippableItem* Item);
	void GetEquippabletemDisplayName(class AEquippableItem* EquippableItem, class FText* ItemDisplayName, class ABP_EquippableItemBase_C* K2Node_DynamicCast_AsBP_Equippable_Item_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetDisplayName_ItemDisplayName);
	void GetAvailableAmmoAmountfromPlayer(class UBP_RangedWeaponClip_C* RangedWeaponClip, int32* AvailableAmmoFromInventory, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, TScriptInterface<class IBPI_WeaponUser_C> K2Node_DynamicCast_AsBPI_Weapon_User, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FItemDataReference& CallFunc_GetLoadedAmmoType_LoadedAmmoType, int32 CallFunc_GetAmmoAmount_Amount);
	void TryGetRangedWeaponData(class AEquippableItem* EquippableItem, bool* IsRangedWeapon, class UBP_RangedWeaponClip_C** RangedWeaponClip, int32* AmountLoadedAmmo, int32* AmountAvailableAmmo, class UBP_RangedWeaponClip_C* LocalRangedWeaponClipComponent, class UBP_RangedWeaponComponent_C* LocalRangedWeaponComponent, class ABP_RangedWeapon_Base_C* LocalRangedWeaponActor, class ABP_RangedWeapon_Base_C* K2Node_DynamicCast_AsBP_Ranged_Weapon_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetAvailableAmmoAmountfromPlayer_AvailableAmmoFromInventory, int32 CallFunc_GetAmmoRemaining_RemainingAmmo);
	void OnRangedWeaponAmmoChanged();
	void UpdateAmmoBindings(class AEquippableItem* CurrentEquippedItem, class AEquippableItem* PreviousEquippedItem, TScriptInterface<class IItemContainer> Backpack, class UInventoryComponentBase* InventoryComponent, bool IsNewItemRanged, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_TryGetRangedWeaponData_IsRangedWeapon, class UBP_RangedWeaponClip_C* CallFunc_TryGetRangedWeaponData_RangedWeaponClip, int32 CallFunc_TryGetRangedWeaponData_AmountLoadedAmmo, int32 CallFunc_TryGetRangedWeaponData_AmountAvailableAmmo, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_TryGetRangedWeaponData_IsRangedWeapon_1, class UBP_RangedWeaponClip_C* CallFunc_TryGetRangedWeaponData_RangedWeaponClip_1, int32 CallFunc_TryGetRangedWeaponData_AmountLoadedAmmo_1, int32 CallFunc_TryGetRangedWeaponData_AmountAvailableAmmo_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_1);
	void OnEquippedItemChanged(class AEquippableItem* NewEquippableItem, bool CallFunc_IsValid_ReturnValue);
	void RefreshAmmoTextColours(int32 Total_Inventory_Ammo, int32 Remaining_Loaded_Ammo);
	void Refresh_Ammo_Text(int32 LocalAmmoAmountAvailable, int32 LocalAmmoAmountLoaded, bool CallFunc_TryGetRangedWeaponData_IsRangedWeapon, class UBP_RangedWeaponClip_C* CallFunc_TryGetRangedWeaponData_RangedWeaponClip, int32 CallFunc_TryGetRangedWeaponData_AmountLoadedAmmo, int32 CallFunc_TryGetRangedWeaponData_AmountAvailableAmmo, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1);
	void RefreshName(class FText CallFunc_GetEquippabletemDisplayName_ItemDisplayName);
	void Refresh_Widget_Info();
};

}


