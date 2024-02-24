#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_GroundSlam_High_Exit.Action_GroundSlam_High_Exit_C
// (None)

class UClass* UAction_GroundSlam_High_Exit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_GroundSlam_High_Exit_C");

	return Clss;
}


// Action_GroundSlam_High_Exit_C Action_GroundSlam_High_Exit.Default__Action_GroundSlam_High_Exit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_GroundSlam_High_Exit_C* UAction_GroundSlam_High_Exit_C::GetDefaultObj()
{
	static class UAction_GroundSlam_High_Exit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_GroundSlam_High_Exit_C*>(UAction_GroundSlam_High_Exit_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_GroundSlam_High_Exit.Action_GroundSlam_High_Exit_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EGbxActionEndState      ActionEndState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_GroundSlam_High_Exit_C::OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_GroundSlam_High_Exit_C", "OnEnd");

	Params::UAction_GroundSlam_High_Exit_C_OnEnd_Params Parms{};

	Parms.ActionEndState = ActionEndState;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_GroundSlam_High_Exit.Action_GroundSlam_High_Exit_C.OnBeginBringUpWeapon
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_GroundSlam_High_Exit_C::OnBeginBringUpWeapon(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_GroundSlam_High_Exit_C", "OnBeginBringUpWeapon");

	Params::UAction_GroundSlam_High_Exit_C_OnBeginBringUpWeapon_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_GroundSlam_High_Exit.Action_GroundSlam_High_Exit_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_GroundSlam_High_Exit_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_GroundSlam_High_Exit_C", "OnBegin");

	Params::UAction_GroundSlam_High_Exit_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_GroundSlam_High_Exit.Action_GroundSlam_High_Exit_C.UnlockInput
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_GroundSlam_High_Exit_C::UnlockInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_GroundSlam_High_Exit_C", "UnlockInput");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_GroundSlam_High_Exit.Action_GroundSlam_High_Exit_C.ExecuteUbergraph_Action_GroundSlam_High_Exit
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGbxActionEndState      K2Node_Event_ActionEndState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_Actor1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetAssociatedPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_GroundSlam_High_Exit_C::ExecuteUbergraph_Action_GroundSlam_High_Exit(int32 EntryPoint, class AActor* CallFunc_K2_GetActor_ReturnValue, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor2, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_Actor1, class AActor* K2Node_Event_Actor, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_GroundSlam_High_Exit_C", "ExecuteUbergraph_Action_GroundSlam_High_Exit");

	Params::UAction_GroundSlam_High_Exit_C_ExecuteUbergraph_Action_GroundSlam_High_Exit_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActor_ReturnValue = CallFunc_K2_GetActor_ReturnValue;
	Parms.K2Node_Event_ActionEndState = K2Node_Event_ActionEndState;
	Parms.K2Node_Event_Actor2 = K2Node_Event_Actor2;
	Parms.K2Node_DynamicCast_AsIBPChar_Player = K2Node_DynamicCast_AsIBPChar_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_Actor1 = K2Node_Event_Actor1;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.CallFunc_GetAssociatedPlayerController_ReturnValue = CallFunc_GetAssociatedPlayerController_ReturnValue;
	Parms.CallFunc_K2_GetActor_ReturnValue1 = CallFunc_K2_GetActor_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}


