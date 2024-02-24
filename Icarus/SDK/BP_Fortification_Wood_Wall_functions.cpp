#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Fortification_Wood_Wall.BP_Fortification_Wood_Wall_C
// (Actor)

class UClass* ABP_Fortification_Wood_Wall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Fortification_Wood_Wall_C");

	return Clss;
}


// BP_Fortification_Wood_Wall_C BP_Fortification_Wood_Wall.Default__BP_Fortification_Wood_Wall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Fortification_Wood_Wall_C* ABP_Fortification_Wood_Wall_C::GetDefaultObj()
{
	static class ABP_Fortification_Wood_Wall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Fortification_Wood_Wall_C*>(ABP_Fortification_Wood_Wall_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Fortification_Wood_Wall.BP_Fortification_Wood_Wall_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Fortification_Wood_Wall_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Fortification_Wood_Wall_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Fortification_Wood_Wall.BP_Fortification_Wood_Wall_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Fortification_Wood_Wall_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Fortification_Wood_Wall_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Fortification_Wood_Wall.BP_Fortification_Wood_Wall_C.ExecuteUbergraph_BP_Fortification_Wood_Wall
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Fortification_Wood_Wall_C::ExecuteUbergraph_BP_Fortification_Wood_Wall(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Fortification_Wood_Wall_C", "ExecuteUbergraph_BP_Fortification_Wood_Wall");

	Params::ABP_Fortification_Wood_Wall_C_ExecuteUbergraph_BP_Fortification_Wood_Wall_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


