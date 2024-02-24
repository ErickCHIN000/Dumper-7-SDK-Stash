#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Challenge_PlayerLevel.BP_Challenge_PlayerLevel_C
// (None)

class UClass* UBP_Challenge_PlayerLevel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Challenge_PlayerLevel_C");

	return Clss;
}


// BP_Challenge_PlayerLevel_C BP_Challenge_PlayerLevel.Default__BP_Challenge_PlayerLevel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Challenge_PlayerLevel_C* UBP_Challenge_PlayerLevel_C::GetDefaultObj()
{
	static class UBP_Challenge_PlayerLevel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Challenge_PlayerLevel_C*>(UBP_Challenge_PlayerLevel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Challenge_PlayerLevel.BP_Challenge_PlayerLevel_C.LeveledUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Old_XP_Level                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              New_XP_Level                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Challenge_PlayerLevel_C::LeveledUp(int32 Old_XP_Level, int32 New_XP_Level, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Challenge_PlayerLevel_C", "LeveledUp");

	Params::UBP_Challenge_PlayerLevel_C_LeveledUp_Params Parms{};

	Parms.Old_XP_Level = Old_XP_Level;
	Parms.New_XP_Level = New_XP_Level;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Challenge_PlayerLevel.BP_Challenge_PlayerLevel_C.OnInitChallengeInstance
// (Event, Public, BlueprintEvent)
// Parameters:
// class UChallengesComponent*        OwningChallenges                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGbxCharacter*               AssociatedCharacter                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Challenge_PlayerLevel_C::OnInitChallengeInstance(class UChallengesComponent* OwningChallenges, class AGbxCharacter* AssociatedCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Challenge_PlayerLevel_C", "OnInitChallengeInstance");

	Params::UBP_Challenge_PlayerLevel_C_OnInitChallengeInstance_Params Parms{};

	Parms.OwningChallenges = OwningChallenges;
	Parms.AssociatedCharacter = AssociatedCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Challenge_PlayerLevel.BP_Challenge_PlayerLevel_C.ExecuteUbergraph_BP_Challenge_PlayerLevel
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UChallengesComponent*        K2Node_Event_OwningChallenges                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGbxCharacter*               K2Node_Event_AssociatedCharacter                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerBalanceStateComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Challenge_PlayerLevel_C::ExecuteUbergraph_BP_Challenge_PlayerLevel(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UChallengesComponent* K2Node_Event_OwningChallenges, class AGbxCharacter* K2Node_Event_AssociatedCharacter, class UPlayerBalanceStateComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Challenge_PlayerLevel_C", "ExecuteUbergraph_BP_Challenge_PlayerLevel");

	Params::UBP_Challenge_PlayerLevel_C_ExecuteUbergraph_BP_Challenge_PlayerLevel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_OwningChallenges = K2Node_Event_OwningChallenges;
	Parms.K2Node_Event_AssociatedCharacter = K2Node_Event_AssociatedCharacter;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


