#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_loot_ridePony.bp_loot_ridePony_C
// (Actor)

class UClass* Abp_loot_ridePony_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_loot_ridePony_C");

	return Clss;
}


// bp_loot_ridePony_C bp_loot_ridePony.Default__bp_loot_ridePony_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Abp_loot_ridePony_C* Abp_loot_ridePony_C::GetDefaultObj()
{
	static class Abp_loot_ridePony_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Abp_loot_ridePony_C*>(Abp_loot_ridePony_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bp_loot_ridePony.bp_loot_ridePony_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void Abp_loot_ridePony_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_loot_ridePony_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_loot_ridePony.bp_loot_ridePony_C.Game Load
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_loot_ridePony_C::Game_Load()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_loot_ridePony_C", "Game Load");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_loot_ridePony.bp_loot_ridePony_C.Show Pony Jar
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_loot_ridePony_C::Show_Pony_Jar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_loot_ridePony_C", "Show Pony Jar");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_loot_ridePony.bp_loot_ridePony_C.ExecuteUbergraph_bp_loot_ridePony
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_loot_ridePony_C::ExecuteUbergraph_bp_loot_ridePony(int32 EntryPoint, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_loot_ridePony_C", "ExecuteUbergraph_bp_loot_ridePony");

	Params::Abp_loot_ridePony_C_ExecuteUbergraph_bp_loot_ridePony_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


