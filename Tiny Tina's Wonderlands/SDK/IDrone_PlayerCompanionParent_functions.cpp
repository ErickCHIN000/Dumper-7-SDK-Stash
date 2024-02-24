#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IDrone_PlayerCompanionParent.IDrone_PlayerCompanionParent_C
// (None)

class UClass* IIDrone_PlayerCompanionParent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IDrone_PlayerCompanionParent_C");

	return Clss;
}


// IDrone_PlayerCompanionParent_C IDrone_PlayerCompanionParent.Default__IDrone_PlayerCompanionParent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IIDrone_PlayerCompanionParent_C* IIDrone_PlayerCompanionParent_C::GetDefaultObj()
{
	static class IIDrone_PlayerCompanionParent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IIDrone_PlayerCompanionParent_C*>(IIDrone_PlayerCompanionParent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IDrone_PlayerCompanionParent.IDrone_PlayerCompanionParent_C.CompanionDeath
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIDrone_PlayerCompanionParent_C::CompanionDeath(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IDrone_PlayerCompanionParent_C", "CompanionDeath");

	Params::IIDrone_PlayerCompanionParent_C_CompanionDeath_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IDrone_PlayerCompanionParent.IDrone_PlayerCompanionParent_C.CompanionSpawn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIDrone_PlayerCompanionParent_C::CompanionSpawn(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IDrone_PlayerCompanionParent_C", "CompanionSpawn");

	Params::IIDrone_PlayerCompanionParent_C_CompanionSpawn_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IDrone_PlayerCompanionParent.IDrone_PlayerCompanionParent_C.IsCompanionInCombat
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIDrone_PlayerCompanionParent_C::IsCompanionInCombat(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IDrone_PlayerCompanionParent_C", "IsCompanionInCombat");

	Params::IIDrone_PlayerCompanionParent_C_IsCompanionInCombat_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IDrone_PlayerCompanionParent.IDrone_PlayerCompanionParent_C.KillCompanion
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIDrone_PlayerCompanionParent_C::KillCompanion(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IDrone_PlayerCompanionParent_C", "KillCompanion");

	Params::IIDrone_PlayerCompanionParent_C_KillCompanion_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IDrone_PlayerCompanionParent.IDrone_PlayerCompanionParent_C.CompanionDespawn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIDrone_PlayerCompanionParent_C::CompanionDespawn(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IDrone_PlayerCompanionParent_C", "CompanionDespawn");

	Params::IIDrone_PlayerCompanionParent_C_CompanionDespawn_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}

}


