#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SnowLeopard_Statue_Bronze.BP_SnowLeopard_Statue_Bronze_C
// (Actor)

class UClass* ABP_SnowLeopard_Statue_Bronze_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SnowLeopard_Statue_Bronze_C");

	return Clss;
}


// BP_SnowLeopard_Statue_Bronze_C BP_SnowLeopard_Statue_Bronze.Default__BP_SnowLeopard_Statue_Bronze_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SnowLeopard_Statue_Bronze_C* ABP_SnowLeopard_Statue_Bronze_C::GetDefaultObj()
{
	static class ABP_SnowLeopard_Statue_Bronze_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SnowLeopard_Statue_Bronze_C*>(ABP_SnowLeopard_Statue_Bronze_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SnowLeopard_Statue_Bronze.BP_SnowLeopard_Statue_Bronze_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SnowLeopard_Statue_Bronze_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SnowLeopard_Statue_Bronze_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SnowLeopard_Statue_Bronze.BP_SnowLeopard_Statue_Bronze_C.ExecuteUbergraph_BP_SnowLeopard_Statue_Bronze
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SnowLeopard_Statue_Bronze_C::ExecuteUbergraph_BP_SnowLeopard_Statue_Bronze(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SnowLeopard_Statue_Bronze_C", "ExecuteUbergraph_BP_SnowLeopard_Statue_Bronze");

	Params::ABP_SnowLeopard_Statue_Bronze_C_ExecuteUbergraph_BP_SnowLeopard_Statue_Bronze_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


