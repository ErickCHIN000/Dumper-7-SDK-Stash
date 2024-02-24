#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_SpellThrow_Wand.Action_SpellThrow_Wand_C
// (None)

class UClass* UAction_SpellThrow_Wand_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_SpellThrow_Wand_C");

	return Clss;
}


// Action_SpellThrow_Wand_C Action_SpellThrow_Wand.Default__Action_SpellThrow_Wand_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_SpellThrow_Wand_C* UAction_SpellThrow_Wand_C::GetDefaultObj()
{
	static class UAction_SpellThrow_Wand_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_SpellThrow_Wand_C*>(UAction_SpellThrow_Wand_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_SpellThrow_Wand.Action_SpellThrow_Wand_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_SpellThrow_Wand_C::OnServerBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_SpellThrow_Wand_C", "OnServerBegin");

	Params::UAction_SpellThrow_Wand_C_OnServerBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_SpellThrow_Wand.Action_SpellThrow_Wand_C.OnServerEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EGbxActionEndState      ActionEndState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_SpellThrow_Wand_C::OnServerEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_SpellThrow_Wand_C", "OnServerEnd");

	Params::UAction_SpellThrow_Wand_C_OnServerEnd_Params Parms{};

	Parms.ActionEndState = ActionEndState;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_SpellThrow_Wand.Action_SpellThrow_Wand_C.AN_ShowWand
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_SpellThrow_Wand_C::AN_ShowWand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_SpellThrow_Wand_C", "AN_ShowWand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_SpellThrow_Wand.Action_SpellThrow_Wand_C.AN_HideWand
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_SpellThrow_Wand_C::AN_HideWand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_SpellThrow_Wand_C", "AN_HideWand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_SpellThrow_Wand.Action_SpellThrow_Wand_C.OnBeginBringUpWeapon
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_SpellThrow_Wand_C::OnBeginBringUpWeapon(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_SpellThrow_Wand_C", "OnBeginBringUpWeapon");

	Params::UAction_SpellThrow_Wand_C_OnBeginBringUpWeapon_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_SpellThrow_Wand.Action_SpellThrow_Wand_C.ExecuteUbergraph_Action_SpellThrow_Wand
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGbxActionEndState      K2Node_Event_ActionEndState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetPlayerWandVisibility_Res                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetPlayerWandVisibility_Res1                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_SpellThrow_Wand_C::ExecuteUbergraph_Action_SpellThrow_Wand(int32 EntryPoint, class AActor* K2Node_Event_Actor2, class AActor* CallFunc_K2_GetActor_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_K2_GetActor_ReturnValue1, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor1, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AActor* K2Node_Event_Actor, bool CallFunc_SetPlayerWandVisibility_Res, bool CallFunc_SetPlayerWandVisibility_Res1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_SpellThrow_Wand_C", "ExecuteUbergraph_Action_SpellThrow_Wand");

	Params::UAction_SpellThrow_Wand_C_ExecuteUbergraph_Action_SpellThrow_Wand_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Actor2 = K2Node_Event_Actor2;
	Parms.CallFunc_K2_GetActor_ReturnValue = CallFunc_K2_GetActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsIBPChar_Player = K2Node_DynamicCast_AsIBPChar_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetActor_ReturnValue1 = CallFunc_K2_GetActor_ReturnValue1;
	Parms.K2Node_Event_ActionEndState = K2Node_Event_ActionEndState;
	Parms.K2Node_Event_Actor1 = K2Node_Event_Actor1;
	Parms.K2Node_DynamicCast_AsIBPChar_Player1 = K2Node_DynamicCast_AsIBPChar_Player1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.CallFunc_SetPlayerWandVisibility_Res = CallFunc_SetPlayerWandVisibility_Res;
	Parms.CallFunc_SetPlayerWandVisibility_Res1 = CallFunc_SetPlayerWandVisibility_Res1;

	UObject::ProcessEvent(Func, &Parms);

}

}


