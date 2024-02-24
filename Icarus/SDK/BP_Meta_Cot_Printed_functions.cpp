#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Meta_Cot_Printed.BP_Meta_Cot_Printed_C
// (Actor)

class UClass* ABP_Meta_Cot_Printed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Meta_Cot_Printed_C");

	return Clss;
}


// BP_Meta_Cot_Printed_C BP_Meta_Cot_Printed.Default__BP_Meta_Cot_Printed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Meta_Cot_Printed_C* ABP_Meta_Cot_Printed_C::GetDefaultObj()
{
	static class ABP_Meta_Cot_Printed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Meta_Cot_Printed_C*>(ABP_Meta_Cot_Printed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Meta_Cot_Printed.BP_Meta_Cot_Printed_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Meta_Cot_Printed_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Meta_Cot_Printed_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Meta_Cot_Printed.BP_Meta_Cot_Printed_C.ExecuteUbergraph_BP_Meta_Cot_Printed
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Meta_Cot_Printed_C::ExecuteUbergraph_BP_Meta_Cot_Printed(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Meta_Cot_Printed_C", "ExecuteUbergraph_BP_Meta_Cot_Printed");

	Params::ABP_Meta_Cot_Printed_C_ExecuteUbergraph_BP_Meta_Cot_Printed_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


