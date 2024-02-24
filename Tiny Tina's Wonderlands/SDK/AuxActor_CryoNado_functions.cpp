#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AuxActor_CryoNado.AuxActor_CryoNado_C
// (Actor)

class UClass* AAuxActor_CryoNado_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AuxActor_CryoNado_C");

	return Clss;
}


// AuxActor_CryoNado_C AuxActor_CryoNado.Default__AuxActor_CryoNado_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAuxActor_CryoNado_C* AAuxActor_CryoNado_C::GetDefaultObj()
{
	static class AAuxActor_CryoNado_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAuxActor_CryoNado_C*>(AAuxActor_CryoNado_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AuxActor_CryoNado.AuxActor_CryoNado_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAuxActor_CryoNado_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_CryoNado_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AuxActor_CryoNado.AuxActor_CryoNado_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAuxActor_CryoNado_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_CryoNado_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AuxActor_CryoNado.AuxActor_CryoNado_C.TurnOffEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAuxActor_CryoNado_C::TurnOffEffects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_CryoNado_C", "TurnOffEffects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AuxActor_CryoNado.AuxActor_CryoNado_C.TurnOnEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAuxActor_CryoNado_C::TurnOnEffects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_CryoNado_C", "TurnOnEffects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AuxActor_CryoNado.AuxActor_CryoNado_C.ExecuteUbergraph_AuxActor_CryoNado
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAuxActor_CryoNado_C::ExecuteUbergraph_AuxActor_CryoNado(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_CryoNado_C", "ExecuteUbergraph_AuxActor_CryoNado");

	Params::AAuxActor_CryoNado_C_ExecuteUbergraph_AuxActor_CryoNado_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


