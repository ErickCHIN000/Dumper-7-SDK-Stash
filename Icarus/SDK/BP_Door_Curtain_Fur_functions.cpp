#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Door_Curtain_Fur.BP_Door_Curtain_Fur_C
// (Actor)

class UClass* ABP_Door_Curtain_Fur_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Door_Curtain_Fur_C");

	return Clss;
}


// BP_Door_Curtain_Fur_C BP_Door_Curtain_Fur.Default__BP_Door_Curtain_Fur_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Door_Curtain_Fur_C* ABP_Door_Curtain_Fur_C::GetDefaultObj()
{
	static class ABP_Door_Curtain_Fur_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Door_Curtain_Fur_C*>(ABP_Door_Curtain_Fur_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Door_Curtain_Fur.BP_Door_Curtain_Fur_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Door_Curtain_Fur_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Door_Curtain_Fur_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Door_Curtain_Fur.BP_Door_Curtain_Fur_C.ExecuteUbergraph_BP_Door_Curtain_Fur
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Door_Curtain_Fur_C::ExecuteUbergraph_BP_Door_Curtain_Fur(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Door_Curtain_Fur_C", "ExecuteUbergraph_BP_Door_Curtain_Fur");

	Params::ABP_Door_Curtain_Fur_C_ExecuteUbergraph_BP_Door_Curtain_Fur_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


