#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C
// (Actor)

class UClass* ADrone_KnightOfTheClaw_DragonPet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Drone_KnightOfTheClaw_DragonPet_C");

	return Clss;
}


// Drone_KnightOfTheClaw_DragonPet_C Drone_KnightOfTheClaw_DragonPet.Default__Drone_KnightOfTheClaw_DragonPet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADrone_KnightOfTheClaw_DragonPet_C* ADrone_KnightOfTheClaw_DragonPet_C::GetDefaultObj()
{
	static class ADrone_KnightOfTheClaw_DragonPet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADrone_KnightOfTheClaw_DragonPet_C*>(ADrone_KnightOfTheClaw_DragonPet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.ExternalDragonCompanionCreateFireBoltSplat
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  TransformData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_KnightOfTheClaw_DragonPet_C::ExternalDragonCompanionCreateFireBoltSplat(const struct FTransform& TransformData, bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "ExternalDragonCompanionCreateFireBoltSplat");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_ExternalDragonCompanionCreateFireBoltSplat_Params Parms{};

	Parms.TransformData = TransformData;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.ExternalDragonCompanionStopShockBreath
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_KnightOfTheClaw_DragonPet_C::ExternalDragonCompanionStopShockBreath(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "ExternalDragonCompanionStopShockBreath");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_ExternalDragonCompanionStopShockBreath_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.ExternalDragonCompanionStopFireBolt
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_KnightOfTheClaw_DragonPet_C::ExternalDragonCompanionStopFireBolt(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "ExternalDragonCompanionStopFireBolt");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_ExternalDragonCompanionStopFireBolt_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.ExternalDragonCompanionStopFireBreath
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_KnightOfTheClaw_DragonPet_C::ExternalDragonCompanionStopFireBreath(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "ExternalDragonCompanionStopFireBreath");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_ExternalDragonCompanionStopFireBreath_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.ExternalDragonCompanionCreateFireBreath
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_KnightOfTheClaw_DragonPet_C::ExternalDragonCompanionCreateFireBreath(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "ExternalDragonCompanionCreateFireBreath");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_ExternalDragonCompanionCreateFireBreath_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.ExternalDragonCompanionCreateFireBolt
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_KnightOfTheClaw_DragonPet_C::ExternalDragonCompanionCreateFireBolt(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "ExternalDragonCompanionCreateFireBolt");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_ExternalDragonCompanionCreateFireBolt_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.ExternalDragonCompanionCreateShockBreath
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_KnightOfTheClaw_DragonPet_C::ExternalDragonCompanionCreateShockBreath(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "ExternalDragonCompanionCreateShockBreath");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_ExternalDragonCompanionCreateShockBreath_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.DragonCompanionPauseAttacking
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Pause                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_KnightOfTheClaw_DragonPet_C::DragonCompanionPauseAttacking(bool Pause, bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "DragonCompanionPauseAttacking");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_DragonCompanionPauseAttacking_Params Parms{};

	Parms.Pause = Pause;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.FinishInteract
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_KnightOfTheClaw_DragonPet_C::FinishInteract(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "FinishInteract");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_FinishInteract_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.GetDragonCompanionTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_KnightOfTheClaw_DragonPet_C::GetDragonCompanionTarget(class AActor** Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "GetDragonCompanionTarget");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_GetDragonCompanionTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.RequestDragonCompanionShockBreathAttack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_KnightOfTheClaw_DragonPet_C::RequestDragonCompanionShockBreathAttack(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "RequestDragonCompanionShockBreathAttack");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_RequestDragonCompanionShockBreathAttack_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.MantisElementOverride
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxAbility*                 ClawAbility                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetEquippedInventoryForSlot_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_ClawArmor_C>K2Node_DynamicCast_AsBPI_Claw_Armor                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetClawArmorElement_Res                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxAbility*                 CallFunc_FindAbility_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_KnightOfTheClaw_DragonPet_C::MantisElementOverride(bool* Res, class UGbxAbility* ClawAbility, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetEquippedInventoryForSlot_ReturnValue, TScriptInterface<class IBPI_ClawArmor_C> K2Node_DynamicCast_AsBPI_Claw_Armor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_GetClawArmorElement_Res, class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class UGbxAbility* CallFunc_FindAbility_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "MantisElementOverride");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_MantisElementOverride_Params Parms{};

	Parms.ClawAbility = ClawAbility;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
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

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.GetDamageElement
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      Inc_DamageType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       ERes                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxAbility*                 ClawAbility                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       CallFunc_GetClassElementalType_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_KnightOfTheClaw_DragonPet_C::GetDamageElement(class UClass* Inc_DamageType, class UClass** Res, enum class EOakElementalType* ERes, class UGbxAbility* ClawAbility, bool Temp_bool_Variable, class UClass* K2Node_Select_Default, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "GetDamageElement");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_GetDamageElement_Params Parms{};

	Parms.Inc_DamageType = Inc_DamageType;
	Parms.ClawAbility = ClawAbility;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetClassElementalType_ReturnValue = CallFunc_GetClassElementalType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

	if (ERes != nullptr)
		*ERes = Parms.ERes;

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.SetMyScriptedTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_KnightOfTheClaw_DragonPet_C::SetMyScriptedTarget(bool Enable, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "SetMyScriptedTarget");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_SetMyScriptedTarget_Params Parms{};

	Parms.Enable = Enable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.CreateFireBoltProjectile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      CallFunc_GetDamageElement_Res                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       CallFunc_GetDamageElement_ERes                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_PlayerEnemyInteractions_C>K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCompanionTargetingSocket_Socket                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetActorSocket_ReturnValue                              (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetActorSocket_ReturnValue1                             (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location1                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation1                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale1                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLightProjectileInitializationDataK2Node_MakeStruct_LightProjectileInitializationData              (ContainsInstancedReference)

void ADrone_KnightOfTheClaw_DragonPet_C::CreateFireBoltProjectile(class UClass* CallFunc_GetDamageElement_Res, enum class EOakElementalType CallFunc_GetDamageElement_ERes, class APawn* CallFunc_GetInstigator_ReturnValue, TScriptInterface<class IBPI_PlayerEnemyInteractions_C> K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetCompanionTargetingSocket_Socket, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue1, const struct FTransform& CallFunc_GetActorSocket_ReturnValue, const struct FTransform& CallFunc_GetActorSocket_ReturnValue1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_BreakTransform_Location1, const struct FRotator& CallFunc_BreakTransform_Rotation1, const struct FVector& CallFunc_BreakTransform_Scale1, const struct FLightProjectileInitializationData& K2Node_MakeStruct_LightProjectileInitializationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "CreateFireBoltProjectile");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_CreateFireBoltProjectile_Params Parms{};

	Parms.CallFunc_GetDamageElement_Res = CallFunc_GetDamageElement_Res;
	Parms.CallFunc_GetDamageElement_ERes = CallFunc_GetDamageElement_ERes;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions = K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCompanionTargetingSocket_Socket = CallFunc_GetCompanionTargetingSocket_Socket;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_GetInstigator_ReturnValue1 = CallFunc_GetInstigator_ReturnValue1;
	Parms.CallFunc_GetActorSocket_ReturnValue = CallFunc_GetActorSocket_ReturnValue;
	Parms.CallFunc_GetActorSocket_ReturnValue1 = CallFunc_GetActorSocket_ReturnValue1;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_BreakTransform_Location1 = CallFunc_BreakTransform_Location1;
	Parms.CallFunc_BreakTransform_Rotation1 = CallFunc_BreakTransform_Rotation1;
	Parms.CallFunc_BreakTransform_Scale1 = CallFunc_BreakTransform_Scale1;
	Parms.K2Node_MakeStruct_LightProjectileInitializationData = K2Node_MakeStruct_LightProjectileInitializationData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.SetAnimFlyRates
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Descend                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Ascend                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Flat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_KnightOfTheClaw_DragonPet_C::SetAnimFlyRates(float Descend, float Ascend, float Flat, bool* Res, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "SetAnimFlyRates");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_SetAnimFlyRates_Params Parms{};

	Parms.Descend = Descend;
	Parms.Ascend = Ascend;
	Parms.Flat = Flat;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.DoClawAttackDamage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ImpactTarget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UClass*                      CallFunc_GetDamageElement_Res                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       CallFunc_GetDamageElement_ERes                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_KnightOfTheClaw_DragonPet_C::DoClawAttackDamage(class AActor* ImpactTarget, const struct FHitResult& Temp_struct_Variable, class UClass* CallFunc_GetDamageElement_Res, enum class EOakElementalType CallFunc_GetDamageElement_ERes, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "DoClawAttackDamage");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_DoClawAttackDamage_Params Parms{};

	Parms.ImpactTarget = ImpactTarget;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetDamageElement_Res = CallFunc_GetDamageElement_Res;
	Parms.CallFunc_GetDamageElement_ERes = CallFunc_GetDamageElement_ERes;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.DestroyFireBreathAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_KnightOfTheClaw_DragonPet_C::DestroyFireBreathAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "DestroyFireBreathAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.CreateFireBreathAttack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOakElementalType       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetDamageElement_Res                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       CallFunc_GetDamageElement_ERes                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetDamageElement_Res1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       CallFunc_GetDamageElement_ERes1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_KnightOfTheClaw_DragonPet_C::CreateFireBreathAttack(enum class EOakElementalType Temp_byte_Variable, class UParticleSystem* Temp_object_Variable, class UParticleSystem* Temp_object_Variable1, class UParticleSystem* Temp_object_Variable2, class UParticleSystem* Temp_object_Variable3, class UParticleSystem* Temp_object_Variable4, class UParticleSystem* Temp_object_Variable5, const struct FHitResult& Temp_struct_Variable, bool CallFunc_IsServer_ReturnValue, class UClass* CallFunc_GetDamageElement_Res, enum class EOakElementalType CallFunc_GetDamageElement_ERes, class UClass* CallFunc_GetDamageElement_Res1, enum class EOakElementalType CallFunc_GetDamageElement_ERes1, class UParticleSystem* K2Node_Select_Default, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "CreateFireBreathAttack");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_CreateFireBreathAttack_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.Temp_object_Variable4 = Temp_object_Variable4;
	Parms.Temp_object_Variable5 = Temp_object_Variable5;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetDamageElement_Res = CallFunc_GetDamageElement_Res;
	Parms.CallFunc_GetDamageElement_ERes = CallFunc_GetDamageElement_ERes;
	Parms.CallFunc_GetDamageElement_Res1 = CallFunc_GetDamageElement_Res1;
	Parms.CallFunc_GetDamageElement_ERes1 = CallFunc_GetDamageElement_ERes1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.DestroyShockBreathBeam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLightBeamQueryData         K2Node_MakeStruct_LightBeamQueryData                             (NoDestructor)

void ADrone_KnightOfTheClaw_DragonPet_C::DestroyShockBreathBeam(const struct FLightBeamQueryData& K2Node_MakeStruct_LightBeamQueryData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "DestroyShockBreathBeam");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_DestroyShockBreathBeam_Params Parms{};

	Parms.K2Node_MakeStruct_LightBeamQueryData = K2Node_MakeStruct_LightBeamQueryData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.CreateShockBreathBeam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      CallFunc_GetDamageElement_Res                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       CallFunc_GetDamageElement_ERes                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_PlayerEnemyInteractions_C>K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCompanionTargetingSocket_Socket                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLightBeamAttachment        K2Node_MakeStruct_LightBeamAttachment                            (NoDestructor, ContainsInstancedReference)
// struct FLightBeamAttachment        K2Node_MakeStruct_LightBeamAttachment1                           (NoDestructor, ContainsInstancedReference)
// struct FLightBeamInitializationDataK2Node_MakeStruct_LightBeamInitializationData                    (ContainsInstancedReference)

void ADrone_KnightOfTheClaw_DragonPet_C::CreateShockBreathBeam(class UClass* CallFunc_GetDamageElement_Res, enum class EOakElementalType CallFunc_GetDamageElement_ERes, class APawn* CallFunc_GetInstigator_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, TScriptInterface<class IBPI_PlayerEnemyInteractions_C> K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_GetInstigator_ReturnValue1, class FName CallFunc_GetCompanionTargetingSocket_Socket, const struct FLightBeamAttachment& K2Node_MakeStruct_LightBeamAttachment, const struct FLightBeamAttachment& K2Node_MakeStruct_LightBeamAttachment1, const struct FLightBeamInitializationData& K2Node_MakeStruct_LightBeamInitializationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "CreateShockBreathBeam");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_CreateShockBreathBeam_Params Parms{};

	Parms.CallFunc_GetDamageElement_Res = CallFunc_GetDamageElement_Res;
	Parms.CallFunc_GetDamageElement_ERes = CallFunc_GetDamageElement_ERes;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions = K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetInstigator_ReturnValue1 = CallFunc_GetInstigator_ReturnValue1;
	Parms.CallFunc_GetCompanionTargetingSocket_Socket = CallFunc_GetCompanionTargetingSocket_Socket;
	Parms.K2Node_MakeStruct_LightBeamAttachment = K2Node_MakeStruct_LightBeamAttachment;
	Parms.K2Node_MakeStruct_LightBeamAttachment1 = K2Node_MakeStruct_LightBeamAttachment1;
	Parms.K2Node_MakeStruct_LightBeamInitializationData = K2Node_MakeStruct_LightBeamInitializationData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.OnRep_ShockBreathAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_KnightOfTheClaw_DragonPet_C::OnRep_ShockBreathAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "OnRep_ShockBreathAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.InitAttackValues
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakPlayerAbilityManagerComponent*AbilityManagerComponent                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CooldownScalar                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAttributeInitializationDataCallFunc_GetDataTableValue_OutValue                              (NoDestructor)
// bool                               CallFunc_GetDataTableValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAttributeInitializationDataCallFunc_GetDataTableValue_OutValue1                             (NoDestructor)
// bool                               CallFunc_GetDataTableValue_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAttributeInitializationDataCallFunc_GetDataTableValue_OutValue2                             (NoDestructor)
// bool                               CallFunc_GetDataTableValue_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAttributeInitializationDataCallFunc_GetDataTableValue_OutValue3                             (NoDestructor)
// bool                               CallFunc_GetDataTableValue_ReturnValue3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxAbility*                 CallFunc_FindAbility_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIPassive_Parent_C>K2Node_DynamicCast_AsIPassive_Parent                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetSkillGrade_Res                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAbility_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxAbility*                 CallFunc_FindAbility_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIPassive_Parent_C>K2Node_DynamicCast_AsIPassive_Parent1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAbility_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetSkillGrade_Res1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakPlayerAbilityManagerComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MantisElementOverride_Res                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_KnightOfTheClaw_DragonPet_C::InitAttackValues(class UOakPlayerAbilityManagerComponent* AbilityManagerComponent, float CooldownScalar, const struct FAttributeInitializationData& CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, const struct FAttributeInitializationData& CallFunc_GetDataTableValue_OutValue1, bool CallFunc_GetDataTableValue_ReturnValue1, const struct FAttributeInitializationData& CallFunc_GetDataTableValue_OutValue2, bool CallFunc_GetDataTableValue_ReturnValue2, const struct FAttributeInitializationData& CallFunc_GetDataTableValue_OutValue3, bool CallFunc_GetDataTableValue_ReturnValue3, class UGbxAbility* CallFunc_FindAbility_ReturnValue, TScriptInterface<class IIPassive_Parent_C> K2Node_DynamicCast_AsIPassive_Parent, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetSkillGrade_Res, bool CallFunc_HasAbility_ReturnValue, class UGbxAbility* CallFunc_FindAbility_ReturnValue1, TScriptInterface<class IIPassive_Parent_C> K2Node_DynamicCast_AsIPassive_Parent1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_HasAbility_ReturnValue1, int32 CallFunc_GetSkillGrade_Res1, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, class UOakPlayerAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_MantisElementOverride_Res, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "InitAttackValues");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_InitAttackValues_Params Parms{};

	Parms.AbilityManagerComponent = AbilityManagerComponent;
	Parms.CooldownScalar = CooldownScalar;
	Parms.CallFunc_GetDataTableValue_OutValue = CallFunc_GetDataTableValue_OutValue;
	Parms.CallFunc_GetDataTableValue_ReturnValue = CallFunc_GetDataTableValue_ReturnValue;
	Parms.CallFunc_GetDataTableValue_OutValue1 = CallFunc_GetDataTableValue_OutValue1;
	Parms.CallFunc_GetDataTableValue_ReturnValue1 = CallFunc_GetDataTableValue_ReturnValue1;
	Parms.CallFunc_GetDataTableValue_OutValue2 = CallFunc_GetDataTableValue_OutValue2;
	Parms.CallFunc_GetDataTableValue_ReturnValue2 = CallFunc_GetDataTableValue_ReturnValue2;
	Parms.CallFunc_GetDataTableValue_OutValue3 = CallFunc_GetDataTableValue_OutValue3;
	Parms.CallFunc_GetDataTableValue_ReturnValue3 = CallFunc_GetDataTableValue_ReturnValue3;
	Parms.CallFunc_FindAbility_ReturnValue = CallFunc_FindAbility_ReturnValue;
	Parms.K2Node_DynamicCast_AsIPassive_Parent = K2Node_DynamicCast_AsIPassive_Parent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSkillGrade_Res = CallFunc_GetSkillGrade_Res;
	Parms.CallFunc_HasAbility_ReturnValue = CallFunc_HasAbility_ReturnValue;
	Parms.CallFunc_FindAbility_ReturnValue1 = CallFunc_FindAbility_ReturnValue1;
	Parms.K2Node_DynamicCast_AsIPassive_Parent1 = K2Node_DynamicCast_AsIPassive_Parent1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_HasAbility_ReturnValue1 = CallFunc_HasAbility_ReturnValue1;
	Parms.CallFunc_GetSkillGrade_Res1 = CallFunc_GetSkillGrade_Res1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue1 = CallFunc_GetOwner_ReturnValue1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_MantisElementOverride_Res = CallFunc_MantisElementOverride_Res;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue1 = CallFunc_Multiply_FloatFloat_ReturnValue1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue3 = CallFunc_Multiply_FloatFloat_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.ShockBreathAttackReadied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_KnightOfTheClaw_DragonPet_C::ShockBreathAttackReadied()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "ShockBreathAttackReadied");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.ShockBreathAttackedFinished
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)

void ADrone_KnightOfTheClaw_DragonPet_C::ShockBreathAttackedFinished(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "ShockBreathAttackedFinished");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_ShockBreathAttackedFinished_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.StartShockBreathAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGbxActionRegister>  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_KnightOfTheClaw_DragonPet_C::StartShockBreathAttack(TArray<struct FGbxActionRegister>& Temp_struct_Variable, class UGbxAction* CallFunc_K2Play_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "StartShockBreathAttack");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_StartShockBreathAttack_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_K2Play_ReturnValue = CallFunc_K2Play_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.ClawAttackTimeout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_KnightOfTheClaw_DragonPet_C::ClawAttackTimeout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "ClawAttackTimeout");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.StartPostAttackCooldown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPerformingAnyAttack_Res                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)

void ADrone_KnightOfTheClaw_DragonPet_C::StartPostAttackCooldown(float Time, bool Temp_bool_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsPerformingAnyAttack_Res, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_Select_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "StartPostAttackCooldown");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_StartPostAttackCooldown_Params Parms{};

	Parms.Time = Time;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_IsPerformingAnyAttack_Res = CallFunc_IsPerformingAnyAttack_Res;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.PostAttackCooldown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_KnightOfTheClaw_DragonPet_C::PostAttackCooldown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "PostAttackCooldown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.FireBoltAttackReadied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_KnightOfTheClaw_DragonPet_C::FireBoltAttackReadied()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "FireBoltAttackReadied");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.FireBoltAttackFinished
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)

void ADrone_KnightOfTheClaw_DragonPet_C::FireBoltAttackFinished(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "FireBoltAttackFinished");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_FireBoltAttackFinished_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.StartFireBoltAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGbxActionRegister>  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_KnightOfTheClaw_DragonPet_C::StartFireBoltAttack(TArray<struct FGbxActionRegister>& Temp_struct_Variable, class UGbxAction* CallFunc_K2Play_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "StartFireBoltAttack");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_StartFireBoltAttack_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_K2Play_ReturnValue = CallFunc_K2Play_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.OnRep_FireBoltAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_KnightOfTheClaw_DragonPet_C::OnRep_FireBoltAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "OnRep_FireBoltAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.ClawAttackReadied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_KnightOfTheClaw_DragonPet_C::ClawAttackReadied()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "ClawAttackReadied");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.ClawAttackFinished
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)

void ADrone_KnightOfTheClaw_DragonPet_C::ClawAttackFinished(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "ClawAttackFinished");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_ClawAttackFinished_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.StartClawAttack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGbxActionRegister>  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)

void ADrone_KnightOfTheClaw_DragonPet_C::StartClawAttack(TArray<struct FGbxActionRegister>& Temp_struct_Variable, class UGbxAction* CallFunc_K2Play_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "StartClawAttack");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_StartClawAttack_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_K2Play_ReturnValue = CallFunc_K2Play_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.FireBreathAttackReadied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_KnightOfTheClaw_DragonPet_C::FireBreathAttackReadied()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "FireBreathAttackReadied");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.FireBreathAttackFinished
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)

void ADrone_KnightOfTheClaw_DragonPet_C::FireBreathAttackFinished(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "FireBreathAttackFinished");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_FireBreathAttackFinished_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.StartFireBreathAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGbxActionRegister>  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_KnightOfTheClaw_DragonPet_C::StartFireBreathAttack(TArray<struct FGbxActionRegister>& Temp_struct_Variable, class UGbxAction* CallFunc_K2Play_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "StartFireBreathAttack");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_StartFireBreathAttack_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_K2Play_ReturnValue = CallFunc_K2Play_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.CanPerformAttack
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

void ADrone_KnightOfTheClaw_DragonPet_C::CanPerformAttack(bool Enabled, const struct FTimerHandle& Timer, float Min_Distance, float Max_Distance, bool* Res, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue1, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "CanPerformAttack");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_CanPerformAttack_Params Parms{};

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


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.IsPerformingAnyAttack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_KnightOfTheClaw_DragonPet_C::IsPerformingAnyAttack(bool* Res, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "IsPerformingAnyAttack");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_IsPerformingAnyAttack_Params Parms{};

	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.OnRep_FireBreathAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_KnightOfTheClaw_DragonPet_C::OnRep_FireBreathAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "OnRep_FireBreathAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.OnRep_ClawAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_KnightOfTheClaw_DragonPet_C::OnRep_ClawAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "OnRep_ClawAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.DespawnCompanion
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)

void ADrone_KnightOfTheClaw_DragonPet_C::DespawnCompanion(bool* Res, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "DespawnCompanion");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_DespawnCompanion_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_KnightOfTheClaw_DragonPet_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.StartAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_KnightOfTheClaw_DragonPet_C::StartAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "StartAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.StopAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_KnightOfTheClaw_DragonPet_C::StopAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "StopAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.DebugAttacks
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_KnightOfTheClaw_DragonPet_C::DebugAttacks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "DebugAttacks");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.CreateFireBoltSplat
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  TransformData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void ADrone_KnightOfTheClaw_DragonPet_C::CreateFireBoltSplat(const struct FTransform& TransformData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "CreateFireBoltSplat");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_CreateFireBoltSplat_Params Parms{};

	Parms.TransformData = TransformData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.TestKillDragonPet
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_KnightOfTheClaw_DragonPet_C::TestKillDragonPet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "TestKillDragonPet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADrone_KnightOfTheClaw_DragonPet_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.OnRep_EnableTargeting
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_KnightOfTheClaw_DragonPet_C::OnRep_EnableTargeting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "OnRep_EnableTargeting");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.SetFlyToTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_KnightOfTheClaw_DragonPet_C::SetFlyToTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "SetFlyToTarget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.SetHoverAtTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_KnightOfTheClaw_DragonPet_C::SetHoverAtTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "SetHoverAtTarget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.SetHoverAtOwner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_KnightOfTheClaw_DragonPet_C::SetHoverAtOwner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "SetHoverAtOwner");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.SetHoverAtLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_KnightOfTheClaw_DragonPet_C::SetHoverAtLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "SetHoverAtLocation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.OnTargetDied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamageReceiver                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_KnightOfTheClaw_DragonPet_C::OnTargetDied(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "OnTargetDied");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_OnTargetDied_Params Parms{};

	Parms.DamageReceiver = DamageReceiver;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Drone_KnightOfTheClaw_DragonPet
// (BlueprintEvent)
// Parameters:
// class AActor*                      TouchingActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsPlayer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UActorComponent*             ComponentTouched                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_KnightOfTheClaw_DragonPet_C::BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Drone_KnightOfTheClaw_DragonPet(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Drone_KnightOfTheClaw_DragonPet");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Drone_KnightOfTheClaw_DragonPet_Params Parms{};

	Parms.TouchingActor = TouchingActor;
	Parms.bIsPlayer = bIsPlayer;
	Parms.ComponentTouched = ComponentTouched;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.DragonPet_OnCausedDeath
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*            Damaged                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDeathDetails         Details                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ADrone_KnightOfTheClaw_DragonPet_C::DragonPet_OnCausedDeath(class UDamageComponent* Damaged, struct FCausedDeathDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "DragonPet_OnCausedDeath");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_DragonPet_OnCausedDeath_Params Parms{};

	Parms.Damaged = Damaged;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.DragonPet_OnCausedAnyDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamageInstigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               DamageSource                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        Details                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void ADrone_KnightOfTheClaw_DragonPet_C::DragonPet_OnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "DragonPet_OnCausedAnyDamage");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_DragonPet_OnCausedAnyDamage_Params Parms{};

	Parms.DamageInstigator = DamageInstigator;
	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.DamageSource = DamageSource;
	Parms.DamagedActor = DamagedActor;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.BndEvt__OakUsable_K2Node_ComponentBoundEvent_1_UsableUsedSignature__DelegateSignature_Drone_KnightOfTheClaw_DragonPet
// (HasOutParams, BlueprintEvent)
// Parameters:
// struct FUseEvent                   UseEvent                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)

void ADrone_KnightOfTheClaw_DragonPet_C::BndEvt__OakUsable_K2Node_ComponentBoundEvent_1_UsableUsedSignature__DelegateSignature_Drone_KnightOfTheClaw_DragonPet(struct FUseEvent& UseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "BndEvt__OakUsable_K2Node_ComponentBoundEvent_1_UsableUsedSignature__DelegateSignature_Drone_KnightOfTheClaw_DragonPet");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_BndEvt__OakUsable_K2Node_ComponentBoundEvent_1_UsableUsedSignature__DelegateSignature_Drone_KnightOfTheClaw_DragonPet_Params Parms{};

	Parms.UseEvent = UseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.TrackCompanion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TrackStatus                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrone_KnightOfTheClaw_DragonPet_C::TrackCompanion(bool TrackStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "TrackCompanion");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_TrackCompanion_Params Parms{};

	Parms.TrackStatus = TrackStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ADrone_KnightOfTheClaw_DragonPet_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_KnightOfTheClaw_DragonPet_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "ReceiveEndPlay");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.CheckForEnableTargeting
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_KnightOfTheClaw_DragonPet_C::CheckForEnableTargeting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "CheckForEnableTargeting");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.GetOwnerFailSafe
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_KnightOfTheClaw_DragonPet_C::GetOwnerFailSafe()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "GetOwnerFailSafe");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.TriggerFidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_KnightOfTheClaw_DragonPet_C::TriggerFidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "TriggerFidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.Audio_Start_Breath_Attack
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOakElementalType       Element                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_KnightOfTheClaw_DragonPet_C::Audio_Start_Breath_Attack(enum class EOakElementalType Element)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "Audio_Start_Breath_Attack");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_Audio_Start_Breath_Attack_Params Parms{};

	Parms.Element = Element;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.Audio_Stop_Breath_Attack
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_KnightOfTheClaw_DragonPet_C::Audio_Stop_Breath_Attack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "Audio_Stop_Breath_Attack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.Audio_Claw_Attack
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrone_KnightOfTheClaw_DragonPet_C::Audio_Claw_Attack(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "Audio_Claw_Attack");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_Audio_Claw_Attack_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.Audio_FireBolt_Spit
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_KnightOfTheClaw_DragonPet_C::Audio_FireBolt_Spit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "Audio_FireBolt_Spit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.Audio_ReviveBolt_Spit
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_KnightOfTheClaw_DragonPet_C::Audio_ReviveBolt_Spit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "Audio_ReviveBolt_Spit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.Audio_Spawn_Voc
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_KnightOfTheClaw_DragonPet_C::Audio_Spawn_Voc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "Audio_Spawn_Voc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.Audio_Death_Voc
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_KnightOfTheClaw_DragonPet_C::Audio_Death_Voc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "Audio_Death_Voc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.OpenImpactGate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_KnightOfTheClaw_DragonPet_C::OpenImpactGate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "OpenImpactGate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.CloseImpactGate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADrone_KnightOfTheClaw_DragonPet_C::CloseImpactGate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "CloseImpactGate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Drone_KnightOfTheClaw_DragonPet.Drone_KnightOfTheClaw_DragonPet_C.ExecuteUbergraph_Drone_KnightOfTheClaw_DragonPet
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USplatData*                  Temp_object_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplatData*                  Temp_object_Variable1                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_CanPerformAttack_Res                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanPerformAttack_Res1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USplatData*                  Temp_object_Variable2                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanPerformAttack_Res2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanPerformAttack_Res3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue1                        (NoDestructor)
// class USplatData*                  Temp_object_Variable3                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  K2Node_CustomEvent_TransformData                                 (IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetDamageElement_Res                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       CallFunc_GetDamageElement_ERes                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetDroneOwner_DroneOwner                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetDroneOwner_DroneOwner1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxSpawnActorAsyncRequest  K2Node_MakeStruct_GbxSpawnActorAsyncRequest                      (ContainsInstancedReference)
// int32                              CallFunc_SpawnActorAsync_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTargetableComponent*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTargetableByActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPerformingAnyAttack_Res                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USplatData*                  Temp_object_Variable4                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCurrentHealthPercent_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_GetTotalMaxHealth_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue1                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue2                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue2                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue3                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue3                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue4                              (ZeroConstructor, HasGetValueTypeHash)
// enum class EOakElementalType       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue5                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue6                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue7                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue8                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue9                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue10                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue11                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue12                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue4                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue1                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue2                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue5                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue7                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue6                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select1_Default                                           (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue3             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue4             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue3                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue4                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue4                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue6                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue7                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue8                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue7                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue9                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select2_Default                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue13                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select3_Default                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue14                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue15                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue16                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue17                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue18                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue19                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue20                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue21                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue22                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue23                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue24                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue25                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue26                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue1              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue27                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue28                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue29                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue30                             (ZeroConstructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageReceiver                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_ComponentBoundEvent_TouchingActor                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsPlayer                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UActorComponent*             K2Node_ComponentBoundEvent_ComponentTouched                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter*               K2Node_DynamicCast_AsOak_Character                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDamageComponent*            K2Node_CustomEvent_Damaged                                       (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDeathDetails         K2Node_CustomEvent_Details1                                      (ConstParm)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue                            (None)
// class AActor*                      K2Node_CustomEvent_DamageInstigator                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Damage                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              K2Node_CustomEvent_DamageType                                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               K2Node_CustomEvent_DamageSource                                  (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamagedActor                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        K2Node_CustomEvent_Details                                       (ContainsInstancedReference)
// struct FDialogConversation         CallFunc_FinishTriggerDialog_Conversation                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FinishTriggerDialog_SequenceID                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishTriggerDialog_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBPAnim_Wyvern_Pet_C*        K2Node_DynamicCast_AsBPAnim_Wyvern_Pet                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetAnimFlyRates_Res                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SetAnimFlyRates_Res1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUseEvent                   K2Node_ComponentBoundEvent_UseEvent                              (ConstParm, NoDestructor, ContainsInstancedReference)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakGameInstance*            K2Node_DynamicCast_AsOak_Game_Instance                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetDroneOwner_DroneOwner2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_TrackStatus                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue2                        (NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPerformingAnyAttack_Res1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue8                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EOakElementalType       K2Node_CustomEvent_Element                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Target                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostAttachedEvent_ReturnValue                           (None)
// struct FWwisePlaybackInstance      CallFunc_PostEventAtLocation_ReturnValue                         (None)
// bool                               CallFunc_IsAudioPlaying_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue                              (None)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue1                             (None)
// bool                               Temp_bool_Has_Been_Initd_Variable2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue1                           (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDialogConversation         CallFunc_FinishTriggerDialog_Conversation1                       (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FinishTriggerDialog_SequenceID1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishTriggerDialog_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       CallFunc_GetClassElementalType_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplatData*                  Temp_object_Variable5                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       K2Node_Select4_Default                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplatData*                  K2Node_Select5_Default                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseEvent*                 CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue2                             (None)

void ADrone_KnightOfTheClaw_DragonPet_C::ExecuteUbergraph_Drone_KnightOfTheClaw_DragonPet(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable, bool CallFunc_BooleanOR_ReturnValue1, bool Temp_bool_Variable1, bool CallFunc_BooleanOR_ReturnValue2, bool Temp_bool_Variable2, bool CallFunc_BooleanOR_ReturnValue3, bool Temp_bool_Variable3, class USplatData* Temp_object_Variable, class USplatData* Temp_object_Variable1, bool Temp_bool_Variable4, bool Temp_bool_IsClosed_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_CanPerformAttack_Res, bool CallFunc_CanPerformAttack_Res1, class USplatData* Temp_object_Variable2, bool CallFunc_CanPerformAttack_Res2, bool CallFunc_CanPerformAttack_Res3, bool CallFunc_IsValid_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, class USplatData* Temp_object_Variable3, const struct FTransform& K2Node_CustomEvent_TransformData, class UClass* CallFunc_GetDamageElement_Res, enum class EOakElementalType CallFunc_GetDamageElement_ERes, class AActor* CallFunc_GetDroneOwner_DroneOwner, class AActor* CallFunc_GetDroneOwner_DroneOwner1, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, int32 CallFunc_SpawnActorAsync_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, class UTargetableComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, bool CallFunc_IsTargetableByActor_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsPerformingAnyAttack_Res, bool CallFunc_Not_PreBool_ReturnValue3, class USplatData* Temp_object_Variable4, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue3, float CallFunc_GetCurrentHealthPercent_ReturnValue, bool CallFunc_BooleanAND_ReturnValue4, float CallFunc_Multiply_FloatFloat_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, float CallFunc_GetTotalMaxHealth_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue2, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue4, const class FString& CallFunc_Concat_StrStr_ReturnValue1, const class FString& CallFunc_Concat_StrStr_ReturnValue2, const class FString& CallFunc_Conv_BoolToString_ReturnValue1, const class FString& CallFunc_Conv_BoolToString_ReturnValue2, const class FString& CallFunc_Conv_BoolToString_ReturnValue3, const class FString& CallFunc_Concat_StrStr_ReturnValue3, const class FString& CallFunc_Concat_StrStr_ReturnValue4, enum class EOakElementalType Temp_byte_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue5, const class FString& CallFunc_Concat_StrStr_ReturnValue6, const class FString& CallFunc_Concat_StrStr_ReturnValue7, const class FString& CallFunc_Concat_StrStr_ReturnValue8, const class FString& CallFunc_Concat_StrStr_ReturnValue9, const class FString& CallFunc_Concat_StrStr_ReturnValue10, const class FString& CallFunc_Concat_StrStr_ReturnValue11, const class FString& CallFunc_Concat_StrStr_ReturnValue12, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue1, int32 CallFunc_Round_ReturnValue, bool CallFunc_BooleanAND_ReturnValue5, const class FString& CallFunc_Conv_IntToString_ReturnValue, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue1, const class FString& CallFunc_Conv_BoolToString_ReturnValue4, int32 CallFunc_Round_ReturnValue1, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue1, const class FString& CallFunc_Conv_IntToString_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue4, bool CallFunc_BooleanAND_ReturnValue6, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue2, int32 CallFunc_Round_ReturnValue2, const class FString& K2Node_Select_Default, const class FString& CallFunc_Conv_IntToString_ReturnValue2, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue5, const class FString& CallFunc_Conv_BoolToString_ReturnValue5, bool CallFunc_BooleanAND_ReturnValue7, const class FString& CallFunc_Conv_BoolToString_ReturnValue6, const class FString& K2Node_Select1_Default, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue3, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue4, int32 CallFunc_Round_ReturnValue3, int32 CallFunc_Round_ReturnValue4, const class FString& CallFunc_Conv_IntToString_ReturnValue3, const class FString& CallFunc_Conv_IntToString_ReturnValue4, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue3, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue4, bool CallFunc_Not_PreBool_ReturnValue6, bool CallFunc_Not_PreBool_ReturnValue7, bool CallFunc_BooleanAND_ReturnValue8, const class FString& CallFunc_Conv_BoolToString_ReturnValue7, bool CallFunc_BooleanAND_ReturnValue9, const class FString& K2Node_Select2_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue13, const class FString& K2Node_Select3_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue14, const class FString& CallFunc_Concat_StrStr_ReturnValue15, const class FString& CallFunc_Concat_StrStr_ReturnValue16, const class FString& CallFunc_GetDisplayName_ReturnValue2, const class FString& CallFunc_Concat_StrStr_ReturnValue17, const class FString& CallFunc_Concat_StrStr_ReturnValue18, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue19, const class FString& CallFunc_Concat_StrStr_ReturnValue20, const class FString& CallFunc_Concat_StrStr_ReturnValue21, const class FString& CallFunc_Concat_StrStr_ReturnValue22, const class FString& CallFunc_Concat_StrStr_ReturnValue23, const class FString& CallFunc_Concat_StrStr_ReturnValue24, const class FString& CallFunc_Concat_StrStr_ReturnValue25, const class FString& CallFunc_Concat_StrStr_ReturnValue26, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue1, const class FString& CallFunc_Concat_StrStr_ReturnValue27, const class FString& CallFunc_Concat_StrStr_ReturnValue28, const class FString& CallFunc_Concat_StrStr_ReturnValue29, const class FString& CallFunc_Concat_StrStr_ReturnValue30, class AActor* K2Node_Event_DamageReceiver, class AActor* K2Node_Event_DamageCauser, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, class AActor* K2Node_ComponentBoundEvent_TouchingActor, bool K2Node_ComponentBoundEvent_bIsPlayer, class UActorComponent* K2Node_ComponentBoundEvent_ComponentTouched, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess, class UDamageComponent* K2Node_CustomEvent_Damaged, const struct FCausedDeathDetails& K2Node_CustomEvent_Details1, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, class AActor* K2Node_CustomEvent_DamageInstigator, float K2Node_CustomEvent_Damage, class UGbxDamageType* K2Node_CustomEvent_DamageType, class UDamageSource* K2Node_CustomEvent_DamageSource, class AActor* K2Node_CustomEvent_DamagedActor, const struct FCausedDamageDetails& K2Node_CustomEvent_Details, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UBPAnim_Wyvern_Pet_C* K2Node_DynamicCast_AsBPAnim_Wyvern_Pet, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_SetAnimFlyRates_Res, const struct FHitResult& Temp_struct_Variable, bool CallFunc_SetAnimFlyRates_Res1, const struct FUseEvent& K2Node_ComponentBoundEvent_UseEvent, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UOakGameInstance* K2Node_DynamicCast_AsOak_Game_Instance, bool K2Node_DynamicCast_bSuccess2, class AActor* CallFunc_GetDroneOwner_DroneOwner2, bool K2Node_Event_TrackStatus, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool Temp_bool_Has_Been_Initd_Variable1, class AActor* CallFunc_GetOwner_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue2, class AActor* CallFunc_GetOwner_ReturnValue4, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsPerformingAnyAttack_Res1, bool CallFunc_Not_PreBool_ReturnValue8, enum class EOakElementalType K2Node_CustomEvent_Element, class AActor* K2Node_CustomEvent_Target, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_IsAudioPlaying_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue1, bool Temp_bool_Has_Been_Initd_Variable2, bool Temp_bool_IsClosed_Variable1, bool Temp_bool_IsClosed_Variable2, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue5, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation1, int32 CallFunc_FinishTriggerDialog_SequenceID1, bool CallFunc_FinishTriggerDialog_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue6, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue, class USplatData* Temp_object_Variable5, enum class EOakElementalType K2Node_Select4_Default, class USplatData* K2Node_Select5_Default, class UWwiseEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Drone_KnightOfTheClaw_DragonPet_C", "ExecuteUbergraph_Drone_KnightOfTheClaw_DragonPet");

	Params::ADrone_KnightOfTheClaw_DragonPet_C_ExecuteUbergraph_Drone_KnightOfTheClaw_DragonPet_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_BooleanOR_ReturnValue3 = CallFunc_BooleanOR_ReturnValue3;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_CanPerformAttack_Res = CallFunc_CanPerformAttack_Res;
	Parms.CallFunc_CanPerformAttack_Res1 = CallFunc_CanPerformAttack_Res1;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.CallFunc_CanPerformAttack_Res2 = CallFunc_CanPerformAttack_Res2;
	Parms.CallFunc_CanPerformAttack_Res3 = CallFunc_CanPerformAttack_Res3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue1 = CallFunc_K2_SetTimerDelegate_ReturnValue1;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.K2Node_CustomEvent_TransformData = K2Node_CustomEvent_TransformData;
	Parms.CallFunc_GetDamageElement_Res = CallFunc_GetDamageElement_Res;
	Parms.CallFunc_GetDamageElement_ERes = CallFunc_GetDamageElement_ERes;
	Parms.CallFunc_GetDroneOwner_DroneOwner = CallFunc_GetDroneOwner_DroneOwner;
	Parms.CallFunc_GetDroneOwner_DroneOwner1 = CallFunc_GetDroneOwner_DroneOwner1;
	Parms.K2Node_MakeStruct_GbxSpawnActorAsyncRequest = K2Node_MakeStruct_GbxSpawnActorAsyncRequest;
	Parms.CallFunc_SpawnActorAsync_ReturnValue = CallFunc_SpawnActorAsync_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue = CallFunc_K2_IsTimerActiveHandle_ReturnValue;
	Parms.CallFunc_IsTargetableByActor_ReturnValue = CallFunc_IsTargetableByActor_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsPerformingAnyAttack_Res = CallFunc_IsPerformingAnyAttack_Res;
	Parms.CallFunc_Not_PreBool_ReturnValue3 = CallFunc_Not_PreBool_ReturnValue3;
	Parms.Temp_object_Variable4 = Temp_object_Variable4;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue3 = CallFunc_BooleanAND_ReturnValue3;
	Parms.CallFunc_GetCurrentHealthPercent_ReturnValue = CallFunc_GetCurrentHealthPercent_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue4 = CallFunc_BooleanAND_ReturnValue4;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_GetTotalMaxHealth_ReturnValue = CallFunc_GetTotalMaxHealth_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue1 = CallFunc_GetOwner_ReturnValue1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue1 = CallFunc_Multiply_FloatFloat_ReturnValue1;
	Parms.CallFunc_GetOwner_ReturnValue2 = CallFunc_GetOwner_ReturnValue2;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue1 = CallFunc_GetDisplayName_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue4 = CallFunc_BooleanOR_ReturnValue4;
	Parms.CallFunc_Concat_StrStr_ReturnValue1 = CallFunc_Concat_StrStr_ReturnValue1;
	Parms.CallFunc_Concat_StrStr_ReturnValue2 = CallFunc_Concat_StrStr_ReturnValue2;
	Parms.CallFunc_Conv_BoolToString_ReturnValue1 = CallFunc_Conv_BoolToString_ReturnValue1;
	Parms.CallFunc_Conv_BoolToString_ReturnValue2 = CallFunc_Conv_BoolToString_ReturnValue2;
	Parms.CallFunc_Conv_BoolToString_ReturnValue3 = CallFunc_Conv_BoolToString_ReturnValue3;
	Parms.CallFunc_Concat_StrStr_ReturnValue3 = CallFunc_Concat_StrStr_ReturnValue3;
	Parms.CallFunc_Concat_StrStr_ReturnValue4 = CallFunc_Concat_StrStr_ReturnValue4;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Concat_StrStr_ReturnValue5 = CallFunc_Concat_StrStr_ReturnValue5;
	Parms.CallFunc_Concat_StrStr_ReturnValue6 = CallFunc_Concat_StrStr_ReturnValue6;
	Parms.CallFunc_Concat_StrStr_ReturnValue7 = CallFunc_Concat_StrStr_ReturnValue7;
	Parms.CallFunc_Concat_StrStr_ReturnValue8 = CallFunc_Concat_StrStr_ReturnValue8;
	Parms.CallFunc_Concat_StrStr_ReturnValue9 = CallFunc_Concat_StrStr_ReturnValue9;
	Parms.CallFunc_Concat_StrStr_ReturnValue10 = CallFunc_Concat_StrStr_ReturnValue10;
	Parms.CallFunc_Concat_StrStr_ReturnValue11 = CallFunc_Concat_StrStr_ReturnValue11;
	Parms.CallFunc_Concat_StrStr_ReturnValue12 = CallFunc_Concat_StrStr_ReturnValue12;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue = CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue1 = CallFunc_EqualEqual_ObjectObject_ReturnValue1;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue5 = CallFunc_BooleanAND_ReturnValue5;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue1 = CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue1;
	Parms.CallFunc_Conv_BoolToString_ReturnValue4 = CallFunc_Conv_BoolToString_ReturnValue4;
	Parms.CallFunc_Round_ReturnValue1 = CallFunc_Round_ReturnValue1;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue1 = CallFunc_K2_IsTimerActiveHandle_ReturnValue1;
	Parms.CallFunc_Conv_IntToString_ReturnValue1 = CallFunc_Conv_IntToString_ReturnValue1;
	Parms.CallFunc_Not_PreBool_ReturnValue4 = CallFunc_Not_PreBool_ReturnValue4;
	Parms.CallFunc_BooleanAND_ReturnValue6 = CallFunc_BooleanAND_ReturnValue6;
	Parms.CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue2 = CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue2;
	Parms.CallFunc_Round_ReturnValue2 = CallFunc_Round_ReturnValue2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_IntToString_ReturnValue2 = CallFunc_Conv_IntToString_ReturnValue2;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue2 = CallFunc_K2_IsTimerActiveHandle_ReturnValue2;
	Parms.CallFunc_Not_PreBool_ReturnValue5 = CallFunc_Not_PreBool_ReturnValue5;
	Parms.CallFunc_Conv_BoolToString_ReturnValue5 = CallFunc_Conv_BoolToString_ReturnValue5;
	Parms.CallFunc_BooleanAND_ReturnValue7 = CallFunc_BooleanAND_ReturnValue7;
	Parms.CallFunc_Conv_BoolToString_ReturnValue6 = CallFunc_Conv_BoolToString_ReturnValue6;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue3 = CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue3;
	Parms.CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue4 = CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue4;
	Parms.CallFunc_Round_ReturnValue3 = CallFunc_Round_ReturnValue3;
	Parms.CallFunc_Round_ReturnValue4 = CallFunc_Round_ReturnValue4;
	Parms.CallFunc_Conv_IntToString_ReturnValue3 = CallFunc_Conv_IntToString_ReturnValue3;
	Parms.CallFunc_Conv_IntToString_ReturnValue4 = CallFunc_Conv_IntToString_ReturnValue4;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue3 = CallFunc_K2_IsTimerActiveHandle_ReturnValue3;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue4 = CallFunc_K2_IsTimerActiveHandle_ReturnValue4;
	Parms.CallFunc_Not_PreBool_ReturnValue6 = CallFunc_Not_PreBool_ReturnValue6;
	Parms.CallFunc_Not_PreBool_ReturnValue7 = CallFunc_Not_PreBool_ReturnValue7;
	Parms.CallFunc_BooleanAND_ReturnValue8 = CallFunc_BooleanAND_ReturnValue8;
	Parms.CallFunc_Conv_BoolToString_ReturnValue7 = CallFunc_Conv_BoolToString_ReturnValue7;
	Parms.CallFunc_BooleanAND_ReturnValue9 = CallFunc_BooleanAND_ReturnValue9;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_Concat_StrStr_ReturnValue13 = CallFunc_Concat_StrStr_ReturnValue13;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_Concat_StrStr_ReturnValue14 = CallFunc_Concat_StrStr_ReturnValue14;
	Parms.CallFunc_Concat_StrStr_ReturnValue15 = CallFunc_Concat_StrStr_ReturnValue15;
	Parms.CallFunc_Concat_StrStr_ReturnValue16 = CallFunc_Concat_StrStr_ReturnValue16;
	Parms.CallFunc_GetDisplayName_ReturnValue2 = CallFunc_GetDisplayName_ReturnValue2;
	Parms.CallFunc_Concat_StrStr_ReturnValue17 = CallFunc_Concat_StrStr_ReturnValue17;
	Parms.CallFunc_Concat_StrStr_ReturnValue18 = CallFunc_Concat_StrStr_ReturnValue18;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue19 = CallFunc_Concat_StrStr_ReturnValue19;
	Parms.CallFunc_Concat_StrStr_ReturnValue20 = CallFunc_Concat_StrStr_ReturnValue20;
	Parms.CallFunc_Concat_StrStr_ReturnValue21 = CallFunc_Concat_StrStr_ReturnValue21;
	Parms.CallFunc_Concat_StrStr_ReturnValue22 = CallFunc_Concat_StrStr_ReturnValue22;
	Parms.CallFunc_Concat_StrStr_ReturnValue23 = CallFunc_Concat_StrStr_ReturnValue23;
	Parms.CallFunc_Concat_StrStr_ReturnValue24 = CallFunc_Concat_StrStr_ReturnValue24;
	Parms.CallFunc_Concat_StrStr_ReturnValue25 = CallFunc_Concat_StrStr_ReturnValue25;
	Parms.CallFunc_Concat_StrStr_ReturnValue26 = CallFunc_Concat_StrStr_ReturnValue26;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue1;
	Parms.CallFunc_Concat_StrStr_ReturnValue27 = CallFunc_Concat_StrStr_ReturnValue27;
	Parms.CallFunc_Concat_StrStr_ReturnValue28 = CallFunc_Concat_StrStr_ReturnValue28;
	Parms.CallFunc_Concat_StrStr_ReturnValue29 = CallFunc_Concat_StrStr_ReturnValue29;
	Parms.CallFunc_Concat_StrStr_ReturnValue30 = CallFunc_Concat_StrStr_ReturnValue30;
	Parms.K2Node_Event_DamageReceiver = K2Node_Event_DamageReceiver;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.K2Node_ComponentBoundEvent_TouchingActor = K2Node_ComponentBoundEvent_TouchingActor;
	Parms.K2Node_ComponentBoundEvent_bIsPlayer = K2Node_ComponentBoundEvent_bIsPlayer;
	Parms.K2Node_ComponentBoundEvent_ComponentTouched = K2Node_ComponentBoundEvent_ComponentTouched;
	Parms.K2Node_DynamicCast_AsOak_Character = K2Node_DynamicCast_AsOak_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Damaged = K2Node_CustomEvent_Damaged;
	Parms.K2Node_CustomEvent_Details1 = K2Node_CustomEvent_Details1;
	Parms.CallFunc_NewDialogContext_ReturnValue = CallFunc_NewDialogContext_ReturnValue;
	Parms.K2Node_CustomEvent_DamageInstigator = K2Node_CustomEvent_DamageInstigator;
	Parms.K2Node_CustomEvent_Damage = K2Node_CustomEvent_Damage;
	Parms.K2Node_CustomEvent_DamageType = K2Node_CustomEvent_DamageType;
	Parms.K2Node_CustomEvent_DamageSource = K2Node_CustomEvent_DamageSource;
	Parms.K2Node_CustomEvent_DamagedActor = K2Node_CustomEvent_DamagedActor;
	Parms.K2Node_CustomEvent_Details = K2Node_CustomEvent_Details;
	Parms.CallFunc_FinishTriggerDialog_Conversation = CallFunc_FinishTriggerDialog_Conversation;
	Parms.CallFunc_FinishTriggerDialog_SequenceID = CallFunc_FinishTriggerDialog_SequenceID;
	Parms.CallFunc_FinishTriggerDialog_ReturnValue = CallFunc_FinishTriggerDialog_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPAnim_Wyvern_Pet = K2Node_DynamicCast_AsBPAnim_Wyvern_Pet;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_SetAnimFlyRates_Res = CallFunc_SetAnimFlyRates_Res;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_SetAnimFlyRates_Res1 = CallFunc_SetAnimFlyRates_Res1;
	Parms.K2Node_ComponentBoundEvent_UseEvent = K2Node_ComponentBoundEvent_UseEvent;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsOak_Game_Instance = K2Node_DynamicCast_AsOak_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetDroneOwner_DroneOwner2 = CallFunc_GetDroneOwner_DroneOwner2;
	Parms.K2Node_Event_TrackStatus = K2Node_Event_TrackStatus;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.Temp_bool_Has_Been_Initd_Variable1 = Temp_bool_Has_Been_Initd_Variable1;
	Parms.CallFunc_GetOwner_ReturnValue3 = CallFunc_GetOwner_ReturnValue3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue2 = CallFunc_K2_SetTimerDelegate_ReturnValue2;
	Parms.CallFunc_GetOwner_ReturnValue4 = CallFunc_GetOwner_ReturnValue4;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsPerformingAnyAttack_Res1 = CallFunc_IsPerformingAnyAttack_Res1;
	Parms.CallFunc_Not_PreBool_ReturnValue8 = CallFunc_Not_PreBool_ReturnValue8;
	Parms.K2Node_CustomEvent_Element = K2Node_CustomEvent_Element;
	Parms.K2Node_CustomEvent_Target = K2Node_CustomEvent_Target;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_PostAttachedEvent_ReturnValue = CallFunc_PostAttachedEvent_ReturnValue;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;
	Parms.CallFunc_IsAudioPlaying_ReturnValue = CallFunc_IsAudioPlaying_ReturnValue;
	Parms.CallFunc_PostWwiseEvent_ReturnValue = CallFunc_PostWwiseEvent_ReturnValue;
	Parms.CallFunc_PostWwiseEvent_ReturnValue1 = CallFunc_PostWwiseEvent_ReturnValue1;
	Parms.Temp_bool_Has_Been_Initd_Variable2 = Temp_bool_Has_Been_Initd_Variable2;
	Parms.Temp_bool_IsClosed_Variable1 = Temp_bool_IsClosed_Variable1;
	Parms.Temp_bool_IsClosed_Variable2 = Temp_bool_IsClosed_Variable2;
	Parms.CallFunc_NewDialogContext_ReturnValue1 = CallFunc_NewDialogContext_ReturnValue1;
	Parms.CallFunc_GetOwner_ReturnValue5 = CallFunc_GetOwner_ReturnValue5;
	Parms.CallFunc_FinishTriggerDialog_Conversation1 = CallFunc_FinishTriggerDialog_Conversation1;
	Parms.CallFunc_FinishTriggerDialog_SequenceID1 = CallFunc_FinishTriggerDialog_SequenceID1;
	Parms.CallFunc_FinishTriggerDialog_ReturnValue1 = CallFunc_FinishTriggerDialog_ReturnValue1;
	Parms.CallFunc_GetOwner_ReturnValue6 = CallFunc_GetOwner_ReturnValue6;
	Parms.CallFunc_GetClassElementalType_ReturnValue = CallFunc_GetClassElementalType_ReturnValue;
	Parms.Temp_object_Variable5 = Temp_object_Variable5;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_PostWwiseEvent_ReturnValue2 = CallFunc_PostWwiseEvent_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}


