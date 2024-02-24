#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTD_IsCarryingResource.BTD_IsCarryingResource_C
// (None)

class UClass* UBTD_IsCarryingResource_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTD_IsCarryingResource_C");

	return Clss;
}


// BTD_IsCarryingResource_C BTD_IsCarryingResource.Default__BTD_IsCarryingResource_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTD_IsCarryingResource_C* UBTD_IsCarryingResource_C::GetDefaultObj()
{
	static class UBTD_IsCarryingResource_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTD_IsCarryingResource_C*>(UBTD_IsCarryingResource_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTD_IsCarryingResource.BTD_IsCarryingResource_C.PerformConditionCheckAI
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Carry_C>K2Node_DynamicCast_AsBPI_Carry                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetCarriedResource_ResourceItem                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCarriedResource_IsCarryingResource                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBTD_IsCarryingResource_C::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, TScriptInterface<class IBPI_Carry_C> K2Node_DynamicCast_AsBPI_Carry, bool K2Node_DynamicCast_bSuccess, class AEquippableItem* CallFunc_GetCarriedResource_ResourceItem, bool CallFunc_GetCarriedResource_IsCarryingResource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTD_IsCarryingResource_C", "PerformConditionCheckAI");

	Params::UBTD_IsCarryingResource_C_PerformConditionCheckAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.K2Node_DynamicCast_AsBPI_Carry = K2Node_DynamicCast_AsBPI_Carry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCarriedResource_ResourceItem = CallFunc_GetCarriedResource_ResourceItem;
	Parms.CallFunc_GetCarriedResource_IsCarryingResource = CallFunc_GetCarriedResource_IsCarryingResource;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


