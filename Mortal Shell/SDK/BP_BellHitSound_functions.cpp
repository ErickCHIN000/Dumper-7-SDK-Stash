#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BellHitSound.BP_BellHitSound_C
// (Actor)

class UClass* ABP_BellHitSound_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BellHitSound_C");

	return Clss;
}


// BP_BellHitSound_C BP_BellHitSound.Default__BP_BellHitSound_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BellHitSound_C* ABP_BellHitSound_C::GetDefaultObj()
{
	static class ABP_BellHitSound_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BellHitSound_C*>(ABP_BellHitSound_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BellHitSound.BP_BellHitSound_C.Fade__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_BellHitSound_C::Fade__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BellHitSound_C", "Fade__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BellHitSound.BP_BellHitSound_C.Fade__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_BellHitSound_C::Fade__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BellHitSound_C", "Fade__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BellHitSound.BP_BellHitSound_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_BellHitSound_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BellHitSound_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BellHitSound.BP_BellHitSound_C.ExecuteUbergraph_BP_BellHitSound
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BellHitSound_C::ExecuteUbergraph_BP_BellHitSound(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BellHitSound_C", "ExecuteUbergraph_BP_BellHitSound");

	Params::ABP_BellHitSound_C_ExecuteUbergraph_BP_BellHitSound_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


