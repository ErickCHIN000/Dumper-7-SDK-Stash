#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnemyCommonInterface.EnemyCommonInterface_C
// (None)

class UClass* IEnemyCommonInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyCommonInterface_C");

	return Clss;
}


// EnemyCommonInterface_C EnemyCommonInterface.Default__EnemyCommonInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IEnemyCommonInterface_C* IEnemyCommonInterface_C::GetDefaultObj()
{
	static class IEnemyCommonInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IEnemyCommonInterface_C*>(IEnemyCommonInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EnemyCommonInterface.EnemyCommonInterface_C.Enemy_StoneSkinTimeline_End
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IEnemyCommonInterface_C::Enemy_StoneSkinTimeline_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCommonInterface_C", "Enemy_StoneSkinTimeline_End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCommonInterface.EnemyCommonInterface_C.Enemy_StoneSkinTimeline_Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IEnemyCommonInterface_C::Enemy_StoneSkinTimeline_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCommonInterface_C", "Enemy_StoneSkinTimeline_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCommonInterface.EnemyCommonInterface_C.Enemy_ReEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IEnemyCommonInterface_C::Enemy_ReEnable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCommonInterface_C", "Enemy_ReEnable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCommonInterface.EnemyCommonInterface_C.Enemy_DeAggroPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IEnemyCommonInterface_C::Enemy_DeAggroPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCommonInterface_C", "Enemy_DeAggroPlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCommonInterface.EnemyCommonInterface_C.Enemy_IsInParryableState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsParryableState_                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IEnemyCommonInterface_C::Enemy_IsInParryableState(bool* IsParryableState_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCommonInterface_C", "Enemy_IsInParryableState");

	Params::IEnemyCommonInterface_C_Enemy_IsInParryableState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsParryableState_ != nullptr)
		*IsParryableState_ = Parms.IsParryableState_;

}


// Function EnemyCommonInterface.EnemyCommonInterface_C.EnemyCommon_StopPhysicalHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IEnemyCommonInterface_C::EnemyCommon_StopPhysicalHit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCommonInterface_C", "EnemyCommon_StopPhysicalHit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCommonInterface.EnemyCommonInterface_C.BossCrucix_IsSimulatingLittleBro
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool IEnemyCommonInterface_C::BossCrucix_IsSimulatingLittleBro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCommonInterface_C", "BossCrucix_IsSimulatingLittleBro");

	Params::IEnemyCommonInterface_C_BossCrucix_IsSimulatingLittleBro_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EnemyCommonInterface.EnemyCommonInterface_C.BossCrucix_SimLittleBro_Stop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IEnemyCommonInterface_C::BossCrucix_SimLittleBro_Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCommonInterface_C", "BossCrucix_SimLittleBro_Stop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCommonInterface.EnemyCommonInterface_C.BossCrucix_SimLittleBro_Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IEnemyCommonInterface_C::BossCrucix_SimLittleBro_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCommonInterface_C", "BossCrucix_SimLittleBro_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCommonInterface.EnemyCommonInterface_C.BossCharacterHadern_IsHadern
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHadern                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IEnemyCommonInterface_C::BossCharacterHadern_IsHadern(bool* IsHadern)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCommonInterface_C", "BossCharacterHadern_IsHadern");

	Params::IEnemyCommonInterface_C_BossCharacterHadern_IsHadern_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsHadern != nullptr)
		*IsHadern = Parms.IsHadern;

}


// Function EnemyCommonInterface.EnemyCommonInterface_C.BossCryptCharacter_GetThrowAttack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ThrowAttack                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IEnemyCommonInterface_C::BossCryptCharacter_GetThrowAttack(bool* ThrowAttack)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCommonInterface_C", "BossCryptCharacter_GetThrowAttack");

	Params::IEnemyCommonInterface_C_BossCryptCharacter_GetThrowAttack_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ThrowAttack != nullptr)
		*ThrowAttack = Parms.ThrowAttack;

}


// Function EnemyCommonInterface.EnemyCommonInterface_C.EnemyCommon_SkipDeathBlowReactionAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldSkip                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IEnemyCommonInterface_C::EnemyCommon_SkipDeathBlowReactionAnimation(bool* ShouldSkip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCommonInterface_C", "EnemyCommon_SkipDeathBlowReactionAnimation");

	Params::IEnemyCommonInterface_C_EnemyCommon_SkipDeathBlowReactionAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ShouldSkip != nullptr)
		*ShouldSkip = Parms.ShouldSkip;

}


// Function EnemyCommonInterface.EnemyCommonInterface_C.EnemyCommon_GetHealth
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Health                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MaxHealth                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IEnemyCommonInterface_C::EnemyCommon_GetHealth(float* Health, float* MaxHealth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCommonInterface_C", "EnemyCommon_GetHealth");

	Params::IEnemyCommonInterface_C_EnemyCommon_GetHealth_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Health != nullptr)
		*Health = Parms.Health;

	if (MaxHealth != nullptr)
		*MaxHealth = Parms.MaxHealth;

}


// Function EnemyCommonInterface.EnemyCommonInterface_C.ForceReturn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IEnemyCommonInterface_C::ForceReturn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCommonInterface_C", "ForceReturn");



	UObject::ProcessEvent(Func, nullptr);

}

}


