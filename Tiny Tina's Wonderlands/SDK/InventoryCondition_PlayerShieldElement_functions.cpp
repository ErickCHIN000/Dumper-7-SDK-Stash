#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass InventoryCondition_PlayerShieldElement.InventoryCondition_PlayerShieldElement_C
// (None)

class UClass* UInventoryCondition_PlayerShieldElement_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryCondition_PlayerShieldElement_C");

	return Clss;
}


// InventoryCondition_PlayerShieldElement_C InventoryCondition_PlayerShieldElement.Default__InventoryCondition_PlayerShieldElement_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInventoryCondition_PlayerShieldElement_C* UInventoryCondition_PlayerShieldElement_C::GetDefaultObj()
{
	static class UInventoryCondition_PlayerShieldElement_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventoryCondition_PlayerShieldElement_C*>(UInventoryCondition_PlayerShieldElement_C::StaticClass()->DefaultObject);

	return Default;
}


// Function InventoryCondition_PlayerShieldElement.InventoryCondition_PlayerShieldElement_C.EvaluateCondition
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     OptionalContext                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AShield*                     K2Node_DynamicCast_AsShield                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetDamageType_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UInventoryCondition_PlayerShieldElement_C::EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class AShield* K2Node_DynamicCast_AsShield, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetDamageType_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryCondition_PlayerShieldElement_C", "EvaluateCondition");

	Params::UInventoryCondition_PlayerShieldElement_C_EvaluateCondition_Params Parms{};

	Parms.Context = Context;
	Parms.OptionalContext = OptionalContext;
	Parms.K2Node_DynamicCast_AsShield = K2Node_DynamicCast_AsShield;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDamageType_ReturnValue = CallFunc_GetDamageType_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


