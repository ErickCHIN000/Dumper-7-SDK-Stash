#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IFeat_GunMage.IFeat_GunMage_C
// (None)

class UClass* IIFeat_GunMage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IFeat_GunMage_C");

	return Clss;
}


// IFeat_GunMage_C IFeat_GunMage.Default__IFeat_GunMage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IIFeat_GunMage_C* IIFeat_GunMage_C::GetDefaultObj()
{
	static class IIFeat_GunMage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IIFeat_GunMage_C*>(IIFeat_GunMage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IFeat_GunMage.IFeat_GunMage_C.GunMageSetWildMagicGrade
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewGrade                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIFeat_GunMage_C::GunMageSetWildMagicGrade(int32 NewGrade, bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_GunMage_C", "GunMageSetWildMagicGrade");

	Params::IIFeat_GunMage_C_GunMageSetWildMagicGrade_Params Parms{};

	Parms.NewGrade = NewGrade;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IFeat_GunMage.IFeat_GunMage_C.TogglePolymorphLocks
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      PolymoprhTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               EnableLocks                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTeam*                       StartingTeam                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIFeat_GunMage_C::TogglePolymorphLocks(class AActor* PolymoprhTarget, bool EnableLocks, class UTeam* StartingTeam, bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_GunMage_C", "TogglePolymorphLocks");

	Params::IIFeat_GunMage_C_TogglePolymorphLocks_Params Parms{};

	Parms.PolymoprhTarget = PolymoprhTarget;
	Parms.EnableLocks = EnableLocks;
	Parms.StartingTeam = StartingTeam;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IFeat_GunMage.IFeat_GunMage_C.GetSpellweavingStacks
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIFeat_GunMage_C::GetSpellweavingStacks(int32* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_GunMage_C", "GetSpellweavingStacks");

	Params::IIFeat_GunMage_C_GetSpellweavingStacks_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IFeat_GunMage.IFeat_GunMage_C.RemoveAllSpellweavingStacks
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Force                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIFeat_GunMage_C::RemoveAllSpellweavingStacks(bool Force, bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_GunMage_C", "RemoveAllSpellweavingStacks");

	Params::IIFeat_GunMage_C_RemoveAllSpellweavingStacks_Params Parms{};

	Parms.Force = Force;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IFeat_GunMage.IFeat_GunMage_C.RemoveSpellweavingStacks
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Stacks                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIFeat_GunMage_C::RemoveSpellweavingStacks(int32 Stacks, int32* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_GunMage_C", "RemoveSpellweavingStacks");

	Params::IIFeat_GunMage_C_RemoveSpellweavingStacks_Params Parms{};

	Parms.Stacks = Stacks;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IFeat_GunMage.IFeat_GunMage_C.AddSpellweavingStacks
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Stacks                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIFeat_GunMage_C::AddSpellweavingStacks(int32 Stacks, int32* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IFeat_GunMage_C", "AddSpellweavingStacks");

	Params::IIFeat_GunMage_C_AddSpellweavingStacks_Params Parms{};

	Parms.Stacks = Stacks;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}

}


