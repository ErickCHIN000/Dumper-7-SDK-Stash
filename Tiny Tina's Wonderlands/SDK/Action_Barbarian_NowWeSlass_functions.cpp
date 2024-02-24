#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_Barbarian_NowWeSlass.Action_Barbarian_NowWeSlass_C
// (None)

class UClass* UAction_Barbarian_NowWeSlass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_Barbarian_NowWeSlass_C");

	return Clss;
}


// Action_Barbarian_NowWeSlass_C Action_Barbarian_NowWeSlass.Default__Action_Barbarian_NowWeSlass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_Barbarian_NowWeSlass_C* UAction_Barbarian_NowWeSlass_C::GetDefaultObj()
{
	static class UAction_Barbarian_NowWeSlass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_Barbarian_NowWeSlass_C*>(UAction_Barbarian_NowWeSlass_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_Barbarian_NowWeSlass.Action_Barbarian_NowWeSlass_C.StopProblematicActions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Barbarian_NowWeSlass_C::StopProblematicActions(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Barbarian_NowWeSlass_C", "StopProblematicActions");

	Params::UAction_Barbarian_NowWeSlass_C_StopProblematicActions_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_Barbarian_NowWeSlass.Action_Barbarian_NowWeSlass_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Barbarian_NowWeSlass_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Barbarian_NowWeSlass_C", "OnBegin");

	Params::UAction_Barbarian_NowWeSlass_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_Barbarian_NowWeSlass.Action_Barbarian_NowWeSlass_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EGbxActionEndState      ActionEndState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Barbarian_NowWeSlass_C::OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Barbarian_NowWeSlass_C", "OnEnd");

	Params::UAction_Barbarian_NowWeSlass_C_OnEnd_Params Parms{};

	Parms.ActionEndState = ActionEndState;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_Barbarian_NowWeSlass.Action_Barbarian_NowWeSlass_C.SlassLanded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_Barbarian_NowWeSlass_C::SlassLanded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Barbarian_NowWeSlass_C", "SlassLanded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_Barbarian_NowWeSlass.Action_Barbarian_NowWeSlass_C.InputUnlock
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_Barbarian_NowWeSlass_C::InputUnlock()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Barbarian_NowWeSlass_C", "InputUnlock");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_Barbarian_NowWeSlass.Action_Barbarian_NowWeSlass_C.SlassImpact
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_Barbarian_NowWeSlass_C::SlassImpact()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Barbarian_NowWeSlass_C", "SlassImpact");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_Barbarian_NowWeSlass.Action_Barbarian_NowWeSlass_C.TrailStop3rd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_Barbarian_NowWeSlass_C::TrailStop3rd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Barbarian_NowWeSlass_C", "TrailStop3rd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_Barbarian_NowWeSlass.Action_Barbarian_NowWeSlass_C.Notify_TrailStart3rd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_Barbarian_NowWeSlass_C::Notify_TrailStart3rd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Barbarian_NowWeSlass_C", "Notify_TrailStart3rd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_Barbarian_NowWeSlass.Action_Barbarian_NowWeSlass_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Barbarian_NowWeSlass_C::OnServerBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Barbarian_NowWeSlass_C", "OnServerBegin");

	Params::UAction_Barbarian_NowWeSlass_C_OnServerBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_Barbarian_NowWeSlass.Action_Barbarian_NowWeSlass_C.OnServerEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EGbxActionEndState      ActionEndState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Barbarian_NowWeSlass_C::OnServerEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Barbarian_NowWeSlass_C", "OnServerEnd");

	Params::UAction_Barbarian_NowWeSlass_C_OnServerEnd_Params Parms{};

	Parms.ActionEndState = ActionEndState;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_Barbarian_NowWeSlass.Action_Barbarian_NowWeSlass_C.OnControlledMoveStopped
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ControlledMove                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FControlledMoveStopSummary  StopSummary                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UAction_Barbarian_NowWeSlass_C::OnControlledMoveStopped(class UClass* ControlledMove, struct FControlledMoveStopSummary& StopSummary)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Barbarian_NowWeSlass_C", "OnControlledMoveStopped");

	Params::UAction_Barbarian_NowWeSlass_C_OnControlledMoveStopped_Params Parms{};

	Parms.ControlledMove = ControlledMove;
	Parms.StopSummary = StopSummary;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_Barbarian_NowWeSlass.Action_Barbarian_NowWeSlass_C.ExecuteUbergraph_Action_Barbarian_NowWeSlass
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_Actor3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetAssociatedPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGbxActionEndState      K2Node_Event_ActionEndState1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxSkeletalMeshComponent*   CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakPlayerAbilityManagerComponent*CallFunc_GetComponentByClass_ReturnValue1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGbxActionEndState      K2Node_Event_ActionEndState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBPEventHub_PlayerCharacter_C*K2Node_DynamicCast_AsBPEvent_Hub_Player_Character                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player3                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxCharacterMovementComponent*CallFunc_GetComponentByClass_ReturnValue2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player4                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess5                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxCharacterMovementComponent*CallFunc_GetComponentByClass_ReturnValue3                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_CustomEvent_ControlledMove                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FControlledMoveStopSummary  K2Node_CustomEvent_StopSummary                                   (ConstParm, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)

void UAction_Barbarian_NowWeSlass_C::ExecuteUbergraph_Action_Barbarian_NowWeSlass(int32 EntryPoint, class AActor* CallFunc_K2_GetActor_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_Actor3, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, enum class EGbxActionEndState K2Node_Event_ActionEndState1, class AActor* K2Node_Event_Actor2, class AActor* CallFunc_K2_GetActor_ReturnValue1, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player1, bool K2Node_DynamicCast_bSuccess1, class AActor* CallFunc_K2_GetActor_ReturnValue2, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player2, bool K2Node_DynamicCast_bSuccess2, class AActor* CallFunc_K2_GetActor_ReturnValue3, class AActor* CallFunc_K2_GetActor_ReturnValue4, class AActor* CallFunc_K2_GetActor_ReturnValue5, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue6, class AActor* K2Node_Event_Actor1, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue7, class UOakPlayerAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue1, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess3, class AActor* CallFunc_K2_GetActor_ReturnValue8, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player3, bool K2Node_DynamicCast_bSuccess4, bool CallFunc_IsValid_ReturnValue, class UGbxCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue2, class AActor* CallFunc_K2_GetActor_ReturnValue9, bool CallFunc_IsValid_ReturnValue1, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player4, bool K2Node_DynamicCast_bSuccess5, bool CallFunc_IsValid_ReturnValue2, class UGbxCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue3, bool CallFunc_IsValid_ReturnValue3, class UClass* K2Node_CustomEvent_ControlledMove, const struct FControlledMoveStopSummary& K2Node_CustomEvent_StopSummary, bool CallFunc_ClassIsChildOf_ReturnValue, const struct FHitResult& Temp_struct_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Barbarian_NowWeSlass_C", "ExecuteUbergraph_Action_Barbarian_NowWeSlass");

	Params::UAction_Barbarian_NowWeSlass_C_ExecuteUbergraph_Action_Barbarian_NowWeSlass_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActor_ReturnValue = CallFunc_K2_GetActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsIBPChar_Player = K2Node_DynamicCast_AsIBPChar_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_Actor3 = K2Node_Event_Actor3;
	Parms.CallFunc_GetAssociatedPlayerController_ReturnValue = CallFunc_GetAssociatedPlayerController_ReturnValue;
	Parms.K2Node_Event_ActionEndState1 = K2Node_Event_ActionEndState1;
	Parms.K2Node_Event_Actor2 = K2Node_Event_Actor2;
	Parms.CallFunc_K2_GetActor_ReturnValue1 = CallFunc_K2_GetActor_ReturnValue1;
	Parms.K2Node_DynamicCast_AsIBPChar_Player1 = K2Node_DynamicCast_AsIBPChar_Player1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_K2_GetActor_ReturnValue2 = CallFunc_K2_GetActor_ReturnValue2;
	Parms.K2Node_DynamicCast_AsIBPChar_Player2 = K2Node_DynamicCast_AsIBPChar_Player2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_K2_GetActor_ReturnValue3 = CallFunc_K2_GetActor_ReturnValue3;
	Parms.CallFunc_K2_GetActor_ReturnValue4 = CallFunc_K2_GetActor_ReturnValue4;
	Parms.CallFunc_K2_GetActor_ReturnValue5 = CallFunc_K2_GetActor_ReturnValue5;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActor_ReturnValue6 = CallFunc_K2_GetActor_ReturnValue6;
	Parms.K2Node_Event_Actor1 = K2Node_Event_Actor1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_K2_GetActor_ReturnValue7 = CallFunc_K2_GetActor_ReturnValue7;
	Parms.CallFunc_GetComponentByClass_ReturnValue1 = CallFunc_GetComponentByClass_ReturnValue1;
	Parms.K2Node_Event_ActionEndState = K2Node_Event_ActionEndState;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.K2Node_DynamicCast_AsBPEvent_Hub_Player_Character = K2Node_DynamicCast_AsBPEvent_Hub_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_K2_GetActor_ReturnValue8 = CallFunc_K2_GetActor_ReturnValue8;
	Parms.K2Node_DynamicCast_AsIBPChar_Player3 = K2Node_DynamicCast_AsIBPChar_Player3;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue2 = CallFunc_GetComponentByClass_ReturnValue2;
	Parms.CallFunc_K2_GetActor_ReturnValue9 = CallFunc_K2_GetActor_ReturnValue9;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.K2Node_DynamicCast_AsIBPChar_Player4 = K2Node_DynamicCast_AsIBPChar_Player4;
	Parms.K2Node_DynamicCast_bSuccess5 = K2Node_DynamicCast_bSuccess5;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_GetComponentByClass_ReturnValue3 = CallFunc_GetComponentByClass_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.K2Node_CustomEvent_ControlledMove = K2Node_CustomEvent_ControlledMove;
	Parms.K2Node_CustomEvent_StopSummary = K2Node_CustomEvent_StopSummary;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;

	UObject::ProcessEvent(Func, &Parms);

}

}


