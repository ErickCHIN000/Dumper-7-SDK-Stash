#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_Barbarian_Whirlwind.Action_Barbarian_Whirlwind_C
// (None)

class UClass* UAction_Barbarian_Whirlwind_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_Barbarian_Whirlwind_C");

	return Clss;
}


// Action_Barbarian_Whirlwind_C Action_Barbarian_Whirlwind.Default__Action_Barbarian_Whirlwind_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_Barbarian_Whirlwind_C* UAction_Barbarian_Whirlwind_C::GetDefaultObj()
{
	static class UAction_Barbarian_Whirlwind_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_Barbarian_Whirlwind_C*>(UAction_Barbarian_Whirlwind_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_Barbarian_Whirlwind.Action_Barbarian_Whirlwind_C.SetActionSkillCameraMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ModeName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetAssociatedPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Barbarian_Whirlwind_C::SetActionSkillCameraMode(class FName ModeName, bool Enabled, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Barbarian_Whirlwind_C", "SetActionSkillCameraMode");

	Params::UAction_Barbarian_Whirlwind_C_SetActionSkillCameraMode_Params Parms{};

	Parms.ModeName = ModeName;
	Parms.Enabled = Enabled;
	Parms.CallFunc_GetAssociatedPlayerController_ReturnValue = CallFunc_GetAssociatedPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_Barbarian_Whirlwind.Action_Barbarian_Whirlwind_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Barbarian_Whirlwind_C::OnServerBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Barbarian_Whirlwind_C", "OnServerBegin");

	Params::UAction_Barbarian_Whirlwind_C_OnServerBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_Barbarian_Whirlwind.Action_Barbarian_Whirlwind_C.WindUpCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_Barbarian_Whirlwind_C::WindUpCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Barbarian_Whirlwind_C", "WindUpCompleted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_Barbarian_Whirlwind.Action_Barbarian_Whirlwind_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Barbarian_Whirlwind_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Barbarian_Whirlwind_C", "OnBegin");

	Params::UAction_Barbarian_Whirlwind_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_Barbarian_Whirlwind.Action_Barbarian_Whirlwind_C.AN_WhirlwindEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_Barbarian_Whirlwind_C::AN_WhirlwindEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Barbarian_Whirlwind_C", "AN_WhirlwindEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_Barbarian_Whirlwind.Action_Barbarian_Whirlwind_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EGbxActionEndState      ActionEndState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Barbarian_Whirlwind_C::OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Barbarian_Whirlwind_C", "OnEnd");

	Params::UAction_Barbarian_Whirlwind_C_OnEnd_Params Parms{};

	Parms.ActionEndState = ActionEndState;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_Barbarian_Whirlwind.Action_Barbarian_Whirlwind_C.AN_HideWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_Barbarian_Whirlwind_C::AN_HideWeapon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Barbarian_Whirlwind_C", "AN_HideWeapon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_Barbarian_Whirlwind.Action_Barbarian_Whirlwind_C.OnBeginBringUpWeapon
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Barbarian_Whirlwind_C::OnBeginBringUpWeapon(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Barbarian_Whirlwind_C", "OnBeginBringUpWeapon");

	Params::UAction_Barbarian_Whirlwind_C_OnBeginBringUpWeapon_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_Barbarian_Whirlwind.Action_Barbarian_Whirlwind_C.AN_StartActionSkillTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_Barbarian_Whirlwind_C::AN_StartActionSkillTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Barbarian_Whirlwind_C", "AN_StartActionSkillTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_Barbarian_Whirlwind.Action_Barbarian_Whirlwind_C.ExecuteUbergraph_Action_Barbarian_Whirlwind
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_Actor3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetAssociatedPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGbxActionEndState      K2Node_Event_ActionEndState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player3                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UGbxAbility*                 CallFunc_FindAbility_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class U_ActionSkill_Parent_C*      K2Node_DynamicCast_As_Action_Skill_Parent                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player4                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess5                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UnpauseActionSkillDuration_Res                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FGbxActionRegister>  Temp_struct_Variable1                                            (ConstParm, ZeroConstructor, ReferenceParm)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Barbarian_Whirlwind_C::ExecuteUbergraph_Action_Barbarian_Whirlwind(int32 EntryPoint, class AActor* CallFunc_K2_GetActor_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_Actor3, class AActor* CallFunc_K2_GetActor_ReturnValue1, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, class AActor* K2Node_Event_Actor2, class AActor* CallFunc_K2_GetActor_ReturnValue2, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player1, bool K2Node_DynamicCast_bSuccess1, class AActor* CallFunc_K2_GetActor_ReturnValue3, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor1, class AActor* K2Node_Event_Actor, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player2, bool K2Node_DynamicCast_bSuccess2, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player3, bool K2Node_DynamicCast_bSuccess3, const struct FHitResult& Temp_struct_Variable, class UGbxAbility* CallFunc_FindAbility_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue4, class U_ActionSkill_Parent_C* K2Node_DynamicCast_As_Action_Skill_Parent, bool K2Node_DynamicCast_bSuccess4, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player4, bool K2Node_DynamicCast_bSuccess5, bool CallFunc_UnpauseActionSkillDuration_Res, TArray<struct FGbxActionRegister>& Temp_struct_Variable1, class UGbxAction* CallFunc_K2Play_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Barbarian_Whirlwind_C", "ExecuteUbergraph_Action_Barbarian_Whirlwind");

	Params::UAction_Barbarian_Whirlwind_C_ExecuteUbergraph_Action_Barbarian_Whirlwind_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActor_ReturnValue = CallFunc_K2_GetActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsIBPChar_Player = K2Node_DynamicCast_AsIBPChar_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_Actor3 = K2Node_Event_Actor3;
	Parms.CallFunc_K2_GetActor_ReturnValue1 = CallFunc_K2_GetActor_ReturnValue1;
	Parms.CallFunc_GetAssociatedPlayerController_ReturnValue = CallFunc_GetAssociatedPlayerController_ReturnValue;
	Parms.K2Node_Event_Actor2 = K2Node_Event_Actor2;
	Parms.CallFunc_K2_GetActor_ReturnValue2 = CallFunc_K2_GetActor_ReturnValue2;
	Parms.K2Node_DynamicCast_AsIBPChar_Player1 = K2Node_DynamicCast_AsIBPChar_Player1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_K2_GetActor_ReturnValue3 = CallFunc_K2_GetActor_ReturnValue3;
	Parms.K2Node_Event_ActionEndState = K2Node_Event_ActionEndState;
	Parms.K2Node_Event_Actor1 = K2Node_Event_Actor1;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.K2Node_DynamicCast_AsIBPChar_Player2 = K2Node_DynamicCast_AsIBPChar_Player2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_DynamicCast_AsIBPChar_Player3 = K2Node_DynamicCast_AsIBPChar_Player3;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_FindAbility_ReturnValue = CallFunc_FindAbility_ReturnValue;
	Parms.CallFunc_K2_GetActor_ReturnValue4 = CallFunc_K2_GetActor_ReturnValue4;
	Parms.K2Node_DynamicCast_As_Action_Skill_Parent = K2Node_DynamicCast_As_Action_Skill_Parent;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.K2Node_DynamicCast_AsIBPChar_Player4 = K2Node_DynamicCast_AsIBPChar_Player4;
	Parms.K2Node_DynamicCast_bSuccess5 = K2Node_DynamicCast_bSuccess5;
	Parms.CallFunc_UnpauseActionSkillDuration_Res = CallFunc_UnpauseActionSkillDuration_Res;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.CallFunc_K2Play_ReturnValue = CallFunc_K2Play_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


