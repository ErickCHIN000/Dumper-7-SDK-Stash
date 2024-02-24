#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GameplayGM.GameplayGM_C
// (Actor)

class UClass* AGameplayGM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayGM_C");

	return Clss;
}


// GameplayGM_C GameplayGM.Default__GameplayGM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGameplayGM_C* AGameplayGM_C::GetDefaultObj()
{
	static class AGameplayGM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGameplayGM_C*>(AGameplayGM_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayGM.GameplayGM_C.GameModeUtils_GetArbNameForLevelFromSaveGame
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        LevelName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ArbName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class FName                        Local_ArbName                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_LevelName                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// struct FMapSaveState               CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Set_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)

bool AGameplayGM_C::GameModeUtils_GetArbNameForLevelFromSaveGame(class FName LevelName, class FName ArbName, class FName Local_ArbName, class FName Local_LevelName, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const struct FMapSaveState& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Set_Contains_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "GameModeUtils_GetArbNameForLevelFromSaveGame");

	Params::AGameplayGM_C_GameModeUtils_GetArbNameForLevelFromSaveGame_Params Parms{};

	Parms.LevelName = LevelName;
	Parms.ArbName = ArbName;
	Parms.Local_ArbName = Local_ArbName;
	Parms.Local_LevelName = Local_LevelName;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Set_Contains_ReturnValue = CallFunc_Set_Contains_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayGM.GameplayGM_C.GameModeUtils_IsAbritraryNameInSet
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsInSet                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Set_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayGM_C::GameModeUtils_IsAbritraryNameInSet(class FName Name, bool* bIsInSet, bool CallFunc_Set_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "GameModeUtils_IsAbritraryNameInSet");

	Params::AGameplayGM_C_GameModeUtils_IsAbritraryNameInSet_Params Parms{};

	Parms.Name = Name;
	Parms.CallFunc_Set_Contains_ReturnValue = CallFunc_Set_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsInSet != nullptr)
		*bIsInSet = Parms.bIsInSet;

}


// Function GameplayGM.GameplayGM_C.GameModeUtils_RemoveAbritraryNameFromChangedSet
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccessful                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Set_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayGM_C::GameModeUtils_RemoveAbritraryNameFromChangedSet(class FName Name, bool* bSuccessful, bool CallFunc_Set_Remove_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "GameModeUtils_RemoveAbritraryNameFromChangedSet");

	Params::AGameplayGM_C_GameModeUtils_RemoveAbritraryNameFromChangedSet_Params Parms{};

	Parms.Name = Name;
	Parms.CallFunc_Set_Remove_ReturnValue = CallFunc_Set_Remove_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccessful != nullptr)
		*bSuccessful = Parms.bSuccessful;

}


// Function GameplayGM.GameplayGM_C.SpawnLuteAudioComponent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAmbientSound*               CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::SpawnLuteAudioComponent(bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AAmbientSound* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "SpawnLuteAudioComponent");

	Params::AGameplayGM_C_SpawnLuteAudioComponent_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult = CallFunc_K2_SetWorldTransform_SweepHitResult;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.PlayInitialLuteSong
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::PlayInitialLuteSong()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "PlayInitialLuteSong");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.RemoveLuteIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayGM_C::RemoveLuteIndicator(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "RemoveLuteIndicator");

	Params::AGameplayGM_C_RemoveLuteIndicator_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.LuteIndicator_PrevMusic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayGM_C::LuteIndicator_PrevMusic(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "LuteIndicator_PrevMusic");

	Params::AGameplayGM_C_LuteIndicator_PrevMusic_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.LuteIndicator_NextMusic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayGM_C::LuteIndicator_NextMusic(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "LuteIndicator_NextMusic");

	Params::AGameplayGM_C_LuteIndicator_NextMusic_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.SpawnLuteIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanSpawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_LutePrompt_C*            CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::SpawnLuteIndicator(bool CanSpawn, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUI_LutePrompt_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "SpawnLuteIndicator");

	Params::AGameplayGM_C_SpawnLuteIndicator_Params Parms{};

	Parms.CanSpawn = CanSpawn;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.CanHaveIndicator
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanChange                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayGM_C::CanHaveIndicator(bool* CanChange, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "CanHaveIndicator");

	Params::AGameplayGM_C_CanHaveIndicator_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanChange != nullptr)
		*CanChange = Parms.CanChange;

}


// Function GameplayGM.GameplayGM_C.SetLuteAnimPlayRate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class USoundBase*, float>     Local_PlayRates                                                  (Edit, BlueprintVisible)
// TMap<class USoundBase*, float>     K2Node_MakeVariable_MakeVariableOutput                           (None)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_0_Base_GetMesh_Mesh                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::SetLuteAnimPlayRate(TMap<class USoundBase*, float> Local_PlayRates, TMap<class USoundBase*, float> K2Node_MakeVariable_MakeVariableOutput, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_0_Base_GetMesh_Mesh, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "SetLuteAnimPlayRate");

	Params::AGameplayGM_C_SetLuteAnimPlayRate_Params Parms{};

	Parms.Local_PlayRates = Local_PlayRates;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_0_Base_GetMesh_Mesh = CallFunc_0_Base_GetMesh_Mesh;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.UpdateLuteMusic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  CallFunc_GetImperviousLuteMusic_MaxFam_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class USoundBase*                  CallFunc_GetClockworkLuteMusic_MaxFam_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  CallFunc_GetSimpleLuteMusic_MaxFam_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::UpdateLuteMusic(bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class USoundBase* CallFunc_GetImperviousLuteMusic_MaxFam_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class USoundBase* CallFunc_GetClockworkLuteMusic_MaxFam_ReturnValue, class USoundBase* CallFunc_GetSimpleLuteMusic_MaxFam_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "UpdateLuteMusic");

	Params::AGameplayGM_C_UpdateLuteMusic_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetImperviousLuteMusic_MaxFam_ReturnValue = CallFunc_GetImperviousLuteMusic_MaxFam_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetClockworkLuteMusic_MaxFam_ReturnValue = CallFunc_GetClockworkLuteMusic_MaxFam_ReturnValue;
	Parms.CallFunc_GetSimpleLuteMusic_MaxFam_ReturnValue = CallFunc_GetSimpleLuteMusic_MaxFam_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.PlayPrevLuteMusic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayGM_C::PlayPrevLuteMusic(bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1, bool K2Node_SwitchInteger_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "PlayPrevLuteMusic");

	Params::AGameplayGM_C_PlayPrevLuteMusic_Params Parms{};

	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_2 = K2Node_SwitchInteger_CmpSuccess_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.PlayNextLuteMusic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayGM_C::PlayNextLuteMusic(bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1, bool K2Node_SwitchInteger_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "PlayNextLuteMusic");

	Params::AGameplayGM_C_PlayNextLuteMusic_Params Parms{};

	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_2 = K2Node_SwitchInteger_CmpSuccess_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.CanChangeLuteMusic
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanChange                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayGM_C::CanChangeLuteMusic(bool* CanChange, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "CanChangeLuteMusic");

	Params::AGameplayGM_C_CanChangeLuteMusic_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanChange != nullptr)
		*CanChange = Parms.CanChange;

}


// Function GameplayGM.GameplayGM_C.GetClockworkLuteMusic_MaxFam
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USoundBase*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USoundBase* AGameplayGM_C::GetClockworkLuteMusic_MaxFam(int32 Temp_int_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, class USoundBase* Temp_object_Variable_2, class USoundBase* Temp_object_Variable_3, class USoundBase* Temp_object_Variable_4, class USoundBase* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "GetClockworkLuteMusic_MaxFam");

	Params::AGameplayGM_C_GetClockworkLuteMusic_MaxFam_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayGM.GameplayGM_C.GetImperviousLuteMusic_MaxFam
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USoundBase*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_8                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_9                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USoundBase* AGameplayGM_C::GetImperviousLuteMusic_MaxFam(int32 Temp_int_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, class USoundBase* Temp_object_Variable_2, class USoundBase* Temp_object_Variable_3, class USoundBase* Temp_object_Variable_4, class USoundBase* Temp_object_Variable_5, class USoundBase* Temp_object_Variable_6, class USoundBase* Temp_object_Variable_7, class USoundBase* Temp_object_Variable_8, class USoundBase* Temp_object_Variable_9, class USoundBase* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "GetImperviousLuteMusic_MaxFam");

	Params::AGameplayGM_C_GetImperviousLuteMusic_MaxFam_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.Temp_object_Variable_8 = Temp_object_Variable_8;
	Parms.Temp_object_Variable_9 = Temp_object_Variable_9;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayGM.GameplayGM_C.GetSimpleLuteMusic_MaxFam
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USoundBase*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USoundBase* AGameplayGM_C::GetSimpleLuteMusic_MaxFam(int32 Temp_int_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, class USoundBase* Temp_object_Variable_2, class USoundBase* Temp_object_Variable_3, class USoundBase* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "GetSimpleLuteMusic_MaxFam");

	Params::AGameplayGM_C_GetSimpleLuteMusic_MaxFam_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayGM.GameplayGM_C.GetClockworkLuteMusic
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_8                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_9                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USoundBase* AGameplayGM_C::GetClockworkLuteMusic(int32 Index, int32 Temp_int_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, class USoundBase* Temp_object_Variable_2, class USoundBase* Temp_object_Variable_3, class USoundBase* Temp_object_Variable_4, class USoundBase* Temp_object_Variable_5, class USoundBase* Temp_object_Variable_6, class USoundBase* Temp_object_Variable_7, class USoundBase* Temp_object_Variable_8, class USoundBase* Temp_object_Variable_9, class USoundBase* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "GetClockworkLuteMusic");

	Params::AGameplayGM_C_GetClockworkLuteMusic_Params Parms{};

	Parms.Index = Index;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.Temp_object_Variable_8 = Temp_object_Variable_8;
	Parms.Temp_object_Variable_9 = Temp_object_Variable_9;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayGM.GameplayGM_C.GetImperviousLuteMusic
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_8                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_9                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USoundBase* AGameplayGM_C::GetImperviousLuteMusic(int32 Index, int32 Temp_int_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, class USoundBase* Temp_object_Variable_2, class USoundBase* Temp_object_Variable_3, class USoundBase* Temp_object_Variable_4, class USoundBase* Temp_object_Variable_5, class USoundBase* Temp_object_Variable_6, class USoundBase* Temp_object_Variable_7, class USoundBase* Temp_object_Variable_8, class USoundBase* Temp_object_Variable_9, class USoundBase* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "GetImperviousLuteMusic");

	Params::AGameplayGM_C_GetImperviousLuteMusic_Params Parms{};

	Parms.Index = Index;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.Temp_object_Variable_8 = Temp_object_Variable_8;
	Parms.Temp_object_Variable_9 = Temp_object_Variable_9;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayGM.GameplayGM_C.GetSimpleLuteMusic
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_8                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_9                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USoundBase* AGameplayGM_C::GetSimpleLuteMusic(int32 Index, int32 Temp_int_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, class USoundBase* Temp_object_Variable_2, class USoundBase* Temp_object_Variable_3, class USoundBase* Temp_object_Variable_4, class USoundBase* Temp_object_Variable_5, class USoundBase* Temp_object_Variable_6, class USoundBase* Temp_object_Variable_7, class USoundBase* Temp_object_Variable_8, class USoundBase* Temp_object_Variable_9, class USoundBase* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "GetSimpleLuteMusic");

	Params::AGameplayGM_C_GetSimpleLuteMusic_Params Parms{};

	Parms.Index = Index;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.Temp_object_Variable_8 = Temp_object_Variable_8;
	Parms.Temp_object_Variable_9 = Temp_object_Variable_9;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayGM.GameplayGM_C.GetLuteTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
// enum class Enum_LuteType           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FTransform                  K2Node_Select_Default                                            (IsPlainOldData, NoDestructor)

struct FTransform AGameplayGM_C::GetLuteTransform(enum class Enum_LuteType Temp_byte_Variable, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "GetLuteTransform");

	Params::AGameplayGM_C_GetLuteTransform_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayGM.GameplayGM_C.LuteAtMaxFam?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsAtMax                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              FamClamped                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetItemFamiliarity_Value                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayGM_C::LuteAtMaxFam_(class FName ID, bool* IsAtMax, int32* FamClamped, int32 CallFunc_GetItemFamiliarity_Value, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "LuteAtMaxFam?");

	Params::AGameplayGM_C_LuteAtMaxFam__Params Parms{};

	Parms.ID = ID;
	Parms.CallFunc_GetItemFamiliarity_Value = CallFunc_GetItemFamiliarity_Value;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsAtMax != nullptr)
		*IsAtMax = Parms.IsAtMax;

	if (FamClamped != nullptr)
		*FamClamped = Parms.FamClamped;

}


// Function GameplayGM.GameplayGM_C.SetLuteRelativeTransform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorRelativeTransform_SweepHitResult             (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AGameplayGM_C::SetLuteRelativeTransform(bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FHitResult& CallFunc_K2_SetActorRelativeTransform_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "SetLuteRelativeTransform");

	Params::AGameplayGM_C_SetLuteRelativeTransform_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_K2_SetActorRelativeTransform_SweepHitResult = CallFunc_K2_SetActorRelativeTransform_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.SelectLuteSoundCue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Local_LuteFamiliarity                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  CallFunc_GetClockworkLuteMusic_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  CallFunc_GetImperviousLuteMusic_MaxFam_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  CallFunc_GetSimpleLuteMusic_MaxFam_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LuteAtMaxFam__IsAtMax                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_LuteAtMaxFam__FamClamped                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LuteAtMaxFam__IsAtMax_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_LuteAtMaxFam__FamClamped_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  CallFunc_GetClockworkLuteMusic_MaxFam_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LuteAtMaxFam__IsAtMax_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_LuteAtMaxFam__FamClamped_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  CallFunc_GetSimpleLuteMusic_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  CallFunc_GetImperviousLuteMusic_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::SelectLuteSoundCue(int32 Local_LuteFamiliarity, int32 CallFunc_RandomIntegerInRange_ReturnValue, class USoundBase* CallFunc_GetClockworkLuteMusic_ReturnValue, class USoundBase* CallFunc_GetImperviousLuteMusic_MaxFam_ReturnValue, class USoundBase* CallFunc_GetSimpleLuteMusic_MaxFam_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, bool CallFunc_LuteAtMaxFam__IsAtMax, int32 CallFunc_LuteAtMaxFam__FamClamped, bool CallFunc_LuteAtMaxFam__IsAtMax_1, int32 CallFunc_LuteAtMaxFam__FamClamped_1, class USoundBase* CallFunc_GetClockworkLuteMusic_MaxFam_ReturnValue, bool CallFunc_LuteAtMaxFam__IsAtMax_2, int32 CallFunc_LuteAtMaxFam__FamClamped_2, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_RandomIntegerInRange_ReturnValue_2, class USoundBase* CallFunc_GetSimpleLuteMusic_ReturnValue, class USoundBase* CallFunc_GetImperviousLuteMusic_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "SelectLuteSoundCue");

	Params::AGameplayGM_C_SelectLuteSoundCue_Params Parms{};

	Parms.Local_LuteFamiliarity = Local_LuteFamiliarity;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_GetClockworkLuteMusic_ReturnValue = CallFunc_GetClockworkLuteMusic_ReturnValue;
	Parms.CallFunc_GetImperviousLuteMusic_MaxFam_ReturnValue = CallFunc_GetImperviousLuteMusic_MaxFam_ReturnValue;
	Parms.CallFunc_GetSimpleLuteMusic_MaxFam_ReturnValue = CallFunc_GetSimpleLuteMusic_MaxFam_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_1 = CallFunc_RandomIntegerInRange_ReturnValue_1;
	Parms.CallFunc_LuteAtMaxFam__IsAtMax = CallFunc_LuteAtMaxFam__IsAtMax;
	Parms.CallFunc_LuteAtMaxFam__FamClamped = CallFunc_LuteAtMaxFam__FamClamped;
	Parms.CallFunc_LuteAtMaxFam__IsAtMax_1 = CallFunc_LuteAtMaxFam__IsAtMax_1;
	Parms.CallFunc_LuteAtMaxFam__FamClamped_1 = CallFunc_LuteAtMaxFam__FamClamped_1;
	Parms.CallFunc_GetClockworkLuteMusic_MaxFam_ReturnValue = CallFunc_GetClockworkLuteMusic_MaxFam_ReturnValue;
	Parms.CallFunc_LuteAtMaxFam__IsAtMax_2 = CallFunc_LuteAtMaxFam__IsAtMax_2;
	Parms.CallFunc_LuteAtMaxFam__FamClamped_2 = CallFunc_LuteAtMaxFam__FamClamped_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_2 = CallFunc_RandomIntegerInRange_ReturnValue_2;
	Parms.CallFunc_GetSimpleLuteMusic_ReturnValue = CallFunc_GetSimpleLuteMusic_ReturnValue;
	Parms.CallFunc_GetImperviousLuteMusic_ReturnValue = CallFunc_GetImperviousLuteMusic_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.StopLuteAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayGM_C::StopLuteAudio(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "StopLuteAudio");

	Params::AGameplayGM_C_StopLuteAudio_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.DualSense_LuteMusic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ControllerAudio_C*       CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::DualSense_LuteMusic(class USoundBase* Sound, uint8 CallFunc_MakeLiteralByte_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ControllerAudio_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "DualSense_LuteMusic");

	Params::AGameplayGM_C_DualSense_LuteMusic_Params Parms{};

	Parms.Sound = Sound;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.DualSense_FogStart
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ControllerAudio_C*       CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::DualSense_FogStart(uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ControllerAudio_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "DualSense_FogStart");

	Params::AGameplayGM_C_DualSense_FogStart_Params Parms{};

	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.TeleportCharacterOnSpawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Local_Transform                                                  (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                Local_0Base                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_ProjectVectorOnToPlane_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorLocationAndRotation_SweepHitResult           (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocationAndRotation_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TransformToString_ReturnValue                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_WantsToPlayFromHereOrCameraLocation_bWantsSpecificSpawnTransform(ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_WantsToPlayFromHereOrCameraLocation_Transform           (IsPlainOldData, NoDestructor)
// bool                               CallFunc_WantsToPlayFromHereOrCameraLocation_bWantsSpecificSpawnTransform_1(ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_WantsToPlayFromHereOrCameraLocation_Transform_1         (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorLocationAndRotation_SweepHitResult_1         (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocationAndRotation_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCheckpointNameValid_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayGM_C::TeleportCharacterOnSpawn(const struct FTransform& Local_Transform, class AZero_Base_C* Local_0Base, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_ProjectVectorOnToPlane_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_TransformToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue_1, bool CallFunc_WantsToPlayFromHereOrCameraLocation_bWantsSpecificSpawnTransform, const struct FTransform& CallFunc_WantsToPlayFromHereOrCameraLocation_Transform, bool CallFunc_WantsToPlayFromHereOrCameraLocation_bWantsSpecificSpawnTransform_1, const struct FTransform& CallFunc_WantsToPlayFromHereOrCameraLocation_Transform_1, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult_1, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue_1, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsCheckpointNameValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "TeleportCharacterOnSpawn");

	Params::AGameplayGM_C_TeleportCharacterOnSpawn_Params Parms{};

	Parms.Local_Transform = Local_Transform;
	Parms.Local_0Base = Local_0Base;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_ProjectVectorOnToPlane_ReturnValue = CallFunc_ProjectVectorOnToPlane_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_K2_SetActorLocationAndRotation_SweepHitResult = CallFunc_K2_SetActorLocationAndRotation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocationAndRotation_ReturnValue = CallFunc_K2_SetActorLocationAndRotation_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_TransformToString_ReturnValue = CallFunc_Conv_TransformToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue_1 = CallFunc_Conv_VectorToRotator_ReturnValue_1;
	Parms.CallFunc_WantsToPlayFromHereOrCameraLocation_bWantsSpecificSpawnTransform = CallFunc_WantsToPlayFromHereOrCameraLocation_bWantsSpecificSpawnTransform;
	Parms.CallFunc_WantsToPlayFromHereOrCameraLocation_Transform = CallFunc_WantsToPlayFromHereOrCameraLocation_Transform;
	Parms.CallFunc_WantsToPlayFromHereOrCameraLocation_bWantsSpecificSpawnTransform_1 = CallFunc_WantsToPlayFromHereOrCameraLocation_bWantsSpecificSpawnTransform_1;
	Parms.CallFunc_WantsToPlayFromHereOrCameraLocation_Transform_1 = CallFunc_WantsToPlayFromHereOrCameraLocation_Transform_1;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_K2_SetActorLocationAndRotation_SweepHitResult_1 = CallFunc_K2_SetActorLocationAndRotation_SweepHitResult_1;
	Parms.CallFunc_K2_SetActorLocationAndRotation_ReturnValue_1 = CallFunc_K2_SetActorLocationAndRotation_ReturnValue_1;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsCheckpointNameValid_ReturnValue = CallFunc_IsCheckpointNameValid_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.MapState_ResetSaveFile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FName, struct FMapSaveState>Temp_name_Variable                                               (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FName, float>           Temp_name_Variable_1                                             (None)
// TMap<class FName, struct FEnemySaveState>Temp_name_Variable_2                                             (None)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetMapSaveSlotName_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class UDHGameInstance*             K2Node_DynamicCast_AsDHGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DHSaveGameToSlot_Asynch_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayGM_C::MapState_ResetSaveFile(TMap<class FName, struct FMapSaveState> Temp_name_Variable, bool CallFunc_IsValid_ReturnValue, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, TMap<class FName, float> Temp_name_Variable_1, TMap<class FName, struct FEnemySaveState> Temp_name_Variable_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, const class FString& CallFunc_GetMapSaveSlotName_ReturnValue, class UDHGameInstance* K2Node_DynamicCast_AsDHGame_Instance, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, bool CallFunc_DHSaveGameToSlot_Asynch_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "MapState_ResetSaveFile");

	Params::AGameplayGM_C_MapState_ResetSaveFile_Params Parms{};

	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetMapSaveSlotName_ReturnValue = CallFunc_GetMapSaveSlotName_ReturnValue;
	Parms.K2Node_DynamicCast_AsDHGame_Instance = K2Node_DynamicCast_AsDHGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_DHSaveGameToSlot_Asynch_ReturnValue = CallFunc_DHSaveGameToSlot_Asynch_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.DH_ClearAllFamiliarity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayGM_C::DH_ClearAllFamiliarity(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "DH_ClearAllFamiliarity");

	Params::AGameplayGM_C_DH_ClearAllFamiliarity_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.GetWaifuReference
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInfoInstance_C*         GameInstance                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Waifu                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class AWaifuNPC_C>  CallFunc_Map_Find_Value_1                                        (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWaifuNPC_C*                 K2Node_DynamicCast_AsWaifu_NPC                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AGameplayGM_C::GetWaifuReference(class UGameInfoInstance_C* GameInstance, class AActor** Waifu, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetDisplayName_ReturnValue, class FName Temp_name_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TSoftObjectPtr<class AWaifuNPC_C> CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class AWaifuNPC_C* K2Node_DynamicCast_AsWaifu_NPC, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "GetWaifuReference");

	Params::AGameplayGM_C_GetWaifuReference_Params Parms{};

	Parms.GameInstance = GameInstance;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsWaifu_NPC = K2Node_DynamicCast_AsWaifu_NPC;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Waifu != nullptr)
		*Waifu = Parms.Waifu;

	return Parms.ReturnValue;

}


// Function GameplayGM.GameplayGM_C.DebugStartingCheckpoint
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FServerSaveFile             ServerSaveFile                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TransformToString_ReturnValue                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)

void AGameplayGM_C::DebugStartingCheckpoint(struct FServerSaveFile& ServerSaveFile, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_TransformToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "DebugStartingCheckpoint");

	Params::AGameplayGM_C_DebugStartingCheckpoint_Params Parms{};

	Parms.ServerSaveFile = ServerSaveFile;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Conv_TransformToString_ReturnValue = CallFunc_Conv_TransformToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.DH_ResetCutscenes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::DH_ResetCutscenes(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "DH_ResetCutscenes");

	Params::AGameplayGM_C_DH_ResetCutscenes_Params Parms{};

	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.GetCheckpointsSaveSlotName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

class FString AGameplayGM_C::GetCheckpointsSaveSlotName(const class FString& CallFunc_Concat_StrStr_ReturnValue, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "GetCheckpointsSaveSlotName");

	Params::AGameplayGM_C_GetCheckpointsSaveSlotName_Params Parms{};

	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayGM.GameplayGM_C.AddStatusIconGlow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              IconID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Remove                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHUD*                        CallFunc_GetHUD_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AYourHUD_C*                  K2Node_DynamicCast_AsYour_HUD                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayGM_C::AddStatusIconGlow(int32 IconID, bool Remove, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class AHUD* CallFunc_GetHUD_ReturnValue, class AYourHUD_C* K2Node_DynamicCast_AsYour_HUD, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "AddStatusIconGlow");

	Params::AGameplayGM_C_AddStatusIconGlow_Params Parms{};

	Parms.IconID = IconID;
	Parms.Remove = Remove;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetHUD_ReturnValue = CallFunc_GetHUD_ReturnValue;
	Parms.K2Node_DynamicCast_AsYour_HUD = K2Node_DynamicCast_AsYour_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.FastTravel_FadeGlands
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Amount                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_Barbarous_GetCathedralGland_Mesh                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_Barbarous_GetFireGland_Mesh                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface_2                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_Barbarous_GetCryptGland_Mesh                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayGM_C::FastTravel_FadeGlands(float Amount, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class UStaticMeshComponent* CallFunc_Barbarous_GetCathedralGland_Mesh, class UStaticMeshComponent* CallFunc_Barbarous_GetFireGland_Mesh, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface_2, bool K2Node_DynamicCast_bSuccess_2, class UStaticMeshComponent* CallFunc_Barbarous_GetCryptGland_Mesh, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "FastTravel_FadeGlands");

	Params::AGameplayGM_C_FastTravel_FadeGlands_Params Parms{};

	Parms.Amount = Amount;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface_1 = K2Node_DynamicCast_AsCharacter_Util_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Barbarous_GetCathedralGland_Mesh = CallFunc_Barbarous_GetCathedralGland_Mesh;
	Parms.CallFunc_Barbarous_GetFireGland_Mesh = CallFunc_Barbarous_GetFireGland_Mesh;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface_2 = K2Node_DynamicCast_AsCharacter_Util_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Barbarous_GetCryptGland_Mesh = CallFunc_Barbarous_GetCryptGland_Mesh;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.FastTravel_StopFadeBallistazooka
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayGM_C::FastTravel_StopFadeBallistazooka(class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "FastTravel_StopFadeBallistazooka");

	Params::AGameplayGM_C_FastTravel_StopFadeBallistazooka_Params Parms{};

	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.FastTravel_MeshVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNewVisibility                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_0_Base_GetMesh_Mesh                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::FastTravel_MeshVisibility(bool bNewVisibility, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_0_Base_GetMesh_Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "FastTravel_MeshVisibility");

	Params::AGameplayGM_C_FastTravel_MeshVisibility_Params Parms{};

	Parms.bNewVisibility = bNewVisibility;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_0_Base_GetMesh_Mesh = CallFunc_0_Base_GetMesh_Mesh;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.PlayerFade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ParameterValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_0_Base_GetMesh_Mesh                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::PlayerFade(float ParameterValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class USkeletalMeshComponent* CallFunc_0_Base_GetMesh_Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "PlayerFade");

	Params::AGameplayGM_C_PlayerFade_Params Parms{};

	Parms.ParameterValue = ParameterValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface_1 = K2Node_DynamicCast_AsCharacter_Util_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_0_Base_GetMesh_Mesh = CallFunc_0_Base_GetMesh_Mesh;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.DH_FreezeMe
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::DH_FreezeMe()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "DH_FreezeMe");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.DH_TestHeal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyDamage_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::DH_TestHeal(class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, float CallFunc_ApplyDamage_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "DH_TestHeal");

	Params::AGameplayGM_C_DH_TestHeal_Params Parms{};

	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_ApplyDamage_ReturnValue = CallFunc_ApplyDamage_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.DH_ShowEnemyHP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_3                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_4                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_EnemyHPVisibility  CallFunc_GetEnemyHPVis_Visibility                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayGM_C::DH_ShowEnemyHP(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_3, bool K2Node_DynamicCast_bSuccess_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_4, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_4, bool K2Node_DynamicCast_bSuccess_4, enum class Enum_EnemyHPVisibility CallFunc_GetEnemyHPVis_Visibility, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "DH_ShowEnemyHP");

	Params::AGameplayGM_C_DH_ShowEnemyHP_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_2 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetGameInstance_ReturnValue_3 = CallFunc_GetGameInstance_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_3 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetGameInstance_ReturnValue_4 = CallFunc_GetGameInstance_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_4 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetEnemyHPVis_Visibility = CallFunc_GetEnemyHPVis_Visibility;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.OverrideStatusIconStackNum
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              IconID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              StackNum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHUD*                        CallFunc_GetHUD_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AYourHUD_C*                  K2Node_DynamicCast_AsYour_HUD                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayGM_C::OverrideStatusIconStackNum(int32 IconID, int32 StackNum, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class AHUD* CallFunc_GetHUD_ReturnValue, class AYourHUD_C* K2Node_DynamicCast_AsYour_HUD, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "OverrideStatusIconStackNum");

	Params::AGameplayGM_C_OverrideStatusIconStackNum_Params Parms{};

	Parms.IconID = IconID;
	Parms.StackNum = StackNum;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetHUD_ReturnValue = CallFunc_GetHUD_ReturnValue;
	Parms.K2Node_DynamicCast_AsYour_HUD = K2Node_DynamicCast_AsYour_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.DH_UnlockAllTutorials
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayGM_C::DH_UnlockAllTutorials(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "DH_UnlockAllTutorials");

	Params::AGameplayGM_C_DH_UnlockAllTutorials_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.DH_UnlockAllFastTravel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                Local_Waifus                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::DH_UnlockAllFastTravel(const TArray<class FName>& Local_Waifus, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "DH_UnlockAllFastTravel");

	Params::AGameplayGM_C_DH_UnlockAllFastTravel_Params Parms{};

	Parms.Local_Waifus = Local_Waifus;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.FastTravel_AnimAfterTeleport
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::FastTravel_AnimAfterTeleport(class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "FastTravel_AnimAfterTeleport");

	Params::AGameplayGM_C_FastTravel_AnimAfterTeleport_Params Parms{};

	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.FastTravel_TeleportPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStartingCheckpointTransform_bIsTravel                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayGM_C::FastTravel_TeleportPlayer(class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, bool CallFunc_SetStartingCheckpointTransform_bIsTravel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "FastTravel_TeleportPlayer");

	Params::AGameplayGM_C_FastTravel_TeleportPlayer_Params Parms{};

	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_SetStartingCheckpointTransform_bIsTravel = CallFunc_SetStartingCheckpointTransform_bIsTravel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.DH_GiveMePoison
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::DH_GiveMePoison(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "DH_GiveMePoison");

	Params::AGameplayGM_C_DH_GiveMePoison_Params Parms{};

	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.DH_SetMeOnFire
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::DH_SetMeOnFire(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "DH_SetMeOnFire");

	Params::AGameplayGM_C_DH_SetMeOnFire_Params Parms{};

	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.PauseStatusIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              IconID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UnPause                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHUD*                        CallFunc_GetHUD_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AYourHUD_C*                  K2Node_DynamicCast_AsYour_HUD                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayGM_C::PauseStatusIcon(int32 IconID, bool UnPause, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class AHUD* CallFunc_GetHUD_ReturnValue, class AYourHUD_C* K2Node_DynamicCast_AsYour_HUD, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "PauseStatusIcon");

	Params::AGameplayGM_C_PauseStatusIcon_Params Parms{};

	Parms.IconID = IconID;
	Parms.UnPause = UnPause;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetHUD_ReturnValue = CallFunc_GetHUD_ReturnValue;
	Parms.K2Node_DynamicCast_AsYour_HUD = K2Node_DynamicCast_AsYour_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.DH_AddAllConsumables
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TryToAddItemToInventory_Success                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_TryToAddItemToInventory_OutItem                         (HasGetValueTypeHash)
// int32                              CallFunc_TryToAddItemToInventory_AddedToSlot                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayGM_C::DH_AddAllConsumables(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_TryToAddItemToInventory_Success, const struct FInventoryItem& CallFunc_TryToAddItemToInventory_OutItem, int32 CallFunc_TryToAddItemToInventory_AddedToSlot, bool K2Node_SwitchName_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "DH_AddAllConsumables");

	Params::AGameplayGM_C_DH_AddAllConsumables_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_TryToAddItemToInventory_Success = CallFunc_TryToAddItemToInventory_Success;
	Parms.CallFunc_TryToAddItemToInventory_OutItem = CallFunc_TryToAddItemToInventory_OutItem;
	Parms.CallFunc_TryToAddItemToInventory_AddedToSlot = CallFunc_TryToAddItemToInventory_AddedToSlot;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.ClearFastTravelUnlocks
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)

void AGameplayGM_C::ClearFastTravelUnlocks(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, TArray<class FName>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "ClearFastTravelUnlocks");

	Params::AGameplayGM_C_ClearFastTravelUnlocks_Params Parms{};

	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.GetValidLastAmbient
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USoundBase*                  Ambient                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Local_Ambient                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGamePlayGameState_C*        K2Node_DynamicCast_AsGame_Play_Game_State                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayGM_C::GetValidLastAmbient(class USoundBase** Ambient, class USoundBase* Local_Ambient, bool CallFunc_IsValid_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AGamePlayGameState_C* K2Node_DynamicCast_AsGame_Play_Game_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "GetValidLastAmbient");

	Params::AGameplayGM_C_GetValidLastAmbient_Params Parms{};

	Parms.Local_Ambient = Local_Ambient;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_Game_State = K2Node_DynamicCast_AsGame_Play_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Ambient != nullptr)
		*Ambient = Parms.Ambient;

}


// Function GameplayGM.GameplayGM_C.GetValidLastMusic
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USoundBase*                  Music                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Local_Music                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGamePlayGameState_C*        K2Node_DynamicCast_AsGame_Play_Game_State                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayGM_C::GetValidLastMusic(class USoundBase** Music, class USoundBase* Local_Music, bool CallFunc_IsValid_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AGamePlayGameState_C* K2Node_DynamicCast_AsGame_Play_Game_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "GetValidLastMusic");

	Params::AGameplayGM_C_GetValidLastMusic_Params Parms{};

	Parms.Local_Music = Local_Music;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_Game_State = K2Node_DynamicCast_AsGame_Play_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Music != nullptr)
		*Music = Parms.Music;

}


// Function GameplayGM.GameplayGM_C.DH_MaxAllFamiliarity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayGM_C::DH_MaxAllFamiliarity(int32 Temp_int_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "DH_MaxAllFamiliarity");

	Params::AGameplayGM_C_DH_MaxAllFamiliarity_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.DH_UnlockAllItemEntries
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayGM_C::DH_UnlockAllItemEntries(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "DH_UnlockAllItemEntries");

	Params::AGameplayGM_C_DH_UnlockAllItemEntries_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.GetMapSaveSlotName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

class FString AGameplayGM_C::GetMapSaveSlotName(const class FString& CallFunc_Concat_StrStr_ReturnValue, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "GetMapSaveSlotName");

	Params::AGameplayGM_C_GetMapSaveSlotName_Params Parms{};

	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayGM.GameplayGM_C.PlayerDeadOnloadPrintString
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDead                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_BoolToText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void AGameplayGM_C::PlayerDeadOnloadPrintString(bool IsDead, class FText CallFunc_Conv_BoolToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "PlayerDeadOnloadPrintString");

	Params::AGameplayGM_C_PlayerDeadOnloadPrintString_Params Parms{};

	Parms.IsDead = IsDead;
	Parms.CallFunc_Conv_BoolToText_ReturnValue = CallFunc_Conv_BoolToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.UpdateEnemyStateMapPrintSting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShouldSpawn_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsPermanentlyDead_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Died_                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)

void AGameplayGM_C::UpdateEnemyStateMapPrintSting(class FName Key, bool ShouldSpawn_, bool IsPermanentlyDead_, bool Died_, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, const class FString& CallFunc_Conv_BoolToString_ReturnValue_2, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "UpdateEnemyStateMapPrintSting");

	Params::AGameplayGM_C_UpdateEnemyStateMapPrintSting_Params Parms{};

	Parms.Key = Key;
	Parms.ShouldSpawn_ = ShouldSpawn_;
	Parms.IsPermanentlyDead_ = IsPermanentlyDead_;
	Parms.Died_ = Died_;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_1 = CallFunc_Conv_BoolToString_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_2 = CallFunc_Conv_BoolToString_ReturnValue_2;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.SaveMapStateOnEndPlay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::SaveMapStateOnEndPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "SaveMapStateOnEndPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.SaveRespawningItems
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_MakeTimespan_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_Add_TimespanTimespan_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::SaveRespawningItems(class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, float CallFunc_GetGameTimeInSeconds_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const struct FTimespan& CallFunc_MakeTimespan_ReturnValue, const struct FTimespan& CallFunc_Add_TimespanTimespan_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "SaveRespawningItems");

	Params::AGameplayGM_C_SaveRespawningItems_Params Parms{};

	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_MakeTimespan_ReturnValue = CallFunc_MakeTimespan_ReturnValue;
	Parms.CallFunc_Add_TimespanTimespan_ReturnValue = CallFunc_Add_TimespanTimespan_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.LoadRespawningItems
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::LoadRespawningItems(class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "LoadRespawningItems");

	Params::AGameplayGM_C_LoadRespawningItems_Params Parms{};

	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.DH_SetCutscenesAsSeen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::DH_SetCutscenesAsSeen(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "DH_SetCutscenesAsSeen");

	Params::AGameplayGM_C_DH_SetCutscenesAsSeen_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.DH_RespawnNearbySpawners
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// class AAdvancedEnemySpawner_C*     K2Node_DynamicCast_AsAdvanced_Enemy_Spawner                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayGM_C::DH_RespawnNearbySpawners(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& Temp_object_Variable, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TArray<struct FHitResult>& CallFunc_SphereTraceMultiForObjects_OutHits, bool CallFunc_SphereTraceMultiForObjects_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class AAdvancedEnemySpawner_C* K2Node_DynamicCast_AsAdvanced_Enemy_Spawner, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "DH_RespawnNearbySpawners");

	Params::AGameplayGM_C_DH_RespawnNearbySpawners_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
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
	Parms.K2Node_DynamicCast_AsAdvanced_Enemy_Spawner = K2Node_DynamicCast_AsAdvanced_Enemy_Spawner;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.TakeGlimpsesAndTeleport
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::TakeGlimpsesAndTeleport(class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "TakeGlimpsesAndTeleport");

	Params::AGameplayGM_C_TakeGlimpsesAndTeleport_Params Parms{};

	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.GetWaifuLevelFromCheckpointName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        WaifuCheckpointName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        LevelName                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayGM_C::GetWaifuLevelFromCheckpointName(class FName WaifuCheckpointName, class FName* LevelName, bool K2Node_SwitchName_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "GetWaifuLevelFromCheckpointName");

	Params::AGameplayGM_C_GetWaifuLevelFromCheckpointName_Params Parms{};

	Parms.WaifuCheckpointName = WaifuCheckpointName;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (LevelName != nullptr)
		*LevelName = Parms.LevelName;

}


// Function GameplayGM.GameplayGM_C.DH_FastTravel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        LevelName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        WaifuName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_WaifuName                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_LevelName                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class ILoadingScreenInterface_C>K2Node_DynamicCast_AsLoading_Screen_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULoadingScreen_C*            K2Node_DynamicCast_AsLoading_Screen                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ILoadingScreenInterface_C>K2Node_DynamicCast_AsLoading_Screen_Interface_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCurrentPersistentLevelName_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class AWaifuNPC_C>  CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayGM_C::DH_FastTravel(class FName LevelName, class FName WaifuName, class FName Local_WaifuName, class FName Local_LevelName, bool CallFunc_EqualEqual_NameName_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_Not_PreBool_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, TScriptInterface<class ILoadingScreenInterface_C> K2Node_DynamicCast_AsLoading_Screen_Interface, bool K2Node_DynamicCast_bSuccess, class ULoadingScreen_C* K2Node_DynamicCast_AsLoading_Screen, bool K2Node_DynamicCast_bSuccess_1, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_2, TScriptInterface<class ILoadingScreenInterface_C> K2Node_DynamicCast_AsLoading_Screen_Interface_1, bool K2Node_DynamicCast_bSuccess_2, class FName CallFunc_GetCurrentPersistentLevelName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, TSoftObjectPtr<class AWaifuNPC_C> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "DH_FastTravel");

	Params::AGameplayGM_C_DH_FastTravel_Params Parms{};

	Parms.LevelName = LevelName;
	Parms.WaifuName = WaifuName;
	Parms.Local_WaifuName = Local_WaifuName;
	Parms.Local_LevelName = Local_LevelName;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsLoading_Screen_Interface = K2Node_DynamicCast_AsLoading_Screen_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsLoading_Screen = K2Node_DynamicCast_AsLoading_Screen;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1 = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_2 = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_2;
	Parms.K2Node_DynamicCast_AsLoading_Screen_Interface_1 = K2Node_DynamicCast_AsLoading_Screen_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetCurrentPersistentLevelName_ReturnValue = CallFunc_GetCurrentPersistentLevelName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.TeleportToLastWaifu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetWaifuLevelFromCheckpointName_LevelName               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::TeleportToLastWaifu(class FName Temp_name_Variable, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FName CallFunc_GetWaifuLevelFromCheckpointName_LevelName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "TeleportToLastWaifu");

	Params::AGameplayGM_C_TeleportToLastWaifu_Params Parms{};

	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetWaifuLevelFromCheckpointName_LevelName = CallFunc_GetWaifuLevelFromCheckpointName_LevelName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.OverrideStatusIconDuration
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              IconID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHUD*                        CallFunc_GetHUD_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AYourHUD_C*                  K2Node_DynamicCast_AsYour_HUD                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayGM_C::OverrideStatusIconDuration(int32 IconID, float Duration, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class AHUD* CallFunc_GetHUD_ReturnValue, class AYourHUD_C* K2Node_DynamicCast_AsYour_HUD, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "OverrideStatusIconDuration");

	Params::AGameplayGM_C_OverrideStatusIconDuration_Params Parms{};

	Parms.IconID = IconID;
	Parms.Duration = Duration;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetHUD_ReturnValue = CallFunc_GetHUD_ReturnValue;
	Parms.K2Node_DynamicCast_AsYour_HUD = K2Node_DynamicCast_AsYour_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.RemoveStatusIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              IconID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHUD*                        CallFunc_GetHUD_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AYourHUD_C*                  K2Node_DynamicCast_AsYour_HUD                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayGM_C::RemoveStatusIcon(int32 IconID, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class AHUD* CallFunc_GetHUD_ReturnValue, class AYourHUD_C* K2Node_DynamicCast_AsYour_HUD, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "RemoveStatusIcon");

	Params::AGameplayGM_C_RemoveStatusIcon_Params Parms{};

	Parms.IconID = IconID;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetHUD_ReturnValue = CallFunc_GetHUD_ReturnValue;
	Parms.K2Node_DynamicCast_AsYour_HUD = K2Node_DynamicCast_AsYour_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.AddStatusIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              StackNum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              IconID                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHUD*                        CallFunc_GetHUD_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AYourHUD_C*                  K2Node_DynamicCast_AsYour_HUD                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddStatusEffect_IconID                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::AddStatusIcon(float Duration, class UTexture2D* Icon, int32 StackNum, int32* IconID, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class AHUD* CallFunc_GetHUD_ReturnValue, class AYourHUD_C* K2Node_DynamicCast_AsYour_HUD, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_AddStatusEffect_IconID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "AddStatusIcon");

	Params::AGameplayGM_C_AddStatusIcon_Params Parms{};

	Parms.Duration = Duration;
	Parms.Icon = Icon;
	Parms.StackNum = StackNum;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetHUD_ReturnValue = CallFunc_GetHUD_ReturnValue;
	Parms.K2Node_DynamicCast_AsYour_HUD = K2Node_DynamicCast_AsYour_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AddStatusEffect_IconID = CallFunc_AddStatusEffect_IconID;

	UObject::ProcessEvent(Func, &Parms);

	if (IconID != nullptr)
		*IconID = Parms.IconID;

}


// Function GameplayGM.GameplayGM_C.DH_TestCredits
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PlayFadeIn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_Credits_Music      MusicToPlay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_Storyteller_Credits_C*  CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::DH_TestCredits(bool PlayFadeIn, enum class Enum_Credits_Music MusicToPlay, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, class UUMG_Storyteller_Credits_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "DH_TestCredits");

	Params::AGameplayGM_C_DH_TestCredits_Params Parms{};

	Parms.PlayFadeIn = PlayFadeIn;
	Parms.MusicToPlay = MusicToPlay;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.DH_ClearNamedInt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Key                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::DH_ClearNamedInt(class FName Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "DH_ClearNamedInt");

	Params::AGameplayGM_C_DH_ClearNamedInt_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.SpawnDefaultPawnAtTransform
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 NewPlayer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  SpawnTransform                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
// class APawn*                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_SpawnDefaultPawnAtTransform_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class APawn* AGameplayGM_C::SpawnDefaultPawnAtTransform(class AController* NewPlayer, struct FTransform& SpawnTransform, class APawn* CallFunc_SpawnDefaultPawnAtTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "SpawnDefaultPawnAtTransform");

	Params::AGameplayGM_C_SpawnDefaultPawnAtTransform_Params Parms{};

	Parms.NewPlayer = NewPlayer;
	Parms.SpawnTransform = SpawnTransform;
	Parms.CallFunc_SpawnDefaultPawnAtTransform_ReturnValue = CallFunc_SpawnDefaultPawnAtTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayGM.GameplayGM_C.SaveCheckpointIfTravelling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayGM_C::SaveCheckpointIfTravelling(class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "SaveCheckpointIfTravelling");

	Params::AGameplayGM_C_SaveCheckpointIfTravelling_Params Parms{};

	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.ResetEnemySaves
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEnemySaveState             K2Node_MakeStruct_EnemySaveState                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FEnemySaveState>     CallFunc_Map_Values_Values                                       (ReferenceParm, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_Map_Keys_Keys                                           (ReferenceParm, HasGetValueTypeHash)
// struct FEnemySaveState             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayGM_C::ResetEnemySaves(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FEnemySaveState& K2Node_MakeStruct_EnemySaveState, TArray<struct FEnemySaveState>& CallFunc_Map_Values_Values, TArray<class FName>& CallFunc_Map_Keys_Keys, const struct FEnemySaveState& CallFunc_Array_Get_Item, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "ResetEnemySaves");

	Params::AGameplayGM_C_ResetEnemySaves_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_EnemySaveState = K2Node_MakeStruct_EnemySaveState;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.DH_ResetEnemySaves
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::DH_ResetEnemySaves()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "DH_ResetEnemySaves");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.DH_FastFogTest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::DH_FastFogTest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "DH_FastFogTest");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.SetStartingCheckpointTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FServerSaveFile             ServerSaveFile                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                               bIsTravel                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FServerSaveFile             Local_SaveFile                                                   (Edit, BlueprintVisible, HasGetValueTypeHash)
// class UGameInfoInstance_C*         LocGameInstance                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetWaifuReference_Waifu                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetWaifuReference_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AWaifuNPC_C*                 K2Node_DynamicCast_AsWaifu_NPC                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// bool                               CallFunc_DidPlayerTravelBetweenMaps_bTravelled                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_GetAllActorsWithTag_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAreaCheckpoint_C*           K2Node_DynamicCast_AsArea_Checkpoint                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_1                    (IsPlainOldData, NoDestructor)

void AGameplayGM_C::SetStartingCheckpointTransform(struct FServerSaveFile& ServerSaveFile, bool* bIsTravel, const struct FServerSaveFile& Local_SaveFile, class UGameInfoInstance_C* LocGameInstance, class AActor* CallFunc_GetWaifuReference_Waifu, bool CallFunc_GetWaifuReference_ReturnValue, class AWaifuNPC_C* K2Node_DynamicCast_AsWaifu_NPC, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, bool CallFunc_DidPlayerTravelBetweenMaps_bTravelled, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class AActor* CallFunc_Array_Get_Item, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess_1, class AAreaCheckpoint_C* K2Node_DynamicCast_AsArea_Checkpoint, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "SetStartingCheckpointTransform");

	Params::AGameplayGM_C_SetStartingCheckpointTransform_Params Parms{};

	Parms.ServerSaveFile = ServerSaveFile;
	Parms.Local_SaveFile = Local_SaveFile;
	Parms.LocGameInstance = LocGameInstance;
	Parms.CallFunc_GetWaifuReference_Waifu = CallFunc_GetWaifuReference_Waifu;
	Parms.CallFunc_GetWaifuReference_ReturnValue = CallFunc_GetWaifuReference_ReturnValue;
	Parms.K2Node_DynamicCast_AsWaifu_NPC = K2Node_DynamicCast_AsWaifu_NPC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_DidPlayerTravelBetweenMaps_bTravelled = CallFunc_DidPlayerTravelBetweenMaps_bTravelled;
	Parms.CallFunc_GetAllActorsWithTag_OutActors = CallFunc_GetAllActorsWithTag_OutActors;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance = K2Node_DynamicCast_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsArea_Checkpoint = K2Node_DynamicCast_AsArea_Checkpoint;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_1 = CallFunc_K2_GetComponentToWorld_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsTravel != nullptr)
		*bIsTravel = Parms.bIsTravel;

}


// Function GameplayGM.GameplayGM_C.GetBellTeleportLocation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                  Transform                                                        (Parm, OutParm, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAllActorsWithTag_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)

void AGameplayGM_C::GetBellTeleportLocation(struct FTransform* Transform, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "GetBellTeleportLocation");

	Params::AGameplayGM_C_GetBellTeleportLocation_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsWithTag_OutActors = CallFunc_GetAllActorsWithTag_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

}


// Function GameplayGM.GameplayGM_C.WantsToPlayFromHereOrCameraLocation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bWantsSpecificSpawnTransform                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  Transform                                                        (Parm, OutParm, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// TArray<class APlayerStartPIE*>     CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// class APlayerStartPIE*             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)

void AGameplayGM_C::WantsToPlayFromHereOrCameraLocation(bool* bWantsSpecificSpawnTransform, struct FTransform* Transform, const struct FTransform& CallFunc_MakeTransform_ReturnValue, TArray<class APlayerStartPIE*>& CallFunc_GetAllActorsOfClass_OutActors, class APlayerStartPIE* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "WantsToPlayFromHereOrCameraLocation");

	Params::AGameplayGM_C_WantsToPlayFromHereOrCameraLocation_Params Parms{};

	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bWantsSpecificSpawnTransform != nullptr)
		*bWantsSpecificSpawnTransform = Parms.bWantsSpecificSpawnTransform;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

}


// Function GameplayGM.GameplayGM_C.IsCheckpointNameValid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      LevelName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AGameplayGM_C::IsCheckpointNameValid(const class FString& LevelName, class FName CallFunc_Conv_StringToName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "IsCheckpointNameValid");

	Params::AGameplayGM_C_IsCheckpointNameValid_Params Parms{};

	Parms.LevelName = LevelName;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayGM.GameplayGM_C.EnableGravityAfterPlayerSpawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::EnableGravityAfterPlayerSpawn(class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "EnableGravityAfterPlayerSpawn");

	Params::AGameplayGM_C_EnableGravityAfterPlayerSpawn_Params Parms{};

	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetMovementComponent_ReturnValue = CallFunc_GetMovementComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.DisableGravityAtPlayerSpawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::DisableGravityAtPlayerSpawn(class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "DisableGravityAtPlayerSpawn");

	Params::AGameplayGM_C_DisableGravityAtPlayerSpawn_Params Parms{};

	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetMovementComponent_ReturnValue = CallFunc_GetMovementComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.FindPlayerStart
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      IncomingName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class APlayerStart*>        CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// class APlayerStart*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AActor* AGameplayGM_C::FindPlayerStart(class AController* Player, const class FString& IncomingName, TArray<class APlayerStart*>& CallFunc_GetAllActorsOfClass_OutActors, class APlayerStart* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "FindPlayerStart");

	Params::AGameplayGM_C_FindPlayerStart_Params Parms{};

	Parms.Player = Player;
	Parms.IncomingName = IncomingName;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayGM.GameplayGM_C.GetPlayerStart
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Transform                                                        (Parm, OutParm, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class UDHGameInstance*             K2Node_DynamicCast_AsDHGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDHGameInstance*             K2Node_DynamicCast_AsDHGame_Instance_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class APlayerStart*>        CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_DHLoadGameFromSlot_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerStart*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UServerSaveGame_C*           K2Node_DynamicCast_AsServer_Save_Game                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue_1                           (None)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class ULevelStreaming*             CallFunc_GetStreamingLevel_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

class AActor* AGameplayGM_C::GetPlayerStart(struct FTransform* Transform, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class FName CallFunc_Conv_StringToName_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, class UDHGameInstance* K2Node_DynamicCast_AsDHGame_Instance, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, bool CallFunc_DoesSaveGameExist_ReturnValue, class UDHGameInstance* K2Node_DynamicCast_AsDHGame_Instance_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_1, TArray<class APlayerStart*>& CallFunc_GetAllActorsOfClass_OutActors, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue, class APlayerStart* CallFunc_Array_Get_Item, class UServerSaveGame_C* K2Node_DynamicCast_AsServer_Save_Game, bool K2Node_DynamicCast_bSuccess_2, const struct FTransform& CallFunc_GetTransform_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_NameToText_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_EqualEqual_NameName_ReturnValue, class FText CallFunc_Format_ReturnValue, class ULevelStreaming* CallFunc_GetStreamingLevel_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "GetPlayerStart");

	Params::AGameplayGM_C_GetPlayerStart_Params Parms{};

	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.K2Node_DynamicCast_AsDHGame_Instance = K2Node_DynamicCast_AsDHGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.K2Node_DynamicCast_AsDHGame_Instance_1 = K2Node_DynamicCast_AsDHGame_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue_1 = CallFunc_GetPrimaryUserIndex_ReturnValue_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_DHLoadGameFromSlot_ReturnValue = CallFunc_DHLoadGameFromSlot_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsServer_Save_Game = K2Node_DynamicCast_AsServer_Save_Game;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_NameToText_ReturnValue_1 = CallFunc_Conv_NameToText_ReturnValue_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetStreamingLevel_ReturnValue = CallFunc_GetStreamingLevel_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	return Parms.ReturnValue;

}


// Function GameplayGM.GameplayGM_C.ChoosePlayerStart
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class APlayerStart*>        CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerStart*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerStartPIE*             K2Node_DynamicCast_AsPlayer_Start_PIE                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

class AActor* AGameplayGM_C::ChoosePlayerStart(class AController* Player, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class APlayerStart*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class APlayerStart* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class APlayerStartPIE* K2Node_DynamicCast_AsPlayer_Start_PIE, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "ChoosePlayerStart");

	Params::AGameplayGM_C_ChoosePlayerStart_Params Parms{};

	Parms.Player = Player;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Start_PIE = K2Node_DynamicCast_AsPlayer_Start_PIE;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayGM.GameplayGM_C.BellAnimRate__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AGameplayGM_C::BellAnimRate__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "BellAnimRate__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.BellAnimRate__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AGameplayGM_C::BellAnimRate__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "BellAnimRate__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.PlayerFogExtinctionTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AGameplayGM_C::PlayerFogExtinctionTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "PlayerFogExtinctionTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.PlayerFogExtinctionTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AGameplayGM_C::PlayerFogExtinctionTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "PlayerFogExtinctionTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.InterpBellBackToNormalState__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AGameplayGM_C::InterpBellBackToNormalState__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "InterpBellBackToNormalState__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.InterpBellBackToNormalState__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AGameplayGM_C::InterpBellBackToNormalState__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "InterpBellBackToNormalState__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.Timeline_MaskUsed__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AGameplayGM_C::Timeline_MaskUsed__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "Timeline_MaskUsed__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.Timeline_MaskUsed__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AGameplayGM_C::Timeline_MaskUsed__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "Timeline_MaskUsed__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.OnNotifyEnd_E6027B74432EB53F9C56C28C75CBD61D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::OnNotifyEnd_E6027B74432EB53F9C56C28C75CBD61D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "OnNotifyEnd_E6027B74432EB53F9C56C28C75CBD61D");

	Params::AGameplayGM_C_OnNotifyEnd_E6027B74432EB53F9C56C28C75CBD61D_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.OnNotifyBegin_E6027B74432EB53F9C56C28C75CBD61D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::OnNotifyBegin_E6027B74432EB53F9C56C28C75CBD61D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "OnNotifyBegin_E6027B74432EB53F9C56C28C75CBD61D");

	Params::AGameplayGM_C_OnNotifyBegin_E6027B74432EB53F9C56C28C75CBD61D_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.OnInterrupted_E6027B74432EB53F9C56C28C75CBD61D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::OnInterrupted_E6027B74432EB53F9C56C28C75CBD61D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "OnInterrupted_E6027B74432EB53F9C56C28C75CBD61D");

	Params::AGameplayGM_C_OnInterrupted_E6027B74432EB53F9C56C28C75CBD61D_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.OnBlendOut_E6027B74432EB53F9C56C28C75CBD61D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::OnBlendOut_E6027B74432EB53F9C56C28C75CBD61D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "OnBlendOut_E6027B74432EB53F9C56C28C75CBD61D");

	Params::AGameplayGM_C_OnBlendOut_E6027B74432EB53F9C56C28C75CBD61D_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.OnCompleted_E6027B74432EB53F9C56C28C75CBD61D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::OnCompleted_E6027B74432EB53F9C56C28C75CBD61D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "OnCompleted_E6027B74432EB53F9C56C28C75CBD61D");

	Params::AGameplayGM_C_OnCompleted_E6027B74432EB53F9C56C28C75CBD61D_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.OnNotifyEnd_E92A37D146A4E9A7A64E91B1F258256D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::OnNotifyEnd_E92A37D146A4E9A7A64E91B1F258256D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "OnNotifyEnd_E92A37D146A4E9A7A64E91B1F258256D");

	Params::AGameplayGM_C_OnNotifyEnd_E92A37D146A4E9A7A64E91B1F258256D_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.OnNotifyBegin_E92A37D146A4E9A7A64E91B1F258256D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::OnNotifyBegin_E92A37D146A4E9A7A64E91B1F258256D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "OnNotifyBegin_E92A37D146A4E9A7A64E91B1F258256D");

	Params::AGameplayGM_C_OnNotifyBegin_E92A37D146A4E9A7A64E91B1F258256D_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.OnInterrupted_E92A37D146A4E9A7A64E91B1F258256D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::OnInterrupted_E92A37D146A4E9A7A64E91B1F258256D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "OnInterrupted_E92A37D146A4E9A7A64E91B1F258256D");

	Params::AGameplayGM_C_OnInterrupted_E92A37D146A4E9A7A64E91B1F258256D_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.OnBlendOut_E92A37D146A4E9A7A64E91B1F258256D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::OnBlendOut_E92A37D146A4E9A7A64E91B1F258256D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "OnBlendOut_E92A37D146A4E9A7A64E91B1F258256D");

	Params::AGameplayGM_C_OnBlendOut_E92A37D146A4E9A7A64E91B1F258256D_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.OnCompleted_E92A37D146A4E9A7A64E91B1F258256D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::OnCompleted_E92A37D146A4E9A7A64E91B1F258256D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "OnCompleted_E92A37D146A4E9A7A64E91B1F258256D");

	Params::AGameplayGM_C_OnCompleted_E92A37D146A4E9A7A64E91B1F258256D_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.OnNotifyEnd_7834E7B34F1EECDA1C64D3AC7D7C1342
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::OnNotifyEnd_7834E7B34F1EECDA1C64D3AC7D7C1342(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "OnNotifyEnd_7834E7B34F1EECDA1C64D3AC7D7C1342");

	Params::AGameplayGM_C_OnNotifyEnd_7834E7B34F1EECDA1C64D3AC7D7C1342_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.OnNotifyBegin_7834E7B34F1EECDA1C64D3AC7D7C1342
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::OnNotifyBegin_7834E7B34F1EECDA1C64D3AC7D7C1342(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "OnNotifyBegin_7834E7B34F1EECDA1C64D3AC7D7C1342");

	Params::AGameplayGM_C_OnNotifyBegin_7834E7B34F1EECDA1C64D3AC7D7C1342_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.OnInterrupted_7834E7B34F1EECDA1C64D3AC7D7C1342
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::OnInterrupted_7834E7B34F1EECDA1C64D3AC7D7C1342(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "OnInterrupted_7834E7B34F1EECDA1C64D3AC7D7C1342");

	Params::AGameplayGM_C_OnInterrupted_7834E7B34F1EECDA1C64D3AC7D7C1342_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.OnBlendOut_7834E7B34F1EECDA1C64D3AC7D7C1342
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::OnBlendOut_7834E7B34F1EECDA1C64D3AC7D7C1342(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "OnBlendOut_7834E7B34F1EECDA1C64D3AC7D7C1342");

	Params::AGameplayGM_C_OnBlendOut_7834E7B34F1EECDA1C64D3AC7D7C1342_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.OnCompleted_7834E7B34F1EECDA1C64D3AC7D7C1342
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::OnCompleted_7834E7B34F1EECDA1C64D3AC7D7C1342(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "OnCompleted_7834E7B34F1EECDA1C64D3AC7D7C1342");

	Params::AGameplayGM_C_OnCompleted_7834E7B34F1EECDA1C64D3AC7D7C1342_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.OnNotifyEnd_D490BD52451D61A8530BE78E40A95EBE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::OnNotifyEnd_D490BD52451D61A8530BE78E40A95EBE(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "OnNotifyEnd_D490BD52451D61A8530BE78E40A95EBE");

	Params::AGameplayGM_C_OnNotifyEnd_D490BD52451D61A8530BE78E40A95EBE_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.OnNotifyBegin_D490BD52451D61A8530BE78E40A95EBE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::OnNotifyBegin_D490BD52451D61A8530BE78E40A95EBE(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "OnNotifyBegin_D490BD52451D61A8530BE78E40A95EBE");

	Params::AGameplayGM_C_OnNotifyBegin_D490BD52451D61A8530BE78E40A95EBE_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.OnInterrupted_D490BD52451D61A8530BE78E40A95EBE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::OnInterrupted_D490BD52451D61A8530BE78E40A95EBE(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "OnInterrupted_D490BD52451D61A8530BE78E40A95EBE");

	Params::AGameplayGM_C_OnInterrupted_D490BD52451D61A8530BE78E40A95EBE_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.OnBlendOut_D490BD52451D61A8530BE78E40A95EBE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::OnBlendOut_D490BD52451D61A8530BE78E40A95EBE(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "OnBlendOut_D490BD52451D61A8530BE78E40A95EBE");

	Params::AGameplayGM_C_OnBlendOut_D490BD52451D61A8530BE78E40A95EBE_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.OnCompleted_D490BD52451D61A8530BE78E40A95EBE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::OnCompleted_D490BD52451D61A8530BE78E40A95EBE(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "OnCompleted_D490BD52451D61A8530BE78E40A95EBE");

	Params::AGameplayGM_C_OnCompleted_D490BD52451D61A8530BE78E40A95EBE_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.OnNotifyEnd_6E68E6A04AFB79AC70B218A8F3473C15
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::OnNotifyEnd_6E68E6A04AFB79AC70B218A8F3473C15(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "OnNotifyEnd_6E68E6A04AFB79AC70B218A8F3473C15");

	Params::AGameplayGM_C_OnNotifyEnd_6E68E6A04AFB79AC70B218A8F3473C15_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.OnNotifyBegin_6E68E6A04AFB79AC70B218A8F3473C15
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::OnNotifyBegin_6E68E6A04AFB79AC70B218A8F3473C15(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "OnNotifyBegin_6E68E6A04AFB79AC70B218A8F3473C15");

	Params::AGameplayGM_C_OnNotifyBegin_6E68E6A04AFB79AC70B218A8F3473C15_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.OnInterrupted_6E68E6A04AFB79AC70B218A8F3473C15
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::OnInterrupted_6E68E6A04AFB79AC70B218A8F3473C15(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "OnInterrupted_6E68E6A04AFB79AC70B218A8F3473C15");

	Params::AGameplayGM_C_OnInterrupted_6E68E6A04AFB79AC70B218A8F3473C15_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.OnBlendOut_6E68E6A04AFB79AC70B218A8F3473C15
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::OnBlendOut_6E68E6A04AFB79AC70B218A8F3473C15(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "OnBlendOut_6E68E6A04AFB79AC70B218A8F3473C15");

	Params::AGameplayGM_C_OnBlendOut_6E68E6A04AFB79AC70B218A8F3473C15_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.OnCompleted_6E68E6A04AFB79AC70B218A8F3473C15
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::OnCompleted_6E68E6A04AFB79AC70B218A8F3473C15(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "OnCompleted_6E68E6A04AFB79AC70B218A8F3473C15");

	Params::AGameplayGM_C_OnCompleted_6E68E6A04AFB79AC70B218A8F3473C15_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.GameModeUtils_SaveMapState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::GameModeUtils_SaveMapState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "GameModeUtils_SaveMapState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.GameModeUtils_ToggleFog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::GameModeUtils_ToggleFog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "GameModeUtils_ToggleFog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.GameModeUtils_AddAbritraryNameToChangedSet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::GameModeUtils_AddAbritraryNameToChangedSet(class FName Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "GameModeUtils_AddAbritraryNameToChangedSet");

	Params::AGameplayGM_C_GameModeUtils_AddAbritraryNameToChangedSet_Params Parms{};

	Parms.Name = Name;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.EventScarletBell
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::EventScarletBell()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "EventScarletBell");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.PostFade
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::PostFade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "PostFade");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.EventGoldenBell
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::EventGoldenBell()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "EventGoldenBell");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.RestoreShell
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::RestoreShell()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "RestoreShell");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.CheckForCharMovement
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::CheckForCharMovement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "CheckForCharMovement");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.StartLute
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::StartLute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "StartLute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.LuteAggroEnemies
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::LuteAggroEnemies()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "LuteAggroEnemies");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.EnemyInterruptLute
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::EnemyInterruptLute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "EnemyInterruptLute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.DropLute
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::DropLute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "DropLute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.StartImperviousLute
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::StartImperviousLute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "StartImperviousLute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.ForceInterruptLute
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::ForceInterruptLute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "ForceInterruptLute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.StartClockworkLute
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::StartClockworkLute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "StartClockworkLute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.GameModeUtils_PrevLuteMusic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::GameModeUtils_PrevLuteMusic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "GameModeUtils_PrevLuteMusic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.GameModeUtils_NextLuteMusic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::GameModeUtils_NextLuteMusic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "GameModeUtils_NextLuteMusic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.K2_OnSwapPlayerControllers
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerController*           OldPC                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           NewPC                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::K2_OnSwapPlayerControllers(class APlayerController* OldPC, class APlayerController* NewPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "K2_OnSwapPlayerControllers");

	Params::AGameplayGM_C_K2_OnSwapPlayerControllers_Params Parms{};

	Parms.OldPC = OldPC;
	Parms.NewPC = NewPC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.RespawnPlayer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      PlayerCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::RespawnPlayer(class APlayerController* PlayerController, class UClass* PlayerCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "RespawnPlayer");

	Params::AGameplayGM_C_RespawnPlayer_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.PlayerCharacter = PlayerCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.K2_OnLogout
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*                 ExitingController                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::K2_OnLogout(class AController* ExitingController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "K2_OnLogout");

	Params::AGameplayGM_C_K2_OnLogout_Params Parms{};

	Parms.ExitingController = ExitingController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.K2_PostLogin
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*           NewPlayer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::K2_PostLogin(class APlayerController* NewPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "K2_PostLogin");

	Params::AGameplayGM_C_K2_PostLogin_Params Parms{};

	Parms.NewPlayer = NewPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGameplayGM_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.SaveMapState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ForceDiskWrite                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayGM_C::SaveMapState(bool ForceDiskWrite)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "SaveMapState");

	Params::AGameplayGM_C_SaveMapState_Params Parms{};

	Parms.ForceDiskWrite = ForceDiskWrite;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.UpdateEnemyStateMap
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Key                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShouldSpawn_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsPermanentlyDead_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Died_                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGameplayGM_C::UpdateEnemyStateMap(class FName& Key, bool ShouldSpawn_, bool IsPermanentlyDead_, bool Died_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "UpdateEnemyStateMap");

	Params::AGameplayGM_C_UpdateEnemyStateMap_Params Parms{};

	Parms.Key = Key;
	Parms.ShouldSpawn_ = ShouldSpawn_;
	Parms.IsPermanentlyDead_ = IsPermanentlyDead_;
	Parms.Died_ = Died_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.ResetEnemySaveStates
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::ResetEnemySaveStates()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "ResetEnemySaveStates");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.LoadStartingSublevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::LoadStartingSublevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "LoadStartingSublevel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.CheckpointLevelLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::CheckpointLevelLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "CheckpointLevelLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.EnableStreamingVolumes
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::EnableStreamingVolumes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "EnableStreamingVolumes");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.PollIsLevelLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::PollIsLevelLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "PollIsLevelLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.FadeOutLoadingScreens
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::FadeOutLoadingScreens()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "FadeOutLoadingScreens");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.FadeOutLoadingScreensNoDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::FadeOutLoadingScreensNoDelay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "FadeOutLoadingScreensNoDelay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.PollLevelLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::PollLevelLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "PollLevelLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.TeleportPlayerToCheckpoint
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::TeleportPlayerToCheckpoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "TeleportPlayerToCheckpoint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.OnPreBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGameplayGM_C::OnPreBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "OnPreBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.DH_FallgrimStartFog
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::DH_FallgrimStartFog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "DH_FallgrimStartFog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.DH_FallgrimEndFog
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::DH_FallgrimEndFog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "DH_FallgrimEndFog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.SequencerUpdateSpawners
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::SequencerUpdateSpawners()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "SequencerUpdateSpawners");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.ToggleFog
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::ToggleFog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "ToggleFog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.StartFallgrimFogCycle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::StartFallgrimFogCycle(float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "StartFallgrimFogCycle");

	Params::AGameplayGM_C_StartFallgrimFogCycle_Params Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.RingFogBell
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::RingFogBell()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "RingFogBell");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.ThickenFogFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::ThickenFogFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "ThickenFogFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.ThinFogFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::ThinFogFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "ThinFogFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.PlayVampScreams
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::PlayVampScreams()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "PlayVampScreams");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.SlowBellAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::SlowBellAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "SlowBellAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.FallgrimStartFogImmediately
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::FallgrimStartFogImmediately()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "FallgrimStartFogImmediately");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.FallgrimEndFogImmediately
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::FallgrimEndFogImmediately()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "FallgrimEndFogImmediately");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.StartPlayerFogFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::StartPlayerFogFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "StartPlayerFogFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.EndPlayerFogFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::EndPlayerFogFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "EndPlayerFogFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.EnemyRunAwayFromFog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      EnemyCharacter                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::EnemyRunAwayFromFog(class AActor* EnemyCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "EnemyRunAwayFromFog");

	Params::AGameplayGM_C_EnemyRunAwayFromFog_Params Parms{};

	Parms.EnemyCharacter = EnemyCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.SaveOnFirstFog
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::SaveOnFirstFog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "SaveOnFirstFog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "ReceiveEndPlay");

	Params::AGameplayGM_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.StartLevelMusic
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::StartLevelMusic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "StartLevelMusic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.SaveCheckpoint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CheckpointUniqueID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CheckpointTransform                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// class FName                        CheckpointSubLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CheckpointMainLevel                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::SaveCheckpoint(class FName CheckpointUniqueID, const struct FTransform& CheckpointTransform, class FName CheckpointSubLevel, class FName CheckpointMainLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "SaveCheckpoint");

	Params::AGameplayGM_C_SaveCheckpoint_Params Parms{};

	Parms.CheckpointUniqueID = CheckpointUniqueID;
	Parms.CheckpointTransform = CheckpointTransform;
	Parms.CheckpointSubLevel = CheckpointSubLevel;
	Parms.CheckpointMainLevel = CheckpointMainLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.FastFogTest
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::FastFogTest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "FastFogTest");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.EndCredits
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::EndCredits()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "EndCredits");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.DH_ResetDataForNewGamePlus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::DH_ResetDataForNewGamePlus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "DH_ResetDataForNewGamePlus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.SetFallgrimWaifuAsCheckpoint
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::SetFallgrimWaifuAsCheckpoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "SetFallgrimWaifuAsCheckpoint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.ResetPermanentlyDeadEnemies
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::ResetPermanentlyDeadEnemies()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "ResetPermanentlyDeadEnemies");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.CleanMapStatesForNewGamePlus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::CleanMapStatesForNewGamePlus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "CleanMapStatesForNewGamePlus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.UseTarnishedMask
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::UseTarnishedMask()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "UseTarnishedMask");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.UseUntarnishedMask
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::UseUntarnishedMask()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "UseUntarnishedMask");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.UseOrnateMask
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Waifu                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::UseOrnateMask(class FName Level, class FName Waifu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "UseOrnateMask");

	Params::AGameplayGM_C_UseOrnateMask_Params Parms{};

	Parms.Level = Level;
	Parms.Waifu = Waifu;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.LoadMapState
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::LoadMapState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "LoadMapState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.PlayerFreeze_Testing
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::PlayerFreeze_Testing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "PlayerFreeze_Testing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.MaskTimeline_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::MaskTimeline_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "MaskTimeline_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.MaskTimeline_Stop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::MaskTimeline_Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "MaskTimeline_Stop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.StormMode_LoadNPCLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::StormMode_LoadNPCLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "StormMode_LoadNPCLevel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.ExecuteUbergraph_GameplayGM
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMapSaveState               Temp_struct_Variable                                             (ConstParm, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
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
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_21                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMapSaveState               CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_Name                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorScale3D_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayAnimMontage_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBriefFadeToBlack_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBriefReturnFromBlackFade_C* CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                K2Node_DynamicCast_AsBarbarous                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_22                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBriefFadeToBlack_C*         CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetBellTeleportLocation_Transform                       (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorTransform_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_23                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMovementInputs_Forward                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMovementInputs_right                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_7                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_8                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_9                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_10                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_11                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetItemFamiliarity_Value                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_12                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_13                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor)
// struct FTransform                  CallFunc_GetLuteTransform_ReturnValue                            (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_small_physics_prop_guitar_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanChangeLuteMusic_CanChange                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanChangeLuteMusic_CanChange_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanHaveIndicator_CanChange                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_Event_OldPC                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_Event_NewPC                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormModeIsActive_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           K2Node_CustomEvent_PlayerController                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_PlayerCharacter                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_24                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_Event_ExitingController                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_Event_NewPlayer                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetPlayerStart_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetPlayerStart_Transform                                (IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGamePlayGameState_C*        K2Node_DynamicCast_AsGame_Play_Game_State                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMapState_C*                 CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ForceDiskWrite                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_Key                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ShouldSpawn_                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_IsPermanentlyDead_                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Died_                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEnemySaveState             K2Node_MakeStruct_EnemySaveState                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_Map_Keys_Keys                                           (ReferenceParm, HasGetValueTypeHash)
// struct FEnemySaveState             K2Node_MakeStruct_EnemySaveState_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEnemySaveState             CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue_2                       (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelStreaming*             CallFunc_GetStreamingLevel_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsLevelLoaded_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorLocationAndRotation_SweepHitResult           (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocationAndRotation_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_VectorToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm, HasGetValueTypeHash)
// class UBriefReturnFromBlackFade_C* CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_13                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAllActorsWithTag_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAllActorsWithTag_OutActors_1                         (ReferenceParm, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_20                          (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAllActorsWithTag_OutActors_2                         (ReferenceParm, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISpawnerInterface_C>K2Node_DynamicCast_AsSpawner_Interface                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAllActorsWithTag_OutActors_3                         (ReferenceParm, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAllActorsWithTag_OutActors_4                         (ReferenceParm, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISpawnerInterface_C>K2Node_DynamicCast_AsSpawner_Interface_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_GetAllActorsWithTag_OutActors_5                         (ReferenceParm, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISpawnerInterface_C>K2Node_DynamicCast_AsSpawner_Interface_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue_2                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Time                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGamePlayGameState_C*        K2Node_DynamicCast_AsGame_Play_Game_State_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_21                          (ZeroConstructor, NoDestructor)
// class AActor*                      K2Node_CustomEvent_EnemyCharacter                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISpawnerInterface_C>K2Node_DynamicCast_AsSpawner_Interface_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_17                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue_3                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_4                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GameModeUtils_IsAbritraryNameInSet_bIsInSet             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_14                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_18                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_14                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WantsToPlayFromHereOrCameraLocation_bWantsSpecificSpawnTransform(ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_WantsToPlayFromHereOrCameraLocation_Transform           (IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue_3                       (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMapSaveState               CallFunc_Map_Find_Value_2                                        (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGamePlayGameState_C*        K2Node_DynamicCast_AsGame_Play_Game_State_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_19                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_CheckpointUniqueID                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  K2Node_CustomEvent_CheckpointTransform                           (IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_CheckpointSubLevel                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_CheckpointMainLevel                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_22                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckPlayerInventoryForGland_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckPlayerInventoryForGland_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetPosition_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_15                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_15                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_Level                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_Waifu                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_16                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AExponentialHeightFog*       K2Node_DynamicCast_AsExponential_Height_Fog                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_20                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_16                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_23                          (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_GetMapSaveSlotName_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetMapSaveSlotName_ReturnValue_1                        (ZeroConstructor, HasGetValueTypeHash)
// struct FMapSaveState               CallFunc_Map_Find_Value_3                                        (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_17                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_24                          (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_GetMapSaveSlotName_ReturnValue_2                        (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_25                          (ZeroConstructor, NoDestructor)
// class USoundBase*                  CallFunc_GetValidLastMusic_Music                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  CallFunc_GetValidLastAmbient_Ambient                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_18                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMapSaveState               K2Node_MakeStruct_MapSaveState                                   (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_26                          (ZeroConstructor, NoDestructor)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_3(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_4(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ILoadingScreenInterface_C>K2Node_DynamicCast_AsLoading_Screen_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_21                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGamePlayGameState_C*        CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_19                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_5(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_17                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ILoadingScreenInterface_C>K2Node_DynamicCast_AsLoading_Screen_Interface_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_22                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_18                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_27                          (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable_3                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// TArray<struct FHitResult>          CallFunc_SphereTraceMultiForObjects_OutHits                      (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SphereTraceMultiForObjects_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_Array_Get_Item_7                                        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
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
// int32                              CallFunc_Array_Length_ReturnValue_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_23                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABossBaseCharacter_C*        K2Node_DynamicCast_AsBoss_Base_Character                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_24                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanSeePlayer__ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_10                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_28                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_2                       (NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_19                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_20                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_21                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_22                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_23                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALevelStreamingVolume*       CallFunc_Array_Get_Item_8                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             K2Node_DynamicCast_AsDHGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_25                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDHGameInstance*             K2Node_DynamicCast_AsDHGame_Instance_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_26                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USaveGame*                   CallFunc_DHLoadGameFromSlot_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMapState_C*                 K2Node_DynamicCast_AsMap_State                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_27                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             K2Node_DynamicCast_AsDHGame_Instance_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_28                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_DHLoadGameFromSlot_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             K2Node_DynamicCast_AsDHGame_Instance_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_29                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UServerSaveGame_C*           K2Node_DynamicCast_AsServer_Save_Game                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_30                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DHSaveGameToSlot_Asynch_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStartingCheckpointTransform_bIsTravel                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class ULevelStreaming*             CallFunc_GetStreamingLevel_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_20                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAllActorsWithTag_OutActors_6                         (ReferenceParm, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_9                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_9                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadLevelInstance_bOutSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULevelStreamingDynamic*      CallFunc_LoadLevelInstance_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_9                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_11                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_31                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetArbNameForLevelFromSaveGame_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_29                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_GetArbNameForLevelFromSaveGame_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetArbNameForLevelFromSaveGame_ReturnValue_2            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_12                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetArbNameForLevelFromSaveGame_ReturnValue_3            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_13                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_14                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGameplayGM_C::ExecuteUbergraph_GameplayGM(int32 EntryPoint, const struct FMapSaveState& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable, class USoundBase* Temp_object_Variable, bool Temp_bool_Variable_1, class USoundBase* Temp_object_Variable_1, class USoundBase* Temp_object_Variable_2, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName K2Node_CustomEvent_NotifyName_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool K2Node_SwitchName_CmpSuccess, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName Temp_name_Variable_1, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_SwitchName_CmpSuccess_1, class FName K2Node_CustomEvent_NotifyName_21, const struct FMapSaveState& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class FName K2Node_Event_Name, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, const struct FVector& CallFunc_GetActorScale3D_ReturnValue, float CallFunc_PlayAnimMontage_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UBriefFadeToBlack_C* CallFunc_Create_ReturnValue, class UBriefReturnFromBlackFade_C* CallFunc_Create_ReturnValue_1, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class ABarbarous_C* K2Node_DynamicCast_AsBarbarous, bool K2Node_DynamicCast_bSuccess, class FName K2Node_CustomEvent_NotifyName_22, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UBriefFadeToBlack_C* CallFunc_Create_ReturnValue_2, const struct FTransform& CallFunc_GetBellTeleportLocation_Transform, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_3, class FName K2Node_CustomEvent_NotifyName_23, float CallFunc_GetMovementInputs_Forward, float CallFunc_GetMovementInputs_right, float CallFunc_Abs_ReturnValue, float CallFunc_Abs_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_4, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous_1, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_5, int32 Temp_int_Array_Index_Variable_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_6, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_8, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_9, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_10, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_11, int32 CallFunc_GetItemFamiliarity_Value, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous_2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, float Temp_float_Variable, float Temp_float_Variable_1, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_12, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_13, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_5, bool Temp_bool_Variable_2, float K2Node_Select_Default, class FName Temp_name_Variable_2, bool K2Node_SwitchName_CmpSuccess_2, class FName K2Node_CustomEvent_NotifyName_10, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, const struct FTransform& CallFunc_GetLuteTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class Abp_small_physics_prop_guitar_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_CanChangeLuteMusic_CanChange, bool CallFunc_CanChangeLuteMusic_CanChange_1, bool CallFunc_CanHaveIndicator_CanChange, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class APlayerController* K2Node_Event_OldPC, class APlayerController* K2Node_Event_NewPC, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_StormModeIsActive_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, class APlayerController* K2Node_CustomEvent_PlayerController, class UClass* K2Node_CustomEvent_PlayerCharacter, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess_2, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, class FName K2Node_CustomEvent_NotifyName_24, class FName K2Node_CustomEvent_NotifyName_11, class AController* K2Node_Event_ExitingController, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC_1, bool K2Node_DynamicCast_bSuccess_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess_4, int32 CallFunc_Add_IntInt_ReturnValue_1, class APlayerController* K2Node_Event_NewPlayer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, int32 CallFunc_Add_IntInt_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, int32 CallFunc_Array_AddUnique_ReturnValue, class AActor* CallFunc_GetPlayerStart_ReturnValue, const struct FTransform& CallFunc_GetPlayerStart_Transform, int32 CallFunc_Subtract_IntInt_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ACharacter* CallFunc_FinishSpawningActor_ReturnValue_1, class AGamePlayGameState_C* K2Node_DynamicCast_AsGame_Play_Game_State, bool K2Node_DynamicCast_bSuccess_5, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess_6, int32 CallFunc_Array_Add_ReturnValue_1, class UMapState_C* CallFunc_CreateSaveGameObject_ReturnValue, bool K2Node_CustomEvent_ForceDiskWrite, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FName K2Node_CustomEvent_Key, bool K2Node_CustomEvent_ShouldSpawn_, bool K2Node_CustomEvent_IsPermanentlyDead_, bool K2Node_CustomEvent_Died_, const struct FEnemySaveState& K2Node_MakeStruct_EnemySaveState, const class FString& CallFunc_GetCurrentLevelName_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class FName CallFunc_Conv_StringToName_ReturnValue_1, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance_1, bool K2Node_DynamicCast_bSuccess_7, TArray<class FName>& CallFunc_Map_Keys_Keys, const struct FEnemySaveState& K2Node_MakeStruct_EnemySaveState_1, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable_2, class FName CallFunc_Array_Get_Item, const struct FEnemySaveState& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Loop_Counter_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_4, class FName K2Node_CustomEvent_NotifyName_12, int32 Temp_int_Array_Index_Variable_4, const class FString& CallFunc_GetCurrentLevelName_ReturnValue_2, bool CallFunc_NotEqual_NameName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, bool CallFunc_NotEqual_NameName_ReturnValue_1, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance_2, bool K2Node_DynamicCast_bSuccess_8, bool CallFunc_BooleanAND_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base_1, bool K2Node_DynamicCast_bSuccess_9, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_5, class ULevelStreaming* CallFunc_GetStreamingLevel_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, bool CallFunc_IsLevelLoaded_ReturnValue, int32 Temp_int_Array_Index_Variable_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC_2, bool K2Node_DynamicCast_bSuccess_10, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, class AZero_Base_C* K2Node_DynamicCast_As0_Base_2, bool K2Node_DynamicCast_bSuccess_11, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, class FText CallFunc_Conv_VectorToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Array_Length_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class UBriefReturnFromBlackFade_C* CallFunc_Create_ReturnValue_3, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, class FName K2Node_CustomEvent_NotifyName_13, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, int32 CallFunc_Array_Length_ReturnValue_2, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, int32 CallFunc_Array_Length_ReturnValue_3, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors_2, int32 Temp_int_Array_Index_Variable_6, class AActor* CallFunc_Array_Get_Item_1, TScriptInterface<class ISpawnerInterface_C> K2Node_DynamicCast_AsSpawner_Interface, bool K2Node_DynamicCast_bSuccess_12, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_4, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors_3, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors_4, class AActor* CallFunc_Array_Get_Item_2, class AActor* CallFunc_Array_Get_Item_3, TScriptInterface<class ISpawnerInterface_C> K2Node_DynamicCast_AsSpawner_Interface_1, bool K2Node_DynamicCast_bSuccess_13, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_2, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors_5, class AActor* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_7, TScriptInterface<class ISpawnerInterface_C> K2Node_DynamicCast_AsSpawner_Interface_2, bool K2Node_DynamicCast_bSuccess_14, bool CallFunc_Less_IntInt_ReturnValue_3, const class FString& CallFunc_GetDisplayName_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, float K2Node_CustomEvent_Time, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_5, bool CallFunc_Less_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_6, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, class AGamePlayGameState_C* K2Node_DynamicCast_AsGame_Play_Game_State_1, bool K2Node_DynamicCast_bSuccess_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, class AActor* K2Node_CustomEvent_EnemyCharacter, int32 Temp_int_Array_Index_Variable_7, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess_16, class AActor* CallFunc_Array_Get_Item_5, TScriptInterface<class ISpawnerInterface_C> K2Node_DynamicCast_AsSpawner_Interface_3, bool K2Node_DynamicCast_bSuccess_17, const class FString& CallFunc_GetDisplayName_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_GetDisplayName_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_GameModeUtils_IsAbritraryNameInSet_bIsInSet, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_14, class USoundBase* K2Node_Select_Default_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess_18, class USoundBase* K2Node_Select_Default_2, class FName K2Node_CustomEvent_NotifyName_14, bool CallFunc_WantsToPlayFromHereOrCameraLocation_bWantsSpecificSpawnTransform, const struct FTransform& CallFunc_WantsToPlayFromHereOrCameraLocation_Transform, bool CallFunc_BooleanOR_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, const class FString& CallFunc_GetCurrentLevelName_ReturnValue_3, class FName CallFunc_Conv_StringToName_ReturnValue_3, class AGameStateBase* CallFunc_GetGameState_ReturnValue_2, const struct FMapSaveState& CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, class AGamePlayGameState_C* K2Node_DynamicCast_AsGame_Play_Game_State_2, bool K2Node_DynamicCast_bSuccess_19, class FName K2Node_CustomEvent_CheckpointUniqueID, const struct FTransform& K2Node_CustomEvent_CheckpointTransform, class FName K2Node_CustomEvent_CheckpointSubLevel, class FName K2Node_CustomEvent_CheckpointMainLevel, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, class FName Temp_name_Variable_3, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_6, int32 CallFunc_Add_IntInt_ReturnValue_7, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3, bool CallFunc_CheckPlayerInventoryForGland_ReturnValue, bool CallFunc_CheckPlayerInventoryForGland_ReturnValue_1, float CallFunc_GetPosition_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_FInterpTo_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, int32 Temp_int_Loop_Counter_Variable_7, bool CallFunc_Less_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_8, int32 Temp_int_Array_Index_Variable_8, class AActor* CallFunc_Array_Get_Item_6, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_15, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_9, class FName K2Node_CustomEvent_NotifyName_15, class FName K2Node_CustomEvent_Level, class FName K2Node_CustomEvent_Waifu, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_16, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AExponentialHeightFog* K2Node_DynamicCast_AsExponential_Height_Fog, bool K2Node_DynamicCast_bSuccess_20, class FName K2Node_CustomEvent_NotifyName_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, const class FString& CallFunc_GetMapSaveSlotName_ReturnValue, const class FString& CallFunc_GetMapSaveSlotName_ReturnValue_1, const struct FMapSaveState& CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, class FName K2Node_CustomEvent_NotifyName_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_24, const class FString& CallFunc_GetMapSaveSlotName_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_25, class USoundBase* CallFunc_GetValidLastMusic_Music, class USoundBase* CallFunc_GetValidLastAmbient_Ambient, class FName K2Node_CustomEvent_NotifyName_18, const struct FMapSaveState& K2Node_MakeStruct_MapSaveState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_26, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, int32 CallFunc_Add_IntInt_ReturnValue_9, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_2, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_3, int32 Temp_int_Variable, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_4, TScriptInterface<class ILoadingScreenInterface_C> K2Node_DynamicCast_AsLoading_Screen_Interface, bool K2Node_DynamicCast_bSuccess_21, class AGamePlayGameState_C* CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState, class FName K2Node_CustomEvent_NotifyName_19, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_5, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_17, TScriptInterface<class ILoadingScreenInterface_C> K2Node_DynamicCast_AsLoading_Screen_Interface_1, bool K2Node_DynamicCast_bSuccess_22, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_18, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_27, int32 Temp_int_Loop_Counter_Variable_8, TArray<class AActor*>& Temp_object_Variable_3, TArray<struct FHitResult>& CallFunc_SphereTraceMultiForObjects_OutHits, bool CallFunc_SphereTraceMultiForObjects_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_6, const struct FHitResult& CallFunc_Array_Get_Item_7, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, int32 CallFunc_Array_Length_ReturnValue_8, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character_1, bool K2Node_DynamicCast_bSuccess_23, bool CallFunc_Less_IntInt_ReturnValue_7, class ABossBaseCharacter_C* K2Node_DynamicCast_AsBoss_Base_Character, bool K2Node_DynamicCast_bSuccess_24, bool CallFunc_CanSeePlayer__ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_28, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_19, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_20, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_21, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_22, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_23, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_11, int32 Temp_int_Array_Index_Variable_9, class ALevelStreamingVolume* CallFunc_Array_Get_Item_8, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_4, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_5, class UDHGameInstance* K2Node_DynamicCast_AsDHGame_Instance, bool K2Node_DynamicCast_bSuccess_25, class UDHGameInstance* K2Node_DynamicCast_AsDHGame_Instance_1, bool K2Node_DynamicCast_bSuccess_26, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_1, bool CallFunc_DoesSaveGameExist_ReturnValue, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue_12, class UMapState_C* K2Node_DynamicCast_AsMap_State, bool K2Node_DynamicCast_bSuccess_27, class FName Temp_name_Variable_4, int32 Temp_int_Variable_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_6, class UDHGameInstance* K2Node_DynamicCast_AsDHGame_Instance_2, bool K2Node_DynamicCast_bSuccess_28, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_7, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue_1, class UDHGameInstance* K2Node_DynamicCast_AsDHGame_Instance_3, bool K2Node_DynamicCast_bSuccess_29, class UServerSaveGame_C* K2Node_DynamicCast_AsServer_Save_Game, bool K2Node_DynamicCast_bSuccess_30, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_3, bool CallFunc_DHSaveGameToSlot_Asynch_ReturnValue, bool CallFunc_SetStartingCheckpointTransform_bIsTravel, const class FString& CallFunc_Conv_NameToString_ReturnValue, class ULevelStreaming* CallFunc_GetStreamingLevel_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_13, bool CallFunc_DoesSaveGameExist_ReturnValue_1, class FName K2Node_CustomEvent_NotifyName_20, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors_6, class AActor* CallFunc_Array_Get_Item_9, int32 CallFunc_Array_Length_ReturnValue_9, bool CallFunc_Less_IntInt_ReturnValue_8, bool CallFunc_LoadLevelInstance_bOutSuccess, class ULevelStreamingDynamic* CallFunc_LoadLevelInstance_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_9, bool CallFunc_Less_IntInt_ReturnValue_9, int32 CallFunc_Add_IntInt_ReturnValue_11, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_31, bool CallFunc_IsValid_ReturnValue_14, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, bool CallFunc_GetArbNameForLevelFromSaveGame_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_29, bool CallFunc_GetArbNameForLevelFromSaveGame_ReturnValue_1, int32 CallFunc_Conv_BoolToInt_ReturnValue_1, bool CallFunc_GetArbNameForLevelFromSaveGame_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_12, int32 CallFunc_Conv_BoolToInt_ReturnValue_2, bool CallFunc_GetArbNameForLevelFromSaveGame_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_13, int32 CallFunc_Conv_BoolToInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_14)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "ExecuteUbergraph_GameplayGM");

	Params::AGameplayGM_C_ExecuteUbergraph_GameplayGM_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_9 = K2Node_CustomEvent_NotifyName_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName_8 = K2Node_CustomEvent_NotifyName_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_NotifyName_7 = K2Node_CustomEvent_NotifyName_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_NotifyName_6 = K2Node_CustomEvent_NotifyName_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_NotifyName_5 = K2Node_CustomEvent_NotifyName_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
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
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_SwitchName_CmpSuccess_1 = K2Node_SwitchName_CmpSuccess_1;
	Parms.K2Node_CustomEvent_NotifyName_21 = K2Node_CustomEvent_NotifyName_21;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_Event_Name = K2Node_Event_Name;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_GetActorScale3D_ReturnValue = CallFunc_GetActorScale3D_ReturnValue;
	Parms.CallFunc_PlayAnimMontage_ReturnValue = CallFunc_PlayAnimMontage_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_1 = CallFunc_GetCharacterAs0_Base_As0_Base_1;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.K2Node_DynamicCast_AsBarbarous = K2Node_DynamicCast_AsBarbarous;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_NotifyName_22 = K2Node_CustomEvent_NotifyName_22;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_GetBellTeleportLocation_Transform = CallFunc_GetBellTeleportLocation_Transform;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_SetActorTransform_SweepHitResult = CallFunc_K2_SetActorTransform_SweepHitResult;
	Parms.CallFunc_K2_SetActorTransform_ReturnValue = CallFunc_K2_SetActorTransform_ReturnValue;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_2 = CallFunc_GetCharacterAs0_Base_As0_Base_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_3 = CallFunc_GetCharacterAs0_Base_As0_Base_3;
	Parms.K2Node_CustomEvent_NotifyName_23 = K2Node_CustomEvent_NotifyName_23;
	Parms.CallFunc_GetMovementInputs_Forward = CallFunc_GetMovementInputs_Forward;
	Parms.CallFunc_GetMovementInputs_right = CallFunc_GetMovementInputs_right;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue_1 = CallFunc_Abs_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_4 = CallFunc_GetCharacterAs0_Base_As0_Base_4;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous_1 = CallFunc_GetCharacterAsBarbarous_AsBarbarous_1;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_5 = CallFunc_GetCharacterAs0_Base_As0_Base_5;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_6 = CallFunc_GetCharacterAs0_Base_As0_Base_6;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_7 = CallFunc_GetCharacterAs0_Base_As0_Base_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_8 = CallFunc_GetCharacterAs0_Base_As0_Base_8;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_9 = CallFunc_GetCharacterAs0_Base_As0_Base_9;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_10 = CallFunc_GetCharacterAs0_Base_As0_Base_10;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_11 = CallFunc_GetCharacterAs0_Base_As0_Base_11;
	Parms.CallFunc_GetItemFamiliarity_Value = CallFunc_GetItemFamiliarity_Value;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous_2 = CallFunc_GetCharacterAsBarbarous_AsBarbarous_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_12 = CallFunc_GetCharacterAs0_Base_As0_Base_12;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_13 = CallFunc_GetCharacterAs0_Base_As0_Base_13;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.K2Node_SwitchName_CmpSuccess_2 = K2Node_SwitchName_CmpSuccess_2;
	Parms.K2Node_CustomEvent_NotifyName_10 = K2Node_CustomEvent_NotifyName_10;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.CallFunc_GetLuteTransform_ReturnValue = CallFunc_GetLuteTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_CanChangeLuteMusic_CanChange = CallFunc_CanChangeLuteMusic_CanChange;
	Parms.CallFunc_CanChangeLuteMusic_CanChange_1 = CallFunc_CanChangeLuteMusic_CanChange_1;
	Parms.CallFunc_CanHaveIndicator_CanChange = CallFunc_CanHaveIndicator_CanChange;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_Event_OldPC = K2Node_Event_OldPC;
	Parms.K2Node_Event_NewPC = K2Node_Event_NewPC;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_StormModeIsActive_ReturnValue = CallFunc_StormModeIsActive_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.K2Node_CustomEvent_PlayerController = K2Node_CustomEvent_PlayerController;
	Parms.K2Node_CustomEvent_PlayerCharacter = K2Node_CustomEvent_PlayerCharacter;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.K2Node_CustomEvent_NotifyName_24 = K2Node_CustomEvent_NotifyName_24;
	Parms.K2Node_CustomEvent_NotifyName_11 = K2Node_CustomEvent_NotifyName_11;
	Parms.K2Node_Event_ExitingController = K2Node_Event_ExitingController;
	Parms.K2Node_DynamicCast_AsGameplay_PC_1 = K2Node_DynamicCast_AsGameplay_PC_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance = K2Node_DynamicCast_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_Event_NewPlayer = K2Node_Event_NewPlayer;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_GetPlayerStart_ReturnValue = CallFunc_GetPlayerStart_ReturnValue;
	Parms.CallFunc_GetPlayerStart_Transform = CallFunc_GetPlayerStart_Transform;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Play_Game_State = K2Node_DynamicCast_AsGame_Play_Game_State;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;
	Parms.K2Node_CustomEvent_ForceDiskWrite = K2Node_CustomEvent_ForceDiskWrite;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.K2Node_CustomEvent_Key = K2Node_CustomEvent_Key;
	Parms.K2Node_CustomEvent_ShouldSpawn_ = K2Node_CustomEvent_ShouldSpawn_;
	Parms.K2Node_CustomEvent_IsPermanentlyDead_ = K2Node_CustomEvent_IsPermanentlyDead_;
	Parms.K2Node_CustomEvent_Died_ = K2Node_CustomEvent_Died_;
	Parms.K2Node_MakeStruct_EnemySaveState = K2Node_MakeStruct_EnemySaveState;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue_1 = CallFunc_GetCurrentLevelName_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance_1 = K2Node_DynamicCast_AsGame_Info_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.K2Node_MakeStruct_EnemySaveState_1 = K2Node_MakeStruct_EnemySaveState_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.K2Node_CustomEvent_NotifyName_12 = K2Node_CustomEvent_NotifyName_12;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue_2 = CallFunc_GetCurrentLevelName_ReturnValue_2;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue_2 = CallFunc_Conv_StringToName_ReturnValue_2;
	Parms.CallFunc_GetGameInstance_ReturnValue_3 = CallFunc_GetGameInstance_ReturnValue_3;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance_2 = K2Node_DynamicCast_AsGame_Info_Instance_2;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_DynamicCast_As0_Base_1 = K2Node_DynamicCast_As0_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_GetStreamingLevel_ReturnValue = CallFunc_GetStreamingLevel_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_18 = K2Node_CreateDelegate_OutputDelegate_18;
	Parms.CallFunc_IsLevelLoaded_ReturnValue = CallFunc_IsLevelLoaded_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsGameplay_PC_2 = K2Node_DynamicCast_AsGameplay_PC_2;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.K2Node_DynamicCast_As0_Base_2 = K2Node_DynamicCast_As0_Base_2;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_K2_SetActorLocationAndRotation_SweepHitResult = CallFunc_K2_SetActorLocationAndRotation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocationAndRotation_ReturnValue = CallFunc_K2_SetActorLocationAndRotation_ReturnValue;
	Parms.CallFunc_Conv_VectorToText_ReturnValue = CallFunc_Conv_VectorToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_19 = K2Node_CreateDelegate_OutputDelegate_19;
	Parms.K2Node_CustomEvent_NotifyName_13 = K2Node_CustomEvent_NotifyName_13;
	Parms.CallFunc_GetAllActorsWithTag_OutActors = CallFunc_GetAllActorsWithTag_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_GetAllActorsWithTag_OutActors_1 = CallFunc_GetAllActorsWithTag_OutActors_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_20 = K2Node_CreateDelegate_OutputDelegate_20;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_GetAllActorsWithTag_OutActors_2 = CallFunc_GetAllActorsWithTag_OutActors_2;
	Parms.Temp_int_Array_Index_Variable_6 = Temp_int_Array_Index_Variable_6;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsSpawner_Interface = K2Node_DynamicCast_AsSpawner_Interface;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_GetAllActorsWithTag_OutActors_3 = CallFunc_GetAllActorsWithTag_OutActors_3;
	Parms.CallFunc_GetAllActorsWithTag_OutActors_4 = CallFunc_GetAllActorsWithTag_OutActors_4;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.K2Node_DynamicCast_AsSpawner_Interface_1 = K2Node_DynamicCast_AsSpawner_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.CallFunc_GetDisplayName_ReturnValue_1 = CallFunc_GetDisplayName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_GetAllActorsWithTag_OutActors_5 = CallFunc_GetAllActorsWithTag_OutActors_5;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Length_ReturnValue_7 = CallFunc_Array_Length_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsSpawner_Interface_2 = K2Node_DynamicCast_AsSpawner_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_GetDisplayName_ReturnValue_2 = CallFunc_GetDisplayName_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.K2Node_CustomEvent_Time = K2Node_CustomEvent_Time;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.CallFunc_GetGameState_ReturnValue_1 = CallFunc_GetGameState_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Play_Game_State_1 = K2Node_DynamicCast_AsGame_Play_Game_State_1;
	Parms.K2Node_DynamicCast_bSuccess_15 = K2Node_DynamicCast_bSuccess_15;
	Parms.K2Node_CreateDelegate_OutputDelegate_21 = K2Node_CreateDelegate_OutputDelegate_21;
	Parms.K2Node_CustomEvent_EnemyCharacter = K2Node_CustomEvent_EnemyCharacter;
	Parms.Temp_int_Array_Index_Variable_7 = Temp_int_Array_Index_Variable_7;
	Parms.K2Node_DynamicCast_AsEnemy_Character = K2Node_DynamicCast_AsEnemy_Character;
	Parms.K2Node_DynamicCast_bSuccess_16 = K2Node_DynamicCast_bSuccess_16;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.K2Node_DynamicCast_AsSpawner_Interface_3 = K2Node_DynamicCast_AsSpawner_Interface_3;
	Parms.K2Node_DynamicCast_bSuccess_17 = K2Node_DynamicCast_bSuccess_17;
	Parms.CallFunc_GetDisplayName_ReturnValue_3 = CallFunc_GetDisplayName_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_GetDisplayName_ReturnValue_4 = CallFunc_GetDisplayName_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_GameModeUtils_IsAbritraryNameInSet_bIsInSet = CallFunc_GameModeUtils_IsAbritraryNameInSet_bIsInSet;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_14 = CallFunc_GetCharacterAs0_Base_As0_Base_14;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess_18 = K2Node_DynamicCast_bSuccess_18;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_CustomEvent_NotifyName_14 = K2Node_CustomEvent_NotifyName_14;
	Parms.CallFunc_WantsToPlayFromHereOrCameraLocation_bWantsSpecificSpawnTransform = CallFunc_WantsToPlayFromHereOrCameraLocation_bWantsSpecificSpawnTransform;
	Parms.CallFunc_WantsToPlayFromHereOrCameraLocation_Transform = CallFunc_WantsToPlayFromHereOrCameraLocation_Transform;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue_3 = CallFunc_GetCurrentLevelName_ReturnValue_3;
	Parms.CallFunc_Conv_StringToName_ReturnValue_3 = CallFunc_Conv_StringToName_ReturnValue_3;
	Parms.CallFunc_GetGameState_ReturnValue_2 = CallFunc_GetGameState_ReturnValue_2;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsGame_Play_Game_State_2 = K2Node_DynamicCast_AsGame_Play_Game_State_2;
	Parms.K2Node_DynamicCast_bSuccess_19 = K2Node_DynamicCast_bSuccess_19;
	Parms.K2Node_CustomEvent_CheckpointUniqueID = K2Node_CustomEvent_CheckpointUniqueID;
	Parms.K2Node_CustomEvent_CheckpointTransform = K2Node_CustomEvent_CheckpointTransform;
	Parms.K2Node_CustomEvent_CheckpointSubLevel = K2Node_CustomEvent_CheckpointSubLevel;
	Parms.K2Node_CustomEvent_CheckpointMainLevel = K2Node_CustomEvent_CheckpointMainLevel;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_22 = K2Node_CreateDelegate_OutputDelegate_22;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_6 = Temp_int_Loop_Counter_Variable_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3;
	Parms.CallFunc_CheckPlayerInventoryForGland_ReturnValue = CallFunc_CheckPlayerInventoryForGland_ReturnValue;
	Parms.CallFunc_CheckPlayerInventoryForGland_ReturnValue_1 = CallFunc_CheckPlayerInventoryForGland_ReturnValue_1;
	Parms.CallFunc_GetPosition_ReturnValue = CallFunc_GetPosition_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_7 = Temp_int_Loop_Counter_Variable_7;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_8 = CallFunc_Add_IntInt_ReturnValue_8;
	Parms.Temp_int_Array_Index_Variable_8 = Temp_int_Array_Index_Variable_8;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_15 = CallFunc_GetCharacterAs0_Base_As0_Base_15;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.K2Node_CustomEvent_NotifyName_15 = K2Node_CustomEvent_NotifyName_15;
	Parms.K2Node_CustomEvent_Level = K2Node_CustomEvent_Level;
	Parms.K2Node_CustomEvent_Waifu = K2Node_CustomEvent_Waifu;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_16 = CallFunc_GetCharacterAs0_Base_As0_Base_16;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsExponential_Height_Fog = K2Node_DynamicCast_AsExponential_Height_Fog;
	Parms.K2Node_DynamicCast_bSuccess_20 = K2Node_DynamicCast_bSuccess_20;
	Parms.K2Node_CustomEvent_NotifyName_16 = K2Node_CustomEvent_NotifyName_16;
	Parms.K2Node_CreateDelegate_OutputDelegate_23 = K2Node_CreateDelegate_OutputDelegate_23;
	Parms.CallFunc_GetMapSaveSlotName_ReturnValue = CallFunc_GetMapSaveSlotName_ReturnValue;
	Parms.CallFunc_GetMapSaveSlotName_ReturnValue_1 = CallFunc_GetMapSaveSlotName_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value_3 = CallFunc_Map_Find_Value_3;
	Parms.CallFunc_Map_Find_ReturnValue_3 = CallFunc_Map_Find_ReturnValue_3;
	Parms.K2Node_CustomEvent_NotifyName_17 = K2Node_CustomEvent_NotifyName_17;
	Parms.K2Node_CreateDelegate_OutputDelegate_24 = K2Node_CreateDelegate_OutputDelegate_24;
	Parms.CallFunc_GetMapSaveSlotName_ReturnValue_2 = CallFunc_GetMapSaveSlotName_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_25 = K2Node_CreateDelegate_OutputDelegate_25;
	Parms.CallFunc_GetValidLastMusic_Music = CallFunc_GetValidLastMusic_Music;
	Parms.CallFunc_GetValidLastAmbient_Ambient = CallFunc_GetValidLastAmbient_Ambient;
	Parms.K2Node_CustomEvent_NotifyName_18 = K2Node_CustomEvent_NotifyName_18;
	Parms.K2Node_MakeStruct_MapSaveState = K2Node_MakeStruct_MapSaveState;
	Parms.K2Node_CreateDelegate_OutputDelegate_26 = K2Node_CreateDelegate_OutputDelegate_26;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_Add_IntInt_ReturnValue_9 = CallFunc_Add_IntInt_ReturnValue_9;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1 = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_2 = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_2;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_3 = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_3;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_4 = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_4;
	Parms.K2Node_DynamicCast_AsLoading_Screen_Interface = K2Node_DynamicCast_AsLoading_Screen_Interface;
	Parms.K2Node_DynamicCast_bSuccess_21 = K2Node_DynamicCast_bSuccess_21;
	Parms.CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState = CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState;
	Parms.K2Node_CustomEvent_NotifyName_19 = K2Node_CustomEvent_NotifyName_19;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_5 = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_5;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_17 = CallFunc_GetCharacterAs0_Base_As0_Base_17;
	Parms.K2Node_DynamicCast_AsLoading_Screen_Interface_1 = K2Node_DynamicCast_AsLoading_Screen_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_22 = K2Node_DynamicCast_bSuccess_22;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_18 = CallFunc_GetCharacterAs0_Base_As0_Base_18;
	Parms.K2Node_CreateDelegate_OutputDelegate_27 = K2Node_CreateDelegate_OutputDelegate_27;
	Parms.Temp_int_Loop_Counter_Variable_8 = Temp_int_Loop_Counter_Variable_8;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.CallFunc_SphereTraceMultiForObjects_OutHits = CallFunc_SphereTraceMultiForObjects_OutHits;
	Parms.CallFunc_SphereTraceMultiForObjects_ReturnValue = CallFunc_SphereTraceMultiForObjects_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_6 = CallFunc_Less_IntInt_ReturnValue_6;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
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
	Parms.CallFunc_Array_Length_ReturnValue_8 = CallFunc_Array_Length_ReturnValue_8;
	Parms.K2Node_DynamicCast_AsEnemy_Character_1 = K2Node_DynamicCast_AsEnemy_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_23 = K2Node_DynamicCast_bSuccess_23;
	Parms.CallFunc_Less_IntInt_ReturnValue_7 = CallFunc_Less_IntInt_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsBoss_Base_Character = K2Node_DynamicCast_AsBoss_Base_Character;
	Parms.K2Node_DynamicCast_bSuccess_24 = K2Node_DynamicCast_bSuccess_24;
	Parms.CallFunc_CanSeePlayer__ReturnValue = CallFunc_CanSeePlayer__ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_10 = CallFunc_Add_IntInt_ReturnValue_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_28 = K2Node_CreateDelegate_OutputDelegate_28;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_2 = CallFunc_K2_SetTimerDelegate_ReturnValue_2;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_19 = CallFunc_GetCharacterAs0_Base_As0_Base_19;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_20 = CallFunc_GetCharacterAs0_Base_As0_Base_20;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_21 = CallFunc_GetCharacterAs0_Base_As0_Base_21;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_22 = CallFunc_GetCharacterAs0_Base_As0_Base_22;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_23 = CallFunc_GetCharacterAs0_Base_As0_Base_23;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.Temp_int_Array_Index_Variable_9 = Temp_int_Array_Index_Variable_9;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_GetGameInstance_ReturnValue_4 = CallFunc_GetGameInstance_ReturnValue_4;
	Parms.CallFunc_GetGameInstance_ReturnValue_5 = CallFunc_GetGameInstance_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsDHGame_Instance = K2Node_DynamicCast_AsDHGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess_25 = K2Node_DynamicCast_bSuccess_25;
	Parms.K2Node_DynamicCast_AsDHGame_Instance_1 = K2Node_DynamicCast_AsDHGame_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_26 = K2Node_DynamicCast_bSuccess_26;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue_1 = CallFunc_GetPrimaryUserIndex_ReturnValue_1;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.CallFunc_DHLoadGameFromSlot_ReturnValue = CallFunc_DHLoadGameFromSlot_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.K2Node_DynamicCast_AsMap_State = K2Node_DynamicCast_AsMap_State;
	Parms.K2Node_DynamicCast_bSuccess_27 = K2Node_DynamicCast_bSuccess_27;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_6 = CallFunc_GetGameInstance_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsDHGame_Instance_2 = K2Node_DynamicCast_AsDHGame_Instance_2;
	Parms.K2Node_DynamicCast_bSuccess_28 = K2Node_DynamicCast_bSuccess_28;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue_2 = CallFunc_GetPrimaryUserIndex_ReturnValue_2;
	Parms.CallFunc_GetGameInstance_ReturnValue_7 = CallFunc_GetGameInstance_ReturnValue_7;
	Parms.CallFunc_DHLoadGameFromSlot_ReturnValue_1 = CallFunc_DHLoadGameFromSlot_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsDHGame_Instance_3 = K2Node_DynamicCast_AsDHGame_Instance_3;
	Parms.K2Node_DynamicCast_bSuccess_29 = K2Node_DynamicCast_bSuccess_29;
	Parms.K2Node_DynamicCast_AsServer_Save_Game = K2Node_DynamicCast_AsServer_Save_Game;
	Parms.K2Node_DynamicCast_bSuccess_30 = K2Node_DynamicCast_bSuccess_30;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue_3 = CallFunc_GetPrimaryUserIndex_ReturnValue_3;
	Parms.CallFunc_DHSaveGameToSlot_Asynch_ReturnValue = CallFunc_DHSaveGameToSlot_Asynch_ReturnValue;
	Parms.CallFunc_SetStartingCheckpointTransform_bIsTravel = CallFunc_SetStartingCheckpointTransform_bIsTravel;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_GetStreamingLevel_ReturnValue_1 = CallFunc_GetStreamingLevel_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue_1 = CallFunc_DoesSaveGameExist_ReturnValue_1;
	Parms.K2Node_CustomEvent_NotifyName_20 = K2Node_CustomEvent_NotifyName_20;
	Parms.CallFunc_GetAllActorsWithTag_OutActors_6 = CallFunc_GetAllActorsWithTag_OutActors_6;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.CallFunc_Array_Length_ReturnValue_9 = CallFunc_Array_Length_ReturnValue_9;
	Parms.CallFunc_Less_IntInt_ReturnValue_8 = CallFunc_Less_IntInt_ReturnValue_8;
	Parms.CallFunc_LoadLevelInstance_bOutSuccess = CallFunc_LoadLevelInstance_bOutSuccess;
	Parms.CallFunc_LoadLevelInstance_ReturnValue = CallFunc_LoadLevelInstance_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_2 = CallFunc_EqualEqual_NameName_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_9 = Temp_int_Loop_Counter_Variable_9;
	Parms.CallFunc_Less_IntInt_ReturnValue_9 = CallFunc_Less_IntInt_ReturnValue_9;
	Parms.CallFunc_Add_IntInt_ReturnValue_11 = CallFunc_Add_IntInt_ReturnValue_11;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_1 = K2Node_DynamicCast_AsGame_Play_PCInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_31 = K2Node_DynamicCast_bSuccess_31;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetArbNameForLevelFromSaveGame_ReturnValue = CallFunc_GetArbNameForLevelFromSaveGame_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_29 = K2Node_CreateDelegate_OutputDelegate_29;
	Parms.CallFunc_GetArbNameForLevelFromSaveGame_ReturnValue_1 = CallFunc_GetArbNameForLevelFromSaveGame_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_1 = CallFunc_Conv_BoolToInt_ReturnValue_1;
	Parms.CallFunc_GetArbNameForLevelFromSaveGame_ReturnValue_2 = CallFunc_GetArbNameForLevelFromSaveGame_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_12 = CallFunc_Add_IntInt_ReturnValue_12;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_2 = CallFunc_Conv_BoolToInt_ReturnValue_2;
	Parms.CallFunc_GetArbNameForLevelFromSaveGame_ReturnValue_3 = CallFunc_GetArbNameForLevelFromSaveGame_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_13 = CallFunc_Add_IntInt_ReturnValue_13;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_3 = CallFunc_Conv_BoolToInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_14 = CallFunc_Add_IntInt_ReturnValue_14;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayGM.GameplayGM_C.OnLuteMusicStop__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::OnLuteMusicStop__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "OnLuteMusicStop__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.OnLuteMusicPlay__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::OnLuteMusicPlay__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "OnLuteMusicPlay__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.PlayerCharacterSpawned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::PlayerCharacterSpawned__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "PlayerCharacterSpawned__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.GameModeCheckToSpawnEnemy__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::GameModeCheckToSpawnEnemy__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "GameModeCheckToSpawnEnemy__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.EndFallgrimFog__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::EndFallgrimFog__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "EndFallgrimFog__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayGM.GameplayGM_C.StartFallgrimFog__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGameplayGM_C::StartFallgrimFog__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayGM_C", "StartFallgrimFog__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


