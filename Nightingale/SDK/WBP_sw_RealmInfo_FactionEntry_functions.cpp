#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_sw_RealmInfo_FactionEntry.WBP_sw_RealmInfo_FactionEntry_C
// (None)

class UClass* UWBP_sw_RealmInfo_FactionEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_sw_RealmInfo_FactionEntry_C");

	return Clss;
}


// WBP_sw_RealmInfo_FactionEntry_C WBP_sw_RealmInfo_FactionEntry.Default__WBP_sw_RealmInfo_FactionEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_sw_RealmInfo_FactionEntry_C* UWBP_sw_RealmInfo_FactionEntry_C::GetDefaultObj()
{
	static class UWBP_sw_RealmInfo_FactionEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_sw_RealmInfo_FactionEntry_C*>(UWBP_sw_RealmInfo_FactionEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_sw_RealmInfo_FactionEntry.WBP_sw_RealmInfo_FactionEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_sw_RealmInfo_FactionEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmInfo_FactionEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_sw_RealmInfo_FactionEntry.WBP_sw_RealmInfo_FactionEntry_C.ExecuteUbergraph_WBP_sw_RealmInfo_FactionEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_RealmInfo_FactionEntry_C::ExecuteUbergraph_WBP_sw_RealmInfo_FactionEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmInfo_FactionEntry_C", "ExecuteUbergraph_WBP_sw_RealmInfo_FactionEntry");

	Params::UWBP_sw_RealmInfo_FactionEntry_C_ExecuteUbergraph_WBP_sw_RealmInfo_FactionEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


