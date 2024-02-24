#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_Attacker.BPI_Attacker_C
// (None)

class UClass* IBPI_Attacker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_Attacker_C");

	return Clss;
}


// BPI_Attacker_C BPI_Attacker.Default__BPI_Attacker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_Attacker_C* IBPI_Attacker_C::GetDefaultObj()
{
	static class IBPI_Attacker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_Attacker_C*>(IBPI_Attacker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_Attacker.BPI_Attacker_C.StopCastEffects
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Attacker_C::StopCastEffects(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Attacker_C", "StopCastEffects");

	Params::IBPI_Attacker_C_StopCastEffects_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPI_Attacker.BPI_Attacker_C.PlayCastEffects
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Attacker_C::PlayCastEffects(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Attacker_C", "PlayCastEffects");

	Params::IBPI_Attacker_C_PlayCastEffects_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPI_Attacker.BPI_Attacker_C.GetEquippedWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEquippableItem*             CreatureWeapon                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_Attacker_C::GetEquippedWeapon(class AEquippableItem** CreatureWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Attacker_C", "GetEquippedWeapon");

	Params::IBPI_Attacker_C_GetEquippedWeapon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CreatureWeapon != nullptr)
		*CreatureWeapon = Parms.CreatureWeapon;

}


// Function BPI_Attacker.BPI_Attacker_C.EquipWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                GameplayWeaponTag                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               Succeeded                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Attacker_C::EquipWeapon(const struct FGameplayTag& GameplayWeaponTag, bool* Succeeded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Attacker_C", "EquipWeapon");

	Params::IBPI_Attacker_C_EquipWeapon_Params Parms{};

	Parms.GameplayWeaponTag = GameplayWeaponTag;

	UObject::ProcessEvent(Func, &Parms);

	if (Succeeded != nullptr)
		*Succeeded = Parms.Succeeded;

}


// Function BPI_Attacker.BPI_Attacker_C.SelectWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      AttackTarget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                GameplayWeaponTag                                                (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void IBPI_Attacker_C::SelectWeapon(class AActor* AttackTarget, struct FGameplayTag* GameplayWeaponTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Attacker_C", "SelectWeapon");

	Params::IBPI_Attacker_C_SelectWeapon_Params Parms{};

	Parms.AttackTarget = AttackTarget;

	UObject::ProcessEvent(Func, &Parms);

	if (GameplayWeaponTag != nullptr)
		*GameplayWeaponTag = std::move(Parms.GameplayWeaponTag);

}


// Function BPI_Attacker.BPI_Attacker_C.DisableMeleeCollision
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Attacker_C::DisableMeleeCollision(bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Attacker_C", "DisableMeleeCollision");

	Params::IBPI_Attacker_C_DisableMeleeCollision_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function BPI_Attacker.BPI_Attacker_C.EnableMeleeCollision
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Attacker_C::EnableMeleeCollision(bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Attacker_C", "EnableMeleeCollision");

	Params::IBPI_Attacker_C_EnableMeleeCollision_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function BPI_Attacker.BPI_Attacker_C.CanAttack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bCanAttack                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Attacker_C::CanAttack(bool* bCanAttack)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Attacker_C", "CanAttack");

	Params::IBPI_Attacker_C_CanAttack_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bCanAttack != nullptr)
		*bCanAttack = Parms.bCanAttack;

}


// Function BPI_Attacker.BPI_Attacker_C.SelectAttack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      AttackTarget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                GameplayAttackTag                                                (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void IBPI_Attacker_C::SelectAttack(class AActor* AttackTarget, struct FGameplayTag* GameplayAttackTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Attacker_C", "SelectAttack");

	Params::IBPI_Attacker_C_SelectAttack_Params Parms{};

	Parms.AttackTarget = AttackTarget;

	UObject::ProcessEvent(Func, &Parms);

	if (GameplayAttackTag != nullptr)
		*GameplayAttackTag = std::move(Parms.GameplayAttackTag);

}


// Function BPI_Attacker.BPI_Attacker_C.Attack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                GameplayAttackTag                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               Succeeded                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Attacker_C::Attack(const struct FGameplayTag& GameplayAttackTag, bool* Succeeded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Attacker_C", "Attack");

	Params::IBPI_Attacker_C_Attack_Params Parms{};

	Parms.GameplayAttackTag = GameplayAttackTag;

	UObject::ProcessEvent(Func, &Parms);

	if (Succeeded != nullptr)
		*Succeeded = Parms.Succeeded;

}

}


