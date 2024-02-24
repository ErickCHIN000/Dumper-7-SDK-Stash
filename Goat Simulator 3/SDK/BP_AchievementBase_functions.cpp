#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AchievementBase.BP_AchievementBase_C
// (Actor)

class UClass* ABP_AchievementBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AchievementBase_C");

	return Clss;
}


// BP_AchievementBase_C BP_AchievementBase.Default__BP_AchievementBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AchievementBase_C* ABP_AchievementBase_C::GetDefaultObj()
{
	static class ABP_AchievementBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AchievementBase_C*>(ABP_AchievementBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AchievementBase.BP_AchievementBase_C.OnAchievementInitialize
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_AchievementBase_C::OnAchievementInitialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AchievementBase_C", "OnAchievementInitialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AchievementBase.BP_AchievementBase_C.ExecuteUbergraph_BP_AchievementBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AchievementBase_C::ExecuteUbergraph_BP_AchievementBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AchievementBase_C", "ExecuteUbergraph_BP_AchievementBase");

	Params::ABP_AchievementBase_C_ExecuteUbergraph_BP_AchievementBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


