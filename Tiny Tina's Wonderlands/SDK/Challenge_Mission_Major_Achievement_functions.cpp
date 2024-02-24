#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Mission_Major_Achievement.Challenge_Mission_Major_Achievement_C
// (None)

class UClass* UChallenge_Mission_Major_Achievement_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Mission_Major_Achievement_C");

	return Clss;
}


// Challenge_Mission_Major_Achievement_C Challenge_Mission_Major_Achievement.Default__Challenge_Mission_Major_Achievement_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Mission_Major_Achievement_C* UChallenge_Mission_Major_Achievement_C::GetDefaultObj()
{
	static class UChallenge_Mission_Major_Achievement_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Mission_Major_Achievement_C*>(UChallenge_Mission_Major_Achievement_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Challenge_Mission_Major_Achievement.Challenge_Mission_Major_Achievement_C.CompletedChallenge
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGbxPlayerController*        CompletedPlayer                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallenge_Mission_Major_Achievement_C::CompletedChallenge(class AGbxPlayerController* CompletedPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Challenge_Mission_Major_Achievement_C", "CompletedChallenge");

	Params::UChallenge_Mission_Major_Achievement_C_CompletedChallenge_Params Parms{};

	Parms.CompletedPlayer = CompletedPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Challenge_Mission_Major_Achievement.Challenge_Mission_Major_Achievement_C.ExecuteUbergraph_Challenge_Mission_Major_Achievement
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGbxPlayerController*        K2Node_Event_CompletedPlayer                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetAssociatedPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UChallengesComponent*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallenge_Mission_Major_Achievement_C::ExecuteUbergraph_Challenge_Mission_Major_Achievement(int32 EntryPoint, class AGbxPlayerController* K2Node_Event_CompletedPlayer, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UChallengesComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Challenge_Mission_Major_Achievement_C", "ExecuteUbergraph_Challenge_Mission_Major_Achievement");

	Params::UChallenge_Mission_Major_Achievement_C_ExecuteUbergraph_Challenge_Mission_Major_Achievement_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_CompletedPlayer = K2Node_Event_CompletedPlayer;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetAssociatedPlayerController_ReturnValue = CallFunc_GetAssociatedPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}


