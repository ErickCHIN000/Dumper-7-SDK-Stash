#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AtmosphereFunctionLibrary.BP_AtmosphereFunctionLibrary_C
// (None)

class UClass* UBP_AtmosphereFunctionLibrary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AtmosphereFunctionLibrary_C");

	return Clss;
}


// BP_AtmosphereFunctionLibrary_C BP_AtmosphereFunctionLibrary.Default__BP_AtmosphereFunctionLibrary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AtmosphereFunctionLibrary_C* UBP_AtmosphereFunctionLibrary_C::GetDefaultObj()
{
	static class UBP_AtmosphereFunctionLibrary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AtmosphereFunctionLibrary_C*>(UBP_AtmosphereFunctionLibrary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AtmosphereFunctionLibrary.BP_AtmosphereFunctionLibrary_C.GetAtmosphereController
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AtmosphereController_C*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWorldSettings*              CallFunc_GetWorldSettings_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusWorldSettings_C*   K2Node_DynamicCast_AsBP_Icarus_World_Settings                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_AtmosphereController_C*  K2Node_DynamicCast_AsBP_Atmosphere_Controller                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

class ABP_AtmosphereController_C* UBP_AtmosphereFunctionLibrary_C::GetAtmosphereController(class UObject* __WorldContext, class AWorldSettings* CallFunc_GetWorldSettings_ReturnValue, class ABP_IcarusWorldSettings_C* K2Node_DynamicCast_AsBP_Icarus_World_Settings, bool K2Node_DynamicCast_bSuccess, class ABP_AtmosphereController_C* K2Node_DynamicCast_AsBP_Atmosphere_Controller, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AtmosphereFunctionLibrary_C", "GetAtmosphereController");

	Params::UBP_AtmosphereFunctionLibrary_C_GetAtmosphereController_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetWorldSettings_ReturnValue = CallFunc_GetWorldSettings_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_World_Settings = K2Node_DynamicCast_AsBP_Icarus_World_Settings;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Atmosphere_Controller = K2Node_DynamicCast_AsBP_Atmosphere_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


