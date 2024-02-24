#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StretchGoal_Base.BP_StretchGoal_Base_C
// (Actor)

class UClass* ABP_StretchGoal_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StretchGoal_Base_C");

	return Clss;
}


// BP_StretchGoal_Base_C BP_StretchGoal_Base.Default__BP_StretchGoal_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_StretchGoal_Base_C* ABP_StretchGoal_Base_C::GetDefaultObj()
{
	static class ABP_StretchGoal_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_StretchGoal_Base_C*>(ABP_StretchGoal_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StretchGoal_Base.BP_StretchGoal_Base_C.OnSequenceFinished
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_StretchGoal_Base_C::OnSequenceFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Base_C", "OnSequenceFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StretchGoal_Base.BP_StretchGoal_Base_C.GoalChangedState
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EStretchGoalStates      NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStateChangeSource      ChangeSource                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StretchGoal_Base_C::GoalChangedState(enum class EStretchGoalStates NewState, enum class EStateChangeSource ChangeSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Base_C", "GoalChangedState");

	Params::ABP_StretchGoal_Base_C_GoalChangedState_Params Parms{};

	Parms.NewState = NewState;
	Parms.ChangeSource = ChangeSource;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StretchGoal_Base.BP_StretchGoal_Base_C.CurrentStateReplicated
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EStretchGoalStates      NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StretchGoal_Base_C::CurrentStateReplicated(enum class EStretchGoalStates NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Base_C", "CurrentStateReplicated");

	Params::ABP_StretchGoal_Base_C_CurrentStateReplicated_Params Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StretchGoal_Base.BP_StretchGoal_Base_C.ExecuteUbergraph_BP_StretchGoal_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EStretchGoalStates      K2Node_Event_NewState_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStateChangeSource      K2Node_Event_ChangeSource                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStretchGoalStates      K2Node_Event_NewState                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StretchGoal_Base_C::ExecuteUbergraph_BP_StretchGoal_Base(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, enum class EStretchGoalStates K2Node_Event_NewState_1, enum class EStateChangeSource K2Node_Event_ChangeSource, enum class EStretchGoalStates K2Node_Event_NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Base_C", "ExecuteUbergraph_BP_StretchGoal_Base");

	Params::ABP_StretchGoal_Base_C_ExecuteUbergraph_BP_StretchGoal_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_NewState_1 = K2Node_Event_NewState_1;
	Parms.K2Node_Event_ChangeSource = K2Node_Event_ChangeSource;
	Parms.K2Node_Event_NewState = K2Node_Event_NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StretchGoal_Base.BP_StretchGoal_Base_C.OnStretchgoalSequenceFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StretchGoal_Base_C::OnStretchgoalSequenceFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Base_C", "OnStretchgoalSequenceFinished__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


