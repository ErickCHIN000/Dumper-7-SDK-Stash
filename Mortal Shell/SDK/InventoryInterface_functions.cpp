#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass InventoryInterface.InventoryInterface_C
// (None)

class UClass* IInventoryInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryInterface_C");

	return Clss;
}


// InventoryInterface_C InventoryInterface.Default__InventoryInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IInventoryInterface_C* IInventoryInterface_C::GetDefaultObj()
{
	static class IInventoryInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IInventoryInterface_C*>(IInventoryInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function InventoryInterface.InventoryInterface_C.ContainerLooted
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInventoryInterface_C::ContainerLooted(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryInterface_C", "ContainerLooted");

	Params::IInventoryInterface_C_ContainerLooted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function InventoryInterface.InventoryInterface_C.GetCanStoreItems
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanStoreItems                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInventoryInterface_C::GetCanStoreItems(bool* CanStoreItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryInterface_C", "GetCanStoreItems");

	Params::IInventoryInterface_C_GetCanStoreItems_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CanStoreItems != nullptr)
		*CanStoreItems = Parms.CanStoreItems;

}


// Function InventoryInterface.InventoryInterface_C.GetPlayersViewing
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class APlayerState*>        PlayersViewing                                                   (Parm, OutParm, HasGetValueTypeHash)

void IInventoryInterface_C::GetPlayersViewing(TArray<class APlayerState*>* PlayersViewing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryInterface_C", "GetPlayersViewing");

	Params::IInventoryInterface_C_GetPlayersViewing_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PlayersViewing != nullptr)
		*PlayersViewing = std::move(Parms.PlayersViewing);

}


// Function InventoryInterface.InventoryInterface_C.GetContainerInventory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent_C*       InventoryComponent                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInventoryInterface_C::GetContainerInventory(class UInventoryComponent_C** InventoryComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryInterface_C", "GetContainerInventory");

	Params::IInventoryInterface_C_GetContainerInventory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InventoryComponent != nullptr)
		*InventoryComponent = Parms.InventoryComponent;

}


// Function InventoryInterface.InventoryInterface_C.GetContainerProperties
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Name                                                             (Parm, OutParm)
// uint8                              SlotsPerRow                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsStorageContainer                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              InventorySize                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInventoryInterface_C::GetContainerProperties(class FText* Name, uint8* SlotsPerRow, bool* IsStorageContainer, int32* InventorySize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryInterface_C", "GetContainerProperties");

	Params::IInventoryInterface_C_GetContainerProperties_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

	if (SlotsPerRow != nullptr)
		*SlotsPerRow = Parms.SlotsPerRow;

	if (IsStorageContainer != nullptr)
		*IsStorageContainer = Parms.IsStorageContainer;

	if (InventorySize != nullptr)
		*InventorySize = Parms.InventorySize;

}

}


