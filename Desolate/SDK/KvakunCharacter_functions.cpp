#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KvakunCharacter.KvakunCharacter_C
// (Actor, Pawn)

class UClass* AKvakunCharacter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KvakunCharacter_C");

	return Clss;
}


// KvakunCharacter_C KvakunCharacter.Default__KvakunCharacter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKvakunCharacter_C* AKvakunCharacter_C::GetDefaultObj()
{
	static class AKvakunCharacter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKvakunCharacter_C*>(AKvakunCharacter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function KvakunCharacter.KvakunCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKvakunCharacter_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KvakunCharacter_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KvakunCharacter.KvakunCharacter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKvakunCharacter_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KvakunCharacter_C", "ReceiveTick");

	Params::AKvakunCharacter_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KvakunCharacter.KvakunCharacter_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKvakunCharacter_C::CustomEvent(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KvakunCharacter_C", "CustomEvent");

	Params::AKvakunCharacter_C_CustomEvent_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KvakunCharacter.KvakunCharacter_C.ExecuteUbergraph_KvakunCharacter
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetHeadRotation_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void AKvakunCharacter_C::ExecuteUbergraph_KvakunCharacter(int32 EntryPoint, float K2Node_Event_DeltaSeconds_1, float K2Node_Event_DeltaSeconds, const struct FRotator& CallFunc_GetHeadRotation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KvakunCharacter_C", "ExecuteUbergraph_KvakunCharacter");

	Params::AKvakunCharacter_C_ExecuteUbergraph_KvakunCharacter_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds_1 = K2Node_Event_DeltaSeconds_1;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetHeadRotation_ReturnValue = CallFunc_GetHeadRotation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


