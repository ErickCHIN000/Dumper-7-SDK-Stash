#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_NWXObjects.BPFL_NWXObjects_C
// (None)

class UClass* UBPFL_NWXObjects_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_NWXObjects_C");

	return Clss;
}


// BPFL_NWXObjects_C BPFL_NWXObjects.Default__BPFL_NWXObjects_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_NWXObjects_C* UBPFL_NWXObjects_C::GetDefaultObj()
{
	static class UBPFL_NWXObjects_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_NWXObjects_C*>(UBPFL_NWXObjects_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_NWXObjects.BPFL_NWXObjects_C.OwnerHasAuthority
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FindOwnerActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBPFL_NWXObjects_C::OwnerHasAuthority(class UObject* Object, class UObject* __WorldContext, class AActor* Actor, class AActor* CallFunc_FindOwnerActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_NWXObjects_C", "OwnerHasAuthority");

	Params::UBPFL_NWXObjects_C_OwnerHasAuthority_Params Parms{};

	Parms.Object = Object;
	Parms.__WorldContext = __WorldContext;
	Parms.Actor = Actor;
	Parms.CallFunc_FindOwnerActor_ReturnValue = CallFunc_FindOwnerActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


