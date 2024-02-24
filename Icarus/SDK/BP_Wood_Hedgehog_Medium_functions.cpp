#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Wood_Hedgehog_Medium.BP_Wood_Hedgehog_Medium_C
// (Actor)

class UClass* ABP_Wood_Hedgehog_Medium_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Wood_Hedgehog_Medium_C");

	return Clss;
}


// BP_Wood_Hedgehog_Medium_C BP_Wood_Hedgehog_Medium.Default__BP_Wood_Hedgehog_Medium_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Wood_Hedgehog_Medium_C* ABP_Wood_Hedgehog_Medium_C::GetDefaultObj()
{
	static class ABP_Wood_Hedgehog_Medium_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Wood_Hedgehog_Medium_C*>(ABP_Wood_Hedgehog_Medium_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Wood_Hedgehog_Medium.BP_Wood_Hedgehog_Medium_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Wood_Hedgehog_Medium_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wood_Hedgehog_Medium_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Wood_Hedgehog_Medium.BP_Wood_Hedgehog_Medium_C.ExecuteUbergraph_BP_Wood_Hedgehog_Medium
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wood_Hedgehog_Medium_C::ExecuteUbergraph_BP_Wood_Hedgehog_Medium(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wood_Hedgehog_Medium_C", "ExecuteUbergraph_BP_Wood_Hedgehog_Medium");

	Params::ABP_Wood_Hedgehog_Medium_C_ExecuteUbergraph_BP_Wood_Hedgehog_Medium_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


