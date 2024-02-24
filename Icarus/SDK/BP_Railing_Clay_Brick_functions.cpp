#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Railing_Clay_Brick.BP_Railing_Clay_Brick_C
// (Actor)

class UClass* ABP_Railing_Clay_Brick_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Railing_Clay_Brick_C");

	return Clss;
}


// BP_Railing_Clay_Brick_C BP_Railing_Clay_Brick.Default__BP_Railing_Clay_Brick_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Railing_Clay_Brick_C* ABP_Railing_Clay_Brick_C::GetDefaultObj()
{
	static class ABP_Railing_Clay_Brick_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Railing_Clay_Brick_C*>(ABP_Railing_Clay_Brick_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Railing_Clay_Brick.BP_Railing_Clay_Brick_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Railing_Clay_Brick_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Railing_Clay_Brick_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Railing_Clay_Brick.BP_Railing_Clay_Brick_C.ExecuteUbergraph_BP_Railing_Clay_Brick
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Railing_Clay_Brick_C::ExecuteUbergraph_BP_Railing_Clay_Brick(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Railing_Clay_Brick_C", "ExecuteUbergraph_BP_Railing_Clay_Brick");

	Params::ABP_Railing_Clay_Brick_C_ExecuteUbergraph_BP_Railing_Clay_Brick_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


