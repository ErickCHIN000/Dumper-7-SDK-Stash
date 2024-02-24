#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IDrone_Necromancer_DemiLich.IDrone_Necromancer_DemiLich_C
// (None)

class UClass* IIDrone_Necromancer_DemiLich_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IDrone_Necromancer_DemiLich_C");

	return Clss;
}


// IDrone_Necromancer_DemiLich_C IDrone_Necromancer_DemiLich.Default__IDrone_Necromancer_DemiLich_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IIDrone_Necromancer_DemiLich_C* IIDrone_Necromancer_DemiLich_C::GetDefaultObj()
{
	static class IIDrone_Necromancer_DemiLich_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IIDrone_Necromancer_DemiLich_C*>(IIDrone_Necromancer_DemiLich_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IDrone_Necromancer_DemiLich.IDrone_Necromancer_DemiLich_C.GetDemiLichIsDying
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIDrone_Necromancer_DemiLich_C::GetDemiLichIsDying(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IDrone_Necromancer_DemiLich_C", "GetDemiLichIsDying");

	Params::IIDrone_Necromancer_DemiLich_C_GetDemiLichIsDying_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IDrone_Necromancer_DemiLich.IDrone_Necromancer_DemiLich_C.GetDemiLichOwner
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIDrone_Necromancer_DemiLich_C::GetDemiLichOwner(class AActor** Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IDrone_Necromancer_DemiLich_C", "GetDemiLichOwner");

	Params::IIDrone_Necromancer_DemiLich_C_GetDemiLichOwner_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IDrone_Necromancer_DemiLich.IDrone_Necromancer_DemiLich_C.Passive09_LichSacrifice
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIDrone_Necromancer_DemiLich_C::Passive09_LichSacrifice(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IDrone_Necromancer_DemiLich_C", "Passive09_LichSacrifice");

	Params::IIDrone_Necromancer_DemiLich_C_Passive09_LichSacrifice_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IDrone_Necromancer_DemiLich.IDrone_Necromancer_DemiLich_C.GetDemiLichCompanionTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIDrone_Necromancer_DemiLich_C::GetDemiLichCompanionTarget(class AActor** Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IDrone_Necromancer_DemiLich_C", "GetDemiLichCompanionTarget");

	Params::IIDrone_Necromancer_DemiLich_C_GetDemiLichCompanionTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}

}


