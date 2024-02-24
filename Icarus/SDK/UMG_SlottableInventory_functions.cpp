#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_SlottableInventory.UMG_SlottableInventory_C
// (None)

class UClass* UUMG_SlottableInventory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_SlottableInventory_C");

	return Clss;
}


// UMG_SlottableInventory_C UMG_SlottableInventory.Default__UMG_SlottableInventory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_SlottableInventory_C* UUMG_SlottableInventory_C::GetDefaultObj()
{
	static class UUMG_SlottableInventory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_SlottableInventory_C*>(UUMG_SlottableInventory_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_SlottableInventory.UMG_SlottableInventory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_SlottableInventory_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SlottableInventory_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_SlottableInventory.UMG_SlottableInventory_C.ExecuteUbergraph_UMG_SlottableInventory
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SlottableInventory_C::ExecuteUbergraph_UMG_SlottableInventory(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SlottableInventory_C", "ExecuteUbergraph_UMG_SlottableInventory");

	Params::UUMG_SlottableInventory_C_ExecuteUbergraph_UMG_SlottableInventory_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


