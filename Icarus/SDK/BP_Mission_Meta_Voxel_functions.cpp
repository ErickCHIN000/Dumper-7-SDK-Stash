#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Mission_Meta_Voxel.BP_Mission_Meta_Voxel_C
// (Actor)

class UClass* ABP_Mission_Meta_Voxel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Mission_Meta_Voxel_C");

	return Clss;
}


// BP_Mission_Meta_Voxel_C BP_Mission_Meta_Voxel.Default__BP_Mission_Meta_Voxel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Mission_Meta_Voxel_C* ABP_Mission_Meta_Voxel_C::GetDefaultObj()
{
	static class ABP_Mission_Meta_Voxel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Mission_Meta_Voxel_C*>(ABP_Mission_Meta_Voxel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Mission_Meta_Voxel.BP_Mission_Meta_Voxel_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Mission_Meta_Voxel_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mission_Meta_Voxel_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Mission_Meta_Voxel.BP_Mission_Meta_Voxel_C.ExecuteUbergraph_BP_Mission_Meta_Voxel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mission_Meta_Voxel_C::ExecuteUbergraph_BP_Mission_Meta_Voxel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mission_Meta_Voxel_C", "ExecuteUbergraph_BP_Mission_Meta_Voxel");

	Params::ABP_Mission_Meta_Voxel_C_ExecuteUbergraph_BP_Mission_Meta_Voxel_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


