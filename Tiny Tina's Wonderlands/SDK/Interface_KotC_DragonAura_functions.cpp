#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Interface_KotC_DragonAura.Interface_KotC_DragonAura_C
// (None)

class UClass* IInterface_KotC_DragonAura_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Interface_KotC_DragonAura_C");

	return Clss;
}


// Interface_KotC_DragonAura_C Interface_KotC_DragonAura.Default__Interface_KotC_DragonAura_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IInterface_KotC_DragonAura_C* IInterface_KotC_DragonAura_C::GetDefaultObj()
{
	static class IInterface_KotC_DragonAura_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IInterface_KotC_DragonAura_C*>(IInterface_KotC_DragonAura_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Interface_KotC_DragonAura.Interface_KotC_DragonAura_C.ExternalRemoveDragonAuraTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DragonAuraTarget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInterface_KotC_DragonAura_C::ExternalRemoveDragonAuraTarget(class AActor* DragonAuraTarget, bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_KotC_DragonAura_C", "ExternalRemoveDragonAuraTarget");

	Params::IInterface_KotC_DragonAura_C_ExternalRemoveDragonAuraTarget_Params Parms{};

	Parms.DragonAuraTarget = DragonAuraTarget;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Interface_KotC_DragonAura.Interface_KotC_DragonAura_C.IsActorInMyDragonAura
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInterface_KotC_DragonAura_C::IsActorInMyDragonAura(class AActor* Actor, bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_KotC_DragonAura_C", "IsActorInMyDragonAura");

	Params::IInterface_KotC_DragonAura_C_IsActorInMyDragonAura_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Interface_KotC_DragonAura.Interface_KotC_DragonAura_C.DragonAuraRefreshAllValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IInterface_KotC_DragonAura_C::DragonAuraRefreshAllValues()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_KotC_DragonAura_C", "DragonAuraRefreshAllValues");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Interface_KotC_DragonAura.Interface_KotC_DragonAura_C.ResetAuraDuration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInterface_KotC_DragonAura_C::ResetAuraDuration(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_KotC_DragonAura_C", "ResetAuraDuration");

	Params::IInterface_KotC_DragonAura_C_ResetAuraDuration_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}

}


