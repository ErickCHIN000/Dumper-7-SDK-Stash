#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C
// (None)

class UClass* UControlledMove_Global_GroundSlam_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlledMove_Global_GroundSlam_Base_C");

	return Clss;
}


// ControlledMove_Global_GroundSlam_Base_C ControlledMove_Global_GroundSlam_Base.Default__ControlledMove_Global_GroundSlam_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UControlledMove_Global_GroundSlam_Base_C* UControlledMove_Global_GroundSlam_Base_C::GetDefaultObj()
{
	static class UControlledMove_Global_GroundSlam_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlledMove_Global_GroundSlam_Base_C*>(UControlledMove_Global_GroundSlam_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C.DoMelee
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UControlledMove_Global_GroundSlam_Base_C::DoMelee()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlledMove_Global_GroundSlam_Base_C", "DoMelee");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C.RandomEncounterTransition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEncountering                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UControlledMove_Global_GroundSlam_Base_C::RandomEncounterTransition(bool IsEncountering)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlledMove_Global_GroundSlam_Base_C", "RandomEncounterTransition");

	Params::UControlledMove_Global_GroundSlam_Base_C_RandomEncounterTransition_Params Parms{};

	Parms.IsEncountering = IsEncountering;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C.ReturnToOverworldTransition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsReturning                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UControlledMove_Global_GroundSlam_Base_C::ReturnToOverworldTransition(bool IsReturning)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlledMove_Global_GroundSlam_Base_C", "ReturnToOverworldTransition");

	Params::UControlledMove_Global_GroundSlam_Base_C_ReturnToOverworldTransition_Params Parms{};

	Parms.IsReturning = IsReturning;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C.UseBanner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UControlledMove_Global_GroundSlam_Base_C::UseBanner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlledMove_Global_GroundSlam_Base_C", "UseBanner");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C.ow_camera_zoom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UControlledMove_Global_GroundSlam_Base_C::Ow_camera_zoom()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlledMove_Global_GroundSlam_Base_C", "ow_camera_zoom");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C.ow_camera_reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UControlledMove_Global_GroundSlam_Base_C::Ow_camera_reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlledMove_Global_GroundSlam_Base_C", "ow_camera_reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C.ow_Player_RE_Stun
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UControlledMove_Global_GroundSlam_Base_C::Ow_Player_RE_Stun()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlledMove_Global_GroundSlam_Base_C", "ow_Player_RE_Stun");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C.MeleeStop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UControlledMove_Global_GroundSlam_Base_C::MeleeStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlledMove_Global_GroundSlam_Base_C", "MeleeStop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C.GroundSlam_End
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Distance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UControlledMove_Global_GroundSlam_Base_C::GroundSlam_End(float Distance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlledMove_Global_GroundSlam_Base_C", "GroundSlam_End");

	Params::UControlledMove_Global_GroundSlam_Base_C_GroundSlam_End_Params Parms{};

	Parms.Distance = Distance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C.OnStart
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              MoveDuration                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UControlledMove_Global_GroundSlam_Base_C::OnStart(float MoveDuration, class AActor* TargetActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlledMove_Global_GroundSlam_Base_C", "OnStart");

	Params::UControlledMove_Global_GroundSlam_Base_C_OnStart_Params Parms{};

	Parms.MoveDuration = MoveDuration;
	Parms.TargetActor = TargetActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C.OnStop
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bInterrupted                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UControlledMove_Global_GroundSlam_Base_C::OnStop(bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlledMove_Global_GroundSlam_Base_C", "OnStop");

	Params::UControlledMove_Global_GroundSlam_Base_C_OnStop_Params Parms{};

	Parms.bInterrupted = bInterrupted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ControlledMove_Global_GroundSlam_Base.ControlledMove_Global_GroundSlam_Base_C.ExecuteUbergraph_ControlledMove_Global_GroundSlam_Base
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsEncountering                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsReturning                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Distance                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_MoveDuration                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_TargetActor                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bInterrupted                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPInterface_PlayerInputActions_C>K2Node_DynamicCast_AsBPInterface_Player_Input_Actions            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue1                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UControlledMove_Global_GroundSlam_Base_C::ExecuteUbergraph_ControlledMove_Global_GroundSlam_Base(int32 EntryPoint, bool K2Node_Event_IsEncountering, bool K2Node_Event_IsReturning, float K2Node_Event_Distance, float K2Node_Event_MoveDuration, class AActor* K2Node_Event_TargetActor, bool K2Node_Event_bInterrupted, TScriptInterface<class IBPInterface_PlayerInputActions_C> K2Node_DynamicCast_AsBPInterface_Player_Input_Actions, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlledMove_Global_GroundSlam_Base_C", "ExecuteUbergraph_ControlledMove_Global_GroundSlam_Base");

	Params::UControlledMove_Global_GroundSlam_Base_C_ExecuteUbergraph_ControlledMove_Global_GroundSlam_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsEncountering = K2Node_Event_IsEncountering;
	Parms.K2Node_Event_IsReturning = K2Node_Event_IsReturning;
	Parms.K2Node_Event_Distance = K2Node_Event_Distance;
	Parms.K2Node_Event_MoveDuration = K2Node_Event_MoveDuration;
	Parms.K2Node_Event_TargetActor = K2Node_Event_TargetActor;
	Parms.K2Node_Event_bInterrupted = K2Node_Event_bInterrupted;
	Parms.K2Node_DynamicCast_AsBPInterface_Player_Input_Actions = K2Node_DynamicCast_AsBPInterface_Player_Input_Actions;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue1 = CallFunc_K2_GetActorLocation_ReturnValue1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;

	UObject::ProcessEvent(Func, &Parms);

}

}


