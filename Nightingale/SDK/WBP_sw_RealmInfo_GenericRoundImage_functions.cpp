#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_sw_RealmInfo_GenericRoundImage.WBP_sw_RealmInfo_GenericRoundImage_C
// (None)

class UClass* UWBP_sw_RealmInfo_GenericRoundImage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_sw_RealmInfo_GenericRoundImage_C");

	return Clss;
}


// WBP_sw_RealmInfo_GenericRoundImage_C WBP_sw_RealmInfo_GenericRoundImage.Default__WBP_sw_RealmInfo_GenericRoundImage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_sw_RealmInfo_GenericRoundImage_C* UWBP_sw_RealmInfo_GenericRoundImage_C::GetDefaultObj()
{
	static class UWBP_sw_RealmInfo_GenericRoundImage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_sw_RealmInfo_GenericRoundImage_C*>(UWBP_sw_RealmInfo_GenericRoundImage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_sw_RealmInfo_GenericRoundImage.WBP_sw_RealmInfo_GenericRoundImage_C.SetImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_sw_RealmInfo_GenericRoundImage_C::SetImage(TSoftObjectPtr<class UTexture2D> Icon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmInfo_GenericRoundImage_C", "SetImage");

	Params::UWBP_sw_RealmInfo_GenericRoundImage_C_SetImage_Params Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_RealmInfo_GenericRoundImage.WBP_sw_RealmInfo_GenericRoundImage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_sw_RealmInfo_GenericRoundImage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmInfo_GenericRoundImage_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_sw_RealmInfo_GenericRoundImage.WBP_sw_RealmInfo_GenericRoundImage_C.ExecuteUbergraph_WBP_sw_RealmInfo_GenericRoundImage
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_RealmInfo_GenericRoundImage_C::ExecuteUbergraph_WBP_sw_RealmInfo_GenericRoundImage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmInfo_GenericRoundImage_C", "ExecuteUbergraph_WBP_sw_RealmInfo_GenericRoundImage");

	Params::UWBP_sw_RealmInfo_GenericRoundImage_C_ExecuteUbergraph_WBP_sw_RealmInfo_GenericRoundImage_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


