#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PlayerControllerInterface.BP_PlayerControllerInterface_C
// (None)

class UClass* IBP_PlayerControllerInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PlayerControllerInterface_C");

	return Clss;
}


// BP_PlayerControllerInterface_C BP_PlayerControllerInterface.Default__BP_PlayerControllerInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBP_PlayerControllerInterface_C* IBP_PlayerControllerInterface_C::GetDefaultObj()
{
	static class IBP_PlayerControllerInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBP_PlayerControllerInterface_C*>(IBP_PlayerControllerInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PlayerControllerInterface.BP_PlayerControllerInterface_C.CameraShake
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      CameraShake                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBP_PlayerControllerInterface_C::CameraShake(class UClass* CameraShake)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerControllerInterface_C", "CameraShake");

	Params::IBP_PlayerControllerInterface_C_CameraShake_Params Parms{};

	Parms.CameraShake = CameraShake;

	UObject::ProcessEvent(Func, &Parms);

}

}


