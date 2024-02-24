#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Meta_Crate_Printed_Medium.BP_Meta_Crate_Printed_Medium_C
// (Actor)

class UClass* ABP_Meta_Crate_Printed_Medium_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Meta_Crate_Printed_Medium_C");

	return Clss;
}


// BP_Meta_Crate_Printed_Medium_C BP_Meta_Crate_Printed_Medium.Default__BP_Meta_Crate_Printed_Medium_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Meta_Crate_Printed_Medium_C* ABP_Meta_Crate_Printed_Medium_C::GetDefaultObj()
{
	static class ABP_Meta_Crate_Printed_Medium_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Meta_Crate_Printed_Medium_C*>(ABP_Meta_Crate_Printed_Medium_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Meta_Crate_Printed_Medium.BP_Meta_Crate_Printed_Medium_C.OnBecomeInteractedWith
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Meta_Crate_Printed_Medium_C::OnBecomeInteractedWith()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Meta_Crate_Printed_Medium_C", "OnBecomeInteractedWith");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Meta_Crate_Printed_Medium.BP_Meta_Crate_Printed_Medium_C.OnNoLongerInteractedWith
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Meta_Crate_Printed_Medium_C::OnNoLongerInteractedWith()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Meta_Crate_Printed_Medium_C", "OnNoLongerInteractedWith");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Meta_Crate_Printed_Medium.BP_Meta_Crate_Printed_Medium_C.ExecuteUbergraph_BP_Meta_Crate_Printed_Medium
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Meta_Crate_Printed_Medium_C::ExecuteUbergraph_BP_Meta_Crate_Printed_Medium(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Meta_Crate_Printed_Medium_C", "ExecuteUbergraph_BP_Meta_Crate_Printed_Medium");

	Params::ABP_Meta_Crate_Printed_Medium_C_ExecuteUbergraph_BP_Meta_Crate_Printed_Medium_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


