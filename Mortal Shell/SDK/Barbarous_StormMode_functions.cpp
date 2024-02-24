#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Barbarous_StormMode.Barbarous_StormMode_C
// (Actor, Pawn)

class UClass* ABarbarous_StormMode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Barbarous_StormMode_C");

	return Clss;
}


// Barbarous_StormMode_C Barbarous_StormMode.Default__Barbarous_StormMode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABarbarous_StormMode_C* ABarbarous_StormMode_C::GetDefaultObj()
{
	static class ABarbarous_StormMode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABarbarous_StormMode_C*>(ABarbarous_StormMode_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Barbarous_StormMode.Barbarous_StormMode_C.GetRiposteCathDropItemChance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Chance                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::GetRiposteCathDropItemChance(float* Chance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "GetRiposteCathDropItemChance");

	Params::ABarbarous_StormMode_C_GetRiposteCathDropItemChance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Chance != nullptr)
		*Chance = Parms.Chance;

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.GetBurningMaceDamageBonus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Bonus                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::GetBurningMaceDamageBonus(float* Bonus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "GetBurningMaceDamageBonus");

	Params::ABarbarous_StormMode_C_GetBurningMaceDamageBonus_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Bonus != nullptr)
		*Bonus = Parms.Bonus;

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.GetBoltDropChance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Chance                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::GetBoltDropChance(float* Chance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "GetBoltDropChance");

	Params::ABarbarous_StormMode_C_GetBoltDropChance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Chance != nullptr)
		*Chance = Parms.Chance;

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.GetUnlockedRipostes
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class ERiposteTypes>   Ripostes                                                         (Parm, OutParm, HasGetValueTypeHash)

void ABarbarous_StormMode_C::GetUnlockedRipostes(TArray<enum class ERiposteTypes>* Ripostes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "GetUnlockedRipostes");

	Params::ABarbarous_StormMode_C_GetUnlockedRipostes_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Ripostes != nullptr)
		*Ripostes = std::move(Parms.Ripostes);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.StormMode_IsCrawling
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Crawling                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_StormMode_C::StormMode_IsCrawling(bool* Crawling, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "StormMode_IsCrawling");

	Params::ABarbarous_StormMode_C_StormMode_IsCrawling_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Crawling != nullptr)
		*Crawling = Parms.Crawling;

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.HasCharacterFullySpawned
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABarbarous_StormMode_C::HasCharacterFullySpawned()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "HasCharacterFullySpawned");

	Params::ABarbarous_StormMode_C_HasCharacterFullySpawned_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.KickRune_3
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PoiseReduction                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::KickRune_3(float* PoiseReduction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "KickRune_3");

	Params::ABarbarous_StormMode_C_KickRune_3_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PoiseReduction != nullptr)
		*PoiseReduction = Parms.PoiseReduction;

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.KickRune_2
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::KickRune_2(float* Damage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "KickRune_2");

	Params::ABarbarous_StormMode_C_KickRune_2_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Damage != nullptr)
		*Damage = Parms.Damage;

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.KickRune_1
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      KickedActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AEnemyCharacter_C*           Local_Enemy                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RandomBoolWithWeight_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_StormMode_C::KickRune_1(class AActor* KickedActor, bool* Success_, class AEnemyCharacter_C* Local_Enemy, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_RandomBoolWithWeight_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "KickRune_1");

	Params::ABarbarous_StormMode_C_KickRune_1_Params Parms{};

	Parms.KickedActor = KickedActor;
	Parms.Local_Enemy = Local_Enemy;
	Parms.K2Node_DynamicCast_AsEnemy_Character = K2Node_DynamicCast_AsEnemy_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_RandomBoolWithWeight_ReturnValue = CallFunc_RandomBoolWithWeight_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

	if (Success_ != nullptr)
		*Success_ = Parms.Success_;

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.HandleKickRunes
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        KickRune                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::HandleKickRunes(class FName* KickRune)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "HandleKickRunes");

	Params::ABarbarous_StormMode_C_HandleKickRunes_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (KickRune != nullptr)
		*KickRune = Parms.KickRune;

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.UpdateCurrentHP_Lute
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_StormModeProgress  CallFunc_GetStormModeProgress_Progress                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_StormMode_C::UpdateCurrentHP_Lute(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, float CallFunc_Conv_IntToFloat_ReturnValue, enum class Enum_StormModeProgress CallFunc_GetStormModeProgress_Progress, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "UpdateCurrentHP_Lute");

	Params::ABarbarous_StormMode_C_UpdateCurrentHP_Lute_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetStormModeProgress_Progress = CallFunc_GetStormModeProgress_Progress;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.SwitchWeaponUtil
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              WeaponID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_StormMode_C::SwitchWeaponUtil(int32 WeaponID, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_2, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "SwitchWeaponUtil");

	Params::ABarbarous_StormMode_C_SwitchWeaponUtil_Params Parms{};

	Parms.WeaponID = WeaponID;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_1 = K2Node_DynamicCast_AsGame_Play_PCInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_2 = K2Node_DynamicCast_AsGame_Play_PCInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.RekindledMace_StopFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_StormMode_C::RekindledMace_StopFX(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "RekindledMace_StopFX");

	Params::ABarbarous_StormMode_C_RekindledMace_StopFX_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.InitializeLuteAbility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Rune                Local_Rune                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class URune_LuteAbility_C*         CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::InitializeLuteAbility(const struct FStruct_Rune& Local_Rune, bool CallFunc_IsValid_ReturnValue, class URune_LuteAbility_C* CallFunc_SpawnObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "InitializeLuteAbility");

	Params::ABarbarous_StormMode_C_InitializeLuteAbility_Params Parms{};

	Parms.Local_Rune = Local_Rune;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.AddSpecialWeaponStatusIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddStatusIcon_IconID                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::AddSpecialWeaponStatusIcon(float Duration, class UTexture2D* Icon, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, int32 CallFunc_AddStatusIcon_IconID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "AddSpecialWeaponStatusIcon");

	Params::ABarbarous_StormMode_C_AddSpecialWeaponStatusIcon_Params Parms{};

	Parms.Duration = Duration;
	Parms.Icon = Icon;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.CallFunc_AddStatusIcon_IconID = CallFunc_AddStatusIcon_IconID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.TestGrenadeProjectiles_Blood
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              X                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RotateAngleAxis_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Fire_Grenade_Projectile_Blood_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::TestGrenadeProjectiles_Blood(int32 X, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Fire_Grenade_Projectile_Blood_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_FClamp_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "TestGrenadeProjectiles_Blood");

	Params::ABarbarous_StormMode_C_TestGrenadeProjectiles_Blood_Params Parms{};

	Parms.X = X;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_RotateAngleAxis_ReturnValue = CallFunc_RotateAngleAxis_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue_1 = CallFunc_GetActorForwardVector_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.TestGrenadeProjectiles
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              X                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RotateAngleAxis_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Fire_Grenade_Projectile_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::TestGrenadeProjectiles(int32 X, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Fire_Grenade_Projectile_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_FClamp_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "TestGrenadeProjectiles");

	Params::ABarbarous_StormMode_C_TestGrenadeProjectiles_Params Parms{};

	Parms.X = X;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_RotateAngleAxis_ReturnValue = CallFunc_RotateAngleAxis_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue_1 = CallFunc_GetActorForwardVector_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.UpdateRootMotionScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::UpdateRootMotionScale(float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "UpdateRootMotionScale");

	Params::ABarbarous_StormMode_C_UpdateRootMotionScale_Params Parms{};

	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.SetLastChanceAvailable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bAvailable                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_StormMode_C::SetLastChanceAvailable(bool bAvailable, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "SetLastChanceAvailable");

	Params::ABarbarous_StormMode_C_SetLastChanceAvailable_Params Parms{};

	Parms.bAvailable = bAvailable;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.AddBoneShards
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bForceAmount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bStormSpent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Abs_Int_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_StormMode_C::AddBoneShards(int32 Amount, bool bForceAmount, bool bStormSpent, int32 CallFunc_Abs_Int_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_GetNamedPCInt_Value, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "AddBoneShards");

	Params::ABarbarous_StormMode_C_AddBoneShards_Params Parms{};

	Parms.Amount = Amount;
	Parms.bForceAmount = bForceAmount;
	Parms.bStormSpent = bStormSpent;
	Parms.CallFunc_Abs_Int_ReturnValue = CallFunc_Abs_Int_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.RiposteParams_Cathedral
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              BlastRange                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              BlastRangeBonus                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ConeAngle                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ConeAngleBonus                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DamageMultiplierBonus                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TimeFreezeDurationBonus                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              IceAfterSlowDownTime                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RemoveFromTimelineChance                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OnDeathWhileSlowExplosionDMG                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::RiposteParams_Cathedral(float* BlastRange, float* BlastRangeBonus, float* ConeAngle, float* ConeAngleBonus, float* DamageMultiplierBonus, float* TimeFreezeDurationBonus, float* IceAfterSlowDownTime, float* RemoveFromTimelineChance, float* OnDeathWhileSlowExplosionDMG, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "RiposteParams_Cathedral");

	Params::ABarbarous_StormMode_C_RiposteParams_Cathedral_Params Parms{};

	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (BlastRange != nullptr)
		*BlastRange = Parms.BlastRange;

	if (BlastRangeBonus != nullptr)
		*BlastRangeBonus = Parms.BlastRangeBonus;

	if (ConeAngle != nullptr)
		*ConeAngle = Parms.ConeAngle;

	if (ConeAngleBonus != nullptr)
		*ConeAngleBonus = Parms.ConeAngleBonus;

	if (DamageMultiplierBonus != nullptr)
		*DamageMultiplierBonus = Parms.DamageMultiplierBonus;

	if (TimeFreezeDurationBonus != nullptr)
		*TimeFreezeDurationBonus = Parms.TimeFreezeDurationBonus;

	if (IceAfterSlowDownTime != nullptr)
		*IceAfterSlowDownTime = Parms.IceAfterSlowDownTime;

	if (RemoveFromTimelineChance != nullptr)
		*RemoveFromTimelineChance = Parms.RemoveFromTimelineChance;

	if (OnDeathWhileSlowExplosionDMG != nullptr)
		*OnDeathWhileSlowExplosionDMG = Parms.OnDeathWhileSlowExplosionDMG;

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.RiposteParams_FireGrenade
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              RadiusMultiplier                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DamageBonus                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              SpawnNewChance                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SpawnNewNum                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              SetOnFireChance                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::RiposteParams_FireGrenade(float* RadiusMultiplier, float* DamageBonus, float* SpawnNewChance, int32* SpawnNewNum, float* SetOnFireChance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "RiposteParams_FireGrenade");

	Params::ABarbarous_StormMode_C_RiposteParams_FireGrenade_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (RadiusMultiplier != nullptr)
		*RadiusMultiplier = Parms.RadiusMultiplier;

	if (DamageBonus != nullptr)
		*DamageBonus = Parms.DamageBonus;

	if (SpawnNewChance != nullptr)
		*SpawnNewChance = Parms.SpawnNewChance;

	if (SpawnNewNum != nullptr)
		*SpawnNewNum = Parms.SpawnNewNum;

	if (SetOnFireChance != nullptr)
		*SetOnFireChance = Parms.SetOnFireChance;

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.RiposteParams_CryptCombo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ComboDamageBonus                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ComboDamageMult                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              GhostDamageBonus                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              GhostDamageMult                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              GhostFreezeChance                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              GhostPoisonDuration                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              GhostPoisonDamageDPS                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              GhostEnemyDmgReduction                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::RiposteParams_CryptCombo(float* ComboDamageBonus, float* ComboDamageMult, float* GhostDamageBonus, float* GhostDamageMult, float* GhostFreezeChance, float* GhostPoisonDuration, float* GhostPoisonDamageDPS, float* GhostEnemyDmgReduction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "RiposteParams_CryptCombo");

	Params::ABarbarous_StormMode_C_RiposteParams_CryptCombo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ComboDamageBonus != nullptr)
		*ComboDamageBonus = Parms.ComboDamageBonus;

	if (ComboDamageMult != nullptr)
		*ComboDamageMult = Parms.ComboDamageMult;

	if (GhostDamageBonus != nullptr)
		*GhostDamageBonus = Parms.GhostDamageBonus;

	if (GhostDamageMult != nullptr)
		*GhostDamageMult = Parms.GhostDamageMult;

	if (GhostFreezeChance != nullptr)
		*GhostFreezeChance = Parms.GhostFreezeChance;

	if (GhostPoisonDuration != nullptr)
		*GhostPoisonDuration = Parms.GhostPoisonDuration;

	if (GhostPoisonDamageDPS != nullptr)
		*GhostPoisonDamageDPS = Parms.GhostPoisonDamageDPS;

	if (GhostEnemyDmgReduction != nullptr)
		*GhostEnemyDmgReduction = Parms.GhostEnemyDmgReduction;

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.InflamedSword_StopFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_StormMode_C::InflamedSword_StopFX(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "InflamedSword_StopFX");

	Params::ABarbarous_StormMode_C_InflamedSword_StopFX_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.GlacialBlade_StopFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_StormMode_C::GlacialBlade_StopFX(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "GlacialBlade_StopFX");

	Params::ABarbarous_StormMode_C_GlacialBlade_StopFX_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.HandleDarkFormObsidian
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Rune                Local_Rune                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           CallFunc_StormMode_GetCurrentShadeForCharacter_Shade             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormMode_GetSelectedShell_HasSelected                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             CallFunc_StormMode_GetSelectedShell_Shell                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class URune_LoseHealthOverTime_C*  CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::HandleDarkFormObsidian(const struct FStruct_Rune& Local_Rune, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, enum class Enum_ShellDye CallFunc_StormMode_GetCurrentShadeForCharacter_Shade, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_StormMode_GetSelectedShell_HasSelected, enum class EArmorTypes CallFunc_StormMode_GetSelectedShell_Shell, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class URune_LoseHealthOverTime_C* CallFunc_SpawnObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "HandleDarkFormObsidian");

	Params::ABarbarous_StormMode_C_HandleDarkFormObsidian_Params Parms{};

	Parms.Local_Rune = Local_Rune;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_StormMode_GetCurrentShadeForCharacter_Shade = CallFunc_StormMode_GetCurrentShadeForCharacter_Shade;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_StormMode_GetSelectedShell_HasSelected = CallFunc_StormMode_GetSelectedShell_HasSelected;
	Parms.CallFunc_StormMode_GetSelectedShell_Shell = CallFunc_StormMode_GetSelectedShell_Shell;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.CheckForEnhancedParry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               EmpoweredRiposte_                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RandomBoolWithWeight_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_StormMode_C::CheckForEnhancedParry(bool* EmpoweredRiposte_, bool CallFunc_RandomBoolWithWeight_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "CheckForEnhancedParry");

	Params::ABarbarous_StormMode_C_CheckForEnhancedParry_Params Parms{};

	Parms.CallFunc_RandomBoolWithWeight_ReturnValue = CallFunc_RandomBoolWithWeight_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EmpoweredRiposte_ != nullptr)
		*EmpoweredRiposte_ = Parms.EmpoweredRiposte_;

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.UpdateCurrentHP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormMode_GetGiveFullHealth_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::UpdateCurrentHP(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_StormMode_GetGiveFullHealth_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "UpdateCurrentHP");

	Params::ABarbarous_StormMode_C_UpdateCurrentHP_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_StormMode_GetGiveFullHealth_ReturnValue = CallFunc_StormMode_GetGiveFullHealth_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.RiposteParams_Heal
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Heal                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Heal_Bonus                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AOEDamage                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AOEPoiseDamage                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RiposteParams_Heal_Heal                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RiposteParams_Heal_Damage                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RiposteParams_Heal_Heal_Bonus                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RiposteParams_Heal_AOEDamage                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RiposteParams_Heal_AOEPoiseDamage                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::RiposteParams_Heal(float* Heal, float* Damage, float* Heal_Bonus, float* AOEDamage, float* AOEPoiseDamage, float CallFunc_RiposteParams_Heal_Heal, float CallFunc_RiposteParams_Heal_Damage, float CallFunc_RiposteParams_Heal_Heal_Bonus, float CallFunc_RiposteParams_Heal_AOEDamage, float CallFunc_RiposteParams_Heal_AOEPoiseDamage, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "RiposteParams_Heal");

	Params::ABarbarous_StormMode_C_RiposteParams_Heal_Params Parms{};

	Parms.CallFunc_RiposteParams_Heal_Heal = CallFunc_RiposteParams_Heal_Heal;
	Parms.CallFunc_RiposteParams_Heal_Damage = CallFunc_RiposteParams_Heal_Damage;
	Parms.CallFunc_RiposteParams_Heal_Heal_Bonus = CallFunc_RiposteParams_Heal_Heal_Bonus;
	Parms.CallFunc_RiposteParams_Heal_AOEDamage = CallFunc_RiposteParams_Heal_AOEDamage;
	Parms.CallFunc_RiposteParams_Heal_AOEPoiseDamage = CallFunc_RiposteParams_Heal_AOEPoiseDamage;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Heal != nullptr)
		*Heal = Parms.Heal;

	if (Damage != nullptr)
		*Damage = Parms.Damage;

	if (Heal_Bonus != nullptr)
		*Heal_Bonus = Parms.Heal_Bonus;

	if (AOEDamage != nullptr)
		*AOEDamage = Parms.AOEDamage;

	if (AOEPoiseDamage != nullptr)
		*AOEPoiseDamage = Parms.AOEPoiseDamage;

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.CheckForUnbreakableStoneForm
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DoNotBreak                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_StormMode_C::CheckForUnbreakableStoneForm(bool* DoNotBreak, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "CheckForUnbreakableStoneForm");

	Params::ABarbarous_StormMode_C_CheckForUnbreakableStoneForm_Params Parms{};

	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (DoNotBreak != nullptr)
		*DoNotBreak = Parms.DoNotBreak;

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.ShouldBlockResolveGain?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Block_                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsInBossFight_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_ShellDye           CallFunc_StormMode_GetCurrentShadeForCharacter_Shade             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_StormMode_C::ShouldBlockResolveGain_(bool* Block_, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_GetIsInBossFight_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_ShellDye CallFunc_StormMode_GetCurrentShadeForCharacter_Shade, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "ShouldBlockResolveGain?");

	Params::ABarbarous_StormMode_C_ShouldBlockResolveGain__Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetIsInBossFight_ReturnValue = CallFunc_GetIsInBossFight_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_StormMode_GetCurrentShadeForCharacter_Shade = CallFunc_StormMode_GetCurrentShadeForCharacter_Shade;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Block_ != nullptr)
		*Block_ = Parms.Block_;

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.ProcessDamageWeakness
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      DmgType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DamageIn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DamageOut                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_Damage                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Local_DmgType                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_ShellDye           CallFunc_StormMode_GetCurrentShadeForCharacter_Shade             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_ShellDye           CallFunc_StormMode_GetCurrentShadeForCharacter_Shade_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_StormMode_C::ProcessDamageWeakness(class UClass* DmgType, float DamageIn, float* DamageOut, float Local_Damage, class UClass* Local_DmgType, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, enum class Enum_ShellDye CallFunc_StormMode_GetCurrentShadeForCharacter_Shade, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanOR_ReturnValue_1, enum class Enum_ShellDye CallFunc_StormMode_GetCurrentShadeForCharacter_Shade_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "ProcessDamageWeakness");

	Params::ABarbarous_StormMode_C_ProcessDamageWeakness_Params Parms{};

	Parms.DmgType = DmgType;
	Parms.DamageIn = DamageIn;
	Parms.Local_Damage = Local_Damage;
	Parms.Local_DmgType = Local_DmgType;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_StormMode_GetCurrentShadeForCharacter_Shade = CallFunc_StormMode_GetCurrentShadeForCharacter_Shade;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_2 = CallFunc_EqualEqual_ClassClass_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_StormMode_GetCurrentShadeForCharacter_Shade_1 = CallFunc_StormMode_GetCurrentShadeForCharacter_Shade_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (DamageOut != nullptr)
		*DamageOut = Parms.DamageOut;

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.CryptSword_SpawnFrostSpike
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ForwardVector                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Distance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_Distance                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_ForwardVector                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetActorRightVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Frost_Spike_Player_C*    CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::CryptSword_SpawnFrostSpike(bool ForwardVector, float Distance, float Local_Distance, bool Local_ForwardVector, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool Temp_bool_Variable, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& K2Node_Select_Default, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Frost_Spike_Player_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "CryptSword_SpawnFrostSpike");

	Params::ABarbarous_StormMode_C_CryptSword_SpawnFrostSpike_Params Parms{};

	Parms.ForwardVector = ForwardVector;
	Parms.Distance = Distance;
	Parms.Local_Distance = Local_Distance;
	Parms.Local_ForwardVector = Local_ForwardVector;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetActorRightVector_ReturnValue = CallFunc_GetActorRightVector_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.CryptSword_UpdateBuffDurability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_RandomBoolWithWeight_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CryptSword_BuffAtMaxDurability__ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::CryptSword_UpdateBuffDurability(bool CallFunc_RandomBoolWithWeight_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_CryptSword_BuffAtMaxDurability__ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "CryptSword_UpdateBuffDurability");

	Params::ABarbarous_StormMode_C_CryptSword_UpdateBuffDurability_Params Parms{};

	Parms.CallFunc_RandomBoolWithWeight_ReturnValue = CallFunc_RandomBoolWithWeight_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_CryptSword_BuffAtMaxDurability__ReturnValue = CallFunc_CryptSword_BuffAtMaxDurability__ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.CryptSword_BuffLogic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FHitResult>          CallFunc_SphereTraceMultiForObjects_OutHits                      (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SphereTraceMultiForObjects_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_StormMode_C::CryptSword_BuffLogic(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& Temp_object_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, TArray<struct FHitResult>& CallFunc_SphereTraceMultiForObjects_OutHits, bool CallFunc_SphereTraceMultiForObjects_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "CryptSword_BuffLogic");

	Params::ABarbarous_StormMode_C_CryptSword_BuffLogic_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_SphereTraceMultiForObjects_OutHits = CallFunc_SphereTraceMultiForObjects_OutHits;
	Parms.CallFunc_SphereTraceMultiForObjects_ReturnValue = CallFunc_SphereTraceMultiForObjects_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.K2Node_DynamicCast_AsBase_Character = K2Node_DynamicCast_AsBase_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.IsCryptSwordMontage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TArray<class UAnimMontage*>        Local_Attacks                                                    (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class UAnimMontage*>        K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// float                              CallFunc_GetActiveMontage_OutPosition                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetActiveMontage_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABarbarous_StormMode_C::IsCryptSwordMontage(const TArray<class UAnimMontage*>& Local_Attacks, TArray<class UAnimMontage*>& K2Node_MakeArray_Array, float CallFunc_GetActiveMontage_OutPosition, class UAnimMontage* CallFunc_GetActiveMontage_ReturnValue, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "IsCryptSwordMontage");

	Params::ABarbarous_StormMode_C_IsCryptSwordMontage_Params Parms{};

	Parms.Local_Attacks = Local_Attacks;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetActiveMontage_OutPosition = CallFunc_GetActiveMontage_OutPosition;
	Parms.CallFunc_GetActiveMontage_ReturnValue = CallFunc_GetActiveMontage_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.SpawnNailProjectile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Local_SpawnLoc                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetNailProjectileRot_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             CallFunc_GetNailProjectileRot_HomingTarget                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetNailProjectiletLoc_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANailProjectile_Box_C*       CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::SpawnNailProjectile(const struct FVector& Local_SpawnLoc, const struct FRotator& CallFunc_GetNailProjectileRot_ReturnValue, class USceneComponent* CallFunc_GetNailProjectileRot_HomingTarget, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetNailProjectiletLoc_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ANailProjectile_Box_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "SpawnNailProjectile");

	Params::ABarbarous_StormMode_C_SpawnNailProjectile_Params Parms{};

	Parms.Local_SpawnLoc = Local_SpawnLoc;
	Parms.CallFunc_GetNailProjectileRot_ReturnValue = CallFunc_GetNailProjectileRot_ReturnValue;
	Parms.CallFunc_GetNailProjectileRot_HomingTarget = CallFunc_GetNailProjectileRot_HomingTarget;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetNailProjectiletLoc_ReturnValue = CallFunc_GetNailProjectiletLoc_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.SpikesRadialDamage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Local_HitfromDirection                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Local_HitActor                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Local_Hit                                                        (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_ApplyPointDamage_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FHitResult>          CallFunc_SphereTraceMultiForObjects_OutHits                      (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SphereTraceMultiForObjects_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_StormMode_C::SpikesRadialDamage(const struct FVector& Local_HitfromDirection, class AActor* Local_HitActor, const struct FHitResult& Local_Hit, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_ApplyPointDamage_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<struct FHitResult>& CallFunc_SphereTraceMultiForObjects_OutHits, bool CallFunc_SphereTraceMultiForObjects_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "SpikesRadialDamage");

	Params::ABarbarous_StormMode_C_SpikesRadialDamage_Params Parms{};

	Parms.Local_HitfromDirection = Local_HitfromDirection;
	Parms.Local_HitActor = Local_HitActor;
	Parms.Local_Hit = Local_Hit;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Character = K2Node_DynamicCast_AsBase_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_ApplyPointDamage_ReturnValue = CallFunc_ApplyPointDamage_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_SphereTraceMultiForObjects_OutHits = CallFunc_SphereTraceMultiForObjects_OutHits;
	Parms.CallFunc_SphereTraceMultiForObjects_ReturnValue = CallFunc_SphereTraceMultiForObjects_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.StormMode_LoadRipostes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PlaySound                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_PlaySound                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ERiposteTypes           Local_Riposte                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERiposteTypes           CallFunc_GetCurrentlyEquippedSecondaryRiposte_Output             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetRiposteUpgradeIDs_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUpgradeUnlocked_bUnlocked                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_StormMode_C::StormMode_LoadRipostes(bool PlaySound, bool Local_PlaySound, enum class ERiposteTypes Local_Riposte, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, enum class ERiposteTypes CallFunc_GetCurrentlyEquippedSecondaryRiposte_Output, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FName CallFunc_GetRiposteUpgradeIDs_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsUpgradeUnlocked_bUnlocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "StormMode_LoadRipostes");

	Params::ABarbarous_StormMode_C_StormMode_LoadRipostes_Params Parms{};

	Parms.PlaySound = PlaySound;
	Parms.Local_PlaySound = Local_PlaySound;
	Parms.Local_Riposte = Local_Riposte;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_GetCurrentlyEquippedSecondaryRiposte_Output = CallFunc_GetCurrentlyEquippedSecondaryRiposte_Output;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetRiposteUpgradeIDs_ReturnValue = CallFunc_GetRiposteUpgradeIDs_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_IsUpgradeUnlocked_bUnlocked = CallFunc_IsUpgradeUnlocked_bUnlocked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.LoadRipostes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::LoadRipostes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "LoadRipostes");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.Effigy Set Health and Resolve
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::Effigy_Set_Health_and_Resolve()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "Effigy Set Health and Resolve");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.Effigy_MontageCondidition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Effigy_MontageCondidition_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormMode_GetHasJustStartedRun__Return                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABarbarous_StormMode_C::Effigy_MontageCondidition(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Effigy_MontageCondidition_ReturnValue, bool CallFunc_StormMode_GetHasJustStartedRun__Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "Effigy_MontageCondidition");

	Params::ABarbarous_StormMode_C_Effigy_MontageCondidition_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Effigy_MontageCondidition_ReturnValue = CallFunc_Effigy_MontageCondidition_ReturnValue;
	Parms.CallFunc_StormMode_GetHasJustStartedRun__Return = CallFunc_StormMode_GetHasJustStartedRun__Return;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.RuneHealEffectVFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_HealEffectChaser_C*      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::RuneHealEffectVFX(const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_HealEffectChaser_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "RuneHealEffectVFX");

	Params::ABarbarous_StormMode_C_RuneHealEffectVFX_Params Parms{};

	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.HallowedSwordSuper_ApplyLifeSteal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           Enemy                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           Local_Enemy                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_Damage                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_ShellDye           CallFunc_StormMode_GetCurrentShadeForCharacter_Shade             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormMode_GetSelectedShell_HasSelected                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             CallFunc_StormMode_GetSelectedShell_Shell                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_HealEffectChaser_C*      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::HallowedSwordSuper_ApplyLifeSteal(float Damage, class AEnemyCharacter_C* Enemy, class AEnemyCharacter_C* Local_Enemy, float Local_Damage, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, enum class Enum_ShellDye CallFunc_StormMode_GetCurrentShadeForCharacter_Shade, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_StormMode_GetSelectedShell_HasSelected, enum class EArmorTypes CallFunc_StormMode_GetSelectedShell_Shell, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, class FName Temp_name_Variable, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_HealEffectChaser_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "HallowedSwordSuper_ApplyLifeSteal");

	Params::ABarbarous_StormMode_C_HallowedSwordSuper_ApplyLifeSteal_Params Parms{};

	Parms.Damage = Damage;
	Parms.Enemy = Enemy;
	Parms.Local_Enemy = Local_Enemy;
	Parms.Local_Damage = Local_Damage;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_StormMode_GetCurrentShadeForCharacter_Shade = CallFunc_StormMode_GetCurrentShadeForCharacter_Shade;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_StormMode_GetSelectedShell_HasSelected = CallFunc_StormMode_GetSelectedShell_HasSelected;
	Parms.CallFunc_StormMode_GetSelectedShell_Shell = CallFunc_StormMode_GetSelectedShell_Shell;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.StormMode_AddInitialResolve
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPermanentUpgradeRankLevel_Level                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_StormMode_C::StormMode_AddInitialResolve(class FName CallFunc_MakeLiteralName_ReturnValue, int32 CallFunc_GetPermanentUpgradeRankLevel_Level, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "StormMode_AddInitialResolve");

	Params::ABarbarous_StormMode_C_StormMode_AddInitialResolve_Params Parms{};

	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetPermanentUpgradeRankLevel_Level = CallFunc_GetPermanentUpgradeRankLevel_Level;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.SetHealth_StormMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               GiveFullHealth_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              PlayerHealth                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::SetHealth_StormMode(bool GiveFullHealth_, float PlayerHealth, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "SetHealth_StormMode");

	Params::ABarbarous_StormMode_C_SetHealth_StormMode_Params Parms{};

	Parms.GiveFullHealth_ = GiveFullHealth_;
	Parms.PlayerHealth = PlayerHealth;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.NoShellLostOnLastChance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RandomBoolWithWeight_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABarbarous_StormMode_C::NoShellLostOnLastChance(bool CallFunc_RandomBoolWithWeight_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "NoShellLostOnLastChance");

	Params::ABarbarous_StormMode_C_NoShellLostOnLastChance_Params Parms{};

	Parms.CallFunc_RandomBoolWithWeight_ReturnValue = CallFunc_RandomBoolWithWeight_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.StoneStun_Debug
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::StoneStun_Debug(const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "StoneStun_Debug");

	Params::ABarbarous_StormMode_C_StoneStun_Debug_Params Parms{};

	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.StoneStun_StormMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyDamage_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomBoolWithWeight_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FHitResult>          CallFunc_SphereTraceMultiForObjects_OutHits                      (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SphereTraceMultiForObjects_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_Array_Get_Item_1                                        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::StoneStun_StormMode(float Duration, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class AEnemyCharacter_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, float CallFunc_ApplyDamage_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, float CallFunc_Multiply_FloatFloat_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TArray<struct FHitResult>& CallFunc_SphereTraceMultiForObjects_OutHits, bool CallFunc_SphereTraceMultiForObjects_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FHitResult& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "StoneStun_StormMode");

	Params::ABarbarous_StormMode_C_StoneStun_StormMode_Params Parms{};

	Parms.Duration = Duration;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_ApplyDamage_ReturnValue = CallFunc_ApplyDamage_ReturnValue;
	Parms.CallFunc_RandomBoolWithWeight_ReturnValue = CallFunc_RandomBoolWithWeight_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.K2Node_DynamicCast_AsEnemy_Character = K2Node_DynamicCast_AsEnemy_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_SphereTraceMultiForObjects_OutHits = CallFunc_SphereTraceMultiForObjects_OutHits;
	Parms.CallFunc_SphereTraceMultiForObjects_ReturnValue = CallFunc_SphereTraceMultiForObjects_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.DH_FillSkillTree
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Local_Substring                                                  (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// enum class Enum_Rune_Category_RandomizerLocal_Category                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_ID                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Local_Table                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          Local_Tier                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSpecialRuneFromID_IsValid_                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetSpecialRuneFromID_Rune                               (HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_1                      (ReferenceParm, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDataTable*                  CallFunc_GetRunesFromTable_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_2                      (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Randomizer_FloatToInt_Result                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                K2Node_MakeStruct_Struct_Rune                                    (HasGetValueTypeHash)

void ABarbarous_StormMode_C::DH_FillSkillTree(const class FString& Local_Substring, enum class Enum_Rune_Category_Randomizer Local_Category, class FName Local_ID, class UDataTable* Local_Table, enum class Enum_Rune_Tier Local_Tier, bool Temp_bool_Variable, bool Temp_bool_Variable_1, int32 Temp_int_Variable, int32 Temp_int_Variable_1, enum class Enum_Rune_Tier Temp_byte_Variable, enum class Enum_Rune_Tier Temp_byte_Variable_1, enum class Enum_Rune_Tier Temp_byte_Variable_2, enum class Enum_Rune_Tier Temp_byte_Variable_3, enum class Enum_Rune_Tier Temp_byte_Variable_4, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Variable_2, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Conv_ByteToInt_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GetSpecialRuneFromID_IsValid_, const struct FStruct_Rune& CallFunc_GetSpecialRuneFromID_Rune, int32 Temp_int_Variable_4, int32 Temp_int_Loop_Counter_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, bool K2Node_SwitchEnum_CmpSuccess, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UDataTable* CallFunc_GetRunesFromTable_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_2, bool CallFunc_Contains_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class FName CallFunc_Array_Get_Item_2, const struct FStruct_Rune& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, TArray<float>& K2Node_MakeArray_Array, int32 CallFunc_Randomizer_FloatToInt_Result, float CallFunc_RandomFloatInRange_ReturnValue, float K2Node_Select_Default, enum class Enum_Rune_Tier K2Node_Select_Default_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, int32 K2Node_Select_Default_2, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_1, const struct FStruct_Rune& K2Node_MakeStruct_Struct_Rune)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "DH_FillSkillTree");

	Params::ABarbarous_StormMode_C_DH_FillSkillTree_Params Parms{};

	Parms.Local_Substring = Local_Substring;
	Parms.Local_Category = Local_Category;
	Parms.Local_ID = Local_ID;
	Parms.Local_Table = Local_Table;
	Parms.Local_Tier = Local_Tier;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetSpecialRuneFromID_IsValid_ = CallFunc_GetSpecialRuneFromID_IsValid_;
	Parms.CallFunc_GetSpecialRuneFromID_Rune = CallFunc_GetSpecialRuneFromID_Rune;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_1 = CallFunc_GetDataTableRowNames_OutRowNames_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetRunesFromTable_ReturnValue = CallFunc_GetRunesFromTable_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_2 = CallFunc_GetDataTableRowNames_OutRowNames_2;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_1 = CallFunc_RandomIntegerInRange_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Randomizer_FloatToInt_Result = CallFunc_Randomizer_FloatToInt_Result;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_2 = CallFunc_RandomIntegerInRange_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_MakeStruct_Struct_Rune = K2Node_MakeStruct_Struct_Rune;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.CheckForResolveBlessing
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldDie_                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RandomBoolWithWeight_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_StormMode_C::CheckForResolveBlessing(bool* ShouldDie_, bool CallFunc_RandomBoolWithWeight_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "CheckForResolveBlessing");

	Params::ABarbarous_StormMode_C_CheckForResolveBlessing_Params Parms{};

	Parms.CallFunc_RandomBoolWithWeight_ReturnValue = CallFunc_RandomBoolWithWeight_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldDie_ != nullptr)
		*ShouldDie_ = Parms.ShouldDie_;

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.ClearBoneShards
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::ClearBoneShards()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "ClearBoneShards");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.HandleRuneResistances
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DamageIn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      DamageClass                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DamageOut                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_FrozenDamageProcessed                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_FireDamageProcessed                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_FallDamageProcessed                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_PoisonDamageProcessed                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Local_DamageClass                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_DamageIn                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_1                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_2                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_3                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_4                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_5                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_6                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_7                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_8                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_11                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_12                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::HandleRuneResistances(float DamageIn, class UClass* DamageClass, float* DamageOut, float Local_FrozenDamageProcessed, float Local_FireDamageProcessed, float Local_FallDamageProcessed, float Local_PoisonDamageProcessed, class UClass* Local_DamageClass, float Local_DamageIn, float CallFunc_Multiply_FloatFloat_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_2, const class FString& CallFunc_Conv_FloatToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_4, const class FString& CallFunc_Conv_FloatToString_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, float CallFunc_Multiply_FloatFloat_ReturnValue_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue_4, const class FString& CallFunc_Conv_FloatToString_ReturnValue_6, const class FString& CallFunc_Conv_FloatToString_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Conv_FloatToString_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, bool CallFunc_EqualEqual_ClassClass_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "HandleRuneResistances");

	Params::ABarbarous_StormMode_C_HandleRuneResistances_Params Parms{};

	Parms.DamageIn = DamageIn;
	Parms.DamageClass = DamageClass;
	Parms.Local_FrozenDamageProcessed = Local_FrozenDamageProcessed;
	Parms.Local_FireDamageProcessed = Local_FireDamageProcessed;
	Parms.Local_FallDamageProcessed = Local_FallDamageProcessed;
	Parms.Local_PoisonDamageProcessed = Local_PoisonDamageProcessed;
	Parms.Local_DamageClass = Local_DamageClass;
	Parms.Local_DamageIn = Local_DamageIn;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_1 = CallFunc_Conv_FloatToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_2 = CallFunc_Conv_FloatToString_ReturnValue_2;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_3 = CallFunc_Conv_FloatToString_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_2 = CallFunc_EqualEqual_ClassClass_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_3 = CallFunc_EqualEqual_ClassClass_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_4 = CallFunc_Conv_FloatToString_ReturnValue_4;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_5 = CallFunc_Conv_FloatToString_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_4 = CallFunc_EqualEqual_ClassClass_ReturnValue_4;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_6 = CallFunc_Conv_FloatToString_ReturnValue_6;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_7 = CallFunc_Conv_FloatToString_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_8 = CallFunc_Conv_FloatToString_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;
	Parms.CallFunc_Concat_StrStr_ReturnValue_11 = CallFunc_Concat_StrStr_ReturnValue_11;
	Parms.CallFunc_Concat_StrStr_ReturnValue_12 = CallFunc_Concat_StrStr_ReturnValue_12;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_5 = CallFunc_EqualEqual_ClassClass_ReturnValue_5;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (DamageOut != nullptr)
		*DamageOut = Parms.DamageOut;

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.HandleUnparryableAttackResist
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DamageIn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DamageOut                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_DamageMultiplied                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_DamageResisted                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_Damage                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IEnemyCommonInterface_C>CallFunc_Enemy_IsInParryableState_self_CastInput                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Enemy_IsInParryableState_IsParryableState_              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_1                        (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_ShellDye           CallFunc_StormMode_GetCurrentShadeForCharacter_Shade             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormMode_GetSelectedShell_HasSelected                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             CallFunc_StormMode_GetSelectedShell_Shell                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_2                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_3                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::HandleUnparryableAttackResist(float DamageIn, float* DamageOut, float Local_DamageMultiplied, float Local_DamageResisted, float Local_Damage, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IEnemyCommonInterface_C> CallFunc_Enemy_IsInParryableState_self_CastInput, bool CallFunc_Enemy_IsInParryableState_IsParryableState_, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_ShellDye CallFunc_StormMode_GetCurrentShadeForCharacter_Shade, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_StormMode_GetSelectedShell_HasSelected, enum class EArmorTypes CallFunc_StormMode_GetSelectedShell_Shell, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, const class FString& CallFunc_Conv_FloatToString_ReturnValue_2, const class FString& CallFunc_Conv_FloatToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "HandleUnparryableAttackResist");

	Params::ABarbarous_StormMode_C_HandleUnparryableAttackResist_Params Parms{};

	Parms.DamageIn = DamageIn;
	Parms.Local_DamageMultiplied = Local_DamageMultiplied;
	Parms.Local_DamageResisted = Local_DamageResisted;
	Parms.Local_Damage = Local_Damage;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsEnemy_Character = K2Node_DynamicCast_AsEnemy_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Enemy_IsInParryableState_self_CastInput = CallFunc_Enemy_IsInParryableState_self_CastInput;
	Parms.CallFunc_Enemy_IsInParryableState_IsParryableState_ = CallFunc_Enemy_IsInParryableState_IsParryableState_;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_1 = CallFunc_Conv_FloatToString_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_StormMode_GetCurrentShadeForCharacter_Shade = CallFunc_StormMode_GetCurrentShadeForCharacter_Shade;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_StormMode_GetSelectedShell_HasSelected = CallFunc_StormMode_GetSelectedShell_HasSelected;
	Parms.CallFunc_StormMode_GetSelectedShell_Shell = CallFunc_StormMode_GetSelectedShell_Shell;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_2 = CallFunc_Conv_FloatToString_ReturnValue_2;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_3 = CallFunc_Conv_FloatToString_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (DamageOut != nullptr)
		*DamageOut = Parms.DamageOut;

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.DH_SMDebugWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_StormModeDebug_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInViewport_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_StormMode_C::DH_SMDebugWindow(class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUI_StormModeDebug_C* CallFunc_Create_ReturnValue, bool CallFunc_IsInViewport_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "DH_SMDebugWindow");

	Params::ABarbarous_StormMode_C_DH_SMDebugWindow_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsInViewport_ReturnValue = CallFunc_IsInViewport_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.SetUIRunesContainer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::SetUIRunesContainer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "SetUIRunesContainer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.AddResolve_StormMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Resolve                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldBlockResolveGain__Block_                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::AddResolve_StormMode(float Resolve, bool CallFunc_ShouldBlockResolveGain__Block_, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "AddResolve_StormMode");

	Params::ABarbarous_StormMode_C_AddResolve_StormMode_Params Parms{};

	Parms.Resolve = Resolve;
	Parms.CallFunc_ShouldBlockResolveGain__Block_ = CallFunc_ShouldBlockResolveGain__Block_;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.UpdateMaxStamina
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AddLuteAbility                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_HandleLuteAbility_HP_Bonus                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_HandleLuteAbility_Stamina_Bonus                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_HandleLuteAbility_Resolve_Bonus                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::UpdateMaxStamina(bool AddLuteAbility, bool Temp_bool_Variable, float Temp_float_Variable, enum class EArmorTypes Temp_byte_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, float Temp_float_Variable_5, int32 CallFunc_HandleLuteAbility_HP_Bonus, int32 CallFunc_HandleLuteAbility_Stamina_Bonus, int32 CallFunc_HandleLuteAbility_Resolve_Bonus, float CallFunc_Conv_IntToFloat_ReturnValue, float K2Node_Select_Default, float K2Node_Select_Default_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "UpdateMaxStamina");

	Params::ABarbarous_StormMode_C_UpdateMaxStamina_Params Parms{};

	Parms.AddLuteAbility = AddLuteAbility;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.Temp_float_Variable_4 = Temp_float_Variable_4;
	Parms.Temp_float_Variable_5 = Temp_float_Variable_5;
	Parms.CallFunc_HandleLuteAbility_HP_Bonus = CallFunc_HandleLuteAbility_HP_Bonus;
	Parms.CallFunc_HandleLuteAbility_Stamina_Bonus = CallFunc_HandleLuteAbility_Stamina_Bonus;
	Parms.CallFunc_HandleLuteAbility_Resolve_Bonus = CallFunc_HandleLuteAbility_Resolve_Bonus;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.UpdateMaxHP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AddLuteAbility                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_AddLuteAbility                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_HandleLuteAbility_HP_Bonus                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_HandleLuteAbility_Stamina_Bonus                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_HandleLuteAbility_Resolve_Bonus                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::UpdateMaxHP(bool AddLuteAbility, bool Local_AddLuteAbility, bool Temp_bool_Variable, enum class EArmorTypes Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, int32 CallFunc_HandleLuteAbility_HP_Bonus, int32 CallFunc_HandleLuteAbility_Stamina_Bonus, int32 CallFunc_HandleLuteAbility_Resolve_Bonus, int32 K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue, int32 K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "UpdateMaxHP");

	Params::ABarbarous_StormMode_C_UpdateMaxHP_Params Parms{};

	Parms.AddLuteAbility = AddLuteAbility;
	Parms.Local_AddLuteAbility = Local_AddLuteAbility;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.CallFunc_HandleLuteAbility_HP_Bonus = CallFunc_HandleLuteAbility_HP_Bonus;
	Parms.CallFunc_HandleLuteAbility_Stamina_Bonus = CallFunc_HandleLuteAbility_Stamina_Bonus;
	Parms.CallFunc_HandleLuteAbility_Resolve_Bonus = CallFunc_HandleLuteAbility_Resolve_Bonus;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.GetBoostedDmgAgainstActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              BaseDmg                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              BoostedDmg                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetBoostedDmgAgainstActor_BoostedDmg                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::GetBoostedDmgAgainstActor(class AActor* Actor, float BaseDmg, float* BoostedDmg, bool Temp_bool_Variable, float CallFunc_GetBoostedDmgAgainstActor_BoostedDmg, bool CallFunc_ActorHasTag_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "GetBoostedDmgAgainstActor");

	Params::ABarbarous_StormMode_C_GetBoostedDmgAgainstActor_Params Parms{};

	Parms.Actor = Actor;
	Parms.BaseDmg = BaseDmg;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetBoostedDmgAgainstActor_BoostedDmg = CallFunc_GetBoostedDmgAgainstActor_BoostedDmg;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (BoostedDmg != nullptr)
		*BoostedDmg = Parms.BoostedDmg;

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.Runes_Disable_All
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URuneUpgradeBase_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_StormMode_C::Runes_Disable_All(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class URuneUpgradeBase_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "Runes_Disable_All");

	Params::ABarbarous_StormMode_C_Runes_Disable_All_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.Runes_Initialize_All
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FStruct_Rune>        CallFunc_Map_Values_Values                                       (ReferenceParm, HasGetValueTypeHash)
// class URuneUpgradeBase_C*          CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::Runes_Initialize_All(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FStruct_Rune& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FStruct_Rune>& CallFunc_Map_Values_Values, class URuneUpgradeBase_C* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "Runes_Initialize_All");

	Params::ABarbarous_StormMode_C_Runes_Initialize_All_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.MaceComboFinisherAOE
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AEnemyCharacter_C*>   Local_Enemies                                                    (Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm, HasGetValueTypeHash)
// class AEnemyCharacter_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// struct FVector                     CallFunc_DirectionTo2D_Dir                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FHitResult>          CallFunc_SphereTraceMultiForObjects_OutHits                      (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SphereTraceMultiForObjects_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_Array_Get_Item_1                                        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::MaceComboFinisherAOE(const TArray<class AEnemyCharacter_C*>& Local_Enemies, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<class AActor*>& Temp_object_Variable, class AEnemyCharacter_C* CallFunc_Array_Get_Item, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, const struct FVector& CallFunc_DirectionTo2D_Dir, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TArray<struct FHitResult>& CallFunc_SphereTraceMultiForObjects_OutHits, bool CallFunc_SphereTraceMultiForObjects_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FHitResult& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "MaceComboFinisherAOE");

	Params::ABarbarous_StormMode_C_MaceComboFinisherAOE_Params Parms{};

	Parms.Local_Enemies = Local_Enemies;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_DirectionTo2D_Dir = CallFunc_DirectionTo2D_Dir;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_SphereTraceMultiForObjects_OutHits = CallFunc_SphereTraceMultiForObjects_OutHits;
	Parms.CallFunc_SphereTraceMultiForObjects_ReturnValue = CallFunc_SphereTraceMultiForObjects_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.K2Node_DynamicCast_AsEnemy_Character = K2Node_DynamicCast_AsEnemy_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.DH_AddUpgrade
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              X_                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              X                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                Local_Rune                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Local_X                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_X_                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_UpgradeFound                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDataTable*                  Local_DataTable                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          Local_Tier                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_ID                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Category_RandomizerLocal_Category                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_GetRunesFromTable_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URuneUpgradeBase_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune_Values         K2Node_MakeStruct_Struct_Rune_Values                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune_Values         K2Node_MakeStruct_Struct_Rune_Values_1                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                K2Node_MakeStruct_Struct_Rune                                    (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_StormMode_C::DH_AddUpgrade(class FName ID, int32 X_, int32 X, const struct FStruct_Rune& Local_Rune, int32 Local_X, int32 Local_X_, bool Local_UpgradeFound, class UDataTable* Local_DataTable, enum class Enum_Rune_Tier Local_Tier, class FName Local_ID, enum class Enum_Rune_Category_Randomizer Local_Category, int32 Temp_int_Variable, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, class UDataTable* CallFunc_GetRunesFromTable_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class URuneUpgradeBase_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, const struct FStruct_Rune_Values& K2Node_MakeStruct_Struct_Rune_Values, const struct FStruct_Rune_Values& K2Node_MakeStruct_Struct_Rune_Values_1, int32 CallFunc_MakeLiteralInt_ReturnValue, const struct FStruct_Rune& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, const struct FStruct_Rune& K2Node_MakeStruct_Struct_Rune, bool CallFunc_EqualEqual_NameName_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "DH_AddUpgrade");

	Params::ABarbarous_StormMode_C_DH_AddUpgrade_Params Parms{};

	Parms.ID = ID;
	Parms.X_ = X_;
	Parms.X = X;
	Parms.Local_Rune = Local_Rune;
	Parms.Local_X = Local_X;
	Parms.Local_X_ = Local_X_;
	Parms.Local_UpgradeFound = Local_UpgradeFound;
	Parms.Local_DataTable = Local_DataTable;
	Parms.Local_Tier = Local_Tier;
	Parms.Local_ID = Local_ID;
	Parms.Local_Category = Local_Category;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_GetRunesFromTable_ReturnValue = CallFunc_GetRunesFromTable_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_MakeStruct_Struct_Rune_Values = K2Node_MakeStruct_Struct_Rune_Values;
	Parms.K2Node_MakeStruct_Struct_Rune_Values_1 = K2Node_MakeStruct_Struct_Rune_Values_1;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.K2Node_MakeStruct_Struct_Rune = K2Node_MakeStruct_Struct_Rune;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.Timeline_InflamedHallowedSword_Effect__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::Timeline_InflamedHallowedSword_Effect__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "Timeline_InflamedHallowedSword_Effect__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.Timeline_InflamedHallowedSword_Effect__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::Timeline_InflamedHallowedSword_Effect__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "Timeline_InflamedHallowedSword_Effect__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "ReceiveActorBeginOverlap");

	Params::ABarbarous_StormMode_C_ReceiveActorBeginOverlap_Params Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "ReceiveTick");

	Params::ABarbarous_StormMode_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.UpdateShellAbilities
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::UpdateShellAbilities()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "UpdateShellAbilities");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.InitializeShellAbilties
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::InitializeShellAbilties()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "InitializeShellAbilties");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.OnCharacterFullySpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::OnCharacterFullySpawned()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "OnCharacterFullySpawned");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.Runes_Update_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::Runes_Update_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "Runes_Update_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.Runes_Initialize_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::Runes_Initialize_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "Runes_Initialize_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.NewRuneHasBeenAdded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::NewRuneHasBeenAdded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "NewRuneHasBeenAdded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.MaceComboFinisherStagger
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::MaceComboFinisherStagger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "MaceComboFinisherStagger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.AddResolve
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Resolve                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::AddResolve(float Resolve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "AddResolve");

	Params::ABarbarous_StormMode_C_AddResolve_Params Parms{};

	Parms.Resolve = Resolve;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.ApplyOrnateMaskBonusIfRequested
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::ApplyOrnateMaskBonusIfRequested()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "ApplyOrnateMaskBonusIfRequested");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.ForceWalking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::ForceWalking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "ForceWalking");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.DisableAllRunesObjects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::DisableAllRunesObjects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "DisableAllRunesObjects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.ApplyRuneHealingEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             Component                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::ApplyRuneHealingEffect(class AActor* Actor, class USceneComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "ApplyRuneHealingEffect");

	Params::ABarbarous_StormMode_C_ApplyRuneHealingEffect_Params Parms{};

	Parms.Actor = Actor;
	Parms.Component = Component;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.ApplyImmediateRuneEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::ApplyImmediateRuneEffect(class FName ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "ApplyImmediateRuneEffect");

	Params::ABarbarous_StormMode_C_ApplyImmediateRuneEffect_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.AddResolveOnRunStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::AddResolveOnRunStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "AddResolveOnRunStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.AddImmediateEffectRune
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Rune                Rune                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABarbarous_StormMode_C::AddImmediateEffectRune(const struct FStruct_Rune& Rune)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "AddImmediateEffectRune");

	Params::ABarbarous_StormMode_C_AddImmediateEffectRune_Params Parms{};

	Parms.Rune = Rune;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.StompAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              StunDuration                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::StompAttack(float StunDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "StompAttack");

	Params::ABarbarous_StormMode_C_StompAttack_Params Parms{};

	Parms.StunDuration = StunDuration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.KickDirect_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::KickDirect_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "KickDirect_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.KickDirect_Stop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::KickDirect_Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "KickDirect_Stop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.KickDirect_SpecialEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::KickDirect_SpecialEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "KickDirect_SpecialEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.OnDamageAppliedToHitActor_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::OnDamageAppliedToHitActor_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "OnDamageAppliedToHitActor_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.InflamedHallowedSword_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::InflamedHallowedSword_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "InflamedHallowedSword_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.OnInflamedHallowedSword_End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::OnInflamedHallowedSword_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "OnInflamedHallowedSword_End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.HallowedSwordSuper_LifeSteal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           Enemy                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::HallowedSwordSuper_LifeSteal(float Damage, class AEnemyCharacter_C* Enemy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "HallowedSwordSuper_LifeSteal");

	Params::ABarbarous_StormMode_C_HallowedSwordSuper_LifeSteal_Params Parms{};

	Parms.Damage = Damage;
	Parms.Enemy = Enemy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.Super_1_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::Super_1_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "Super_1_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.Super_1_Stop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::Super_1_Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "Super_1_Stop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.Super_2_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::Super_2_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "Super_2_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.Super_2_Stop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::Super_2_Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "Super_2_Stop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.InfinityHammer_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::InfinityHammer_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "InfinityHammer_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.OnInfinityHammer_End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::OnInfinityHammer_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "OnInfinityHammer_End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.RestoreShell
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             ShellToRestore                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::RestoreShell(enum class EArmorTypes ShellToRestore)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "RestoreShell");

	Params::ABarbarous_StormMode_C_RestoreShell_Params Parms{};

	Parms.ShellToRestore = ShellToRestore;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.StopForceWalking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::StopForceWalking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "StopForceWalking");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.ClearLockOnEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::ClearLockOnEnemy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "ClearLockOnEnemy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.ChangeShellUtil
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             Shell                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::ChangeShellUtil(enum class EArmorTypes Shell)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "ChangeShellUtil");

	Params::ABarbarous_StormMode_C_ChangeShellUtil_Params Parms{};

	Parms.Shell = Shell;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.ChangeWeaponUtil
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EComboTypes             NewWeapon                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::ChangeWeaponUtil(enum class EComboTypes NewWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "ChangeWeaponUtil");

	Params::ABarbarous_StormMode_C_ChangeWeaponUtil_Params Parms{};

	Parms.NewWeapon = NewWeapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.AddStartingRiposte
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERiposteTypes           Riposte                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::AddStartingRiposte(enum class ERiposteTypes Riposte)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "AddStartingRiposte");

	Params::ABarbarous_StormMode_C_AddStartingRiposte_Params Parms{};

	Parms.Riposte = Riposte;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.ReloadRipostes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::ReloadRipostes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "ReloadRipostes");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.DamageAppliedToHitActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::DamageAppliedToHitActor(float Damage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "DamageAppliedToHitActor");

	Params::ABarbarous_StormMode_C_DamageAppliedToHitActor_Params Parms{};

	Parms.Damage = Damage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.StormMode_GlacialBladeProjectile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::StormMode_GlacialBladeProjectile()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "StormMode_GlacialBladeProjectile");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.GlacialBlade_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::GlacialBlade_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "GlacialBlade_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.GlacialBlade_End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::GlacialBlade_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "GlacialBlade_End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.RekindledMace_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::RekindledMace_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "RekindledMace_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.RekindledMace_End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::RekindledMace_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "RekindledMace_End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.StormMode_RekindledMaceProjectile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::StormMode_RekindledMaceProjectile()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "StormMode_RekindledMaceProjectile");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.AddMaxResolveBonus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::AddMaxResolveBonus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "AddMaxResolveBonus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.SpecialWeaponSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::SpecialWeaponSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "SpecialWeaponSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.DH_Fire
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              X                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::DH_Fire(int32 X)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "DH_Fire");

	Params::ABarbarous_StormMode_C_DH_Fire_Params Parms{};

	Parms.X = X;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.DH_FireBlood
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              X                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::DH_FireBlood(int32 X)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "DH_FireBlood");

	Params::ABarbarous_StormMode_C_DH_FireBlood_Params Parms{};

	Parms.X = X;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.DH_TwitchLute
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_StormMode_C::DH_TwitchLute(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "DH_TwitchLute");

	Params::ABarbarous_StormMode_C_DH_TwitchLute_Params Parms{};

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.DH_TwitchDarkForm
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_StormMode_C::DH_TwitchDarkForm(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "DH_TwitchDarkForm");

	Params::ABarbarous_StormMode_C_DH_TwitchDarkForm_Params Parms{};

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.DH_TwitchWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_StormMode_C::DH_TwitchWeapon(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "DH_TwitchWeapon");

	Params::ABarbarous_StormMode_C_DH_TwitchWeapon_Params Parms{};

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.RemoveMaxResolveBonus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::RemoveMaxResolveBonus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "RemoveMaxResolveBonus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.OnLuteStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::OnLuteStateChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "OnLuteStateChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.InitializeCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::InitializeCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "InitializeCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.ExecuteUbergraph_Barbarous_StormMode
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_6                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_8                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_9                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_10                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_11                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_ShellDye           CallFunc_StormMode_GetCurrentShadeForCharacter_Shade             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StormMode_GetSelectedShell_HasSelected                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             CallFunc_StormMode_GetSelectedShell_Shell                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_OtherActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URuneInventoryComponent_C*   CallFunc_GetRuneInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Resolve                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             K2Node_Event_Component                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_ID                                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                K2Node_Event_Rune                                                (HasGetValueTypeHash)
// class URuneUpgradeBase_C*          CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_StunDuration                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam                               (IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Kick_SpecialEffect_Fire_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           K2Node_Event_Enemy                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue_2                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_1                               (NoDestructor, HasGetValueTypeHash)
// class UShellUpgradeBase_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             K2Node_Event_ShellToRestore                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             K2Node_Event_Shell                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             K2Node_Event_NewWeapon                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICharacterUtilInterface_C>CallFunc_Barbarous_ChangeShells_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Barbarous_ChangeShells_DidChange                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ERiposteTypes           K2Node_Event_Riposte                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue_3                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AProjectile_Player_Special_C*CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_2                               (NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_2                             (IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue_4                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AProjectile_Player_Special_Mace_C*CallFunc_FinishSpawningActor_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_3                               (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_3                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_X_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_X                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bEnabled_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bEnabled_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bEnabled                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TwitchDrop_ShouldUseWeaponSkin_bYes                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetSkinID_ID                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetSkinID_ID_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetSkinID_ID_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_4                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_5                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_6                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_StormMode_C::ExecuteUbergraph_Barbarous_StormMode(int32 EntryPoint, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_Lerp_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, enum class EArmorTypes Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, float Temp_float_Variable_5, bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, enum class EArmorTypes Temp_byte_Variable_1, float Temp_float_Variable_6, float Temp_float_Variable_7, float Temp_float_Variable_8, float Temp_float_Variable_9, float Temp_float_Variable_10, float Temp_float_Variable_11, const struct FVector& CallFunc_MakeVector_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_ShellDye CallFunc_StormMode_GetCurrentShadeForCharacter_Shade, bool CallFunc_StormMode_GetSelectedShell_HasSelected, enum class EArmorTypes CallFunc_StormMode_GetSelectedShell_Shell, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, class AActor* K2Node_Event_OtherActor, float K2Node_Event_DeltaSeconds, int32 CallFunc_Array_Length_ReturnValue, class URuneInventoryComponent_C* CallFunc_GetRuneInventory_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, float K2Node_Event_Resolve, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess_2, class AActor* K2Node_Event_Actor, class USceneComponent* K2Node_Event_Component, bool CallFunc_NotEqual_ByteByte_ReturnValue, class FName K2Node_Event_ID, const struct FStruct_Rune& K2Node_Event_Rune, class URuneUpgradeBase_C* CallFunc_SpawnObject_ReturnValue, float K2Node_Event_StunDuration, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool K2Node_SwitchName_CmpSuccess_1, bool K2Node_SwitchName_CmpSuccess_2, bool K2Node_SwitchName_CmpSuccess_3, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Kick_SpecialEffect_Fire_C* CallFunc_FinishSpawningActor_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, float K2Node_Event_Damage_1, class AEnemyCharacter_C* K2Node_Event_Enemy, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_2, int32 Temp_int_Array_Index_Variable, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, class UShellUpgradeBase_C* CallFunc_Array_Get_Item, enum class EArmorTypes K2Node_Event_ShellToRestore, enum class EArmorTypes K2Node_Event_Shell, enum class EComboTypes K2Node_Event_NewWeapon, int32 CallFunc_Conv_ByteToInt_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> CallFunc_Barbarous_ChangeShells_self_CastInput, bool CallFunc_Barbarous_ChangeShells_DidChange, enum class ERiposteTypes K2Node_Event_Riposte, float K2Node_Event_Damage, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_2, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class AProjectile_Player_Special_C* CallFunc_FinishSpawningActor_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_2, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_3, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, const struct FVector& CallFunc_GetForwardVector_ReturnValue_1, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_4, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, class AProjectile_Player_Special_Mace_C* CallFunc_FinishSpawningActor_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_Select_Default, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_3, int32 K2Node_CustomEvent_X_1, int32 K2Node_CustomEvent_X, bool K2Node_CustomEvent_bEnabled_2, bool K2Node_CustomEvent_bEnabled_1, int32 CallFunc_Conv_BoolToInt_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_1, bool K2Node_CustomEvent_bEnabled, int32 CallFunc_Conv_BoolToInt_ReturnValue_2, bool CallFunc_TwitchDrop_ShouldUseWeaponSkin_bYes, class UMaterialInterface* K2Node_Select_Default_1, class FName CallFunc_GetSkinID_ID, class FName CallFunc_GetSkinID_ID_1, class FName CallFunc_GetSkinID_ID_2, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, float K2Node_Select_Default_2, int32 CallFunc_Add_IntInt_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_4, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_5, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_6, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "ExecuteUbergraph_Barbarous_StormMode");

	Params::ABarbarous_StormMode_C_ExecuteUbergraph_Barbarous_StormMode_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.Temp_float_Variable_4 = Temp_float_Variable_4;
	Parms.Temp_float_Variable_5 = Temp_float_Variable_5;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_float_Variable_6 = Temp_float_Variable_6;
	Parms.Temp_float_Variable_7 = Temp_float_Variable_7;
	Parms.Temp_float_Variable_8 = Temp_float_Variable_8;
	Parms.Temp_float_Variable_9 = Temp_float_Variable_9;
	Parms.Temp_float_Variable_10 = Temp_float_Variable_10;
	Parms.Temp_float_Variable_11 = Temp_float_Variable_11;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_StormMode_GetCurrentShadeForCharacter_Shade = CallFunc_StormMode_GetCurrentShadeForCharacter_Shade;
	Parms.CallFunc_StormMode_GetSelectedShell_HasSelected = CallFunc_StormMode_GetSelectedShell_HasSelected;
	Parms.CallFunc_StormMode_GetSelectedShell_Shell = CallFunc_StormMode_GetSelectedShell_Shell;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Event_OtherActor = K2Node_Event_OtherActor;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetRuneInventory_ReturnValue = CallFunc_GetRuneInventory_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.K2Node_Event_Resolve = K2Node_Event_Resolve;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.K2Node_Event_Component = K2Node_Event_Component;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_Event_ID = K2Node_Event_ID;
	Parms.K2Node_Event_Rune = K2Node_Event_Rune;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.K2Node_Event_StunDuration = K2Node_Event_StunDuration;
	Parms.K2Node_MakeStruct_ParticleSysParam = K2Node_MakeStruct_ParticleSysParam;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess_1 = K2Node_SwitchName_CmpSuccess_1;
	Parms.K2Node_SwitchName_CmpSuccess_2 = K2Node_SwitchName_CmpSuccess_2;
	Parms.K2Node_SwitchName_CmpSuccess_3 = K2Node_SwitchName_CmpSuccess_3;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue_1 = CallFunc_GetSocketLocation_ReturnValue_1;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue_1 = CallFunc_SpawnEmitterAttached_ReturnValue_1;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.K2Node_Event_Damage_1 = K2Node_Event_Damage_1;
	Parms.K2Node_Event_Enemy = K2Node_Event_Enemy;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue_2 = CallFunc_SpawnEmitterAttached_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_K2_SetTimer_ReturnValue_1 = CallFunc_K2_SetTimer_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_Event_ShellToRestore = K2Node_Event_ShellToRestore;
	Parms.K2Node_Event_Shell = K2Node_Event_Shell;
	Parms.K2Node_Event_NewWeapon = K2Node_Event_NewWeapon;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Barbarous_ChangeShells_self_CastInput = CallFunc_Barbarous_ChangeShells_self_CastInput;
	Parms.CallFunc_Barbarous_ChangeShells_DidChange = CallFunc_Barbarous_ChangeShells_DidChange;
	Parms.K2Node_Event_Riposte = K2Node_Event_Riposte;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.CallFunc_GetSocketLocation_ReturnValue_2 = CallFunc_GetSocketLocation_ReturnValue_2;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_MakeRotFromX_ReturnValue = CallFunc_MakeRotFromX_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue_3 = CallFunc_SpawnEmitterAttached_ReturnValue_3;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.CallFunc_K2_SetTimer_ReturnValue_2 = CallFunc_K2_SetTimer_ReturnValue_2;
	Parms.CallFunc_GetSocketLocation_ReturnValue_3 = CallFunc_GetSocketLocation_ReturnValue_3;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue_1 = CallFunc_K2_GetActorRotation_ReturnValue_1;
	Parms.CallFunc_GetForwardVector_ReturnValue_1 = CallFunc_GetForwardVector_ReturnValue_1;
	Parms.CallFunc_MakeRotFromX_ReturnValue_1 = CallFunc_MakeRotFromX_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue_2 = CallFunc_MakeTransform_ReturnValue_2;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue_4 = CallFunc_SpawnEmitterAttached_ReturnValue_4;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_2 = CallFunc_FinishSpawningActor_ReturnValue_2;
	Parms.CallFunc_K2_SetTimer_ReturnValue_3 = CallFunc_K2_SetTimer_ReturnValue_3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_1 = CallFunc_SpawnSoundAttached_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_2 = CallFunc_SpawnSoundAttached_ReturnValue_2;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_3 = CallFunc_SpawnSoundAttached_ReturnValue_3;
	Parms.K2Node_CustomEvent_X_1 = K2Node_CustomEvent_X_1;
	Parms.K2Node_CustomEvent_X = K2Node_CustomEvent_X;
	Parms.K2Node_CustomEvent_bEnabled_2 = K2Node_CustomEvent_bEnabled_2;
	Parms.K2Node_CustomEvent_bEnabled_1 = K2Node_CustomEvent_bEnabled_1;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_1 = CallFunc_Conv_BoolToInt_ReturnValue_1;
	Parms.K2Node_CustomEvent_bEnabled = K2Node_CustomEvent_bEnabled;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_2 = CallFunc_Conv_BoolToInt_ReturnValue_2;
	Parms.CallFunc_TwitchDrop_ShouldUseWeaponSkin_bYes = CallFunc_TwitchDrop_ShouldUseWeaponSkin_bYes;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetSkinID_ID = CallFunc_GetSkinID_ID;
	Parms.CallFunc_GetSkinID_ID_1 = CallFunc_GetSkinID_ID_1;
	Parms.CallFunc_GetSkinID_ID_2 = CallFunc_GetSkinID_ID_2;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_4 = CallFunc_SpawnSoundAttached_ReturnValue_4;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_5 = CallFunc_SpawnSoundAttached_ReturnValue_5;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_6 = CallFunc_SpawnSoundAttached_ReturnValue_6;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_1 = K2Node_DynamicCast_AsGame_Play_PCInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.LuteStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::LuteStateChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "LuteStateChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.UnbreakableStoneForm_Update__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Remove                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_StormMode_C::UnbreakableStoneForm_Update__DelegateSignature(bool Remove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "UnbreakableStoneForm_Update__DelegateSignature");

	Params::ABarbarous_StormMode_C_UnbreakableStoneForm_Update__DelegateSignature_Params Parms{};

	Parms.Remove = Remove;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.OnHittingEnemyWithDamage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Socket                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::OnHittingEnemyWithDamage__DelegateSignature(float Damage, class AActor* Actor, class FName Socket)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "OnHittingEnemyWithDamage__DelegateSignature");

	Params::ABarbarous_StormMode_C_OnHittingEnemyWithDamage__DelegateSignature_Params Parms{};

	Parms.Damage = Damage;
	Parms.Actor = Actor;
	Parms.Socket = Socket;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.OnSuper2_Stop__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::OnSuper2_Stop__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "OnSuper2_Stop__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.OnSuper2_Start__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::OnSuper2_Start__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "OnSuper2_Start__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.OnSuper1_Stop__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::OnSuper1_Stop__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "OnSuper1_Stop__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.OnSuper1_Start__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::OnSuper1_Start__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "OnSuper1_Start__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.OnEnemyHit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      HitActor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_StormMode_C::OnEnemyHit__DelegateSignature(class AActor* HitActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "OnEnemyHit__DelegateSignature");

	Params::ABarbarous_StormMode_C_OnEnemyHit__DelegateSignature_Params Parms{};

	Parms.HitActor = HitActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.OnRuneRevivalEffect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::OnRuneRevivalEffect__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "OnRuneRevivalEffect__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous_StormMode.Barbarous_StormMode_C.OnRuneHealEffect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_StormMode_C::OnRuneHealEffect__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_StormMode_C", "OnRuneHealEffect__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


