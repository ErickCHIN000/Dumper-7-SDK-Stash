#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MainMenu_GameMode.BP_MainMenu_GameMode_C
// (Actor)

class UClass* ABP_MainMenu_GameMode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MainMenu_GameMode_C");

	return Clss;
}


// BP_MainMenu_GameMode_C BP_MainMenu_GameMode.Default__BP_MainMenu_GameMode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MainMenu_GameMode_C* ABP_MainMenu_GameMode_C::GetDefaultObj()
{
	static class ABP_MainMenu_GameMode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MainMenu_GameMode_C*>(ABP_MainMenu_GameMode_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MainMenu_GameMode.BP_MainMenu_GameMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_MainMenu_GameMode_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_GameMode_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MainMenu_GameMode.BP_MainMenu_GameMode_C.ExecuteUbergraph_BP_MainMenu_GameMode
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainMenu_GameMode_C::ExecuteUbergraph_BP_MainMenu_GameMode(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MainMenu_GameMode_C", "ExecuteUbergraph_BP_MainMenu_GameMode");

	Params::ABP_MainMenu_GameMode_C_ExecuteUbergraph_BP_MainMenu_GameMode_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


