#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_WeaponUser.BPI_WeaponUser_C
// (None)

class UClass* IBPI_WeaponUser_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_WeaponUser_C");

	return Clss;
}


// BPI_WeaponUser_C BPI_WeaponUser.Default__BPI_WeaponUser_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_WeaponUser_C* IBPI_WeaponUser_C::GetDefaultObj()
{
	static class IBPI_WeaponUser_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_WeaponUser_C*>(IBPI_WeaponUser_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_WeaponUser.BPI_WeaponUser_C.HandleHitConnectedPredictive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  HitResult                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void IBPI_WeaponUser_C::HandleHitConnectedPredictive(struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_WeaponUser_C", "HandleHitConnectedPredictive");

	Params::IBPI_WeaponUser_C_HandleHitConnectedPredictive_Params Parms{};

	Parms.HitResult = HitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_WeaponUser.BPI_WeaponUser_C.PlayItemCameraShake
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                ShakeTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// double                             Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                SlotTag                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void IBPI_WeaponUser_C::PlayItemCameraShake(const struct FGameplayTag& ShakeTag, double Scale, const struct FGameplayTag& SlotTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_WeaponUser_C", "PlayItemCameraShake");

	Params::IBPI_WeaponUser_C_PlayItemCameraShake_Params Parms{};

	Parms.ShakeTag = ShakeTag;
	Parms.Scale = Scale;
	Parms.SlotTag = SlotTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_WeaponUser.BPI_WeaponUser_C.PlayAttackAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage3P                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_WeaponUser_C::PlayAttackAnimation(class UAnimMontage* Montage3P)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_WeaponUser_C", "PlayAttackAnimation");

	Params::IBPI_WeaponUser_C_PlayAttackAnimation_Params Parms{};

	Parms.Montage3P = Montage3P;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_WeaponUser.BPI_WeaponUser_C.ConsumeAmmo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDataReference          AmmoReference                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AmountConsumed                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_WeaponUser_C::ConsumeAmmo(const struct FItemDataReference& AmmoReference, int32 Amount, int32* AmountConsumed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_WeaponUser_C", "ConsumeAmmo");

	Params::IBPI_WeaponUser_C_ConsumeAmmo_Params Parms{};

	Parms.AmmoReference = AmmoReference;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

	if (AmountConsumed != nullptr)
		*AmountConsumed = Parms.AmountConsumed;

}


// Function BPI_WeaponUser.BPI_WeaponUser_C.GetAmmoAmount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDataReference          ItemReference                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              Amount                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_WeaponUser_C::GetAmmoAmount(const struct FItemDataReference& ItemReference, int32* Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_WeaponUser_C", "GetAmmoAmount");

	Params::IBPI_WeaponUser_C_GetAmmoAmount_Params Parms{};

	Parms.ItemReference = ItemReference;

	UObject::ProcessEvent(Func, &Parms);

	if (Amount != nullptr)
		*Amount = Parms.Amount;

}


// Function BPI_WeaponUser.BPI_WeaponUser_C.HandlePostHitConnected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Hit_Actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_HitType               HitType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_WeaponUser_C::HandlePostHitConnected(class AActor* Hit_Actor, double Damage, enum class E_HitType HitType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_WeaponUser_C", "HandlePostHitConnected");

	Params::IBPI_WeaponUser_C_HandlePostHitConnected_Params Parms{};

	Parms.Hit_Actor = Hit_Actor;
	Parms.Damage = Damage;
	Parms.HitType = HitType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_WeaponUser.BPI_WeaponUser_C.GetShotInstigator
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_WeaponUser_C::GetShotInstigator(class AController** Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_WeaponUser_C", "GetShotInstigator");

	Params::IBPI_WeaponUser_C_GetShotInstigator_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Controller != nullptr)
		*Controller = Parms.Controller;

}


// Function BPI_WeaponUser.BPI_WeaponUser_C.HandlePostAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_WeaponUser_C::HandlePostAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_WeaponUser_C", "HandlePostAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_WeaponUser.BPI_WeaponUser_C.GetProjectileStart
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// double                             ProjectileLaunchDistance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ProjectileStart                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_WeaponUser_C::GetProjectileStart(double ProjectileLaunchDistance, struct FVector* ProjectileStart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_WeaponUser_C", "GetProjectileStart");

	Params::IBPI_WeaponUser_C_GetProjectileStart_Params Parms{};

	Parms.ProjectileLaunchDistance = ProjectileLaunchDistance;

	UObject::ProcessEvent(Func, &Parms);

	if (ProjectileStart != nullptr)
		*ProjectileStart = std::move(Parms.ProjectileStart);

}


// Function BPI_WeaponUser.BPI_WeaponUser_C.GetShootVector
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// double                             ProjectileLaunchDistance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ForwardVector                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_WeaponUser_C::GetShootVector(double ProjectileLaunchDistance, struct FVector* ForwardVector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_WeaponUser_C", "GetShootVector");

	Params::IBPI_WeaponUser_C_GetShootVector_Params Parms{};

	Parms.ProjectileLaunchDistance = ProjectileLaunchDistance;

	UObject::ProcessEvent(Func, &Parms);

	if (ForwardVector != nullptr)
		*ForwardVector = std::move(Parms.ForwardVector);

}


// Function BPI_WeaponUser.BPI_WeaponUser_C.GetEquippedRangedWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayTag                ContextTag                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             EquippedItem                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_WeaponUser_C::GetEquippedRangedWeapon(const struct FGameplayTag& ContextTag, class AEquippableItem** EquippedItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_WeaponUser_C", "GetEquippedRangedWeapon");

	Params::IBPI_WeaponUser_C_GetEquippedRangedWeapon_Params Parms{};

	Parms.ContextTag = ContextTag;

	UObject::ProcessEvent(Func, &Parms);

	if (EquippedItem != nullptr)
		*EquippedItem = Parms.EquippedItem;

}

}


