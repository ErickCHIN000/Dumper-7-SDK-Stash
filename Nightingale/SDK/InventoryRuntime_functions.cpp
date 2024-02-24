#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class InventoryRuntime.ConditionInventoryEntryUpdate
// (None)

class UClass* UConditionInventoryEntryUpdate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConditionInventoryEntryUpdate");

	return Clss;
}


// ConditionInventoryEntryUpdate InventoryRuntime.Default__ConditionInventoryEntryUpdate
// (Public, ClassDefaultObject, ArchetypeObject)

class UConditionInventoryEntryUpdate* UConditionInventoryEntryUpdate::GetDefaultObj()
{
	static class UConditionInventoryEntryUpdate* Default = nullptr;

	if (!Default)
		Default = static_cast<UConditionInventoryEntryUpdate*>(UConditionInventoryEntryUpdate::StaticClass()->DefaultObject);

	return Default;
}


// Class InventoryRuntime.ConditionInventoryEntryDepleted
// (None)

class UClass* UConditionInventoryEntryDepleted::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConditionInventoryEntryDepleted");

	return Clss;
}


// ConditionInventoryEntryDepleted InventoryRuntime.Default__ConditionInventoryEntryDepleted
// (Public, ClassDefaultObject, ArchetypeObject)

class UConditionInventoryEntryDepleted* UConditionInventoryEntryDepleted::GetDefaultObj()
{
	static class UConditionInventoryEntryDepleted* Default = nullptr;

	if (!Default)
		Default = static_cast<UConditionInventoryEntryDepleted*>(UConditionInventoryEntryDepleted::StaticClass()->DefaultObject);

	return Default;
}


// Class InventoryRuntime.ConditionInventoryEntryRepaired
// (None)

class UClass* UConditionInventoryEntryRepaired::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConditionInventoryEntryRepaired");

	return Clss;
}


// ConditionInventoryEntryRepaired InventoryRuntime.Default__ConditionInventoryEntryRepaired
// (Public, ClassDefaultObject, ArchetypeObject)

class UConditionInventoryEntryRepaired* UConditionInventoryEntryRepaired::GetDefaultObj()
{
	static class UConditionInventoryEntryRepaired* Default = nullptr;

	if (!Default)
		Default = static_cast<UConditionInventoryEntryRepaired*>(UConditionInventoryEntryRepaired::StaticClass()->DefaultObject);

	return Default;
}


// Class InventoryRuntime.InventoryEntryUpdateEventEmitter
// (None)

class UClass* IInventoryEntryUpdateEventEmitter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryEntryUpdateEventEmitter");

	return Clss;
}


// InventoryEntryUpdateEventEmitter InventoryRuntime.Default__InventoryEntryUpdateEventEmitter
// (Public, ClassDefaultObject, ArchetypeObject)

class IInventoryEntryUpdateEventEmitter* IInventoryEntryUpdateEventEmitter::GetDefaultObj()
{
	static class IInventoryEntryUpdateEventEmitter* Default = nullptr;

	if (!Default)
		Default = static_cast<IInventoryEntryUpdateEventEmitter*>(IInventoryEntryUpdateEventEmitter::StaticClass()->DefaultObject);

	return Default;
}


// Class InventoryRuntime.ItemContainer
// (None)

class UClass* IItemContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemContainer");

	return Clss;
}


// ItemContainer InventoryRuntime.Default__ItemContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class IItemContainer* IItemContainer::GetDefaultObj()
{
	static class IItemContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<IItemContainer*>(IItemContainer::StaticClass()->DefaultObject);

	return Default;
}


// Function InventoryRuntime.ItemContainer.UpdateItem
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FInventoryEntry             Entry                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IItemContainer::UpdateItem(struct FInventoryEntry& Entry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemContainer", "UpdateItem");

	Params::IItemContainer_UpdateItem_Params Parms{};

	Parms.Entry = Entry;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InventoryRuntime.ItemContainer.TransferItemToContainer
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TScriptInterface<class IItemContainer>NewContainer                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInventoryEntryIdAndQuantityInstanceToTransfer                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              AmountTransferred                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IItemContainer::TransferItemToContainer(TScriptInterface<class IItemContainer>& NewContainer, struct FInventoryEntryIdAndQuantity& InstanceToTransfer, int32* AmountTransferred)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemContainer", "TransferItemToContainer");

	Params::IItemContainer_TransferItemToContainer_Params Parms{};

	Parms.NewContainer = NewContainer;
	Parms.InstanceToTransfer = InstanceToTransfer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AmountTransferred != nullptr)
		*AmountTransferred = Parms.AmountTransferred;

	return Parms.ReturnValue;

}


// Function InventoryRuntime.ItemContainer.TransferItemsToContainer
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TScriptInterface<class IItemContainer>NewContainer                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FInventoryEntryIdAndQuantity>InstancesToTransfer                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FInventoryEntryIdAndQuantity>AmountTransferred                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IItemContainer::TransferItemsToContainer(TScriptInterface<class IItemContainer>& NewContainer, TArray<struct FInventoryEntryIdAndQuantity>& InstancesToTransfer, TArray<struct FInventoryEntryIdAndQuantity>* AmountTransferred)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemContainer", "TransferItemsToContainer");

	Params::IItemContainer_TransferItemsToContainer_Params Parms{};

	Parms.NewContainer = NewContainer;
	Parms.InstancesToTransfer = InstancesToTransfer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AmountTransferred != nullptr)
		*AmountTransferred = std::move(Parms.AmountTransferred);

	return Parms.ReturnValue;

}


// Function InventoryRuntime.ItemContainer.TransferAllItemsToContainer
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TScriptInterface<class IItemContainer>NewContainer                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IItemContainer::TransferAllItemsToContainer(TScriptInterface<class IItemContainer>& NewContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemContainer", "TransferAllItemsToContainer");

	Params::IItemContainer_TransferAllItemsToContainer_Params Parms{};

	Parms.NewContainer = NewContainer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InventoryRuntime.ItemContainer.RemoveItemsWithReference
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FItemDataReference          ItemReference                                                    (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              QuantityToRemove                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 IItemContainer::RemoveItemsWithReference(struct FItemDataReference& ItemReference, int32 QuantityToRemove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemContainer", "RemoveItemsWithReference");

	Params::IItemContainer_RemoveItemsWithReference_Params Parms{};

	Parms.ItemReference = ItemReference;
	Parms.QuantityToRemove = QuantityToRemove;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InventoryRuntime.ItemContainer.RemoveItem
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                       InstanceID                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Amount                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IItemContainer::RemoveItem(struct FGuid& InstanceID, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemContainer", "RemoveItem");

	Params::IItemContainer_RemoveItem_Params Parms{};

	Parms.InstanceID = InstanceID;
	Parms.Amount = Amount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InventoryRuntime.ItemContainer.RemoveAllItemsWithReference
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FItemDataReference          ItemReference                                                    (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IItemContainer::RemoveAllItemsWithReference(struct FItemDataReference& ItemReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemContainer", "RemoveAllItemsWithReference");

	Params::IItemContainer_RemoveAllItemsWithReference_Params Parms{};

	Parms.ItemReference = ItemReference;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InventoryRuntime.ItemContainer.RemoveAllItems
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IItemContainer::RemoveAllItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemContainer", "RemoveAllItems");

	Params::IItemContainer_RemoveAllItems_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InventoryRuntime.ItemContainer.RegisterItemRemovedDelegate
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IItemContainer::RegisterItemRemovedDelegate(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemContainer", "RegisterItemRemovedDelegate");

	Params::IItemContainer_RegisterItemRemovedDelegate_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function InventoryRuntime.ItemContainer.RegisterItemAddedDelegate
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IItemContainer::RegisterItemAddedDelegate(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemContainer", "RegisterItemAddedDelegate");

	Params::IItemContainer_RegisterItemAddedDelegate_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function InventoryRuntime.ItemContainer.GetNumberItemEntriesWithReference
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FItemDataReference          ItemReference                                                    (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 IItemContainer::GetNumberItemEntriesWithReference(struct FItemDataReference& ItemReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemContainer", "GetNumberItemEntriesWithReference");

	Params::IItemContainer_GetNumberItemEntriesWithReference_Params Parms{};

	Parms.ItemReference = ItemReference;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InventoryRuntime.ItemContainer.GetNumberItemEntries
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 IItemContainer::GetNumberItemEntries()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemContainer", "GetNumberItemEntries");

	Params::IItemContainer_GetNumberItemEntries_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InventoryRuntime.ItemContainer.GetItem
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FGuid                       InstanceID                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInventoryEntry             Entry                                                            (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IItemContainer::GetItem(struct FGuid& InstanceID, struct FInventoryEntry* Entry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemContainer", "GetItem");

	Params::IItemContainer_GetItem_Params Parms{};

	Parms.InstanceID = InstanceID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Entry != nullptr)
		*Entry = std::move(Parms.Entry);

	return Parms.ReturnValue;

}


// Function InventoryRuntime.ItemContainer.GetContainerId
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 IItemContainer::GetContainerId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemContainer", "GetContainerId");

	Params::IItemContainer_GetContainerId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InventoryRuntime.ItemContainer.GetContainerHandle
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FItemContainerHandle        ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FItemContainerHandle IItemContainer::GetContainerHandle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemContainer", "GetContainerHandle");

	Params::IItemContainer_GetContainerHandle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InventoryRuntime.ItemContainer.GetContainerCapacityData
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FContainerCapacityData      ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FContainerCapacityData IItemContainer::GetContainerCapacityData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemContainer", "GetContainerCapacityData");

	Params::IItemContainer_GetContainerCapacityData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InventoryRuntime.ItemContainer.GetAllItems
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<struct FInventoryEntry>     Entries                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void IItemContainer::GetAllItems(TArray<struct FInventoryEntry>* Entries)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemContainer", "GetAllItems");

	Params::IItemContainer_GetAllItems_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Entries != nullptr)
		*Entries = std::move(Parms.Entries);

}


// Function InventoryRuntime.ItemContainer.FindFirstItemByItemId
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// struct FItemDataReference          ItemId                                                           (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInventoryEntry             Entry                                                            (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IItemContainer::FindFirstItemByItemId(struct FItemDataReference& ItemId, struct FInventoryEntry* Entry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemContainer", "FindFirstItemByItemId");

	Params::IItemContainer_FindFirstItemByItemId_Params Parms{};

	Parms.ItemId = ItemId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Entry != nullptr)
		*Entry = std::move(Parms.Entry);

	return Parms.ReturnValue;

}


// Function InventoryRuntime.ItemContainer.FindAllItemsWithReference
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FItemDataReference          ItemReference                                                    (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FInventoryEntry>     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FInventoryEntry> IItemContainer::FindAllItemsWithReference(struct FItemDataReference& ItemReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemContainer", "FindAllItemsWithReference");

	Params::IItemContainer_FindAllItemsWithReference_Params Parms{};

	Parms.ItemReference = ItemReference;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InventoryRuntime.ItemContainer.DeRegisterItemRemovedDelegate
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IItemContainer::DeRegisterItemRemovedDelegate(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemContainer", "DeRegisterItemRemovedDelegate");

	Params::IItemContainer_DeRegisterItemRemovedDelegate_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function InventoryRuntime.ItemContainer.DeRegisterItemAddedDelegate
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IItemContainer::DeRegisterItemAddedDelegate(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemContainer", "DeRegisterItemAddedDelegate");

	Params::IItemContainer_DeRegisterItemAddedDelegate_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function InventoryRuntime.ItemContainer.CanAddItem
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FInventoryEntry             Entry                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IItemContainer::CanAddItem(struct FInventoryEntry& Entry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemContainer", "CanAddItem");

	Params::IItemContainer_CanAddItem_Params Parms{};

	Parms.Entry = Entry;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InventoryRuntime.ItemContainer.CanAddAnyItem
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FInventoryEntry>     Entries                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IItemContainer::CanAddAnyItem(TArray<struct FInventoryEntry>& Entries)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemContainer", "CanAddAnyItem");

	Params::IItemContainer_CanAddAnyItem_Params Parms{};

	Parms.Entries = Entries;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InventoryRuntime.ItemContainer.AddItem
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FInventoryEntry             Entry                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Amount                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FGuid>               ModifiedInstances                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               bIgnoreCapacity                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IItemContainer::AddItem(struct FInventoryEntry& Entry, int32* Amount, TArray<struct FGuid>* ModifiedInstances, bool bIgnoreCapacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemContainer", "AddItem");

	Params::IItemContainer_AddItem_Params Parms{};

	Parms.Entry = Entry;
	Parms.bIgnoreCapacity = bIgnoreCapacity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Amount != nullptr)
		*Amount = Parms.Amount;

	if (ModifiedInstances != nullptr)
		*ModifiedInstances = std::move(Parms.ModifiedInstances);

	return Parms.ReturnValue;

}


// Class InventoryRuntime.ItemContainerProvider
// (None)

class UClass* IItemContainerProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemContainerProvider");

	return Clss;
}


// ItemContainerProvider InventoryRuntime.Default__ItemContainerProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class IItemContainerProvider* IItemContainerProvider::GetDefaultObj()
{
	static class IItemContainerProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<IItemContainerProvider*>(IItemContainerProvider::StaticClass()->DefaultObject);

	return Default;
}


// Function InventoryRuntime.ItemContainerProvider.HasContainerFromHandle
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemContainerHandle        ContainerHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IItemContainerProvider::HasContainerFromHandle(struct FItemContainerHandle& ContainerHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemContainerProvider", "HasContainerFromHandle");

	Params::IItemContainerProvider_HasContainerFromHandle_Params Parms{};

	Parms.ContainerHandle = ContainerHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InventoryRuntime.ItemContainerProvider.HasContainer
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IItemContainer>Container                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IItemContainerProvider::HasContainer(TScriptInterface<class IItemContainer>& Container)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemContainerProvider", "HasContainer");

	Params::IItemContainerProvider_HasContainer_Params Parms{};

	Parms.Container = Container;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InventoryRuntime.ItemContainerProvider.GetDefaultContainer
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IItemContainer>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IItemContainer> IItemContainerProvider::GetDefaultContainer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemContainerProvider", "GetDefaultContainer");

	Params::IItemContainerProvider_GetDefaultContainer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InventoryRuntime.ItemContainerProvider.GetContainerFromProvider
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemContainerHandle        ContainerHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TScriptInterface<class IItemContainer>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IItemContainer> IItemContainerProvider::GetContainerFromProvider(struct FItemContainerHandle& ContainerHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemContainerProvider", "GetContainerFromProvider");

	Params::IItemContainerProvider_GetContainerFromProvider_Params Parms{};

	Parms.ContainerHandle = ContainerHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class InventoryRuntime.ItemContainerServiceLibrary
// (None)

class UClass* UItemContainerServiceLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemContainerServiceLibrary");

	return Clss;
}


// ItemContainerServiceLibrary InventoryRuntime.Default__ItemContainerServiceLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UItemContainerServiceLibrary* UItemContainerServiceLibrary::GetDefaultObj()
{
	static class UItemContainerServiceLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemContainerServiceLibrary*>(UItemContainerServiceLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function InventoryRuntime.ItemContainerServiceLibrary.GetContainerFromHandle
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FItemContainerHandle        Handle                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TScriptInterface<class IItemContainer>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IItemContainer> UItemContainerServiceLibrary::GetContainerFromHandle(struct FItemContainerHandle& Handle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemContainerServiceLibrary", "GetContainerFromHandle");

	Params::UItemContainerServiceLibrary_GetContainerFromHandle_Params Parms{};

	Parms.Handle = Handle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InventoryRuntime.ItemContainerServiceLibrary.EqualEqual_FItemContainerHandleFItemContainerHandle
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FItemContainerHandle        A                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FItemContainerHandle        B                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UItemContainerServiceLibrary::EqualEqual_FItemContainerHandleFItemContainerHandle(struct FItemContainerHandle& A, struct FItemContainerHandle& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemContainerServiceLibrary", "EqualEqual_FItemContainerHandleFItemContainerHandle");

	Params::UItemContainerServiceLibrary_EqualEqual_FItemContainerHandleFItemContainerHandle_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InventoryRuntime.ItemContainerServiceLibrary.AreItemsEquivalent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FInventoryEntry             A                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FInventoryEntry             B                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UItemContainerServiceLibrary::AreItemsEquivalent(struct FInventoryEntry& A, struct FInventoryEntry& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemContainerServiceLibrary", "AreItemsEquivalent");

	Params::UItemContainerServiceLibrary_AreItemsEquivalent_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


