#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickableItem_00_Distributor.BP_PickableItem_00_Distributor_C
// (Actor)

class UClass* ABP_PickableItem_00_Distributor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickableItem_00_Distributor_C");

	return Clss;
}


// BP_PickableItem_00_Distributor_C BP_PickableItem_00_Distributor.Default__BP_PickableItem_00_Distributor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PickableItem_00_Distributor_C* ABP_PickableItem_00_Distributor_C::GetDefaultObj()
{
	static class ABP_PickableItem_00_Distributor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PickableItem_00_Distributor_C*>(ABP_PickableItem_00_Distributor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PickableItem_00_Distributor.BP_PickableItem_00_Distributor_C.GetSkipChildComponentWhenOverlapping
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_PickableItem_00_Distributor_C::GetSkipChildComponentWhenOverlapping()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickableItem_00_Distributor_C", "GetSkipChildComponentWhenOverlapping");

	Params::ABP_PickableItem_00_Distributor_C_GetSkipChildComponentWhenOverlapping_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PickableItem_00_Distributor.BP_PickableItem_00_Distributor_C.GetComponentTagToSkipWhenOverlappingSphere
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName ABP_PickableItem_00_Distributor_C::GetComponentTagToSkipWhenOverlappingSphere()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickableItem_00_Distributor_C", "GetComponentTagToSkipWhenOverlappingSphere");

	Params::ABP_PickableItem_00_Distributor_C_GetComponentTagToSkipWhenOverlappingSphere_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


