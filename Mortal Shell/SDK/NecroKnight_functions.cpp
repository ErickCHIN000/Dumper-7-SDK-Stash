#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NecroKnight.NecroKnight_C
// (Actor, Pawn)

class UClass* ANecroKnight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NecroKnight_C");

	return Clss;
}


// NecroKnight_C NecroKnight.Default__NecroKnight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANecroKnight_C* ANecroKnight_C::GetDefaultObj()
{
	static class ANecroKnight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANecroKnight_C*>(ANecroKnight_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NecroKnight.NecroKnight_C.CreateDynamicSwordMaterials
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue                                (ReferenceParm, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ANecroKnight_C::CreateDynamicSwordMaterials(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NecroKnight_C", "CreateDynamicSwordMaterials");

	Params::ANecroKnight_C_CreateDynamicSwordMaterials_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetMaterials_ReturnValue = CallFunc_GetMaterials_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NecroKnight.NecroKnight_C.Necro_Knight_Dissolve__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ANecroKnight_C::Necro_Knight_Dissolve__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NecroKnight_C", "Necro_Knight_Dissolve__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NecroKnight.NecroKnight_C.Necro_Knight_Dissolve__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ANecroKnight_C::Necro_Knight_Dissolve__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NecroKnight_C", "Necro_Knight_Dissolve__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NecroKnight.NecroKnight_C.OpacityFadeNecroKnight__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ANecroKnight_C::OpacityFadeNecroKnight__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NecroKnight_C", "OpacityFadeNecroKnight__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NecroKnight.NecroKnight_C.OpacityFadeNecroKnight__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ANecroKnight_C::OpacityFadeNecroKnight__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NecroKnight_C", "OpacityFadeNecroKnight__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NecroKnight.NecroKnight_C.OnNotifyEnd_2D3B23CC408C096E7B36CEA0E754F5C1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANecroKnight_C::OnNotifyEnd_2D3B23CC408C096E7B36CEA0E754F5C1(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NecroKnight_C", "OnNotifyEnd_2D3B23CC408C096E7B36CEA0E754F5C1");

	Params::ANecroKnight_C_OnNotifyEnd_2D3B23CC408C096E7B36CEA0E754F5C1_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NecroKnight.NecroKnight_C.OnNotifyBegin_2D3B23CC408C096E7B36CEA0E754F5C1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANecroKnight_C::OnNotifyBegin_2D3B23CC408C096E7B36CEA0E754F5C1(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NecroKnight_C", "OnNotifyBegin_2D3B23CC408C096E7B36CEA0E754F5C1");

	Params::ANecroKnight_C_OnNotifyBegin_2D3B23CC408C096E7B36CEA0E754F5C1_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NecroKnight.NecroKnight_C.OnInterrupted_2D3B23CC408C096E7B36CEA0E754F5C1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANecroKnight_C::OnInterrupted_2D3B23CC408C096E7B36CEA0E754F5C1(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NecroKnight_C", "OnInterrupted_2D3B23CC408C096E7B36CEA0E754F5C1");

	Params::ANecroKnight_C_OnInterrupted_2D3B23CC408C096E7B36CEA0E754F5C1_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NecroKnight.NecroKnight_C.OnBlendOut_2D3B23CC408C096E7B36CEA0E754F5C1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANecroKnight_C::OnBlendOut_2D3B23CC408C096E7B36CEA0E754F5C1(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NecroKnight_C", "OnBlendOut_2D3B23CC408C096E7B36CEA0E754F5C1");

	Params::ANecroKnight_C_OnBlendOut_2D3B23CC408C096E7B36CEA0E754F5C1_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NecroKnight.NecroKnight_C.OnCompleted_2D3B23CC408C096E7B36CEA0E754F5C1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANecroKnight_C::OnCompleted_2D3B23CC408C096E7B36CEA0E754F5C1(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NecroKnight_C", "OnCompleted_2D3B23CC408C096E7B36CEA0E754F5C1");

	Params::ANecroKnight_C_OnCompleted_2D3B23CC408C096E7B36CEA0E754F5C1_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NecroKnight.NecroKnight_C.OnNotifyEnd_A92A33C4442091EDB862A8A3C2FA36E0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANecroKnight_C::OnNotifyEnd_A92A33C4442091EDB862A8A3C2FA36E0(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NecroKnight_C", "OnNotifyEnd_A92A33C4442091EDB862A8A3C2FA36E0");

	Params::ANecroKnight_C_OnNotifyEnd_A92A33C4442091EDB862A8A3C2FA36E0_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NecroKnight.NecroKnight_C.OnNotifyBegin_A92A33C4442091EDB862A8A3C2FA36E0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANecroKnight_C::OnNotifyBegin_A92A33C4442091EDB862A8A3C2FA36E0(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NecroKnight_C", "OnNotifyBegin_A92A33C4442091EDB862A8A3C2FA36E0");

	Params::ANecroKnight_C_OnNotifyBegin_A92A33C4442091EDB862A8A3C2FA36E0_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NecroKnight.NecroKnight_C.OnInterrupted_A92A33C4442091EDB862A8A3C2FA36E0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANecroKnight_C::OnInterrupted_A92A33C4442091EDB862A8A3C2FA36E0(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NecroKnight_C", "OnInterrupted_A92A33C4442091EDB862A8A3C2FA36E0");

	Params::ANecroKnight_C_OnInterrupted_A92A33C4442091EDB862A8A3C2FA36E0_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NecroKnight.NecroKnight_C.OnBlendOut_A92A33C4442091EDB862A8A3C2FA36E0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANecroKnight_C::OnBlendOut_A92A33C4442091EDB862A8A3C2FA36E0(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NecroKnight_C", "OnBlendOut_A92A33C4442091EDB862A8A3C2FA36E0");

	Params::ANecroKnight_C_OnBlendOut_A92A33C4442091EDB862A8A3C2FA36E0_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NecroKnight.NecroKnight_C.OnCompleted_A92A33C4442091EDB862A8A3C2FA36E0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANecroKnight_C::OnCompleted_A92A33C4442091EDB862A8A3C2FA36E0(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NecroKnight_C", "OnCompleted_A92A33C4442091EDB862A8A3C2FA36E0");

	Params::ANecroKnight_C_OnCompleted_A92A33C4442091EDB862A8A3C2FA36E0_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NecroKnight.NecroKnight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ANecroKnight_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NecroKnight_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NecroKnight.NecroKnight_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANecroKnight_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NecroKnight_C", "ReceiveTick");

	Params::ANecroKnight_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NecroKnight.NecroKnight_C.EnemyDeath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Killer                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bShouldPlayDeathAnim                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ANecroKnight_C::EnemyDeath(class AActor* Killer, bool bShouldPlayDeathAnim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NecroKnight_C", "EnemyDeath");

	Params::ANecroKnight_C_EnemyDeath_Params Parms{};

	Parms.Killer = Killer;
	Parms.bShouldPlayDeathAnim = bShouldPlayDeathAnim;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NecroKnight.NecroKnight_C.SwordDissolve
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ANecroKnight_C::SwordDissolve()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NecroKnight_C", "SwordDissolve");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NecroKnight.NecroKnight_C.PlayWasHitSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     HitLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANecroKnight_C::PlayWasHitSound(const struct FVector& HitLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NecroKnight_C", "PlayWasHitSound");

	Params::ANecroKnight_C_PlayWasHitSound_Params Parms{};

	Parms.HitLocation = HitLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NecroKnight.NecroKnight_C.InvulnerablilityOnWhileTeleporting
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ANecroKnight_C::InvulnerablilityOnWhileTeleporting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NecroKnight_C", "InvulnerablilityOnWhileTeleporting");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NecroKnight.NecroKnight_C.ResetInvulnerability
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ANecroKnight_C::ResetInvulnerability()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NecroKnight_C", "ResetInvulnerability");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NecroKnight.NecroKnight_C.ForceEnemyAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ANecroKnight_C::ForceEnemyAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NecroKnight_C", "ForceEnemyAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NecroKnight.NecroKnight_C.SetWeaponVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible_                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ANecroKnight_C::SetWeaponVisibility(bool Visible_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NecroKnight_C", "SetWeaponVisibility");

	Params::ANecroKnight_C_SetWeaponVisibility_Params Parms{};

	Parms.Visible_ = Visible_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NecroKnight.NecroKnight_C.FadeOnDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ANecroKnight_C::FadeOnDeath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NecroKnight_C", "FadeOnDeath");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NecroKnight.NecroKnight_C.PlayMissedAttackFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ANecroKnight_C::PlayMissedAttackFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NecroKnight_C", "PlayMissedAttackFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NecroKnight.NecroKnight_C.PlayClassSpecificImpactFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     ImpactPoint                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ImpactNormal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANecroKnight_C::PlayClassSpecificImpactFX(const struct FVector& ImpactPoint, const struct FVector& ImpactNormal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NecroKnight_C", "PlayClassSpecificImpactFX");

	Params::ANecroKnight_C_PlayClassSpecificImpactFX_Params Parms{};

	Parms.ImpactPoint = ImpactPoint;
	Parms.ImpactNormal = ImpactNormal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NecroKnight.NecroKnight_C.PlayDeathFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ANecroKnight_C::PlayDeathFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NecroKnight_C", "PlayDeathFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NecroKnight.NecroKnight_C.InitAfterSpawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAdvancedEnemySpawner_C*     SpawnerRef                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        UniqueId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELevelPhases            PhaseToSpawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bPermanentlyDeadOnceKilled_                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APatrolPoint_C*              PatrolPointA                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bShouldWander_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APatrolPoint_C*              PatrolPointB                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AggroRadius                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_TriggerOnEnemyAggro_C*   TriggerToActivateOnAggro                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShouldPatrol_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  SpawnTransform                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void ANecroKnight_C::InitAfterSpawn(class AAdvancedEnemySpawner_C* SpawnerRef, class FName UniqueId, enum class ELevelPhases PhaseToSpawn, bool bPermanentlyDeadOnceKilled_, class APatrolPoint_C* PatrolPointA, bool bShouldWander_, class APatrolPoint_C* PatrolPointB, float AggroRadius, class ABP_TriggerOnEnemyAggro_C* TriggerToActivateOnAggro, bool ShouldPatrol_, const struct FTransform& SpawnTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NecroKnight_C", "InitAfterSpawn");

	Params::ANecroKnight_C_InitAfterSpawn_Params Parms{};

	Parms.SpawnerRef = SpawnerRef;
	Parms.UniqueId = UniqueId;
	Parms.PhaseToSpawn = PhaseToSpawn;
	Parms.bPermanentlyDeadOnceKilled_ = bPermanentlyDeadOnceKilled_;
	Parms.PatrolPointA = PatrolPointA;
	Parms.bShouldWander_ = bShouldWander_;
	Parms.PatrolPointB = PatrolPointB;
	Parms.AggroRadius = AggroRadius;
	Parms.TriggerToActivateOnAggro = TriggerToActivateOnAggro;
	Parms.ShouldPatrol_ = ShouldPatrol_;
	Parms.SpawnTransform = SpawnTransform;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NecroKnight.NecroKnight_C.StunonAggro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ANecroKnight_C::StunonAggro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NecroKnight_C", "StunonAggro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NecroKnight.NecroKnight_C.PlayDeathSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ANecroKnight_C::PlayDeathSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NecroKnight_C", "PlayDeathSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NecroKnight.NecroKnight_C.PlayDeathMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ANecroKnight_C::PlayDeathMontage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NecroKnight_C", "PlayDeathMontage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NecroKnight.NecroKnight_C.ExecuteUbergraph_NecroKnight
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Killer                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShouldPlayDeathAnim                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue                                (ReferenceParm, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue_1                              (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_HitLocation                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam                               (IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Visible_                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Event_ImpactPoint                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_ImpactNormal                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetUpVector_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue_2                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAdvancedEnemySpawner_C*     K2Node_Event_SpawnerRef                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_UniqueID                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELevelPhases            K2Node_Event_PhaseToSpawn                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bPermanentlyDeadOnceKilled_                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APatrolPoint_C*              K2Node_Event_PatrolPointA                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShouldWander_                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APatrolPoint_C*              K2Node_Event_PatrolPointB                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_AggroRadius                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_TriggerOnEnemyAggro_C*   K2Node_Event_TriggerToActivateOnAggro                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_ShouldPatrol_                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  K2Node_Event_SpawnTransform                                      (IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue_3                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeUnclamped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeUnclamped_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               CallFunc_GetAIController_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMyDetourCrowdAIController_C*K2Node_DynamicCast_AsMy_Detour_Crowd_AIController                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANecroKnight_C::ExecuteUbergraph_NecroKnight(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class FName K2Node_CustomEvent_NotifyName_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName Temp_name_Variable_1, int32 Temp_int_Array_Index_Variable, float K2Node_Event_DeltaSeconds, class AActor* K2Node_Event_Killer, bool K2Node_Event_bShouldPlayDeathAnim, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_1, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_2, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_3, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_4, int32 Temp_int_Loop_Counter_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& K2Node_Event_HitLocation, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, int32 CallFunc_Array_Add_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, bool K2Node_Event_Visible_, const struct FVector& K2Node_Event_ImpactPoint, const struct FVector& K2Node_Event_ImpactNormal, const struct FVector& CallFunc_GetUpVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, class AAdvancedEnemySpawner_C* K2Node_Event_SpawnerRef, class FName K2Node_Event_UniqueID, enum class ELevelPhases K2Node_Event_PhaseToSpawn, bool K2Node_Event_bPermanentlyDeadOnceKilled_, class APatrolPoint_C* K2Node_Event_PatrolPointA, bool K2Node_Event_bShouldWander_, class APatrolPoint_C* K2Node_Event_PatrolPointB, float K2Node_Event_AggroRadius, class ABP_TriggerOnEnemyAggro_C* K2Node_Event_TriggerToActivateOnAggro, bool K2Node_Event_ShouldPatrol_, const struct FTransform& K2Node_Event_SpawnTransform, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_3, float CallFunc_VSize_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue, float CallFunc_VSize_ReturnValue_1, float CallFunc_MapRangeUnclamped_ReturnValue_1, class AAIController* CallFunc_GetAIController_ReturnValue, class AMyDetourCrowdAIController_C* K2Node_DynamicCast_AsMy_Detour_Crowd_AIController, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, float CallFunc_Conv_BoolToFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NecroKnight_C", "ExecuteUbergraph_NecroKnight");

	Params::ANecroKnight_C_ExecuteUbergraph_NecroKnight_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_9 = K2Node_CustomEvent_NotifyName_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyName_8 = K2Node_CustomEvent_NotifyName_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName_7 = K2Node_CustomEvent_NotifyName_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_NotifyName_6 = K2Node_CustomEvent_NotifyName_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_NotifyName_5 = K2Node_CustomEvent_NotifyName_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_Killer = K2Node_Event_Killer;
	Parms.K2Node_Event_bShouldPlayDeathAnim = K2Node_Event_bShouldPlayDeathAnim;
	Parms.CallFunc_GetMaterials_ReturnValue = CallFunc_GetMaterials_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetMaterials_ReturnValue_1 = CallFunc_GetMaterials_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_HitLocation = K2Node_Event_HitLocation;
	Parms.K2Node_MakeStruct_ParticleSysParam = K2Node_MakeStruct_ParticleSysParam;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.K2Node_Event_Visible_ = K2Node_Event_Visible_;
	Parms.K2Node_Event_ImpactPoint = K2Node_Event_ImpactPoint;
	Parms.K2Node_Event_ImpactNormal = K2Node_Event_ImpactNormal;
	Parms.CallFunc_GetUpVector_ReturnValue = CallFunc_GetUpVector_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue_1 = CallFunc_SpawnEmitterAtLocation_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue_2 = CallFunc_SpawnEmitterAtLocation_ReturnValue_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.K2Node_Event_SpawnerRef = K2Node_Event_SpawnerRef;
	Parms.K2Node_Event_UniqueID = K2Node_Event_UniqueID;
	Parms.K2Node_Event_PhaseToSpawn = K2Node_Event_PhaseToSpawn;
	Parms.K2Node_Event_bPermanentlyDeadOnceKilled_ = K2Node_Event_bPermanentlyDeadOnceKilled_;
	Parms.K2Node_Event_PatrolPointA = K2Node_Event_PatrolPointA;
	Parms.K2Node_Event_bShouldWander_ = K2Node_Event_bShouldWander_;
	Parms.K2Node_Event_PatrolPointB = K2Node_Event_PatrolPointB;
	Parms.K2Node_Event_AggroRadius = K2Node_Event_AggroRadius;
	Parms.K2Node_Event_TriggerToActivateOnAggro = K2Node_Event_TriggerToActivateOnAggro;
	Parms.K2Node_Event_ShouldPatrol_ = K2Node_Event_ShouldPatrol_;
	Parms.K2Node_Event_SpawnTransform = K2Node_Event_SpawnTransform;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue_3 = CallFunc_SpawnEmitterAtLocation_ReturnValue_3;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue = CallFunc_MapRangeUnclamped_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue_1 = CallFunc_VSize_ReturnValue_1;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue_1 = CallFunc_MapRangeUnclamped_ReturnValue_1;
	Parms.CallFunc_GetAIController_ReturnValue = CallFunc_GetAIController_ReturnValue;
	Parms.K2Node_DynamicCast_AsMy_Detour_Crowd_AIController = K2Node_DynamicCast_AsMy_Detour_Crowd_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_3 = CallFunc_K2_GetActorLocation_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_4 = CallFunc_K2_GetActorLocation_ReturnValue_4;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue_1 = CallFunc_Conv_BoolToFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue_2 = CallFunc_Conv_BoolToFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


