#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Overworld.Overworld_C
// (Actor)

class UClass* AOverworld_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Overworld_C");

	return Clss;
}


// Overworld_C Overworld.Default__Overworld_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AOverworld_C* AOverworld_C::GetDefaultObj()
{
	static class AOverworld_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AOverworld_C*>(AOverworld_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Overworld.Overworld_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AOverworld_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Overworld_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Overworld.Overworld_C.ExecuteUbergraph_Overworld
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AOverworld_C::ExecuteUbergraph_Overworld(int32 EntryPoint, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Overworld_C", "ExecuteUbergraph_Overworld");

	Params::AOverworld_C_ExecuteUbergraph_Overworld_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetSequencePlayer_ReturnValue = CallFunc_GetSequencePlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


