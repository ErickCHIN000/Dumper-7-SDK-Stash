#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIAction_Mushroom_LowPriorityActions.AIAction_Mushroom_LowPriorityActions_C
// (None)

class UClass* UAIAction_Mushroom_LowPriorityActions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_Mushroom_LowPriorityActions_C");

	return Clss;
}


// AIAction_Mushroom_LowPriorityActions_C AIAction_Mushroom_LowPriorityActions.Default__AIAction_Mushroom_LowPriorityActions_C
// (Public, Transactional, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAction_Mushroom_LowPriorityActions_C* UAIAction_Mushroom_LowPriorityActions_C::GetDefaultObj()
{
	static class UAIAction_Mushroom_LowPriorityActions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_Mushroom_LowPriorityActions_C*>(UAIAction_Mushroom_LowPriorityActions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIAction_Mushroom_LowPriorityActions.AIAction_Mushroom_LowPriorityActions_C.OnAnimEnd_DCBF5C7C4B29BB35D231F69C79845780
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAIAction_Mushroom_LowPriorityActions_C::OnAnimEnd_DCBF5C7C4B29BB35D231F69C79845780()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_Mushroom_LowPriorityActions_C", "OnAnimEnd_DCBF5C7C4B29BB35D231F69C79845780");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIAction_Mushroom_LowPriorityActions.AIAction_Mushroom_LowPriorityActions_C.OnEnd_DCBF5C7C4B29BB35D231F69C79845780
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGbxActionEndState      EndState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_Mushroom_LowPriorityActions_C::OnEnd_DCBF5C7C4B29BB35D231F69C79845780(enum class EGbxActionEndState EndState, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_Mushroom_LowPriorityActions_C", "OnEnd_DCBF5C7C4B29BB35D231F69C79845780");

	Params::UAIAction_Mushroom_LowPriorityActions_C_OnEnd_DCBF5C7C4B29BB35D231F69C79845780_Params Parms{};

	Parms.EndState = EndState;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIAction_Mushroom_LowPriorityActions.AIAction_Mushroom_LowPriorityActions_C.BndEvt__PetInteractions_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_PetShared
// (HasOutParams, BlueprintEvent)
// Parameters:
// class AGbxAIController*            AIController                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGbxCharacter*               Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAIActionBlueprintContext   Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UAIAction_Mushroom_LowPriorityActions_C::BndEvt__PetInteractions_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_PetShared(class AGbxAIController* AIController, class AGbxCharacter* Character, struct FAIActionBlueprintContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_Mushroom_LowPriorityActions_C", "BndEvt__PetInteractions_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_PetShared");

	Params::UAIAction_Mushroom_LowPriorityActions_C_BndEvt__PetInteractions_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_PetShared_Params Parms{};

	Parms.AIController = AIController;
	Parms.Character = Character;
	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIAction_Mushroom_LowPriorityActions.AIAction_Mushroom_LowPriorityActions_C.BndEvt__Follow.TeleportAction_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Mushroom_LowPriorityActions
// (HasOutParams, BlueprintEvent)
// Parameters:
// class AGbxAIController*            AIController                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGbxCharacter*               Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAIActionBlueprintContext   Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UAIAction_Mushroom_LowPriorityActions_C::BndEvt__Follow_TeleportAction_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Mushroom_LowPriorityActions(class AGbxAIController* AIController, class AGbxCharacter* Character, struct FAIActionBlueprintContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_Mushroom_LowPriorityActions_C", "BndEvt__Follow.TeleportAction_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Mushroom_LowPriorityActions");

	Params::UAIAction_Mushroom_LowPriorityActions_C_BndEvt__Follow_TeleportAction_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Mushroom_LowPriorityActions_Params Parms{};

	Parms.AIController = AIController;
	Parms.Character = Character;
	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIAction_Mushroom_LowPriorityActions.AIAction_Mushroom_LowPriorityActions_C.ExecuteUbergraph_AIAction_Mushroom_LowPriorityActions
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGbxActionRegister>  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// struct FGbxBlackboardKeySelector   K2Node_MakeStruct_GbxBlackboardKeySelector                       (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class EGbxActionEndState      K2Node_CustomEvent_EndState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Actor                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class AActor*                      Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGbxActionEndState      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGbxAIController*            K2Node_GbxBoundEvent_AIController1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGbxCharacter*               K2Node_GbxBoundEvent_Character1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAIActionBlueprintContext   K2Node_GbxBoundEvent_Context1                                    (ConstParm, NoDestructor)
// class AGbxAIController*            K2Node_GbxBoundEvent_AIController                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGbxCharacter*               K2Node_GbxBoundEvent_Character                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAIActionBlueprintContext   K2Node_GbxBoundEvent_Context                                     (ConstParm, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayTask_PlayGbxAction* CallFunc_PlayGbxAction_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIAction_Mushroom_LowPriorityActions_C::ExecuteUbergraph_AIAction_Mushroom_LowPriorityActions(int32 EntryPoint, TArray<struct FGbxActionRegister>& Temp_struct_Variable, const struct FGbxBlackboardKeySelector& K2Node_MakeStruct_GbxBlackboardKeySelector, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EGbxActionEndState K2Node_CustomEvent_EndState, class AActor* K2Node_CustomEvent_Actor, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class AActor* Temp_object_Variable, enum class EGbxActionEndState Temp_byte_Variable, class AGbxAIController* K2Node_GbxBoundEvent_AIController1, class AGbxCharacter* K2Node_GbxBoundEvent_Character1, const struct FAIActionBlueprintContext& K2Node_GbxBoundEvent_Context1, class AGbxAIController* K2Node_GbxBoundEvent_AIController, class AGbxCharacter* K2Node_GbxBoundEvent_Character, const struct FAIActionBlueprintContext& K2Node_GbxBoundEvent_Context, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class UGameplayTask_PlayGbxAction* CallFunc_PlayGbxAction_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_Mushroom_LowPriorityActions_C", "ExecuteUbergraph_AIAction_Mushroom_LowPriorityActions");

	Params::UAIAction_Mushroom_LowPriorityActions_C_ExecuteUbergraph_AIAction_Mushroom_LowPriorityActions_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_MakeStruct_GbxBlackboardKeySelector = K2Node_MakeStruct_GbxBlackboardKeySelector;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_EndState = K2Node_CustomEvent_EndState;
	Parms.K2Node_CustomEvent_Actor = K2Node_CustomEvent_Actor;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_GbxBoundEvent_AIController1 = K2Node_GbxBoundEvent_AIController1;
	Parms.K2Node_GbxBoundEvent_Character1 = K2Node_GbxBoundEvent_Character1;
	Parms.K2Node_GbxBoundEvent_Context1 = K2Node_GbxBoundEvent_Context1;
	Parms.K2Node_GbxBoundEvent_AIController = K2Node_GbxBoundEvent_AIController;
	Parms.K2Node_GbxBoundEvent_Character = K2Node_GbxBoundEvent_Character;
	Parms.K2Node_GbxBoundEvent_Context = K2Node_GbxBoundEvent_Context;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_PlayGbxAction_ReturnValue = CallFunc_PlayGbxAction_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


