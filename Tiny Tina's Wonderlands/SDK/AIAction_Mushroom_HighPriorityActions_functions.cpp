#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AIActionBlueprintGeneratedClass AIAction_Mushroom_HighPriorityActions.AIAction_Mushroom_HighPriorityActions_C
// (None)

class UClass* UAIAction_Mushroom_HighPriorityActions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_Mushroom_HighPriorityActions_C");

	return Clss;
}


// AIAction_Mushroom_HighPriorityActions_C AIAction_Mushroom_HighPriorityActions.Default__AIAction_Mushroom_HighPriorityActions_C
// (Public, Transactional, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAction_Mushroom_HighPriorityActions_C* UAIAction_Mushroom_HighPriorityActions_C::GetDefaultObj()
{
	static class UAIAction_Mushroom_HighPriorityActions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_Mushroom_HighPriorityActions_C*>(UAIAction_Mushroom_HighPriorityActions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIAction_Mushroom_HighPriorityActions.AIAction_Mushroom_HighPriorityActions_C.OnAnimEnd_0D2552ED4D321D910C6D4BB6963B5A2E
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAIAction_Mushroom_HighPriorityActions_C::OnAnimEnd_0D2552ED4D321D910C6D4BB6963B5A2E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_Mushroom_HighPriorityActions_C", "OnAnimEnd_0D2552ED4D321D910C6D4BB6963B5A2E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIAction_Mushroom_HighPriorityActions.AIAction_Mushroom_HighPriorityActions_C.OnEnd_0D2552ED4D321D910C6D4BB6963B5A2E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGbxActionEndState      EndState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_Mushroom_HighPriorityActions_C::OnEnd_0D2552ED4D321D910C6D4BB6963B5A2E(enum class EGbxActionEndState EndState, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_Mushroom_HighPriorityActions_C", "OnEnd_0D2552ED4D321D910C6D4BB6963B5A2E");

	Params::UAIAction_Mushroom_HighPriorityActions_C_OnEnd_0D2552ED4D321D910C6D4BB6963B5A2E_Params Parms{};

	Parms.EndState = EndState;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIAction_Mushroom_HighPriorityActions.AIAction_Mushroom_HighPriorityActions_C.BndEvt__ReviveAlly_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetJabbermon
// (HasOutParams, BlueprintEvent)
// Parameters:
// class AGbxAIController*            AIController                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGbxCharacter*               Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAIActionBlueprintContext   Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// enum class EAIActionResult         Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_Mushroom_HighPriorityActions_C::BndEvt__ReviveAlly_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetJabbermon(class AGbxAIController* AIController, class AGbxCharacter* Character, struct FAIActionBlueprintContext& Context, enum class EAIActionResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_Mushroom_HighPriorityActions_C", "BndEvt__ReviveAlly_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetJabbermon");

	Params::UAIAction_Mushroom_HighPriorityActions_C_BndEvt__ReviveAlly_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetJabbermon_Params Parms{};

	Parms.AIController = AIController;
	Parms.Character = Character;
	Parms.Context = Context;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIAction_Mushroom_HighPriorityActions.AIAction_Mushroom_HighPriorityActions_C.BndEvt__ReviveAlly_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_PetJabbermon
// (HasOutParams, BlueprintEvent)
// Parameters:
// class AGbxAIController*            AIController                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGbxCharacter*               Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAIActionBlueprintContext   Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UAIAction_Mushroom_HighPriorityActions_C::BndEvt__ReviveAlly_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_PetJabbermon(class AGbxAIController* AIController, class AGbxCharacter* Character, struct FAIActionBlueprintContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_Mushroom_HighPriorityActions_C", "BndEvt__ReviveAlly_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_PetJabbermon");

	Params::UAIAction_Mushroom_HighPriorityActions_C_BndEvt__ReviveAlly_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_PetJabbermon_Params Parms{};

	Parms.AIController = AIController;
	Parms.Character = Character;
	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIAction_Mushroom_HighPriorityActions.AIAction_Mushroom_HighPriorityActions_C.BndEvt__Teleport_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Mushroom_HighPriorityActions
// (HasOutParams, BlueprintEvent)
// Parameters:
// class AGbxAIController*            AIController                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGbxCharacter*               Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAIActionBlueprintContext   Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UAIAction_Mushroom_HighPriorityActions_C::BndEvt__Teleport_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Mushroom_HighPriorityActions(class AGbxAIController* AIController, class AGbxCharacter* Character, struct FAIActionBlueprintContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_Mushroom_HighPriorityActions_C", "BndEvt__Teleport_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Mushroom_HighPriorityActions");

	Params::UAIAction_Mushroom_HighPriorityActions_C_BndEvt__Teleport_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Mushroom_HighPriorityActions_Params Parms{};

	Parms.AIController = AIController;
	Parms.Character = Character;
	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIAction_Mushroom_HighPriorityActions.AIAction_Mushroom_HighPriorityActions_C.ExecuteUbergraph_AIAction_Mushroom_HighPriorityActions
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGbxActionRegister>  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// enum class EGbxActionEndState      K2Node_CustomEvent_EndState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Actor                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AActor*                      Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGbxActionEndState      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGbxAIController*            K2Node_GbxBoundEvent_AIController2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGbxCharacter*               K2Node_GbxBoundEvent_Character2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAIActionBlueprintContext   K2Node_GbxBoundEvent_Context2                                    (ConstParm, NoDestructor)
// enum class EAIActionResult         K2Node_GbxBoundEvent_Result                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGbxAIController*            K2Node_GbxBoundEvent_AIController1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGbxCharacter*               K2Node_GbxBoundEvent_Character1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAIActionBlueprintContext   K2Node_GbxBoundEvent_Context1                                    (ConstParm, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class AGbxAIController*            K2Node_GbxBoundEvent_AIController                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGbxCharacter*               K2Node_GbxBoundEvent_Character                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAIActionBlueprintContext   K2Node_GbxBoundEvent_Context                                     (ConstParm, NoDestructor)
// TArray<struct FGbxActionRegister>  Temp_struct_Variable1                                            (ConstParm, ZeroConstructor, ReferenceParm)
// class UGameplayTask_PlayGbxAction* CallFunc_PlayGbxAction_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIAction_Mushroom_HighPriorityActions_C::ExecuteUbergraph_AIAction_Mushroom_HighPriorityActions(int32 EntryPoint, TArray<struct FGbxActionRegister>& Temp_struct_Variable, enum class EGbxActionEndState K2Node_CustomEvent_EndState, class AActor* K2Node_CustomEvent_Actor, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* Temp_object_Variable, enum class EGbxActionEndState Temp_byte_Variable, class AGbxAIController* K2Node_GbxBoundEvent_AIController2, class AGbxCharacter* K2Node_GbxBoundEvent_Character2, const struct FAIActionBlueprintContext& K2Node_GbxBoundEvent_Context2, enum class EAIActionResult K2Node_GbxBoundEvent_Result, class AGbxAIController* K2Node_GbxBoundEvent_AIController1, class AGbxCharacter* K2Node_GbxBoundEvent_Character1, const struct FAIActionBlueprintContext& K2Node_GbxBoundEvent_Context1, bool K2Node_SwitchEnum_CmpSuccess, class UGbxAction* CallFunc_K2Play_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class AGbxAIController* K2Node_GbxBoundEvent_AIController, class AGbxCharacter* K2Node_GbxBoundEvent_Character, const struct FAIActionBlueprintContext& K2Node_GbxBoundEvent_Context, TArray<struct FGbxActionRegister>& Temp_struct_Variable1, class UGameplayTask_PlayGbxAction* CallFunc_PlayGbxAction_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_Mushroom_HighPriorityActions_C", "ExecuteUbergraph_AIAction_Mushroom_HighPriorityActions");

	Params::UAIAction_Mushroom_HighPriorityActions_C_ExecuteUbergraph_AIAction_Mushroom_HighPriorityActions_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CustomEvent_EndState = K2Node_CustomEvent_EndState;
	Parms.K2Node_CustomEvent_Actor = K2Node_CustomEvent_Actor;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_GbxBoundEvent_AIController2 = K2Node_GbxBoundEvent_AIController2;
	Parms.K2Node_GbxBoundEvent_Character2 = K2Node_GbxBoundEvent_Character2;
	Parms.K2Node_GbxBoundEvent_Context2 = K2Node_GbxBoundEvent_Context2;
	Parms.K2Node_GbxBoundEvent_Result = K2Node_GbxBoundEvent_Result;
	Parms.K2Node_GbxBoundEvent_AIController1 = K2Node_GbxBoundEvent_AIController1;
	Parms.K2Node_GbxBoundEvent_Character1 = K2Node_GbxBoundEvent_Character1;
	Parms.K2Node_GbxBoundEvent_Context1 = K2Node_GbxBoundEvent_Context1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_K2Play_ReturnValue = CallFunc_K2Play_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_GbxBoundEvent_AIController = K2Node_GbxBoundEvent_AIController;
	Parms.K2Node_GbxBoundEvent_Character = K2Node_GbxBoundEvent_Character;
	Parms.K2Node_GbxBoundEvent_Context = K2Node_GbxBoundEvent_Context;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.CallFunc_PlayGbxAction_ReturnValue = CallFunc_PlayGbxAction_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


