#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_sw_RealmInfo_GenericImageWithTitle.WBP_sw_RealmInfo_GenericImageWithTitle_C
// (None)

class UClass* UWBP_sw_RealmInfo_GenericImageWithTitle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_sw_RealmInfo_GenericImageWithTitle_C");

	return Clss;
}


// WBP_sw_RealmInfo_GenericImageWithTitle_C WBP_sw_RealmInfo_GenericImageWithTitle.Default__WBP_sw_RealmInfo_GenericImageWithTitle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_sw_RealmInfo_GenericImageWithTitle_C* UWBP_sw_RealmInfo_GenericImageWithTitle_C::GetDefaultObj()
{
	static class UWBP_sw_RealmInfo_GenericImageWithTitle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_sw_RealmInfo_GenericImageWithTitle_C*>(UWBP_sw_RealmInfo_GenericImageWithTitle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_sw_RealmInfo_GenericImageWithTitle.WBP_sw_RealmInfo_GenericImageWithTitle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_sw_RealmInfo_GenericImageWithTitle_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmInfo_GenericImageWithTitle_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_sw_RealmInfo_GenericImageWithTitle.WBP_sw_RealmInfo_GenericImageWithTitle_C.ExecuteUbergraph_WBP_sw_RealmInfo_GenericImageWithTitle
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_RealmInfo_GenericImageWithTitle_C::ExecuteUbergraph_WBP_sw_RealmInfo_GenericImageWithTitle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmInfo_GenericImageWithTitle_C", "ExecuteUbergraph_WBP_sw_RealmInfo_GenericImageWithTitle");

	Params::UWBP_sw_RealmInfo_GenericImageWithTitle_C_ExecuteUbergraph_WBP_sw_RealmInfo_GenericImageWithTitle_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


