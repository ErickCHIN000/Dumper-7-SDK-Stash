#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TimeOfDay.BP_TimeOfDay_C
// (Actor)

class UClass* ABP_TimeOfDay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TimeOfDay_C");

	return Clss;
}


// BP_TimeOfDay_C BP_TimeOfDay.Default__BP_TimeOfDay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TimeOfDay_C* ABP_TimeOfDay_C::GetDefaultObj()
{
	static class ABP_TimeOfDay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TimeOfDay_C*>(ABP_TimeOfDay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_TimeOfDay.BP_TimeOfDay_C.AI Is Dead?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               Dead                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDay_C::AI_Is_Dead_(bool* Dead)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDay_C", "AI Is Dead?");

	Params::ABP_TimeOfDay_C_AI_Is_Dead__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Dead != nullptr)
		*Dead = Parms.Dead;

}


// Function BP_TimeOfDay.BP_TimeOfDay_C.AI Can Interact?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Can_Interact                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDay_C::AI_Can_Interact_(bool* Can_Interact)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDay_C", "AI Can Interact?");

	Params::ABP_TimeOfDay_C_AI_Can_Interact__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Can_Interact != nullptr)
		*Can_Interact = Parms.Can_Interact;

}


// Function BP_TimeOfDay.BP_TimeOfDay_C.Actor Attack Target
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Attack_Target                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDay_C::Actor_Attack_Target(class AActor** Attack_Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDay_C", "Actor Attack Target");

	Params::ABP_TimeOfDay_C_Actor_Attack_Target_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Attack_Target != nullptr)
		*Attack_Target = Parms.Attack_Target;

}


// Function BP_TimeOfDay.BP_TimeOfDay_C.Update Time
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_MakeTimespan_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Days                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Hours                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Minutes                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Seconds                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Milliseconds                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDay_C::Update_Time(double Delta, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const struct FTimespan& CallFunc_MakeTimespan_ReturnValue, int32 CallFunc_BreakTimespan_Days, int32 CallFunc_BreakTimespan_Hours, int32 CallFunc_BreakTimespan_Minutes, int32 CallFunc_BreakTimespan_Seconds, int32 CallFunc_BreakTimespan_Milliseconds, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDay_C", "Update Time");

	Params::ABP_TimeOfDay_C_Update_Time_Params Parms{};

	Parms.Delta = Delta;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_MakeTimespan_ReturnValue = CallFunc_MakeTimespan_ReturnValue;
	Parms.CallFunc_BreakTimespan_Days = CallFunc_BreakTimespan_Days;
	Parms.CallFunc_BreakTimespan_Hours = CallFunc_BreakTimespan_Hours;
	Parms.CallFunc_BreakTimespan_Minutes = CallFunc_BreakTimespan_Minutes;
	Parms.CallFunc_BreakTimespan_Seconds = CallFunc_BreakTimespan_Seconds;
	Parms.CallFunc_BreakTimespan_Milliseconds = CallFunc_BreakTimespan_Milliseconds;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDay.BP_TimeOfDay_C.Day Lighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_Current_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetIntensity_NewIntensity_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetIntensity_NewIntensity_ImplicitCast_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDay_C::Day_Lighting(double Delta, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue, double CallFunc_FInterpTo_ReturnValue_1, double CallFunc_FInterpTo_Current_ImplicitCast, double CallFunc_FInterpTo_Current_ImplicitCast_1, float CallFunc_SetIntensity_NewIntensity_ImplicitCast, float CallFunc_SetIntensity_NewIntensity_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDay_C", "Day Lighting");

	Params::ABP_TimeOfDay_C_Day_Lighting_Params Parms{};

	Parms.Delta = Delta;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue_1 = CallFunc_FInterpTo_ReturnValue_1;
	Parms.CallFunc_FInterpTo_Current_ImplicitCast = CallFunc_FInterpTo_Current_ImplicitCast;
	Parms.CallFunc_FInterpTo_Current_ImplicitCast_1 = CallFunc_FInterpTo_Current_ImplicitCast_1;
	Parms.CallFunc_SetIntensity_NewIntensity_ImplicitCast = CallFunc_SetIntensity_NewIntensity_ImplicitCast;
	Parms.CallFunc_SetIntensity_NewIntensity_ImplicitCast_1 = CallFunc_SetIntensity_NewIntensity_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDay.BP_TimeOfDay_C.Night Lighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_Current_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetIntensity_NewIntensity_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetIntensity_NewIntensity_ImplicitCast_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDay_C::Night_Lighting(double Delta, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue, double CallFunc_FInterpTo_ReturnValue_1, double CallFunc_FInterpTo_Current_ImplicitCast, float CallFunc_SetIntensity_NewIntensity_ImplicitCast, double CallFunc_FInterpTo_Current_ImplicitCast_1, float CallFunc_SetIntensity_NewIntensity_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDay_C", "Night Lighting");

	Params::ABP_TimeOfDay_C_Night_Lighting_Params Parms{};

	Parms.Delta = Delta;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue_1 = CallFunc_FInterpTo_ReturnValue_1;
	Parms.CallFunc_FInterpTo_Current_ImplicitCast = CallFunc_FInterpTo_Current_ImplicitCast;
	Parms.CallFunc_SetIntensity_NewIntensity_ImplicitCast = CallFunc_SetIntensity_NewIntensity_ImplicitCast;
	Parms.CallFunc_FInterpTo_Current_ImplicitCast_1 = CallFunc_FInterpTo_Current_ImplicitCast_1;
	Parms.CallFunc_SetIntensity_NewIntensity_ImplicitCast_1 = CallFunc_SetIntensity_NewIntensity_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDay.BP_TimeOfDay_C.Turret Idle Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_TimeOfDay_C::Turret_Idle_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDay_C", "Turret Idle Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TimeOfDay.BP_TimeOfDay_C.Turret Idle Stop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_TimeOfDay_C::Turret_Idle_Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDay_C", "Turret Idle Stop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TimeOfDay.BP_TimeOfDay_C.Turret Start Reload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_TimeOfDay_C::Turret_Start_Reload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDay_C", "Turret Start Reload");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TimeOfDay.BP_TimeOfDay_C.Turret End Reload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_TimeOfDay_C::Turret_End_Reload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDay_C", "Turret End Reload");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TimeOfDay.BP_TimeOfDay_C.AI Alert
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Alert_Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDay_C::AI_Alert(class AActor* Alert_Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDay_C", "AI Alert");

	Params::ABP_TimeOfDay_C_AI_Alert_Params Parms{};

	Parms.Alert_Actor = Alert_Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDay.BP_TimeOfDay_C.AI End Alert
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_TimeOfDay_C::AI_End_Alert()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDay_C", "AI End Alert");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TimeOfDay.BP_TimeOfDay_C.AI Animation Switch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_AIBehaviour           Behaviour                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDay_C::AI_Animation_Switch(enum class E_AIBehaviour Behaviour)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDay_C", "AI Animation Switch");

	Params::ABP_TimeOfDay_C_AI_Animation_Switch_Params Parms{};

	Parms.Behaviour = Behaviour;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDay.BP_TimeOfDay_C.AI Camera Activate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Activate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDay_C::AI_Camera_Activate(bool Activate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDay_C", "AI Camera Activate");

	Params::ABP_TimeOfDay_C_AI_Camera_Activate_Params Parms{};

	Parms.Activate = Activate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDay.BP_TimeOfDay_C.AI Block
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_BlockType             Block_Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Block_Attacker                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDay_C::AI_Block(enum class E_BlockType Block_Type, class AActor* Block_Attacker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDay_C", "AI Block");

	Params::ABP_TimeOfDay_C_AI_Block_Params Parms{};

	Parms.Block_Type = Block_Type;
	Parms.Block_Attacker = Block_Attacker;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDay.BP_TimeOfDay_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDay_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDay_C", "ReceiveTick");

	Params::ABP_TimeOfDay_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDay.BP_TimeOfDay_C.Turret Destroyed Effect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_TimeOfDay_C::Turret_Destroyed_Effect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDay_C", "Turret Destroyed Effect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TimeOfDay.BP_TimeOfDay_C.Alert Actor Defenders
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Attacked                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Attacker                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDay_C::Alert_Actor_Defenders(class AActor* Attacked, class AActor* Attacker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDay_C", "Alert Actor Defenders");

	Params::ABP_TimeOfDay_C_Alert_Actor_Defenders_Params Parms{};

	Parms.Attacked = Attacked;
	Parms.Attacker = Attacker;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDay.BP_TimeOfDay_C.Actor Aim Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDay_C::Actor_Aim_Focus(class AActor* Instigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDay_C", "Actor Aim Focus");

	Params::ABP_TimeOfDay_C_Actor_Aim_Focus_Params Parms{};

	Parms.Instigator = Instigator;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDay.BP_TimeOfDay_C.AI Dead
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_TimeOfDay_C::AI_Dead()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDay_C", "AI Dead");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TimeOfDay.BP_TimeOfDay_C.ExecuteUbergraph_BP_TimeOfDay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Alert_Actor                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class E_AIBehaviour           K2Node_Event_Behaviour                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Activate                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_BlockType             K2Node_Event_Block_Type                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Block_Attacker                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_AddActorLocalRotation_SweepHitResult                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Attacked                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Attacker                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InRange_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Instigator                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Pitch_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_InRange_FloatFloat_Value_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDay_C::ExecuteUbergraph_BP_TimeOfDay(int32 EntryPoint, class AActor* K2Node_Event_Alert_Actor, enum class E_AIBehaviour K2Node_Event_Behaviour, bool K2Node_Event_Activate, enum class E_BlockType K2Node_Event_Block_Type, class AActor* K2Node_Event_Block_Attacker, float K2Node_Event_DeltaSeconds, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_AddActorLocalRotation_SweepHitResult, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class AActor* K2Node_Event_Attacked, class AActor* K2Node_Event_Attacker, bool CallFunc_InRange_FloatFloat_ReturnValue, class AActor* K2Node_Event_Instigator, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast, double CallFunc_InRange_FloatFloat_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDay_C", "ExecuteUbergraph_BP_TimeOfDay");

	Params::ABP_TimeOfDay_C_ExecuteUbergraph_BP_TimeOfDay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Alert_Actor = K2Node_Event_Alert_Actor;
	Parms.K2Node_Event_Behaviour = K2Node_Event_Behaviour;
	Parms.K2Node_Event_Activate = K2Node_Event_Activate;
	Parms.K2Node_Event_Block_Type = K2Node_Event_Block_Type;
	Parms.K2Node_Event_Block_Attacker = K2Node_Event_Block_Attacker;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_AddActorLocalRotation_SweepHitResult = CallFunc_K2_AddActorLocalRotation_SweepHitResult;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.K2Node_Event_Attacked = K2Node_Event_Attacked;
	Parms.K2Node_Event_Attacker = K2Node_Event_Attacker;
	Parms.CallFunc_InRange_FloatFloat_ReturnValue = CallFunc_InRange_FloatFloat_ReturnValue;
	Parms.K2Node_Event_Instigator = K2Node_Event_Instigator;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_MakeRotator_Pitch_ImplicitCast = CallFunc_MakeRotator_Pitch_ImplicitCast;
	Parms.CallFunc_InRange_FloatFloat_Value_ImplicitCast = CallFunc_InRange_FloatFloat_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TimeOfDay.BP_TimeOfDay_C.Time Hour__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Hours                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TimeOfDay_C::Time_Hour__DelegateSignature(int32 Hours)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TimeOfDay_C", "Time Hour__DelegateSignature");

	Params::ABP_TimeOfDay_C_Time_Hour__DelegateSignature_Params Parms{};

	Parms.Hours = Hours;

	UObject::ProcessEvent(Func, &Parms);

}

}


