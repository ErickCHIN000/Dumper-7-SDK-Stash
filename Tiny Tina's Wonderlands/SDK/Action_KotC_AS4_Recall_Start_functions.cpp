#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_KotC_AS4_Recall_Start.Action_KotC_AS4_Recall_Start_C
// (None)

class UClass* UAction_KotC_AS4_Recall_Start_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_KotC_AS4_Recall_Start_C");

	return Clss;
}


// Action_KotC_AS4_Recall_Start_C Action_KotC_AS4_Recall_Start.Default__Action_KotC_AS4_Recall_Start_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_KotC_AS4_Recall_Start_C* UAction_KotC_AS4_Recall_Start_C::GetDefaultObj()
{
	static class UAction_KotC_AS4_Recall_Start_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_KotC_AS4_Recall_Start_C*>(UAction_KotC_AS4_Recall_Start_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_KotC_AS4_Recall_Start.Action_KotC_AS4_Recall_Start_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_KotC_AS4_Recall_Start_C::OnServerBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_KotC_AS4_Recall_Start_C", "OnServerBegin");

	Params::UAction_KotC_AS4_Recall_Start_C_OnServerBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_KotC_AS4_Recall_Start.Action_KotC_AS4_Recall_Start_C.ExecuteUbergraph_Action_KotC_AS4_Recall_Start
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetHammerTransform3rd_Res                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxAbility*                 CallFunc_GetClassFeat_Res                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue1                              (IsPlainOldData, NoDestructor)
// TScriptInterface<class IIFeat_KnightOfTheClaw_C>K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetHammerTransform1st_Res                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HammerOfTheDragonGodsSetRecallFXState_Res               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetHammerProjectileReference_Hammer                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIProj_KotC_AS4_Hammer_C>K2Node_DynamicCast_AsI_Proj_Kot_C_AS4_Hammer                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_KnightOfTheClawSetHammerState_Res                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_KotC_AS4_Recall_Start_C::ExecuteUbergraph_Action_KotC_AS4_Recall_Start(int32 EntryPoint, class AActor* CallFunc_K2_GetActor_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetHammerTransform3rd_Res, class UGbxAbility* CallFunc_GetClassFeat_Res, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, TScriptInterface<class IIFeat_KnightOfTheClaw_C> K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_SetHammerTransform1st_Res, bool CallFunc_HammerOfTheDragonGodsSetRecallFXState_Res, class AActor* K2Node_Event_Actor, class AActor* CallFunc_GetHammerProjectileReference_Hammer, class AActor* CallFunc_K2_GetActor_ReturnValue1, TScriptInterface<class IIProj_KotC_AS4_Hammer_C> K2Node_DynamicCast_AsI_Proj_Kot_C_AS4_Hammer, bool K2Node_DynamicCast_bSuccess2, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player1, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_KnightOfTheClawSetHammerState_Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_KotC_AS4_Recall_Start_C", "ExecuteUbergraph_Action_KotC_AS4_Recall_Start");

	Params::UAction_KotC_AS4_Recall_Start_C_ExecuteUbergraph_Action_KotC_AS4_Recall_Start_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActor_ReturnValue = CallFunc_K2_GetActor_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.K2Node_DynamicCast_AsIBPChar_Player = K2Node_DynamicCast_AsIBPChar_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SetHammerTransform3rd_Res = CallFunc_SetHammerTransform3rd_Res;
	Parms.CallFunc_GetClassFeat_Res = CallFunc_GetClassFeat_Res;
	Parms.CallFunc_MakeTransform_ReturnValue1 = CallFunc_MakeTransform_ReturnValue1;
	Parms.K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw = K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_SetHammerTransform1st_Res = CallFunc_SetHammerTransform1st_Res;
	Parms.CallFunc_HammerOfTheDragonGodsSetRecallFXState_Res = CallFunc_HammerOfTheDragonGodsSetRecallFXState_Res;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.CallFunc_GetHammerProjectileReference_Hammer = CallFunc_GetHammerProjectileReference_Hammer;
	Parms.CallFunc_K2_GetActor_ReturnValue1 = CallFunc_K2_GetActor_ReturnValue1;
	Parms.K2Node_DynamicCast_AsI_Proj_Kot_C_AS4_Hammer = K2Node_DynamicCast_AsI_Proj_Kot_C_AS4_Hammer;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_DynamicCast_AsIBPChar_Player1 = K2Node_DynamicCast_AsIBPChar_Player1;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_KnightOfTheClawSetHammerState_Res = CallFunc_KnightOfTheClawSetHammerState_Res;

	UObject::ProcessEvent(Func, &Parms);

}

}


