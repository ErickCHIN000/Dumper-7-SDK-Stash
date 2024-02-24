#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_EveningActionsRelayActor.bp_EveningActionsRelayActor_C
// (Actor)

class UClass* Abp_EveningActionsRelayActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_EveningActionsRelayActor_C");

	return Clss;
}


// bp_EveningActionsRelayActor_C bp_EveningActionsRelayActor.Default__bp_EveningActionsRelayActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Abp_EveningActionsRelayActor_C* Abp_EveningActionsRelayActor_C::GetDefaultObj()
{
	static class Abp_EveningActionsRelayActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Abp_EveningActionsRelayActor_C*>(Abp_EveningActionsRelayActor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bp_EveningActionsRelayActor.bp_EveningActionsRelayActor_C.Relay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Input                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_EveningActionsRelayActor_C::Relay(class FName Input)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_EveningActionsRelayActor_C", "Relay");

	Params::Abp_EveningActionsRelayActor_C_Relay_Params Parms{};

	Parms.Input = Input;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_EveningActionsRelayActor.bp_EveningActionsRelayActor_C.ReportEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_EveningActionsRelayActor_C::ReportEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_EveningActionsRelayActor_C", "ReportEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_EveningActionsRelayActor.bp_EveningActionsRelayActor_C.RequestActivity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Input                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_EveningActionsRelayActor_C::RequestActivity(class FName Input)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_EveningActionsRelayActor_C", "RequestActivity");

	Params::Abp_EveningActionsRelayActor_C_RequestActivity_Params Parms{};

	Parms.Input = Input;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_EveningActionsRelayActor.bp_EveningActionsRelayActor_C.ExecuteUbergraph_bp_EveningActionsRelayActor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class Abp_EveningActionsRelayActor_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_EveningActionsRelayActor_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_Input_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_Input                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_EveningActionsRelayActor_C::ExecuteUbergraph_bp_EveningActionsRelayActor(int32 EntryPoint, TArray<class Abp_EveningActionsRelayActor_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, class Abp_EveningActionsRelayActor_C* CallFunc_Array_Get_Item, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FName K2Node_CustomEvent_Input_1, class FName K2Node_CustomEvent_Input)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_EveningActionsRelayActor_C", "ExecuteUbergraph_bp_EveningActionsRelayActor");

	Params::Abp_EveningActionsRelayActor_C_ExecuteUbergraph_bp_EveningActionsRelayActor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CustomEvent_Input_1 = K2Node_CustomEvent_Input_1;
	Parms.K2Node_CustomEvent_Input = K2Node_CustomEvent_Input;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_EveningActionsRelayActor.bp_EveningActionsRelayActor_C.EveningActivityEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_EveningActionsRelayActor_C::EveningActivityEnded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_EveningActionsRelayActor_C", "EveningActivityEnded__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_EveningActionsRelayActor.bp_EveningActionsRelayActor_C.RelayOut__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Output                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_EveningActionsRelayActor_C*NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_EveningActionsRelayActor_C::RelayOut__DelegateSignature(class FName Output, class Abp_EveningActionsRelayActor_C* NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_EveningActionsRelayActor_C", "RelayOut__DelegateSignature");

	Params::Abp_EveningActionsRelayActor_C_RelayOut__DelegateSignature_Params Parms{};

	Parms.Output = Output;
	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}

}


