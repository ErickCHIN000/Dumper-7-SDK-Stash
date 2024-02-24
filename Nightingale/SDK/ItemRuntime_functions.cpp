#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ItemRuntime.EquippableItem
// (Actor)

class UClass* AEquippableItem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EquippableItem");

	return Clss;
}


// EquippableItem ItemRuntime.Default__EquippableItem
// (Public, ClassDefaultObject, ArchetypeObject)

class AEquippableItem* AEquippableItem::GetDefaultObj()
{
	static class AEquippableItem* Default = nullptr;

	if (!Default)
		Default = static_cast<AEquippableItem*>(AEquippableItem::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemRuntime.EquippableItem.SetInvisibleState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewState                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AEquippableItem::SetInvisibleState(bool bNewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquippableItem", "SetInvisibleState");

	Params::AEquippableItem_SetInvisibleState_Params Parms{};

	Parms.bNewState = bNewState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ItemRuntime.EquippableItem.RequiresLightweightItem
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AEquippableItem::RequiresLightweightItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquippableItem", "RequiresLightweightItem");

	Params::AEquippableItem_RequiresLightweightItem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ItemRuntime.EquippableItem.OnRep_ItemEntry
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void AEquippableItem::OnRep_ItemEntry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquippableItem", "OnRep_ItemEntry");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ItemRuntime.EquippableItem.OnRep_bInvisibleState
// (Final, Native, Protected)
// Parameters:

void AEquippableItem::OnRep_bInvisibleState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquippableItem", "OnRep_bInvisibleState");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ItemRuntime.EquippableItem.OnItemEntryUpdated
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             OldEntry                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AEquippableItem::OnItemEntryUpdated(struct FInventoryEntry& OldEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquippableItem", "OnItemEntryUpdated");

	Params::AEquippableItem_OnItemEntryUpdated_Params Parms{};

	Parms.OldEntry = OldEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemRuntime.EquippableItem.OnInvisibleStateChanged
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void AEquippableItem::OnInvisibleStateChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquippableItem", "OnInvisibleStateChanged");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ItemRuntime.EquippableItem.OnInventoryEntryUpdated
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FInventoryEntry             UpdatedEntry                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AEquippableItem::OnInventoryEntryUpdated(struct FInventoryEntry& UpdatedEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquippableItem", "OnInventoryEntryUpdated");

	Params::AEquippableItem_OnInventoryEntryUpdated_Params Parms{};

	Parms.UpdatedEntry = UpdatedEntry;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ItemRuntime.EquippableItem.IsTwoHanded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AEquippableItem::IsTwoHanded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquippableItem", "IsTwoHanded");

	Params::AEquippableItem_IsTwoHanded_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ItemRuntime.EquippableItem.IsEquipped
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AEquippableItem::IsEquipped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquippableItem", "IsEquipped");

	Params::AEquippableItem_IsEquipped_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ItemRuntime.EquippableItem.GetRootMesh
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*      ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USkeletalMeshComponent* AEquippableItem::GetRootMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquippableItem", "GetRootMesh");

	Params::AEquippableItem_GetRootMesh_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ItemRuntime.EquippableItem.GetItemType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EItemType               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EItemType AEquippableItem::GetItemType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquippableItem", "GetItemType");

	Params::AEquippableItem_GetItemType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ItemRuntime.EquippableItem.GetItemID
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FItemDataReference          OutItemReference                                                 (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AEquippableItem::GetItemID(struct FItemDataReference* OutItemReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquippableItem", "GetItemID");

	Params::AEquippableItem_GetItemID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutItemReference != nullptr)
		*OutItemReference = std::move(Parms.OutItemReference);

}


// Function ItemRuntime.EquippableItem.GetInventoryEntry
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FInventoryEntry             ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FInventoryEntry AEquippableItem::GetInventoryEntry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquippableItem", "GetInventoryEntry");

	Params::AEquippableItem_GetInventoryEntry_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ItemRuntime.EquippableItem.GetInstanceID
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGuid                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGuid AEquippableItem::GetInstanceID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquippableItem", "GetInstanceID");

	Params::AEquippableItem_GetInstanceID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ItemRuntime.EquippableItem.GetEquippedTag
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGameplayTag AEquippableItem::GetEquippedTag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquippableItem", "GetEquippedTag");

	Params::AEquippableItem_GetEquippedTag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ItemRuntime.EquippableItem.GetAttachSocket
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName AEquippableItem::GetAttachSocket()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquippableItem", "GetAttachSocket");

	Params::AEquippableItem_GetAttachSocket_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ItemRuntime.EquippableItem.ClearItemEffectsFromActor
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AEquippableItem::ClearItemEffectsFromActor(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquippableItem", "ClearItemEffectsFromActor");

	Params::AEquippableItem_ClearItemEffectsFromActor_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ItemRuntime.EquippableItem.AddEffects
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEquippableItem::AddEffects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquippableItem", "AddEffects");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ItemRuntime.EquippableItemUtilityInterface
// (None)

class UClass* IEquippableItemUtilityInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EquippableItemUtilityInterface");

	return Clss;
}


// EquippableItemUtilityInterface ItemRuntime.Default__EquippableItemUtilityInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IEquippableItemUtilityInterface* IEquippableItemUtilityInterface::GetDefaultObj()
{
	static class IEquippableItemUtilityInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IEquippableItemUtilityInterface*>(IEquippableItemUtilityInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemRuntime.EquippableItemUtilityInterface.DestroyEquippedItem
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEquippableItem*             Item                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumToDestroy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDestroyAll                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IEquippableItemUtilityInterface::DestroyEquippedItem(class AEquippableItem* Item, int32 NumToDestroy, bool bDestroyAll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquippableItemUtilityInterface", "DestroyEquippedItem");

	Params::IEquippableItemUtilityInterface_DestroyEquippedItem_Params Parms{};

	Parms.Item = Item;
	Parms.NumToDestroy = NumToDestroy;
	Parms.bDestroyAll = bDestroyAll;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ItemRuntime.ItemConstraintBehavior
// (None)

class UClass* UItemConstraintBehavior::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemConstraintBehavior");

	return Clss;
}


// ItemConstraintBehavior ItemRuntime.Default__ItemConstraintBehavior
// (Public, ClassDefaultObject, ArchetypeObject)

class UItemConstraintBehavior* UItemConstraintBehavior::GetDefaultObj()
{
	static class UItemConstraintBehavior* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemConstraintBehavior*>(UItemConstraintBehavior::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemRuntime.ItemConstraintBehavior.IsConstraintMet
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FInventoryEntry             Entry                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UItemConstraintBehavior::IsConstraintMet(struct FInventoryEntry& Entry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemConstraintBehavior", "IsConstraintMet");

	Params::UItemConstraintBehavior_IsConstraintMet_Params Parms{};

	Parms.Entry = Entry;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ItemRuntime.ItemConstraintDataAsset
// (None)

class UClass* UItemConstraintDataAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemConstraintDataAsset");

	return Clss;
}


// ItemConstraintDataAsset ItemRuntime.Default__ItemConstraintDataAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UItemConstraintDataAsset* UItemConstraintDataAsset::GetDefaultObj()
{
	static class UItemConstraintDataAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemConstraintDataAsset*>(UItemConstraintDataAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class ItemRuntime.ItemConstraintPresentationDataAsset
// (None)

class UClass* UItemConstraintPresentationDataAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemConstraintPresentationDataAsset");

	return Clss;
}


// ItemConstraintPresentationDataAsset ItemRuntime.Default__ItemConstraintPresentationDataAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UItemConstraintPresentationDataAsset* UItemConstraintPresentationDataAsset::GetDefaultObj()
{
	static class UItemConstraintPresentationDataAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemConstraintPresentationDataAsset*>(UItemConstraintPresentationDataAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class ItemRuntime.ItemDataAssetRegistryFunctionLibrary
// (None)

class UClass* UItemDataAssetRegistryFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemDataAssetRegistryFunctionLibrary");

	return Clss;
}


// ItemDataAssetRegistryFunctionLibrary ItemRuntime.Default__ItemDataAssetRegistryFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UItemDataAssetRegistryFunctionLibrary* UItemDataAssetRegistryFunctionLibrary::GetDefaultObj()
{
	static class UItemDataAssetRegistryFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemDataAssetRegistryFunctionLibrary*>(UItemDataAssetRegistryFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemRuntime.ItemDataAssetRegistryFunctionLibrary.GetAllItemReferences
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FItemDataReference>  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FItemDataReference> UItemDataAssetRegistryFunctionLibrary::GetAllItemReferences()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemDataAssetRegistryFunctionLibrary", "GetAllItemReferences");

	Params::UItemDataAssetRegistryFunctionLibrary_GetAllItemReferences_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ItemRuntime.ItemDataAssetRegistryFunctionLibrary.GetAllItemReferenceObjects
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UObjectWrapper_ItemDataReference*>OutItemReferenceWrappers                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UItemDataAssetRegistryFunctionLibrary::GetAllItemReferenceObjects(TArray<class UObjectWrapper_ItemDataReference*>* OutItemReferenceWrappers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemDataAssetRegistryFunctionLibrary", "GetAllItemReferenceObjects");

	Params::UItemDataAssetRegistryFunctionLibrary_GetAllItemReferenceObjects_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutItemReferenceWrappers != nullptr)
		*OutItemReferenceWrappers = std::move(Parms.OutItemReferenceWrappers);

}


// Class ItemRuntime.ItemDataReferenceFunctionLibrary
// (None)

class UClass* UItemDataReferenceFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemDataReferenceFunctionLibrary");

	return Clss;
}


// ItemDataReferenceFunctionLibrary ItemRuntime.Default__ItemDataReferenceFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UItemDataReferenceFunctionLibrary* UItemDataReferenceFunctionLibrary::GetDefaultObj()
{
	static class UItemDataReferenceFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemDataReferenceFunctionLibrary*>(UItemDataReferenceFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemRuntime.ItemDataReferenceFunctionLibrary.TryGetItemData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FItemDataReference          ItemReference                                                    (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FItemData                   ItemData                                                         (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// enum class EGetResult              Branches                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UItemDataReferenceFunctionLibrary::TryGetItemData(struct FItemDataReference& ItemReference, struct FItemData* ItemData, enum class EGetResult* Branches)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemDataReferenceFunctionLibrary", "TryGetItemData");

	Params::UItemDataReferenceFunctionLibrary_TryGetItemData_Params Parms{};

	Parms.ItemReference = ItemReference;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ItemData != nullptr)
		*ItemData = std::move(Parms.ItemData);

	if (Branches != nullptr)
		*Branches = Parms.Branches;

}


// Function ItemRuntime.ItemDataReferenceFunctionLibrary.NotEqual_FItemDataReference
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FItemDataReference          A                                                                (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FItemDataReference          B                                                                (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UItemDataReferenceFunctionLibrary::NotEqual_FItemDataReference(struct FItemDataReference& A, struct FItemDataReference& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemDataReferenceFunctionLibrary", "NotEqual_FItemDataReference");

	Params::UItemDataReferenceFunctionLibrary_NotEqual_FItemDataReference_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ItemRuntime.ItemDataReferenceFunctionLibrary.MakeItemReferfenceFromDataAsset
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UItemDataAsset>Asset                                                            (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FItemDataReference          ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FItemDataReference UItemDataReferenceFunctionLibrary::MakeItemReferfenceFromDataAsset(TSoftObjectPtr<class UItemDataAsset>& Asset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemDataReferenceFunctionLibrary", "MakeItemReferfenceFromDataAsset");

	Params::UItemDataReferenceFunctionLibrary_MakeItemReferfenceFromDataAsset_Params Parms{};

	Parms.Asset = Asset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ItemRuntime.ItemDataReferenceFunctionLibrary.IsValid
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FItemDataReference          ItemReference                                                    (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UItemDataReferenceFunctionLibrary::IsValid(struct FItemDataReference& ItemReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemDataReferenceFunctionLibrary", "IsValid");

	Params::UItemDataReferenceFunctionLibrary_IsValid_Params Parms{};

	Parms.ItemReference = ItemReference;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ItemRuntime.ItemDataReferenceFunctionLibrary.GetID
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FItemDataReference          ItemReference                                                    (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGuid UItemDataReferenceFunctionLibrary::GetID(struct FItemDataReference& ItemReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemDataReferenceFunctionLibrary", "GetID");

	Params::UItemDataReferenceFunctionLibrary_GetID_Params Parms{};

	Parms.ItemReference = ItemReference;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ItemRuntime.ItemDataReferenceFunctionLibrary.EqualEqual_FItemDataReference
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FItemDataReference          A                                                                (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FItemDataReference          B                                                                (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UItemDataReferenceFunctionLibrary::EqualEqual_FItemDataReference(struct FItemDataReference& A, struct FItemDataReference& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemDataReferenceFunctionLibrary", "EqualEqual_FItemDataReference");

	Params::UItemDataReferenceFunctionLibrary_EqualEqual_FItemDataReference_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ItemRuntime.ItemInstanceData
// (None)

class UClass* UItemInstanceData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemInstanceData");

	return Clss;
}


// ItemInstanceData ItemRuntime.Default__ItemInstanceData
// (Public, ClassDefaultObject, ArchetypeObject)

class UItemInstanceData* UItemInstanceData::GetDefaultObj()
{
	static class UItemInstanceData* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemInstanceData*>(UItemInstanceData::StaticClass()->DefaultObject);

	return Default;
}


// Class ItemRuntime.ItemPerkFunctionLibrary
// (None)

class UClass* UItemPerkFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemPerkFunctionLibrary");

	return Clss;
}


// ItemPerkFunctionLibrary ItemRuntime.Default__ItemPerkFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UItemPerkFunctionLibrary* UItemPerkFunctionLibrary::GetDefaultObj()
{
	static class UItemPerkFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemPerkFunctionLibrary*>(UItemPerkFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemRuntime.ItemPerkFunctionLibrary.TryGetItemPerkData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FItemPerkDataReference      Reference                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FItemPerkData               OutData                                                          (Parm, OutParm, NativeAccessSpecifierPublic)
// enum class EGetResult              OutBranches                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UItemPerkFunctionLibrary::TryGetItemPerkData(struct FItemPerkDataReference& Reference, struct FItemPerkData* OutData, enum class EGetResult* OutBranches)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPerkFunctionLibrary", "TryGetItemPerkData");

	Params::UItemPerkFunctionLibrary_TryGetItemPerkData_Params Parms{};

	Parms.Reference = Reference;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutData != nullptr)
		*OutData = std::move(Parms.OutData);

	if (OutBranches != nullptr)
		*OutBranches = Parms.OutBranches;

}


// Function ItemRuntime.ItemPerkFunctionLibrary.NotEqual_FItemPerkDataReference
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FItemPerkDataReference      A                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FItemPerkDataReference      B                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UItemPerkFunctionLibrary::NotEqual_FItemPerkDataReference(struct FItemPerkDataReference& A, struct FItemPerkDataReference& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPerkFunctionLibrary", "NotEqual_FItemPerkDataReference");

	Params::UItemPerkFunctionLibrary_NotEqual_FItemPerkDataReference_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ItemRuntime.ItemPerkFunctionLibrary.IsValid
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FItemPerkDataReference      Reference                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UItemPerkFunctionLibrary::IsValid(struct FItemPerkDataReference& Reference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPerkFunctionLibrary", "IsValid");

	Params::UItemPerkFunctionLibrary_IsValid_Params Parms{};

	Parms.Reference = Reference;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ItemRuntime.ItemPerkFunctionLibrary.GetPerkArchetypeData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FItemPerkDataReference      Reference                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TSoftObjectPtr<class UItemPerkArchetypeDataAsset>ReturnValue                                                      (Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSoftObjectPtr<class UItemPerkArchetypeDataAsset> UItemPerkFunctionLibrary::GetPerkArchetypeData(struct FItemPerkDataReference& Reference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPerkFunctionLibrary", "GetPerkArchetypeData");

	Params::UItemPerkFunctionLibrary_GetPerkArchetypeData_Params Parms{};

	Parms.Reference = Reference;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ItemRuntime.ItemPerkFunctionLibrary.GetIcon
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FItemPerkDataReference      Reference                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TSoftObjectPtr<class UTexture2D>   ReturnValue                                                      (Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSoftObjectPtr<class UTexture2D> UItemPerkFunctionLibrary::GetIcon(struct FItemPerkDataReference& Reference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPerkFunctionLibrary", "GetIcon");

	Params::UItemPerkFunctionLibrary_GetIcon_Params Parms{};

	Parms.Reference = Reference;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ItemRuntime.ItemPerkFunctionLibrary.GetDisplayName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FItemPerkDataReference      Reference                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UItemPerkFunctionLibrary::GetDisplayName(struct FItemPerkDataReference& Reference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPerkFunctionLibrary", "GetDisplayName");

	Params::UItemPerkFunctionLibrary_GetDisplayName_Params Parms{};

	Parms.Reference = Reference;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ItemRuntime.ItemPerkFunctionLibrary.GetAllItemPerkReferences
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FItemPerkDataReference>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FItemPerkDataReference> UItemPerkFunctionLibrary::GetAllItemPerkReferences()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPerkFunctionLibrary", "GetAllItemPerkReferences");

	Params::UItemPerkFunctionLibrary_GetAllItemPerkReferences_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ItemRuntime.ItemPerkFunctionLibrary.EqualEqual_FItemPerkDataReference
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FItemPerkDataReference      A                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FItemPerkDataReference      B                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UItemPerkFunctionLibrary::EqualEqual_FItemPerkDataReference(struct FItemPerkDataReference& A, struct FItemPerkDataReference& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPerkFunctionLibrary", "EqualEqual_FItemPerkDataReference");

	Params::UItemPerkFunctionLibrary_EqualEqual_FItemPerkDataReference_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ItemRuntime.ItemPerkFunctionLibrary.CreatePerkDataAsset
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      AssetName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      DirectoryPath                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGetResult              Branches                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UItemPerkDataAsset*          OutNewItemPerk                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UItemPerkFunctionLibrary::CreatePerkDataAsset(const class FString& AssetName, const class FString& DirectoryPath, enum class EGetResult* Branches, class UItemPerkDataAsset** OutNewItemPerk)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPerkFunctionLibrary", "CreatePerkDataAsset");

	Params::UItemPerkFunctionLibrary_CreatePerkDataAsset_Params Parms{};

	Parms.AssetName = AssetName;
	Parms.DirectoryPath = DirectoryPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Branches != nullptr)
		*Branches = Parms.Branches;

	if (OutNewItemPerk != nullptr)
		*OutNewItemPerk = Parms.OutNewItemPerk;

}


// Class ItemRuntime.ItemsGenericReplicatedDataFunctionLibrary
// (None)

class UClass* UItemsGenericReplicatedDataFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemsGenericReplicatedDataFunctionLibrary");

	return Clss;
}


// ItemsGenericReplicatedDataFunctionLibrary ItemRuntime.Default__ItemsGenericReplicatedDataFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UItemsGenericReplicatedDataFunctionLibrary* UItemsGenericReplicatedDataFunctionLibrary::GetDefaultObj()
{
	static class UItemsGenericReplicatedDataFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemsGenericReplicatedDataFunctionLibrary*>(UItemsGenericReplicatedDataFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemRuntime.ItemsGenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsItemDataReference
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGenericReplicatedDataHandleGenericReplicatedData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHasItemDataReference                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FItemDataReference          ItemDataReference                                                (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UItemsGenericReplicatedDataFunctionLibrary::GetGenericReplicatedDataAsItemDataReference(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* bHasItemDataReference, struct FItemDataReference* ItemDataReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemsGenericReplicatedDataFunctionLibrary", "GetGenericReplicatedDataAsItemDataReference");

	Params::UItemsGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsItemDataReference_Params Parms{};

	Parms.GenericReplicatedData = GenericReplicatedData;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bHasItemDataReference != nullptr)
		*bHasItemDataReference = Parms.bHasItemDataReference;

	if (ItemDataReference != nullptr)
		*ItemDataReference = std::move(Parms.ItemDataReference);

}


// Function ItemRuntime.ItemsGenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromItemDataReference
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FItemDataReference          ItemDataReference                                                (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGenericReplicatedDataHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGenericReplicatedDataHandle UItemsGenericReplicatedDataFunctionLibrary::GenericReplicatedDataFromItemDataReference(struct FItemDataReference& ItemDataReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemsGenericReplicatedDataFunctionLibrary", "GenericReplicatedDataFromItemDataReference");

	Params::UItemsGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromItemDataReference_Params Parms{};

	Parms.ItemDataReference = ItemDataReference;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ItemRuntime.LightweightAttachedItem
// (Actor)

class UClass* ALightweightAttachedItem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightweightAttachedItem");

	return Clss;
}


// LightweightAttachedItem ItemRuntime.Default__LightweightAttachedItem
// (Public, ClassDefaultObject, ArchetypeObject)

class ALightweightAttachedItem* ALightweightAttachedItem::GetDefaultObj()
{
	static class ALightweightAttachedItem* Default = nullptr;

	if (!Default)
		Default = static_cast<ALightweightAttachedItem*>(ALightweightAttachedItem::StaticClass()->DefaultObject);

	return Default;
}

}


