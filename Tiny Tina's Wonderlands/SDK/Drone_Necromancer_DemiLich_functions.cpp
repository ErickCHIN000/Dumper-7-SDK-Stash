#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C
// (Actor)

class UClass* ADrone_Necromancer_DemiLich_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Drone_Necromancer_DemiLich_C");

	return Clss;
}


// Drone_Necromancer_DemiLich_C Drone_Necromancer_DemiLich.Default__Drone_Necromancer_DemiLich_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADrone_Necromancer_DemiLich_C* ADrone_Necromancer_DemiLich_C::GetDefaultObj()
{
	static class ADrone_Necromancer_DemiLich_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADrone_Necromancer_DemiLich_C*>(ADrone_Necromancer_DemiLich_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.GetDemiLichIsDying
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_Necromancer_DemiLich_C::GetDemiLichIsDying(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "GetDemiLichIsDying");

	Params::ADrone_Necromancer_DemiLich_C_GetDemiLichIsDying_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.GetDemiLichOwner
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_Necromancer_DemiLich_C::GetDemiLichOwner(class AActor** Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "GetDemiLichOwner");

	Params::ADrone_Necromancer_DemiLich_C_GetDemiLichOwner_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.Passive09_LichSacrifice
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FGbxActionRegister>  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_Necromancer_DemiLich_C::Passive09_LichSacrifice(bool* Res, TArray<struct FGbxActionRegister>& Temp_struct_Variable, class UGbxAction* CallFunc_K2Play_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "Passive09_LichSacrifice");

	Params::ADrone_Necromancer_DemiLich_C_Passive09_LichSacrifice_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_K2Play_ReturnValue = CallFunc_K2Play_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.GetDemiLichCompanionTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_Necromancer_DemiLich_C::GetDemiLichCompanionTarget(class AActor** Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "GetDemiLichCompanionTarget");

	Params::ADrone_Necromancer_DemiLich_C_GetDemiLichCompanionTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.CheckIsTargetValid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               TargetValid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanISeeMyTarget_Res                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetDroneOwner_DroneOwner                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTargetableComponent*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTargetableByActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPerformingAnyAttack_Res                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_Necromancer_DemiLich_C::CheckIsTargetValid(bool* TargetValid, bool CallFunc_CanISeeMyTarget_Res, class AActor* CallFunc_GetDroneOwner_DroneOwner, bool CallFunc_IsValid_ReturnValue, class UTargetableComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsTargetableByActor_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsPerformingAnyAttack_Res, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "CheckIsTargetValid");

	Params::ADrone_Necromancer_DemiLich_C_CheckIsTargetValid_Params Parms{};

	Parms.CallFunc_CanISeeMyTarget_Res = CallFunc_CanISeeMyTarget_Res;
	Parms.CallFunc_GetDroneOwner_DroneOwner = CallFunc_GetDroneOwner_DroneOwner;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsTargetableByActor_ReturnValue = CallFunc_IsTargetableByActor_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsPerformingAnyAttack_Res = CallFunc_IsPerformingAnyAttack_Res;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetValid != nullptr)
		*TargetValid = Parms.TargetValid;

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.CheckClawElement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGbxAbility*                 ClawAbility                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetEquippedInventoryForSlot_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_ClawArmor_C>K2Node_DynamicCast_AsBPI_Claw_Armor                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetClawArmorElement_Res                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxAbility*                 CallFunc_FindAbility_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_Necromancer_DemiLich_C::CheckClawElement(class UGbxAbility* ClawAbility, class AActor* CallFunc_GetEquippedInventoryForSlot_ReturnValue, TScriptInterface<class IBPI_ClawArmor_C> K2Node_DynamicCast_AsBPI_Claw_Armor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_GetClawArmorElement_Res, class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class UGbxAbility* CallFunc_FindAbility_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "CheckClawElement");

	Params::ADrone_Necromancer_DemiLich_C_CheckClawElement_Params Parms{};

	Parms.ClawAbility = ClawAbility;
	Parms.CallFunc_GetEquippedInventoryForSlot_ReturnValue = CallFunc_GetEquippedInventoryForSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Claw_Armor = K2Node_DynamicCast_AsBPI_Claw_Armor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetClawArmorElement_Res = CallFunc_GetClawArmorElement_Res;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_FindAbility_ReturnValue = CallFunc_FindAbility_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.SetMovementProperties_Target
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_Necromancer_DemiLich_C::SetMovementProperties_Target()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "SetMovementProperties_Target");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.SetMovementProperties_Hover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_Necromancer_DemiLich_C::SetMovementProperties_Hover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "SetMovementProperties_Hover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.GetSpellCastTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckIsTargetValid_TargetValid                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckIsTargetValid_TargetValid1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_RunEnvQueryForBestActor_ResultActor                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RunEnvQueryForBestActor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_RunEnvQueryForBestActor_ResultActor1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RunEnvQueryForBestActor_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_Necromancer_DemiLich_C::GetSpellCastTarget(bool* Res, bool CallFunc_CheckIsTargetValid_TargetValid, bool CallFunc_CheckIsTargetValid_TargetValid1, bool CallFunc_BooleanAND_ReturnValue, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor1, bool CallFunc_RunEnvQueryForBestActor_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "GetSpellCastTarget");

	Params::ADrone_Necromancer_DemiLich_C_GetSpellCastTarget_Params Parms{};

	Parms.CallFunc_CheckIsTargetValid_TargetValid = CallFunc_CheckIsTargetValid_TargetValid;
	Parms.CallFunc_CheckIsTargetValid_TargetValid1 = CallFunc_CheckIsTargetValid_TargetValid1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_RunEnvQueryForBestActor_ResultActor = CallFunc_RunEnvQueryForBestActor_ResultActor;
	Parms.CallFunc_RunEnvQueryForBestActor_ReturnValue = CallFunc_RunEnvQueryForBestActor_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_RunEnvQueryForBestActor_ResultActor1 = CallFunc_RunEnvQueryForBestActor_ResultActor1;
	Parms.CallFunc_RunEnvQueryForBestActor_ReturnValue1 = CallFunc_RunEnvQueryForBestActor_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.HandleDeathInitialization
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_Necromancer_DemiLich_C::HandleDeathInitialization()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "HandleDeathInitialization");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.CompanionDeath
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FGbxActionRegister>  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_Necromancer_DemiLich_C::CompanionDeath(bool* Res, TArray<struct FGbxActionRegister>& Temp_struct_Variable, class UGbxAction* CallFunc_K2Play_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "CompanionDeath");

	Params::ADrone_Necromancer_DemiLich_C_CompanionDeath_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_K2Play_ReturnValue = CallFunc_K2Play_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.CompanionDespawn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_CompanionDespawn_Res                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_Necromancer_DemiLich_C::CompanionDespawn(bool* Res, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_CompanionDespawn_Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "CompanionDespawn");

	Params::ADrone_Necromancer_DemiLich_C_CompanionDespawn_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_CompanionDespawn_Res = CallFunc_CompanionDespawn_Res;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.ClearAllAttacks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_Necromancer_DemiLich_C::ClearAllAttacks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "ClearAllAttacks");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.StartSpellCast
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGbxActionRegister>  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_Necromancer_DemiLich_C::StartSpellCast(TArray<struct FGbxActionRegister>& Temp_struct_Variable, class UGbxAction* CallFunc_K2Play_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "StartSpellCast");

	Params::ADrone_Necromancer_DemiLich_C_StartSpellCast_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_K2Play_ReturnValue = CallFunc_K2Play_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.PerformSpellCast
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_PlayerEnemyInteractions_C>K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCompanionTargetingSocket_Socket                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetActorSocket_ReturnValue                              (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetSpellDamageType_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsGbx_Damage_Type                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLightProjectileInitializationDataK2Node_MakeStruct_LightProjectileInitializationData              (ContainsInstancedReference)

void ADrone_Necromancer_DemiLich_C::PerformSpellCast(bool CallFunc_IsValidClass_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, TScriptInterface<class IBPI_PlayerEnemyInteractions_C> K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_GetCompanionTargetingSocket_Socket, const struct FTransform& CallFunc_GetActorSocket_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool Temp_bool_Variable, class UClass* CallFunc_GetSpellDamageType_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsGbx_Damage_Type, bool K2Node_ClassDynamicCast_bSuccess, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UClass* K2Node_Select_Default, class APawn* CallFunc_GetInstigator_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue1, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FLightProjectileInitializationData& K2Node_MakeStruct_LightProjectileInitializationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "PerformSpellCast");

	Params::ADrone_Necromancer_DemiLich_C_PerformSpellCast_Params Parms{};

	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions = K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetCompanionTargetingSocket_Socket = CallFunc_GetCompanionTargetingSocket_Socket;
	Parms.CallFunc_GetActorSocket_ReturnValue = CallFunc_GetActorSocket_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetSpellDamageType_ReturnValue = CallFunc_GetSpellDamageType_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsGbx_Damage_Type = K2Node_ClassDynamicCast_AsGbx_Damage_Type;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_GetInstigator_ReturnValue1 = CallFunc_GetInstigator_ReturnValue1;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.K2Node_MakeStruct_LightProjectileInitializationData = K2Node_MakeStruct_LightProjectileInitializationData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.OnRep_SpellCasting
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomBoolWithWeight_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_Necromancer_DemiLich_C::OnRep_SpellCasting(class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "OnRep_SpellCasting");

	Params::ADrone_Necromancer_DemiLich_C_OnRep_SpellCasting_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_RandomBoolWithWeight_ReturnValue = CallFunc_RandomBoolWithWeight_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.OnRep_DefaultAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGbxActionRegister>  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_Necromancer_DemiLich_C::OnRep_DefaultAttack(TArray<struct FGbxActionRegister>& Temp_struct_Variable, class UGbxAction* CallFunc_K2Play_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "OnRep_DefaultAttack");

	Params::ADrone_Necromancer_DemiLich_C_OnRep_DefaultAttack_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_K2Play_ReturnValue = CallFunc_K2Play_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.InitData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableValueHandle       DefaultAttackCooldownHandle                                      (Edit, BlueprintVisible, NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        K2Node_DynamicCast_AsOak_Character_Player                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_Necromancer_DemiLich_C::InitData(const struct FDataTableValueHandle& DefaultAttackCooldownHandle, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetDataTableValueFromHandle_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "InitData");

	Params::ADrone_Necromancer_DemiLich_C_InitData_Params Parms{};

	Parms.DefaultAttackCooldownHandle = DefaultAttackCooldownHandle;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue1 = CallFunc_GetDataTableValueFromHandle_ReturnValue1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsOak_Character_Player = K2Node_DynamicCast_AsOak_Character_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue2 = CallFunc_GetDataTableValueFromHandle_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.StartPostAttackCooldown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IgnoreAttackSpeed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)

void ADrone_Necromancer_DemiLich_C::StartPostAttackCooldown(float Time, bool IgnoreAttackSpeed, bool Temp_bool_Variable, float Temp_float_Variable, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Select_Default, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "StartPostAttackCooldown");

	Params::ADrone_Necromancer_DemiLich_C_StartPostAttackCooldown_Params Parms{};

	Parms.Time = Time;
	Parms.IgnoreAttackSpeed = IgnoreAttackSpeed;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.PostAttackCooldown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_Necromancer_DemiLich_C::PostAttackCooldown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "PostAttackCooldown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.StartDefaultAttack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_PlayerEnemyInteractions_C>K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCompanionTargetingSocket_Socket                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetActorSocket_ReturnValue                              (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLightProjectileInitializationDataK2Node_MakeStruct_LightProjectileInitializationData              (ContainsInstancedReference)

void ADrone_Necromancer_DemiLich_C::StartDefaultAttack(class UClass* Temp_class_Variable, bool Temp_bool_Variable, bool CallFunc_IsValidClass_ReturnValue, TScriptInterface<class IBPI_PlayerEnemyInteractions_C> K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions, bool K2Node_DynamicCast_bSuccess, class UClass* K2Node_Select_Default, class FName CallFunc_GetCompanionTargetingSocket_Socket, const struct FTransform& CallFunc_GetActorSocket_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue1, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FLightProjectileInitializationData& K2Node_MakeStruct_LightProjectileInitializationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "StartDefaultAttack");

	Params::ADrone_Necromancer_DemiLich_C_StartDefaultAttack_Params Parms{};

	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions = K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetCompanionTargetingSocket_Socket = CallFunc_GetCompanionTargetingSocket_Socket;
	Parms.CallFunc_GetActorSocket_ReturnValue = CallFunc_GetActorSocket_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_GetInstigator_ReturnValue1 = CallFunc_GetInstigator_ReturnValue1;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.K2Node_MakeStruct_LightProjectileInitializationData = K2Node_MakeStruct_LightProjectileInitializationData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.CanPerformAttack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                Timer                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                              Min_Distance                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Max_Distance                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_Necromancer_DemiLich_C::CanPerformAttack(bool Enabled, const struct FTimerHandle& Timer, float Min_Distance, float Max_Distance, bool* Res, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue1, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "CanPerformAttack");

	Params::ADrone_Necromancer_DemiLich_C_CanPerformAttack_Params Parms{};

	Parms.Enabled = Enabled;
	Parms.Timer = Timer;
	Parms.Min_Distance = Min_Distance;
	Parms.Max_Distance = Max_Distance;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue1 = CallFunc_LessEqual_FloatFloat_ReturnValue1;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue = CallFunc_K2_IsTimerActiveHandle_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue2 = CallFunc_LessEqual_FloatFloat_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.IsPerformingAnyAttack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_Necromancer_DemiLich_C::IsPerformingAnyAttack(bool* Res, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "IsPerformingAnyAttack");

	Params::ADrone_Necromancer_DemiLich_C_IsPerformingAnyAttack_Params Parms{};

	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_Necromancer_DemiLich_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADrone_Necromancer_DemiLich_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.SetHoverAtTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_Necromancer_DemiLich_C::SetHoverAtTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "SetHoverAtTarget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.SetHoverAtOwner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_Necromancer_DemiLich_C::SetHoverAtOwner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "SetHoverAtOwner");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.OnRep_EnableTargeting
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_Necromancer_DemiLich_C::OnRep_EnableTargeting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "OnRep_EnableTargeting");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.OnRep_CurrentTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_Necromancer_DemiLich_C::OnRep_CurrentTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "OnRep_CurrentTarget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.DemiLichOwner_OnSpellCastDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGrenadeMod*                 GrenadeMod                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        EquippedPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_Necromancer_DemiLich_C::DemiLichOwner_OnSpellCastDelegate(class AGrenadeMod* GrenadeMod, class AOakCharacter_Player* EquippedPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "DemiLichOwner_OnSpellCastDelegate");

	Params::ADrone_Necromancer_DemiLich_C_DemiLichOwner_OnSpellCastDelegate_Params Parms{};

	Parms.GrenadeMod = GrenadeMod;
	Parms.EquippedPlayer = EquippedPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.DemiLich_BasicAttackFired
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_Necromancer_DemiLich_C::DemiLich_BasicAttackFired()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "DemiLich_BasicAttackFired");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.DemiLich_SpellCastFired
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_Necromancer_DemiLich_C::DemiLich_SpellCastFired()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "DemiLich_SpellCastFired");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.DemiLich_Covenant_Explosion
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_Necromancer_DemiLich_C::DemiLich_Covenant_Explosion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "DemiLich_Covenant_Explosion");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.DemiLich_Death
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_Necromancer_DemiLich_C::DemiLich_Death()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "DemiLich_Death");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.DemiLich_Respawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_Necromancer_DemiLich_C::DemiLich_Respawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "DemiLich_Respawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.StopAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_Necromancer_DemiLich_C::StopAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "StopAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.HandleInteracts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_Necromancer_DemiLich_C::HandleInteracts()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "HandleInteracts");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.StartAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_Necromancer_DemiLich_C::StartAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "StartAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.DemiLich_InteractionEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_Necromancer_DemiLich_C::DemiLich_InteractionEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "DemiLich_InteractionEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.DemiLich_Covenant_CleanUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_Necromancer_DemiLich_C::DemiLich_Covenant_CleanUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "DemiLich_Covenant_CleanUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.Audio_Play_Spellcast
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_Necromancer_DemiLich_C::Audio_Play_Spellcast()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "Audio_Play_Spellcast");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.Audio_Play_BasicAttack
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_Necromancer_DemiLich_C::Audio_Play_BasicAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "Audio_Play_BasicAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_Drone_Necromancer_DemiLich
// (BlueprintEvent)
// Parameters:
// class UDamageComponent*            DamageReceiver                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               DamageSource                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageCauserComponent*      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FReceivedDamageDetails      Details                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void ADrone_Necromancer_DemiLich_C::BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_Drone_Necromancer_DemiLich(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_Drone_Necromancer_DemiLich");

	Params::ADrone_Necromancer_DemiLich_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_Drone_Necromancer_DemiLich_Params Parms{};

	Parms.DamageReceiver = DamageReceiver;
	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.DamageSource = DamageSource;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.Audio_Target_Aquired
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_Necromancer_DemiLich_C::Audio_Target_Aquired()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "Audio_Target_Aquired");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.Audio_CovenantDeath_Start
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_Necromancer_DemiLich_C::Audio_CovenantDeath_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "Audio_CovenantDeath_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.Audio_CovenantDeath_Explosion
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_Necromancer_DemiLich_C::Audio_CovenantDeath_Explosion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "Audio_CovenantDeath_Explosion");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.Audio_OnTargetDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamageReceiver                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_Necromancer_DemiLich_C::Audio_OnTargetDied(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "Audio_OnTargetDied");

	Params::ADrone_Necromancer_DemiLich_C_Audio_OnTargetDied_Params Parms{};

	Parms.DamageReceiver = DamageReceiver;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.OnTargetDied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamageReceiver                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_Necromancer_DemiLich_C::OnTargetDied(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "OnTargetDied");

	Params::ADrone_Necromancer_DemiLich_C_OnTargetDied_Params Parms{};

	Parms.DamageReceiver = DamageReceiver;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.OnPlayerAlert
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TargetLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakPlayerController*        InstigatingController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_Necromancer_DemiLich_C::OnPlayerAlert(class AActor* TargetActor, const struct FVector& TargetLocation, class AOakPlayerController* InstigatingController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "OnPlayerAlert");

	Params::ADrone_Necromancer_DemiLich_C_OnPlayerAlert_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.TargetLocation = TargetLocation;
	Parms.InstigatingController = InstigatingController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.StartDemiLichSpellCast
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_Necromancer_DemiLich_C::StartDemiLichSpellCast()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "StartDemiLichSpellCast");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.TriggerFidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_Necromancer_DemiLich_C::TriggerFidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "TriggerFidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C.ExecuteUbergraph_Drone_Necromancer_DemiLich
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue                            (None)
// struct FDialogConversation         CallFunc_FinishTriggerDialog_Conversation                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FinishTriggerDialog_SequenceID                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishTriggerDialog_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckIsTargetValid_TargetValid                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGrenadeMod*                 K2Node_CustomEvent_GrenadeMod                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        K2Node_CustomEvent_EquippedPlayer                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue1                           (None)
// struct FDialogConversation         CallFunc_FinishTriggerDialog_Conversation1                       (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FinishTriggerDialog_SequenceID1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishTriggerDialog_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetSpellDamageType_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       CallFunc_GetClassElementalType_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseEvent*                 CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWwisePlaybackInstance      CallFunc_PostAttachedEvent_ReturnValue                           (None)
// struct FWwisePlaybackInstance      CallFunc_PostAttachedEvent_ReturnValue1                          (None)
// class UDamageComponent*            K2Node_ComponentBoundEvent_DamageReceiver                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Damage                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              K2Node_ComponentBoundEvent_DamageType                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               K2Node_ComponentBoundEvent_DamageSource                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_ComponentBoundEvent_InstigatedBy                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageCauserComponent*      K2Node_ComponentBoundEvent_DamageCauser                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FReceivedDamageDetails      K2Node_ComponentBoundEvent_Details                               (ContainsInstancedReference)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostAttachedEvent_ReturnValue2                          (None)
// struct FWwisePlaybackInstance      CallFunc_PostEventAtLocation_ReturnValue                         (None)
// class AActor*                      K2Node_CustomEvent_DamageReceiver                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamageCauser                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageReceiver                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_TargetActor                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_TargetLocation                                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakPlayerController*        K2Node_Event_InstigatingController                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSpellCastTarget_Res                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGrenadeMod*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckIsTargetValid_TargetValid1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void ADrone_Necromancer_DemiLich_C::ExecuteUbergraph_Drone_Necromancer_DemiLich(int32 EntryPoint, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, bool CallFunc_CheckIsTargetValid_TargetValid, bool Temp_bool_IsClosed_Variable, class AGrenadeMod* K2Node_CustomEvent_GrenadeMod, class AOakCharacter_Player* K2Node_CustomEvent_EquippedPlayer, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue1, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation1, int32 CallFunc_FinishTriggerDialog_SequenceID1, bool CallFunc_FinishTriggerDialog_ReturnValue1, class UClass* CallFunc_GetSpellDamageType_ReturnValue, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue, class UWwiseEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue1, class UDamageComponent* K2Node_ComponentBoundEvent_DamageReceiver, float K2Node_ComponentBoundEvent_Damage, class UGbxDamageType* K2Node_ComponentBoundEvent_DamageType, class UDamageSource* K2Node_ComponentBoundEvent_DamageSource, class AController* K2Node_ComponentBoundEvent_InstigatedBy, class UDamageCauserComponent* K2Node_ComponentBoundEvent_DamageCauser, const struct FReceivedDamageDetails& K2Node_ComponentBoundEvent_Details, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue2, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, class AActor* K2Node_CustomEvent_DamageReceiver, class AActor* K2Node_CustomEvent_DamageCauser, class AActor* K2Node_Event_DamageReceiver, class AActor* K2Node_Event_DamageCauser, bool Temp_bool_Has_Been_Initd_Variable, class AActor* K2Node_Event_TargetActor, const struct FVector& K2Node_Event_TargetLocation, class AOakPlayerController* K2Node_Event_InstigatingController, bool CallFunc_GetSpellCastTarget_Res, int32 CallFunc_Array_Add_ReturnValue, class AGrenadeMod* CallFunc_Array_Get_Item, bool CallFunc_CheckIsTargetValid_TargetValid1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_Necromancer_DemiLich_C", "ExecuteUbergraph_Drone_Necromancer_DemiLich");

	Params::ADrone_Necromancer_DemiLich_C_ExecuteUbergraph_Drone_Necromancer_DemiLich_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_NewDialogContext_ReturnValue = CallFunc_NewDialogContext_ReturnValue;
	Parms.CallFunc_FinishTriggerDialog_Conversation = CallFunc_FinishTriggerDialog_Conversation;
	Parms.CallFunc_FinishTriggerDialog_SequenceID = CallFunc_FinishTriggerDialog_SequenceID;
	Parms.CallFunc_FinishTriggerDialog_ReturnValue = CallFunc_FinishTriggerDialog_ReturnValue;
	Parms.CallFunc_CheckIsTargetValid_TargetValid = CallFunc_CheckIsTargetValid_TargetValid;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_CustomEvent_GrenadeMod = K2Node_CustomEvent_GrenadeMod;
	Parms.K2Node_CustomEvent_EquippedPlayer = K2Node_CustomEvent_EquippedPlayer;
	Parms.CallFunc_NewDialogContext_ReturnValue1 = CallFunc_NewDialogContext_ReturnValue1;
	Parms.CallFunc_FinishTriggerDialog_Conversation1 = CallFunc_FinishTriggerDialog_Conversation1;
	Parms.CallFunc_FinishTriggerDialog_SequenceID1 = CallFunc_FinishTriggerDialog_SequenceID1;
	Parms.CallFunc_FinishTriggerDialog_ReturnValue1 = CallFunc_FinishTriggerDialog_ReturnValue1;
	Parms.CallFunc_GetSpellDamageType_ReturnValue = CallFunc_GetSpellDamageType_ReturnValue;
	Parms.CallFunc_GetClassElementalType_ReturnValue = CallFunc_GetClassElementalType_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_PostAttachedEvent_ReturnValue = CallFunc_PostAttachedEvent_ReturnValue;
	Parms.CallFunc_PostAttachedEvent_ReturnValue1 = CallFunc_PostAttachedEvent_ReturnValue1;
	Parms.K2Node_ComponentBoundEvent_DamageReceiver = K2Node_ComponentBoundEvent_DamageReceiver;
	Parms.K2Node_ComponentBoundEvent_Damage = K2Node_ComponentBoundEvent_Damage;
	Parms.K2Node_ComponentBoundEvent_DamageType = K2Node_ComponentBoundEvent_DamageType;
	Parms.K2Node_ComponentBoundEvent_DamageSource = K2Node_ComponentBoundEvent_DamageSource;
	Parms.K2Node_ComponentBoundEvent_InstigatedBy = K2Node_ComponentBoundEvent_InstigatedBy;
	Parms.K2Node_ComponentBoundEvent_DamageCauser = K2Node_ComponentBoundEvent_DamageCauser;
	Parms.K2Node_ComponentBoundEvent_Details = K2Node_ComponentBoundEvent_Details;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_PostAttachedEvent_ReturnValue2 = CallFunc_PostAttachedEvent_ReturnValue2;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;
	Parms.K2Node_CustomEvent_DamageReceiver = K2Node_CustomEvent_DamageReceiver;
	Parms.K2Node_CustomEvent_DamageCauser = K2Node_CustomEvent_DamageCauser;
	Parms.K2Node_Event_DamageReceiver = K2Node_Event_DamageReceiver;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_Event_TargetActor = K2Node_Event_TargetActor;
	Parms.K2Node_Event_TargetLocation = K2Node_Event_TargetLocation;
	Parms.K2Node_Event_InstigatingController = K2Node_Event_InstigatingController;
	Parms.CallFunc_GetSpellCastTarget_Res = CallFunc_GetSpellCastTarget_Res;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_CheckIsTargetValid_TargetValid1 = CallFunc_CheckIsTargetValid_TargetValid1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


