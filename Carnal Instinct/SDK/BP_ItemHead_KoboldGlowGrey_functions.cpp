#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemHead_KoboldGlowGrey.BP_ItemHead_KoboldGlowGrey_C
// (Actor)

class UClass* ABP_ItemHead_KoboldGlowGrey_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemHead_KoboldGlowGrey_C");

	return Clss;
}


// BP_ItemHead_KoboldGlowGrey_C BP_ItemHead_KoboldGlowGrey.Default__BP_ItemHead_KoboldGlowGrey_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemHead_KoboldGlowGrey_C* ABP_ItemHead_KoboldGlowGrey_C::GetDefaultObj()
{
	static class ABP_ItemHead_KoboldGlowGrey_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemHead_KoboldGlowGrey_C*>(ABP_ItemHead_KoboldGlowGrey_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ItemHead_KoboldGlowGrey.BP_ItemHead_KoboldGlowGrey_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ItemHead_KoboldGlowGrey_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemHead_KoboldGlowGrey_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemHead_KoboldGlowGrey.BP_ItemHead_KoboldGlowGrey_C.ExecuteUbergraph_BP_ItemHead_KoboldGlowGrey
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemHead_KoboldGlowGrey_C::ExecuteUbergraph_BP_ItemHead_KoboldGlowGrey(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemHead_KoboldGlowGrey_C", "ExecuteUbergraph_BP_ItemHead_KoboldGlowGrey");

	Params::ABP_ItemHead_KoboldGlowGrey_C_ExecuteUbergraph_BP_ItemHead_KoboldGlowGrey_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


