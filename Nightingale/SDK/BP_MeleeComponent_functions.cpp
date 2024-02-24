#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MeleeComponent.BP_MeleeComponent_C
// (None)

class UClass* UBP_MeleeComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MeleeComponent_C");

	return Clss;
}


// BP_MeleeComponent_C BP_MeleeComponent.Default__BP_MeleeComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MeleeComponent_C* UBP_MeleeComponent_C::GetDefaultObj()
{
	static class UBP_MeleeComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MeleeComponent_C*>(UBP_MeleeComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MeleeComponent.BP_MeleeComponent_C.ClientOnly_SetDualCombo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TEMP_InDualComboWindow                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        TEMP_DualComboSection                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreAutomatedTestsRunning_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MeleeComponent_C::ClientOnly_SetDualCombo(bool TEMP_InDualComboWindow, class FName TEMP_DualComboSection, bool CallFunc_AreAutomatedTestsRunning_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MeleeComponent_C", "ClientOnly_SetDualCombo");

	Params::UBP_MeleeComponent_C_ClientOnly_SetDualCombo_Params Parms{};

	Parms.TEMP_InDualComboWindow = TEMP_InDualComboWindow;
	Parms.TEMP_DualComboSection = TEMP_DualComboSection;
	Parms.CallFunc_AreAutomatedTestsRunning_ReturnValue = CallFunc_AreAutomatedTestsRunning_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MeleeComponent.BP_MeleeComponent_C.GetDualCombo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TEMP_InDualComboWindow                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        TEMP_DualComboSection                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MeleeComponent_C::GetDualCombo(bool* TEMP_InDualComboWindow, class FName* TEMP_DualComboSection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MeleeComponent_C", "GetDualCombo");

	Params::UBP_MeleeComponent_C_GetDualCombo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TEMP_InDualComboWindow != nullptr)
		*TEMP_InDualComboWindow = Parms.TEMP_InDualComboWindow;

	if (TEMP_DualComboSection != nullptr)
		*TEMP_DualComboSection = Parms.TEMP_DualComboSection;

}


// Function BP_MeleeComponent.BP_MeleeComponent_C.StartScreenShake
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Character_C*             Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_EquippableItemBase_C*    Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetPlayerControllerFromCharacter_PlayerController       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_GetItemDataTraits_Traits                                (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromArray_ReturnValue           (None)
// double                             CallFunc_GetScreenShakeModifier_ShakeModifier                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UsingAThirdPersonCamera_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ClientStartCameraShake_Scale_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ClientStartCameraShake_Scale_ImplicitCast_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MeleeComponent_C::StartScreenShake(class ABP_Character_C* Player, class ABP_EquippableItemBase_C* Item, class ANWXPlayerController* CallFunc_GetPlayerControllerFromCharacter_PlayerController, TArray<struct FGameplayTag>& CallFunc_GetItemDataTraits_Traits, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, double CallFunc_GetScreenShakeModifier_ShakeModifier, bool CallFunc_UsingAThirdPersonCamera_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_ClientStartCameraShake_Scale_ImplicitCast, float CallFunc_ClientStartCameraShake_Scale_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MeleeComponent_C", "StartScreenShake");

	Params::UBP_MeleeComponent_C_StartScreenShake_Params Parms{};

	Parms.Player = Player;
	Parms.Item = Item;
	Parms.CallFunc_GetPlayerControllerFromCharacter_PlayerController = CallFunc_GetPlayerControllerFromCharacter_PlayerController;
	Parms.CallFunc_GetItemDataTraits_Traits = CallFunc_GetItemDataTraits_Traits;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeGameplayTagContainerFromArray_ReturnValue = CallFunc_MakeGameplayTagContainerFromArray_ReturnValue;
	Parms.CallFunc_GetScreenShakeModifier_ShakeModifier = CallFunc_GetScreenShakeModifier_ShakeModifier;
	Parms.CallFunc_UsingAThirdPersonCamera_ReturnValue = CallFunc_UsingAThirdPersonCamera_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_ClientStartCameraShake_Scale_ImplicitCast = CallFunc_ClientStartCameraShake_Scale_ImplicitCast;
	Parms.CallFunc_ClientStartCameraShake_Scale_ImplicitCast_1 = CallFunc_ClientStartCameraShake_Scale_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MeleeComponent.BP_MeleeComponent_C.InitializeMeleeWeaponData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData_WeaponMelee       MeleeWeaponData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             K2Node_VariableSet_PowerSwingDamageModifier_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_PowerSwingStrengthModifier_ImplicitCast       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_ComboDamageModifier_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MeleeComponent_C::InitializeMeleeWeaponData(const struct FItemData_WeaponMelee& MeleeWeaponData, double K2Node_VariableSet_PowerSwingDamageModifier_ImplicitCast, double K2Node_VariableSet_PowerSwingStrengthModifier_ImplicitCast, double K2Node_VariableSet_ComboDamageModifier_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MeleeComponent_C", "InitializeMeleeWeaponData");

	Params::UBP_MeleeComponent_C_InitializeMeleeWeaponData_Params Parms{};

	Parms.MeleeWeaponData = MeleeWeaponData;
	Parms.K2Node_VariableSet_PowerSwingDamageModifier_ImplicitCast = K2Node_VariableSet_PowerSwingDamageModifier_ImplicitCast;
	Parms.K2Node_VariableSet_PowerSwingStrengthModifier_ImplicitCast = K2Node_VariableSet_PowerSwingStrengthModifier_ImplicitCast;
	Parms.K2Node_VariableSet_ComboDamageModifier_ImplicitCast = K2Node_VariableSet_ComboDamageModifier_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MeleeComponent.BP_MeleeComponent_C.GetCanRetriggerSwing
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanRetriggerSwing                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MeleeComponent_C::GetCanRetriggerSwing(bool* CanRetriggerSwing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MeleeComponent_C", "GetCanRetriggerSwing");

	Params::UBP_MeleeComponent_C_GetCanRetriggerSwing_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CanRetriggerSwing != nullptr)
		*CanRetriggerSwing = Parms.CanRetriggerSwing;

}


// Function BP_MeleeComponent.BP_MeleeComponent_C.ClientOnly_SetCanRetriggerSwing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanRetriggerSwing                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreAutomatedTestsRunning_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MeleeComponent_C::ClientOnly_SetCanRetriggerSwing(bool CanRetriggerSwing, bool CallFunc_AreAutomatedTestsRunning_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MeleeComponent_C", "ClientOnly_SetCanRetriggerSwing");

	Params::UBP_MeleeComponent_C_ClientOnly_SetCanRetriggerSwing_Params Parms{};

	Parms.CanRetriggerSwing = CanRetriggerSwing;
	Parms.CallFunc_AreAutomatedTestsRunning_ReturnValue = CallFunc_AreAutomatedTestsRunning_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MeleeComponent.BP_MeleeComponent_C.ClearMeleeImpactTagCache
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MeleeComponent_C::ClearMeleeImpactTagCache(double CallFunc_GetGameTimeInSeconds_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MeleeComponent_C", "ClearMeleeImpactTagCache");

	Params::UBP_MeleeComponent_C_ClearMeleeImpactTagCache_Params Parms{};

	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MeleeComponent.BP_MeleeComponent_C.CacheMeleeImpactTag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                MeleeImpactTagToCache                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// double                             CacheDuration                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MeleeComponent_C::CacheMeleeImpactTag(struct FGameplayTag& MeleeImpactTagToCache, double CacheDuration, double CallFunc_GetGameTimeInSeconds_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MeleeComponent_C", "CacheMeleeImpactTag");

	Params::UBP_MeleeComponent_C_CacheMeleeImpactTag_Params Parms{};

	Parms.MeleeImpactTagToCache = MeleeImpactTagToCache;
	Parms.CacheDuration = CacheDuration;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MeleeComponent.BP_MeleeComponent_C.GetSameTargetComboDamageBonus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Modifier                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MeleeComponent_C::GetSameTargetComboDamageBonus(double* Modifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MeleeComponent_C", "GetSameTargetComboDamageBonus");

	Params::UBP_MeleeComponent_C_GetSameTargetComboDamageBonus_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Modifier != nullptr)
		*Modifier = Parms.Modifier;

}


// Function BP_MeleeComponent.BP_MeleeComponent_C.GetPowerSwingStrengthModifier
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UBP_MeleeComponent_C::GetPowerSwingStrengthModifier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MeleeComponent_C", "GetPowerSwingStrengthModifier");

	Params::UBP_MeleeComponent_C_GetPowerSwingStrengthModifier_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MeleeComponent.BP_MeleeComponent_C.GetComboDamageModifier
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Modifier                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MeleeComponent_C::GetComboDamageModifier(double* Modifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MeleeComponent_C", "GetComboDamageModifier");

	Params::UBP_MeleeComponent_C_GetComboDamageModifier_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Modifier != nullptr)
		*Modifier = Parms.Modifier;

}


// Function BP_MeleeComponent.BP_MeleeComponent_C.GetPowerSwingDamageModifier
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Modifier                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MeleeComponent_C::GetPowerSwingDamageModifier(double* Modifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MeleeComponent_C", "GetPowerSwingDamageModifier");

	Params::UBP_MeleeComponent_C_GetPowerSwingDamageModifier_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Modifier != nullptr)
		*Modifier = Parms.Modifier;

}


// Function BP_MeleeComponent.BP_MeleeComponent_C.GetImpactTag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ImpactTag                                                        (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MeleeComponent_C::GetImpactTag(struct FGameplayTag* ImpactTag, double CallFunc_GetGameTimeInSeconds_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MeleeComponent_C", "GetImpactTag");

	Params::UBP_MeleeComponent_C_GetImpactTag_Params Parms{};

	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ImpactTag != nullptr)
		*ImpactTag = std::move(Parms.ImpactTag);

}


// Function BP_MeleeComponent.BP_MeleeComponent_C.GetRaycastRange
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Range                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MeleeComponent_C::GetRaycastRange(double* Range)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MeleeComponent_C", "GetRaycastRange");

	Params::UBP_MeleeComponent_C_GetRaycastRange_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Range != nullptr)
		*Range = Parms.Range;

}


// Function BP_MeleeComponent.BP_MeleeComponent_C.OnMeleeAttack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MeleeComponent_C::OnMeleeAttack__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MeleeComponent_C", "OnMeleeAttack__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


