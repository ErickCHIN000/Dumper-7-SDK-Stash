#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NPCInteractableProjectileInterface.NPCInteractableProjectileInterface_C
// (None)

class UClass* INPCInteractableProjectileInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NPCInteractableProjectileInterface_C");

	return Clss;
}


// NPCInteractableProjectileInterface_C NPCInteractableProjectileInterface.Default__NPCInteractableProjectileInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class INPCInteractableProjectileInterface_C* INPCInteractableProjectileInterface_C::GetDefaultObj()
{
	static class INPCInteractableProjectileInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<INPCInteractableProjectileInterface_C*>(INPCInteractableProjectileInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NPCInteractableProjectileInterface.NPCInteractableProjectileInterface_C.ProjectileDetonate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void INPCInteractableProjectileInterface_C::ProjectileDetonate(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPCInteractableProjectileInterface_C", "ProjectileDetonate");

	Params::INPCInteractableProjectileInterface_C_ProjectileDetonate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function NPCInteractableProjectileInterface.NPCInteractableProjectileInterface_C.ProjectileArm
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void INPCInteractableProjectileInterface_C::ProjectileArm(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPCInteractableProjectileInterface_C", "ProjectileArm");

	Params::INPCInteractableProjectileInterface_C_ProjectileArm_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function NPCInteractableProjectileInterface.NPCInteractableProjectileInterface_C.ProjectileDisarm
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void INPCInteractableProjectileInterface_C::ProjectileDisarm(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPCInteractableProjectileInterface_C", "ProjectileDisarm");

	Params::INPCInteractableProjectileInterface_C_ProjectileDisarm_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}

}


