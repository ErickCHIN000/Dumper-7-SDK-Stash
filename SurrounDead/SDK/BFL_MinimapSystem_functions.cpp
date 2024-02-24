#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BFL_MinimapSystem.BFL_MinimapSystem_C
// (None)

class UClass* UBFL_MinimapSystem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BFL_MinimapSystem_C");

	return Clss;
}


// BFL_MinimapSystem_C BFL_MinimapSystem.Default__BFL_MinimapSystem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBFL_MinimapSystem_C* UBFL_MinimapSystem_C::GetDefaultObj()
{
	static class UBFL_MinimapSystem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBFL_MinimapSystem_C*>(UBFL_MinimapSystem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BFL_MinimapSystem.BFL_MinimapSystem_C.Get Minimap Component
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBPC_MinimapSystem_C*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBPC_MinimapSystem_C*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UBPC_MinimapSystem_C* UBFL_MinimapSystem_C::Get_Minimap_Component(class AActor* Actor, class UObject* __WorldContext, class UBPC_MinimapSystem_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BFL_MinimapSystem_C", "Get Minimap Component");

	Params::UBFL_MinimapSystem_C_Get_Minimap_Component_Params Parms{};

	Parms.Actor = Actor;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


