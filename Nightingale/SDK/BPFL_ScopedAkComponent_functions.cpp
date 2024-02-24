#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_ScopedAkComponent.BPFL_ScopedAkComponent_C
// (None)

class UClass* UBPFL_ScopedAkComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_ScopedAkComponent_C");

	return Clss;
}


// BPFL_ScopedAkComponent_C BPFL_ScopedAkComponent.Default__BPFL_ScopedAkComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_ScopedAkComponent_C* UBPFL_ScopedAkComponent_C::GetDefaultObj()
{
	static class UBPFL_ScopedAkComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_ScopedAkComponent_C*>(UBPFL_ScopedAkComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_ScopedAkComponent.BPFL_ScopedAkComponent_C.Spawn External Scoped Ak Component
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          Scoped_Ak_Component                                              (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAcousticsSubsystem*         CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBPFL_ScopedAkComponent_C::Spawn_External_Scoped_Ak_Component(const struct FVector& Location, class UObject* __WorldContext, class UScopedAkComponent** Scoped_Ak_Component, class UAcousticsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_ScopedAkComponent_C", "Spawn External Scoped Ak Component");

	Params::UBPFL_ScopedAkComponent_C_Spawn_External_Scoped_Ak_Component_Params Parms{};

	Parms.Location = Location;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue = CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Scoped_Ak_Component != nullptr)
		*Scoped_Ak_Component = Parms.Scoped_Ak_Component;

}

}


