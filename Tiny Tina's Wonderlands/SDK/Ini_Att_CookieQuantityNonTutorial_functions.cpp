#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ini_Att_CookieQuantityNonTutorial.Ini_Att_CookieQuantityNonTutorial_C
// (None)

class UClass* UIni_Att_CookieQuantityNonTutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ini_Att_CookieQuantityNonTutorial_C");

	return Clss;
}


// Ini_Att_CookieQuantityNonTutorial_C Ini_Att_CookieQuantityNonTutorial.Default__Ini_Att_CookieQuantityNonTutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIni_Att_CookieQuantityNonTutorial_C* UIni_Att_CookieQuantityNonTutorial_C::GetDefaultObj()
{
	static class UIni_Att_CookieQuantityNonTutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIni_Att_CookieQuantityNonTutorial_C*>(UIni_Att_CookieQuantityNonTutorial_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ini_Att_CookieQuantityNonTutorial.Ini_Att_CookieQuantityNonTutorial_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_ED_FinalChest_C>K2Node_DynamicCast_AsBPI_ED_Final_Chest                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetNonTutoCookieAmount_NonTutoCookieAmount              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UIni_Att_CookieQuantityNonTutorial_C::CalculateAttributeInitialValue(class UObject* Context, TScriptInterface<class IBPI_ED_FinalChest_C> K2Node_DynamicCast_AsBPI_ED_Final_Chest, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetNonTutoCookieAmount_NonTutoCookieAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ini_Att_CookieQuantityNonTutorial_C", "CalculateAttributeInitialValue");

	Params::UIni_Att_CookieQuantityNonTutorial_C_CalculateAttributeInitialValue_Params Parms{};

	Parms.Context = Context;
	Parms.K2Node_DynamicCast_AsBPI_ED_Final_Chest = K2Node_DynamicCast_AsBPI_ED_Final_Chest;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetNonTutoCookieAmount_NonTutoCookieAmount = CallFunc_GetNonTutoCookieAmount_NonTutoCookieAmount;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


