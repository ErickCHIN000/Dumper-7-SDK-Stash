#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MenuData_CM_CraftingMenu_Upgrading.BP_MenuData_CM_CraftingMenu_Upgrading_C
// (None)

class UClass* UBP_MenuData_CM_CraftingMenu_Upgrading_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MenuData_CM_CraftingMenu_Upgrading_C");

	return Clss;
}


// BP_MenuData_CM_CraftingMenu_Upgrading_C BP_MenuData_CM_CraftingMenu_Upgrading.Default__BP_MenuData_CM_CraftingMenu_Upgrading_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MenuData_CM_CraftingMenu_Upgrading_C* UBP_MenuData_CM_CraftingMenu_Upgrading_C::GetDefaultObj()
{
	static class UBP_MenuData_CM_CraftingMenu_Upgrading_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MenuData_CM_CraftingMenu_Upgrading_C*>(UBP_MenuData_CM_CraftingMenu_Upgrading_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MenuData_CM_CraftingMenu_Upgrading.BP_MenuData_CM_CraftingMenu_Upgrading_C.OnBackpackReady
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponentBase*     InventoryComponent                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        PlayerController                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetBackpack_Container                                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetBackpack_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponentBase*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetAllItems_Entries                                     (ReferenceParm)
// class ANWXPlayerController*        CallFunc_GetNWXPlayerController_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_CanBeUpgradedOrInfused_CanBeUpgraded                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_MenuData_CM_CraftingMenu_Upgrading_C::OnBackpackReady(bool Success, class UInventoryComponentBase* InventoryComponent, class ANWXPlayerController* PlayerController, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, class ANWXPlayerController* CallFunc_GetNWXPlayerController_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, bool CallFunc_CanBeUpgradedOrInfused_CanBeUpgraded, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuData_CM_CraftingMenu_Upgrading_C", "OnBackpackReady");

	Params::UBP_MenuData_CM_CraftingMenu_Upgrading_C_OnBackpackReady_Params Parms{};

	Parms.Success = Success;
	Parms.InventoryComponent = InventoryComponent;
	Parms.PlayerController = PlayerController;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetBackpack_Container = CallFunc_GetBackpack_Container;
	Parms.CallFunc_GetBackpack_ReturnValue = CallFunc_GetBackpack_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetAllItems_Entries = CallFunc_GetAllItems_Entries;
	Parms.CallFunc_GetNWXPlayerController_ReturnValue = CallFunc_GetNWXPlayerController_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_CanBeUpgradedOrInfused_CanBeUpgraded = CallFunc_CanBeUpgradedOrInfused_CanBeUpgraded;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MenuData_CM_CraftingMenu_Upgrading.BP_MenuData_CM_CraftingMenu_Upgrading_C.OnItemRemoved
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IItemContainer>Source                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FInventoryEntry             Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Quantity                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanBeUpgradedOrInfused_CanBeUpgraded                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           CallFunc_GetEntryFromID_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MenuData_CM_CraftingMenu_Upgrading_C::OnItemRemoved(TScriptInterface<class IItemContainer>& Source, struct FInventoryEntry& Item, int32 Quantity, bool CallFunc_CanBeUpgradedOrInfused_CanBeUpgraded, class UNWXMenuDataEntry* CallFunc_GetEntryFromID_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuData_CM_CraftingMenu_Upgrading_C", "OnItemRemoved");

	Params::UBP_MenuData_CM_CraftingMenu_Upgrading_C_OnItemRemoved_Params Parms{};

	Parms.Source = Source;
	Parms.Item = Item;
	Parms.Quantity = Quantity;
	Parms.CallFunc_CanBeUpgradedOrInfused_CanBeUpgraded = CallFunc_CanBeUpgradedOrInfused_CanBeUpgraded;
	Parms.CallFunc_GetEntryFromID_ReturnValue = CallFunc_GetEntryFromID_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MenuData_CM_CraftingMenu_Upgrading.BP_MenuData_CM_CraftingMenu_Upgrading_C.OnItemAdded
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IItemContainer>Source                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FInventoryEntry             Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Quantity                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanBeUpgradedOrInfused_CanBeUpgraded                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MenuData_CM_CraftingMenu_Upgrading_C::OnItemAdded(TScriptInterface<class IItemContainer>& Source, struct FInventoryEntry& Item, int32 Quantity, bool CallFunc_CanBeUpgradedOrInfused_CanBeUpgraded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuData_CM_CraftingMenu_Upgrading_C", "OnItemAdded");

	Params::UBP_MenuData_CM_CraftingMenu_Upgrading_C_OnItemAdded_Params Parms{};

	Parms.Source = Source;
	Parms.Item = Item;
	Parms.Quantity = Quantity;
	Parms.CallFunc_CanBeUpgradedOrInfused_CanBeUpgraded = CallFunc_CanBeUpgradedOrInfused_CanBeUpgraded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MenuData_CM_CraftingMenu_Upgrading.BP_MenuData_CM_CraftingMenu_Upgrading_C.OnAutoRefreshEnabled
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponentBase*     InventoryComponent                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        PlayerController                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetBackpack_Container                                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetBackpack_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponentBase*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetAllItems_Entries                                     (ReferenceParm)
// class ANWXPlayerController*        CallFunc_GetNWXPlayerController_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_CanBeUpgradedOrInfused_CanBeUpgraded                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           CallFunc_GetEntryFromID_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntryItem*       K2Node_DynamicCast_AsNWXMenu_Data_Entry_Item                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MenuData_CM_CraftingMenu_Upgrading_C::OnAutoRefreshEnabled(class UInventoryComponentBase* InventoryComponent, class ANWXPlayerController* PlayerController, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, class ANWXPlayerController* CallFunc_GetNWXPlayerController_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, bool CallFunc_CanBeUpgradedOrInfused_CanBeUpgraded, class UNWXMenuDataEntry* CallFunc_GetEntryFromID_ReturnValue, class UNWXMenuDataEntryItem* K2Node_DynamicCast_AsNWXMenu_Data_Entry_Item, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuData_CM_CraftingMenu_Upgrading_C", "OnAutoRefreshEnabled");

	Params::UBP_MenuData_CM_CraftingMenu_Upgrading_C_OnAutoRefreshEnabled_Params Parms{};

	Parms.InventoryComponent = InventoryComponent;
	Parms.PlayerController = PlayerController;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetBackpack_Container = CallFunc_GetBackpack_Container;
	Parms.CallFunc_GetBackpack_ReturnValue = CallFunc_GetBackpack_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetAllItems_Entries = CallFunc_GetAllItems_Entries;
	Parms.CallFunc_GetNWXPlayerController_ReturnValue = CallFunc_GetNWXPlayerController_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_CanBeUpgradedOrInfused_CanBeUpgraded = CallFunc_CanBeUpgradedOrInfused_CanBeUpgraded;
	Parms.CallFunc_GetEntryFromID_ReturnValue = CallFunc_GetEntryFromID_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXMenu_Data_Entry_Item = K2Node_DynamicCast_AsNWXMenu_Data_Entry_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MenuData_CM_CraftingMenu_Upgrading.BP_MenuData_CM_CraftingMenu_Upgrading_C.CanBeUpgradedOrInfused
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               CanBeUpgraded                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       NonUpgradeableItemTags                                           (Edit, BlueprintVisible)
// struct FGameplayTagContainer       UpgradeableItemTags                                              (Edit, BlueprintVisible)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetItemTags_ReturnValue                                 (None)
// struct FGameplayTagContainer       CallFunc_GetItemTags_ReturnValue_1                               (None)
// bool                               CallFunc_HasAnyTags_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyTags_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInstanceData_Quality       CallFunc_TryGetItemQuality_Quality                               (NoDestructor)
// enum class EGetResult              CallFunc_TryGetItemQuality_Branches                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MenuData_CM_CraftingMenu_Upgrading_C::CanBeUpgradedOrInfused(struct FInventoryEntry& InventoryEntry, bool* CanBeUpgraded, const struct FGameplayTagContainer& NonUpgradeableItemTags, const struct FGameplayTagContainer& UpgradeableItemTags, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess, const struct FGameplayTagContainer& CallFunc_GetItemTags_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetItemTags_ReturnValue_1, bool CallFunc_HasAnyTags_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasAnyTags_ReturnValue_1, const struct FInstanceData_Quality& CallFunc_TryGetItemQuality_Quality, enum class EGetResult CallFunc_TryGetItemQuality_Branches, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuData_CM_CraftingMenu_Upgrading_C", "CanBeUpgradedOrInfused");

	Params::UBP_MenuData_CM_CraftingMenu_Upgrading_C_CanBeUpgradedOrInfused_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;
	Parms.NonUpgradeableItemTags = NonUpgradeableItemTags;
	Parms.UpgradeableItemTags = UpgradeableItemTags;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetItemTags_ReturnValue = CallFunc_GetItemTags_ReturnValue;
	Parms.CallFunc_GetItemTags_ReturnValue_1 = CallFunc_GetItemTags_ReturnValue_1;
	Parms.CallFunc_HasAnyTags_ReturnValue = CallFunc_HasAnyTags_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_HasAnyTags_ReturnValue_1 = CallFunc_HasAnyTags_ReturnValue_1;
	Parms.CallFunc_TryGetItemQuality_Quality = CallFunc_TryGetItemQuality_Quality;
	Parms.CallFunc_TryGetItemQuality_Branches = CallFunc_TryGetItemQuality_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

	if (CanBeUpgraded != nullptr)
		*CanBeUpgraded = Parms.CanBeUpgraded;

}


// Function BP_MenuData_CM_CraftingMenu_Upgrading.BP_MenuData_CM_CraftingMenu_Upgrading_C.CreateAndQuickAddEntry
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UNWXMenuDataEntry*           CallFunc_CreateEntry_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_Guid_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntryItem*       K2Node_DynamicCast_AsNWXMenu_Data_Entry_Item                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MenuData_CM_CraftingMenu_Upgrading_C::CreateAndQuickAddEntry(struct FInventoryEntry& InventoryEntry, class UNWXMenuDataEntry* CallFunc_CreateEntry_ReturnValue, bool CallFunc_IsValid_Guid_ReturnValue, class UNWXMenuDataEntryItem* K2Node_DynamicCast_AsNWXMenu_Data_Entry_Item, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuData_CM_CraftingMenu_Upgrading_C", "CreateAndQuickAddEntry");

	Params::UBP_MenuData_CM_CraftingMenu_Upgrading_C_CreateAndQuickAddEntry_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;
	Parms.CallFunc_CreateEntry_ReturnValue = CallFunc_CreateEntry_ReturnValue;
	Parms.CallFunc_IsValid_Guid_ReturnValue = CallFunc_IsValid_Guid_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXMenu_Data_Entry_Item = K2Node_DynamicCast_AsNWXMenu_Data_Entry_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MenuData_CM_CraftingMenu_Upgrading.BP_MenuData_CM_CraftingMenu_Upgrading_C.PostInitialize
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBasicAwaiter*               CallFunc_GetInventoryAwaiter_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IAwaitable> CallFunc_AwaitBP_Awaitable_CastInput                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FDelegateHandleBPWrapper    CallFunc_AwaitBP_Handle                                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_MenuData_CM_CraftingMenu_Upgrading_C::PostInitialize(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UBasicAwaiter* CallFunc_GetInventoryAwaiter_ReturnValue, TScriptInterface<class IAwaitable> CallFunc_AwaitBP_Awaitable_CastInput, const struct FDelegateHandleBPWrapper& CallFunc_AwaitBP_Handle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuData_CM_CraftingMenu_Upgrading_C", "PostInitialize");

	Params::UBP_MenuData_CM_CraftingMenu_Upgrading_C_PostInitialize_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetInventoryAwaiter_ReturnValue = CallFunc_GetInventoryAwaiter_ReturnValue;
	Parms.CallFunc_AwaitBP_Awaitable_CastInput = CallFunc_AwaitBP_Awaitable_CastInput;
	Parms.CallFunc_AwaitBP_Handle = CallFunc_AwaitBP_Handle;

	UObject::ProcessEvent(Func, &Parms);

}

}


