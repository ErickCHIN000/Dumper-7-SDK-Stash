#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PCLoadingScreenInterface.PCLoadingScreenInterface_C
// (None)

class UClass* IPCLoadingScreenInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCLoadingScreenInterface_C");

	return Clss;
}


// PCLoadingScreenInterface_C PCLoadingScreenInterface.Default__PCLoadingScreenInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IPCLoadingScreenInterface_C* IPCLoadingScreenInterface_C::GetDefaultObj()
{
	static class IPCLoadingScreenInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IPCLoadingScreenInterface_C*>(IPCLoadingScreenInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PCLoadingScreenInterface.PCLoadingScreenInterface_C.PCLoadingScreen_GetItemsDiscovered
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                ItemsDiscovered                                                  (Parm, OutParm, HasGetValueTypeHash)
// bool                               Empty                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IPCLoadingScreenInterface_C::PCLoadingScreen_GetItemsDiscovered(TArray<class FName>* ItemsDiscovered, bool* Empty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCLoadingScreenInterface_C", "PCLoadingScreen_GetItemsDiscovered");

	Params::IPCLoadingScreenInterface_C_PCLoadingScreen_GetItemsDiscovered_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemsDiscovered != nullptr)
		*ItemsDiscovered = std::move(Parms.ItemsDiscovered);

	if (Empty != nullptr)
		*Empty = Parms.Empty;

}


// Function PCLoadingScreenInterface.PCLoadingScreenInterface_C.PCLoadingScreen_GetLoadingScreenInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItem              InventoryItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              LocalFamiliarity                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ItemEffectDescription                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void IPCLoadingScreenInterface_C::PCLoadingScreen_GetLoadingScreenInfo(const struct FInventoryItem& InventoryItem, int32* LocalFamiliarity, class FString* ItemEffectDescription)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCLoadingScreenInterface_C", "PCLoadingScreen_GetLoadingScreenInfo");

	Params::IPCLoadingScreenInterface_C_PCLoadingScreen_GetLoadingScreenInfo_Params Parms{};

	Parms.InventoryItem = InventoryItem;

	UObject::ProcessEvent(Func, &Parms);

	if (LocalFamiliarity != nullptr)
		*LocalFamiliarity = Parms.LocalFamiliarity;

	if (ItemEffectDescription != nullptr)
		*ItemEffectDescription = std::move(Parms.ItemEffectDescription);

}

}


