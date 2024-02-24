#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_DragonCompanion_Interact_Parent.Action_DragonCompanion_Interact_Parent_C
// (None)

class UClass* UAction_DragonCompanion_Interact_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_DragonCompanion_Interact_Parent_C");

	return Clss;
}


// Action_DragonCompanion_Interact_Parent_C Action_DragonCompanion_Interact_Parent.Default__Action_DragonCompanion_Interact_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_DragonCompanion_Interact_Parent_C* UAction_DragonCompanion_Interact_Parent_C::GetDefaultObj()
{
	static class UAction_DragonCompanion_Interact_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_DragonCompanion_Interact_Parent_C*>(UAction_DragonCompanion_Interact_Parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_DragonCompanion_Interact_Parent.Action_DragonCompanion_Interact_Parent_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_DragonCompanion_Interact_Parent_C::OnServerBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_DragonCompanion_Interact_Parent_C", "OnServerBegin");

	Params::UAction_DragonCompanion_Interact_Parent_C_OnServerBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_DragonCompanion_Interact_Parent.Action_DragonCompanion_Interact_Parent_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EGbxActionEndState      ActionEndState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_DragonCompanion_Interact_Parent_C::OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_DragonCompanion_Interact_Parent_C", "OnEnd");

	Params::UAction_DragonCompanion_Interact_Parent_C_OnEnd_Params Parms{};

	Parms.ActionEndState = ActionEndState;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_DragonCompanion_Interact_Parent.Action_DragonCompanion_Interact_Parent_C.ExecuteUbergraph_Action_DragonCompanion_Interact_Parent
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGbxActionEndState      K2Node_Event_ActionEndState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIDrone_KnightOfTheClaw_DragonPet_C>K2Node_DynamicCast_AsIDrone_Knight_Of_the_Claw_Dragon_Pet        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_Actor1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DragonCompanionPauseAttacking_Res                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIDrone_KnightOfTheClaw_DragonPet_C>K2Node_DynamicCast_AsIDrone_Knight_Of_the_Claw_Dragon_Pet1       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DragonCompanionPauseAttacking_Res1                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_DragonCompanion_Interact_Parent_C::ExecuteUbergraph_Action_DragonCompanion_Interact_Parent(int32 EntryPoint, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor, TScriptInterface<class IIDrone_KnightOfTheClaw_DragonPet_C> K2Node_DynamicCast_AsIDrone_Knight_Of_the_Claw_Dragon_Pet, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_Actor1, bool CallFunc_DragonCompanionPauseAttacking_Res, TScriptInterface<class IIDrone_KnightOfTheClaw_DragonPet_C> K2Node_DynamicCast_AsIDrone_Knight_Of_the_Claw_Dragon_Pet1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_DragonCompanionPauseAttacking_Res1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_DragonCompanion_Interact_Parent_C", "ExecuteUbergraph_Action_DragonCompanion_Interact_Parent");

	Params::UAction_DragonCompanion_Interact_Parent_C_ExecuteUbergraph_Action_DragonCompanion_Interact_Parent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ActionEndState = K2Node_Event_ActionEndState;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.K2Node_DynamicCast_AsIDrone_Knight_Of_the_Claw_Dragon_Pet = K2Node_DynamicCast_AsIDrone_Knight_Of_the_Claw_Dragon_Pet;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_Actor1 = K2Node_Event_Actor1;
	Parms.CallFunc_DragonCompanionPauseAttacking_Res = CallFunc_DragonCompanionPauseAttacking_Res;
	Parms.K2Node_DynamicCast_AsIDrone_Knight_Of_the_Claw_Dragon_Pet1 = K2Node_DynamicCast_AsIDrone_Knight_Of_the_Claw_Dragon_Pet1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_DragonCompanionPauseAttacking_Res1 = CallFunc_DragonCompanionPauseAttacking_Res1;

	UObject::ProcessEvent(Func, &Parms);

}

}


