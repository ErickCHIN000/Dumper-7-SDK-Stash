#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_sw_RealmInfo_GenericImage.WBP_sw_RealmInfo_GenericImage_C
// (None)

class UClass* UWBP_sw_RealmInfo_GenericImage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_sw_RealmInfo_GenericImage_C");

	return Clss;
}


// WBP_sw_RealmInfo_GenericImage_C WBP_sw_RealmInfo_GenericImage.Default__WBP_sw_RealmInfo_GenericImage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_sw_RealmInfo_GenericImage_C* UWBP_sw_RealmInfo_GenericImage_C::GetDefaultObj()
{
	static class UWBP_sw_RealmInfo_GenericImage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_sw_RealmInfo_GenericImage_C*>(UWBP_sw_RealmInfo_GenericImage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_sw_RealmInfo_GenericImage.WBP_sw_RealmInfo_GenericImage_C.SetImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_sw_RealmInfo_GenericImage_C::SetImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmInfo_GenericImage_C", "SetImage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_sw_RealmInfo_GenericImage.WBP_sw_RealmInfo_GenericImage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_sw_RealmInfo_GenericImage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmInfo_GenericImage_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_sw_RealmInfo_GenericImage.WBP_sw_RealmInfo_GenericImage_C.ExecuteUbergraph_WBP_sw_RealmInfo_GenericImage
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_RealmInfo_GenericImage_C::ExecuteUbergraph_WBP_sw_RealmInfo_GenericImage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmInfo_GenericImage_C", "ExecuteUbergraph_WBP_sw_RealmInfo_GenericImage");

	Params::UWBP_sw_RealmInfo_GenericImage_C_ExecuteUbergraph_WBP_sw_RealmInfo_GenericImage_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


