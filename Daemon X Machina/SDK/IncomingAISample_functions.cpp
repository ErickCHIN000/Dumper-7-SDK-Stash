#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IncomingAISample.IncomingAISample_C
// (Actor)

class UClass* AIncomingAISample_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IncomingAISample_C");

	return Clss;
}


// IncomingAISample_C IncomingAISample.Default__IncomingAISample_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AIncomingAISample_C* AIncomingAISample_C::GetDefaultObj()
{
	static class AIncomingAISample_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AIncomingAISample_C*>(AIncomingAISample_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IncomingAISample.IncomingAISample_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AIncomingAISample_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IncomingAISample_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IncomingAISample.IncomingAISample_C.AIProcess
// (Event, Public, BlueprintEvent)
// Parameters:

void AIncomingAISample_C::AIProcess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IncomingAISample_C", "AIProcess");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IncomingAISample.IncomingAISample_C.AIInit
// (Event, Public, BlueprintEvent)
// Parameters:

void AIncomingAISample_C::AIInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IncomingAISample_C", "AIInit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IncomingAISample.IncomingAISample_C.AIHateTargetChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AIncomingAISample_C::AIHateTargetChanged(class AActor* TargetActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IncomingAISample_C", "AIHateTargetChanged");

	Params::AIncomingAISample_C_AIHateTargetChanged_Params Parms{};

	Parms.TargetActor = TargetActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IncomingAISample.IncomingAISample_C.AIAttackFinished
// (Event, Public, BlueprintEvent)
// Parameters:

void AIncomingAISample_C::AIAttackFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IncomingAISample_C", "AIAttackFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IncomingAISample.IncomingAISample_C.ExecuteUbergraph_IncomingAISample
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActionGoToIncomingTargetPoint_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_targetActor                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AIncomingAISample_C::ExecuteUbergraph_IncomingAISample(int32 EntryPoint, bool CallFunc_ActionGoToIncomingTargetPoint_ReturnValue, class AActor* K2Node_Event_targetActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IncomingAISample_C", "ExecuteUbergraph_IncomingAISample");

	Params::AIncomingAISample_C_ExecuteUbergraph_IncomingAISample_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_ActionGoToIncomingTargetPoint_ReturnValue = CallFunc_ActionGoToIncomingTargetPoint_ReturnValue;
	Parms.K2Node_Event_targetActor = K2Node_Event_targetActor;

	UObject::ProcessEvent(Func, &Parms);

}

}


