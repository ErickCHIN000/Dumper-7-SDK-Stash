#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_sw_RealmInfo_GenericImageWithDescription.WBP_sw_RealmInfo_GenericImageWithDescription_C
// (None)

class UClass* UWBP_sw_RealmInfo_GenericImageWithDescription_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_sw_RealmInfo_GenericImageWithDescription_C");

	return Clss;
}


// WBP_sw_RealmInfo_GenericImageWithDescription_C WBP_sw_RealmInfo_GenericImageWithDescription.Default__WBP_sw_RealmInfo_GenericImageWithDescription_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_sw_RealmInfo_GenericImageWithDescription_C* UWBP_sw_RealmInfo_GenericImageWithDescription_C::GetDefaultObj()
{
	static class UWBP_sw_RealmInfo_GenericImageWithDescription_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_sw_RealmInfo_GenericImageWithDescription_C*>(UWBP_sw_RealmInfo_GenericImageWithDescription_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_sw_RealmInfo_GenericImageWithDescription.WBP_sw_RealmInfo_GenericImageWithDescription_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_sw_RealmInfo_GenericImageWithDescription_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmInfo_GenericImageWithDescription_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_sw_RealmInfo_GenericImageWithDescription.WBP_sw_RealmInfo_GenericImageWithDescription_C.ExecuteUbergraph_WBP_sw_RealmInfo_GenericImageWithDescription
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_RealmInfo_GenericImageWithDescription_C::ExecuteUbergraph_WBP_sw_RealmInfo_GenericImageWithDescription(int32 EntryPoint, bool CallFunc_TextIsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmInfo_GenericImageWithDescription_C", "ExecuteUbergraph_WBP_sw_RealmInfo_GenericImageWithDescription");

	Params::UWBP_sw_RealmInfo_GenericImageWithDescription_C_ExecuteUbergraph_WBP_sw_RealmInfo_GenericImageWithDescription_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


