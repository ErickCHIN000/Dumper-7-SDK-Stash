#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GameSpaceEnabledCondition.GameSpaceEnabledCondition_C
// (None)

class UClass* UGameSpaceEnabledCondition_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameSpaceEnabledCondition_C");

	return Clss;
}


// GameSpaceEnabledCondition_C GameSpaceEnabledCondition.Default__GameSpaceEnabledCondition_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGameSpaceEnabledCondition_C* UGameSpaceEnabledCondition_C::GetDefaultObj()
{
	static class UGameSpaceEnabledCondition_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameSpaceEnabledCondition_C*>(UGameSpaceEnabledCondition_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GameSpaceEnabledCondition.GameSpaceEnabledCondition_C.Evaluate
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGamespaceUIEnabled_GamespaceUIEnabled                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGameSpaceEnabledCondition_C::Evaluate(bool CallFunc_IsGamespaceUIEnabled_GamespaceUIEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameSpaceEnabledCondition_C", "Evaluate");

	Params::UGameSpaceEnabledCondition_C_Evaluate_Params Parms{};

	Parms.CallFunc_IsGamespaceUIEnabled_GamespaceUIEnabled = CallFunc_IsGamespaceUIEnabled_GamespaceUIEnabled;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


