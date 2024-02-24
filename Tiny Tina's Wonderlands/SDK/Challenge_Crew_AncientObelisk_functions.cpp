#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Crew_AncientObelisk.Challenge_Crew_AncientObelisk_C
// (None)

class UClass* UChallenge_Crew_AncientObelisk_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Crew_AncientObelisk_C");

	return Clss;
}


// Challenge_Crew_AncientObelisk_C Challenge_Crew_AncientObelisk.Default__Challenge_Crew_AncientObelisk_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Crew_AncientObelisk_C* UChallenge_Crew_AncientObelisk_C::GetDefaultObj()
{
	static class UChallenge_Crew_AncientObelisk_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Crew_AncientObelisk_C*>(UChallenge_Crew_AncientObelisk_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Challenge_Crew_AncientObelisk.Challenge_Crew_AncientObelisk_C.CompletedChallenge
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGbxPlayerController*        CompletedPlayer                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallenge_Crew_AncientObelisk_C::CompletedChallenge(class AGbxPlayerController* CompletedPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Challenge_Crew_AncientObelisk_C", "CompletedChallenge");

	Params::UChallenge_Crew_AncientObelisk_C_CompletedChallenge_Params Parms{};

	Parms.CompletedPlayer = CompletedPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Challenge_Crew_AncientObelisk.Challenge_Crew_AncientObelisk_C.ExecuteUbergraph_Challenge_Crew_AncientObelisk
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGbxPlayerController*        K2Node_Event_CompletedPlayer                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakPlayerController*        K2Node_DynamicCast_AsOak_Player_Controller                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallenge_Crew_AncientObelisk_C::ExecuteUbergraph_Challenge_Crew_AncientObelisk(int32 EntryPoint, class AGbxPlayerController* K2Node_Event_CompletedPlayer, class AOakPlayerController* K2Node_DynamicCast_AsOak_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Challenge_Crew_AncientObelisk_C", "ExecuteUbergraph_Challenge_Crew_AncientObelisk");

	Params::UChallenge_Crew_AncientObelisk_C_ExecuteUbergraph_Challenge_Crew_AncientObelisk_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_CompletedPlayer = K2Node_Event_CompletedPlayer;
	Parms.K2Node_DynamicCast_AsOak_Player_Controller = K2Node_DynamicCast_AsOak_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


