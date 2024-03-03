#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Loot_Box.BP_Loot_Box_C
// (Actor)

class UClass* ABP_Loot_Box_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Loot_Box_C");

	return Clss;
}


// BP_Loot_Box_C BP_Loot_Box.Default__BP_Loot_Box_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Loot_Box_C* ABP_Loot_Box_C::GetDefaultObj()
{
	static class ABP_Loot_Box_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Loot_Box_C*>(ABP_Loot_Box_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Loot_Box.BP_Loot_Box_C.Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Loot_Box_C::Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Loot_Box_C", "Interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Loot_Box.BP_Loot_Box_C.End Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Loot_Box_C::End_Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Loot_Box_C", "End Interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Loot_Box.BP_Loot_Box_C.Game Load
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Loot_Box_C::Game_Load()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Loot_Box_C", "Game Load");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Loot_Box.BP_Loot_Box_C.ExecuteUbergraph_BP_Loot_Box
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Loot_Box_C::ExecuteUbergraph_BP_Loot_Box(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Loot_Box_C", "ExecuteUbergraph_BP_Loot_Box");

	Params::ABP_Loot_Box_C_ExecuteUbergraph_BP_Loot_Box_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


