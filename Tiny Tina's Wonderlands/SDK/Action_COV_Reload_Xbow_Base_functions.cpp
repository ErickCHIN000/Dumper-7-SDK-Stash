#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_COV_Reload_Xbow_Base.Action_COV_Reload_Xbow_Base_C
// (None)

class UClass* UAction_COV_Reload_Xbow_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_COV_Reload_Xbow_Base_C");

	return Clss;
}


// Action_COV_Reload_Xbow_Base_C Action_COV_Reload_Xbow_Base.Default__Action_COV_Reload_Xbow_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_COV_Reload_Xbow_Base_C* UAction_COV_Reload_Xbow_Base_C::GetDefaultObj()
{
	static class UAction_COV_Reload_Xbow_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_COV_Reload_Xbow_Base_C*>(UAction_COV_Reload_Xbow_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_COV_Reload_Xbow_Base.Action_COV_Reload_Xbow_Base_C.FX_Wand_Reload
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_COV_Reload_Xbow_Base_C::FX_Wand_Reload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_COV_Reload_Xbow_Base_C", "FX_Wand_Reload");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_COV_Reload_Xbow_Base.Action_COV_Reload_Xbow_Base_C.Notify_ShowWand
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_COV_Reload_Xbow_Base_C::Notify_ShowWand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_COV_Reload_Xbow_Base_C", "Notify_ShowWand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_COV_Reload_Xbow_Base.Action_COV_Reload_Xbow_Base_C.Notify_HideWand
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_COV_Reload_Xbow_Base_C::Notify_HideWand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_COV_Reload_Xbow_Base_C", "Notify_HideWand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_COV_Reload_Xbow_Base.Action_COV_Reload_Xbow_Base_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EGbxActionEndState      ActionEndState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_COV_Reload_Xbow_Base_C::OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_COV_Reload_Xbow_Base_C", "OnEnd");

	Params::UAction_COV_Reload_Xbow_Base_C_OnEnd_Params Parms{};

	Parms.ActionEndState = ActionEndState;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_COV_Reload_Xbow_Base.Action_COV_Reload_Xbow_Base_C.ExecuteUbergraph_Action_COV_Reload_Xbow_Base
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakFirstPersonComponent*    CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxSkeletalMeshComponent*   CallFunc_GetComponentByClass_ReturnValue1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetPlayerWandVisibility_Res                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetPlayerWandVisibility_Res1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGbxActionEndState      K2Node_Event_ActionEndState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_COV_Reload_Xbow_Base_C::ExecuteUbergraph_Action_COV_Reload_Xbow_Base(int32 EntryPoint, class AActor* CallFunc_K2_GetActor_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue1, class UOakFirstPersonComponent* CallFunc_GetComponentByClass_ReturnValue, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue1, class AActor* CallFunc_K2_GetActor_ReturnValue2, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_SetPlayerWandVisibility_Res, bool CallFunc_SetPlayerWandVisibility_Res1, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_COV_Reload_Xbow_Base_C", "ExecuteUbergraph_Action_COV_Reload_Xbow_Base");

	Params::UAction_COV_Reload_Xbow_Base_C_ExecuteUbergraph_Action_COV_Reload_Xbow_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActor_ReturnValue = CallFunc_K2_GetActor_ReturnValue;
	Parms.CallFunc_K2_GetActor_ReturnValue1 = CallFunc_K2_GetActor_ReturnValue1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue1 = CallFunc_GetComponentByClass_ReturnValue1;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue1 = CallFunc_SpawnEmitterAttached_ReturnValue1;
	Parms.CallFunc_K2_GetActor_ReturnValue2 = CallFunc_K2_GetActor_ReturnValue2;
	Parms.K2Node_DynamicCast_AsIBPChar_Player = K2Node_DynamicCast_AsIBPChar_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsIBPChar_Player1 = K2Node_DynamicCast_AsIBPChar_Player1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_SetPlayerWandVisibility_Res = CallFunc_SetPlayerWandVisibility_Res;
	Parms.CallFunc_SetPlayerWandVisibility_Res1 = CallFunc_SetPlayerWandVisibility_Res1;
	Parms.K2Node_Event_ActionEndState = K2Node_Event_ActionEndState;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;

	UObject::ProcessEvent(Func, &Parms);

}

}


