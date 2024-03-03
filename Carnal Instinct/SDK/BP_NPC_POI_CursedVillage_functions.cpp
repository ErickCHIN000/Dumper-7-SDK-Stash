#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_NPC_POI_CursedVillage.BP_NPC_POI_CursedVillage_C
// (Actor)

class UClass* ABP_NPC_POI_CursedVillage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_NPC_POI_CursedVillage_C");

	return Clss;
}


// BP_NPC_POI_CursedVillage_C BP_NPC_POI_CursedVillage.Default__BP_NPC_POI_CursedVillage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_NPC_POI_CursedVillage_C* ABP_NPC_POI_CursedVillage_C::GetDefaultObj()
{
	static class ABP_NPC_POI_CursedVillage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_NPC_POI_CursedVillage_C*>(ABP_NPC_POI_CursedVillage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_NPC_POI_CursedVillage.BP_NPC_POI_CursedVillage_C.Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_NPC_POI_CursedVillage_C::Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_POI_CursedVillage_C", "Interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NPC_POI_CursedVillage.BP_NPC_POI_CursedVillage_C.End Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_NPC_POI_CursedVillage_C::End_Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_POI_CursedVillage_C", "End Interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NPC_POI_CursedVillage.BP_NPC_POI_CursedVillage_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_NPC_POI_CursedVillage_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_POI_CursedVillage_C", "Initialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NPC_POI_CursedVillage.BP_NPC_POI_CursedVillage_C.Remove Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_NPC_POI_CursedVillage_C::Remove_Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_POI_CursedVillage_C", "Remove Interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NPC_POI_CursedVillage.BP_NPC_POI_CursedVillage_C.Game Load
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_NPC_POI_CursedVillage_C::Game_Load()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_POI_CursedVillage_C", "Game Load");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NPC_POI_CursedVillage.BP_NPC_POI_CursedVillage_C.EnableSpawn?
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_NPC_POI_CursedVillage_C::EnableSpawn_()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_POI_CursedVillage_C", "EnableSpawn?");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NPC_POI_CursedVillage.BP_NPC_POI_CursedVillage_C.ExecuteUbergraph_BP_NPC_POI_CursedVillage
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_NPC_POI_CursedVillage_C::ExecuteUbergraph_BP_NPC_POI_CursedVillage(int32 EntryPoint, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_POI_CursedVillage_C", "ExecuteUbergraph_BP_NPC_POI_CursedVillage");

	Params::ABP_NPC_POI_CursedVillage_C_ExecuteUbergraph_BP_NPC_POI_CursedVillage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


