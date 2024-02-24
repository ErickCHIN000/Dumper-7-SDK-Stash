#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C
// (None)

class UClass* UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionableBehaviour_Firearm_AmmoController_Base_C");

	return Clss;
}


// BP_ActionableBehaviour_Firearm_AmmoController_Base_C BP_ActionableBehaviour_Firearm_AmmoController_Base.Default__BP_ActionableBehaviour_Firearm_AmmoController_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::GetDefaultObj()
{
	static class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionableBehaviour_Firearm_AmmoController_Base_C*>(UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetCurrentAmmoInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   AmmoIcon                                                         (Parm, OutParm, HasGetValueTypeHash)
// class FText                        CurrentAmmo                                                      (Parm, OutParm)
// class FText                        TotalAmmo                                                        (Parm, OutParm)
// class FText                        CurrentAmmoCount                                                 (Edit, BlueprintVisible)
// class FText                        TotalAmmoCount                                                   (Edit, BlueprintVisible)
// TSoftObjectPtr<class UTexture2D>   Icon                                                             (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentAmmoItem_SlotValid                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetCurrentAmmoItem_AmmoItemRef                          (ContainsInstancedReference)
// int32                              CallFunc_GetCurrentAmmoCount_CurrentAmmoCount                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::GetCurrentAmmoInfo(TSoftObjectPtr<class UTexture2D>* AmmoIcon, class FText* CurrentAmmo, class FText* TotalAmmo, class FText CurrentAmmoCount, class FText TotalAmmoCount, TSoftObjectPtr<class UTexture2D> Icon, bool CallFunc_GetCurrentAmmoItem_SlotValid, const struct FItemData& CallFunc_GetCurrentAmmoItem_AmmoItemRef, int32 CallFunc_GetCurrentAmmoCount_CurrentAmmoCount, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "GetCurrentAmmoInfo");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_GetCurrentAmmoInfo_Params Parms{};

	Parms.CurrentAmmoCount = CurrentAmmoCount;
	Parms.TotalAmmoCount = TotalAmmoCount;
	Parms.Icon = Icon;
	Parms.CallFunc_GetCurrentAmmoItem_SlotValid = CallFunc_GetCurrentAmmoItem_SlotValid;
	Parms.CallFunc_GetCurrentAmmoItem_AmmoItemRef = CallFunc_GetCurrentAmmoItem_AmmoItemRef;
	Parms.CallFunc_GetCurrentAmmoCount_CurrentAmmoCount = CallFunc_GetCurrentAmmoCount_CurrentAmmoCount;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (AmmoIcon != nullptr)
		*AmmoIcon = Parms.AmmoIcon;

	if (CurrentAmmo != nullptr)
		*CurrentAmmo = Parms.CurrentAmmo;

	if (TotalAmmo != nullptr)
		*TotalAmmo = Parms.TotalAmmo;

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnSprintUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Sprinting                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIcarusGameUserSettings*     CallFunc_GetIcarusGameUserSettings_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanAbortReload_CanAbort                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCanSprintCancelReload_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::OnSprintUpdated(bool Sprinting, class UIcarusGameUserSettings* CallFunc_GetIcarusGameUserSettings_ReturnValue, bool CallFunc_CanAbortReload_CanAbort, bool CallFunc_GetCanSprintCancelReload_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "OnSprintUpdated");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_OnSprintUpdated_Params Parms{};

	Parms.Sprinting = Sprinting;
	Parms.CallFunc_GetIcarusGameUserSettings_ReturnValue = CallFunc_GetIcarusGameUserSettings_ReturnValue;
	Parms.CallFunc_CanAbortReload_CanAbort = CallFunc_CanAbortReload_CanAbort;
	Parms.CallFunc_GetCanSprintCancelReload_ReturnValue = CallFunc_GetCanSprintCancelReload_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.UpdateCachedAmmoInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetCurrentAmmoItem_SlotValid                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetCurrentAmmoItem_AmmoItemRef                          (ContainsInstancedReference)
// struct FItemableData               CallFunc_GetItemableData_ItemableData                            (None)
// enum class EDataValid              CallFunc_GetItemableData_Paths                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetInventoryAmmoCount_Count                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::UpdateCachedAmmoInfo(bool CallFunc_GetCurrentAmmoItem_SlotValid, const struct FItemData& CallFunc_GetCurrentAmmoItem_AmmoItemRef, const struct FItemableData& CallFunc_GetItemableData_ItemableData, enum class EDataValid CallFunc_GetItemableData_Paths, int32 CallFunc_GetInventoryAmmoCount_Count, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "UpdateCachedAmmoInfo");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_UpdateCachedAmmoInfo_Params Parms{};

	Parms.CallFunc_GetCurrentAmmoItem_SlotValid = CallFunc_GetCurrentAmmoItem_SlotValid;
	Parms.CallFunc_GetCurrentAmmoItem_AmmoItemRef = CallFunc_GetCurrentAmmoItem_AmmoItemRef;
	Parms.CallFunc_GetItemableData_ItemableData = CallFunc_GetItemableData_ItemableData;
	Parms.CallFunc_GetItemableData_Paths = CallFunc_GetItemableData_Paths;
	Parms.CallFunc_GetInventoryAmmoCount_Count = CallFunc_GetInventoryAmmoCount_Count;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.ClientCheckAmmoTypeChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDataValid              CallFunc_ItemDataValid_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCurrentAmmoItem_SlotValid                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetCurrentAmmoItem_AmmoItemRef                          (ContainsInstancedReference)
// bool                               CallFunc_IsSameItem_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::ClientCheckAmmoTypeChanged(enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GetCurrentAmmoItem_SlotValid, const struct FItemData& CallFunc_GetCurrentAmmoItem_AmmoItemRef, bool CallFunc_IsSameItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "ClientCheckAmmoTypeChanged");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_ClientCheckAmmoTypeChanged_Params Parms{};

	Parms.CallFunc_ItemDataValid_Paths = CallFunc_ItemDataValid_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetCurrentAmmoItem_SlotValid = CallFunc_GetCurrentAmmoItem_SlotValid;
	Parms.CallFunc_GetCurrentAmmoItem_AmmoItemRef = CallFunc_GetCurrentAmmoItem_AmmoItemRef;
	Parms.CallFunc_IsSameItem_ReturnValue = CallFunc_IsSameItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.FindItemAndMoveToAmmoContainerFromInventory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   ItemToFind                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// class UInventory*                  SourceInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  DestinationInventory                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RemainingAmount                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AmountToTransfer                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Remaining                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Find_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GetItem_ReturnValue                                     (ContainsInstancedReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetItemPropertyValue_IntValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_GetItemPropertyValue_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::FindItemAndMoveToAmmoContainerFromInventory(int32 Amount, const struct FItemData& ItemToFind, class UInventory* SourceInventory, class UInventory* DestinationInventory, int32* RemainingAmount, int32 AmountToTransfer, int32 Remaining, int32 CallFunc_Find_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_GetItemPropertyValue_IntValue, enum class EDataValid CallFunc_GetItemPropertyValue_Paths, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "FindItemAndMoveToAmmoContainerFromInventory");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_FindItemAndMoveToAmmoContainerFromInventory_Params Parms{};

	Parms.Amount = Amount;
	Parms.ItemToFind = ItemToFind;
	Parms.SourceInventory = SourceInventory;
	Parms.DestinationInventory = DestinationInventory;
	Parms.AmountToTransfer = AmountToTransfer;
	Parms.Remaining = Remaining;
	Parms.CallFunc_Find_ReturnValue = CallFunc_Find_ReturnValue;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetItemPropertyValue_IntValue = CallFunc_GetItemPropertyValue_IntValue;
	Parms.CallFunc_GetItemPropertyValue_Paths = CallFunc_GetItemPropertyValue_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RemainingAmount != nullptr)
		*RemainingAmount = Parms.RemainingAmount;

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.TransferAmmoContainerToInventory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetWeaponInventoryContainer_Inventory                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentAmmoItem_SlotValid                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetCurrentAmmoItem_AmmoItemRef                          (ContainsInstancedReference)
// struct FItemData                   CallFunc_RemoveItem_ReturnValue                                  (ContainsInstancedReference)
// int32                              CallFunc_GetItemPropertyValue_IntValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_GetItemPropertyValue_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::TransferAmmoContainerToInventory(class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UInventory* CallFunc_GetWeaponInventoryContainer_Inventory, bool CallFunc_GetCurrentAmmoItem_SlotValid, const struct FItemData& CallFunc_GetCurrentAmmoItem_AmmoItemRef, const struct FItemData& CallFunc_RemoveItem_ReturnValue, int32 CallFunc_GetItemPropertyValue_IntValue, enum class EDataValid CallFunc_GetItemPropertyValue_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "TransferAmmoContainerToInventory");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_TransferAmmoContainerToInventory_Params Parms{};

	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_GetWeaponInventoryContainer_Inventory = CallFunc_GetWeaponInventoryContainer_Inventory;
	Parms.CallFunc_GetCurrentAmmoItem_SlotValid = CallFunc_GetCurrentAmmoItem_SlotValid;
	Parms.CallFunc_GetCurrentAmmoItem_AmmoItemRef = CallFunc_GetCurrentAmmoItem_AmmoItemRef;
	Parms.CallFunc_RemoveItem_ReturnValue = CallFunc_RemoveItem_ReturnValue;
	Parms.CallFunc_GetItemPropertyValue_IntValue = CallFunc_GetItemPropertyValue_IntValue;
	Parms.CallFunc_GetItemPropertyValue_Paths = CallFunc_GetItemPropertyValue_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.TransferItemToAmmoContainer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   ItemType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   Item                                                             (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Remaining                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetWeaponInventoryContainer_Inventory                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_ItemDataValid_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FindItemAndMoveToAmmoContainerFromInventory_RemainingAmount(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindItemAndMoveToAmmoContainerFromInventory_RemainingAmount_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::TransferItemToAmmoContainer(const struct FItemData& ItemType, int32 Amount, const struct FItemData& Item, int32 Remaining, class UInventory* CallFunc_GetWeaponInventoryContainer_Inventory, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_FindItemAndMoveToAmmoContainerFromInventory_RemainingAmount, int32 CallFunc_FindItemAndMoveToAmmoContainerFromInventory_RemainingAmount_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "TransferItemToAmmoContainer");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_TransferItemToAmmoContainer_Params Parms{};

	Parms.ItemType = ItemType;
	Parms.Amount = Amount;
	Parms.Item = Item;
	Parms.Remaining = Remaining;
	Parms.CallFunc_GetWeaponInventoryContainer_Inventory = CallFunc_GetWeaponInventoryContainer_Inventory;
	Parms.CallFunc_ItemDataValid_Paths = CallFunc_ItemDataValid_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_FindItemAndMoveToAmmoContainerFromInventory_RemainingAmount = CallFunc_FindItemAndMoveToAmmoContainerFromInventory_RemainingAmount;
	Parms.CallFunc_FindItemAndMoveToAmmoContainerFromInventory_RemainingAmount_1 = CallFunc_FindItemAndMoveToAmmoContainerFromInventory_RemainingAmount_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.FindValidAmmoData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   AmmoType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   ItemType                                                         (Parm, OutParm, ContainsInstancedReference)
// enum class EDataValid              CallFunc_ItemDataValid_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Find_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindStackTotalWithMatchingData_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GetItem_ReturnValue                                     (ContainsInstancedReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FindStackTotalWithMatchingData_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Find_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetItem_ReturnValue_1                                   (ContainsInstancedReference)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::FindValidAmmoData(const struct FItemData& AmmoType, bool* Found, struct FItemData* ItemType, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Find_ReturnValue, int32 CallFunc_FindStackTotalWithMatchingData_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_FindStackTotalWithMatchingData_ReturnValue_1, int32 CallFunc_Find_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FItemData& CallFunc_GetItem_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "FindValidAmmoData");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_FindValidAmmoData_Params Parms{};

	Parms.AmmoType = AmmoType;
	Parms.CallFunc_ItemDataValid_Paths = CallFunc_ItemDataValid_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Find_ReturnValue = CallFunc_Find_ReturnValue;
	Parms.CallFunc_FindStackTotalWithMatchingData_ReturnValue = CallFunc_FindStackTotalWithMatchingData_ReturnValue;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_FindStackTotalWithMatchingData_ReturnValue_1 = CallFunc_FindStackTotalWithMatchingData_ReturnValue_1;
	Parms.CallFunc_Find_ReturnValue_1 = CallFunc_Find_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_GetItem_ReturnValue_1 = CallFunc_GetItem_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Found != nullptr)
		*Found = Parms.Found;

	if (ItemType != nullptr)
		*ItemType = std::move(Parms.ItemType);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetCurrentAmmoItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SlotValid                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   AmmoItemRef                                                      (Parm, OutParm, ContainsInstancedReference)
// class UInventory*                  CallFunc_GetWeaponInventoryContainer_Inventory                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetItemRef_bIsValid                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetItemRef_ReturnValue                                  (ContainsInstancedReference)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::GetCurrentAmmoItem(bool* SlotValid, struct FItemData* AmmoItemRef, class UInventory* CallFunc_GetWeaponInventoryContainer_Inventory, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetItemRef_bIsValid, const struct FItemData& CallFunc_GetItemRef_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "GetCurrentAmmoItem");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_GetCurrentAmmoItem_Params Parms{};

	Parms.CallFunc_GetWeaponInventoryContainer_Inventory = CallFunc_GetWeaponInventoryContainer_Inventory;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemRef_bIsValid = CallFunc_GetItemRef_bIsValid;
	Parms.CallFunc_GetItemRef_ReturnValue = CallFunc_GetItemRef_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SlotValid != nullptr)
		*SlotValid = Parms.SlotValid;

	if (AmmoItemRef != nullptr)
		*AmmoItemRef = std::move(Parms.AmmoItemRef);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetWeaponInventoryContainer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  Inventory                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryContainerComponent*CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  CallFunc_GetInventory_Inventory                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::GetWeaponInventoryContainer(class UInventory** Inventory, enum class EValid CallFunc_GetTrait_Paths, class UInventoryContainerComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UInventory* CallFunc_GetInventory_Inventory, bool CallFunc_GetInventory_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "GetWeaponInventoryContainer");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_GetWeaponInventoryContainer_Params Parms{};

	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetInventory_Inventory = CallFunc_GetInventory_Inventory;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Inventory != nullptr)
		*Inventory = Parms.Inventory;

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetFiredProjectileInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasBallisticData                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBallisticData              BallisticData                                                    (Parm, OutParm)
// int32                              ProjectileCount                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   ProjectileAccuracy                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   PerProjectileAccuracy                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BallisticCount                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentAmmoItem_SlotValid                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetCurrentAmmoItem_AmmoItemRef                          (ContainsInstancedReference)
// struct FItemStaticData             CallFunc_GetStaticItemData_StaticData                            (None)
// enum class EDataValid              CallFunc_GetStaticItemData_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAmmoTypeData               CallFunc_GetAmmoTypesStruct_AmmoTypes                            (None)
// enum class EValid                  CallFunc_GetAmmoTypesStruct_Paths                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBallisticData              CallFunc_GetBallisticStruct_Ballistic                            (None)
// enum class EValid                  CallFunc_GetBallisticStruct_Paths                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::GetFiredProjectileInfo(bool* HasBallisticData, struct FBallisticData* BallisticData, int32* ProjectileCount, struct FVector2D* ProjectileAccuracy, const struct FVector2D& PerProjectileAccuracy, int32 BallisticCount, bool CallFunc_GetCurrentAmmoItem_SlotValid, const struct FItemData& CallFunc_GetCurrentAmmoItem_AmmoItemRef, const struct FItemStaticData& CallFunc_GetStaticItemData_StaticData, enum class EDataValid CallFunc_GetStaticItemData_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FAmmoTypeData& CallFunc_GetAmmoTypesStruct_AmmoTypes, enum class EValid CallFunc_GetAmmoTypesStruct_Paths, const struct FBallisticData& CallFunc_GetBallisticStruct_Ballistic, enum class EValid CallFunc_GetBallisticStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "GetFiredProjectileInfo");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_GetFiredProjectileInfo_Params Parms{};

	Parms.PerProjectileAccuracy = PerProjectileAccuracy;
	Parms.BallisticCount = BallisticCount;
	Parms.CallFunc_GetCurrentAmmoItem_SlotValid = CallFunc_GetCurrentAmmoItem_SlotValid;
	Parms.CallFunc_GetCurrentAmmoItem_AmmoItemRef = CallFunc_GetCurrentAmmoItem_AmmoItemRef;
	Parms.CallFunc_GetStaticItemData_StaticData = CallFunc_GetStaticItemData_StaticData;
	Parms.CallFunc_GetStaticItemData_Paths = CallFunc_GetStaticItemData_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetAmmoTypesStruct_AmmoTypes = CallFunc_GetAmmoTypesStruct_AmmoTypes;
	Parms.CallFunc_GetAmmoTypesStruct_Paths = CallFunc_GetAmmoTypesStruct_Paths;
	Parms.CallFunc_GetBallisticStruct_Ballistic = CallFunc_GetBallisticStruct_Ballistic;
	Parms.CallFunc_GetBallisticStruct_Paths = CallFunc_GetBallisticStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

	if (HasBallisticData != nullptr)
		*HasBallisticData = Parms.HasBallisticData;

	if (BallisticData != nullptr)
		*BallisticData = std::move(Parms.BallisticData);

	if (ProjectileCount != nullptr)
		*ProjectileCount = Parms.ProjectileCount;

	if (ProjectileAccuracy != nullptr)
		*ProjectileAccuracy = std::move(Parms.ProjectileAccuracy);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.WantsAutoReload
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAmmo_HasAmmo                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::WantsAutoReload(bool CallFunc_HasAmmo_HasAmmo, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "WantsAutoReload");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_WantsAutoReload_Params Parms{};

	Parms.CallFunc_HasAmmo_HasAmmo = CallFunc_HasAmmo_HasAmmo;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetAutoReloadTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              FireRate                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ActionableBehaviour_FireArm_FireController_Base_C*CallFunc_GetFireController_FireController                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFireRate_FireRate                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::GetAutoReloadTime(float* FireRate, class UBP_ActionableBehaviour_FireArm_FireController_Base_C* CallFunc_GetFireController_FireController, float CallFunc_GetFireRate_FireRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "GetAutoReloadTime");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_GetAutoReloadTime_Params Parms{};

	Parms.CallFunc_GetFireController_FireController = CallFunc_GetFireController_FireController;
	Parms.CallFunc_GetFireRate_FireRate = CallFunc_GetFireRate_FireRate;

	UObject::ProcessEvent(Func, &Parms);

	if (FireRate != nullptr)
		*FireRate = Parms.FireRate;

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.FindAmmoTypeToSwapTo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               FoundType                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   AmmoType                                                         (Parm, OutParm, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetInventoryAmmoCount_Count                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FValidAmmoTypes             CallFunc_GetValidAmmoTypesStruct_ValidAmmoTypes                  (None)
// enum class EValid                  CallFunc_GetValidAmmoTypesStruct_Paths                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemsStaticRowHandle       CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindValidAmmoDataByStatic_Found                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_FindValidAmmoDataByStatic_ItemType                      (ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::FindAmmoTypeToSwapTo(bool* FoundType, struct FItemData* AmmoType, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetInventoryAmmoCount_Count, bool CallFunc_Greater_IntInt_ReturnValue, const struct FValidAmmoTypes& CallFunc_GetValidAmmoTypesStruct_ValidAmmoTypes, enum class EValid CallFunc_GetValidAmmoTypesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemsStaticRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_FindValidAmmoDataByStatic_Found, const struct FItemData& CallFunc_FindValidAmmoDataByStatic_ItemType, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "FindAmmoTypeToSwapTo");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_FindAmmoTypeToSwapTo_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetInventoryAmmoCount_Count = CallFunc_GetInventoryAmmoCount_Count;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetValidAmmoTypesStruct_ValidAmmoTypes = CallFunc_GetValidAmmoTypesStruct_ValidAmmoTypes;
	Parms.CallFunc_GetValidAmmoTypesStruct_Paths = CallFunc_GetValidAmmoTypesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_FindValidAmmoDataByStatic_Found = CallFunc_FindValidAmmoDataByStatic_Found;
	Parms.CallFunc_FindValidAmmoDataByStatic_ItemType = CallFunc_FindValidAmmoDataByStatic_ItemType;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FoundType != nullptr)
		*FoundType = Parms.FoundType;

	if (AmmoType != nullptr)
		*AmmoType = std::move(Parms.AmmoType);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.UpdatePersistentAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetCurrentAmmoCount_CurrentAmmoCount                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::UpdatePersistentAudio(int32 CallFunc_GetCurrentAmmoCount_CurrentAmmoCount, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "UpdatePersistentAudio");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_UpdatePersistentAudio_Params Parms{};

	Parms.CallFunc_GetCurrentAmmoCount_CurrentAmmoCount = CallFunc_GetCurrentAmmoCount_CurrentAmmoCount;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetInventoryFromName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        InventoryName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)

class UInventory* UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::GetInventoryFromName(class FName InventoryName, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "GetInventoryFromName");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_GetInventoryFromName_Params Parms{};

	Parms.InventoryName = InventoryName;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetNameForInventory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UInventory*                  Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)

class FName UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::GetNameForInventory(class UInventory* Inventory, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "GetNameForInventory");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_GetNameForInventory_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.ContextMenuAmmoSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetInventoryFromName_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GetItem_ReturnValue                                     (ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EDataValid              CallFunc_ItemDataValid_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::ContextMenuAmmoSelected(class FName ID, int32 Payload, class UInventory* CallFunc_GetInventoryFromName_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "ContextMenuAmmoSelected");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_ContextMenuAmmoSelected_Params Parms{};

	Parms.ID = ID;
	Parms.Payload = Payload;
	Parms.CallFunc_GetInventoryFromName_ReturnValue = CallFunc_GetInventoryFromName_ReturnValue;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_ItemDataValid_Paths = CallFunc_ItemDataValid_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.ContextMenuUnloadSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::ContextMenuUnloadSelected(class FName ID, int32 Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "ContextMenuUnloadSelected");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_ContextMenuUnloadSelected_Params Parms{};

	Parms.ID = ID;
	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.Open Ammo Select Menu
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AsRadial                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Opened                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFindAllStacksResult>AllAmmoTypes                                                     (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FItemableData               Itemable                                                         (Edit, BlueprintVisible)
// TArray<int32>                      AmmoStack                                                        (Edit, BlueprintVisible)
// TArray<struct FFindItemSlotInfo>   Ammo                                                             (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<struct FItemsStaticRowHandle>ValidAmmoTypes                                                   (Edit, BlueprintVisible)
// bool                               ShowUnload                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AContextMenuFactory*         ContextMenu                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             Temp_object_Variable                                             (ReferenceParm, ContainsInstancedReference)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_RadialMenu_ImprovedItemIcon_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusItem*                 K2Node_DynamicCast_AsIcarus_Item                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// struct FFirearmData                CallFunc_GetFirearmData_FirearmData                              (None)
// enum class EDataValid              CallFunc_GetFirearmData_Paths                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRangedWeaponData           CallFunc_GetRangedWeaponData_RangedWeaponData                    (None)
// enum class EDataValid              CallFunc_GetRangedWeaponData_Paths                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FValidAmmoTypes             CallFunc_GetValidAmmoTypesStruct_ValidAmmoTypes                  (None)
// enum class EValid                  CallFunc_GetValidAmmoTypesStruct_Paths                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AContextMenuFactory*         CallFunc_CreateContextMenu_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFindAllStacksResult        CallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCustomItem_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemableData               CallFunc_GetItemableData_ItemableData                            (None)
// enum class EDataValid              CallFunc_GetItemableData_Paths                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             K2Node_Select_Default                                            (ReferenceParm, ContainsInstancedReference)
// class FName                        CallFunc_GetNameForInventory_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContextMenuItemData        K2Node_MakeStruct_ContextMenuItemData                            (ContainsInstancedReference)
// struct FItemsStaticRowHandle       CallFunc_Array_Get_Item_1                                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFindAllStacksResult>CallFunc_FindAllUniqueStacks_ReturnValue                         (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFindAllStacksResult>CallFunc_FindAllUniqueStacks_ReturnValue_1                       (ReferenceParm, ContainsInstancedReference)
// TArray<struct FFindAllStacksResult>CallFunc_CombineFindAllStackResults_ReturnValue                  (ReferenceParm, ContainsInstancedReference)
// TArray<struct FFindAllStacksResult>CallFunc_CombineFindAllStackResults_ReturnValue_1                (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_GetCurrentAmmoCount_CurrentAmmoCount                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FContextMenuItemData        K2Node_MakeStruct_ContextMenuItemData_1                          (ContainsInstancedReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UContextMenuWidget*          CallFunc_ShowAsContextMenu_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UContextMenuWidget*          CallFunc_ShowAsRadialMenu_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LocalOrServer_Local                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusItem*                 K2Node_DynamicCast_AsIcarus_Item_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemableData               CallFunc_GetItemableData_ItemableData_1                          (None)
// enum class EDataValid              CallFunc_GetItemableData_Paths_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::Open_Ammo_Select_Menu(bool AsRadial, bool* Opened, const TArray<struct FFindAllStacksResult>& AllAmmoTypes, const struct FItemableData& Itemable, const TArray<int32>& AmmoStack, const TArray<struct FFindItemSlotInfo>& Ammo, const TArray<struct FItemsStaticRowHandle>& ValidAmmoTypes, bool ShowUnload, class AContextMenuFactory* ContextMenu, TArray<class UWidget*>& Temp_object_Variable, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UUMG_RadialMenu_ImprovedItemIcon_C* CallFunc_Create_ReturnValue, class AIcarusItem* K2Node_DynamicCast_AsIcarus_Item, bool K2Node_DynamicCast_bSuccess, TArray<class UWidget*>& K2Node_MakeArray_Array, const struct FFirearmData& CallFunc_GetFirearmData_FirearmData, enum class EDataValid CallFunc_GetFirearmData_Paths, const struct FRangedWeaponData& CallFunc_GetRangedWeaponData_RangedWeaponData, enum class EDataValid CallFunc_GetRangedWeaponData_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FValidAmmoTypes& CallFunc_GetValidAmmoTypesStruct_ValidAmmoTypes, enum class EValid CallFunc_GetValidAmmoTypesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_2, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class AContextMenuFactory* CallFunc_CreateContextMenu_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_3, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_1, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_4, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FFindAllStacksResult& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsCustomItem_ReturnValue, const struct FItemableData& CallFunc_GetItemableData_ItemableData, enum class EDataValid CallFunc_GetItemableData_Paths, bool K2Node_SwitchEnum_CmpSuccess_5, TArray<class UWidget*>& K2Node_Select_Default, class FName CallFunc_GetNameForInventory_ReturnValue, const struct FContextMenuItemData& K2Node_MakeStruct_ContextMenuItemData, const struct FItemsStaticRowHandle& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, TArray<struct FFindAllStacksResult>& CallFunc_FindAllUniqueStacks_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FFindAllStacksResult>& CallFunc_FindAllUniqueStacks_ReturnValue_1, TArray<struct FFindAllStacksResult>& CallFunc_CombineFindAllStackResults_ReturnValue, TArray<struct FFindAllStacksResult>& CallFunc_CombineFindAllStackResults_ReturnValue_1, int32 CallFunc_GetCurrentAmmoCount_CurrentAmmoCount, bool CallFunc_Greater_IntInt_ReturnValue, const struct FContextMenuItemData& K2Node_MakeStruct_ContextMenuItemData_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UContextMenuWidget* CallFunc_ShowAsContextMenu_ReturnValue, class UContextMenuWidget* CallFunc_ShowAsRadialMenu_ReturnValue, bool CallFunc_LocalOrServer_Local, bool CallFunc_LocalOrServer_Server, class AActor* CallFunc_GetOwner_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class AIcarusItem* K2Node_DynamicCast_AsIcarus_Item_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FItemableData& CallFunc_GetItemableData_ItemableData_1, enum class EDataValid CallFunc_GetItemableData_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_6, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "Open Ammo Select Menu");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_Open_Ammo_Select_Menu_Params Parms{};

	Parms.AsRadial = AsRadial;
	Parms.AllAmmoTypes = AllAmmoTypes;
	Parms.Itemable = Itemable;
	Parms.AmmoStack = AmmoStack;
	Parms.Ammo = Ammo;
	Parms.ValidAmmoTypes = ValidAmmoTypes;
	Parms.ShowUnload = ShowUnload;
	Parms.ContextMenu = ContextMenu;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Item = K2Node_DynamicCast_AsIcarus_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetFirearmData_FirearmData = CallFunc_GetFirearmData_FirearmData;
	Parms.CallFunc_GetFirearmData_Paths = CallFunc_GetFirearmData_Paths;
	Parms.CallFunc_GetRangedWeaponData_RangedWeaponData = CallFunc_GetRangedWeaponData_RangedWeaponData;
	Parms.CallFunc_GetRangedWeaponData_Paths = CallFunc_GetRangedWeaponData_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetValidAmmoTypesStruct_ValidAmmoTypes = CallFunc_GetValidAmmoTypesStruct_ValidAmmoTypes;
	Parms.CallFunc_GetValidAmmoTypesStruct_Paths = CallFunc_GetValidAmmoTypesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_CreateContextMenu_ReturnValue = CallFunc_CreateContextMenu_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_GetIcarusPlayerController_IsValid_1 = CallFunc_GetIcarusPlayerController_IsValid_1;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_1 = CallFunc_GetIcarusPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsUIController_Interface = K2Node_DynamicCast_AsUIController_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.CallFunc_GetUserInterface_UserInterface = CallFunc_GetUserInterface_UserInterface;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_IsCustomItem_ReturnValue = CallFunc_IsCustomItem_ReturnValue;
	Parms.CallFunc_GetItemableData_ItemableData = CallFunc_GetItemableData_ItemableData;
	Parms.CallFunc_GetItemableData_Paths = CallFunc_GetItemableData_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetNameForInventory_ReturnValue = CallFunc_GetNameForInventory_ReturnValue;
	Parms.K2Node_MakeStruct_ContextMenuItemData = K2Node_MakeStruct_ContextMenuItemData;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_FindAllUniqueStacks_ReturnValue = CallFunc_FindAllUniqueStacks_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_FindAllUniqueStacks_ReturnValue_1 = CallFunc_FindAllUniqueStacks_ReturnValue_1;
	Parms.CallFunc_CombineFindAllStackResults_ReturnValue = CallFunc_CombineFindAllStackResults_ReturnValue;
	Parms.CallFunc_CombineFindAllStackResults_ReturnValue_1 = CallFunc_CombineFindAllStackResults_ReturnValue_1;
	Parms.CallFunc_GetCurrentAmmoCount_CurrentAmmoCount = CallFunc_GetCurrentAmmoCount_CurrentAmmoCount;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_ContextMenuItemData_1 = K2Node_MakeStruct_ContextMenuItemData_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_ShowAsContextMenu_ReturnValue = CallFunc_ShowAsContextMenu_ReturnValue;
	Parms.CallFunc_ShowAsRadialMenu_ReturnValue = CallFunc_ShowAsRadialMenu_ReturnValue;
	Parms.CallFunc_LocalOrServer_Local = CallFunc_LocalOrServer_Local;
	Parms.CallFunc_LocalOrServer_Server = CallFunc_LocalOrServer_Server;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.K2Node_DynamicCast_AsIcarus_Item_1 = K2Node_DynamicCast_AsIcarus_Item_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetItemableData_ItemableData_1 = CallFunc_GetItemableData_ItemableData_1;
	Parms.CallFunc_GetItemableData_Paths_1 = CallFunc_GetItemableData_Paths_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_6 = K2Node_SwitchEnum_CmpSuccess_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Opened != nullptr)
		*Opened = Parms.Opened;

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.IsAwaitingAutoReload
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               WaitingReload                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::IsAwaitingAutoReload(bool* WaitingReload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "IsAwaitingAutoReload");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_IsAwaitingAutoReload_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (WaitingReload != nullptr)
		*WaitingReload = Parms.WaitingReload;

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.CanAbortReload
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               CanAbort                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::CanAbortReload(bool* CanAbort)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "CanAbortReload");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_CanAbortReload_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CanAbort != nullptr)
		*CanAbort = Parms.CanAbort;

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnAbortReloadRequested
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::OnAbortReloadRequested()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "OnAbortReloadRequested");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.AutoReload
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_FindAmmoTypeToSwapTo_FoundType                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_FindAmmoTypeToSwapTo_AmmoType                           (ContainsInstancedReference)
// bool                               CallFunc_HasAnyReserveAmmo_HasAnyReserve                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::AutoReload(bool CallFunc_FindAmmoTypeToSwapTo_FoundType, const struct FItemData& CallFunc_FindAmmoTypeToSwapTo_AmmoType, bool CallFunc_HasAnyReserveAmmo_HasAnyReserve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "AutoReload");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_AutoReload_Params Parms{};

	Parms.CallFunc_FindAmmoTypeToSwapTo_FoundType = CallFunc_FindAmmoTypeToSwapTo_FoundType;
	Parms.CallFunc_FindAmmoTypeToSwapTo_AmmoType = CallFunc_FindAmmoTypeToSwapTo_AmmoType;
	Parms.CallFunc_HasAnyReserveAmmo_HasAnyReserve = CallFunc_HasAnyReserveAmmo_HasAnyReserve;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.CheckReload
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_WantsAutoReload_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAutoReloadTime_FireRate                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::CheckReload(bool CallFunc_WantsAutoReload_ReturnValue, float CallFunc_GetAutoReloadTime_FireRate, bool CallFunc_Greater_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "CheckReload");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_CheckReload_Params Parms{};

	Parms.CallFunc_WantsAutoReload_ReturnValue = CallFunc_WantsAutoReload_ReturnValue;
	Parms.CallFunc_GetAutoReloadTime_FireRate = CallFunc_GetAutoReloadTime_FireRate;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.FindValidAmmoDataByStatic
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemsStaticRowHandle       AmmoType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   ItemType                                                         (Parm, OutParm, ContainsInstancedReference)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FindStatic_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindStaticStackTotal_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GetItem_ReturnValue                                     (ContainsInstancedReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FindStaticStackTotal_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindStatic_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetItem_ReturnValue_1                                   (ContainsInstancedReference)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::FindValidAmmoDataByStatic(const struct FItemsStaticRowHandle& AmmoType, bool* Found, struct FItemData* ItemType, bool CallFunc_IsRowHandleValid_ReturnValue, int32 CallFunc_FindStatic_ReturnValue, int32 CallFunc_FindStaticStackTotal_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_FindStaticStackTotal_ReturnValue_1, int32 CallFunc_FindStatic_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FItemData& CallFunc_GetItem_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "FindValidAmmoDataByStatic");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_FindValidAmmoDataByStatic_Params Parms{};

	Parms.AmmoType = AmmoType;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.CallFunc_FindStatic_ReturnValue = CallFunc_FindStatic_ReturnValue;
	Parms.CallFunc_FindStaticStackTotal_ReturnValue = CallFunc_FindStaticStackTotal_ReturnValue;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_FindStaticStackTotal_ReturnValue_1 = CallFunc_FindStaticStackTotal_ReturnValue_1;
	Parms.CallFunc_FindStatic_ReturnValue_1 = CallFunc_FindStatic_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_GetItem_ReturnValue_1 = CallFunc_GetItem_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Found != nullptr)
		*Found = Parms.Found;

	if (ItemType != nullptr)
		*ItemType = std::move(Parms.ItemType);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.SetCurrentAmmoType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   AmmoType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FItemData                   CallFunc_CreateItem_ReturnValue                                  (ContainsInstancedReference)
// enum class ESetDataSuccess         CallFunc_SetItemPropertyValue_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  CallFunc_GetWeaponInventoryContainer_Inventory                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentAmmoItem_SlotValid                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetCurrentAmmoItem_AmmoItemRef                          (ContainsInstancedReference)
// bool                               CallFunc_SetItem_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::SetCurrentAmmoType(const struct FItemData& AmmoType, const struct FItemData& CallFunc_CreateItem_ReturnValue, enum class ESetDataSuccess CallFunc_SetItemPropertyValue_Paths, bool K2Node_SwitchEnum_CmpSuccess, class UInventory* CallFunc_GetWeaponInventoryContainer_Inventory, bool CallFunc_GetCurrentAmmoItem_SlotValid, const struct FItemData& CallFunc_GetCurrentAmmoItem_AmmoItemRef, bool CallFunc_SetItem_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "SetCurrentAmmoType");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_SetCurrentAmmoType_Params Parms{};

	Parms.AmmoType = AmmoType;
	Parms.CallFunc_CreateItem_ReturnValue = CallFunc_CreateItem_ReturnValue;
	Parms.CallFunc_SetItemPropertyValue_Paths = CallFunc_SetItemPropertyValue_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetWeaponInventoryContainer_Inventory = CallFunc_GetWeaponInventoryContainer_Inventory;
	Parms.CallFunc_GetCurrentAmmoItem_SlotValid = CallFunc_GetCurrentAmmoItem_SlotValid;
	Parms.CallFunc_GetCurrentAmmoItem_AmmoItemRef = CallFunc_GetCurrentAmmoItem_AmmoItemRef;
	Parms.CallFunc_SetItem_ReturnValue = CallFunc_SetItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusActor*                ForOwner                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::Setup(class AIcarusActor* ForOwner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "Setup");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_Setup_Params Parms{};

	Parms.ForOwner = ForOwner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnRep_Reloading
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_LocalOrServer_Local                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Local_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::OnRep_Reloading(bool CallFunc_LocalOrServer_Local, bool CallFunc_LocalOrServer_Server, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_LocalOrServer_Local_1, bool CallFunc_LocalOrServer_Server_1, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "OnRep_Reloading");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_OnRep_Reloading_Params Parms{};

	Parms.CallFunc_LocalOrServer_Local = CallFunc_LocalOrServer_Local;
	Parms.CallFunc_LocalOrServer_Server = CallFunc_LocalOrServer_Server;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_LocalOrServer_Local_1 = CallFunc_LocalOrServer_Local_1;
	Parms.CallFunc_LocalOrServer_Server_1 = CallFunc_LocalOrServer_Server_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.HandleShotRollback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OldLocalAmmo                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::HandleShotRollback(int32 OldLocalAmmo, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "HandleShotRollback");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_HandleShotRollback_Params Parms{};

	Parms.OldLocalAmmo = OldLocalAmmo;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.CheckAmmo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInitial                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentAmmoItem_SlotValid                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetCurrentAmmoItem_AmmoItemRef                          (ContainsInstancedReference)
// bool                               CallFunc_HasAmmo_HasAmmo                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FValidAmmoTypes             CallFunc_GetValidAmmoTypesStruct_ValidAmmoTypes                  (None)
// enum class EValid                  CallFunc_GetValidAmmoTypesStruct_Paths                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemsStaticRowHandle       CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindValidAmmoDataByStatic_Found                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_FindValidAmmoDataByStatic_ItemType                      (ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::CheckAmmo(bool bInitial, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GetCurrentAmmoItem_SlotValid, const struct FItemData& CallFunc_GetCurrentAmmoItem_AmmoItemRef, bool CallFunc_HasAmmo_HasAmmo, bool CallFunc_Not_PreBool_ReturnValue, const struct FValidAmmoTypes& CallFunc_GetValidAmmoTypesStruct_ValidAmmoTypes, enum class EValid CallFunc_GetValidAmmoTypesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemsStaticRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_FindValidAmmoDataByStatic_Found, const struct FItemData& CallFunc_FindValidAmmoDataByStatic_ItemType, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "CheckAmmo");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_CheckAmmo_Params Parms{};

	Parms.bInitial = bInitial;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCurrentAmmoItem_SlotValid = CallFunc_GetCurrentAmmoItem_SlotValid;
	Parms.CallFunc_GetCurrentAmmoItem_AmmoItemRef = CallFunc_GetCurrentAmmoItem_AmmoItemRef;
	Parms.CallFunc_HasAmmo_HasAmmo = CallFunc_HasAmmo_HasAmmo;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetValidAmmoTypesStruct_ValidAmmoTypes = CallFunc_GetValidAmmoTypesStruct_ValidAmmoTypes;
	Parms.CallFunc_GetValidAmmoTypesStruct_Paths = CallFunc_GetValidAmmoTypesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_FindValidAmmoDataByStatic_Found = CallFunc_FindValidAmmoDataByStatic_Found;
	Parms.CallFunc_FindValidAmmoDataByStatic_ItemType = CallFunc_FindValidAmmoDataByStatic_ItemType;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.UpdateLocalAmmo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetCurrentAmmoItem_SlotValid                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetCurrentAmmoItem_AmmoItemRef                          (ContainsInstancedReference)
// int32                              CallFunc_GetItemPropertyValue_IntValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_GetItemPropertyValue_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Local                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::UpdateLocalAmmo(bool CallFunc_GetCurrentAmmoItem_SlotValid, const struct FItemData& CallFunc_GetCurrentAmmoItem_AmmoItemRef, int32 CallFunc_GetItemPropertyValue_IntValue, enum class EDataValid CallFunc_GetItemPropertyValue_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_LocalOrServer_Local, bool CallFunc_LocalOrServer_Server)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "UpdateLocalAmmo");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_UpdateLocalAmmo_Params Parms{};

	Parms.CallFunc_GetCurrentAmmoItem_SlotValid = CallFunc_GetCurrentAmmoItem_SlotValid;
	Parms.CallFunc_GetCurrentAmmoItem_AmmoItemRef = CallFunc_GetCurrentAmmoItem_AmmoItemRef;
	Parms.CallFunc_GetItemPropertyValue_IntValue = CallFunc_GetItemPropertyValue_IntValue;
	Parms.CallFunc_GetItemPropertyValue_Paths = CallFunc_GetItemPropertyValue_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_LocalOrServer_Local = CallFunc_LocalOrServer_Local;
	Parms.CallFunc_LocalOrServer_Server = CallFunc_LocalOrServer_Server;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.TryReload
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Force                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ForceIfReloading                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_FindValidAmmoData_Found                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_FindValidAmmoData_ItemType                              (ContainsInstancedReference)
// int32                              CallFunc_GetCurrentAmmoCount_CurrentAmmoCount                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanReload_CanReload                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::TryReload(bool Force, bool ForceIfReloading, bool CallFunc_FindValidAmmoData_Found, const struct FItemData& CallFunc_FindValidAmmoData_ItemType, int32 CallFunc_GetCurrentAmmoCount_CurrentAmmoCount, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_CanReload_CanReload, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "TryReload");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_TryReload_Params Parms{};

	Parms.Force = Force;
	Parms.ForceIfReloading = ForceIfReloading;
	Parms.CallFunc_FindValidAmmoData_Found = CallFunc_FindValidAmmoData_Found;
	Parms.CallFunc_FindValidAmmoData_ItemType = CallFunc_FindValidAmmoData_ItemType;
	Parms.CallFunc_GetCurrentAmmoCount_CurrentAmmoCount = CallFunc_GetCurrentAmmoCount_CurrentAmmoCount;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_CanReload_CanReload = CallFunc_CanReload_CanReload;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.ServerFinishReload
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              MagAmmo                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TotalAmmo                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentAmmoItem_SlotValid                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetCurrentAmmoItem_AmmoItemRef                          (ContainsInstancedReference)
// bool                               CallFunc_GetCurrentAmmoItem_SlotValid_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetCurrentAmmoItem_AmmoItemRef_1                        (ContainsInstancedReference)
// int32                              CallFunc_GetInventoryAmmoCount_Count                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentAmmoCount_CurrentAmmoCount                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAmmoCapacity_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentAmmoCount_CurrentAmmoCount_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::ServerFinishReload(int32 MagAmmo, int32 TotalAmmo, bool CallFunc_GetCurrentAmmoItem_SlotValid, const struct FItemData& CallFunc_GetCurrentAmmoItem_AmmoItemRef, bool CallFunc_GetCurrentAmmoItem_SlotValid_1, const struct FItemData& CallFunc_GetCurrentAmmoItem_AmmoItemRef_1, int32 CallFunc_GetInventoryAmmoCount_Count, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_GetCurrentAmmoCount_CurrentAmmoCount, int32 CallFunc_GetAmmoCapacity_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool Temp_bool_Variable, int32 K2Node_Select_Default, int32 CallFunc_GetCurrentAmmoCount_CurrentAmmoCount_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "ServerFinishReload");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_ServerFinishReload_Params Parms{};

	Parms.MagAmmo = MagAmmo;
	Parms.TotalAmmo = TotalAmmo;
	Parms.CallFunc_GetCurrentAmmoItem_SlotValid = CallFunc_GetCurrentAmmoItem_SlotValid;
	Parms.CallFunc_GetCurrentAmmoItem_AmmoItemRef = CallFunc_GetCurrentAmmoItem_AmmoItemRef;
	Parms.CallFunc_GetCurrentAmmoItem_SlotValid_1 = CallFunc_GetCurrentAmmoItem_SlotValid_1;
	Parms.CallFunc_GetCurrentAmmoItem_AmmoItemRef_1 = CallFunc_GetCurrentAmmoItem_AmmoItemRef_1;
	Parms.CallFunc_GetInventoryAmmoCount_Count = CallFunc_GetInventoryAmmoCount_Count;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetCurrentAmmoCount_CurrentAmmoCount = CallFunc_GetCurrentAmmoCount_CurrentAmmoCount;
	Parms.CallFunc_GetAmmoCapacity_ReturnValue = CallFunc_GetAmmoCapacity_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetCurrentAmmoCount_CurrentAmmoCount_1 = CallFunc_GetCurrentAmmoCount_CurrentAmmoCount_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetReloadAnimPlayRate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStat_Value                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPlayLength_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::GetReloadAnimPlayRate(class UAnimMontage* Montage, int32 CallFunc_GetStat_Value, float CallFunc_GetPlayLength_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "GetReloadAnimPlayRate");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_GetReloadAnimPlayRate_Params Parms{};

	Parms.Montage = Montage;
	Parms.CallFunc_GetStat_Value = CallFunc_GetStat_Value;
	Parms.CallFunc_GetPlayLength_ReturnValue = CallFunc_GetPlayLength_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetReloadTimeMultiplier
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStat_Value                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::GetReloadTimeMultiplier(int32 CallFunc_GetStat_Value, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "GetReloadTimeMultiplier");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_GetReloadTimeMultiplier_Params Parms{};

	Parms.CallFunc_GetStat_Value = CallFunc_GetStat_Value;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.ConsumeAmmo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentAmmoCount_CurrentAmmoCount                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::ConsumeAmmo(int32 Amount, int32 CallFunc_GetCurrentAmmoCount_CurrentAmmoCount, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "ConsumeAmmo");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_ConsumeAmmo_Params Parms{};

	Parms.Amount = Amount;
	Parms.CallFunc_GetCurrentAmmoCount_CurrentAmmoCount = CallFunc_GetCurrentAmmoCount_CurrentAmmoCount;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.SetCurrentAmmoCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentAmmo                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LocalOrServer_Local                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Local_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  CallFunc_GetWeaponInventoryContainer_Inventory                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetItemDynamicProperty_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::SetCurrentAmmoCount(int32 CurrentAmmo, bool CallFunc_LocalOrServer_Local, bool CallFunc_LocalOrServer_Server, bool CallFunc_LocalOrServer_Local_1, bool CallFunc_LocalOrServer_Server_1, class UInventory* CallFunc_GetWeaponInventoryContainer_Inventory, bool CallFunc_SetItemDynamicProperty_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "SetCurrentAmmoCount");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_SetCurrentAmmoCount_Params Parms{};

	Parms.CurrentAmmo = CurrentAmmo;
	Parms.CallFunc_LocalOrServer_Local = CallFunc_LocalOrServer_Local;
	Parms.CallFunc_LocalOrServer_Server = CallFunc_LocalOrServer_Server;
	Parms.CallFunc_LocalOrServer_Local_1 = CallFunc_LocalOrServer_Local_1;
	Parms.CallFunc_LocalOrServer_Server_1 = CallFunc_LocalOrServer_Server_1;
	Parms.CallFunc_GetWeaponInventoryContainer_Inventory = CallFunc_GetWeaponInventoryContainer_Inventory;
	Parms.CallFunc_SetItemDynamicProperty_ReturnValue = CallFunc_SetItemDynamicProperty_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetInventoryAmmoCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   ItemType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// int32                              Count                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_ItemDataValid_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FindStackTotalWithMatchingData_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindStackTotalWithMatchingData_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::GetInventoryAmmoCount(struct FItemData& ItemType, int32* Count, enum class EDataValid CallFunc_ItemDataValid_Paths, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_FindStackTotalWithMatchingData_ReturnValue, int32 CallFunc_FindStackTotalWithMatchingData_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "GetInventoryAmmoCount");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_GetInventoryAmmoCount_Params Parms{};

	Parms.ItemType = ItemType;
	Parms.CallFunc_ItemDataValid_Paths = CallFunc_ItemDataValid_Paths;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_FindStackTotalWithMatchingData_ReturnValue = CallFunc_FindStackTotalWithMatchingData_ReturnValue;
	Parms.CallFunc_FindStackTotalWithMatchingData_ReturnValue_1 = CallFunc_FindStackTotalWithMatchingData_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Count != nullptr)
		*Count = Parms.Count;

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetAmmoCapacity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStat_Value                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::GetAmmoCapacity(int32 CallFunc_GetStat_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "GetAmmoCapacity");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_GetAmmoCapacity_Params Parms{};

	Parms.CallFunc_GetStat_Value = CallFunc_GetStat_Value;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetCurrentAmmoCount
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CurrentAmmoCount                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentAmmoItem_SlotValid                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetCurrentAmmoItem_AmmoItemRef                          (ContainsInstancedReference)
// int32                              CallFunc_GetItemPropertyValue_IntValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_GetItemPropertyValue_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_ItemDataValid_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Local                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::GetCurrentAmmoCount(int32* CurrentAmmoCount, bool CallFunc_GetCurrentAmmoItem_SlotValid, const struct FItemData& CallFunc_GetCurrentAmmoItem_AmmoItemRef, int32 CallFunc_GetItemPropertyValue_IntValue, enum class EDataValid CallFunc_GetItemPropertyValue_Paths, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_LocalOrServer_Local, bool CallFunc_LocalOrServer_Server, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "GetCurrentAmmoCount");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_GetCurrentAmmoCount_Params Parms{};

	Parms.CallFunc_GetCurrentAmmoItem_SlotValid = CallFunc_GetCurrentAmmoItem_SlotValid;
	Parms.CallFunc_GetCurrentAmmoItem_AmmoItemRef = CallFunc_GetCurrentAmmoItem_AmmoItemRef;
	Parms.CallFunc_GetItemPropertyValue_IntValue = CallFunc_GetItemPropertyValue_IntValue;
	Parms.CallFunc_GetItemPropertyValue_Paths = CallFunc_GetItemPropertyValue_Paths;
	Parms.CallFunc_ItemDataValid_Paths = CallFunc_ItemDataValid_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_LocalOrServer_Local = CallFunc_LocalOrServer_Local;
	Parms.CallFunc_LocalOrServer_Server = CallFunc_LocalOrServer_Server;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentAmmoCount != nullptr)
		*CurrentAmmoCount = Parms.CurrentAmmoCount;

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.HasAnyReserveAmmo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasAnyReserve                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCurrentAmmoItem_SlotValid                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetCurrentAmmoItem_AmmoItemRef                          (ContainsInstancedReference)
// int32                              CallFunc_GetInventoryAmmoCount_Count                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::HasAnyReserveAmmo(bool* HasAnyReserve, bool CallFunc_GetCurrentAmmoItem_SlotValid, const struct FItemData& CallFunc_GetCurrentAmmoItem_AmmoItemRef, int32 CallFunc_GetInventoryAmmoCount_Count, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "HasAnyReserveAmmo");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_HasAnyReserveAmmo_Params Parms{};

	Parms.CallFunc_GetCurrentAmmoItem_SlotValid = CallFunc_GetCurrentAmmoItem_SlotValid;
	Parms.CallFunc_GetCurrentAmmoItem_AmmoItemRef = CallFunc_GetCurrentAmmoItem_AmmoItemRef;
	Parms.CallFunc_GetInventoryAmmoCount_Count = CallFunc_GetInventoryAmmoCount_Count;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasAnyReserve != nullptr)
		*HasAnyReserve = Parms.HasAnyReserve;

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.IsReloading
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Reloading                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::IsReloading(bool* Reloading)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "IsReloading");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_IsReloading_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Reloading != nullptr)
		*Reloading = Parms.Reloading;

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.CanReload
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               CanReload                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyReserveAmmo_HasAnyReserve                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentAmmoCount_CurrentAmmoCount                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAmmoCapacity_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::CanReload(bool* CanReload, bool CallFunc_HasAnyReserveAmmo_HasAnyReserve, int32 CallFunc_GetCurrentAmmoCount_CurrentAmmoCount, int32 CallFunc_GetAmmoCapacity_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "CanReload");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_CanReload_Params Parms{};

	Parms.CallFunc_HasAnyReserveAmmo_HasAnyReserve = CallFunc_HasAnyReserveAmmo_HasAnyReserve;
	Parms.CallFunc_GetCurrentAmmoCount_CurrentAmmoCount = CallFunc_GetCurrentAmmoCount_CurrentAmmoCount;
	Parms.CallFunc_GetAmmoCapacity_ReturnValue = CallFunc_GetAmmoCapacity_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanReload != nullptr)
		*CanReload = Parms.CanReload;

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.HasAmmo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               HasAmmo                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentAmmoCount_CurrentAmmoCount                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::HasAmmo(bool* HasAmmo, int32 CallFunc_GetCurrentAmmoCount_CurrentAmmoCount, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "HasAmmo");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_HasAmmo_Params Parms{};

	Parms.CallFunc_GetCurrentAmmoCount_CurrentAmmoCount = CallFunc_GetCurrentAmmoCount_CurrentAmmoCount;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasAmmo != nullptr)
		*HasAmmo = Parms.HasAmmo;

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnLoaded_3BD9368B4FF435E753B9509E9B0FBB43
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>         Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::OnLoaded_3BD9368B4FF435E753B9509E9B0FBB43(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "OnLoaded_3BD9368B4FF435E753B9509E9B0FBB43");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_OnLoaded_3BD9368B4FF435E753B9509E9B0FBB43_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "ReceiveEndPlay");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnInventoryItemAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::OnInventoryItemAdded(class UInventory* Inventory, int32 Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "OnInventoryItemAdded");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_OnInventoryItemAdded_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnTraitAnimNotify
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FAnimNotifyEvent            Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class AActor*                      AnimInstancePawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::OnTraitAnimNotify(struct FAnimNotifyEvent& Notify, class AActor* AnimInstancePawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "OnTraitAnimNotify");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_OnTraitAnimNotify_Params Parms{};

	Parms.Notify = Notify;
	Parms.AnimInstancePawn = AnimInstancePawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnReloadStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::OnReloadStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "OnReloadStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnReloadEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::OnReloadEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "OnReloadEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.HandleReloadAnimNotify
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::HandleReloadAnimNotify(const class FString& NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "HandleReloadAnimNotify");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_HandleReloadAnimNotify_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.LoadAndPlayReloadAnims
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::LoadAndPlayReloadAnims()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "LoadAndPlayReloadAnims");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnAmmoTypeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::OnAmmoTypeChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "OnAmmoTypeChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.Server_UnloadAmmoType
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::Server_UnloadAmmoType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "Server_UnloadAmmoType");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.Server_RequestNewAmmoType
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   NewAmmoType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::Server_RequestNewAmmoType(const struct FItemData& NewAmmoType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "Server_RequestNewAmmoType");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_Server_RequestNewAmmoType_Params Parms{};

	Parms.NewAmmoType = NewAmmoType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.Client_ForceReload
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::Client_ForceReload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "Client_ForceReload");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.PlayReload
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::PlayReload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "PlayReload");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnWeaponFired
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::OnWeaponFired()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "OnWeaponFired");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.Local_PlayReload
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::Local_PlayReload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "Local_PlayReload");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.LateSetup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::LateSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "LateSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.Server_TryReload
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::Server_TryReload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "Server_TryReload");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.TryAbortReload
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::TryAbortReload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "TryAbortReload");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.Server_TryAbortReload
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::Server_TryAbortReload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "Server_TryAbortReload");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnAmmoUnloaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::OnAmmoUnloaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "OnAmmoUnloaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.MC_PlayReload
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::MC_PlayReload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "MC_PlayReload");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnShotRollback
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::OnShotRollback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "OnShotRollback");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.PerformAction
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      InvokingActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableEventType    OnActionType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableTrigger      ActionTrigger                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::PerformAction(class AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "PerformAction");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_PerformAction_Params Parms{};

	Parms.InvokingActor = InvokingActor;
	Parms.OnActionType = OnActionType;
	Parms.ActionTrigger = ActionTrigger;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.SprintToReload
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::SprintToReload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "SprintToReload");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnWeaponInventoryAvailable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::OnWeaponInventoryAvailable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "OnWeaponInventoryAvailable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnWeaponInventoryUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::OnWeaponInventoryUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "OnWeaponInventoryUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.Client_OnReloadEnd
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewAmmoCount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::Client_OnReloadEnd(int32 NewAmmoCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "Client_OnReloadEnd");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_Client_OnReloadEnd_Params Parms{};

	Parms.NewAmmoCount = NewAmmoCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.Server_TryReloadWithTimeStamp
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              RequestTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::Server_TryReloadWithTimeStamp(float RequestTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "Server_TryReloadWithTimeStamp");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_Server_TryReloadWithTimeStamp_Params Parms{};

	Parms.RequestTime = RequestTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.Server_ClientSetReady
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::Server_ClientSetReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "Server_ClientSetReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.Server_CheckInitComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::Server_CheckInitComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "Server_CheckInitComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OwningPlayerInventoryUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::OwningPlayerInventoryUpdated(class UInventory* Inventory, int32 Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "OwningPlayerInventoryUpdated");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_OwningPlayerInventoryUpdated_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.Client_OnItemsUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::Client_OnItemsUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "Client_OnItemsUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AmmoController_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_LocalOrServer_Local                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Local_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LocalOrServer_Local_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  K2Node_CustomEvent_Inventory_1                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Location_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetReloadTimeMultiplier_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEvent            K2Node_Event_Notify                                              (ConstParm, ContainsInstancedReference)
// class AActor*                      K2Node_Event_AnimInstancePawn                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIcarusAnimNotify*           K2Node_DynamicCast_AsIcarus_Anim_Notify                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Local_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   K2Node_CustomEvent_NewAmmoType                                   (ContainsInstancedReference)
// bool                               CallFunc_LocalOrServer_Local_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Local_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_ActionableBehaviour_FireArm_FireController_Base_C*CallFunc_GetFireController_FireController                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Local_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanReload_CanReload                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Local_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Local_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsReloading_Reloading                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Open_Ammo_Select_Menu_Opened                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ContextMenu_Radial_C*   K2Node_DynamicCast_AsUMG_Context_Menu_Radial                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetReloadTimeMultiplier_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStat_Value                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentAmmoCount_CurrentAmmoCount                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindAmmoTypeToSwapTo_FoundType                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_FindAmmoTypeToSwapTo_AmmoType                           (ContainsInstancedReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_InvokingActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableEventType    K2Node_Event_OnActionType                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableTrigger      K2Node_Event_ActionTrigger                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetTimeSeconds_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_LocalOrServer_Local_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Local_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCurrentAmmoItem_SlotValid                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetCurrentAmmoItem_AmmoItemRef                          (ContainsInstancedReference)
// bool                               CallFunc_IsSameItem_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UObject>         K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentAmmoItem_SlotValid_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetCurrentAmmoItem_AmmoItemRef_1                        (ContainsInstancedReference)
// struct FItemStaticData             CallFunc_GetStaticItemData_StaticData                            (None)
// enum class EDataValid              CallFunc_GetStaticItemData_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBallisticData              CallFunc_GetBallisticStruct_Ballistic                            (None)
// enum class EValid                  CallFunc_GetBallisticStruct_Paths                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryContainerComponent*CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasLinkedInventory_Fast_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class UInventory*                  CallFunc_GetWeaponInventoryContainer_Inventory                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NewAmmoCount                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_RequestTime                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_LocalOrServer_Local_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Local_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Local_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server_13                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  K2Node_CustomEvent_Inventory                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Location                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetInventory_ReturnValue_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LocalOrServer_Local_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server_14                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AmmoController_Base(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_LocalOrServer_Local, bool CallFunc_LocalOrServer_Server, bool CallFunc_LocalOrServer_Local_1, bool CallFunc_LocalOrServer_Server_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_LocalOrServer_Local_2, bool CallFunc_LocalOrServer_Server_2, class UInventory* K2Node_CustomEvent_Inventory_1, int32 K2Node_CustomEvent_Location_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, float CallFunc_GetReloadTimeMultiplier_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FAnimNotifyEvent& K2Node_Event_Notify, class AActor* K2Node_Event_AnimInstancePawn, class UIcarusAnimNotify* K2Node_DynamicCast_AsIcarus_Anim_Notify, bool K2Node_DynamicCast_bSuccess, const class FString& K2Node_CustomEvent_NotifyName, bool K2Node_SwitchString_CmpSuccess, bool CallFunc_LocalOrServer_Local_3, bool CallFunc_LocalOrServer_Server_3, const struct FItemData& K2Node_CustomEvent_NewAmmoType, bool CallFunc_LocalOrServer_Local_4, bool CallFunc_LocalOrServer_Server_4, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_LocalOrServer_Local_5, bool CallFunc_LocalOrServer_Server_5, class UBP_ActionableBehaviour_FireArm_FireController_Base_C* CallFunc_GetFireController_FireController, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LocalOrServer_Local_6, bool CallFunc_LocalOrServer_Server_6, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_CanReload_CanReload, bool CallFunc_LocalOrServer_Local_7, bool CallFunc_LocalOrServer_Server_7, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_LocalOrServer_Local_8, bool CallFunc_LocalOrServer_Server_8, bool CallFunc_IsReloading_Reloading, bool CallFunc_Not_PreBool_ReturnValue_2, class UClass* Temp_class_Variable, bool CallFunc_Open_Ammo_Select_Menu_Opened, bool CallFunc_IsValid_ReturnValue_1, class UUMG_ContextMenu_Radial_C* K2Node_DynamicCast_AsUMG_Context_Menu_Radial, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetReloadTimeMultiplier_ReturnValue_1, int32 CallFunc_GetStat_Value, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_FMax_ReturnValue, int32 CallFunc_GetCurrentAmmoCount_CurrentAmmoCount, bool CallFunc_FindAmmoTypeToSwapTo_FoundType, const struct FItemData& CallFunc_FindAmmoTypeToSwapTo_AmmoType, bool CallFunc_EqualEqual_IntInt_ReturnValue, class AActor* K2Node_Event_InvokingActor, enum class EActionableEventType K2Node_Event_OnActionType, enum class EActionableTrigger K2Node_Event_ActionTrigger, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_GetTimeSeconds_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_LocalOrServer_Local_9, bool CallFunc_LocalOrServer_Server_9, bool CallFunc_LocalOrServer_Local_10, bool CallFunc_LocalOrServer_Server_10, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_GetCurrentAmmoItem_SlotValid, const struct FItemData& CallFunc_GetCurrentAmmoItem_AmmoItemRef, bool CallFunc_IsSameItem_ReturnValue, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, bool CallFunc_GetCurrentAmmoItem_SlotValid_1, const struct FItemData& CallFunc_GetCurrentAmmoItem_AmmoItemRef_1, const struct FItemStaticData& CallFunc_GetStaticItemData_StaticData, enum class EDataValid CallFunc_GetStaticItemData_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FBallisticData& CallFunc_GetBallisticStruct_Ballistic, enum class EValid CallFunc_GetBallisticStruct_Paths, enum class EValid CallFunc_GetTrait_Paths, class UInventoryContainerComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_HasLinkedInventory_Fast_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_3, bool CallFunc_IsValidSoftClassReference_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UInventory* CallFunc_GetWeaponInventoryContainer_Inventory, int32 K2Node_CustomEvent_NewAmmoCount, float K2Node_CustomEvent_RequestTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool CallFunc_LocalOrServer_Local_11, bool CallFunc_LocalOrServer_Server_11, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_LocalOrServer_Local_12, bool CallFunc_LocalOrServer_Server_12, bool CallFunc_LocalOrServer_Local_13, bool CallFunc_LocalOrServer_Server_13, class UInventory* K2Node_CustomEvent_Inventory, int32 K2Node_CustomEvent_Location, class UInventory* CallFunc_GetInventory_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue_1, bool CallFunc_LocalOrServer_Local_14, bool CallFunc_LocalOrServer_Server_14, bool CallFunc_IsServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AmmoController_Base");

	Params::UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AmmoController_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_LocalOrServer_Local = CallFunc_LocalOrServer_Local;
	Parms.CallFunc_LocalOrServer_Server = CallFunc_LocalOrServer_Server;
	Parms.CallFunc_LocalOrServer_Local_1 = CallFunc_LocalOrServer_Local_1;
	Parms.CallFunc_LocalOrServer_Server_1 = CallFunc_LocalOrServer_Server_1;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_LocalOrServer_Local_2 = CallFunc_LocalOrServer_Local_2;
	Parms.CallFunc_LocalOrServer_Server_2 = CallFunc_LocalOrServer_Server_2;
	Parms.K2Node_CustomEvent_Inventory_1 = K2Node_CustomEvent_Inventory_1;
	Parms.K2Node_CustomEvent_Location_1 = K2Node_CustomEvent_Location_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetReloadTimeMultiplier_ReturnValue = CallFunc_GetReloadTimeMultiplier_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_Event_Notify = K2Node_Event_Notify;
	Parms.K2Node_Event_AnimInstancePawn = K2Node_Event_AnimInstancePawn;
	Parms.K2Node_DynamicCast_AsIcarus_Anim_Notify = K2Node_DynamicCast_AsIcarus_Anim_Notify;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_LocalOrServer_Local_3 = CallFunc_LocalOrServer_Local_3;
	Parms.CallFunc_LocalOrServer_Server_3 = CallFunc_LocalOrServer_Server_3;
	Parms.K2Node_CustomEvent_NewAmmoType = K2Node_CustomEvent_NewAmmoType;
	Parms.CallFunc_LocalOrServer_Local_4 = CallFunc_LocalOrServer_Local_4;
	Parms.CallFunc_LocalOrServer_Server_4 = CallFunc_LocalOrServer_Server_4;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_LocalOrServer_Local_5 = CallFunc_LocalOrServer_Local_5;
	Parms.CallFunc_LocalOrServer_Server_5 = CallFunc_LocalOrServer_Server_5;
	Parms.CallFunc_GetFireController_FireController = CallFunc_GetFireController_FireController;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_LocalOrServer_Local_6 = CallFunc_LocalOrServer_Local_6;
	Parms.CallFunc_LocalOrServer_Server_6 = CallFunc_LocalOrServer_Server_6;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_CanReload_CanReload = CallFunc_CanReload_CanReload;
	Parms.CallFunc_LocalOrServer_Local_7 = CallFunc_LocalOrServer_Local_7;
	Parms.CallFunc_LocalOrServer_Server_7 = CallFunc_LocalOrServer_Server_7;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_LocalOrServer_Local_8 = CallFunc_LocalOrServer_Local_8;
	Parms.CallFunc_LocalOrServer_Server_8 = CallFunc_LocalOrServer_Server_8;
	Parms.CallFunc_IsReloading_Reloading = CallFunc_IsReloading_Reloading;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_Open_Ammo_Select_Menu_Opened = CallFunc_Open_Ammo_Select_Menu_Opened;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsUMG_Context_Menu_Radial = K2Node_DynamicCast_AsUMG_Context_Menu_Radial;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetReloadTimeMultiplier_ReturnValue_1 = CallFunc_GetReloadTimeMultiplier_ReturnValue_1;
	Parms.CallFunc_GetStat_Value = CallFunc_GetStat_Value;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_GetCurrentAmmoCount_CurrentAmmoCount = CallFunc_GetCurrentAmmoCount_CurrentAmmoCount;
	Parms.CallFunc_FindAmmoTypeToSwapTo_FoundType = CallFunc_FindAmmoTypeToSwapTo_FoundType;
	Parms.CallFunc_FindAmmoTypeToSwapTo_AmmoType = CallFunc_FindAmmoTypeToSwapTo_AmmoType;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Event_InvokingActor = K2Node_Event_InvokingActor;
	Parms.K2Node_Event_OnActionType = K2Node_Event_OnActionType;
	Parms.K2Node_Event_ActionTrigger = K2Node_Event_ActionTrigger;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetTimeSeconds_ReturnValue = CallFunc_GetTimeSeconds_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_LocalOrServer_Local_9 = CallFunc_LocalOrServer_Local_9;
	Parms.CallFunc_LocalOrServer_Server_9 = CallFunc_LocalOrServer_Server_9;
	Parms.CallFunc_LocalOrServer_Local_10 = CallFunc_LocalOrServer_Local_10;
	Parms.CallFunc_LocalOrServer_Server_10 = CallFunc_LocalOrServer_Server_10;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_GetCurrentAmmoItem_SlotValid = CallFunc_GetCurrentAmmoItem_SlotValid;
	Parms.CallFunc_GetCurrentAmmoItem_AmmoItemRef = CallFunc_GetCurrentAmmoItem_AmmoItemRef;
	Parms.CallFunc_IsSameItem_ReturnValue = CallFunc_IsSameItem_ReturnValue;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.CallFunc_GetCurrentAmmoItem_SlotValid_1 = CallFunc_GetCurrentAmmoItem_SlotValid_1;
	Parms.CallFunc_GetCurrentAmmoItem_AmmoItemRef_1 = CallFunc_GetCurrentAmmoItem_AmmoItemRef_1;
	Parms.CallFunc_GetStaticItemData_StaticData = CallFunc_GetStaticItemData_StaticData;
	Parms.CallFunc_GetStaticItemData_Paths = CallFunc_GetStaticItemData_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetBallisticStruct_Ballistic = CallFunc_GetBallisticStruct_Ballistic;
	Parms.CallFunc_GetBallisticStruct_Paths = CallFunc_GetBallisticStruct_Paths;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_HasLinkedInventory_Fast_ReturnValue = CallFunc_HasLinkedInventory_Fast_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_IsValidSoftClassReference_ReturnValue = CallFunc_IsValidSoftClassReference_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_GetWeaponInventoryContainer_Inventory = CallFunc_GetWeaponInventoryContainer_Inventory;
	Parms.K2Node_CustomEvent_NewAmmoCount = K2Node_CustomEvent_NewAmmoCount;
	Parms.K2Node_CustomEvent_RequestTime = K2Node_CustomEvent_RequestTime;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_LocalOrServer_Local_11 = CallFunc_LocalOrServer_Local_11;
	Parms.CallFunc_LocalOrServer_Server_11 = CallFunc_LocalOrServer_Server_11;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_LocalOrServer_Local_12 = CallFunc_LocalOrServer_Local_12;
	Parms.CallFunc_LocalOrServer_Server_12 = CallFunc_LocalOrServer_Server_12;
	Parms.CallFunc_LocalOrServer_Local_13 = CallFunc_LocalOrServer_Local_13;
	Parms.CallFunc_LocalOrServer_Server_13 = CallFunc_LocalOrServer_Server_13;
	Parms.K2Node_CustomEvent_Inventory = K2Node_CustomEvent_Inventory;
	Parms.K2Node_CustomEvent_Location = K2Node_CustomEvent_Location;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.CallFunc_GetInventory_ReturnValue_1 = CallFunc_GetInventory_ReturnValue_1;
	Parms.CallFunc_LocalOrServer_Local_14 = CallFunc_LocalOrServer_Local_14;
	Parms.CallFunc_LocalOrServer_Server_14 = CallFunc_LocalOrServer_Server_14;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_1 = CallFunc_IsLocallyControlled_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.NotifyReloadEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::NotifyReloadEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "NotifyReloadEnd__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.NotifyReloadStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::NotifyReloadStart__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "NotifyReloadStart__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnReloadPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Firearm_AmmoController_Base_C::OnReloadPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Firearm_AmmoController_Base_C", "OnReloadPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


