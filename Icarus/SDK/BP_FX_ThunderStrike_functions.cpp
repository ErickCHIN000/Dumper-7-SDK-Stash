#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FX_ThunderStrike.BP_FX_ThunderStrike_C
// (Actor)

class UClass* ABP_FX_ThunderStrike_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FX_ThunderStrike_C");

	return Clss;
}


// BP_FX_ThunderStrike_C BP_FX_ThunderStrike.Default__BP_FX_ThunderStrike_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FX_ThunderStrike_C* ABP_FX_ThunderStrike_C::GetDefaultObj()
{
	static class ABP_FX_ThunderStrike_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FX_ThunderStrike_C*>(ABP_FX_ThunderStrike_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FX_ThunderStrike.BP_FX_ThunderStrike_C.StrikeStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FX_ThunderStrike_C::StrikeStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FX_ThunderStrike_C", "StrikeStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FX_ThunderStrike.BP_FX_ThunderStrike_C.ExecuteUbergraph_BP_FX_ThunderStrike
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimeSeconds_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FX_ThunderStrike_C::ExecuteUbergraph_BP_FX_ThunderStrike(int32 EntryPoint, float CallFunc_GetTimeSeconds_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FX_ThunderStrike_C", "ExecuteUbergraph_BP_FX_ThunderStrike");

	Params::ABP_FX_ThunderStrike_C_ExecuteUbergraph_BP_FX_ThunderStrike_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetTimeSeconds_ReturnValue = CallFunc_GetTimeSeconds_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


