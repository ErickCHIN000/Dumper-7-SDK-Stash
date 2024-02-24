#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BossBaseCharacter.BossBaseCharacter_C
// (Actor, Pawn)

class UClass* ABossBaseCharacter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BossBaseCharacter_C");

	return Clss;
}


// BossBaseCharacter_C BossBaseCharacter.Default__BossBaseCharacter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABossBaseCharacter_C* ABossBaseCharacter_C::GetDefaultObj()
{
	static class ABossBaseCharacter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABossBaseCharacter_C*>(ABossBaseCharacter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BossBaseCharacter.BossBaseCharacter_C.Death_HandleStormModeMilestones
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABossBaseCharacter_C::Death_HandleStormModeMilestones()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "Death_HandleStormModeMilestones");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossBaseCharacter.BossBaseCharacter_C.DropRuneFromMiniBoss
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_StormMode_AskForASeed_Seed                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetGlimpseDropTransform_ReturnValue                     (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AConfigurable_Glowing_Pickup_StormMode_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_RandomizedObject_C>K2Node_DynamicCast_AsBPI_Randomized_Object                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class URuneRandomizerComponent_C*  CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_RandomizedObject_C>K2Node_DynamicCast_AsBPI_Randomized_Object_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABossBaseCharacter_C::DropRuneFromMiniBoss(class APlayerController* CallFunc_GetPlayerController_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_StormMode_AskForASeed_Seed, const struct FTransform& CallFunc_GetGlimpseDropTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AConfigurable_Glowing_Pickup_StormMode_C* CallFunc_FinishSpawningActor_ReturnValue, TScriptInterface<class IBPI_RandomizedObject_C> K2Node_DynamicCast_AsBPI_Randomized_Object, bool K2Node_DynamicCast_bSuccess_1, class URuneRandomizerComponent_C* CallFunc_GetComponentByClass_ReturnValue, TScriptInterface<class IBPI_RandomizedObject_C> K2Node_DynamicCast_AsBPI_Randomized_Object_1, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "DropRuneFromMiniBoss");

	Params::ABossBaseCharacter_C_DropRuneFromMiniBoss_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_StormMode_AskForASeed_Seed = CallFunc_StormMode_AskForASeed_Seed;
	Parms.CallFunc_GetGlimpseDropTransform_ReturnValue = CallFunc_GetGlimpseDropTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Randomized_Object = K2Node_DynamicCast_AsBPI_Randomized_Object;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Randomized_Object_1 = K2Node_DynamicCast_AsBPI_Randomized_Object_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.CloseReturnPath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABossBaseCharacter_C::CloseReturnPath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "CloseReturnPath");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossBaseCharacter.BossBaseCharacter_C.IncreaseStormModeProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_StormModeProgress  CallFunc_GetStormModeProgress_Progress                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABossBaseCharacter_C::IncreaseStormModeProgress(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_StormModeProgress CallFunc_GetStormModeProgress_Progress, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_3, bool K2Node_DynamicCast_bSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "IncreaseStormModeProgress");

	Params::ABossBaseCharacter_C_IncreaseStormModeProgress_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetStormModeProgress_Progress = CallFunc_GetStormModeProgress_Progress;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_3 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.StartMusic_NormalTrack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGamePlayGameState_C*        CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABossBaseCharacter_C::StartMusic_NormalTrack(class AGamePlayGameState_C* CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "StartMusic_NormalTrack");

	Params::ABossBaseCharacter_C_StartMusic_NormalTrack_Params Parms{};

	Parms.CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState = CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.StartMusic_MetalTrack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldPlayNormalTrackIfInvalid                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              FadeInDuration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGamePlayGameState_C*        CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  CallFunc_LoadMusicFromDLC_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABossBaseCharacter_C::StartMusic_MetalTrack(bool ShouldPlayNormalTrackIfInvalid, float FadeInDuration, class AGamePlayGameState_C* CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class USoundBase* CallFunc_LoadMusicFromDLC_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "StartMusic_MetalTrack");

	Params::ABossBaseCharacter_C_StartMusic_MetalTrack_Params Parms{};

	Parms.ShouldPlayNormalTrackIfInvalid = ShouldPlayNormalTrackIfInvalid;
	Parms.FadeInDuration = FadeInDuration;
	Parms.CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState = CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_LoadMusicFromDLC_ReturnValue = CallFunc_LoadMusicFromDLC_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.SelectStaggerMontage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimMontage*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UAnimMontage* ABossBaseCharacter_C::SelectStaggerMontage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "SelectStaggerMontage");

	Params::ABossBaseCharacter_C_SelectStaggerMontage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BossBaseCharacter.BossBaseCharacter_C.SetBossAsDefeatedAndSave
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_AddNGLevelToID_O                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABossBaseCharacter_C::SetBossAsDefeatedAndSave(class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class FName CallFunc_AddNGLevelToID_O, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "SetBossAsDefeatedAndSave");

	Params::ABossBaseCharacter_C_SetBossAsDefeatedAndSave_Params Parms{};

	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_AddNGLevelToID_O = CallFunc_AddNGLevelToID_O;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.AI_SetBlackBoardIsStunned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsStunned_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)

void ABossBaseCharacter_C::AI_SetBlackBoardIsStunned(bool IsStunned_, const class FString& Reason, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "AI_SetBlackBoardIsStunned");

	Params::ABossBaseCharacter_C_AI_SetBlackBoardIsStunned_Params Parms{};

	Parms.IsStunned_ = IsStunned_;
	Parms.Reason = Reason;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.DestroyBCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABossBaseCharacter_C::DestroyBCamera(class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "DestroyBCamera");

	Params::ABossBaseCharacter_C_DestroyBCamera_Params Parms{};

	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.RemoveFirePoisonBuffs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBuffObject_C*               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABossBaseCharacter_C::RemoveFirePoisonBuffs(int32 Temp_int_Array_Index_Variable, class UBuffObject_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "RemoveFirePoisonBuffs");

	Params::ABossBaseCharacter_C_RemoveFirePoisonBuffs_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.ShouldTakePoiseDamageOnDefelect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ShouldTakePoiseDamage                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABossBaseCharacter_C::ShouldTakePoiseDamageOnDefelect(bool* ShouldTakePoiseDamage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "ShouldTakePoiseDamageOnDefelect");

	Params::ABossBaseCharacter_C_ShouldTakePoiseDamageOnDefelect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ShouldTakePoiseDamage != nullptr)
		*ShouldTakePoiseDamage = Parms.ShouldTakePoiseDamage;

}


// Function BossBaseCharacter.BossBaseCharacter_C.HandleCrossRiposteOnPhaseSwitch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABossBaseCharacter_C::HandleCrossRiposteOnPhaseSwitch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "HandleCrossRiposteOnPhaseSwitch");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossBaseCharacter.BossBaseCharacter_C.GetName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Name                                                             (Parm, OutParm)

void ABossBaseCharacter_C::GetName(class FText* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "GetName");

	Params::ABossBaseCharacter_C_GetName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function BossBaseCharacter.BossBaseCharacter_C.SaveBossDefeated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABossBaseCharacter_C::SaveBossDefeated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "SaveBossDefeated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossBaseCharacter.BossBaseCharacter_C.GetAttacksNotUnderCooldown
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<int32>                      PossibleAttacks                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// TArray<int32>                      Output                                                           (Parm, OutParm, HasGetValueTypeHash)
// TArray<int32>                      FixedArray                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimeSeconds_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Length_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<int32>                      CallFunc_Map_Keys_Keys                                           (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABossBaseCharacter_C::GetAttacksNotUnderCooldown(TArray<int32>& PossibleAttacks, TArray<int32>* Output, const TArray<int32>& FixedArray, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<int32>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "GetAttacksNotUnderCooldown");

	Params::ABossBaseCharacter_C_GetAttacksNotUnderCooldown_Params Parms{};

	Parms.PossibleAttacks = PossibleAttacks;
	Parms.FixedArray = FixedArray;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetTimeSeconds_ReturnValue = CallFunc_GetTimeSeconds_ReturnValue;
	Parms.CallFunc_Map_Length_ReturnValue = CallFunc_Map_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

}


// Function BossBaseCharacter.BossBaseCharacter_C.PhaseSwitchFillStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABossBaseCharacter_C::PhaseSwitchFillStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "PhaseSwitchFillStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossBaseCharacter.BossBaseCharacter_C.GetDifferentAttackIndex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<int32>                      PossibleAttacks                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// int32                              Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<int32>                      CallFunc_GetAttacksNotUnderCooldown_Output                       (ReferenceParm, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_GetAttacksNotUnderCooldown_Output_1                     (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<int32>                      K2Node_Select_Default                                            (ReferenceParm, HasGetValueTypeHash)
// TArray<int32>                      K2Node_Select_Default_1                                          (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABossBaseCharacter_C::GetDifferentAttackIndex(TArray<int32>& PossibleAttacks, int32* Output, bool Temp_bool_Variable, TArray<int32>& CallFunc_GetAttacksNotUnderCooldown_Output, TArray<int32>& CallFunc_GetAttacksNotUnderCooldown_Output_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, TArray<int32>& K2Node_Select_Default, TArray<int32>& K2Node_Select_Default_1, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Get_Item, int32 CallFunc_RandomInteger_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue_1, int32 CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Get_Item_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "GetDifferentAttackIndex");

	Params::ABossBaseCharacter_C_GetDifferentAttackIndex_Params Parms{};

	Parms.PossibleAttacks = PossibleAttacks;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetAttacksNotUnderCooldown_Output = CallFunc_GetAttacksNotUnderCooldown_Output;
	Parms.CallFunc_GetAttacksNotUnderCooldown_Output_1 = CallFunc_GetAttacksNotUnderCooldown_Output_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue_1 = CallFunc_RandomInteger_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;

}


// Function BossBaseCharacter.BossBaseCharacter_C.GetSelectedAttack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDHEnemyAttack              Output                                                           (Parm, OutParm, NoDestructor)

void ABossBaseCharacter_C::GetSelectedAttack(struct FDHEnemyAttack* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "GetSelectedAttack");

	Params::ABossBaseCharacter_C_GetSelectedAttack_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

}


// Function BossBaseCharacter.BossBaseCharacter_C.GetSelectedAttackDuration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Duration                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetPlayLength_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABossBaseCharacter_C::GetSelectedAttackDuration(float* Duration, bool CallFunc_Array_IsValidIndex_ReturnValue, float CallFunc_GetPlayLength_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "GetSelectedAttackDuration");

	Params::ABossBaseCharacter_C_GetSelectedAttackDuration_Params Parms{};

	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_GetPlayLength_ReturnValue = CallFunc_GetPlayLength_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Duration != nullptr)
		*Duration = Parms.Duration;

}


// Function BossBaseCharacter.BossBaseCharacter_C.ExecuteSelectedAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABossBaseCharacter_C::ExecuteSelectedAttack(bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "ExecuteSelectedAttack");

	Params::ABossBaseCharacter_C_ExecuteSelectedAttack_Params Parms{};

	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.SelectNextAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DistanceToPlayer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABossBaseCharacter_C::SelectNextAttack(float DistanceToPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "SelectNextAttack");

	Params::ABossBaseCharacter_C_SelectNextAttack_Params Parms{};

	Parms.DistanceToPlayer = DistanceToPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.GetBossHPUI
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBoss_HealthBar_C*           Boss_HealthBar                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsActorBeingDestroyed_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABossBaseCharacter_C::GetBossHPUI(class UBoss_HealthBar_C** Boss_HealthBar, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsActorBeingDestroyed_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "GetBossHPUI");

	Params::ABossBaseCharacter_C_GetBossHPUI_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsActorBeingDestroyed_ReturnValue = CallFunc_IsActorBeingDestroyed_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Boss_HealthBar != nullptr)
		*Boss_HealthBar = Parms.Boss_HealthBar;

}


// Function BossBaseCharacter.BossBaseCharacter_C.ReduceHealth
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewHealth                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ReduceHealth_NewHealth                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABossBaseCharacter_C::ReduceHealth(float Delta, float* NewHealth, float CallFunc_ReduceHealth_NewHealth, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "ReduceHealth");

	Params::ABossBaseCharacter_C_ReduceHealth_Params Parms{};

	Parms.Delta = Delta;
	Parms.CallFunc_ReduceHealth_NewHealth = CallFunc_ReduceHealth_NewHealth;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewHealth != nullptr)
		*NewHealth = Parms.NewHealth;

}


// Function BossBaseCharacter.BossBaseCharacter_C.PhaseSwitch__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABossBaseCharacter_C::PhaseSwitch__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "PhaseSwitch__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossBaseCharacter.BossBaseCharacter_C.PhaseSwitch__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABossBaseCharacter_C::PhaseSwitch__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "PhaseSwitch__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossBaseCharacter.BossBaseCharacter_C.OnNotifyEnd_939D19444D0FDBB56E30799A1503AE5C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABossBaseCharacter_C::OnNotifyEnd_939D19444D0FDBB56E30799A1503AE5C(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "OnNotifyEnd_939D19444D0FDBB56E30799A1503AE5C");

	Params::ABossBaseCharacter_C_OnNotifyEnd_939D19444D0FDBB56E30799A1503AE5C_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.OnNotifyBegin_939D19444D0FDBB56E30799A1503AE5C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABossBaseCharacter_C::OnNotifyBegin_939D19444D0FDBB56E30799A1503AE5C(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "OnNotifyBegin_939D19444D0FDBB56E30799A1503AE5C");

	Params::ABossBaseCharacter_C_OnNotifyBegin_939D19444D0FDBB56E30799A1503AE5C_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.OnInterrupted_939D19444D0FDBB56E30799A1503AE5C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABossBaseCharacter_C::OnInterrupted_939D19444D0FDBB56E30799A1503AE5C(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "OnInterrupted_939D19444D0FDBB56E30799A1503AE5C");

	Params::ABossBaseCharacter_C_OnInterrupted_939D19444D0FDBB56E30799A1503AE5C_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.OnBlendOut_939D19444D0FDBB56E30799A1503AE5C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABossBaseCharacter_C::OnBlendOut_939D19444D0FDBB56E30799A1503AE5C(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "OnBlendOut_939D19444D0FDBB56E30799A1503AE5C");

	Params::ABossBaseCharacter_C_OnBlendOut_939D19444D0FDBB56E30799A1503AE5C_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.OnCompleted_939D19444D0FDBB56E30799A1503AE5C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABossBaseCharacter_C::OnCompleted_939D19444D0FDBB56E30799A1503AE5C(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "OnCompleted_939D19444D0FDBB56E30799A1503AE5C");

	Params::ABossBaseCharacter_C_OnCompleted_939D19444D0FDBB56E30799A1503AE5C_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.OnNotifyEnd_085EC8DC4916CB87CCEFCBBC5EE6BD2A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABossBaseCharacter_C::OnNotifyEnd_085EC8DC4916CB87CCEFCBBC5EE6BD2A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "OnNotifyEnd_085EC8DC4916CB87CCEFCBBC5EE6BD2A");

	Params::ABossBaseCharacter_C_OnNotifyEnd_085EC8DC4916CB87CCEFCBBC5EE6BD2A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.OnNotifyBegin_085EC8DC4916CB87CCEFCBBC5EE6BD2A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABossBaseCharacter_C::OnNotifyBegin_085EC8DC4916CB87CCEFCBBC5EE6BD2A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "OnNotifyBegin_085EC8DC4916CB87CCEFCBBC5EE6BD2A");

	Params::ABossBaseCharacter_C_OnNotifyBegin_085EC8DC4916CB87CCEFCBBC5EE6BD2A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.OnInterrupted_085EC8DC4916CB87CCEFCBBC5EE6BD2A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABossBaseCharacter_C::OnInterrupted_085EC8DC4916CB87CCEFCBBC5EE6BD2A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "OnInterrupted_085EC8DC4916CB87CCEFCBBC5EE6BD2A");

	Params::ABossBaseCharacter_C_OnInterrupted_085EC8DC4916CB87CCEFCBBC5EE6BD2A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.OnBlendOut_085EC8DC4916CB87CCEFCBBC5EE6BD2A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABossBaseCharacter_C::OnBlendOut_085EC8DC4916CB87CCEFCBBC5EE6BD2A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "OnBlendOut_085EC8DC4916CB87CCEFCBBC5EE6BD2A");

	Params::ABossBaseCharacter_C_OnBlendOut_085EC8DC4916CB87CCEFCBBC5EE6BD2A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.OnCompleted_085EC8DC4916CB87CCEFCBBC5EE6BD2A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABossBaseCharacter_C::OnCompleted_085EC8DC4916CB87CCEFCBBC5EE6BD2A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "OnCompleted_085EC8DC4916CB87CCEFCBBC5EE6BD2A");

	Params::ABossBaseCharacter_C_OnCompleted_085EC8DC4916CB87CCEFCBBC5EE6BD2A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.OnNotifyEnd_F2C88EA04397978B4DEAB0B16506CD70
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABossBaseCharacter_C::OnNotifyEnd_F2C88EA04397978B4DEAB0B16506CD70(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "OnNotifyEnd_F2C88EA04397978B4DEAB0B16506CD70");

	Params::ABossBaseCharacter_C_OnNotifyEnd_F2C88EA04397978B4DEAB0B16506CD70_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.OnNotifyBegin_F2C88EA04397978B4DEAB0B16506CD70
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABossBaseCharacter_C::OnNotifyBegin_F2C88EA04397978B4DEAB0B16506CD70(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "OnNotifyBegin_F2C88EA04397978B4DEAB0B16506CD70");

	Params::ABossBaseCharacter_C_OnNotifyBegin_F2C88EA04397978B4DEAB0B16506CD70_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.OnInterrupted_F2C88EA04397978B4DEAB0B16506CD70
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABossBaseCharacter_C::OnInterrupted_F2C88EA04397978B4DEAB0B16506CD70(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "OnInterrupted_F2C88EA04397978B4DEAB0B16506CD70");

	Params::ABossBaseCharacter_C_OnInterrupted_F2C88EA04397978B4DEAB0B16506CD70_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.OnBlendOut_F2C88EA04397978B4DEAB0B16506CD70
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABossBaseCharacter_C::OnBlendOut_F2C88EA04397978B4DEAB0B16506CD70(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "OnBlendOut_F2C88EA04397978B4DEAB0B16506CD70");

	Params::ABossBaseCharacter_C_OnBlendOut_F2C88EA04397978B4DEAB0B16506CD70_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.OnCompleted_F2C88EA04397978B4DEAB0B16506CD70
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABossBaseCharacter_C::OnCompleted_F2C88EA04397978B4DEAB0B16506CD70(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "OnCompleted_F2C88EA04397978B4DEAB0B16506CD70");

	Params::ABossBaseCharacter_C_OnCompleted_F2C88EA04397978B4DEAB0B16506CD70_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.OnNotifyEnd_F0D49F8A4FA10AA45D96DB9A0C12681F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABossBaseCharacter_C::OnNotifyEnd_F0D49F8A4FA10AA45D96DB9A0C12681F(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "OnNotifyEnd_F0D49F8A4FA10AA45D96DB9A0C12681F");

	Params::ABossBaseCharacter_C_OnNotifyEnd_F0D49F8A4FA10AA45D96DB9A0C12681F_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.OnNotifyBegin_F0D49F8A4FA10AA45D96DB9A0C12681F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABossBaseCharacter_C::OnNotifyBegin_F0D49F8A4FA10AA45D96DB9A0C12681F(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "OnNotifyBegin_F0D49F8A4FA10AA45D96DB9A0C12681F");

	Params::ABossBaseCharacter_C_OnNotifyBegin_F0D49F8A4FA10AA45D96DB9A0C12681F_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.OnInterrupted_F0D49F8A4FA10AA45D96DB9A0C12681F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABossBaseCharacter_C::OnInterrupted_F0D49F8A4FA10AA45D96DB9A0C12681F(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "OnInterrupted_F0D49F8A4FA10AA45D96DB9A0C12681F");

	Params::ABossBaseCharacter_C_OnInterrupted_F0D49F8A4FA10AA45D96DB9A0C12681F_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.OnBlendOut_F0D49F8A4FA10AA45D96DB9A0C12681F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABossBaseCharacter_C::OnBlendOut_F0D49F8A4FA10AA45D96DB9A0C12681F(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "OnBlendOut_F0D49F8A4FA10AA45D96DB9A0C12681F");

	Params::ABossBaseCharacter_C_OnBlendOut_F0D49F8A4FA10AA45D96DB9A0C12681F_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.OnCompleted_F0D49F8A4FA10AA45D96DB9A0C12681F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABossBaseCharacter_C::OnCompleted_F0D49F8A4FA10AA45D96DB9A0C12681F(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "OnCompleted_F0D49F8A4FA10AA45D96DB9A0C12681F");

	Params::ABossBaseCharacter_C_OnCompleted_F0D49F8A4FA10AA45D96DB9A0C12681F_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABossBaseCharacter_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossBaseCharacter.BossBaseCharacter_C.EnemyDeath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Killer                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bShouldPlayDeathAnim                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABossBaseCharacter_C::EnemyDeath(class AActor* Killer, bool bShouldPlayDeathAnim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "EnemyDeath");

	Params::ABossBaseCharacter_C_EnemyDeath_Params Parms{};

	Parms.Killer = Killer;
	Parms.bShouldPlayDeathAnim = bShouldPlayDeathAnim;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABossBaseCharacter_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "ReceiveAnyDamage");

	Params::ABossBaseCharacter_C_ReceiveAnyDamage_Params Parms{};

	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.StartPhaseSwitch
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABossBaseCharacter_C::StartPhaseSwitch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "StartPhaseSwitch");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossBaseCharacter.BossBaseCharacter_C.PlayAttackMontage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                MontageToPlay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PlayRate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              StartingPosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        StartingSection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABossBaseCharacter_C::PlayAttackMontage(class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, class FName StartingSection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "PlayAttackMontage");

	Params::ABossBaseCharacter_C_PlayAttackMontage_Params Parms{};

	Parms.MontageToPlay = MontageToPlay;
	Parms.PlayRate = PlayRate;
	Parms.StartingPosition = StartingPosition;
	Parms.StartingSection = StartingSection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.ResetStaggerDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABossBaseCharacter_C::ResetStaggerDamage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "ResetStaggerDamage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossBaseCharacter.BossBaseCharacter_C.IncreaseStaggerDamageCounter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABossBaseCharacter_C::IncreaseStaggerDamageCounter(float Damage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "IncreaseStaggerDamageCounter");

	Params::ABossBaseCharacter_C_IncreaseStaggerDamageCounter_Params Parms{};

	Parms.Damage = Damage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.StaggerBoss
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABossBaseCharacter_C::StaggerBoss()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "StaggerBoss");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossBaseCharacter.BossBaseCharacter_C.ResetIsStaggered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABossBaseCharacter_C::ResetIsStaggered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "ResetIsStaggered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossBaseCharacter.BossBaseCharacter_C.OnStaggerCooldownOver
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABossBaseCharacter_C::OnStaggerCooldownOver()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "OnStaggerCooldownOver");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossBaseCharacter.BossBaseCharacter_C.ForceHeavyStaggerDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     DirectionToSource                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABossBaseCharacter_C::ForceHeavyStaggerDamage(const struct FVector& DirectionToSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "ForceHeavyStaggerDamage");

	Params::ABossBaseCharacter_C_ForceHeavyStaggerDamage_Params Parms{};

	Parms.DirectionToSource = DirectionToSource;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.OnAttackExecuted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AttackIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABossBaseCharacter_C::OnAttackExecuted(int32 AttackIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "OnAttackExecuted");

	Params::ABossBaseCharacter_C_OnAttackExecuted_Params Parms{};

	Parms.AttackIndex = AttackIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.EndPhaseSwitchMontage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABossBaseCharacter_C::EndPhaseSwitchMontage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "EndPhaseSwitchMontage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossBaseCharacter.BossBaseCharacter_C.PhaseSwitchNotify
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABossBaseCharacter_C::PhaseSwitchNotify(class FName NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "PhaseSwitchNotify");

	Params::ABossBaseCharacter_C_PhaseSwitchNotify_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.PlayLightHitReaction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABossBaseCharacter_C::PlayLightHitReaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "PlayLightHitReaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossBaseCharacter.BossBaseCharacter_C.ReturnPlayerToPreviousLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABossBaseCharacter_C::ReturnPlayerToPreviousLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "ReturnPlayerToPreviousLevel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossBaseCharacter.BossBaseCharacter_C.ShowBossHPBar
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABossBaseCharacter_C::ShowBossHPBar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "ShowBossHPBar");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossBaseCharacter.BossBaseCharacter_C.DropGlimpses
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Killer                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABossBaseCharacter_C::DropGlimpses(class AActor* Killer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "DropGlimpses");

	Params::ABossBaseCharacter_C_DropGlimpses_Params Parms{};

	Parms.Killer = Killer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.OnWasAggroed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABossBaseCharacter_C::OnWasAggroed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "OnWasAggroed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossBaseCharacter.BossBaseCharacter_C.AfterIntroSequenceCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABossBaseCharacter_C::AfterIntroSequenceCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "AfterIntroSequenceCompleted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossBaseCharacter.BossBaseCharacter_C.FadeBossHpBar
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABossBaseCharacter_C::FadeBossHpBar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "FadeBossHpBar");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossBaseCharacter.BossBaseCharacter_C.PlayBossIntroSequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABossBaseCharacter_C::PlayBossIntroSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "PlayBossIntroSequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossBaseCharacter.BossBaseCharacter_C.PhaseSwitchInterrupt
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABossBaseCharacter_C::PhaseSwitchInterrupt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "PhaseSwitchInterrupt");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossBaseCharacter.BossBaseCharacter_C.StaggerNotifies
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        StaggerNotifies                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABossBaseCharacter_C::StaggerNotifies(class FName StaggerNotifies)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "StaggerNotifies");

	Params::ABossBaseCharacter_C_StaggerNotifies_Params Parms{};

	Parms.StaggerNotifies = StaggerNotifies;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.SetupCathedralDestroyOnChaliceBinding
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABossBaseCharacter_C::SetupCathedralDestroyOnChaliceBinding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "SetupCathedralDestroyOnChaliceBinding");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossBaseCharacter.BossBaseCharacter_C.Boss_Cutscene_Seen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABossBaseCharacter_C::Boss_Cutscene_Seen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "Boss_Cutscene_Seen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossBaseCharacter.BossBaseCharacter_C.Boss_Cutscene_Invalid
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABossBaseCharacter_C::Boss_Cutscene_Invalid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "Boss_Cutscene_Invalid");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossBaseCharacter.BossBaseCharacter_C.Boss_StartFight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABossBaseCharacter_C::Boss_StartFight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "Boss_StartFight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossBaseCharacter.BossBaseCharacter_C.OnCutsceneFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABossBaseCharacter_C::OnCutsceneFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "OnCutsceneFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossBaseCharacter.BossBaseCharacter_C.OnCutsceneStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABossBaseCharacter_C::OnCutsceneStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "OnCutsceneStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossBaseCharacter.BossBaseCharacter_C.Music_WormfishNotCalled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABossBaseCharacter_C::Music_WormfishNotCalled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "Music_WormfishNotCalled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossBaseCharacter.BossBaseCharacter_C.ResetBossStaggerCooldown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ResetBossStaggerCD                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABossBaseCharacter_C::ResetBossStaggerCooldown(bool ResetBossStaggerCD)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "ResetBossStaggerCooldown");

	Params::ABossBaseCharacter_C_ResetBossStaggerCooldown_Params Parms{};

	Parms.ResetBossStaggerCD = ResetBossStaggerCD;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.BossStaggerCooldown_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABossBaseCharacter_C::BossStaggerCooldown_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "BossStaggerCooldown_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossBaseCharacter.BossBaseCharacter_C.OnBossItemPickedUp_StormMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABossBaseCharacter_C::OnBossItemPickedUp_StormMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "OnBossItemPickedUp_StormMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossBaseCharacter.BossBaseCharacter_C.ExecuteUbergraph_BossBaseCharacter
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EBoss_Glimpse_Types     Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_18                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_BossSoundtrackType CallFunc_GetBossSoundtrackType_Soundtrack                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// enum class Enum_BossSoundtrackType CallFunc_GetBossSoundtrackType_Soundtrack_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor)
// class AActor*                      K2Node_Event_Killer_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShouldPlayDeathAnim                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 K2Node_Event_DamageType                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_Event_InstigatedBy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_BossSoundtrackType CallFunc_GetBossSoundtrackType_Soundtrack_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_19                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_CustomEvent_MontageToPlay                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_PlayRate                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_StartingPosition                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_StartingSection                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Damage                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_3                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_BossSoundtrackType CallFunc_GetBossSoundtrackType_Soundtrack_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_3             (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Event_DirectionToSource                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class UBoss_HealthBar_C*           CallFunc_GetBossHPUI_Boss_HealthBar                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBoss_HealthBar_C*           CallFunc_GetBossHPUI_Boss_HealthBar_1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_AttackIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetTimeSeconds_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NewParam                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBoss_HealthBar_C*           CallFunc_GetBossHPUI_Boss_HealthBar_2                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor)
// class AActor*                      K2Node_Event_Killer                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetGlimpseDropTransform_ReturnValue                     (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGlowing_Pickup_Boss_Glimpse_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_13                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALevelSequenceActor*         K2Node_DynamicCast_AsLevel_Sequence_Actor                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMyNamedInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetMyNamedInt_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameModeUtilInterface_C>CallFunc_GameModeUtils_SaveMapState_self_CastInput               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (ZeroConstructor, NoDestructor)
// class ALevelSequenceActor*         K2Node_DynamicCast_AsLevel_Sequence_Actor_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_14                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_StaggerNotifies                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_4                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_BossSoundtrackType CallFunc_GetBossSoundtrackType_Soundtrack_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_4             (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_20                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_SelectStaggerMontage_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_21                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_6               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_15                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_ResetBossStaggerCD                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_22                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_16                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_23                          (ZeroConstructor, NoDestructor)
// struct FTransform                  CallFunc_GetGlimpseDropTransform_ReturnValue_1                   (IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AConfigurable_Glowing_Pickup_StormMode_C*CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_RandomizedObject_C>K2Node_DynamicCast_AsBPI_Randomized_Object                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class URuneRandomizerComponent_C*  CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_17                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_RandomizedObject_C>K2Node_DynamicCast_AsBPI_Randomized_Object_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_24                          (ZeroConstructor, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_5                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormModeIsActive_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_StormModeSeeds      CallFunc_StormMode_GetSeeds_Seeds                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_6                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StormModeIsActive_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHRayTracing*               CallFunc_GetRayTracingSettings_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_Character_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Character                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_Character_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Character_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABossBaseCharacter_C::ExecuteUbergraph_BossBaseCharacter(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName Temp_name_Variable_1, bool CallFunc_IsValid_ReturnValue, enum class EBoss_Glimpse_Types Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, class FName K2Node_CustomEvent_NotifyName_18, enum class Enum_BossSoundtrackType CallFunc_GetBossSoundtrackType_Soundtrack, class FName Temp_name_Variable_2, bool K2Node_SwitchName_CmpSuccess, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName K2Node_CustomEvent_NotifyName_10, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, enum class Enum_BossSoundtrackType CallFunc_GetBossSoundtrackType_Soundtrack_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class AActor* K2Node_Event_Killer_1, bool K2Node_Event_bShouldPlayDeathAnim, float K2Node_Event_Damage, class UDamageType* K2Node_Event_DamageType, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_2, enum class Enum_BossSoundtrackType CallFunc_GetBossSoundtrackType_Soundtrack_2, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_2, class FName K2Node_CustomEvent_NotifyName_19, class UAnimMontage* K2Node_CustomEvent_MontageToPlay, float K2Node_CustomEvent_PlayRate, float K2Node_CustomEvent_StartingPosition, class FName K2Node_CustomEvent_StartingSection, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float K2Node_CustomEvent_Damage, float CallFunc_Add_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_3, bool K2Node_DynamicCast_bSuccess_3, enum class Enum_BossSoundtrackType CallFunc_GetBossSoundtrackType_Soundtrack_3, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FName K2Node_CustomEvent_NotifyName_11, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, const struct FVector& K2Node_Event_DirectionToSource, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, class UBoss_HealthBar_C* CallFunc_GetBossHPUI_Boss_HealthBar, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_2, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, class UBoss_HealthBar_C* CallFunc_GetBossHPUI_Boss_HealthBar_1, bool CallFunc_IsValid_ReturnValue_3, int32 K2Node_CustomEvent_AttackIndex, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class FName K2Node_CustomEvent_NewParam, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class FName K2Node_CustomEvent_NotifyName_12, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess_4, class UBoss_HealthBar_C* CallFunc_GetBossHPUI_Boss_HealthBar_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, class AActor* K2Node_Event_Killer, const struct FTransform& CallFunc_GetGlimpseDropTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AGlowing_Pickup_Boss_Glimpse_C* CallFunc_FinishSpawningActor_ReturnValue, class FName K2Node_CustomEvent_NotifyName_13, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class ALevelSequenceActor* K2Node_DynamicCast_AsLevel_Sequence_Actor, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_IsValid_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_GetMyNamedInt_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, int32 CallFunc_GetMyNamedInt_ReturnValue_1, bool CallFunc_Conv_IntToBool_ReturnValue_1, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, TScriptInterface<class IGameModeUtilInterface_C> CallFunc_GameModeUtils_SaveMapState_self_CastInput, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, class ALevelSequenceActor* K2Node_DynamicCast_AsLevel_Sequence_Actor_1, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsValid_ReturnValue_5, class FName K2Node_CustomEvent_NotifyName_14, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class FName K2Node_CustomEvent_StaggerNotifies, float CallFunc_SelectFloat_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_4, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_4, bool K2Node_DynamicCast_bSuccess_7, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_2, enum class Enum_BossSoundtrackType CallFunc_GetBossSoundtrackType_Soundtrack_4, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_4, bool K2Node_SwitchEnum_CmpSuccess_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, bool CallFunc_IsValid_ReturnValue_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UAnimMontage* CallFunc_SelectStaggerMontage_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_7, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_3, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_4, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_6, class FName Temp_name_Variable_3, class FName K2Node_CustomEvent_NotifyName_15, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool K2Node_Event_ResetBossStaggerCD, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, class FName K2Node_CustomEvent_NotifyName_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, const struct FTransform& CallFunc_GetGlimpseDropTransform_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class AConfigurable_Glowing_Pickup_StormMode_C* CallFunc_FinishSpawningActor_ReturnValue_1, TScriptInterface<class IBPI_RandomizedObject_C> K2Node_DynamicCast_AsBPI_Randomized_Object, bool K2Node_DynamicCast_bSuccess_8, class URuneRandomizerComponent_C* CallFunc_GetComponentByClass_ReturnValue, class FName K2Node_CustomEvent_NotifyName_17, TScriptInterface<class IBPI_RandomizedObject_C> K2Node_DynamicCast_AsBPI_Randomized_Object_1, bool K2Node_DynamicCast_bSuccess_9, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_24, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_5, bool K2Node_DynamicCast_bSuccess_10, bool CallFunc_StormModeIsActive_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess_11, const struct FStruct_StormModeSeeds& CallFunc_StormMode_GetSeeds_Seeds, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_6, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_6, bool K2Node_DynamicCast_bSuccess_12, int32 K2Node_Select_Default, bool CallFunc_StormModeIsActive_ReturnValue_1, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, class UDHRayTracing* CallFunc_GetRayTracingSettings_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character, bool K2Node_DynamicCast_bSuccess_13, TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character_1, bool K2Node_DynamicCast_bSuccess_14)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "ExecuteUbergraph_BossBaseCharacter");

	Params::ABossBaseCharacter_C_ExecuteUbergraph_BossBaseCharacter_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NotifyName_9 = K2Node_CustomEvent_NotifyName_9;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName_8 = K2Node_CustomEvent_NotifyName_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyName_7 = K2Node_CustomEvent_NotifyName_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName_6 = K2Node_CustomEvent_NotifyName_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_NotifyName_5 = K2Node_CustomEvent_NotifyName_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_NotifyName_18 = K2Node_CustomEvent_NotifyName_18;
	Parms.CallFunc_GetBossSoundtrackType_Soundtrack = CallFunc_GetBossSoundtrackType_Soundtrack;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_10 = K2Node_CustomEvent_NotifyName_10;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.CallFunc_GetBossSoundtrackType_Soundtrack_1 = CallFunc_GetBossSoundtrackType_Soundtrack_1;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.K2Node_Event_Killer_1 = K2Node_Event_Killer_1;
	Parms.K2Node_Event_bShouldPlayDeathAnim = K2Node_Event_bShouldPlayDeathAnim;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageType = K2Node_Event_DamageType;
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_2 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetBossSoundtrackType_Soundtrack_2 = CallFunc_GetBossSoundtrackType_Soundtrack_2;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_CustomEvent_NotifyName_19 = K2Node_CustomEvent_NotifyName_19;
	Parms.K2Node_CustomEvent_MontageToPlay = K2Node_CustomEvent_MontageToPlay;
	Parms.K2Node_CustomEvent_PlayRate = K2Node_CustomEvent_PlayRate;
	Parms.K2Node_CustomEvent_StartingPosition = K2Node_CustomEvent_StartingPosition;
	Parms.K2Node_CustomEvent_StartingSection = K2Node_CustomEvent_StartingSection;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_Damage = K2Node_CustomEvent_Damage;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.CallFunc_GetGameInstance_ReturnValue_3 = CallFunc_GetGameInstance_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_3 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetBossSoundtrackType_Soundtrack_3 = CallFunc_GetBossSoundtrackType_Soundtrack_3;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_3 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.K2Node_CustomEvent_NotifyName_11 = K2Node_CustomEvent_NotifyName_11;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_Event_DirectionToSource = K2Node_Event_DirectionToSource;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_GetBossHPUI_Boss_HealthBar = CallFunc_GetBossHPUI_Boss_HealthBar;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1;
	Parms.CallFunc_GetBossHPUI_Boss_HealthBar_1 = CallFunc_GetBossHPUI_Boss_HealthBar_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CustomEvent_AttackIndex = K2Node_CustomEvent_AttackIndex;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetTimeSeconds_ReturnValue = CallFunc_GetTimeSeconds_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.K2Node_CustomEvent_NewParam = K2Node_CustomEvent_NewParam;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.K2Node_CustomEvent_NotifyName_12 = K2Node_CustomEvent_NotifyName_12;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetBossHPUI_Boss_HealthBar_2 = CallFunc_GetBossHPUI_Boss_HealthBar_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.K2Node_Event_Killer = K2Node_Event_Killer;
	Parms.CallFunc_GetGlimpseDropTransform_ReturnValue = CallFunc_GetGlimpseDropTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_13 = K2Node_CustomEvent_NotifyName_13;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsLevel_Sequence_Actor = K2Node_DynamicCast_AsLevel_Sequence_Actor;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetMyNamedInt_ReturnValue = CallFunc_GetMyNamedInt_ReturnValue;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.CallFunc_GetMyNamedInt_ReturnValue_1 = CallFunc_GetMyNamedInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToBool_ReturnValue_1 = CallFunc_Conv_IntToBool_ReturnValue_1;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.CallFunc_GameModeUtils_SaveMapState_self_CastInput = CallFunc_GameModeUtils_SaveMapState_self_CastInput;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_1 = CallFunc_GetCharacterAs0_Base_As0_Base_1;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_18 = K2Node_CreateDelegate_OutputDelegate_18;
	Parms.K2Node_DynamicCast_AsLevel_Sequence_Actor_1 = K2Node_DynamicCast_AsLevel_Sequence_Actor_1;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_CustomEvent_NotifyName_14 = K2Node_CustomEvent_NotifyName_14;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CustomEvent_StaggerNotifies = K2Node_CustomEvent_StaggerNotifies;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4;
	Parms.CallFunc_GetGameInstance_ReturnValue_4 = CallFunc_GetGameInstance_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_4 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_4;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_2 = CallFunc_GetCharacterAs0_Base_As0_Base_2;
	Parms.CallFunc_GetBossSoundtrackType_Soundtrack_4 = CallFunc_GetBossSoundtrackType_Soundtrack_4;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_4 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_4;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_19 = K2Node_CreateDelegate_OutputDelegate_19;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_20 = K2Node_CreateDelegate_OutputDelegate_20;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_SelectStaggerMontage_ReturnValue = CallFunc_SelectStaggerMontage_ReturnValue;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_3 = CallFunc_GetCharacterAs0_Base_As0_Base_3;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5;
	Parms.CallFunc_GetSequencePlayer_ReturnValue = CallFunc_GetSequencePlayer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_21 = K2Node_CreateDelegate_OutputDelegate_21;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_6 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_6;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.K2Node_CustomEvent_NotifyName_15 = K2Node_CustomEvent_NotifyName_15;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_Event_ResetBossStaggerCD = K2Node_Event_ResetBossStaggerCD;
	Parms.K2Node_CreateDelegate_OutputDelegate_22 = K2Node_CreateDelegate_OutputDelegate_22;
	Parms.K2Node_CustomEvent_NotifyName_16 = K2Node_CustomEvent_NotifyName_16;
	Parms.K2Node_CreateDelegate_OutputDelegate_23 = K2Node_CreateDelegate_OutputDelegate_23;
	Parms.CallFunc_GetGlimpseDropTransform_ReturnValue_1 = CallFunc_GetGlimpseDropTransform_ReturnValue_1;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPI_Randomized_Object = K2Node_DynamicCast_AsBPI_Randomized_Object;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_17 = K2Node_CustomEvent_NotifyName_17;
	Parms.K2Node_DynamicCast_AsBPI_Randomized_Object_1 = K2Node_DynamicCast_AsBPI_Randomized_Object_1;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_GetGameInstance_ReturnValue_5 = CallFunc_GetGameInstance_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_24 = K2Node_CreateDelegate_OutputDelegate_24;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_5 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_5;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_StormModeIsActive_ReturnValue = CallFunc_StormModeIsActive_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_StormMode_GetSeeds_Seeds = CallFunc_StormMode_GetSeeds_Seeds;
	Parms.CallFunc_GetGameInstance_ReturnValue_6 = CallFunc_GetGameInstance_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_6 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_6;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_StormModeIsActive_ReturnValue_1 = CallFunc_StormModeIsActive_ReturnValue_1;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetRayTracingSettings_ReturnValue = CallFunc_GetRayTracingSettings_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_1 = CallFunc_GetPlayerCharacter_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Character = K2Node_DynamicCast_AsBPI_Storm_Mode_Character;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Character_1 = K2Node_DynamicCast_AsBPI_Storm_Mode_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.InterruptCurrentAttack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DelayBeforeInterrupt                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABossBaseCharacter_C::InterruptCurrentAttack__DelegateSignature(float DelayBeforeInterrupt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "InterruptCurrentAttack__DelegateSignature");

	Params::ABossBaseCharacter_C_InterruptCurrentAttack__DelegateSignature_Params Parms{};

	Parms.DelayBeforeInterrupt = DelayBeforeInterrupt;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossBaseCharacter.BossBaseCharacter_C.OnBossRecoveredFromStagger__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABossBaseCharacter_C::OnBossRecoveredFromStagger__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "OnBossRecoveredFromStagger__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossBaseCharacter.BossBaseCharacter_C.OnBossStaggered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABossBaseCharacter_C::OnBossStaggered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "OnBossStaggered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossBaseCharacter.BossBaseCharacter_C.TeleportPlayerToLarva__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABossBaseCharacter_C::TeleportPlayerToLarva__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "TeleportPlayerToLarva__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossBaseCharacter.BossBaseCharacter_C.BossDeath__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABossBaseCharacter_C::BossDeath__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossBaseCharacter_C", "BossDeath__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


