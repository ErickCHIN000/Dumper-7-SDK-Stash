#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LoadoutRuntime.LoadoutEquipInterface
// (None)

class UClass* ILoadoutEquipInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoadoutEquipInterface");

	return Clss;
}


// LoadoutEquipInterface LoadoutRuntime.Default__LoadoutEquipInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ILoadoutEquipInterface* ILoadoutEquipInterface::GetDefaultObj()
{
	static class ILoadoutEquipInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ILoadoutEquipInterface*>(ILoadoutEquipInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function LoadoutRuntime.LoadoutEquipInterface.EquipItemInSpecificLoadoutSlot
// (BlueprintAuthorityOnly, Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             ItemEntry                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTag                Slot                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AItem*                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AItem* ILoadoutEquipInterface::EquipItemInSpecificLoadoutSlot(struct FInventoryEntry& ItemEntry, struct FGameplayTag& Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadoutEquipInterface", "EquipItemInSpecificLoadoutSlot");

	Params::ILoadoutEquipInterface_EquipItemInSpecificLoadoutSlot_Params Parms{};

	Parms.ItemEntry = ItemEntry;
	Parms.Slot = Slot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LoadoutRuntime.LoadoutEquipInterface.EquipItemInLoadoutSlot
// (Native, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       InstanceID                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ILoadoutEquipInterface::EquipItemInLoadoutSlot(struct FGuid& InstanceID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadoutEquipInterface", "EquipItemInLoadoutSlot");

	Params::ILoadoutEquipInterface_EquipItemInLoadoutSlot_Params Parms{};

	Parms.InstanceID = InstanceID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LoadoutRuntime.LoadoutEquipInterface.ClearEquippedItemFromLoadoutSlot
// (BlueprintAuthorityOnly, Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Slot                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ILoadoutEquipInterface::ClearEquippedItemFromLoadoutSlot(struct FGameplayTag& Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadoutEquipInterface", "ClearEquippedItemFromLoadoutSlot");

	Params::ILoadoutEquipInterface_ClearEquippedItemFromLoadoutSlot_Params Parms{};

	Parms.Slot = Slot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LoadoutRuntime.LoadoutObservableInterface
// (None)

class UClass* ILoadoutObservableInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoadoutObservableInterface");

	return Clss;
}


// LoadoutObservableInterface LoadoutRuntime.Default__LoadoutObservableInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ILoadoutObservableInterface* ILoadoutObservableInterface::GetDefaultObj()
{
	static class ILoadoutObservableInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ILoadoutObservableInterface*>(ILoadoutObservableInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function LoadoutRuntime.LoadoutObservableInterface.UnbindDelegate_OnEquippedItemChanged
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ILoadoutObservableInterface::UnbindDelegate_OnEquippedItemChanged(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadoutObservableInterface", "UnbindDelegate_OnEquippedItemChanged");

	Params::ILoadoutObservableInterface_UnbindDelegate_OnEquippedItemChanged_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LoadoutRuntime.LoadoutObservableInterface.BindDelegate_OnEquippedItemChanged
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ILoadoutObservableInterface::BindDelegate_OnEquippedItemChanged(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadoutObservableInterface", "BindDelegate_OnEquippedItemChanged");

	Params::ILoadoutObservableInterface_BindDelegate_OnEquippedItemChanged_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LoadoutRuntime.LoadoutReadInterface
// (None)

class UClass* ILoadoutReadInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoadoutReadInterface");

	return Clss;
}


// LoadoutReadInterface LoadoutRuntime.Default__LoadoutReadInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ILoadoutReadInterface* ILoadoutReadInterface::GetDefaultObj()
{
	static class ILoadoutReadInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ILoadoutReadInterface*>(ILoadoutReadInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function LoadoutRuntime.LoadoutReadInterface.GetOffhandEquippedItem
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AEquippableItem*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AEquippableItem* ILoadoutReadInterface::GetOffhandEquippedItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadoutReadInterface", "GetOffhandEquippedItem");

	Params::ILoadoutReadInterface_GetOffhandEquippedItem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LoadoutRuntime.LoadoutReadInterface.GetItemInLoadoutSlot
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AEquippableItem*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AEquippableItem* ILoadoutReadInterface::GetItemInLoadoutSlot(struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadoutReadInterface", "GetItemInLoadoutSlot");

	Params::ILoadoutReadInterface_GetItemInLoadoutSlot_Params Parms{};

	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LoadoutRuntime.LoadoutReadInterface.GetEquippedItem
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AEquippableItem*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AEquippableItem* ILoadoutReadInterface::GetEquippedItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadoutReadInterface", "GetEquippedItem");

	Params::ILoadoutReadInterface_GetEquippedItem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


