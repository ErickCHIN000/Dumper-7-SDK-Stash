#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemHead_KoboldChroma.BP_ItemHead_KoboldChroma_C
// (Actor)

class UClass* ABP_ItemHead_KoboldChroma_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemHead_KoboldChroma_C");

	return Clss;
}


// BP_ItemHead_KoboldChroma_C BP_ItemHead_KoboldChroma.Default__BP_ItemHead_KoboldChroma_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemHead_KoboldChroma_C* ABP_ItemHead_KoboldChroma_C::GetDefaultObj()
{
	static class ABP_ItemHead_KoboldChroma_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemHead_KoboldChroma_C*>(ABP_ItemHead_KoboldChroma_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ItemHead_KoboldChroma.BP_ItemHead_KoboldChroma_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ItemHead_KoboldChroma_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemHead_KoboldChroma_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemHead_KoboldChroma.BP_ItemHead_KoboldChroma_C.ExecuteUbergraph_BP_ItemHead_KoboldChroma
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemHead_KoboldChroma_C::ExecuteUbergraph_BP_ItemHead_KoboldChroma(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemHead_KoboldChroma_C", "ExecuteUbergraph_BP_ItemHead_KoboldChroma");

	Params::ABP_ItemHead_KoboldChroma_C_ExecuteUbergraph_BP_ItemHead_KoboldChroma_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

