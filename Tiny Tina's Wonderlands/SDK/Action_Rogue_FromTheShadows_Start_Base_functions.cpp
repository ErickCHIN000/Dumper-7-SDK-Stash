#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_Rogue_FromTheShadows_Start_Base.Action_Rogue_FromTheShadows_Start_Base_C
// (None)

class UClass* UAction_Rogue_FromTheShadows_Start_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_Rogue_FromTheShadows_Start_Base_C");

	return Clss;
}


// Action_Rogue_FromTheShadows_Start_Base_C Action_Rogue_FromTheShadows_Start_Base.Default__Action_Rogue_FromTheShadows_Start_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_Rogue_FromTheShadows_Start_Base_C* UAction_Rogue_FromTheShadows_Start_Base_C::GetDefaultObj()
{
	static class UAction_Rogue_FromTheShadows_Start_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_Rogue_FromTheShadows_Start_Base_C*>(UAction_Rogue_FromTheShadows_Start_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_Rogue_FromTheShadows_Start_Base.Action_Rogue_FromTheShadows_Start_Base_C.FromTheShadows_VFX_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_Rogue_FromTheShadows_Start_Base_C::FromTheShadows_VFX_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Rogue_FromTheShadows_Start_Base_C", "FromTheShadows_VFX_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_Rogue_FromTheShadows_Start_Base.Action_Rogue_FromTheShadows_Start_Base_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Rogue_FromTheShadows_Start_Base_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Rogue_FromTheShadows_Start_Base_C", "OnBegin");

	Params::UAction_Rogue_FromTheShadows_Start_Base_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_Rogue_FromTheShadows_Start_Base.Action_Rogue_FromTheShadows_Start_Base_C.ExecuteUbergraph_Action_Rogue_FromTheShadows_Start_Base
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        K2Node_DynamicCast_AsOak_Character_Player                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOakActionAbility*           CallFunc_GetPrimaryActionAbility_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Rogue_FromTheShadows_C>K2Node_DynamicCast_AsBPI_Rogue_from_the_Shadows                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StartStealth_Res                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakFirstPersonComponent*    CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxSkeletalMeshComponent*   CallFunc_GetComponentByClass_ReturnValue1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Rogue_FromTheShadows_Start_Base_C::ExecuteUbergraph_Action_Rogue_FromTheShadows_Start_Base(int32 EntryPoint, class AActor* CallFunc_K2_GetActor_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_K2_GetActor_ReturnValue1, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess1, class UOakActionAbility* CallFunc_GetPrimaryActionAbility_ReturnValue, class AActor* K2Node_Event_Actor, TScriptInterface<class IBPI_Rogue_FromTheShadows_C> K2Node_DynamicCast_AsBPI_Rogue_from_the_Shadows, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_StartStealth_Res, class AActor* CallFunc_K2_GetActor_ReturnValue2, class UOakFirstPersonComponent* CallFunc_GetComponentByClass_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue3, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Rogue_FromTheShadows_Start_Base_C", "ExecuteUbergraph_Action_Rogue_FromTheShadows_Start_Base");

	Params::UAction_Rogue_FromTheShadows_Start_Base_C_ExecuteUbergraph_Action_Rogue_FromTheShadows_Start_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActor_ReturnValue = CallFunc_K2_GetActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsIBPChar_Player = K2Node_DynamicCast_AsIBPChar_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetActor_ReturnValue1 = CallFunc_K2_GetActor_ReturnValue1;
	Parms.K2Node_DynamicCast_AsOak_Character_Player = K2Node_DynamicCast_AsOak_Character_Player;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_GetPrimaryActionAbility_ReturnValue = CallFunc_GetPrimaryActionAbility_ReturnValue;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.K2Node_DynamicCast_AsBPI_Rogue_from_the_Shadows = K2Node_DynamicCast_AsBPI_Rogue_from_the_Shadows;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_StartStealth_Res = CallFunc_StartStealth_Res;
	Parms.CallFunc_K2_GetActor_ReturnValue2 = CallFunc_K2_GetActor_ReturnValue2;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_K2_GetActor_ReturnValue3 = CallFunc_K2_GetActor_ReturnValue3;
	Parms.CallFunc_GetComponentByClass_ReturnValue1 = CallFunc_GetComponentByClass_ReturnValue1;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue1 = CallFunc_SpawnEmitterAttached_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}


