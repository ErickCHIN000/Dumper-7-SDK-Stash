#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LandingPad_Player.BP_LandingPad_Player_C
// (Actor)

class UClass* ABP_LandingPad_Player_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LandingPad_Player_C");

	return Clss;
}


// BP_LandingPad_Player_C BP_LandingPad_Player.Default__BP_LandingPad_Player_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LandingPad_Player_C* ABP_LandingPad_Player_C::GetDefaultObj()
{
	static class ABP_LandingPad_Player_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LandingPad_Player_C*>(ABP_LandingPad_Player_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_LandingPad_Player.BP_LandingPad_Player_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_LandingPad_Player_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LandingPad_Player_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LandingPad_Player.BP_LandingPad_Player_C.ExecuteUbergraph_BP_LandingPad_Player
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetLevelTimeElapsedSec_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LandingPad_Player_C::ExecuteUbergraph_BP_LandingPad_Player(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_GetLevelTimeElapsedSec_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LandingPad_Player_C", "ExecuteUbergraph_BP_LandingPad_Player");

	Params::ABP_LandingPad_Player_C_ExecuteUbergraph_BP_LandingPad_Player_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetLevelTimeElapsedSec_ReturnValue = CallFunc_GetLevelTimeElapsedSec_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


