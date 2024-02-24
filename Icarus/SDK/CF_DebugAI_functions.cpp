#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_DebugAI.CF_DebugAI_C
// (None)

class UClass* UCF_DebugAI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_DebugAI_C");

	return Clss;
}


// CF_DebugAI_C CF_DebugAI.Default__CF_DebugAI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_DebugAI_C* UCF_DebugAI_C::GetDefaultObj()
{
	static class UCF_DebugAI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_DebugAI_C*>(UCF_DebugAI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_DebugAI.CF_DebugAI_C.Execute
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCF_DebugAI_C::Execute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_DebugAI_C", "Execute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_DebugAI.CF_DebugAI_C.ExecuteUbergraph_CF_DebugAI
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAISpawner*                  CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_DebugAI_C::ExecuteUbergraph_CF_DebugAI(int32 EntryPoint, class AAISpawner* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_DebugAI_C", "ExecuteUbergraph_CF_DebugAI");

	Params::UCF_DebugAI_C_ExecuteUbergraph_CF_DebugAI_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


