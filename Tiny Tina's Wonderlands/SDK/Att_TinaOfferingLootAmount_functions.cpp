#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Att_TinaOfferingLootAmount.Att_TinaOfferingLootAmount_C
// (None)

class UClass* UAtt_TinaOfferingLootAmount_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Att_TinaOfferingLootAmount_C");

	return Clss;
}


// Att_TinaOfferingLootAmount_C Att_TinaOfferingLootAmount.Default__Att_TinaOfferingLootAmount_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAtt_TinaOfferingLootAmount_C* UAtt_TinaOfferingLootAmount_C::GetDefaultObj()
{
	static class UAtt_TinaOfferingLootAmount_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAtt_TinaOfferingLootAmount_C*>(UAtt_TinaOfferingLootAmount_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Att_TinaOfferingLootAmount.Att_TinaOfferingLootAmount_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_TinaOffering_C>K2Node_DynamicCast_AsBPI_Tina_Offering                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetLootAmount_LootAmount                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)

float UAtt_TinaOfferingLootAmount_C::CalculateAttributeInitialValue(class UObject* Context, TScriptInterface<class IBPI_TinaOffering_C> K2Node_DynamicCast_AsBPI_Tina_Offering, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetLootAmount_LootAmount, float CallFunc_Conv_IntToFloat_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Att_TinaOfferingLootAmount_C", "CalculateAttributeInitialValue");

	Params::UAtt_TinaOfferingLootAmount_C_CalculateAttributeInitialValue_Params Parms{};

	Parms.Context = Context;
	Parms.K2Node_DynamicCast_AsBPI_Tina_Offering = K2Node_DynamicCast_AsBPI_Tina_Offering;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetLootAmount_LootAmount = CallFunc_GetLootAmount_LootAmount;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


