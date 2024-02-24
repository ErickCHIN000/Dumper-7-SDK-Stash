#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Carved_Lamp.BP_Carved_Lamp_C
// (Actor)

class UClass* ABP_Carved_Lamp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Carved_Lamp_C");

	return Clss;
}


// BP_Carved_Lamp_C BP_Carved_Lamp.Default__BP_Carved_Lamp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Carved_Lamp_C* ABP_Carved_Lamp_C::GetDefaultObj()
{
	static class ABP_Carved_Lamp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Carved_Lamp_C*>(ABP_Carved_Lamp_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Carved_Lamp.BP_Carved_Lamp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Carved_Lamp_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Carved_Lamp_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Carved_Lamp.BP_Carved_Lamp_C.ExecuteUbergraph_BP_Carved_Lamp
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Carved_Lamp_C::ExecuteUbergraph_BP_Carved_Lamp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Carved_Lamp_C", "ExecuteUbergraph_BP_Carved_Lamp");

	Params::ABP_Carved_Lamp_C_ExecuteUbergraph_BP_Carved_Lamp_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


