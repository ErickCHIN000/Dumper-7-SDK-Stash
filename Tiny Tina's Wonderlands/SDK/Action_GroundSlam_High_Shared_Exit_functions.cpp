#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_GroundSlam_High_Shared_Exit.Action_GroundSlam_High_Shared_Exit_C
// (None)

class UClass* UAction_GroundSlam_High_Shared_Exit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_GroundSlam_High_Shared_Exit_C");

	return Clss;
}


// Action_GroundSlam_High_Shared_Exit_C Action_GroundSlam_High_Shared_Exit.Default__Action_GroundSlam_High_Shared_Exit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_GroundSlam_High_Shared_Exit_C* UAction_GroundSlam_High_Shared_Exit_C::GetDefaultObj()
{
	static class UAction_GroundSlam_High_Shared_Exit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_GroundSlam_High_Shared_Exit_C*>(UAction_GroundSlam_High_Shared_Exit_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_GroundSlam_High_Shared_Exit.Action_GroundSlam_High_Shared_Exit_C.OnBeginBringUpWeapon
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_GroundSlam_High_Shared_Exit_C::OnBeginBringUpWeapon(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_GroundSlam_High_Shared_Exit_C", "OnBeginBringUpWeapon");

	Params::UAction_GroundSlam_High_Shared_Exit_C_OnBeginBringUpWeapon_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_GroundSlam_High_Shared_Exit.Action_GroundSlam_High_Shared_Exit_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EGbxActionEndState      ActionEndState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_GroundSlam_High_Shared_Exit_C::OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_GroundSlam_High_Shared_Exit_C", "OnEnd");

	Params::UAction_GroundSlam_High_Shared_Exit_C_OnEnd_Params Parms{};

	Parms.ActionEndState = ActionEndState;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_GroundSlam_High_Shared_Exit.Action_GroundSlam_High_Shared_Exit_C.PlayVFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_GroundSlam_High_Shared_Exit_C::PlayVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_GroundSlam_High_Shared_Exit_C", "PlayVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_GroundSlam_High_Shared_Exit.Action_GroundSlam_High_Shared_Exit_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_GroundSlam_High_Shared_Exit_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_GroundSlam_High_Shared_Exit_C", "OnBegin");

	Params::UAction_GroundSlam_High_Shared_Exit_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_GroundSlam_High_Shared_Exit.Action_GroundSlam_High_Shared_Exit_C.ExecuteUbergraph_Action_GroundSlam_High_Shared_Exit
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGbxActionEndState      K2Node_Event_ActionEndState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        K2Node_DynamicCast_AsOak_Character_Player                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystem*             CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_Actor2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             CallFunc_Map_Find_Value1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_GroundSlam_High_Shared_Exit_C::ExecuteUbergraph_Action_GroundSlam_High_Shared_Exit(int32 EntryPoint, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor1, class AActor* K2Node_Event_Actor, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, class UParticleSystem* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class AActor* K2Node_Event_Actor2, class UParticleSystem* CallFunc_Map_Find_Value1, bool CallFunc_Map_Find_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_GroundSlam_High_Shared_Exit_C", "ExecuteUbergraph_Action_GroundSlam_High_Shared_Exit");

	Params::UAction_GroundSlam_High_Shared_Exit_C_ExecuteUbergraph_Action_GroundSlam_High_Shared_Exit_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ActionEndState = K2Node_Event_ActionEndState;
	Parms.K2Node_Event_Actor1 = K2Node_Event_Actor1;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.K2Node_DynamicCast_AsOak_Character_Player = K2Node_DynamicCast_AsOak_Character_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_Event_Actor2 = K2Node_Event_Actor2;
	Parms.CallFunc_Map_Find_Value1 = CallFunc_Map_Find_Value1;
	Parms.CallFunc_Map_Find_ReturnValue1 = CallFunc_Map_Find_ReturnValue1;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


