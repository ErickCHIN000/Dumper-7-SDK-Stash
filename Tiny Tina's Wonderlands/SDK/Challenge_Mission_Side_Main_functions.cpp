#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Mission_Side_Main.Challenge_Mission_Side_Main_C
// (None)

class UClass* UChallenge_Mission_Side_Main_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Mission_Side_Main_C");

	return Clss;
}


// Challenge_Mission_Side_Main_C Challenge_Mission_Side_Main.Default__Challenge_Mission_Side_Main_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Mission_Side_Main_C* UChallenge_Mission_Side_Main_C::GetDefaultObj()
{
	static class UChallenge_Mission_Side_Main_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Mission_Side_Main_C*>(UChallenge_Mission_Side_Main_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Challenge_Mission_Side_Main.Challenge_Mission_Side_Main_C.CompletedChallenge
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGbxPlayerController*        CompletedPlayer                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallenge_Mission_Side_Main_C::CompletedChallenge(class AGbxPlayerController* CompletedPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Challenge_Mission_Side_Main_C", "CompletedChallenge");

	Params::UChallenge_Mission_Side_Main_C_CompletedChallenge_Params Parms{};

	Parms.CompletedPlayer = CompletedPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Challenge_Mission_Side_Main.Challenge_Mission_Side_Main_C.ExecuteUbergraph_Challenge_Mission_Side_Main
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGbxPlayerController*        K2Node_Event_CompletedPlayer                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallenge_Mission_Side_Main_C::ExecuteUbergraph_Challenge_Mission_Side_Main(int32 EntryPoint, class AGbxPlayerController* K2Node_Event_CompletedPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Challenge_Mission_Side_Main_C", "ExecuteUbergraph_Challenge_Mission_Side_Main");

	Params::UChallenge_Mission_Side_Main_C_ExecuteUbergraph_Challenge_Mission_Side_Main_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_CompletedPlayer = K2Node_Event_CompletedPlayer;

	UObject::ProcessEvent(Func, &Parms);

}

}


