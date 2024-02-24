#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Vehicle_Van.BP_Vehicle_Van_C
// (Actor, Pawn)

class UClass* ABP_Vehicle_Van_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Vehicle_Van_C");

	return Clss;
}


// BP_Vehicle_Van_C BP_Vehicle_Van.Default__BP_Vehicle_Van_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Vehicle_Van_C* ABP_Vehicle_Van_C::GetDefaultObj()
{
	static class ABP_Vehicle_Van_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Vehicle_Van_C*>(ABP_Vehicle_Van_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Vehicle_Van.BP_Vehicle_Van_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Vehicle_Van_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Vehicle_Van_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Vehicle_Van.BP_Vehicle_Van_C.ExecuteUbergraph_BP_Vehicle_Van
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Vehicle_Van_C::ExecuteUbergraph_BP_Vehicle_Van(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Vehicle_Van_C", "ExecuteUbergraph_BP_Vehicle_Van");

	Params::ABP_Vehicle_Van_C_ExecuteUbergraph_BP_Vehicle_Van_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


