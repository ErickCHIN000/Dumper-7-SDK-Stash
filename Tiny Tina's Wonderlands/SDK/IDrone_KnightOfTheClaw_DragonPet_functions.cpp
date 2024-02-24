#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IDrone_KnightOfTheClaw_DragonPet.IDrone_KnightOfTheClaw_DragonPet_C
// (None)

class UClass* IIDrone_KnightOfTheClaw_DragonPet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IDrone_KnightOfTheClaw_DragonPet_C");

	return Clss;
}


// IDrone_KnightOfTheClaw_DragonPet_C IDrone_KnightOfTheClaw_DragonPet.Default__IDrone_KnightOfTheClaw_DragonPet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IIDrone_KnightOfTheClaw_DragonPet_C* IIDrone_KnightOfTheClaw_DragonPet_C::GetDefaultObj()
{
	static class IIDrone_KnightOfTheClaw_DragonPet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IIDrone_KnightOfTheClaw_DragonPet_C*>(IIDrone_KnightOfTheClaw_DragonPet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IDrone_KnightOfTheClaw_DragonPet.IDrone_KnightOfTheClaw_DragonPet_C.ExternalDragonCompanionCreateFireBoltSplat
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  TransformData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIDrone_KnightOfTheClaw_DragonPet_C::ExternalDragonCompanionCreateFireBoltSplat(const struct FTransform& TransformData, bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IDrone_KnightOfTheClaw_DragonPet_C", "ExternalDragonCompanionCreateFireBoltSplat");

	Params::IIDrone_KnightOfTheClaw_DragonPet_C_ExternalDragonCompanionCreateFireBoltSplat_Params Parms{};

	Parms.TransformData = TransformData;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IDrone_KnightOfTheClaw_DragonPet.IDrone_KnightOfTheClaw_DragonPet_C.ExternalDragonCompanionStopShockBreath
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIDrone_KnightOfTheClaw_DragonPet_C::ExternalDragonCompanionStopShockBreath(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IDrone_KnightOfTheClaw_DragonPet_C", "ExternalDragonCompanionStopShockBreath");

	Params::IIDrone_KnightOfTheClaw_DragonPet_C_ExternalDragonCompanionStopShockBreath_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IDrone_KnightOfTheClaw_DragonPet.IDrone_KnightOfTheClaw_DragonPet_C.ExternalDragonCompanionStopFireBolt
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIDrone_KnightOfTheClaw_DragonPet_C::ExternalDragonCompanionStopFireBolt(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IDrone_KnightOfTheClaw_DragonPet_C", "ExternalDragonCompanionStopFireBolt");

	Params::IIDrone_KnightOfTheClaw_DragonPet_C_ExternalDragonCompanionStopFireBolt_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IDrone_KnightOfTheClaw_DragonPet.IDrone_KnightOfTheClaw_DragonPet_C.ExternalDragonCompanionStopFireBreath
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIDrone_KnightOfTheClaw_DragonPet_C::ExternalDragonCompanionStopFireBreath(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IDrone_KnightOfTheClaw_DragonPet_C", "ExternalDragonCompanionStopFireBreath");

	Params::IIDrone_KnightOfTheClaw_DragonPet_C_ExternalDragonCompanionStopFireBreath_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IDrone_KnightOfTheClaw_DragonPet.IDrone_KnightOfTheClaw_DragonPet_C.ExternalDragonCompanionCreateShockBreath
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIDrone_KnightOfTheClaw_DragonPet_C::ExternalDragonCompanionCreateShockBreath(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IDrone_KnightOfTheClaw_DragonPet_C", "ExternalDragonCompanionCreateShockBreath");

	Params::IIDrone_KnightOfTheClaw_DragonPet_C_ExternalDragonCompanionCreateShockBreath_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IDrone_KnightOfTheClaw_DragonPet.IDrone_KnightOfTheClaw_DragonPet_C.ExternalDragonCompanionCreateFireBolt
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIDrone_KnightOfTheClaw_DragonPet_C::ExternalDragonCompanionCreateFireBolt(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IDrone_KnightOfTheClaw_DragonPet_C", "ExternalDragonCompanionCreateFireBolt");

	Params::IIDrone_KnightOfTheClaw_DragonPet_C_ExternalDragonCompanionCreateFireBolt_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IDrone_KnightOfTheClaw_DragonPet.IDrone_KnightOfTheClaw_DragonPet_C.ExternalDragonCompanionCreateFireBreath
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIDrone_KnightOfTheClaw_DragonPet_C::ExternalDragonCompanionCreateFireBreath(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IDrone_KnightOfTheClaw_DragonPet_C", "ExternalDragonCompanionCreateFireBreath");

	Params::IIDrone_KnightOfTheClaw_DragonPet_C_ExternalDragonCompanionCreateFireBreath_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IDrone_KnightOfTheClaw_DragonPet.IDrone_KnightOfTheClaw_DragonPet_C.DragonCompanionPauseAttacking
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Pause                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIDrone_KnightOfTheClaw_DragonPet_C::DragonCompanionPauseAttacking(bool Pause, bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IDrone_KnightOfTheClaw_DragonPet_C", "DragonCompanionPauseAttacking");

	Params::IIDrone_KnightOfTheClaw_DragonPet_C_DragonCompanionPauseAttacking_Params Parms{};

	Parms.Pause = Pause;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IDrone_KnightOfTheClaw_DragonPet.IDrone_KnightOfTheClaw_DragonPet_C.FinishInteract
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIDrone_KnightOfTheClaw_DragonPet_C::FinishInteract(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IDrone_KnightOfTheClaw_DragonPet_C", "FinishInteract");

	Params::IIDrone_KnightOfTheClaw_DragonPet_C_FinishInteract_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IDrone_KnightOfTheClaw_DragonPet.IDrone_KnightOfTheClaw_DragonPet_C.GetDragonCompanionTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIDrone_KnightOfTheClaw_DragonPet_C::GetDragonCompanionTarget(class AActor** Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IDrone_KnightOfTheClaw_DragonPet_C", "GetDragonCompanionTarget");

	Params::IIDrone_KnightOfTheClaw_DragonPet_C_GetDragonCompanionTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IDrone_KnightOfTheClaw_DragonPet.IDrone_KnightOfTheClaw_DragonPet_C.RequestDragonCompanionShockBreathAttack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIDrone_KnightOfTheClaw_DragonPet_C::RequestDragonCompanionShockBreathAttack(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IDrone_KnightOfTheClaw_DragonPet_C", "RequestDragonCompanionShockBreathAttack");

	Params::IIDrone_KnightOfTheClaw_DragonPet_C_RequestDragonCompanionShockBreathAttack_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}

}


