#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MasterTurret.BP_MasterTurret_C
// (Actor)

class UClass* ABP_MasterTurret_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MasterTurret_C");

	return Clss;
}


// BP_MasterTurret_C BP_MasterTurret.Default__BP_MasterTurret_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MasterTurret_C* ABP_MasterTurret_C::GetDefaultObj()
{
	static class ABP_MasterTurret_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MasterTurret_C*>(ABP_MasterTurret_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MasterTurret.BP_MasterTurret_C.IsObjectDamageable?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Damageable_                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterTurret_C::IsObjectDamageable_(bool* Damageable_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterTurret_C", "IsObjectDamageable?");

	Params::ABP_MasterTurret_C_IsObjectDamageable__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Damageable_ != nullptr)
		*Damageable_ = Parms.Damageable_;

}


// Function BP_MasterTurret.BP_MasterTurret_C.AI Is Dead?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               Dead                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterTurret_C::AI_Is_Dead_(bool* Dead)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterTurret_C", "AI Is Dead?");

	Params::ABP_MasterTurret_C_AI_Is_Dead__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Dead != nullptr)
		*Dead = Parms.Dead;

}


// Function BP_MasterTurret.BP_MasterTurret_C.AI Can Interact?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Can_Interact                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterTurret_C::AI_Can_Interact_(bool* Can_Interact)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterTurret_C", "AI Can Interact?");

	Params::ABP_MasterTurret_C_AI_Can_Interact__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Can_Interact != nullptr)
		*Can_Interact = Parms.Can_Interact;

}


// Function BP_MasterTurret.BP_MasterTurret_C.Actor Attack Target
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Attack_Target                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MasterTurret_C::Actor_Attack_Target(class AActor** Attack_Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterTurret_C", "Actor Attack Target");

	Params::ABP_MasterTurret_C_Actor_Attack_Target_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Attack_Target != nullptr)
		*Attack_Target = Parms.Attack_Target;

}


// Function BP_MasterTurret.BP_MasterTurret_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_2                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_3                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Pitch_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Pitch_ImplicitCast_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterTurret_C::UserConstructionScript(const struct FRotator& CallFunc_MakeRotator_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_3, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_2, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_3, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast_1, float CallFunc_MakeRotator_Pitch_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterTurret_C", "UserConstructionScript");

	Params::ABP_MasterTurret_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_MakeRotator_ReturnValue_2 = CallFunc_MakeRotator_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_MakeRotator_ReturnValue_3 = CallFunc_MakeRotator_ReturnValue_3;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_1 = CallFunc_K2_SetRelativeRotation_SweepHitResult_1;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_2 = CallFunc_K2_SetRelativeRotation_SweepHitResult_2;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_3 = CallFunc_K2_SetRelativeRotation_SweepHitResult_3;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast = CallFunc_MakeRotator_Yaw_ImplicitCast;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast_1 = CallFunc_MakeRotator_Yaw_ImplicitCast_1;
	Parms.CallFunc_MakeRotator_Pitch_ImplicitCast = CallFunc_MakeRotator_Pitch_ImplicitCast;
	Parms.CallFunc_MakeRotator_Pitch_ImplicitCast_1 = CallFunc_MakeRotator_Pitch_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterTurret.BP_MasterTurret_C.Damage_Shoved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterTurret_C::Damage_Shoved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterTurret_C", "Damage_Shoved");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterTurret.BP_MasterTurret_C.AI Dead
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterTurret_C::AI_Dead()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterTurret_C", "AI Dead");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterTurret.BP_MasterTurret_C.Actor Aim Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MasterTurret_C::Actor_Aim_Focus(class AActor* Instigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterTurret_C", "Actor Aim Focus");

	Params::ABP_MasterTurret_C_Actor_Aim_Focus_Params Parms{};

	Parms.Instigator = Instigator;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterTurret.BP_MasterTurret_C.Alert Actor Defenders
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Attacked                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Attacker                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MasterTurret_C::Alert_Actor_Defenders(class AActor* Attacked, class AActor* Attacker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterTurret_C", "Alert Actor Defenders");

	Params::ABP_MasterTurret_C_Alert_Actor_Defenders_Params Parms{};

	Parms.Attacked = Attacked;
	Parms.Attacker = Attacker;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterTurret.BP_MasterTurret_C.Turret Destroyed Effect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterTurret_C::Turret_Destroyed_Effect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterTurret_C", "Turret Destroyed Effect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterTurret.BP_MasterTurret_C.Turret Idle Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterTurret_C::Turret_Idle_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterTurret_C", "Turret Idle Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterTurret.BP_MasterTurret_C.Turret Idle Stop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterTurret_C::Turret_Idle_Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterTurret_C", "Turret Idle Stop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterTurret.BP_MasterTurret_C.Turret Start Reload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterTurret_C::Turret_Start_Reload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterTurret_C", "Turret Start Reload");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterTurret.BP_MasterTurret_C.Turret End Reload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterTurret_C::Turret_End_Reload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterTurret_C", "Turret End Reload");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterTurret.BP_MasterTurret_C.AI Alert
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Alert_Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MasterTurret_C::AI_Alert(class AActor* Alert_Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterTurret_C", "AI Alert");

	Params::ABP_MasterTurret_C_AI_Alert_Params Parms{};

	Parms.Alert_Actor = Alert_Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterTurret.BP_MasterTurret_C.AI End Alert
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MasterTurret_C::AI_End_Alert()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterTurret_C", "AI End Alert");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MasterTurret.BP_MasterTurret_C.AI Animation Switch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_AIBehaviour           Behaviour                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterTurret_C::AI_Animation_Switch(enum class E_AIBehaviour Behaviour)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterTurret_C", "AI Animation Switch");

	Params::ABP_MasterTurret_C_AI_Animation_Switch_Params Parms{};

	Parms.Behaviour = Behaviour;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterTurret.BP_MasterTurret_C.AI Camera Activate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Activate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MasterTurret_C::AI_Camera_Activate(bool Activate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterTurret_C", "AI Camera Activate");

	Params::ABP_MasterTurret_C_AI_Camera_Activate_Params Parms{};

	Parms.Activate = Activate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterTurret.BP_MasterTurret_C.AI Block
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_BlockType             Block_Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Block_Attacker                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MasterTurret_C::AI_Block(enum class E_BlockType Block_Type, class AActor* Block_Attacker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterTurret_C", "AI Block");

	Params::ABP_MasterTurret_C_AI_Block_Params Parms{};

	Parms.Block_Type = Block_Type;
	Parms.Block_Attacker = Block_Attacker;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterTurret.BP_MasterTurret_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MasterTurret_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterTurret_C", "ReceiveAnyDamage");

	Params::ABP_MasterTurret_C_ReceiveAnyDamage_Params Parms{};

	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterTurret.BP_MasterTurret_C.Damage_Object
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Damage_Causer                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 Event_Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MasterTurret_C::Damage_Object(double Damage, class AActor* Damage_Causer, class AController* Event_Instigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterTurret_C", "Damage_Object");

	Params::ABP_MasterTurret_C_Damage_Object_Params Parms{};

	Parms.Damage = Damage;
	Parms.Damage_Causer = Damage_Causer;
	Parms.Event_Instigator = Event_Instigator;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterTurret.BP_MasterTurret_C.ExecuteUbergraph_BP_MasterTurret
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Damage_Causer                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_Event_Event_Instigator                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Instigator                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Attacked                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Attacker                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Alert_Actor                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class E_AIBehaviour           K2Node_Event_Behaviour                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Activate                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_BlockType             K2Node_Event_Block_Type                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Block_Attacker                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 K2Node_Event_DamageType                                          (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_Event_InstigatedBy                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MasterTurret_C::ExecuteUbergraph_BP_MasterTurret(int32 EntryPoint, double K2Node_Event_Damage, class AActor* K2Node_Event_Damage_Causer, class AController* K2Node_Event_Event_Instigator, class AActor* K2Node_Event_Instigator, class AActor* K2Node_Event_Attacked, class AActor* K2Node_Event_Attacker, class AActor* K2Node_Event_Alert_Actor, enum class E_AIBehaviour K2Node_Event_Behaviour, bool K2Node_Event_Activate, enum class E_BlockType K2Node_Event_Block_Type, class AActor* K2Node_Event_Block_Attacker, float K2Node_Event_Damage_1, class UDamageType* K2Node_Event_DamageType, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterTurret_C", "ExecuteUbergraph_BP_MasterTurret");

	Params::ABP_MasterTurret_C_ExecuteUbergraph_BP_MasterTurret_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_Damage_Causer = K2Node_Event_Damage_Causer;
	Parms.K2Node_Event_Event_Instigator = K2Node_Event_Event_Instigator;
	Parms.K2Node_Event_Instigator = K2Node_Event_Instigator;
	Parms.K2Node_Event_Attacked = K2Node_Event_Attacked;
	Parms.K2Node_Event_Attacker = K2Node_Event_Attacker;
	Parms.K2Node_Event_Alert_Actor = K2Node_Event_Alert_Actor;
	Parms.K2Node_Event_Behaviour = K2Node_Event_Behaviour;
	Parms.K2Node_Event_Activate = K2Node_Event_Activate;
	Parms.K2Node_Event_Block_Type = K2Node_Event_Block_Type;
	Parms.K2Node_Event_Block_Attacker = K2Node_Event_Block_Attacker;
	Parms.K2Node_Event_Damage_1 = K2Node_Event_Damage_1;
	Parms.K2Node_Event_DamageType = K2Node_Event_DamageType;
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}

}


