#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WaterCutoffBox.BP_WaterCutoffBox_C
// (Actor)

class UClass* ABP_WaterCutoffBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WaterCutoffBox_C");

	return Clss;
}


// BP_WaterCutoffBox_C BP_WaterCutoffBox.Default__BP_WaterCutoffBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WaterCutoffBox_C* ABP_WaterCutoffBox_C::GetDefaultObj()
{
	static class ABP_WaterCutoffBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WaterCutoffBox_C*>(ABP_WaterCutoffBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WaterCutoffBox.BP_WaterCutoffBox_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void ABP_WaterCutoffBox_C::UserConstructionScript(const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WaterCutoffBox_C", "UserConstructionScript");

	Params::ABP_WaterCutoffBox_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WaterCutoffBox.BP_WaterCutoffBox_C.ExecuteUbergraph_BP_WaterCutoffBox
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WaterCutoffBox_C::ExecuteUbergraph_BP_WaterCutoffBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WaterCutoffBox_C", "ExecuteUbergraph_BP_WaterCutoffBox");

	Params::ABP_WaterCutoffBox_C_ExecuteUbergraph_BP_WaterCutoffBox_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


