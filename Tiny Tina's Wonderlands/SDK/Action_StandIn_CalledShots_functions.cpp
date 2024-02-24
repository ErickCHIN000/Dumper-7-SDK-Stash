#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_StandIn_CalledShots.Action_StandIn_CalledShots_C
// (None)

class UClass* UAction_StandIn_CalledShots_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_StandIn_CalledShots_C");

	return Clss;
}


// Action_StandIn_CalledShots_C Action_StandIn_CalledShots.Default__Action_StandIn_CalledShots_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_StandIn_CalledShots_C* UAction_StandIn_CalledShots_C::GetDefaultObj()
{
	static class UAction_StandIn_CalledShots_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_StandIn_CalledShots_C*>(UAction_StandIn_CalledShots_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_StandIn_CalledShots.Action_StandIn_CalledShots_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_StandIn_CalledShots_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_StandIn_CalledShots_C", "OnBegin");

	Params::UAction_StandIn_CalledShots_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_StandIn_CalledShots.Action_StandIn_CalledShots_C.PlayBowAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_StandIn_CalledShots_C::PlayBowAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_StandIn_CalledShots_C", "PlayBowAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_StandIn_CalledShots.Action_StandIn_CalledShots_C.RemoveAuxActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_StandIn_CalledShots_C::RemoveAuxActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_StandIn_CalledShots_C", "RemoveAuxActor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_StandIn_CalledShots.Action_StandIn_CalledShots_C.AssignAuxActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_StandIn_CalledShots_C::AssignAuxActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_StandIn_CalledShots_C", "AssignAuxActor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_StandIn_CalledShots.Action_StandIn_CalledShots_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EGbxActionEndState      ActionEndState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_StandIn_CalledShots_C::OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_StandIn_CalledShots_C", "OnEnd");

	Params::UAction_StandIn_CalledShots_C_OnEnd_Params Parms{};

	Parms.ActionEndState = ActionEndState;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_StandIn_CalledShots.Action_StandIn_CalledShots_C.ExecuteUbergraph_Action_StandIn_CalledShots
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_PlayerStandin_C>K2Node_DynamicCast_AsBPI_Player_Standin                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_GetAttachedActors_OutActors                             (ZeroConstructor, ReferenceParm)
// enum class EGbxActionEndState      K2Node_Event_ActionEndState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAuxActor_RangerBow_C*       K2Node_DynamicCast_AsAux_Actor_Ranger_Bow                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABPChar_StandIn_Player_SkillScreen_C*K2Node_DynamicCast_AsBPChar_Stand_in_Player_Skill_Screen         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_PlayerStandin_C>K2Node_DynamicCast_AsBPI_Player_Standin1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_StandIn_CalledShots_C::ExecuteUbergraph_Action_StandIn_CalledShots(int32 EntryPoint, TScriptInterface<class IBPI_PlayerStandin_C> K2Node_DynamicCast_AsBPI_Player_Standin, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* K2Node_Event_Actor1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AAuxActor_RangerBow_C* K2Node_DynamicCast_AsAux_Actor_Ranger_Bow, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, class ABPChar_StandIn_Player_SkillScreen_C* K2Node_DynamicCast_AsBPChar_Stand_in_Player_Skill_Screen, bool K2Node_DynamicCast_bSuccess2, TScriptInterface<class IBPI_PlayerStandin_C> K2Node_DynamicCast_AsBPI_Player_Standin1, bool K2Node_DynamicCast_bSuccess3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_StandIn_CalledShots_C", "ExecuteUbergraph_Action_StandIn_CalledShots");

	Params::UAction_StandIn_CalledShots_C_ExecuteUbergraph_Action_StandIn_CalledShots_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsBPI_Player_Standin = K2Node_DynamicCast_AsBPI_Player_Standin;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_Actor1 = K2Node_Event_Actor1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetAttachedActors_OutActors = CallFunc_GetAttachedActors_OutActors;
	Parms.K2Node_Event_ActionEndState = K2Node_Event_ActionEndState;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsAux_Actor_Ranger_Bow = K2Node_DynamicCast_AsAux_Actor_Ranger_Bow;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.K2Node_DynamicCast_AsBPChar_Stand_in_Player_Skill_Screen = K2Node_DynamicCast_AsBPChar_Stand_in_Player_Skill_Screen;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_DynamicCast_AsBPI_Player_Standin1 = K2Node_DynamicCast_AsBPI_Player_Standin1;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;

	UObject::ProcessEvent(Func, &Parms);

}

}


