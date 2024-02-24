#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraBehavior_DownState.CameraBehavior_DownState_C
// (None)

class UClass* UCameraBehavior_DownState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraBehavior_DownState_C");

	return Clss;
}


// CameraBehavior_DownState_C CameraBehavior_DownState.Default__CameraBehavior_DownState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraBehavior_DownState_C* UCameraBehavior_DownState_C::GetDefaultObj()
{
	static class UCameraBehavior_DownState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraBehavior_DownState_C*>(UCameraBehavior_DownState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CameraBehavior_DownState.CameraBehavior_DownState_C.Update
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraState*                State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBehavior_DownState_C::Update(float DeltaTime, class UCameraState* State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraBehavior_DownState_C", "Update");

	Params::UCameraBehavior_DownState_C_Update_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CameraBehavior_DownState.CameraBehavior_DownState_C.start
// (Event, Public, BlueprintEvent)
// Parameters:
// class UCameraState*                State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBehavior_DownState_C::Start(class UCameraState* State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraBehavior_DownState_C", "start");

	Params::UCameraBehavior_DownState_C_Start_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CameraBehavior_DownState.CameraBehavior_DownState_C.End
// (Event, Public, BlueprintEvent)
// Parameters:
// class UCameraState*                State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBehavior_DownState_C::End(class UCameraState* State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraBehavior_DownState_C", "End");

	Params::UCameraBehavior_DownState_C_End_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CameraBehavior_DownState.CameraBehavior_DownState_C.ExecuteUbergraph_CameraBehavior_DownState
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraState*                K2Node_Event_State1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetAssociatedPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraAnimInst*             CallFunc_PlayCameraAnim_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraState*                K2Node_Event_State                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetAssociatedPlayerController_ReturnValue1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraState*                K2Node_Event_State2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetBaseRotation_ReturnValue                             (ConstParm, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetAssociatedPlayerController_ReturnValue2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGamePaused_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_NormalizeToRange_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)

void UCameraBehavior_DownState_C::ExecuteUbergraph_CameraBehavior_DownState(int32 EntryPoint, class UCameraState* K2Node_Event_State1, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, class UCameraAnimInst* CallFunc_PlayCameraAnim_ReturnValue, class UCameraState* K2Node_Event_State, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue1, float K2Node_Event_DeltaTime, class UCameraState* K2Node_Event_State2, const struct FRotator& CallFunc_GetBaseRotation_ReturnValue, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue2, bool CallFunc_IsGamePaused_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_NormalizeToRange_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_GetFloatValue_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraBehavior_DownState_C", "ExecuteUbergraph_CameraBehavior_DownState");

	Params::UCameraBehavior_DownState_C_ExecuteUbergraph_CameraBehavior_DownState_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_State1 = K2Node_Event_State1;
	Parms.CallFunc_GetAssociatedPlayerController_ReturnValue = CallFunc_GetAssociatedPlayerController_ReturnValue;
	Parms.CallFunc_PlayCameraAnim_ReturnValue = CallFunc_PlayCameraAnim_ReturnValue;
	Parms.K2Node_Event_State = K2Node_Event_State;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_GetAssociatedPlayerController_ReturnValue1 = CallFunc_GetAssociatedPlayerController_ReturnValue1;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.K2Node_Event_State2 = K2Node_Event_State2;
	Parms.CallFunc_GetBaseRotation_ReturnValue = CallFunc_GetBaseRotation_ReturnValue;
	Parms.CallFunc_GetAssociatedPlayerController_ReturnValue2 = CallFunc_GetAssociatedPlayerController_ReturnValue2;
	Parms.CallFunc_IsGamePaused_ReturnValue = CallFunc_IsGamePaused_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_NormalizeToRange_ReturnValue = CallFunc_NormalizeToRange_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue1 = CallFunc_GetFloatValue_ReturnValue1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue1 = CallFunc_Multiply_FloatFloat_ReturnValue1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


