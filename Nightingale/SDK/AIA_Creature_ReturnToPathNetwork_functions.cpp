#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIA_Creature_ReturnToPathNetwork.AIA_Creature_ReturnToPathNetwork_C
// (None)

class UClass* UAIA_Creature_ReturnToPathNetwork_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIA_Creature_ReturnToPathNetwork_C");

	return Clss;
}


// AIA_Creature_ReturnToPathNetwork_C AIA_Creature_ReturnToPathNetwork.Default__AIA_Creature_ReturnToPathNetwork_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIA_Creature_ReturnToPathNetwork_C* UAIA_Creature_ReturnToPathNetwork_C::GetDefaultObj()
{
	static class UAIA_Creature_ReturnToPathNetwork_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIA_Creature_ReturnToPathNetwork_C*>(UAIA_Creature_ReturnToPathNetwork_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIA_Creature_ReturnToPathNetwork.AIA_Creature_ReturnToPathNetwork_C.Initialize
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Initialize_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWX_CharacterMovementComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

bool UAIA_Creature_ReturnToPathNetwork_C::Initialize(bool CallFunc_Initialize_ReturnValue, class UNWX_CharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_ReturnToPathNetwork_C", "Initialize");

	Params::UAIA_Creature_ReturnToPathNetwork_C_Initialize_Params Parms{};

	Parms.CallFunc_Initialize_ReturnValue = CallFunc_Initialize_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIA_Creature_ReturnToPathNetwork.AIA_Creature_ReturnToPathNetwork_C.CheckStaticTargetRequirements
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIA_Creature_ReturnToPathNetwork_C::CheckStaticTargetRequirements(class AActor* Target, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_ReturnToPathNetwork_C", "CheckStaticTargetRequirements");

	Params::UAIA_Creature_ReturnToPathNetwork_C_CheckStaticTargetRequirements_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIA_Creature_ReturnToPathNetwork.AIA_Creature_ReturnToPathNetwork_C.CheckOwnerRequirements
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCurrentlyReturningToNavMesh_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIA_Creature_ReturnToPathNetwork_C::CheckOwnerRequirements(bool CallFunc_IsCurrentlyReturningToNavMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_ReturnToPathNetwork_C", "CheckOwnerRequirements");

	Params::UAIA_Creature_ReturnToPathNetwork_C_CheckOwnerRequirements_Params Parms{};

	Parms.CallFunc_IsCurrentlyReturningToNavMesh_ReturnValue = CallFunc_IsCurrentlyReturningToNavMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


