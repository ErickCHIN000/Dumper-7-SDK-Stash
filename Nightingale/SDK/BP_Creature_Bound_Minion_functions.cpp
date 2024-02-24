#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Creature_Bound_Minion.BP_Creature_Bound_Minion_C
// (Actor, Pawn)

class UClass* ABP_Creature_Bound_Minion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Creature_Bound_Minion_C");

	return Clss;
}


// BP_Creature_Bound_Minion_C BP_Creature_Bound_Minion.Default__BP_Creature_Bound_Minion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Creature_Bound_Minion_C* ABP_Creature_Bound_Minion_C::GetDefaultObj()
{
	static class ABP_Creature_Bound_Minion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Creature_Bound_Minion_C*>(ABP_Creature_Bound_Minion_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Creature_Bound_Minion.BP_Creature_Bound_Minion_C.Start_WP_Indicator
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Creature_Bound_Minion_C::Start_WP_Indicator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_Bound_Minion_C", "Start_WP_Indicator");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Creature_Bound_Minion.BP_Creature_Bound_Minion_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Socket_Root                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_Bound_Minion_C::UserConstructionScript(class FName Socket_Root)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_Bound_Minion_C", "UserConstructionScript");

	Params::ABP_Creature_Bound_Minion_C_UserConstructionScript_Params Parms{};

	Parms.Socket_Root = Socket_Root;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_Bound_Minion.BP_Creature_Bound_Minion_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Creature_Bound_Minion_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_Bound_Minion_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Creature_Bound_Minion.BP_Creature_Bound_Minion_C.ExecuteUbergraph_BP_Creature_Bound_Minion
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_Bound_Minion_C::ExecuteUbergraph_BP_Creature_Bound_Minion(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_Bound_Minion_C", "ExecuteUbergraph_BP_Creature_Bound_Minion");

	Params::ABP_Creature_Bound_Minion_C_ExecuteUbergraph_BP_Creature_Bound_Minion_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


