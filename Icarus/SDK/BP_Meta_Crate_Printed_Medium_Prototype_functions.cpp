#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Meta_Crate_Printed_Medium_Prototype.BP_Meta_Crate_Printed_Medium_Prototype_C
// (Actor)

class UClass* ABP_Meta_Crate_Printed_Medium_Prototype_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Meta_Crate_Printed_Medium_Prototype_C");

	return Clss;
}


// BP_Meta_Crate_Printed_Medium_Prototype_C BP_Meta_Crate_Printed_Medium_Prototype.Default__BP_Meta_Crate_Printed_Medium_Prototype_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Meta_Crate_Printed_Medium_Prototype_C* ABP_Meta_Crate_Printed_Medium_Prototype_C::GetDefaultObj()
{
	static class ABP_Meta_Crate_Printed_Medium_Prototype_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Meta_Crate_Printed_Medium_Prototype_C*>(ABP_Meta_Crate_Printed_Medium_Prototype_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Meta_Crate_Printed_Medium_Prototype.BP_Meta_Crate_Printed_Medium_Prototype_C.OnBecomeInteractedWith
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Meta_Crate_Printed_Medium_Prototype_C::OnBecomeInteractedWith()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Meta_Crate_Printed_Medium_Prototype_C", "OnBecomeInteractedWith");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Meta_Crate_Printed_Medium_Prototype.BP_Meta_Crate_Printed_Medium_Prototype_C.OnNoLongerInteractedWith
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Meta_Crate_Printed_Medium_Prototype_C::OnNoLongerInteractedWith()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Meta_Crate_Printed_Medium_Prototype_C", "OnNoLongerInteractedWith");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Meta_Crate_Printed_Medium_Prototype.BP_Meta_Crate_Printed_Medium_Prototype_C.ExecuteUbergraph_BP_Meta_Crate_Printed_Medium_Prototype
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Meta_Crate_Printed_Medium_Prototype_C::ExecuteUbergraph_BP_Meta_Crate_Printed_Medium_Prototype(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Meta_Crate_Printed_Medium_Prototype_C", "ExecuteUbergraph_BP_Meta_Crate_Printed_Medium_Prototype");

	Params::ABP_Meta_Crate_Printed_Medium_Prototype_C_ExecuteUbergraph_BP_Meta_Crate_Printed_Medium_Prototype_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


