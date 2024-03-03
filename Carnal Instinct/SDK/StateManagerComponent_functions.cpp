#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StateManagerComponent.StateManagerComponent_C
// (None)

class UClass* UStateManagerComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StateManagerComponent_C");

	return Clss;
}


// StateManagerComponent_C StateManagerComponent.Default__StateManagerComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStateManagerComponent_C* UStateManagerComponent_C::GetDefaultObj()
{
	static class UStateManagerComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStateManagerComponent_C*>(UStateManagerComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StateManagerComponent.StateManagerComponent_C.SetIdleState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStateManagerComponent_C::SetIdleState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StateManagerComponent_C", "SetIdleState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StateManagerComponent.StateManagerComponent_C.ResetState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InTime                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// enum class E_State                 CallFunc_GetState_State                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UStateManagerComponent_C::ResetState(float InTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, enum class E_State CallFunc_GetState_State, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StateManagerComponent_C", "ResetState");

	Params::UStateManagerComponent_C_ResetState_Params Parms{};

	Parms.InTime = InTime;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetState_State = CallFunc_GetState_State;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StateManagerComponent.StateManagerComponent_C.GetActivityValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class E_Activity              Activity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UStateManagerComponent_C::GetActivityValue(enum class E_Activity Activity, bool* Value, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StateManagerComponent_C", "GetActivityValue");

	Params::UStateManagerComponent_C_GetActivityValue_Params Parms{};

	Parms.Activity = Activity;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function StateManagerComponent.StateManagerComponent_C.SetActivity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_Activity              Activity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetActivityValue_Value                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UStateManagerComponent_C::SetActivity(enum class E_Activity Activity, bool Value, bool CallFunc_GetActivityValue_Value, bool CallFunc_NotEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StateManagerComponent_C", "SetActivity");

	Params::UStateManagerComponent_C_SetActivity_Params Parms{};

	Parms.Activity = Activity;
	Parms.Value = Value;
	Parms.CallFunc_GetActivityValue_Value = CallFunc_GetActivityValue_Value;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StateManagerComponent.StateManagerComponent_C.GetState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class E_State                 State                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStateManagerComponent_C::GetState(enum class E_State* State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StateManagerComponent_C", "GetState");

	Params::UStateManagerComponent_C_GetState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (State != nullptr)
		*State = Parms.State;

}


// Function StateManagerComponent.StateManagerComponent_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_State                 State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_State                 L_PrevState                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UStateManagerComponent_C::SetState(enum class E_State State, enum class E_State L_PrevState, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StateManagerComponent_C", "SetState");

	Params::UStateManagerComponent_C_SetState_Params Parms{};

	Parms.State = State;
	Parms.L_PrevState = L_PrevState;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StateManagerComponent.StateManagerComponent_C.OnActivityChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_Activity              Activity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStateManagerComponent_C::OnActivityChanged__DelegateSignature(enum class E_Activity Activity, bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StateManagerComponent_C", "OnActivityChanged__DelegateSignature");

	Params::UStateManagerComponent_C_OnActivityChanged__DelegateSignature_Params Parms{};

	Parms.Activity = Activity;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StateManagerComponent.StateManagerComponent_C.OnStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_State                 PrevState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_State                 NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStateManagerComponent_C::OnStateChanged__DelegateSignature(enum class E_State PrevState, enum class E_State NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StateManagerComponent_C", "OnStateChanged__DelegateSignature");

	Params::UStateManagerComponent_C_OnStateChanged__DelegateSignature_Params Parms{};

	Parms.PrevState = PrevState;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}

}


