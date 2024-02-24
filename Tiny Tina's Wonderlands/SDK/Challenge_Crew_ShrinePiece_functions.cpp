#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Crew_ShrinePiece.Challenge_Crew_ShrinePiece_C
// (None)

class UClass* UChallenge_Crew_ShrinePiece_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Crew_ShrinePiece_C");

	return Clss;
}


// Challenge_Crew_ShrinePiece_C Challenge_Crew_ShrinePiece.Default__Challenge_Crew_ShrinePiece_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Crew_ShrinePiece_C* UChallenge_Crew_ShrinePiece_C::GetDefaultObj()
{
	static class UChallenge_Crew_ShrinePiece_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Crew_ShrinePiece_C*>(UChallenge_Crew_ShrinePiece_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Challenge_Crew_ShrinePiece.Challenge_Crew_ShrinePiece_C.CompletedChallenge
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGbxPlayerController*        CompletedPlayer                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallenge_Crew_ShrinePiece_C::CompletedChallenge(class AGbxPlayerController* CompletedPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Challenge_Crew_ShrinePiece_C", "CompletedChallenge");

	Params::UChallenge_Crew_ShrinePiece_C_CompletedChallenge_Params Parms{};

	Parms.CompletedPlayer = CompletedPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Challenge_Crew_ShrinePiece.Challenge_Crew_ShrinePiece_C.ExecuteUbergraph_Challenge_Crew_ShrinePiece
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGbxPlayerController*        K2Node_Event_CompletedPlayer                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallenge_Crew_ShrinePiece_C::ExecuteUbergraph_Challenge_Crew_ShrinePiece(int32 EntryPoint, class AGbxPlayerController* K2Node_Event_CompletedPlayer, bool CallFunc_IsValidClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Challenge_Crew_ShrinePiece_C", "ExecuteUbergraph_Challenge_Crew_ShrinePiece");

	Params::UChallenge_Crew_ShrinePiece_C_ExecuteUbergraph_Challenge_Crew_ShrinePiece_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_CompletedPlayer = K2Node_Event_CompletedPlayer;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


