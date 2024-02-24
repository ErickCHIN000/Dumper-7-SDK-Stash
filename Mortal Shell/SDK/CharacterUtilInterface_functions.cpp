#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CharacterUtilInterface.CharacterUtilInterface_C
// (None)

class UClass* ICharacterUtilInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CharacterUtilInterface_C");

	return Clss;
}


// CharacterUtilInterface_C CharacterUtilInterface.Default__CharacterUtilInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ICharacterUtilInterface_C* ICharacterUtilInterface_C::GetDefaultObj()
{
	static class ICharacterUtilInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ICharacterUtilInterface_C*>(ICharacterUtilInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CharacterUtilInterface.CharacterUtilInterface_C.0_Base_ResetSuperStoneForm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ICharacterUtilInterface_C::Zero_Base_ResetSuperStoneForm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterUtilInterface_C", "0_Base_ResetSuperStoneForm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterUtilInterface.CharacterUtilInterface_C.0_Base_ResetAllRiposteStack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ICharacterUtilInterface_C::Zero_Base_ResetAllRiposteStack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterUtilInterface_C", "0_Base_ResetAllRiposteStack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterUtilInterface.CharacterUtilInterface_C.0_Base_DeflectStackTarBonus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TarBonus                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ICharacterUtilInterface_C::Zero_Base_DeflectStackTarBonus(int32* TarBonus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterUtilInterface_C", "0_Base_DeflectStackTarBonus");

	Params::ICharacterUtilInterface_C_Zero_Base_DeflectStackTarBonus_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TarBonus != nullptr)
		*TarBonus = Parms.TarBonus;

}


// Function CharacterUtilInterface.CharacterUtilInterface_C.0_Base_ResetAllDeflectStack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ICharacterUtilInterface_C::Zero_Base_ResetAllDeflectStack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterUtilInterface_C", "0_Base_ResetAllDeflectStack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterUtilInterface.CharacterUtilInterface_C.Character_Super2CostOneResolve?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ICharacterUtilInterface_C::Character_Super2CostOneResolve_()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterUtilInterface_C", "Character_Super2CostOneResolve?");

	Params::ICharacterUtilInterface_C_Character_Super2CostOneResolve__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CharacterUtilInterface.CharacterUtilInterface_C.Character_Super1CostOneResolve?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ICharacterUtilInterface_C::Character_Super1CostOneResolve_()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterUtilInterface_C", "Character_Super1CostOneResolve?");

	Params::ICharacterUtilInterface_C_Character_Super1CostOneResolve__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CharacterUtilInterface.CharacterUtilInterface_C.CharacterUtils_AddRemove_Tar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TarAmount                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bStormSpent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ICharacterUtilInterface_C::CharacterUtils_AddRemove_Tar(int32 TarAmount, bool bStormSpent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterUtilInterface_C", "CharacterUtils_AddRemove_Tar");

	Params::ICharacterUtilInterface_C_CharacterUtils_AddRemove_Tar_Params Parms{};

	Parms.TarAmount = TarAmount;
	Parms.bStormSpent = bStormSpent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterUtilInterface.CharacterUtilInterface_C.0_Base_GetCurrentWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EComboTypes             CurrentWeapon                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ICharacterUtilInterface_C::Zero_Base_GetCurrentWeapon(enum class EComboTypes* CurrentWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterUtilInterface_C", "0_Base_GetCurrentWeapon");

	Params::ICharacterUtilInterface_C_Zero_Base_GetCurrentWeapon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CurrentWeapon != nullptr)
		*CurrentWeapon = Parms.CurrentWeapon;

}


// Function CharacterUtilInterface.CharacterUtilInterface_C.0Base_HideSacredGlands
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hidden_                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ICharacterUtilInterface_C::ZeroBase_HideSacredGlands(bool Hidden_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterUtilInterface_C", "0Base_HideSacredGlands");

	Params::ICharacterUtilInterface_C_ZeroBase_HideSacredGlands_Params Parms{};

	Parms.Hidden_ = Hidden_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterUtilInterface.CharacterUtilInterface_C.0Base_HideTarnishedSeal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hidden_                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ICharacterUtilInterface_C::ZeroBase_HideTarnishedSeal(bool Hidden_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterUtilInterface_C", "0Base_HideTarnishedSeal");

	Params::ICharacterUtilInterface_C_ZeroBase_HideTarnishedSeal_Params Parms{};

	Parms.Hidden_ = Hidden_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterUtilInterface.CharacterUtilInterface_C.CharacterIsFrozen?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ICharacterUtilInterface_C::CharacterIsFrozen_()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterUtilInterface_C", "CharacterIsFrozen?");

	Params::ICharacterUtilInterface_C_CharacterIsFrozen__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CharacterUtilInterface.CharacterUtilInterface_C.Barbarous_GetFireGland
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*        Mesh                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ICharacterUtilInterface_C::Barbarous_GetFireGland(class UStaticMeshComponent** Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterUtilInterface_C", "Barbarous_GetFireGland");

	Params::ICharacterUtilInterface_C_Barbarous_GetFireGland_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;

}


// Function CharacterUtilInterface.CharacterUtilInterface_C.Barbarous_GetCathedralGland
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*        Mesh                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ICharacterUtilInterface_C::Barbarous_GetCathedralGland(class UStaticMeshComponent** Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterUtilInterface_C", "Barbarous_GetCathedralGland");

	Params::ICharacterUtilInterface_C_Barbarous_GetCathedralGland_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;

}


// Function CharacterUtilInterface.CharacterUtilInterface_C.Barbarous_GetCryptGland
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*        Mesh                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ICharacterUtilInterface_C::Barbarous_GetCryptGland(class UStaticMeshComponent** Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterUtilInterface_C", "Barbarous_GetCryptGland");

	Params::ICharacterUtilInterface_C_Barbarous_GetCryptGland_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;

}


// Function CharacterUtilInterface.CharacterUtilInterface_C.0_Base_SetTarnishedSealVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ICharacterUtilInterface_C::Zero_Base_SetTarnishedSealVisibility(float Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterUtilInterface_C", "0_Base_SetTarnishedSealVisibility");

	Params::ICharacterUtilInterface_C_Zero_Base_SetTarnishedSealVisibility_Params Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterUtilInterface.CharacterUtilInterface_C.0_Base_GetMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      Mesh                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ICharacterUtilInterface_C::Zero_Base_GetMesh(class USkeletalMeshComponent** Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterUtilInterface_C", "0_Base_GetMesh");

	Params::ICharacterUtilInterface_C_Zero_Base_GetMesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;

}


// Function CharacterUtilInterface.CharacterUtilInterface_C.0_Base_WeaponVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ICharacterUtilInterface_C::Zero_Base_WeaponVisibility(bool Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterUtilInterface_C", "0_Base_WeaponVisibility");

	Params::ICharacterUtilInterface_C_Zero_Base_WeaponVisibility_Params Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterUtilInterface.CharacterUtilInterface_C.0_Base_SetDisabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Disabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ICharacterUtilInterface_C::Zero_Base_SetDisabled(bool Disabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterUtilInterface_C", "0_Base_SetDisabled");

	Params::ICharacterUtilInterface_C_Zero_Base_SetDisabled_Params Parms{};

	Parms.Disabled = Disabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterUtilInterface.CharacterUtilInterface_C.0_Base_GetCurrentArmor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             CurrentArmorType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ICharacterUtilInterface_C::Zero_Base_GetCurrentArmor(enum class EArmorTypes* CurrentArmorType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterUtilInterface_C", "0_Base_GetCurrentArmor");

	Params::ICharacterUtilInterface_C_Zero_Base_GetCurrentArmor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CurrentArmorType != nullptr)
		*CurrentArmorType = Parms.CurrentArmorType;

}


// Function CharacterUtilInterface.CharacterUtilInterface_C.Barbarous_SetInvulnerable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Invulnerable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ICharacterUtilInterface_C::Barbarous_SetInvulnerable(bool Invulnerable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterUtilInterface_C", "Barbarous_SetInvulnerable");

	Params::ICharacterUtilInterface_C_Barbarous_SetInvulnerable_Params Parms{};

	Parms.Invulnerable = Invulnerable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterUtilInterface.CharacterUtilInterface_C.Barbarous_ChangeShells
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Fast_Change                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Reinit_Pose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               DidChange                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ICharacterUtilInterface_C::Barbarous_ChangeShells(bool Fast_Change, bool Reinit_Pose, bool* DidChange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterUtilInterface_C", "Barbarous_ChangeShells");

	Params::ICharacterUtilInterface_C_Barbarous_ChangeShells_Params Parms{};

	Parms.Fast_Change = Fast_Change;
	Parms.Reinit_Pose = Reinit_Pose;

	UObject::ProcessEvent(Func, &Parms);

	if (DidChange != nullptr)
		*DidChange = Parms.DidChange;

}


// Function CharacterUtilInterface.CharacterUtilInterface_C.CharacterUtils_WeaponSwitched
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ICharacterUtilInterface_C::CharacterUtils_WeaponSwitched()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterUtilInterface_C", "CharacterUtils_WeaponSwitched");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterUtilInterface.CharacterUtilInterface_C.CharacterUtils_StartOpeningCredits
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        DisplayText                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void ICharacterUtilInterface_C::CharacterUtils_StartOpeningCredits(class FText DisplayText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterUtilInterface_C", "CharacterUtils_StartOpeningCredits");

	Params::ICharacterUtilInterface_C_CharacterUtils_StartOpeningCredits_Params Parms{};

	Parms.DisplayText = DisplayText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterUtilInterface.CharacterUtilInterface_C.CharacterUtils_StartRagdoll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ICharacterUtilInterface_C::CharacterUtils_StartRagdoll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterUtilInterface_C", "CharacterUtils_StartRagdoll");



	UObject::ProcessEvent(Func, nullptr);

}

}


