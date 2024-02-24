#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_TurretMASTER.Buildable_TurretMASTER_C
// (Actor)

class UClass* ABuildable_TurretMASTER_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_TurretMASTER_C");

	return Clss;
}


// Buildable_TurretMASTER_C Buildable_TurretMASTER.Default__Buildable_TurretMASTER_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_TurretMASTER_C* ABuildable_TurretMASTER_C::GetDefaultObj()
{
	static class ABuildable_TurretMASTER_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_TurretMASTER_C*>(ABuildable_TurretMASTER_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Buildable_TurretMASTER.Buildable_TurretMASTER_C.AI Is Dead?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               Dead                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABuildable_TurretMASTER_C::AI_Is_Dead_(bool* Dead)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buildable_TurretMASTER_C", "AI Is Dead?");

	Params::ABuildable_TurretMASTER_C_AI_Is_Dead__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Dead != nullptr)
		*Dead = Parms.Dead;

}


// Function Buildable_TurretMASTER.Buildable_TurretMASTER_C.AI Can Interact?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Can_Interact                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABuildable_TurretMASTER_C::AI_Can_Interact_(bool* Can_Interact)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buildable_TurretMASTER_C", "AI Can Interact?");

	Params::ABuildable_TurretMASTER_C_AI_Can_Interact__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Can_Interact != nullptr)
		*Can_Interact = Parms.Can_Interact;

}


// Function Buildable_TurretMASTER.Buildable_TurretMASTER_C.Actor Attack Target
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Attack_Target                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABuildable_TurretMASTER_C::Actor_Attack_Target(class AActor** Attack_Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buildable_TurretMASTER_C", "Actor Attack Target");

	Params::ABuildable_TurretMASTER_C_Actor_Attack_Target_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Attack_Target != nullptr)
		*Attack_Target = Parms.Attack_Target;

}


// Function Buildable_TurretMASTER.Buildable_TurretMASTER_C.UpdateHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Health                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetWidget_ReturnValue                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBuildableObjectHealth_C*    K2Node_DynamicCast_AsBuildable_Object_Health                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABuildable_TurretMASTER_C::UpdateHealth(int32 Health, class UUserWidget* CallFunc_GetWidget_ReturnValue, class UBuildableObjectHealth_C* K2Node_DynamicCast_AsBuildable_Object_Health, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buildable_TurretMASTER_C", "UpdateHealth");

	Params::ABuildable_TurretMASTER_C_UpdateHealth_Params Parms{};

	Parms.Health = Health;
	Parms.CallFunc_GetWidget_ReturnValue = CallFunc_GetWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsBuildable_Object_Health = K2Node_DynamicCast_AsBuildable_Object_Health;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buildable_TurretMASTER.Buildable_TurretMASTER_C.AI Dead
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuildable_TurretMASTER_C::AI_Dead()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buildable_TurretMASTER_C", "AI Dead");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buildable_TurretMASTER.Buildable_TurretMASTER_C.Actor Aim Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABuildable_TurretMASTER_C::Actor_Aim_Focus(class AActor* Instigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buildable_TurretMASTER_C", "Actor Aim Focus");

	Params::ABuildable_TurretMASTER_C_Actor_Aim_Focus_Params Parms{};

	Parms.Instigator = Instigator;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buildable_TurretMASTER.Buildable_TurretMASTER_C.Alert Actor Defenders
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Attacked                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Attacker                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABuildable_TurretMASTER_C::Alert_Actor_Defenders(class AActor* Attacked, class AActor* Attacker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buildable_TurretMASTER_C", "Alert Actor Defenders");

	Params::ABuildable_TurretMASTER_C_Alert_Actor_Defenders_Params Parms{};

	Parms.Attacked = Attacked;
	Parms.Attacker = Attacker;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buildable_TurretMASTER.Buildable_TurretMASTER_C.Turret Destroyed Effect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuildable_TurretMASTER_C::Turret_Destroyed_Effect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buildable_TurretMASTER_C", "Turret Destroyed Effect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buildable_TurretMASTER.Buildable_TurretMASTER_C.Turret Idle Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuildable_TurretMASTER_C::Turret_Idle_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buildable_TurretMASTER_C", "Turret Idle Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buildable_TurretMASTER.Buildable_TurretMASTER_C.Turret Idle Stop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuildable_TurretMASTER_C::Turret_Idle_Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buildable_TurretMASTER_C", "Turret Idle Stop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buildable_TurretMASTER.Buildable_TurretMASTER_C.Turret Start Reload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuildable_TurretMASTER_C::Turret_Start_Reload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buildable_TurretMASTER_C", "Turret Start Reload");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buildable_TurretMASTER.Buildable_TurretMASTER_C.Turret End Reload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuildable_TurretMASTER_C::Turret_End_Reload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buildable_TurretMASTER_C", "Turret End Reload");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buildable_TurretMASTER.Buildable_TurretMASTER_C.AI Alert
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Alert_Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABuildable_TurretMASTER_C::AI_Alert(class AActor* Alert_Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buildable_TurretMASTER_C", "AI Alert");

	Params::ABuildable_TurretMASTER_C_AI_Alert_Params Parms{};

	Parms.Alert_Actor = Alert_Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buildable_TurretMASTER.Buildable_TurretMASTER_C.AI End Alert
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuildable_TurretMASTER_C::AI_End_Alert()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buildable_TurretMASTER_C", "AI End Alert");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buildable_TurretMASTER.Buildable_TurretMASTER_C.AI Animation Switch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_AIBehaviour           Behaviour                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABuildable_TurretMASTER_C::AI_Animation_Switch(enum class E_AIBehaviour Behaviour)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buildable_TurretMASTER_C", "AI Animation Switch");

	Params::ABuildable_TurretMASTER_C_AI_Animation_Switch_Params Parms{};

	Parms.Behaviour = Behaviour;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buildable_TurretMASTER.Buildable_TurretMASTER_C.AI Camera Activate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Activate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABuildable_TurretMASTER_C::AI_Camera_Activate(bool Activate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buildable_TurretMASTER_C", "AI Camera Activate");

	Params::ABuildable_TurretMASTER_C_AI_Camera_Activate_Params Parms{};

	Parms.Activate = Activate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buildable_TurretMASTER.Buildable_TurretMASTER_C.AI Block
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_BlockType             Block_Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Block_Attacker                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABuildable_TurretMASTER_C::AI_Block(enum class E_BlockType Block_Type, class AActor* Block_Attacker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buildable_TurretMASTER_C", "AI Block");

	Params::ABuildable_TurretMASTER_C_AI_Block_Params Parms{};

	Parms.Block_Type = Block_Type;
	Parms.Block_Attacker = Block_Attacker;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buildable_TurretMASTER.Buildable_TurretMASTER_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABuildable_TurretMASTER_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buildable_TurretMASTER_C", "ReceiveAnyDamage");

	Params::ABuildable_TurretMASTER_C_ReceiveAnyDamage_Params Parms{};

	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buildable_TurretMASTER.Buildable_TurretMASTER_C.ExecuteUbergraph_Buildable_TurretMASTER
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Instigator                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Attacked                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Attacker                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Alert_Actor                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class E_AIBehaviour           K2Node_Event_Behaviour                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Activate                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_BlockType             K2Node_Event_Block_Type                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Block_Attacker                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 K2Node_Event_DamageType                                          (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_Event_InstigatedBy                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Server_Turret_Damaged_Damage_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABuildable_TurretMASTER_C::ExecuteUbergraph_Buildable_TurretMASTER(int32 EntryPoint, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class AActor* K2Node_Event_Instigator, class AActor* K2Node_Event_Attacked, class AActor* K2Node_Event_Attacker, class AActor* K2Node_Event_Alert_Actor, enum class E_AIBehaviour K2Node_Event_Behaviour, bool K2Node_Event_Activate, enum class E_BlockType K2Node_Event_Block_Type, class AActor* K2Node_Event_Block_Attacker, float K2Node_Event_Damage, class UDamageType* K2Node_Event_DamageType, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, bool CallFunc_NotEqual_ObjectObject_ReturnValue, double CallFunc_Server_Turret_Damaged_Damage_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buildable_TurretMASTER_C", "ExecuteUbergraph_Buildable_TurretMASTER");

	Params::ABuildable_TurretMASTER_C_ExecuteUbergraph_Buildable_TurretMASTER_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_Event_Instigator = K2Node_Event_Instigator;
	Parms.K2Node_Event_Attacked = K2Node_Event_Attacked;
	Parms.K2Node_Event_Attacker = K2Node_Event_Attacker;
	Parms.K2Node_Event_Alert_Actor = K2Node_Event_Alert_Actor;
	Parms.K2Node_Event_Behaviour = K2Node_Event_Behaviour;
	Parms.K2Node_Event_Activate = K2Node_Event_Activate;
	Parms.K2Node_Event_Block_Type = K2Node_Event_Block_Type;
	Parms.K2Node_Event_Block_Attacker = K2Node_Event_Block_Attacker;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageType = K2Node_Event_DamageType;
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Server_Turret_Damaged_Damage_ImplicitCast = CallFunc_Server_Turret_Damaged_Damage_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


