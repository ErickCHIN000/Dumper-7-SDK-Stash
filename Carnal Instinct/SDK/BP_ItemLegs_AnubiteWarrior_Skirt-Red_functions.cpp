#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemLegs_AnubiteWarrior_Skirt-Red.BP_ItemLegs_AnubiteWarrior_Skirt-Red_C
// (Actor)

class UClass* ABP_ItemLegs_AnubiteWarrior_SkirtMinusRed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemLegs_AnubiteWarrior_Skirt-Red_C");

	return Clss;
}


// BP_ItemLegs_AnubiteWarrior_Skirt-Red_C BP_ItemLegs_AnubiteWarrior_Skirt-Red.Default__BP_ItemLegs_AnubiteWarrior_Skirt-Red_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemLegs_AnubiteWarrior_SkirtMinusRed_C* ABP_ItemLegs_AnubiteWarrior_SkirtMinusRed_C::GetDefaultObj()
{
	static class ABP_ItemLegs_AnubiteWarrior_SkirtMinusRed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemLegs_AnubiteWarrior_SkirtMinusRed_C*>(ABP_ItemLegs_AnubiteWarrior_SkirtMinusRed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ItemLegs_AnubiteWarrior_Skirt-Red.BP_ItemLegs_AnubiteWarrior_Skirt-Red_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ItemLegs_AnubiteWarrior_SkirtMinusRed_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemLegs_AnubiteWarrior_Skirt-Red_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemLegs_AnubiteWarrior_Skirt-Red.BP_ItemLegs_AnubiteWarrior_Skirt-Red_C.ExecuteUbergraph_BP_ItemLegs_AnubiteWarrior_Skirt-Red
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemLegs_AnubiteWarrior_SkirtMinusRed_C::ExecuteUbergraph_BP_ItemLegs_AnubiteWarrior_SkirtMinusRed(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemLegs_AnubiteWarrior_Skirt-Red_C", "ExecuteUbergraph_BP_ItemLegs_AnubiteWarrior_Skirt-Red");

	Params::ABP_ItemLegs_AnubiteWarrior_SkirtMinusRed_C_ExecuteUbergraph_BP_ItemLegs_AnubiteWarrior_SkirtMinusRed_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


