#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_DropCargo.UMG_DropCargo_C
// (None)

class UClass* UUMG_DropCargo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_DropCargo_C");

	return Clss;
}


// UMG_DropCargo_C UMG_DropCargo.Default__UMG_DropCargo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_DropCargo_C* UUMG_DropCargo_C::GetDefaultObj()
{
	static class UUMG_DropCargo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_DropCargo_C*>(UUMG_DropCargo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_DropCargo.UMG_DropCargo_C.Initialise
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_DropCargo_C::Initialise(class UInventory* Inventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropCargo_C", "Initialise");

	Params::UUMG_DropCargo_C_Initialise_Params Parms{};

	Parms.Inventory = Inventory;

	UObject::ProcessEvent(Func, &Parms);

}

}


