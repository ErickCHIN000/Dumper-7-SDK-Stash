#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bandit_Bomb.Bandit_Bomb_C
// (Actor)

class UClass* ABandit_Bomb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bandit_Bomb_C");

	return Clss;
}


// Bandit_Bomb_C Bandit_Bomb.Default__Bandit_Bomb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABandit_Bomb_C* ABandit_Bomb_C::GetDefaultObj()
{
	static class ABandit_Bomb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABandit_Bomb_C*>(ABandit_Bomb_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Bandit_Bomb.Bandit_Bomb_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABandit_Bomb_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bandit_Bomb_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Bandit_Bomb.Bandit_Bomb_C.EnableBomb
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABandit_Bomb_C::EnableBomb()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bandit_Bomb_C", "EnableBomb");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Bandit_Bomb.Bandit_Bomb_C.DisableBomb
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABandit_Bomb_C::DisableBomb()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bandit_Bomb_C", "DisableBomb");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Bandit_Bomb.Bandit_Bomb_C.ExecuteUbergraph_Bandit_Bomb
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABandit_Bomb_C::ExecuteUbergraph_Bandit_Bomb(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bandit_Bomb_C", "ExecuteUbergraph_Bandit_Bomb");

	Params::ABandit_Bomb_C_ExecuteUbergraph_Bandit_Bomb_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


