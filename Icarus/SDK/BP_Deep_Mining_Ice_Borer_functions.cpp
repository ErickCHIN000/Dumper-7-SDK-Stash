#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Deep_Mining_Ice_Borer.BP_Deep_Mining_Ice_Borer_C
// (Actor)

class UClass* ABP_Deep_Mining_Ice_Borer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Deep_Mining_Ice_Borer_C");

	return Clss;
}


// BP_Deep_Mining_Ice_Borer_C BP_Deep_Mining_Ice_Borer.Default__BP_Deep_Mining_Ice_Borer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Deep_Mining_Ice_Borer_C* ABP_Deep_Mining_Ice_Borer_C::GetDefaultObj()
{
	static class ABP_Deep_Mining_Ice_Borer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Deep_Mining_Ice_Borer_C*>(ABP_Deep_Mining_Ice_Borer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Deep_Mining_Ice_Borer.BP_Deep_Mining_Ice_Borer_C.ActiveStateUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Deep_Mining_Ice_Borer_C::ActiveStateUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deep_Mining_Ice_Borer_C", "ActiveStateUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Deep_Mining_Ice_Borer.BP_Deep_Mining_Ice_Borer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Deep_Mining_Ice_Borer_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deep_Mining_Ice_Borer_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Deep_Mining_Ice_Borer.BP_Deep_Mining_Ice_Borer_C.IcarusBeginPlay
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:

void ABP_Deep_Mining_Ice_Borer_C::IcarusBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deep_Mining_Ice_Borer_C", "IcarusBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Deep_Mining_Ice_Borer.BP_Deep_Mining_Ice_Borer_C.ExecuteUbergraph_BP_Deep_Mining_Ice_Borer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Deep_Mining_Ice_Borer_C::ExecuteUbergraph_BP_Deep_Mining_Ice_Borer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deep_Mining_Ice_Borer_C", "ExecuteUbergraph_BP_Deep_Mining_Ice_Borer");

	Params::ABP_Deep_Mining_Ice_Borer_C_ExecuteUbergraph_BP_Deep_Mining_Ice_Borer_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


