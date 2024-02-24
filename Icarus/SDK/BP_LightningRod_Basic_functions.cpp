#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LightningRod_Basic.BP_LightningRod_Basic_C
// (Actor)

class UClass* ABP_LightningRod_Basic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LightningRod_Basic_C");

	return Clss;
}


// BP_LightningRod_Basic_C BP_LightningRod_Basic.Default__BP_LightningRod_Basic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LightningRod_Basic_C* ABP_LightningRod_Basic_C::GetDefaultObj()
{
	static class ABP_LightningRod_Basic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LightningRod_Basic_C*>(ABP_LightningRod_Basic_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_LightningRod_Basic.BP_LightningRod_Basic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_LightningRod_Basic_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LightningRod_Basic_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LightningRod_Basic.BP_LightningRod_Basic_C.ExecuteUbergraph_BP_LightningRod_Basic
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LightningRod_Basic_C::ExecuteUbergraph_BP_LightningRod_Basic(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LightningRod_Basic_C", "ExecuteUbergraph_BP_LightningRod_Basic");

	Params::ABP_LightningRod_Basic_C_ExecuteUbergraph_BP_LightningRod_Basic_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


