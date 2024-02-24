#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_InventoryComponent.BP_InventoryComponent_C
// (None)

class UClass* UBP_InventoryComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_InventoryComponent_C");

	return Clss;
}


// BP_InventoryComponent_C BP_InventoryComponent.Default__BP_InventoryComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_InventoryComponent_C* UBP_InventoryComponent_C::GetDefaultObj()
{
	static class UBP_InventoryComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_InventoryComponent_C*>(UBP_InventoryComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_InventoryComponent.BP_InventoryComponent_C.GetContainerFromProvider
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemContainerHandle        ContainerHandle                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// TScriptInterface<class IItemContainer>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>StorageBox                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>Backpack                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetRealmCardDeck_Container                              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetRealmCardDeck_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetEssencePouch_Container                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetEssencePouch_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemContainerHandle        CallFunc_GetContainerHandle_ReturnValue                          (NoDestructor)
// struct FItemContainerHandle        CallFunc_GetContainerHandle_ReturnValue_1                        (NoDestructor)
// TScriptInterface<class IItemContainer>CallFunc_GetStorageBox_Container                                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetStorageBox_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemContainerHandle        CallFunc_GetContainerHandle_ReturnValue_2                        (NoDestructor)
// bool                               CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetBackpack_Container                                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetBackpack_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemContainerHandle        CallFunc_GetContainerHandle_ReturnValue_3                        (NoDestructor)
// bool                               CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue_3(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

TScriptInterface<class IItemContainer> UBP_InventoryComponent_C::GetContainerFromProvider(struct FItemContainerHandle& ContainerHandle, TScriptInterface<class IItemContainer> StorageBox, TScriptInterface<class IItemContainer> Backpack, TScriptInterface<class IItemContainer> CallFunc_GetRealmCardDeck_Container, bool CallFunc_GetRealmCardDeck_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetEssencePouch_Container, bool CallFunc_GetEssencePouch_ReturnValue, const struct FItemContainerHandle& CallFunc_GetContainerHandle_ReturnValue, const struct FItemContainerHandle& CallFunc_GetContainerHandle_ReturnValue_1, TScriptInterface<class IItemContainer> CallFunc_GetStorageBox_Container, bool CallFunc_GetStorageBox_ReturnValue, bool CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue, const struct FItemContainerHandle& CallFunc_GetContainerHandle_ReturnValue_2, bool CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue_1, bool CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue_2, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue, const struct FItemContainerHandle& CallFunc_GetContainerHandle_ReturnValue_3, bool CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryComponent_C", "GetContainerFromProvider");

	Params::UBP_InventoryComponent_C_GetContainerFromProvider_Params Parms{};

	Parms.ContainerHandle = ContainerHandle;
	Parms.StorageBox = StorageBox;
	Parms.Backpack = Backpack;
	Parms.CallFunc_GetRealmCardDeck_Container = CallFunc_GetRealmCardDeck_Container;
	Parms.CallFunc_GetRealmCardDeck_ReturnValue = CallFunc_GetRealmCardDeck_ReturnValue;
	Parms.CallFunc_GetEssencePouch_Container = CallFunc_GetEssencePouch_Container;
	Parms.CallFunc_GetEssencePouch_ReturnValue = CallFunc_GetEssencePouch_ReturnValue;
	Parms.CallFunc_GetContainerHandle_ReturnValue = CallFunc_GetContainerHandle_ReturnValue;
	Parms.CallFunc_GetContainerHandle_ReturnValue_1 = CallFunc_GetContainerHandle_ReturnValue_1;
	Parms.CallFunc_GetStorageBox_Container = CallFunc_GetStorageBox_Container;
	Parms.CallFunc_GetStorageBox_ReturnValue = CallFunc_GetStorageBox_ReturnValue;
	Parms.CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue = CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue;
	Parms.CallFunc_GetContainerHandle_ReturnValue_2 = CallFunc_GetContainerHandle_ReturnValue_2;
	Parms.CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue_1 = CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue_1;
	Parms.CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue_2 = CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue_2;
	Parms.CallFunc_GetBackpack_Container = CallFunc_GetBackpack_Container;
	Parms.CallFunc_GetBackpack_ReturnValue = CallFunc_GetBackpack_ReturnValue;
	Parms.CallFunc_GetContainerHandle_ReturnValue_3 = CallFunc_GetContainerHandle_ReturnValue_3;
	Parms.CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue_3 = CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_InventoryComponent.BP_InventoryComponent_C.GetDefaultContainer
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IItemContainer>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetBackpack_Container                                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetBackpack_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

TScriptInterface<class IItemContainer> UBP_InventoryComponent_C::GetDefaultContainer(TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryComponent_C", "GetDefaultContainer");

	Params::UBP_InventoryComponent_C_GetDefaultContainer_Params Parms{};

	Parms.CallFunc_GetBackpack_Container = CallFunc_GetBackpack_Container;
	Parms.CallFunc_GetBackpack_ReturnValue = CallFunc_GetBackpack_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_InventoryComponent.BP_InventoryComponent_C.HasContainer
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IItemContainer>Container                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemContainerHandle        CallFunc_GetContainerHandle_ReturnValue                          (NoDestructor)
// bool                               CallFunc_HasContainerFromHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_InventoryComponent_C::HasContainer(TScriptInterface<class IItemContainer>& Container, const struct FItemContainerHandle& CallFunc_GetContainerHandle_ReturnValue, bool CallFunc_HasContainerFromHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryComponent_C", "HasContainer");

	Params::UBP_InventoryComponent_C_HasContainer_Params Parms{};

	Parms.Container = Container;
	Parms.CallFunc_GetContainerHandle_ReturnValue = CallFunc_GetContainerHandle_ReturnValue;
	Parms.CallFunc_HasContainerFromHandle_ReturnValue = CallFunc_HasContainerFromHandle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_InventoryComponent.BP_InventoryComponent_C.HasContainerFromHandle
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemContainerHandle        ContainerHandle                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>StorageBox                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>Backpack                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FItemContainerHandle        CallFunc_GetContainerHandle_ReturnValue                          (NoDestructor)
// struct FItemContainerHandle        CallFunc_GetContainerHandle_ReturnValue_1                        (NoDestructor)
// bool                               CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetStorageBox_Container                                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetStorageBox_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetBackpack_Container                                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetBackpack_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_InventoryComponent_C::HasContainerFromHandle(struct FItemContainerHandle& ContainerHandle, TScriptInterface<class IItemContainer> StorageBox, TScriptInterface<class IItemContainer> Backpack, const struct FItemContainerHandle& CallFunc_GetContainerHandle_ReturnValue, const struct FItemContainerHandle& CallFunc_GetContainerHandle_ReturnValue_1, bool CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue, bool CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue_1, TScriptInterface<class IItemContainer> CallFunc_GetStorageBox_Container, bool CallFunc_GetStorageBox_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryComponent_C", "HasContainerFromHandle");

	Params::UBP_InventoryComponent_C_HasContainerFromHandle_Params Parms{};

	Parms.ContainerHandle = ContainerHandle;
	Parms.StorageBox = StorageBox;
	Parms.Backpack = Backpack;
	Parms.CallFunc_GetContainerHandle_ReturnValue = CallFunc_GetContainerHandle_ReturnValue;
	Parms.CallFunc_GetContainerHandle_ReturnValue_1 = CallFunc_GetContainerHandle_ReturnValue_1;
	Parms.CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue = CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue;
	Parms.CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue_1 = CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue_1;
	Parms.CallFunc_GetStorageBox_Container = CallFunc_GetStorageBox_Container;
	Parms.CallFunc_GetStorageBox_ReturnValue = CallFunc_GetStorageBox_ReturnValue;
	Parms.CallFunc_GetBackpack_Container = CallFunc_GetBackpack_Container;
	Parms.CallFunc_GetBackpack_ReturnValue = CallFunc_GetBackpack_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_InventoryComponent.BP_InventoryComponent_C.SendEssenceTelemetry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      SourceActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bIsSink                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerState*             PlayerState                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerState*             K2Node_DynamicCast_AsNWXPlayer_State                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// int32                              CallFunc_GetEssenceCountsFromEntries_T0Count                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetEssenceCountsFromEntries_T1Count                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetEssenceCountsFromEntries_T2Count                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetEssenceCountsFromEntries_T3Count                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEssenceCountsFromEntries_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InventoryComponent_C::SendEssenceTelemetry(class AActor* SourceActor, const struct FInventoryEntry& Item, bool bIsSink, class ANWXPlayerState* PlayerState, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class ANWXPlayerState* K2Node_DynamicCast_AsNWXPlayer_State, bool K2Node_DynamicCast_bSuccess_1, TArray<struct FInventoryEntry>& K2Node_MakeArray_Array, int32 CallFunc_GetEssenceCountsFromEntries_T0Count, int32 CallFunc_GetEssenceCountsFromEntries_T1Count, int32 CallFunc_GetEssenceCountsFromEntries_T2Count, int32 CallFunc_GetEssenceCountsFromEntries_T3Count, bool CallFunc_GetEssenceCountsFromEntries_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryComponent_C", "SendEssenceTelemetry");

	Params::UBP_InventoryComponent_C_SendEssenceTelemetry_Params Parms{};

	Parms.SourceActor = SourceActor;
	Parms.Item = Item;
	Parms.bIsSink = bIsSink;
	Parms.PlayerState = PlayerState;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller = K2Node_DynamicCast_AsNWXPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsNWXPlayer_State = K2Node_DynamicCast_AsNWXPlayer_State;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetEssenceCountsFromEntries_T0Count = CallFunc_GetEssenceCountsFromEntries_T0Count;
	Parms.CallFunc_GetEssenceCountsFromEntries_T1Count = CallFunc_GetEssenceCountsFromEntries_T1Count;
	Parms.CallFunc_GetEssenceCountsFromEntries_T2Count = CallFunc_GetEssenceCountsFromEntries_T2Count;
	Parms.CallFunc_GetEssenceCountsFromEntries_T3Count = CallFunc_GetEssenceCountsFromEntries_T3Count;
	Parms.CallFunc_GetEssenceCountsFromEntries_ReturnValue = CallFunc_GetEssenceCountsFromEntries_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InventoryComponent.BP_InventoryComponent_C.ConsumeItem
// (Private, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FInventoryEntry             ItemEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class ANWXPlayerCharacter*         Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EGetResult              CallFunc_GetCurrentContainerForItem_OutBranch                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetCurrentContainerForItem_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveItem_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InventoryComponent_C::ConsumeItem(const struct FInventoryEntry& ItemEntry, class ANWXPlayerCharacter* Character, enum class EGetResult CallFunc_GetCurrentContainerForItem_OutBranch, TScriptInterface<class IItemContainer> CallFunc_GetCurrentContainerForItem_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryComponent_C", "ConsumeItem");

	Params::UBP_InventoryComponent_C_ConsumeItem_Params Parms{};

	Parms.ItemEntry = ItemEntry;
	Parms.Character = Character;
	Parms.CallFunc_GetCurrentContainerForItem_OutBranch = CallFunc_GetCurrentContainerForItem_OutBranch;
	Parms.CallFunc_GetCurrentContainerForItem_ReturnValue = CallFunc_GetCurrentContainerForItem_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_RemoveItem_ReturnValue = CallFunc_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InventoryComponent.BP_InventoryComponent_C.DoesOwnerHaveRestriction
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStateActive_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InventoryComponent_C::DoesOwnerHaveRestriction(const struct FGameplayTag& Tag, bool* Result, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsStateActive_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryComponent_C", "DoesOwnerHaveRestriction");

	Params::UBP_InventoryComponent_C_DoesOwnerHaveRestriction_Params Parms{};

	Parms.Tag = Tag;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsStateActive_ReturnValue = CallFunc_IsStateActive_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_InventoryComponent.BP_InventoryComponent_C.CanCheat
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanCheat                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseSupportCommands_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PlayerHasEntitlement_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InventoryComponent_C::CanCheat(bool* CanCheat, class AActor* CallFunc_GetOwner_ReturnValue, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanUseSupportCommands_ReturnValue, bool CallFunc_PlayerHasEntitlement_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryComponent_C", "CanCheat");

	Params::UBP_InventoryComponent_C_CanCheat_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller = K2Node_DynamicCast_AsNWXPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CanUseSupportCommands_ReturnValue = CallFunc_CanUseSupportCommands_ReturnValue;
	Parms.CallFunc_PlayerHasEntitlement_ReturnValue = CallFunc_PlayerHasEntitlement_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanCheat != nullptr)
		*CanCheat = Parms.CanCheat;

}


// Function BP_InventoryComponent.BP_InventoryComponent_C.TransferItem
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemContainerHandle        OldContainerHandle                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FItemContainerHandle        NewContainerHandle                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FGuid                       ItemToTransfer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              QuantityToTransfer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      SourceActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetContainerFromHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FInventoryEntryIdAndQuantityK2Node_MakeStruct_InventoryEntryIdAndQuantity                    (NoDestructor)
// TScriptInterface<class IItemContainer>CallFunc_GetContainerFromHandle_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int32                              CallFunc_TransferItemToContainer_AmountTransferred               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TransferItemToContainer_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InventoryComponent_C::TransferItem(const struct FItemContainerHandle& OldContainerHandle, const struct FItemContainerHandle& NewContainerHandle, const struct FGuid& ItemToTransfer, int32 QuantityToTransfer, class AActor* SourceActor, bool* Success, TScriptInterface<class IItemContainer> CallFunc_GetContainerFromHandle_ReturnValue, const struct FInventoryEntryIdAndQuantity& K2Node_MakeStruct_InventoryEntryIdAndQuantity, TScriptInterface<class IItemContainer> CallFunc_GetContainerFromHandle_ReturnValue_1, int32 CallFunc_TransferItemToContainer_AmountTransferred, bool CallFunc_TransferItemToContainer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryComponent_C", "TransferItem");

	Params::UBP_InventoryComponent_C_TransferItem_Params Parms{};

	Parms.OldContainerHandle = OldContainerHandle;
	Parms.NewContainerHandle = NewContainerHandle;
	Parms.ItemToTransfer = ItemToTransfer;
	Parms.QuantityToTransfer = QuantityToTransfer;
	Parms.SourceActor = SourceActor;
	Parms.CallFunc_GetContainerFromHandle_ReturnValue = CallFunc_GetContainerFromHandle_ReturnValue;
	Parms.K2Node_MakeStruct_InventoryEntryIdAndQuantity = K2Node_MakeStruct_InventoryEntryIdAndQuantity;
	Parms.CallFunc_GetContainerFromHandle_ReturnValue_1 = CallFunc_GetContainerFromHandle_ReturnValue_1;
	Parms.CallFunc_TransferItemToContainer_AmountTransferred = CallFunc_TransferItemToContainer_AmountTransferred;
	Parms.CallFunc_TransferItemToContainer_ReturnValue = CallFunc_TransferItemToContainer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_InventoryComponent.BP_InventoryComponent_C.DEBUG_AddInventoryEntryToBackpack
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_InventoryComponent_C::DEBUG_AddInventoryEntryToBackpack(const struct FInventoryEntry& InventoryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryComponent_C", "DEBUG_AddInventoryEntryToBackpack");

	Params::UBP_InventoryComponent_C_DEBUG_AddInventoryEntryToBackpack_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InventoryComponent.BP_InventoryComponent_C.UI_RemoveItemByID
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       InstanceID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Quantity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerInventoryContainerTypeParentContainerType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InventoryComponent_C::UI_RemoveItemByID(const struct FGuid& InstanceID, int32 Quantity, enum class EPlayerInventoryContainerType ParentContainerType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryComponent_C", "UI_RemoveItemByID");

	Params::UBP_InventoryComponent_C_UI_RemoveItemByID_Params Parms{};

	Parms.InstanceID = InstanceID;
	Parms.Quantity = Quantity;
	Parms.ParentContainerType = ParentContainerType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InventoryComponent.BP_InventoryComponent_C.UI_DropItem
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CameraTransform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       InstanceID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerInventoryContainerTypeContainerType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              DropQuantity                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InventoryComponent_C::UI_DropItem(const struct FTransform& CameraTransform, const struct FGuid& InstanceID, enum class EPlayerInventoryContainerType ContainerType, int32 DropQuantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryComponent_C", "UI_DropItem");

	Params::UBP_InventoryComponent_C_UI_DropItem_Params Parms{};

	Parms.CameraTransform = CameraTransform;
	Parms.InstanceID = InstanceID;
	Parms.ContainerType = ContainerType;
	Parms.DropQuantity = DropQuantity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InventoryComponent.BP_InventoryComponent_C.UI_TransferItem
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IItemContainer>OldContainerHandle                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>NewContainerHandle                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             ItemToTransfer                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                      SourceActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsStoringItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InventoryComponent_C::UI_TransferItem(TScriptInterface<class IItemContainer> OldContainerHandle, TScriptInterface<class IItemContainer> NewContainerHandle, const struct FInventoryEntry& ItemToTransfer, class AActor* SourceActor, class AActor* TargetActor, bool IsStoringItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryComponent_C", "UI_TransferItem");

	Params::UBP_InventoryComponent_C_UI_TransferItem_Params Parms{};

	Parms.OldContainerHandle = OldContainerHandle;
	Parms.NewContainerHandle = NewContainerHandle;
	Parms.ItemToTransfer = ItemToTransfer;
	Parms.SourceActor = SourceActor;
	Parms.TargetActor = TargetActor;
	Parms.IsStoringItem = IsStoringItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InventoryComponent.BP_InventoryComponent_C.UI_ConsumeItem
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             Item_Entry                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class ANWXPlayerCharacter*         Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_InventoryComponent_C::UI_ConsumeItem(const struct FInventoryEntry& Item_Entry, class ANWXPlayerCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryComponent_C", "UI_ConsumeItem");

	Params::UBP_InventoryComponent_C_UI_ConsumeItem_Params Parms{};

	Parms.Item_Entry = Item_Entry;
	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InventoryComponent.BP_InventoryComponent_C.UI_RepairItem
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             ItemEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_InventoryComponent_C::UI_RepairItem(const struct FInventoryEntry& ItemEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryComponent_C", "UI_RepairItem");

	Params::UBP_InventoryComponent_C_UI_RepairItem_Params Parms{};

	Parms.ItemEntry = ItemEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InventoryComponent.BP_InventoryComponent_C.UI_ExtractItem
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       InstanceID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerInventoryContainerTypeContainerType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Quantity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InventoryComponent_C::UI_ExtractItem(const struct FGuid& InstanceID, enum class EPlayerInventoryContainerType ContainerType, int32 Quantity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryComponent_C", "UI_ExtractItem");

	Params::UBP_InventoryComponent_C_UI_ExtractItem_Params Parms{};

	Parms.InstanceID = InstanceID;
	Parms.ContainerType = ContainerType;
	Parms.Quantity = Quantity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InventoryComponent.BP_InventoryComponent_C.UI_RepairAllItems
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_InventoryComponent_C::UI_RepairAllItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryComponent_C", "UI_RepairAllItems");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_InventoryComponent.BP_InventoryComponent_C.ExecuteUbergraph_BP_InventoryComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesOwnerHaveRestriction_Result                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesOwnerHaveRestriction_Result_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       K2Node_CustomEvent_InstanceID                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerInventoryContainerTypeK2Node_CustomEvent_ContainerType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Quantity                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGetResult              CallFunc_GetContainerForContainerType_OutBranch                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetContainerForContainerType_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_DoesOwnerHaveRestriction_Result_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             K2Node_CustomEvent_ItemEntry                                     (None)
// struct FInventoryEntry             K2Node_CustomEvent_Item_Entry                                    (None)
// class ANWXPlayerCharacter*         K2Node_CustomEvent_Character                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>K2Node_CustomEvent_OldContainerHandle                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>K2Node_CustomEvent_NewContainerHandle                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             K2Node_CustomEvent_ItemToTransfer                                (None)
// class AActor*                      K2Node_CustomEvent_SourceActor                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_TargetActor                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsStoringItem                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  K2Node_CustomEvent_CameraTransform                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       K2Node_CustomEvent_InstanceID_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerInventoryContainerTypeK2Node_CustomEvent_ContainerType_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_DropQuantity                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DropItemByInstanceIdAndContainerType_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// struct FGuid                       K2Node_CustomEvent_InstanceID_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Quantity_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerInventoryContainerTypeK2Node_CustomEvent_ParentContainerType                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntryIdAndQuantityK2Node_MakeStruct_InventoryEntryIdAndQuantity                    (NoDestructor)
// enum class EGetResult              CallFunc_GetContainerForContainerType_OutBranch_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetContainerForContainerType_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int32                              CallFunc_TransferItemToContainer_AmountTransferred               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TransferItemToContainer_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveItem_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                K2Node_DynamicCast_AsPlayer_State                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanCheat_CanCheat                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             K2Node_CustomEvent_InventoryEntry                                (None)
// bool                               CallFunc_ClaimItem_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGuid>               CallFunc_ClaimItem_ClaimedInstances                              (ReferenceParm)
// TArray<struct FInventoryEntry>     CallFunc_ClaimItem_UnclaimedItems                                (ReferenceParm)
// bool                               CallFunc_DoesOwnerHaveRestriction_Result_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesOwnerHaveRestriction_Result_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesOwnerHaveRestriction_Result_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InventoryComponent_C::ExecuteUbergraph_BP_InventoryComponent(int32 EntryPoint, bool CallFunc_DoesOwnerHaveRestriction_Result, bool CallFunc_DoesOwnerHaveRestriction_Result_1, const struct FGuid& K2Node_CustomEvent_InstanceID, enum class EPlayerInventoryContainerType K2Node_CustomEvent_ContainerType, int32 K2Node_CustomEvent_Quantity, enum class EGetResult CallFunc_GetContainerForContainerType_OutBranch, TScriptInterface<class IItemContainer> CallFunc_GetContainerForContainerType_ReturnValue, bool CallFunc_DoesOwnerHaveRestriction_Result_2, bool K2Node_SwitchEnum_CmpSuccess, const struct FInventoryEntry& K2Node_CustomEvent_ItemEntry, const struct FInventoryEntry& K2Node_CustomEvent_Item_Entry, class ANWXPlayerCharacter* K2Node_CustomEvent_Character, TScriptInterface<class IItemContainer> K2Node_CustomEvent_OldContainerHandle, TScriptInterface<class IItemContainer> K2Node_CustomEvent_NewContainerHandle, const struct FInventoryEntry& K2Node_CustomEvent_ItemToTransfer, class AActor* K2Node_CustomEvent_SourceActor, class AActor* K2Node_CustomEvent_TargetActor, bool K2Node_CustomEvent_IsStoringItem, const struct FTransform& K2Node_CustomEvent_CameraTransform, const struct FGuid& K2Node_CustomEvent_InstanceID_1, enum class EPlayerInventoryContainerType K2Node_CustomEvent_ContainerType_1, int32 K2Node_CustomEvent_DropQuantity, bool CallFunc_DropItemByInstanceIdAndContainerType_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const struct FGuid& K2Node_CustomEvent_InstanceID_2, int32 K2Node_CustomEvent_Quantity_1, enum class EPlayerInventoryContainerType K2Node_CustomEvent_ParentContainerType, const struct FInventoryEntryIdAndQuantity& K2Node_MakeStruct_InventoryEntryIdAndQuantity, enum class EGetResult CallFunc_GetContainerForContainerType_OutBranch_1, TScriptInterface<class IItemContainer> CallFunc_GetContainerForContainerType_ReturnValue_1, int32 CallFunc_TransferItemToContainer_AmountTransferred, bool CallFunc_TransferItemToContainer_ReturnValue, bool CallFunc_RemoveItem_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class AController* K2Node_DynamicCast_AsController, bool K2Node_DynamicCast_bSuccess, class APlayerState* K2Node_DynamicCast_AsPlayer_State, bool K2Node_DynamicCast_bSuccess_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_CanCheat_CanCheat, const struct FInventoryEntry& K2Node_CustomEvent_InventoryEntry, bool CallFunc_ClaimItem_bSuccess, TArray<struct FGuid>& CallFunc_ClaimItem_ClaimedInstances, TArray<struct FInventoryEntry>& CallFunc_ClaimItem_UnclaimedItems, bool CallFunc_DoesOwnerHaveRestriction_Result_3, bool CallFunc_DoesOwnerHaveRestriction_Result_4, bool CallFunc_DoesOwnerHaveRestriction_Result_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryComponent_C", "ExecuteUbergraph_BP_InventoryComponent");

	Params::UBP_InventoryComponent_C_ExecuteUbergraph_BP_InventoryComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_DoesOwnerHaveRestriction_Result = CallFunc_DoesOwnerHaveRestriction_Result;
	Parms.CallFunc_DoesOwnerHaveRestriction_Result_1 = CallFunc_DoesOwnerHaveRestriction_Result_1;
	Parms.K2Node_CustomEvent_InstanceID = K2Node_CustomEvent_InstanceID;
	Parms.K2Node_CustomEvent_ContainerType = K2Node_CustomEvent_ContainerType;
	Parms.K2Node_CustomEvent_Quantity = K2Node_CustomEvent_Quantity;
	Parms.CallFunc_GetContainerForContainerType_OutBranch = CallFunc_GetContainerForContainerType_OutBranch;
	Parms.CallFunc_GetContainerForContainerType_ReturnValue = CallFunc_GetContainerForContainerType_ReturnValue;
	Parms.CallFunc_DoesOwnerHaveRestriction_Result_2 = CallFunc_DoesOwnerHaveRestriction_Result_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CustomEvent_ItemEntry = K2Node_CustomEvent_ItemEntry;
	Parms.K2Node_CustomEvent_Item_Entry = K2Node_CustomEvent_Item_Entry;
	Parms.K2Node_CustomEvent_Character = K2Node_CustomEvent_Character;
	Parms.K2Node_CustomEvent_OldContainerHandle = K2Node_CustomEvent_OldContainerHandle;
	Parms.K2Node_CustomEvent_NewContainerHandle = K2Node_CustomEvent_NewContainerHandle;
	Parms.K2Node_CustomEvent_ItemToTransfer = K2Node_CustomEvent_ItemToTransfer;
	Parms.K2Node_CustomEvent_SourceActor = K2Node_CustomEvent_SourceActor;
	Parms.K2Node_CustomEvent_TargetActor = K2Node_CustomEvent_TargetActor;
	Parms.K2Node_CustomEvent_IsStoringItem = K2Node_CustomEvent_IsStoringItem;
	Parms.K2Node_CustomEvent_CameraTransform = K2Node_CustomEvent_CameraTransform;
	Parms.K2Node_CustomEvent_InstanceID_1 = K2Node_CustomEvent_InstanceID_1;
	Parms.K2Node_CustomEvent_ContainerType_1 = K2Node_CustomEvent_ContainerType_1;
	Parms.K2Node_CustomEvent_DropQuantity = K2Node_CustomEvent_DropQuantity;
	Parms.CallFunc_DropItemByInstanceIdAndContainerType_ReturnValue = CallFunc_DropItemByInstanceIdAndContainerType_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.K2Node_CustomEvent_InstanceID_2 = K2Node_CustomEvent_InstanceID_2;
	Parms.K2Node_CustomEvent_Quantity_1 = K2Node_CustomEvent_Quantity_1;
	Parms.K2Node_CustomEvent_ParentContainerType = K2Node_CustomEvent_ParentContainerType;
	Parms.K2Node_MakeStruct_InventoryEntryIdAndQuantity = K2Node_MakeStruct_InventoryEntryIdAndQuantity;
	Parms.CallFunc_GetContainerForContainerType_OutBranch_1 = CallFunc_GetContainerForContainerType_OutBranch_1;
	Parms.CallFunc_GetContainerForContainerType_ReturnValue_1 = CallFunc_GetContainerForContainerType_ReturnValue_1;
	Parms.CallFunc_TransferItemToContainer_AmountTransferred = CallFunc_TransferItemToContainer_AmountTransferred;
	Parms.CallFunc_TransferItemToContainer_ReturnValue = CallFunc_TransferItemToContainer_ReturnValue;
	Parms.CallFunc_RemoveItem_ReturnValue = CallFunc_RemoveItem_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsController = K2Node_DynamicCast_AsController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsPlayer_State = K2Node_DynamicCast_AsPlayer_State;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_CanCheat_CanCheat = CallFunc_CanCheat_CanCheat;
	Parms.K2Node_CustomEvent_InventoryEntry = K2Node_CustomEvent_InventoryEntry;
	Parms.CallFunc_ClaimItem_bSuccess = CallFunc_ClaimItem_bSuccess;
	Parms.CallFunc_ClaimItem_ClaimedInstances = CallFunc_ClaimItem_ClaimedInstances;
	Parms.CallFunc_ClaimItem_UnclaimedItems = CallFunc_ClaimItem_UnclaimedItems;
	Parms.CallFunc_DoesOwnerHaveRestriction_Result_3 = CallFunc_DoesOwnerHaveRestriction_Result_3;
	Parms.CallFunc_DoesOwnerHaveRestriction_Result_4 = CallFunc_DoesOwnerHaveRestriction_Result_4;
	Parms.CallFunc_DoesOwnerHaveRestriction_Result_5 = CallFunc_DoesOwnerHaveRestriction_Result_5;

	UObject::ProcessEvent(Func, &Parms);

}

}


