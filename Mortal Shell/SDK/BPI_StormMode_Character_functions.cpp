#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_StormMode_Character.BPI_StormMode_Character_C
// (None)

class UClass* IBPI_StormMode_Character_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_StormMode_Character_C");

	return Clss;
}


// BPI_StormMode_Character_C BPI_StormMode_Character.Default__BPI_StormMode_Character_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_StormMode_Character_C* IBPI_StormMode_Character_C::GetDefaultObj()
{
	static class IBPI_StormMode_Character_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_StormMode_Character_C*>(IBPI_StormMode_Character_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_StormMode_Character.BPI_StormMode_Character_C.OnLuteStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormMode_Character_C::OnLuteStateChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_Character_C", "OnLuteStateChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormMode_Character.BPI_StormMode_Character_C.GetRiposteCathDropItemChance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Chance                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormMode_Character_C::GetRiposteCathDropItemChance(float* Chance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_Character_C", "GetRiposteCathDropItemChance");

	Params::IBPI_StormMode_Character_C_GetRiposteCathDropItemChance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Chance != nullptr)
		*Chance = Parms.Chance;

}


// Function BPI_StormMode_Character.BPI_StormMode_Character_C.SpecialWeaponSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormMode_Character_C::SpecialWeaponSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_Character_C", "SpecialWeaponSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormMode_Character.BPI_StormMode_Character_C.RemoveMaxResolveBonus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormMode_Character_C::RemoveMaxResolveBonus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_Character_C", "RemoveMaxResolveBonus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormMode_Character.BPI_StormMode_Character_C.AddMaxResolveBonus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormMode_Character_C::AddMaxResolveBonus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_Character_C", "AddMaxResolveBonus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormMode_Character.BPI_StormMode_Character_C.GetBurningMaceDamageBonus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Bonus                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormMode_Character_C::GetBurningMaceDamageBonus(float* Bonus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_Character_C", "GetBurningMaceDamageBonus");

	Params::IBPI_StormMode_Character_C_GetBurningMaceDamageBonus_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Bonus != nullptr)
		*Bonus = Parms.Bonus;

}


// Function BPI_StormMode_Character.BPI_StormMode_Character_C.GetBoltDropChance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Chance                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormMode_Character_C::GetBoltDropChance(float* Chance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_Character_C", "GetBoltDropChance");

	Params::IBPI_StormMode_Character_C_GetBoltDropChance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Chance != nullptr)
		*Chance = Parms.Chance;

}


// Function BPI_StormMode_Character.BPI_StormMode_Character_C.StormMode_RekindledMaceProjectile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormMode_Character_C::StormMode_RekindledMaceProjectile()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_Character_C", "StormMode_RekindledMaceProjectile");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormMode_Character.BPI_StormMode_Character_C.StormMode_GlacialBladeProjectile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormMode_Character_C::StormMode_GlacialBladeProjectile()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_Character_C", "StormMode_GlacialBladeProjectile");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormMode_Character.BPI_StormMode_Character_C.GetUnlockedRipostes
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class ERiposteTypes>   Ripostes                                                         (Parm, OutParm, HasGetValueTypeHash)

void IBPI_StormMode_Character_C::GetUnlockedRipostes(TArray<enum class ERiposteTypes>* Ripostes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_Character_C", "GetUnlockedRipostes");

	Params::IBPI_StormMode_Character_C_GetUnlockedRipostes_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Ripostes != nullptr)
		*Ripostes = std::move(Parms.Ripostes);

}


// Function BPI_StormMode_Character.BPI_StormMode_Character_C.ReloadRipostes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormMode_Character_C::ReloadRipostes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_Character_C", "ReloadRipostes");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormMode_Character.BPI_StormMode_Character_C.StormMode_IsCrawling
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Crawling                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_StormMode_Character_C::StormMode_IsCrawling(bool* Crawling)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_Character_C", "StormMode_IsCrawling");

	Params::IBPI_StormMode_Character_C_StormMode_IsCrawling_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Crawling != nullptr)
		*Crawling = Parms.Crawling;

}


// Function BPI_StormMode_Character.BPI_StormMode_Character_C.AddStartingRiposte
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERiposteTypes           Riposte                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormMode_Character_C::AddStartingRiposte(enum class ERiposteTypes Riposte)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_Character_C", "AddStartingRiposte");

	Params::IBPI_StormMode_Character_C_AddStartingRiposte_Params Parms{};

	Parms.Riposte = Riposte;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormMode_Character.BPI_StormMode_Character_C.ChangeWeaponUtil
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EComboTypes             NewWeapon                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormMode_Character_C::ChangeWeaponUtil(enum class EComboTypes NewWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_Character_C", "ChangeWeaponUtil");

	Params::IBPI_StormMode_Character_C_ChangeWeaponUtil_Params Parms{};

	Parms.NewWeapon = NewWeapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormMode_Character.BPI_StormMode_Character_C.ChangeShellUtil
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             Shell                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormMode_Character_C::ChangeShellUtil(enum class EArmorTypes Shell)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_Character_C", "ChangeShellUtil");

	Params::IBPI_StormMode_Character_C_ChangeShellUtil_Params Parms{};

	Parms.Shell = Shell;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormMode_Character.BPI_StormMode_Character_C.ClearLockOnEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormMode_Character_C::ClearLockOnEnemy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_Character_C", "ClearLockOnEnemy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormMode_Character.BPI_StormMode_Character_C.HasCharacterFullySpawned
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool IBPI_StormMode_Character_C::HasCharacterFullySpawned()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_Character_C", "HasCharacterFullySpawned");

	Params::IBPI_StormMode_Character_C_HasCharacterFullySpawned_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPI_StormMode_Character.BPI_StormMode_Character_C.HallowedSwordSuper_LifeSteal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           Enemy                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormMode_Character_C::HallowedSwordSuper_LifeSteal(float Damage, class AEnemyCharacter_C* Enemy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_Character_C", "HallowedSwordSuper_LifeSteal");

	Params::IBPI_StormMode_Character_C_HallowedSwordSuper_LifeSteal_Params Parms{};

	Parms.Damage = Damage;
	Parms.Enemy = Enemy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormMode_Character.BPI_StormMode_Character_C.KickRune_3
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PoiseReduction                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormMode_Character_C::KickRune_3(float* PoiseReduction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_Character_C", "KickRune_3");

	Params::IBPI_StormMode_Character_C_KickRune_3_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PoiseReduction != nullptr)
		*PoiseReduction = Parms.PoiseReduction;

}


// Function BPI_StormMode_Character.BPI_StormMode_Character_C.KickRune_2
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormMode_Character_C::KickRune_2(float* Damage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_Character_C", "KickRune_2");

	Params::IBPI_StormMode_Character_C_KickRune_2_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Damage != nullptr)
		*Damage = Parms.Damage;

}


// Function BPI_StormMode_Character.BPI_StormMode_Character_C.KickRune_1
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      KickedActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_StormMode_Character_C::KickRune_1(class AActor* KickedActor, bool* Success_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_Character_C", "KickRune_1");

	Params::IBPI_StormMode_Character_C_KickRune_1_Params Parms{};

	Parms.KickedActor = KickedActor;

	UObject::ProcessEvent(Func, &Parms);

	if (Success_ != nullptr)
		*Success_ = Parms.Success_;

}


// Function BPI_StormMode_Character.BPI_StormMode_Character_C.HandleKickRunes
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        KickRune                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormMode_Character_C::HandleKickRunes(class FName* KickRune)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_Character_C", "HandleKickRunes");

	Params::IBPI_StormMode_Character_C_HandleKickRunes_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (KickRune != nullptr)
		*KickRune = Parms.KickRune;

}


// Function BPI_StormMode_Character.BPI_StormMode_Character_C.AddImmediateEffectRune
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Rune                Rune                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void IBPI_StormMode_Character_C::AddImmediateEffectRune(const struct FStruct_Rune& Rune)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_Character_C", "AddImmediateEffectRune");

	Params::IBPI_StormMode_Character_C_AddImmediateEffectRune_Params Parms{};

	Parms.Rune = Rune;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormMode_Character.BPI_StormMode_Character_C.AddResolveOnRunStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormMode_Character_C::AddResolveOnRunStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_Character_C", "AddResolveOnRunStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormMode_Character.BPI_StormMode_Character_C.ApplyImmediateRuneEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormMode_Character_C::ApplyImmediateRuneEffect(class FName ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_Character_C", "ApplyImmediateRuneEffect");

	Params::IBPI_StormMode_Character_C_ApplyImmediateRuneEffect_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormMode_Character.BPI_StormMode_Character_C.ApplyRuneHealingEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             Component                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormMode_Character_C::ApplyRuneHealingEffect(class AActor* Actor, class USceneComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_Character_C", "ApplyRuneHealingEffect");

	Params::IBPI_StormMode_Character_C_ApplyRuneHealingEffect_Params Parms{};

	Parms.Actor = Actor;
	Parms.Component = Component;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormMode_Character.BPI_StormMode_Character_C.DisableAllRunesObjects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormMode_Character_C::DisableAllRunesObjects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_Character_C", "DisableAllRunesObjects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormMode_Character.BPI_StormMode_Character_C.StopForceWalking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormMode_Character_C::StopForceWalking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_Character_C", "StopForceWalking");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormMode_Character.BPI_StormMode_Character_C.ForceWalking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormMode_Character_C::ForceWalking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_Character_C", "ForceWalking");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormMode_Character.BPI_StormMode_Character_C.NewRuneHasBeenAdded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormMode_Character_C::NewRuneHasBeenAdded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_Character_C", "NewRuneHasBeenAdded");



	UObject::ProcessEvent(Func, nullptr);

}

}


