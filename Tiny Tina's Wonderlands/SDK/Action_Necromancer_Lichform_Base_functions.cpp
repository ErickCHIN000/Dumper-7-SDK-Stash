#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_Necromancer_Lichform_Base.Action_Necromancer_Lichform_Base_C
// (None)

class UClass* UAction_Necromancer_Lichform_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_Necromancer_Lichform_Base_C");

	return Clss;
}


// Action_Necromancer_Lichform_Base_C Action_Necromancer_Lichform_Base.Default__Action_Necromancer_Lichform_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_Necromancer_Lichform_Base_C* UAction_Necromancer_Lichform_Base_C::GetDefaultObj()
{
	static class UAction_Necromancer_Lichform_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_Necromancer_Lichform_Base_C*>(UAction_Necromancer_Lichform_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_Necromancer_Lichform_Base.Action_Necromancer_Lichform_Base_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Necromancer_Lichform_Base_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Necromancer_Lichform_Base_C", "OnBegin");

	Params::UAction_Necromancer_Lichform_Base_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_Necromancer_Lichform_Base.Action_Necromancer_Lichform_Base_C.PlayFeedback
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_Necromancer_Lichform_Base_C::PlayFeedback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Necromancer_Lichform_Base_C", "PlayFeedback");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_Necromancer_Lichform_Base.Action_Necromancer_Lichform_Base_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EGbxActionEndState      ActionEndState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Necromancer_Lichform_Base_C::OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Necromancer_Lichform_Base_C", "OnEnd");

	Params::UAction_Necromancer_Lichform_Base_C_OnEnd_Params Parms{};

	Parms.ActionEndState = ActionEndState;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_Necromancer_Lichform_Base.Action_Necromancer_Lichform_Base_C.ExecuteUbergraph_Action_Necromancer_Lichform_Base
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_K2_GetObjectRegisterValue_OutObject                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_GetObjectRegisterValue_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UActionSkill_Necro_LichForm_C*K2Node_DynamicCast_AsAction_Skill_Necro_Lich_Form                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_Actor1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakFirstPersonComponent*    CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxSkeletalMeshComponent*   CallFunc_GetComponentByClass_ReturnValue1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGbxActionEndState      K2Node_Event_ActionEndState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetAssociatedPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Necromancer_Lichform_Base_C::ExecuteUbergraph_Action_Necromancer_Lichform_Base(int32 EntryPoint, class UObject* CallFunc_K2_GetObjectRegisterValue_OutObject, bool CallFunc_K2_GetObjectRegisterValue_ReturnValue, class UActionSkill_Necro_LichForm_C* K2Node_DynamicCast_AsAction_Skill_Necro_Lich_Form, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_Actor1, class AActor* CallFunc_K2_GetActor_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue1, class UOakFirstPersonComponent* CallFunc_GetComponentByClass_ReturnValue, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue1, class AActor* CallFunc_K2_GetActor_ReturnValue2, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Necromancer_Lichform_Base_C", "ExecuteUbergraph_Action_Necromancer_Lichform_Base");

	Params::UAction_Necromancer_Lichform_Base_C_ExecuteUbergraph_Action_Necromancer_Lichform_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetObjectRegisterValue_OutObject = CallFunc_K2_GetObjectRegisterValue_OutObject;
	Parms.CallFunc_K2_GetObjectRegisterValue_ReturnValue = CallFunc_K2_GetObjectRegisterValue_ReturnValue;
	Parms.K2Node_DynamicCast_AsAction_Skill_Necro_Lich_Form = K2Node_DynamicCast_AsAction_Skill_Necro_Lich_Form;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_Actor1 = K2Node_Event_Actor1;
	Parms.CallFunc_K2_GetActor_ReturnValue = CallFunc_K2_GetActor_ReturnValue;
	Parms.CallFunc_K2_GetActor_ReturnValue1 = CallFunc_K2_GetActor_ReturnValue1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue1 = CallFunc_GetComponentByClass_ReturnValue1;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue1 = CallFunc_SpawnEmitterAttached_ReturnValue1;
	Parms.CallFunc_K2_GetActor_ReturnValue2 = CallFunc_K2_GetActor_ReturnValue2;
	Parms.K2Node_Event_ActionEndState = K2Node_Event_ActionEndState;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.CallFunc_GetAssociatedPlayerController_ReturnValue = CallFunc_GetAssociatedPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


