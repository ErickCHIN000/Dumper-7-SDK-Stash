#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraBehavior_Vehicle_TransitionIn.CameraBehavior_Vehicle_TransitionIn_C
// (None)

class UClass* UCameraBehavior_Vehicle_TransitionIn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraBehavior_Vehicle_TransitionIn_C");

	return Clss;
}


// CameraBehavior_Vehicle_TransitionIn_C CameraBehavior_Vehicle_TransitionIn.Default__CameraBehavior_Vehicle_TransitionIn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraBehavior_Vehicle_TransitionIn_C* UCameraBehavior_Vehicle_TransitionIn_C::GetDefaultObj()
{
	static class UCameraBehavior_Vehicle_TransitionIn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraBehavior_Vehicle_TransitionIn_C*>(UCameraBehavior_Vehicle_TransitionIn_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CameraBehavior_Vehicle_TransitionIn.CameraBehavior_Vehicle_TransitionIn_C.Update
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraState*                State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBehavior_Vehicle_TransitionIn_C::Update(float DeltaTime, class UCameraState* State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraBehavior_Vehicle_TransitionIn_C", "Update");

	Params::UCameraBehavior_Vehicle_TransitionIn_C_Update_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CameraBehavior_Vehicle_TransitionIn.CameraBehavior_Vehicle_TransitionIn_C.start
// (Event, Public, BlueprintEvent)
// Parameters:
// class UCameraState*                State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraBehavior_Vehicle_TransitionIn_C::Start(class UCameraState* State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraBehavior_Vehicle_TransitionIn_C", "start");

	Params::UCameraBehavior_Vehicle_TransitionIn_C_Start_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CameraBehavior_Vehicle_TransitionIn.CameraBehavior_Vehicle_TransitionIn_C.ExecuteUbergraph_CameraBehavior_Vehicle_TransitionIn
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraState*                K2Node_Event_State1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPOV                        K2Node_MakeStruct_POV                                            (NoDestructor)
// class UCameraState*                K2Node_Event_State                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetAssociatedCharacter_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCameraBehavior_Vehicle_TransitionIn_C::ExecuteUbergraph_CameraBehavior_Vehicle_TransitionIn(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float K2Node_Event_DeltaTime, class UCameraState* K2Node_Event_State1, const struct FPOV& K2Node_MakeStruct_POV, class UCameraState* K2Node_Event_State, class ACharacter* CallFunc_GetAssociatedCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraBehavior_Vehicle_TransitionIn_C", "ExecuteUbergraph_CameraBehavior_Vehicle_TransitionIn");

	Params::UCameraBehavior_Vehicle_TransitionIn_C_ExecuteUbergraph_CameraBehavior_Vehicle_TransitionIn_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.K2Node_Event_State1 = K2Node_Event_State1;
	Parms.K2Node_MakeStruct_POV = K2Node_MakeStruct_POV;
	Parms.K2Node_Event_State = K2Node_Event_State;
	Parms.CallFunc_GetAssociatedCharacter_ReturnValue = CallFunc_GetAssociatedCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}


