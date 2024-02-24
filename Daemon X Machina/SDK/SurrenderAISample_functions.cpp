#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SurrenderAISample.SurrenderAISample_C
// (Actor)

class UClass* ASurrenderAISample_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SurrenderAISample_C");

	return Clss;
}


// SurrenderAISample_C SurrenderAISample.Default__SurrenderAISample_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASurrenderAISample_C* ASurrenderAISample_C::GetDefaultObj()
{
	static class ASurrenderAISample_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASurrenderAISample_C*>(ASurrenderAISample_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SurrenderAISample.SurrenderAISample_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASurrenderAISample_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SurrenderAISample_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SurrenderAISample.SurrenderAISample_C.AIProcess
// (Event, Public, BlueprintEvent)
// Parameters:

void ASurrenderAISample_C::AIProcess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SurrenderAISample_C", "AIProcess");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SurrenderAISample.SurrenderAISample_C.AIInit
// (Event, Public, BlueprintEvent)
// Parameters:

void ASurrenderAISample_C::AIInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SurrenderAISample_C", "AIInit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SurrenderAISample.SurrenderAISample_C.AIHateTargetChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASurrenderAISample_C::AIHateTargetChanged(class AActor* TargetActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SurrenderAISample_C", "AIHateTargetChanged");

	Params::ASurrenderAISample_C_AIHateTargetChanged_Params Parms{};

	Parms.TargetActor = TargetActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SurrenderAISample.SurrenderAISample_C.AIAttackFinished
// (Event, Public, BlueprintEvent)
// Parameters:

void ASurrenderAISample_C::AIAttackFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SurrenderAISample_C", "AIAttackFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SurrenderAISample.SurrenderAISample_C.ExecuteUbergraph_SurrenderAISample
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActionWait_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_targetActor                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASurrenderAISample_C::ExecuteUbergraph_SurrenderAISample(int32 EntryPoint, bool CallFunc_ActionWait_ReturnValue, class AActor* K2Node_Event_targetActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SurrenderAISample_C", "ExecuteUbergraph_SurrenderAISample");

	Params::ASurrenderAISample_C_ExecuteUbergraph_SurrenderAISample_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_ActionWait_ReturnValue = CallFunc_ActionWait_ReturnValue;
	Parms.K2Node_Event_targetActor = K2Node_Event_targetActor;

	UObject::ProcessEvent(Func, &Parms);

}

}


