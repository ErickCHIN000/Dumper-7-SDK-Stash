#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass A_Hydra_Multi_Fidget_V2.A_Hydra_Multi_Fidget_V2_C
// (None)

class UClass* UA_Hydra_Multi_Fidget_V2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("A_Hydra_Multi_Fidget_V2_C");

	return Clss;
}


// A_Hydra_Multi_Fidget_V2_C A_Hydra_Multi_Fidget_V2.Default__A_Hydra_Multi_Fidget_V2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UA_Hydra_Multi_Fidget_V2_C* UA_Hydra_Multi_Fidget_V2_C::GetDefaultObj()
{
	static class UA_Hydra_Multi_Fidget_V2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UA_Hydra_Multi_Fidget_V2_C*>(UA_Hydra_Multi_Fidget_V2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function A_Hydra_Multi_Fidget_V2.A_Hydra_Multi_Fidget_V2_C.AN_SpawnAmmo_A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UA_Hydra_Multi_Fidget_V2_C::AN_SpawnAmmo_A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("A_Hydra_Multi_Fidget_V2_C", "AN_SpawnAmmo_A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function A_Hydra_Multi_Fidget_V2.A_Hydra_Multi_Fidget_V2_C.AN_SpawnAmmo_B
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UA_Hydra_Multi_Fidget_V2_C::AN_SpawnAmmo_B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("A_Hydra_Multi_Fidget_V2_C", "AN_SpawnAmmo_B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function A_Hydra_Multi_Fidget_V2.A_Hydra_Multi_Fidget_V2_C.AN_SpawnAmmo_C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UA_Hydra_Multi_Fidget_V2_C::AN_SpawnAmmo_C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("A_Hydra_Multi_Fidget_V2_C", "AN_SpawnAmmo_C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function A_Hydra_Multi_Fidget_V2.A_Hydra_Multi_Fidget_V2_C.ExecuteUbergraph_A_Hydra_Multi_Fidget_V2
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UA_Hydra_Multi_Fidget_V2_C::ExecuteUbergraph_A_Hydra_Multi_Fidget_V2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("A_Hydra_Multi_Fidget_V2_C", "ExecuteUbergraph_A_Hydra_Multi_Fidget_V2");

	Params::UA_Hydra_Multi_Fidget_V2_C_ExecuteUbergraph_A_Hydra_Multi_Fidget_V2_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


