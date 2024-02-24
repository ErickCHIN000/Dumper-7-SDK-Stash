#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CreatureComponent_UI_NPC.BP_CreatureComponent_UI_NPC_C
// (None)

class UClass* UBP_CreatureComponent_UI_NPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CreatureComponent_UI_NPC_C");

	return Clss;
}


// BP_CreatureComponent_UI_NPC_C BP_CreatureComponent_UI_NPC.Default__BP_CreatureComponent_UI_NPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CreatureComponent_UI_NPC_C* UBP_CreatureComponent_UI_NPC_C::GetDefaultObj()
{
	static class UBP_CreatureComponent_UI_NPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CreatureComponent_UI_NPC_C*>(UBP_CreatureComponent_UI_NPC_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CreatureComponent_UI_NPC.BP_CreatureComponent_UI_NPC_C.ClientCreatureComponentUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CreatureComponent_UI_NPC_C::ClientCreatureComponentUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureComponent_UI_NPC_C", "ClientCreatureComponentUpdate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CreatureComponent_UI_NPC.BP_CreatureComponent_UI_NPC_C.ClientBeginPlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CreatureComponent_UI_NPC_C::ClientBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureComponent_UI_NPC_C", "ClientBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CreatureComponent_UI_NPC.BP_CreatureComponent_UI_NPC_C.ExecuteUbergraph_BP_CreatureComponent_UI_NPC
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CreatureComponent_UI_NPC_C::ExecuteUbergraph_BP_CreatureComponent_UI_NPC(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureComponent_UI_NPC_C", "ExecuteUbergraph_BP_CreatureComponent_UI_NPC");

	Params::UBP_CreatureComponent_UI_NPC_C_ExecuteUbergraph_BP_CreatureComponent_UI_NPC_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


