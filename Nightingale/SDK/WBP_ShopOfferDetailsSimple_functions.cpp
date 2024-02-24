#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ShopOfferDetailsSimple.WBP_ShopOfferDetailsSimple_C
// (None)

class UClass* UWBP_ShopOfferDetailsSimple_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ShopOfferDetailsSimple_C");

	return Clss;
}


// WBP_ShopOfferDetailsSimple_C WBP_ShopOfferDetailsSimple.Default__WBP_ShopOfferDetailsSimple_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ShopOfferDetailsSimple_C* UWBP_ShopOfferDetailsSimple_C::GetDefaultObj()
{
	static class UWBP_ShopOfferDetailsSimple_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ShopOfferDetailsSimple_C*>(UWBP_ShopOfferDetailsSimple_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ShopOfferDetailsSimple.WBP_ShopOfferDetailsSimple_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ShopOfferDetailsSimple_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopOfferDetailsSimple_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ShopOfferDetailsSimple.WBP_ShopOfferDetailsSimple_C.ExecuteUbergraph_WBP_ShopOfferDetailsSimple
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemDescription_ReturnValue                          (None)

void UWBP_ShopOfferDetailsSimple_C::ExecuteUbergraph_WBP_ShopOfferDetailsSimple(int32 EntryPoint, class FText CallFunc_GetItemDescription_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopOfferDetailsSimple_C", "ExecuteUbergraph_WBP_ShopOfferDetailsSimple");

	Params::UWBP_ShopOfferDetailsSimple_C_ExecuteUbergraph_WBP_ShopOfferDetailsSimple_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetItemDescription_ReturnValue = CallFunc_GetItemDescription_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


