#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AdvancedEnemySpawner.AdvancedEnemySpawner_C
// (Actor)

class UClass* AAdvancedEnemySpawner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AdvancedEnemySpawner_C");

	return Clss;
}


// AdvancedEnemySpawner_C AdvancedEnemySpawner.Default__AdvancedEnemySpawner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAdvancedEnemySpawner_C* AAdvancedEnemySpawner_C::GetDefaultObj()
{
	static class AAdvancedEnemySpawner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAdvancedEnemySpawner_C*>(AAdvancedEnemySpawner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.CheckIfPlayerIsAlreadyOverlapping
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATriggerBase*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOverlappingActor_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAdvancedEnemySpawner_C::CheckIfPlayerIsAlreadyOverlapping(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ATriggerBase* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsOverlappingActor_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "CheckIfPlayerIsAlreadyOverlapping");

	Params::AAdvancedEnemySpawner_C_CheckIfPlayerIsAlreadyOverlapping_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsOverlappingActor_ReturnValue = CallFunc_IsOverlappingActor_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.LoadEnemySaveState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class AGameplayGM_C*               K2Node_DynamicCast_AsGameplay_GM                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAdvancedEnemySpawner_C::LoadEnemySaveState(class AGameModeBase* CallFunc_GetGameMode_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class AGameplayGM_C* K2Node_DynamicCast_AsGameplay_GM, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "LoadEnemySaveState");

	Params::AAdvancedEnemySpawner_C_LoadEnemySaveState_Params Parms{};

	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_GM = K2Node_DynamicCast_AsGameplay_GM;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.SetupTriggers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      K2Node_MakeStruct_Color                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      K2Node_MakeStruct_Color_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_HasAtLeastOneValidTrigger_bAtLeastOneValidTrigger       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class FString                      CallFunc_GetClassDisplayName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATriggerBase*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAdvancedEnemySpawner_C::SetupTriggers(int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FColor& K2Node_MakeStruct_Color, const struct FColor& K2Node_MakeStruct_Color_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAtLeastOneValidTrigger_bAtLeastOneValidTrigger, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, const class FString& CallFunc_GetClassDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Array_Length_ReturnValue, class ATriggerBase* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "SetupTriggers");

	Params::AAdvancedEnemySpawner_C_SetupTriggers_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_Color = K2Node_MakeStruct_Color;
	Parms.K2Node_MakeStruct_Color_1 = K2Node_MakeStruct_Color_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_HasAtLeastOneValidTrigger_bAtLeastOneValidTrigger = CallFunc_HasAtLeastOneValidTrigger_bAtLeastOneValidTrigger;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_GetClassDisplayName_ReturnValue = CallFunc_GetClassDisplayName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.SetDefaultSphereRadius
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAdvancedEnemySpawner_C::SetDefaultSphereRadius()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "SetDefaultSphereRadius");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.GetSpawnTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                  SpawnTransform                                                   (Parm, OutParm, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_1                    (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)

void AAdvancedEnemySpawner_C::GetSpawnTransform(struct FTransform* SpawnTransform, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "GetSpawnTransform");

	Params::AAdvancedEnemySpawner_C_GetSpawnTransform_Params Parms{};

	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_1 = CallFunc_GetCharacterAs0_Base_As0_Base_1;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_1 = CallFunc_K2_GetComponentToWorld_ReturnValue_1;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnTransform != nullptr)
		*SpawnTransform = std::move(Parms.SpawnTransform);

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.HasAtLeastOneValidTrigger
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bAtLeastOneValidTrigger                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATriggerBase*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAdvancedEnemySpawner_C::HasAtLeastOneValidTrigger(bool* bAtLeastOneValidTrigger, class ATriggerBase* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "HasAtLeastOneValidTrigger");

	Params::AAdvancedEnemySpawner_C_HasAtLeastOneValidTrigger_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bAtLeastOneValidTrigger != nullptr)
		*bAtLeastOneValidTrigger = Parms.bAtLeastOneValidTrigger;

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.TrySpawnEnemyWhenPlayerSpawnedInsideTrigger
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetOverlappingActors_OverlappingActors                  (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATriggerBase*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_GetOverlappingActors_OverlappingActors_1                (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAdvancedEnemySpawner_C::TrySpawnEnemyWhenPlayerSpawnedInsideTrigger(int32 Temp_int_Array_Index_Variable, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class ATriggerBase* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "TrySpawnEnemyWhenPlayerSpawnedInsideTrigger");

	Params::AAdvancedEnemySpawner_C_TrySpawnEnemyWhenPlayerSpawnedInsideTrigger_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetOverlappingActors_OverlappingActors = CallFunc_GetOverlappingActors_OverlappingActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOverlappingActors_OverlappingActors_1 = CallFunc_GetOverlappingActors_OverlappingActors_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.AskGameModeToSpawn
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bShouldSpawn                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_Died_                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_PermanentlyDead_                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_ShouldSpawn                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_StormModeActive                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayGM_C*               LocGameModeRef                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable_1                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_2                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormModeIsActive_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable_3                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FName, struct FMapSaveState>K2Node_Select_Default                                            (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable_4                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMapSaveState               CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayGM_C*               K2Node_DynamicCast_AsGameplay_GM                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEnemySaveState             CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAdvancedEnemySpawner_C::AskGameModeToSpawn(bool* bShouldSpawn, bool Local_Died_, bool Local_PermanentlyDead_, bool Local_ShouldSpawn, bool Local_StormModeActive, class AGameplayGM_C* LocGameModeRef, const class FString& Temp_string_Variable, bool Temp_bool_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, const class FString& CallFunc_Conv_BoolToString_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_StormModeIsActive_ReturnValue, const class FString& Temp_string_Variable_3, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, int32 CallFunc_Array_Add_ReturnValue_3, TMap<class FName, struct FMapSaveState> K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& Temp_string_Variable_4, int32 CallFunc_Array_Add_ReturnValue_4, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_5, class FName CallFunc_Conv_StringToName_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, const struct FMapSaveState& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class AGameplayGM_C* K2Node_DynamicCast_AsGameplay_GM, bool K2Node_DynamicCast_bSuccess_1, const struct FEnemySaveState& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "AskGameModeToSpawn");

	Params::AAdvancedEnemySpawner_C_AskGameModeToSpawn_Params Parms{};

	Parms.Local_Died_ = Local_Died_;
	Parms.Local_PermanentlyDead_ = Local_PermanentlyDead_;
	Parms.Local_ShouldSpawn = Local_ShouldSpawn;
	Parms.Local_StormModeActive = Local_StormModeActive;
	Parms.LocGameModeRef = LocGameModeRef;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_1 = CallFunc_Conv_BoolToString_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_2 = CallFunc_Conv_BoolToString_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_StormModeIsActive_ReturnValue = CallFunc_StormModeIsActive_ReturnValue;
	Parms.Temp_string_Variable_3 = Temp_string_Variable_3;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_string_Variable_4 = Temp_string_Variable_4;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_5 = CallFunc_Array_Add_ReturnValue_5;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_GM = K2Node_DynamicCast_AsGameplay_GM;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (bShouldSpawn != nullptr)
		*bShouldSpawn = Parms.bShouldSpawn;

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.SetEnemySpriteTextColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FColor                      K2Node_MakeStruct_Color                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAdvancedEnemySpawner_C::SetEnemySpriteTextColor(const struct FColor& K2Node_MakeStruct_Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "SetEnemySpriteTextColor");

	Params::AAdvancedEnemySpawner_C_SetEnemySpriteTextColor_Params Parms{};

	Parms.K2Node_MakeStruct_Color = K2Node_MakeStruct_Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.SetErrorSpriteAndTextColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FColor                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAdvancedEnemySpawner_C::SetErrorSpriteAndTextColor(const struct FColor& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "SetErrorSpriteAndTextColor");

	Params::AAdvancedEnemySpawner_C_SetErrorSpriteAndTextColor_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.SetUniqueID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAdvancedEnemySpawner_C::SetUniqueID(const class FString& CallFunc_GetObjectName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "SetUniqueID");

	Params::AAdvancedEnemySpawner_C_SetUniqueID_Params Parms{};

	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.ShouldSpawn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ShouldSpawn                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAdvancedEnemySpawner_C::ShouldSpawn(bool* ShouldSpawn, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "ShouldSpawn");

	Params::AAdvancedEnemySpawner_C_ShouldSpawn_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldSpawn != nullptr)
		*ShouldSpawn = Parms.ShouldSpawn;

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FColor                      K2Node_MakeStruct_Color                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAdvancedEnemySpawner_C::UserConstructionScript(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FColor& K2Node_MakeStruct_Color, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "UserConstructionScript");

	Params::AAdvancedEnemySpawner_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MakeStruct_Color = K2Node_MakeStruct_Color;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.SequencerUpdateSpawners
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAdvancedEnemySpawner_C::SequencerUpdateSpawners()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "SequencerUpdateSpawners");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAdvancedEnemySpawner_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.OnBeginTriggerOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OverlappedActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAdvancedEnemySpawner_C::OnBeginTriggerOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "OnBeginTriggerOverlap");

	Params::AAdvancedEnemySpawner_C_OnBeginTriggerOverlap_Params Parms{};

	Parms.OverlappedActor = OverlappedActor;
	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.OnSpawnedEnemyDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DestroyedActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAdvancedEnemySpawner_C::OnSpawnedEnemyDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "OnSpawnedEnemyDestroyed");

	Params::AAdvancedEnemySpawner_C_OnSpawnedEnemyDestroyed_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.TrySpawnEnemy
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAdvancedEnemySpawner_C::TrySpawnEnemy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "TrySpawnEnemy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.SetEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable_                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AAdvancedEnemySpawner_C::SetEnabled(bool Enable_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "SetEnabled");

	Params::AAdvancedEnemySpawner_C_SetEnabled_Params Parms{};

	Parms.Enable_ = Enable_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.OnEndTriggerOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OverlappedActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAdvancedEnemySpawner_C::OnEndTriggerOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "OnEndTriggerOverlap");

	Params::AAdvancedEnemySpawner_C_OnEndTriggerOverlap_Params Parms{};

	Parms.OverlappedActor = OverlappedActor;
	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.SpawnFromSequencer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAdvancedEnemySpawner_C::SpawnFromSequencer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "SpawnFromSequencer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.BindSpawnerEvent?
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAdvancedEnemySpawner_C::BindSpawnerEvent_()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "BindSpawnerEvent?");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.UnbindSpawnerEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAdvancedEnemySpawner_C::UnbindSpawnerEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "UnbindSpawnerEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.BndEvt__DefaultSphereTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AAdvancedEnemySpawner_C::BndEvt__DefaultSphereTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "BndEvt__DefaultSphereTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::AAdvancedEnemySpawner_C_BndEvt__DefaultSphereTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.BndEvt__DefaultSphereTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAdvancedEnemySpawner_C::BndEvt__DefaultSphereTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "BndEvt__DefaultSphereTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	Params::AAdvancedEnemySpawner_C_BndEvt__DefaultSphereTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.FadeInIfVisible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsCharacterMeshVisible_                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AAdvancedEnemySpawner_C::FadeInIfVisible(bool IsCharacterMeshVisible_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "FadeInIfVisible");

	Params::AAdvancedEnemySpawner_C_FadeInIfVisible_Params Parms{};

	Parms.IsCharacterMeshVisible_ = IsCharacterMeshVisible_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.OnEnemyDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAdvancedEnemySpawner_C::OnEnemyDeath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "OnEnemyDeath");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.EnemySpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAdvancedEnemySpawner_C::EnemySpawned()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "EnemySpawned");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.OnDespawnEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAdvancedEnemySpawner_C::OnDespawnEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "OnDespawnEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.BindVisibilityForBeginPlayOption
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAdvancedEnemySpawner_C::BindVisibilityForBeginPlayOption()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "BindVisibilityForBeginPlayOption");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.ChangeEnemyState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bActivate                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AAdvancedEnemySpawner_C::ChangeEnemyState(bool bActivate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "ChangeEnemyState");

	Params::AAdvancedEnemySpawner_C_ChangeEnemyState_Params Parms{};

	Parms.bActivate = bActivate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.TrySpawnWhenCharacterPossessed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAdvancedEnemySpawner_C::TrySpawnWhenCharacterPossessed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "TrySpawnWhenCharacterPossessed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.ForceSpawnEnemy
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAdvancedEnemySpawner_C::ForceSpawnEnemy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "ForceSpawnEnemy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAdvancedEnemySpawner_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "ReceiveEndPlay");

	Params::AAdvancedEnemySpawner_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.ResetSpawner
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAdvancedEnemySpawner_C::ResetSpawner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "ResetSpawner");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.ResetBeginPlayEnemies
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAdvancedEnemySpawner_C::ResetBeginPlayEnemies()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "ResetBeginPlayEnemies");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.Spawner_DeAggroEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAdvancedEnemySpawner_C::Spawner_DeAggroEnemy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "Spawner_DeAggroEnemy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.Spawner_ReEnableEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAdvancedEnemySpawner_C::Spawner_ReEnableEnemy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "Spawner_ReEnableEnemy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.OnOverlapTrigger
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAdvancedEnemySpawner_C::OnOverlapTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "OnOverlapTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.ExecuteUbergraph_AdvancedEnemySpawner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AActor*                      K2Node_CustomEvent_OverlappedActor_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_OtherActor_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class AActor*                      K2Node_CustomEvent_DestroyedActor                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AskGameModeToSpawn_bShouldSpawn                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Enable_                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_OverlappedActor                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_OtherActor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_IsCharacterMeshVisible_                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetSpawnTransform_SpawnTransform                        (IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AskGameModeToSpawn_bShouldSpawn_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bActivate                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IEnemyCommonInterface_C>CallFunc_Enemy_ReEnable_self_CastInput                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IEnemyCommonInterface_C>CallFunc_Enemy_DeAggroPlayer_self_CastInput                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int64                              CallFunc_GetFrameCount_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGamePlayGameState_C*        CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Get_Next_Spawn_Frame_TargetFrame                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATriggerBase*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_Int64Int64_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOverlappingActor_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// TScriptInterface<class IEnemySpawnInterface_C>K2Node_DynamicCast_AsEnemy_Spawn_Interface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IEnemySpawnInterface_C>K2Node_DynamicCast_AsEnemy_Spawn_Interface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)

void AAdvancedEnemySpawner_C::ExecuteUbergraph_AdvancedEnemySpawner(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* K2Node_CustomEvent_OverlappedActor_1, class AActor* K2Node_CustomEvent_OtherActor_1, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* K2Node_CustomEvent_DestroyedActor, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_AskGameModeToSpawn_bShouldSpawn, bool Temp_bool_IsClosed_Variable, bool K2Node_Event_Enable_, class AActor* K2Node_CustomEvent_OverlappedActor, class AActor* K2Node_CustomEvent_OtherActor, class AZero_Base_C* K2Node_DynamicCast_As0_Base_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanAND_ReturnValue, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class AZero_Base_C* K2Node_DynamicCast_As0_Base_2, bool K2Node_DynamicCast_bSuccess_2, class AZero_Base_C* K2Node_DynamicCast_As0_Base_3, bool K2Node_DynamicCast_bSuccess_3, bool K2Node_CustomEvent_IsCharacterMeshVisible_, const struct FTransform& CallFunc_GetSpawnTransform_SpawnTransform, bool CallFunc_BooleanAND_ReturnValue_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_AskGameModeToSpawn_bShouldSpawn_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool K2Node_CustomEvent_bActivate, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, TScriptInterface<class IEnemyCommonInterface_C> CallFunc_Enemy_ReEnable_self_CastInput, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_2, TScriptInterface<class IEnemyCommonInterface_C> CallFunc_Enemy_DeAggroPlayer_self_CastInput, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsValid_ReturnValue_6, bool Temp_bool_IsClosed_Variable_1, int64 CallFunc_GetFrameCount_ReturnValue, class AGamePlayGameState_C* CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState, int64 CallFunc_Get_Next_Spawn_Frame_TargetFrame, class ATriggerBase* CallFunc_Array_Get_Item, bool CallFunc_GreaterEqual_Int64Int64_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsOverlappingActor_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AEnemyCharacter_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsVisible_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, TScriptInterface<class IEnemySpawnInterface_C> K2Node_DynamicCast_AsEnemy_Spawn_Interface, bool K2Node_DynamicCast_bSuccess_4, TScriptInterface<class IEnemySpawnInterface_C> K2Node_DynamicCast_AsEnemy_Spawn_Interface_1, bool K2Node_DynamicCast_bSuccess_5, const struct FTransform& CallFunc_GetTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "ExecuteUbergraph_AdvancedEnemySpawner");

	Params::AAdvancedEnemySpawner_C_ExecuteUbergraph_AdvancedEnemySpawner_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_OverlappedActor_1 = K2Node_CustomEvent_OverlappedActor_1;
	Parms.K2Node_CustomEvent_OtherActor_1 = K2Node_CustomEvent_OtherActor_1;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_DestroyedActor = K2Node_CustomEvent_DestroyedActor;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_AskGameModeToSpawn_bShouldSpawn = CallFunc_AskGameModeToSpawn_bShouldSpawn;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_Enable_ = K2Node_Event_Enable_;
	Parms.K2Node_CustomEvent_OverlappedActor = K2Node_CustomEvent_OverlappedActor;
	Parms.K2Node_CustomEvent_OtherActor = K2Node_CustomEvent_OtherActor;
	Parms.K2Node_DynamicCast_As0_Base_1 = K2Node_DynamicCast_As0_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent_1 = K2Node_ComponentBoundEvent_OverlappedComponent_1;
	Parms.K2Node_ComponentBoundEvent_OtherActor_1 = K2Node_ComponentBoundEvent_OtherActor_1;
	Parms.K2Node_ComponentBoundEvent_OtherComp_1 = K2Node_ComponentBoundEvent_OtherComp_1;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex_1 = K2Node_ComponentBoundEvent_OtherBodyIndex_1;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.K2Node_DynamicCast_As0_Base_2 = K2Node_DynamicCast_As0_Base_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_As0_Base_3 = K2Node_DynamicCast_As0_Base_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_CustomEvent_IsCharacterMeshVisible_ = K2Node_CustomEvent_IsCharacterMeshVisible_;
	Parms.CallFunc_GetSpawnTransform_SpawnTransform = CallFunc_GetSpawnTransform_SpawnTransform;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_AskGameModeToSpawn_bShouldSpawn_1 = CallFunc_AskGameModeToSpawn_bShouldSpawn_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.K2Node_CustomEvent_bActivate = K2Node_CustomEvent_bActivate;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_Enemy_ReEnable_self_CastInput = CallFunc_Enemy_ReEnable_self_CastInput;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Enemy_DeAggroPlayer_self_CastInput = CallFunc_Enemy_DeAggroPlayer_self_CastInput;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.CallFunc_GetFrameCount_ReturnValue = CallFunc_GetFrameCount_ReturnValue;
	Parms.CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState = CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState;
	Parms.CallFunc_Get_Next_Spawn_Frame_TargetFrame = CallFunc_Get_Next_Spawn_Frame_TargetFrame;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GreaterEqual_Int64Int64_ReturnValue = CallFunc_GreaterEqual_Int64Int64_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_IsOverlappingActor_ReturnValue = CallFunc_IsOverlappingActor_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_DynamicCast_AsEnemy_Spawn_Interface = K2Node_DynamicCast_AsEnemy_Spawn_Interface;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsEnemy_Spawn_Interface_1 = K2Node_DynamicCast_AsEnemy_Spawn_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.OnEnemySpawnWithRef__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAdvancedEnemySpawner_C*     Spawner                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAdvancedEnemySpawner_C::OnEnemySpawnWithRef__DelegateSignature(class AAdvancedEnemySpawner_C* Spawner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "OnEnemySpawnWithRef__DelegateSignature");

	Params::AAdvancedEnemySpawner_C_OnEnemySpawnWithRef__DelegateSignature_Params Parms{};

	Parms.Spawner = Spawner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.OnSpawnedEnemy__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAdvancedEnemySpawner_C::OnSpawnedEnemy__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "OnSpawnedEnemy__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AdvancedEnemySpawner.AdvancedEnemySpawner_C.OnSpawnedEnemyDied__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAdvancedEnemySpawner_C::OnSpawnedEnemyDied__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedEnemySpawner_C", "OnSpawnedEnemyDied__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


