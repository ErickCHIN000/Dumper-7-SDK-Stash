#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_UI_Arcane_Rings.BP_UI_Arcane_Rings_C
// (Actor)

class UClass* ABP_UI_Arcane_Rings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_UI_Arcane_Rings_C");

	return Clss;
}


// BP_UI_Arcane_Rings_C BP_UI_Arcane_Rings.Default__BP_UI_Arcane_Rings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_UI_Arcane_Rings_C* ABP_UI_Arcane_Rings_C::GetDefaultObj()
{
	static class ABP_UI_Arcane_Rings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_UI_Arcane_Rings_C*>(ABP_UI_Arcane_Rings_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_UI_Arcane_Rings.BP_UI_Arcane_Rings_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_UI_Arcane_Rings_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_Arcane_Rings_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_UI_Arcane_Rings.BP_UI_Arcane_Rings_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_UI_Arcane_Rings_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_Arcane_Rings_C", "ReceiveTick");

	Params::ABP_UI_Arcane_Rings_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_Arcane_Rings.BP_UI_Arcane_Rings_C.Adjust_Rotation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    NewRotation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_UI_Arcane_Rings_C::Adjust_Rotation(const struct FRotator& NewRotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_Arcane_Rings_C", "Adjust_Rotation");

	Params::ABP_UI_Arcane_Rings_C_Adjust_Rotation_Params Parms{};

	Parms.NewRotation = NewRotation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_Arcane_Rings.BP_UI_Arcane_Rings_C.AdjustCameraFOV
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Desired_FOVAngle                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_UI_Arcane_Rings_C::AdjustCameraFOV(double Desired_FOVAngle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_Arcane_Rings_C", "AdjustCameraFOV");

	Params::ABP_UI_Arcane_Rings_C_AdjustCameraFOV_Params Parms{};

	Parms.Desired_FOVAngle = Desired_FOVAngle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UI_Arcane_Rings.BP_UI_Arcane_Rings_C.ExecuteUbergraph_BP_UI_Arcane_Rings
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_CustomEvent_NewRotation                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Desired_FOVAngle                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// double                             CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_B_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_FOVAngle_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_UI_Arcane_Rings_C::ExecuteUbergraph_BP_UI_Arcane_Rings(int32 EntryPoint, float K2Node_Event_DeltaSeconds, const struct FRotator& K2Node_CustomEvent_NewRotation, double Temp_real_Variable, double K2Node_CustomEvent_Desired_FOVAngle, double Temp_real_Variable_1, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool Temp_bool_Variable, double K2Node_Select_Default, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, double CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast, double CallFunc_Less_DoubleDouble_B_ImplicitCast, float K2Node_VariableSet_FOVAngle_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_UI_Arcane_Rings_C", "ExecuteUbergraph_BP_UI_Arcane_Rings");

	Params::ABP_UI_Arcane_Rings_C_ExecuteUbergraph_BP_UI_Arcane_Rings_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_CustomEvent_NewRotation = K2Node_CustomEvent_NewRotation;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.K2Node_CustomEvent_Desired_FOVAngle = K2Node_CustomEvent_Desired_FOVAngle;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Less_DoubleDouble_B_ImplicitCast = CallFunc_Less_DoubleDouble_B_ImplicitCast;
	Parms.K2Node_VariableSet_FOVAngle_ImplicitCast = K2Node_VariableSet_FOVAngle_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


