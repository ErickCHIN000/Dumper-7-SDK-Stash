#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Painting_Gold_Wood_Small.BP_Painting_Gold_Wood_Small_C
// (Actor)

class UClass* ABP_Painting_Gold_Wood_Small_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Painting_Gold_Wood_Small_C");

	return Clss;
}


// BP_Painting_Gold_Wood_Small_C BP_Painting_Gold_Wood_Small.Default__BP_Painting_Gold_Wood_Small_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Painting_Gold_Wood_Small_C* ABP_Painting_Gold_Wood_Small_C::GetDefaultObj()
{
	static class ABP_Painting_Gold_Wood_Small_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Painting_Gold_Wood_Small_C*>(ABP_Painting_Gold_Wood_Small_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Painting_Gold_Wood_Small.BP_Painting_Gold_Wood_Small_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Painting_Gold_Wood_Small_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Painting_Gold_Wood_Small_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Painting_Gold_Wood_Small.BP_Painting_Gold_Wood_Small_C.ExecuteUbergraph_BP_Painting_Gold_Wood_Small
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Painting_Gold_Wood_Small_C::ExecuteUbergraph_BP_Painting_Gold_Wood_Small(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Painting_Gold_Wood_Small_C", "ExecuteUbergraph_BP_Painting_Gold_Wood_Small");

	Params::ABP_Painting_Gold_Wood_Small_C_ExecuteUbergraph_BP_Painting_Gold_Wood_Small_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


