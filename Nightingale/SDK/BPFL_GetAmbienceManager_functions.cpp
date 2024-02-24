#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_GetAmbienceManager.BPFL_GetAmbienceManager_C
// (None)

class UClass* UBPFL_GetAmbienceManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_GetAmbienceManager_C");

	return Clss;
}


// BPFL_GetAmbienceManager_C BPFL_GetAmbienceManager.Default__BPFL_GetAmbienceManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_GetAmbienceManager_C* UBPFL_GetAmbienceManager_C::GetDefaultObj()
{
	static class UBPFL_GetAmbienceManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_GetAmbienceManager_C*>(UBPFL_GetAmbienceManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_GetAmbienceManager.BPFL_GetAmbienceManager_C.GetAmbienceManager
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAmbienceManager*            AmbienceManager                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerCameraManager*     K2Node_DynamicCast_AsNWXPlayer_Camera_Manager                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAmbienceManager*            CallFunc_GetAmbienceManager_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBPFL_GetAmbienceManager_C::GetAmbienceManager(class UObject* __WorldContext, class UAmbienceManager** AmbienceManager, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class ANWXPlayerCameraManager* K2Node_DynamicCast_AsNWXPlayer_Camera_Manager, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UAmbienceManager* CallFunc_GetAmbienceManager_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GetAmbienceManager_C", "GetAmbienceManager");

	Params::UBPFL_GetAmbienceManager_C_GetAmbienceManager_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Camera_Manager = K2Node_DynamicCast_AsNWXPlayer_Camera_Manager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAmbienceManager_ReturnValue = CallFunc_GetAmbienceManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AmbienceManager != nullptr)
		*AmbienceManager = Parms.AmbienceManager;

}

}


