#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Barbarous.Barbarous_C
// (Actor, Pawn)

class UClass* ABarbarous_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Barbarous_C");

	return Clss;
}


// Barbarous_C Barbarous.Default__Barbarous_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABarbarous_C* ABarbarous_C::GetDefaultObj()
{
	static class ABarbarous_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABarbarous_C*>(ABarbarous_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Barbarous.Barbarous_C.NeedsUpdates
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               bNeeds                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_C::NeedsUpdates(bool* bNeeds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "NeedsUpdates");

	Params::ABarbarous_C_NeedsUpdates_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bNeeds != nullptr)
		*bNeeds = Parms.bNeeds;

}


// Function Barbarous.Barbarous_C.HandleLuteAbility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              HP_Bonus                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Stamina_Bonus                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Resolve_Bonus                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_ItemName                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_LuteType           Local_Lute                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Resolve                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_StormMode_GetEquippedLute_Lute                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LuteAbilities_Params_Active_Uses                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LuteAbilities_Params_Active_Minutes                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckPlayerInventoryForItem_Success                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_LuteAbilities_Params_Passive_X                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LuteAbilities_Params_Passive_Y                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::HandleLuteAbility(int32* HP_Bonus, int32* Stamina_Bonus, int32* Resolve_Bonus, class FName Local_ItemName, enum class Enum_LuteType Local_Lute, int32 Local_Resolve, class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 CallFunc_GetNamedPCInt_Value, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_StormMode_GetEquippedLute_Lute, int32 CallFunc_LuteAbilities_Params_Active_Uses, int32 CallFunc_LuteAbilities_Params_Active_Minutes, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_CheckPlayerInventoryForItem_Success, bool CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue, int32 CallFunc_LuteAbilities_Params_Passive_X, int32 CallFunc_LuteAbilities_Params_Passive_Y)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "HandleLuteAbility");

	Params::ABarbarous_C_HandleLuteAbility_Params Parms{};

	Parms.Local_ItemName = Local_ItemName;
	Parms.Local_Lute = Local_Lute;
	Parms.Local_Resolve = Local_Resolve;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_StormMode_GetEquippedLute_Lute = CallFunc_StormMode_GetEquippedLute_Lute;
	Parms.CallFunc_LuteAbilities_Params_Active_Uses = CallFunc_LuteAbilities_Params_Active_Uses;
	Parms.CallFunc_LuteAbilities_Params_Active_Minutes = CallFunc_LuteAbilities_Params_Active_Minutes;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_CheckPlayerInventoryForItem_Success = CallFunc_CheckPlayerInventoryForItem_Success;
	Parms.CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue = CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue;
	Parms.CallFunc_LuteAbilities_Params_Passive_X = CallFunc_LuteAbilities_Params_Passive_X;
	Parms.CallFunc_LuteAbilities_Params_Passive_Y = CallFunc_LuteAbilities_Params_Passive_Y;

	UObject::ProcessEvent(Func, &Parms);

	if (HP_Bonus != nullptr)
		*HP_Bonus = Parms.HP_Bonus;

	if (Stamina_Bonus != nullptr)
		*Stamina_Bonus = Parms.Stamina_Bonus;

	if (Resolve_Bonus != nullptr)
		*Resolve_Bonus = Parms.Resolve_Bonus;

}


// Function Barbarous.Barbarous_C.InitializeMaxResolve
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              MaxResolve                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_HandleLuteAbility_HP_Bonus                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_HandleLuteAbility_Stamina_Bonus                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_HandleLuteAbility_Resolve_Bonus                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::InitializeMaxResolve(float MaxResolve, int32 CallFunc_HandleLuteAbility_HP_Bonus, int32 CallFunc_HandleLuteAbility_Stamina_Bonus, int32 CallFunc_HandleLuteAbility_Resolve_Bonus, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "InitializeMaxResolve");

	Params::ABarbarous_C_InitializeMaxResolve_Params Parms{};

	Parms.MaxResolve = MaxResolve;
	Parms.CallFunc_HandleLuteAbility_HP_Bonus = CallFunc_HandleLuteAbility_HP_Bonus;
	Parms.CallFunc_HandleLuteAbility_Stamina_Bonus = CallFunc_HandleLuteAbility_Stamina_Bonus;
	Parms.CallFunc_HandleLuteAbility_Resolve_Bonus = CallFunc_HandleLuteAbility_Resolve_Bonus;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.DH_TestLightning
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_Rain_C>K2Node_DynamicCast_AsBPI_Rain                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_C::DH_TestLightning(TScriptInterface<class IBPI_Rain_C> K2Node_DynamicCast_AsBPI_Rain, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_TestLightning");

	Params::ABarbarous_C_DH_TestLightning_Params Parms{};

	Parms.K2Node_DynamicCast_AsBPI_Rain = K2Node_DynamicCast_AsBPI_Rain;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.DH_AddCustomRainActor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Rain_StormMode_Crypt_C*  CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Rain_StormMode_FireLevel_C*CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_2                             (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Rain_StormMode_Cathedral_C*CallFunc_FinishSpawningActor_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_3                             (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Rain_StormMode_Fallgrim_C*CallFunc_FinishSpawningActor_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::DH_AddCustomRainActor(int32 Index, bool K2Node_SwitchInteger_CmpSuccess, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Rain_StormMode_Crypt_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABP_Rain_StormMode_FireLevel_C* CallFunc_FinishSpawningActor_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_3, class ABP_Rain_StormMode_Cathedral_C* CallFunc_FinishSpawningActor_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FTransform& CallFunc_MakeTransform_ReturnValue_3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3, class ABP_Rain_StormMode_Fallgrim_C* CallFunc_FinishSpawningActor_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_AddCustomRainActor");

	Params::ABarbarous_C_DH_AddCustomRainActor_Params Parms{};

	Parms.Index = Index;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue_1 = CallFunc_K2_GetActorRotation_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue_2 = CallFunc_K2_GetActorRotation_ReturnValue_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_MakeTransform_ReturnValue_2 = CallFunc_MakeTransform_ReturnValue_2;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue_3 = CallFunc_K2_GetActorRotation_ReturnValue_3;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_2 = CallFunc_FinishSpawningActor_ReturnValue_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_3 = CallFunc_K2_GetActorLocation_ReturnValue_3;
	Parms.CallFunc_MakeTransform_ReturnValue_3 = CallFunc_MakeTransform_ReturnValue_3;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_3 = CallFunc_FinishSpawningActor_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.DH_AddRainActor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Rain_StormMode_Lake_C*   CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Rain_StormMode_Crypt_C*  CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_2                             (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Rain_StormMode_FireLevel_C*CallFunc_FinishSpawningActor_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_3                             (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Rain_StormMode_Cathedral_C*CallFunc_FinishSpawningActor_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_4                             (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Rain_StormMode_Fallgrim_C*CallFunc_FinishSpawningActor_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::DH_AddRainActor(const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Rain_StormMode_Lake_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABP_Rain_StormMode_Crypt_C* CallFunc_FinishSpawningActor_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, class ABP_Rain_StormMode_FireLevel_C* CallFunc_FinishSpawningActor_ReturnValue_2, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_3, bool K2Node_SwitchString_CmpSuccess, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3, class ABP_Rain_StormMode_Cathedral_C* CallFunc_FinishSpawningActor_ReturnValue_3, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, const struct FTransform& CallFunc_MakeTransform_ReturnValue_4, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4, class ABP_Rain_StormMode_Fallgrim_C* CallFunc_FinishSpawningActor_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_AddRainActor");

	Params::ABarbarous_C_DH_AddRainActor_Params Parms{};

	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue_1 = CallFunc_K2_GetActorRotation_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue_2 = CallFunc_K2_GetActorRotation_ReturnValue_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_MakeTransform_ReturnValue_2 = CallFunc_MakeTransform_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_2 = CallFunc_FinishSpawningActor_ReturnValue_2;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue_3 = CallFunc_K2_GetActorRotation_ReturnValue_3;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_3 = CallFunc_K2_GetActorLocation_ReturnValue_3;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue_3 = CallFunc_MakeTransform_ReturnValue_3;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_3 = CallFunc_FinishSpawningActor_ReturnValue_3;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue_4 = CallFunc_K2_GetActorRotation_ReturnValue_4;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_4 = CallFunc_K2_GetActorLocation_ReturnValue_4;
	Parms.CallFunc_MakeTransform_ReturnValue_4 = CallFunc_MakeTransform_ReturnValue_4;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_4 = CallFunc_FinishSpawningActor_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.AddSuperStoneFormShellUpgrade
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UShellUpgradeBase_C*> Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                               Debug                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UShellUpgrade_SuperStoneFormOnEnemyKilled_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::AddSuperStoneFormShellUpgrade(TArray<class UShellUpgradeBase_C*>& Array, bool Debug, class FName ID, class UShellUpgrade_SuperStoneFormOnEnemyKilled_C* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "AddSuperStoneFormShellUpgrade");

	Params::ABarbarous_C_AddSuperStoneFormShellUpgrade_Params Parms{};

	Parms.Array = Array;
	Parms.Debug = Debug;
	Parms.ID = ID;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.AddRiposteStackShellUpgrade
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UShellUpgradeBase_C*> Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// enum class ERiposteTypes           RiposteStackToAdd                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        RiposteStackToAddID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentStackAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UShellUpgrade_GainRiposteStack_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::AddRiposteStackShellUpgrade(TArray<class UShellUpgradeBase_C*>& Array, enum class ERiposteTypes RiposteStackToAdd, class FName RiposteStackToAddID, int32 CurrentStackAmount, class UTexture2D* Icon, class FName ID, class UShellUpgrade_GainRiposteStack_C* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "AddRiposteStackShellUpgrade");

	Params::ABarbarous_C_AddRiposteStackShellUpgrade_Params Parms{};

	Parms.Array = Array;
	Parms.RiposteStackToAdd = RiposteStackToAdd;
	Parms.RiposteStackToAddID = RiposteStackToAddID;
	Parms.CurrentStackAmount = CurrentStackAmount;
	Parms.Icon = Icon;
	Parms.ID = ID;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.SetCharacterMaxStamina
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AddDeflectStacks                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              MaxStamina                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetParryStacksStaminaBonus_StaminaBonus                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::SetCharacterMaxStamina(bool AddDeflectStacks, float MaxStamina, int32 Temp_int_Variable, int32 CallFunc_GetParryStacksStaminaBonus_StaminaBonus, bool Temp_bool_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "SetCharacterMaxStamina");

	Params::ABarbarous_C_SetCharacterMaxStamina_Params Parms{};

	Parms.AddDeflectStacks = AddDeflectStacks;
	Parms.MaxStamina = MaxStamina;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetParryStacksStaminaBonus_StaminaBonus = CallFunc_GetParryStacksStaminaBonus_StaminaBonus;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.AddParryStackShellUpgrade
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UShellUpgradeBase_C*> Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ParryStackToAdd                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentStackAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UShellUpgrade_GainParryStack_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::AddParryStackShellUpgrade(TArray<class UShellUpgradeBase_C*>& Array, class FName ID, class FName ParryStackToAdd, int32 CurrentStackAmount, class UTexture2D* Icon, class UShellUpgrade_GainParryStack_C* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "AddParryStackShellUpgrade");

	Params::ABarbarous_C_AddParryStackShellUpgrade_Params Parms{};

	Parms.Array = Array;
	Parms.ID = ID;
	Parms.ParryStackToAdd = ParryStackToAdd;
	Parms.CurrentStackAmount = CurrentStackAmount;
	Parms.Icon = Icon;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.Hadern_UpdateCurrentHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::Hadern_UpdateCurrentHealth(float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "Hadern_UpdateCurrentHealth");

	Params::ABarbarous_C_Hadern_UpdateCurrentHealth_Params Parms{};

	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.AddChangeParryMontageShellUpgrade
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UShellUpgradeBase_C*> Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UShellUpgrade_ChangeParryMontage_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::AddChangeParryMontageShellUpgrade(TArray<class UShellUpgradeBase_C*>& Array, class FName ID, int32 Index, class UShellUpgrade_ChangeParryMontage_C* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "AddChangeParryMontageShellUpgrade");

	Params::ABarbarous_C_AddChangeParryMontageShellUpgrade_Params Parms{};

	Parms.Array = Array;
	Parms.ID = ID;
	Parms.Index = Index;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.Hadern_ApplyDominanceSkill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Local_Ability                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRiposteStacks_Cathedral_Stacks                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRiposteStacks_Cathedral_Max                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRiposteStacks_Crypt_Stacks                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRiposteStacks_Crypt_Max                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRiposteStacks_Fire_Stacks                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRiposteStacks_Fire_Max                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRiposteStacks_Heal_Stacks                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRiposteStacks_Heal_Max                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCurrentHadernAbilityForSlot_AbilityID                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::Hadern_ApplyDominanceSkill(class FName Local_Ability, int32 CallFunc_GetRiposteStacks_Cathedral_Stacks, int32 CallFunc_GetRiposteStacks_Cathedral_Max, int32 CallFunc_GetRiposteStacks_Crypt_Stacks, int32 CallFunc_GetRiposteStacks_Crypt_Max, int32 CallFunc_GetRiposteStacks_Fire_Stacks, int32 CallFunc_GetRiposteStacks_Fire_Max, int32 CallFunc_GetRiposteStacks_Heal_Stacks, int32 CallFunc_GetRiposteStacks_Heal_Max, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool K2Node_SwitchName_CmpSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetCurrentHadernAbilityForSlot_AbilityID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "Hadern_ApplyDominanceSkill");

	Params::ABarbarous_C_Hadern_ApplyDominanceSkill_Params Parms{};

	Parms.Local_Ability = Local_Ability;
	Parms.CallFunc_GetRiposteStacks_Cathedral_Stacks = CallFunc_GetRiposteStacks_Cathedral_Stacks;
	Parms.CallFunc_GetRiposteStacks_Cathedral_Max = CallFunc_GetRiposteStacks_Cathedral_Max;
	Parms.CallFunc_GetRiposteStacks_Crypt_Stacks = CallFunc_GetRiposteStacks_Crypt_Stacks;
	Parms.CallFunc_GetRiposteStacks_Crypt_Max = CallFunc_GetRiposteStacks_Crypt_Max;
	Parms.CallFunc_GetRiposteStacks_Fire_Stacks = CallFunc_GetRiposteStacks_Fire_Stacks;
	Parms.CallFunc_GetRiposteStacks_Fire_Max = CallFunc_GetRiposteStacks_Fire_Max;
	Parms.CallFunc_GetRiposteStacks_Heal_Stacks = CallFunc_GetRiposteStacks_Heal_Stacks;
	Parms.CallFunc_GetRiposteStacks_Heal_Max = CallFunc_GetRiposteStacks_Heal_Max;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentHadernAbilityForSlot_AbilityID = CallFunc_GetCurrentHadernAbilityForSlot_AbilityID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.Hadern_ApplyEnduranceSkill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Local_Ability                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetParryStacks_Tar_Stacks                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetParryStacks_Resolve_Stacks                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetParryStacks_Stamina_Stacks                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetParryStacks_Health_Stacks                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCurrentHadernAbilityForSlot_AbilityID                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::Hadern_ApplyEnduranceSkill(class FName Local_Ability, int32 CallFunc_GetParryStacks_Tar_Stacks, int32 CallFunc_GetParryStacks_Resolve_Stacks, int32 CallFunc_GetParryStacks_Stamina_Stacks, int32 CallFunc_GetParryStacks_Health_Stacks, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool K2Node_SwitchName_CmpSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetCurrentHadernAbilityForSlot_AbilityID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "Hadern_ApplyEnduranceSkill");

	Params::ABarbarous_C_Hadern_ApplyEnduranceSkill_Params Parms{};

	Parms.Local_Ability = Local_Ability;
	Parms.CallFunc_GetParryStacks_Tar_Stacks = CallFunc_GetParryStacks_Tar_Stacks;
	Parms.CallFunc_GetParryStacks_Resolve_Stacks = CallFunc_GetParryStacks_Resolve_Stacks;
	Parms.CallFunc_GetParryStacks_Stamina_Stacks = CallFunc_GetParryStacks_Stamina_Stacks;
	Parms.CallFunc_GetParryStacks_Health_Stacks = CallFunc_GetParryStacks_Health_Stacks;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentHadernAbilityForSlot_AbilityID = CallFunc_GetCurrentHadernAbilityForSlot_AbilityID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.Hadern_ApplyResolveSkill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Local_Ability                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCurrentHadernAbilityForSlot_AbilityID                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::Hadern_ApplyResolveSkill(class FName Local_Ability, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool K2Node_SwitchName_CmpSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetCurrentHadernAbilityForSlot_AbilityID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "Hadern_ApplyResolveSkill");

	Params::ABarbarous_C_Hadern_ApplyResolveSkill_Params Parms{};

	Parms.Local_Ability = Local_Ability;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentHadernAbilityForSlot_AbilityID = CallFunc_GetCurrentHadernAbilityForSlot_AbilityID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.Hadern_ApplyDeathSkill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Local_Ability                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCurrentHadernAbilityForSlot_AbilityID                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::Hadern_ApplyDeathSkill(class FName Local_Ability, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool K2Node_SwitchName_CmpSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetCurrentHadernAbilityForSlot_AbilityID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "Hadern_ApplyDeathSkill");

	Params::ABarbarous_C_Hadern_ApplyDeathSkill_Params Parms{};

	Parms.Local_Ability = Local_Ability;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentHadernAbilityForSlot_AbilityID = CallFunc_GetCurrentHadernAbilityForSlot_AbilityID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.Hadern_ApplyKnowledgeSkill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Local_Ability                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCurrentHadernAbilityForSlot_AbilityID                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::Hadern_ApplyKnowledgeSkill(class FName Local_Ability, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool K2Node_SwitchName_CmpSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetCurrentHadernAbilityForSlot_AbilityID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "Hadern_ApplyKnowledgeSkill");

	Params::ABarbarous_C_Hadern_ApplyKnowledgeSkill_Params Parms{};

	Parms.Local_Ability = Local_Ability;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentHadernAbilityForSlot_AbilityID = CallFunc_GetCurrentHadernAbilityForSlot_AbilityID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.Hadern_ApplyStrenghtSkill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Local_Ability                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCurrentHadernAbilityForSlot_AbilityID                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::Hadern_ApplyStrenghtSkill(class FName Local_Ability, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool K2Node_SwitchName_CmpSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetCurrentHadernAbilityForSlot_AbilityID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "Hadern_ApplyStrenghtSkill");

	Params::ABarbarous_C_Hadern_ApplyStrenghtSkill_Params Parms{};

	Parms.Local_Ability = Local_Ability;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentHadernAbilityForSlot_AbilityID = CallFunc_GetCurrentHadernAbilityForSlot_AbilityID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.UpdateCurrentResolveClamped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::UpdateCurrentResolveClamped(float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "UpdateCurrentResolveClamped");

	Params::ABarbarous_C_UpdateCurrentResolveClamped_Params Parms{};

	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.NoShellLostOnLastChance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABarbarous_C::NoShellLostOnLastChance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "NoShellLostOnLastChance");

	Params::ABarbarous_C_NoShellLostOnLastChance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Barbarous.Barbarous_C.HasAnyGland
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABarbarous_C::HasAnyGland(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "HasAnyGland");

	Params::ABarbarous_C_HasAnyGland_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Barbarous.Barbarous_C.SetGlandsHiddenState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hidden                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_C::SetGlandsHiddenState(bool Hidden, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "SetGlandsHiddenState");

	Params::ABarbarous_C_SetGlandsHiddenState_Params Parms{};

	Parms.Hidden = Hidden;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.Hadern_ApplyTielAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Local_Ability                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCurrentHadernAbilityForSlot_AbilityID                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::Hadern_ApplyTielAbility(class FName Local_Ability, bool K2Node_SwitchName_CmpSuccess, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetCurrentHadernAbilityForSlot_AbilityID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "Hadern_ApplyTielAbility");

	Params::ABarbarous_C_Hadern_ApplyTielAbility_Params Parms{};

	Parms.Local_Ability = Local_Ability;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentHadernAbilityForSlot_AbilityID = CallFunc_GetCurrentHadernAbilityForSlot_AbilityID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.Hadern_ApplyEredrimAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Local_Ability                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCurrentHadernAbilityForSlot_AbilityID                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::Hadern_ApplyEredrimAbility(class FName Local_Ability, bool K2Node_SwitchName_CmpSuccess, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetCurrentHadernAbilityForSlot_AbilityID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "Hadern_ApplyEredrimAbility");

	Params::ABarbarous_C_Hadern_ApplyEredrimAbility_Params Parms{};

	Parms.Local_Ability = Local_Ability;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentHadernAbilityForSlot_AbilityID = CallFunc_GetCurrentHadernAbilityForSlot_AbilityID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.Hadern_ApplySolomonAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Local_Ability                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCurrentHadernAbilityForSlot_AbilityID                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::Hadern_ApplySolomonAbility(class FName Local_Ability, bool K2Node_SwitchName_CmpSuccess, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetCurrentHadernAbilityForSlot_AbilityID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "Hadern_ApplySolomonAbility");

	Params::ABarbarous_C_Hadern_ApplySolomonAbility_Params Parms{};

	Parms.Local_Ability = Local_Ability;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentHadernAbilityForSlot_AbilityID = CallFunc_GetCurrentHadernAbilityForSlot_AbilityID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.Hadern_ApplyHarrosAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Local_Ability                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCurrentHadernAbilityForSlot_AbilityID                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::Hadern_ApplyHarrosAbility(class FName Local_Ability, bool K2Node_SwitchName_CmpSuccess, const class FString& CallFunc_Conv_NameToString_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetCurrentHadernAbilityForSlot_AbilityID, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "Hadern_ApplyHarrosAbility");

	Params::ABarbarous_C_Hadern_ApplyHarrosAbility_Params Parms{};

	Parms.Local_Ability = Local_Ability;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentHadernAbilityForSlot_AbilityID = CallFunc_GetCurrentHadernAbilityForSlot_AbilityID;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.InitializeHadernAbilities
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::InitializeHadernAbilities()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "InitializeHadernAbilities");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.LastChanceMontageStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::LastChanceMontageStart(float CallFunc_Add_FloatFloat_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "LastChanceMontageStart");

	Params::ABarbarous_C_LastChanceMontageStart_Params Parms{};

	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.ResetToCameraB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_C::ResetToCameraB(const class FString& Reason, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "ResetToCameraB");

	Params::ABarbarous_C_ResetToCameraB_Params Parms{};

	Parms.Reason = Reason;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.CreateDarkFormMID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::CreateDarkFormMID(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "CreateDarkFormMID");

	Params::ABarbarous_C_CreateDarkFormMID_Params Parms{};

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.DH_UnlockAllShellUpgrades
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::DH_UnlockAllShellUpgrades()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_UnlockAllShellUpgrades");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.Barbarous_GetCryptGland
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*        Mesh                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::Barbarous_GetCryptGland(class UStaticMeshComponent** Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "Barbarous_GetCryptGland");

	Params::ABarbarous_C_Barbarous_GetCryptGland_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;

}


// Function Barbarous.Barbarous_C.Barbarous_GetCathedralGland
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*        Mesh                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::Barbarous_GetCathedralGland(class UStaticMeshComponent** Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "Barbarous_GetCathedralGland");

	Params::ABarbarous_C_Barbarous_GetCathedralGland_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;

}


// Function Barbarous.Barbarous_C.Barbarous_GetFireGland
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*        Mesh                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::Barbarous_GetFireGland(class UStaticMeshComponent** Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "Barbarous_GetFireGland");

	Params::ABarbarous_C_Barbarous_GetFireGland_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;

}


// Function Barbarous.Barbarous_C.DH_Save
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameModeUtilInterface_C>K2Node_DynamicCast_AsGame_Mode_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_C::DH_Save(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_Save");

	Params::ABarbarous_C_DH_Save_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Mode_Util_Interface = K2Node_DynamicCast_AsGame_Mode_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.DH_Ragdoll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorUpVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorRightVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::DH_Ragdoll(const class FString& Direction, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, bool K2Node_SwitchString_CmpSuccess, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_4, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_4, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_Ragdoll");

	Params::ABarbarous_C_DH_Ragdoll_Params Parms{};

	Parms.Direction = Direction;
	Parms.CallFunc_GetActorUpVector_ReturnValue = CallFunc_GetActorUpVector_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_2 = CallFunc_Multiply_VectorFloat_ReturnValue_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;
	Parms.CallFunc_GetActorRightVector_ReturnValue = CallFunc_GetActorRightVector_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_3 = CallFunc_Multiply_VectorFloat_ReturnValue_3;
	Parms.CallFunc_Add_VectorVector_ReturnValue_3 = CallFunc_Add_VectorVector_ReturnValue_3;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_4 = CallFunc_Multiply_VectorFloat_ReturnValue_4;
	Parms.CallFunc_Add_VectorVector_ReturnValue_4 = CallFunc_Add_VectorVector_ReturnValue_4;
	Parms.CallFunc_GetSocketLocation_ReturnValue_1 = CallFunc_GetSocketLocation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.DH_KillMe
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::DH_KillMe()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_KillMe");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.DH_Resolve
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::DH_Resolve()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_Resolve");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.LastChanceMontageEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void ABarbarous_C::LastChanceMontageEnd(const class FString& Reason, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "LastChanceMontageEnd");

	Params::ABarbarous_C_LastChanceMontageEnd_Params Parms{};

	Parms.Reason = Reason;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.SetClothMaterialIDs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// TArray<int32>                      K2Node_MakeArray_Array_1                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<int32>                      K2Node_MakeArray_Array_2                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<int32>                      K2Node_MakeArray_Array_3                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<int32>                      K2Node_MakeArray_Array_4                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<int32>                      K2Node_MakeArray_Array_5                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<int32>                      K2Node_MakeArray_Array_6                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<int32>                      K2Node_MakeArray_Array_7                                         (ReferenceParm, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<int32>                      K2Node_MakeArray_Array_8                                         (ReferenceParm, HasGetValueTypeHash)

void ABarbarous_C::SetClothMaterialIDs(TArray<int32>& K2Node_MakeArray_Array, TArray<int32>& K2Node_MakeArray_Array_1, TArray<int32>& K2Node_MakeArray_Array_2, TArray<int32>& K2Node_MakeArray_Array_3, TArray<int32>& K2Node_MakeArray_Array_4, TArray<int32>& K2Node_MakeArray_Array_5, TArray<int32>& K2Node_MakeArray_Array_6, TArray<int32>& K2Node_MakeArray_Array_7, bool K2Node_SwitchEnum_CmpSuccess, TArray<int32>& K2Node_MakeArray_Array_8)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "SetClothMaterialIDs");

	Params::ABarbarous_C_SetClothMaterialIDs_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;
	Parms.K2Node_MakeArray_Array_7 = K2Node_MakeArray_Array_7;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeArray_Array_8 = K2Node_MakeArray_Array_8;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.GetBloodDirectionForCurrentStrike
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Dir                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bSet                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     DirLocalSpace                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// class UAnimMontage*                CallFunc_GetCurrentMontage_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_TransformDirection_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_C::GetBloodDirectionForCurrentStrike(struct FVector* Dir, bool* bSet, const struct FVector& DirLocalSpace, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, const struct FVector& CallFunc_TransformDirection_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FVector& CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FVector& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "GetBloodDirectionForCurrentStrike");

	Params::ABarbarous_C_GetBloodDirectionForCurrentStrike_Params Parms{};

	Parms.DirLocalSpace = DirLocalSpace;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_GetCurrentMontage_ReturnValue = CallFunc_GetCurrentMontage_ReturnValue;
	Parms.CallFunc_TransformDirection_ReturnValue = CallFunc_TransformDirection_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue = CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Dir != nullptr)
		*Dir = std::move(Parms.Dir);

	if (bSet != nullptr)
		*bSet = Parms.bSet;

}


// Function Barbarous.Barbarous_C.DH_UnlockShellUpgrades
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              Shell                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::DH_UnlockShellUpgrades(uint8 Shell, class UDataTable* Temp_object_Variable, uint8 CallFunc_GetValidValue_ReturnValue, class UDataTable* Temp_object_Variable_1, class UDataTable* Temp_object_Variable_2, class UDataTable* Temp_object_Variable_3, class UDataTable* Temp_object_Variable_4, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UDataTable* Temp_object_Variable_5, enum class EArmorTypes Temp_byte_Variable, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class UDataTable* K2Node_Select_Default, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_UnlockShellUpgrades");

	Params::ABarbarous_C_DH_UnlockShellUpgrades_Params Parms{};

	Parms.Shell = Shell;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.DH_UnlockShellUpgrade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::DH_UnlockShellUpgrade(class FName Name, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_UnlockShellUpgrade");

	Params::ABarbarous_C_DH_UnlockShellUpgrade_Params Parms{};

	Parms.Name = Name;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.DH_TestTarnishedSealEmissive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ParameterValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ParameterValue1                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::DH_TestTarnishedSealEmissive(float ParameterValue, float ParameterValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_TestTarnishedSealEmissive");

	Params::ABarbarous_C_DH_TestTarnishedSealEmissive_Params Parms{};

	Parms.ParameterValue = ParameterValue;
	Parms.ParameterValue1 = ParameterValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.SetTarnishedSealEmissiveBasedOnLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetArbNameInChangedSetPure_bIsInSet                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetArbNameInChangedSetPure_bIsInSet_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetArbNameInChangedSetPure_bIsInSet_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_C::SetTarnishedSealEmissiveBasedOnLevel(uint8 CallFunc_MakeLiteralByte_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_GetArbNameInChangedSetPure_bIsInSet, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool K2Node_SwitchString_CmpSuccess, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2, class FName CallFunc_Conv_StringToName_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue_2, bool CallFunc_GetArbNameInChangedSetPure_bIsInSet_1, bool CallFunc_GetArbNameInChangedSetPure_bIsInSet_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "SetTarnishedSealEmissiveBasedOnLevel");

	Params::ABarbarous_C_SetTarnishedSealEmissiveBasedOnLevel_Params Parms{};

	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetArbNameInChangedSetPure_bIsInSet = CallFunc_GetArbNameInChangedSetPure_bIsInSet;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_2 = CallFunc_MakeLiteralByte_ReturnValue_2;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue_2 = CallFunc_Conv_StringToName_ReturnValue_2;
	Parms.CallFunc_GetArbNameInChangedSetPure_bIsInSet_1 = CallFunc_GetArbNameInChangedSetPure_bIsInSet_1;
	Parms.CallFunc_GetArbNameInChangedSetPure_bIsInSet_2 = CallFunc_GetArbNameInChangedSetPure_bIsInSet_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.DH_UnlockAllShellsName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                Local_ShellsID                                                   (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_C::DH_UnlockAllShellsName(const TArray<class FName>& Local_ShellsID, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_UnlockAllShellsName");

	Params::ABarbarous_C_DH_UnlockAllShellsName_Params Parms{};

	Parms.Local_ShellsID = Local_ShellsID;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.SetGlandSMBasedOnLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*        LastGland                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        Gland                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_C::SetGlandSMBasedOnLevel(class UStaticMeshComponent* LastGland, class UStaticMeshComponent** Gland, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "SetGlandSMBasedOnLevel");

	Params::ABarbarous_C_SetGlandSMBasedOnLevel_Params Parms{};

	Parms.LastGland = LastGland;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Gland != nullptr)
		*Gland = Parms.Gland;

}


// Function Barbarous.Barbarous_C.SetupStaticMeshComponentForGland
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGland_Types            Gland                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        SmObjectRef                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_C::SetupStaticMeshComponentForGland(enum class EGland_Types Gland, class UStaticMeshComponent* SmObjectRef, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "SetupStaticMeshComponentForGland");

	Params::ABarbarous_C_SetupStaticMeshComponentForGland_Params Parms{};

	Parms.Gland = Gland;
	Parms.SmObjectRef = SmObjectRef;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.DH_TestCryptBossDefeated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::DH_TestCryptBossDefeated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_TestCryptBossDefeated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.DH_RemoveCryptGland
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DH_RemoveAbritraryNameFromChangedSet_RemovedSuccessfully_(ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_C::DH_RemoveCryptGland(class FName CallFunc_MakeLiteralName_ReturnValue, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, bool CallFunc_DH_RemoveAbritraryNameFromChangedSet_RemovedSuccessfully_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_RemoveCryptGland");

	Params::ABarbarous_C_DH_RemoveCryptGland_Params Parms{};

	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_DH_RemoveAbritraryNameFromChangedSet_RemovedSuccessfully_ = CallFunc_DH_RemoveAbritraryNameFromChangedSet_RemovedSuccessfully_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.Barbarous_ChangeShells
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Fast_Change                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Reinit_Pose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               DidChange                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_C::Barbarous_ChangeShells(bool Fast_Change, bool Reinit_Pose, bool* DidChange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "Barbarous_ChangeShells");

	Params::ABarbarous_C_Barbarous_ChangeShells_Params Parms{};

	Parms.Fast_Change = Fast_Change;
	Parms.Reinit_Pose = Reinit_Pose;

	UObject::ProcessEvent(Func, &Parms);

	if (DidChange != nullptr)
		*DidChange = Parms.DidChange;

}


// Function Barbarous.Barbarous_C.CureAllPoison
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBuffObject_C*               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBuffObjectPoisonDPS_C*      K2Node_DynamicCast_AsBuff_Object_Poison_DPS                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_C::CureAllPoison(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UBuffObject_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UBuffObjectPoisonDPS_C* K2Node_DynamicCast_AsBuff_Object_Poison_DPS, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "CureAllPoison");

	Params::ABarbarous_C_CureAllPoison_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsBuff_Object_Poison_DPS = K2Node_DynamicCast_AsBuff_Object_Poison_DPS;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.DH_UnlockKick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::DH_UnlockKick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_UnlockKick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.DH_UnlockAllWeapons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCharacterWeaponIDFromEnum_ID                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::DH_UnlockAllWeapons(int32 Temp_int_Variable, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class FName CallFunc_GetCharacterWeaponIDFromEnum_ID, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_UnlockAllWeapons");

	Params::ABarbarous_C_DH_UnlockAllWeapons_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetCharacterWeaponIDFromEnum_ID = CallFunc_GetCharacterWeaponIDFromEnum_ID;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.DH_SetShellsRenounced
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_C::DH_SetShellsRenounced(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_SetShellsRenounced");

	Params::ABarbarous_C_DH_SetShellsRenounced_Params Parms{};

	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.DH_ApplyPoisonToPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBuffObjectPoisonDPS_C*      CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::DH_ApplyPoisonToPlayer(class UBuffObjectPoisonDPS_C* CallFunc_SpawnObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_ApplyPoisonToPlayer");

	Params::ABarbarous_C_DH_ApplyPoisonToPlayer_Params Parms{};

	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.DH_ApplyPoisonToAllEnemies
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AEnemyCharacter_C*>   CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_ApplyDamage_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::DH_ApplyPoisonToAllEnemies(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AEnemyCharacter_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class AEnemyCharacter_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_ApplyDamage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_ApplyPoisonToAllEnemies");

	Params::ABarbarous_C_DH_ApplyPoisonToAllEnemies_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_ApplyDamage_ReturnValue = CallFunc_ApplyDamage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.DH_UnlockAllShells
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                Local_ShellsID                                                   (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_C::DH_UnlockAllShells(const TArray<class FName>& Local_ShellsID, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_UnlockAllShells");

	Params::ABarbarous_C_DH_UnlockAllShells_Params Parms{};

	Parms.Local_ShellsID = Local_ShellsID;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.CanUseEffigy
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EArmorTypes             Shell                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetShellUnlockID_ShellUnlockID                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUpgradeUnlocked_bUnlocked                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABarbarous_C::CanUseEffigy(enum class EArmorTypes Shell, class FName CallFunc_GetShellUnlockID_ShellUnlockID, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsUpgradeUnlocked_bUnlocked, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "CanUseEffigy");

	Params::ABarbarous_C_CanUseEffigy_Params Parms{};

	Parms.Shell = Shell;
	Parms.CallFunc_GetShellUnlockID_ShellUnlockID = CallFunc_GetShellUnlockID_ShellUnlockID;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsUpgradeUnlocked_bUnlocked = CallFunc_IsUpgradeUnlocked_bUnlocked;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Barbarous.Barbarous_C.SummonEffigy
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             ShellType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUseEffigy_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUsable_Effigy_C*            CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::SummonEffigy(enum class EArmorTypes ShellType, bool CallFunc_CanUseEffigy_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AUsable_Effigy_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "SummonEffigy");

	Params::ABarbarous_C_SummonEffigy_Params Parms{};

	Parms.ShellType = ShellType;
	Parms.CallFunc_CanUseEffigy_ReturnValue = CallFunc_CanUseEffigy_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.SummonWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EComboTypes             Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUsable_Weapon_C*            CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::SummonWeapon(enum class EComboTypes Weapon, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AUsable_Weapon_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "SummonWeapon");

	Params::ABarbarous_C_SummonWeapon_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.ClearBoneShards
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::ClearBoneShards(class FName CallFunc_MakeLiteralName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "ClearBoneShards");

	Params::ABarbarous_C_ClearBoneShards_Params Parms{};

	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.RefreshDynamicFireSources
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IFireSourceBaseInterface_C>K2Node_DynamicCast_AsFire_Source_Base_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NeedsUpdates_bNeeds                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_C::RefreshDynamicFireSources(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IFireSourceBaseInterface_C> K2Node_DynamicCast_AsFire_Source_Base_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NeedsUpdates_bNeeds, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "RefreshDynamicFireSources");

	Params::ABarbarous_C_RefreshDynamicFireSources_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsFire_Source_Base_Interface = K2Node_DynamicCast_AsFire_Source_Base_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_NeedsUpdates_bNeeds = CallFunc_NeedsUpdates_bNeeds;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.PlayEnvironmentSwordHitEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPhysicalMaterial*           PhysMat                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ImpactPoint                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           Local_PhysMat                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Local_Location                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::PlayEnvironmentSwordHitEffect(class UPhysicalMaterial* PhysMat, const struct FVector& ImpactPoint, class UPhysicalMaterial* Local_PhysMat, const struct FVector& Local_Location, float CallFunc_RandomFloatInRange_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "PlayEnvironmentSwordHitEffect");

	Params::ABarbarous_C_PlayEnvironmentSwordHitEffect_Params Parms{};

	Parms.PhysMat = PhysMat;
	Parms.ImpactPoint = ImpactPoint;
	Parms.Local_PhysMat = Local_PhysMat;
	Parms.Local_Location = Local_Location;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.GetWeaponMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMeshComponent*              WeaponMesh                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Vector_DistanceSquared_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Vector_DistanceSquared_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_C::GetWeaponMesh(class UMeshComponent** WeaponMesh, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, float CallFunc_Vector_DistanceSquared_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, float CallFunc_Vector_DistanceSquared_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "GetWeaponMesh");

	Params::ABarbarous_C_GetWeaponMesh_Params Parms{};

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
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_Vector_DistanceSquared_ReturnValue = CallFunc_Vector_DistanceSquared_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue_1 = CallFunc_GetSocketLocation_ReturnValue_1;
	Parms.CallFunc_Vector_DistanceSquared_ReturnValue_1 = CallFunc_Vector_DistanceSquared_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (WeaponMesh != nullptr)
		*WeaponMesh = Parms.WeaponMesh;

}


// Function Barbarous.Barbarous_C.GetTransformCloserToPoint
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                  T1                                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FTransform                  T2                                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FVector                     P                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Vector_Distance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Vector_Distance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_SelectTransform_ReturnValue                             (IsPlainOldData, NoDestructor)

struct FTransform ABarbarous_C::GetTransformCloserToPoint(const struct FTransform& T1, const struct FTransform& T2, const struct FVector& P, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, float CallFunc_Vector_Distance_ReturnValue, float CallFunc_Vector_Distance_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, const struct FTransform& CallFunc_SelectTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "GetTransformCloserToPoint");

	Params::ABarbarous_C_GetTransformCloserToPoint_Params Parms{};

	Parms.T1 = T1;
	Parms.T2 = T2;
	Parms.P = P;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;
	Parms.CallFunc_Vector_Distance_ReturnValue_1 = CallFunc_Vector_Distance_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_SelectTransform_ReturnValue = CallFunc_SelectTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Barbarous.Barbarous_C.GetBloodSpawnTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               SecondSocket                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue_1                        (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue_2                        (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue_3                        (IsPlainOldData, NoDestructor)
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
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransformCloserToPoint_ReturnValue                   (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransformCloserToPoint_ReturnValue_1                 (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetBloodSpawnTransform_ReturnValue                      (IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetBloodSpawnTransform_SecondSocket                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransformCloserToPoint_ReturnValue_2                 (IsPlainOldData, NoDestructor)

struct FTransform ABarbarous_C::GetBloodSpawnTransform(bool* SecondSocket, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_1, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_2, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_3, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FTransform& CallFunc_GetTransformCloserToPoint_ReturnValue, const struct FTransform& CallFunc_GetTransformCloserToPoint_ReturnValue_1, const struct FTransform& CallFunc_GetBloodSpawnTransform_ReturnValue, bool CallFunc_GetBloodSpawnTransform_SecondSocket, const struct FTransform& CallFunc_GetTransformCloserToPoint_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "GetBloodSpawnTransform");

	Params::ABarbarous_C_GetBloodSpawnTransform_Params Parms{};

	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_GetSocketTransform_ReturnValue_1 = CallFunc_GetSocketTransform_ReturnValue_1;
	Parms.CallFunc_GetSocketTransform_ReturnValue_2 = CallFunc_GetSocketTransform_ReturnValue_2;
	Parms.CallFunc_GetSocketTransform_ReturnValue_3 = CallFunc_GetSocketTransform_ReturnValue_3;
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
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetTransformCloserToPoint_ReturnValue = CallFunc_GetTransformCloserToPoint_ReturnValue;
	Parms.CallFunc_GetTransformCloserToPoint_ReturnValue_1 = CallFunc_GetTransformCloserToPoint_ReturnValue_1;
	Parms.CallFunc_GetBloodSpawnTransform_ReturnValue = CallFunc_GetBloodSpawnTransform_ReturnValue;
	Parms.CallFunc_GetBloodSpawnTransform_SecondSocket = CallFunc_GetBloodSpawnTransform_SecondSocket;
	Parms.CallFunc_GetTransformCloserToPoint_ReturnValue_2 = CallFunc_GetTransformCloserToPoint_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (SecondSocket != nullptr)
		*SecondSocket = Parms.SecondSocket;

	return Parms.ReturnValue;

}


// Function Barbarous.Barbarous_C.DH_LightUpGland
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::DH_LightUpGland()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_LightUpGland");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.TryEnableGlands
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasItem_Success                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_HasItem_InventorySlot                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_HasItem_Amount                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasItem_Success_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_HasItem_InventorySlot_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_HasItem_Amount_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasItem_Success_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_HasItem_InventorySlot_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_HasItem_Amount_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::TryEnableGlands(uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2, class FName CallFunc_Conv_StringToName_ReturnValue_2, bool CallFunc_HasItem_Success, int32 CallFunc_HasItem_InventorySlot, int32 CallFunc_HasItem_Amount, bool CallFunc_HasItem_Success_1, int32 CallFunc_HasItem_InventorySlot_1, int32 CallFunc_HasItem_Amount_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2, bool CallFunc_HasItem_Success_2, int32 CallFunc_HasItem_InventorySlot_2, int32 CallFunc_HasItem_Amount_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "TryEnableGlands");

	Params::ABarbarous_C_TryEnableGlands_Params Parms{};

	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_2 = CallFunc_MakeLiteralByte_ReturnValue_2;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2;
	Parms.CallFunc_Conv_StringToName_ReturnValue_2 = CallFunc_Conv_StringToName_ReturnValue_2;
	Parms.CallFunc_HasItem_Success = CallFunc_HasItem_Success;
	Parms.CallFunc_HasItem_InventorySlot = CallFunc_HasItem_InventorySlot;
	Parms.CallFunc_HasItem_Amount = CallFunc_HasItem_Amount;
	Parms.CallFunc_HasItem_Success_1 = CallFunc_HasItem_Success_1;
	Parms.CallFunc_HasItem_InventorySlot_1 = CallFunc_HasItem_InventorySlot_1;
	Parms.CallFunc_HasItem_Amount_1 = CallFunc_HasItem_Amount_1;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2;
	Parms.CallFunc_HasItem_Success_2 = CallFunc_HasItem_Success_2;
	Parms.CallFunc_HasItem_InventorySlot_2 = CallFunc_HasItem_InventorySlot_2;
	Parms.CallFunc_HasItem_Amount_2 = CallFunc_HasItem_Amount_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.DH_ChromaSetMouseLEDColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FChromaSDKColors>    CallFunc_CreateRandomColors2D_ReturnValue                        (ReferenceParm, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::DH_ChromaSetMouseLEDColor(TArray<struct FChromaSDKColors>& CallFunc_CreateRandomColors2D_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_ChromaSetMouseLEDColor");

	Params::ABarbarous_C_DH_ChromaSetMouseLEDColor_Params Parms{};

	Parms.CallFunc_CreateRandomColors2D_ReturnValue = CallFunc_CreateRandomColors2D_ReturnValue;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.DH_StopChromaAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Path                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void ABarbarous_C::DH_StopChromaAnim(const class FString& Path, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_StopChromaAnim");

	Params::ABarbarous_C_DH_StopChromaAnim_Params Parms{};

	Parms.Path = Path;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.DH_PlayChromaAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Path                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void ABarbarous_C::DH_PlayChromaAnim(const class FString& Path, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_PlayChromaAnim");

	Params::ABarbarous_C_DH_PlayChromaAnim_Params Parms{};

	Parms.Path = Path;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.SetLastChanceAvailable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bAvailable                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::SetLastChanceAvailable(bool bAvailable, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "SetLastChanceAvailable");

	Params::ABarbarous_C_SetLastChanceAvailable_Params Parms{};

	Parms.bAvailable = bAvailable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.IsLastChanceAvailable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bAvailable                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_C::IsLastChanceAvailable(bool* bAvailable, int32 CallFunc_GetNamedPCInt_Value, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "IsLastChanceAvailable");

	Params::ABarbarous_C_IsLastChanceAvailable_Params Parms{};

	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bAvailable != nullptr)
		*bAvailable = Parms.bAvailable;

}


// Function Barbarous.Barbarous_C.IsGlandOn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABarbarous_C::IsGlandOn(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "IsGlandOn");

	Params::ABarbarous_C_IsGlandOn_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Barbarous.Barbarous_C.AddSetPlayerBoolShellUpgrade
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UShellUpgradeBase_C*> Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        PlayerBoolName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bBoolValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UShellUpgrade_SetPlayerBool_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::AddSetPlayerBoolShellUpgrade(TArray<class UShellUpgradeBase_C*>& Array, class FName ID, class FName PlayerBoolName, bool bBoolValue, class UShellUpgrade_SetPlayerBool_C* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "AddSetPlayerBoolShellUpgrade");

	Params::ABarbarous_C_AddSetPlayerBoolShellUpgrade_Params Parms{};

	Parms.Array = Array;
	Parms.ID = ID;
	Parms.PlayerBoolName = PlayerBoolName;
	Parms.bBoolValue = bBoolValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.AddUniqueShellUpgrade
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UShellUpgradeBase_C*> Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UClass*                      Class                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UShellUpgradeBase_C*         CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::AddUniqueShellUpgrade(TArray<class UShellUpgradeBase_C*>& Array, class UClass* Class, class FName ID, class UShellUpgradeBase_C* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "AddUniqueShellUpgrade");

	Params::ABarbarous_C_AddUniqueShellUpgrade_Params Parms{};

	Parms.Array = Array;
	Parms.Class = Class;
	Parms.ID = ID;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.AddModifyControllerFloatShellUpgrade
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UShellUpgradeBase_C*> Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Float                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UShellUpgrade_ModifyControllerFloat_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::AddModifyControllerFloatShellUpgrade(TArray<class UShellUpgradeBase_C*>& Array, class FName ID, class FName Float, float Delta, class UShellUpgrade_ModifyControllerFloat_C* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "AddModifyControllerFloatShellUpgrade");

	Params::ABarbarous_C_AddModifyControllerFloatShellUpgrade_Params Parms{};

	Parms.Array = Array;
	Parms.ID = ID;
	Parms.Float = Float;
	Parms.Delta = Delta;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.AddModifyPlayerFloatShellUpgrade
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UShellUpgradeBase_C*> Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        PlayerFloatName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UShellUpgrade_ModifyPlayerFloat_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::AddModifyPlayerFloatShellUpgrade(TArray<class UShellUpgradeBase_C*>& Array, class FName ID, class FName PlayerFloatName, float Delta, class UShellUpgrade_ModifyPlayerFloat_C* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "AddModifyPlayerFloatShellUpgrade");

	Params::ABarbarous_C_AddModifyPlayerFloatShellUpgrade_Params Parms{};

	Parms.Array = Array;
	Parms.ID = ID;
	Parms.PlayerFloatName = PlayerFloatName;
	Parms.Delta = Delta;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.DH_UnlockAllRiposte
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::DH_UnlockAllRiposte()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_UnlockAllRiposte");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.DH_SetGameSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TimeDilation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::DH_SetGameSpeed(float TimeDilation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_SetGameSpeed");

	Params::ABarbarous_C_DH_SetGameSpeed_Params Parms{};

	Parms.TimeDilation = TimeDilation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.DH_ToggleTorch
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsActive                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckPlayerInventoryForGland_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)

void ABarbarous_C::DH_ToggleTorch(bool IsActive, bool CallFunc_CheckPlayerInventoryForGland_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool K2Node_SwitchString_CmpSuccess, bool CallFunc_IsVisible_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_ToggleTorch");

	Params::ABarbarous_C_DH_ToggleTorch_Params Parms{};

	Parms.IsActive = IsActive;
	Parms.CallFunc_CheckPlayerInventoryForGland_ReturnValue = CallFunc_CheckPlayerInventoryForGland_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue_1 = CallFunc_IsVisible_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_1 = CallFunc_Conv_BoolToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.DH_DisableForceFeedback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::DH_DisableForceFeedback(class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_DisableForceFeedback");

	Params::ABarbarous_C_DH_DisableForceFeedback_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.DH_EnableForceFeedback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::DH_EnableForceFeedback(class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_EnableForceFeedback");

	Params::ABarbarous_C_DH_EnableForceFeedback_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.DH_ToggleForcePS4Icons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_C::DH_ToggleForcePS4Icons(class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_ToggleForcePS4Icons");

	Params::ABarbarous_C_DH_ToggleForcePS4Icons_Params Parms{};

	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.DH_ShowLoreNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        LoreID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_LorePopup_C*             CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::DH_ShowLoreNotify(class FName LoreID, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUI_LorePopup_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_ShowLoreNotify");

	Params::ABarbarous_C_DH_ShowLoreNotify_Params Parms{};

	Parms.LoreID = LoreID;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.DH_AddWeaponKeyItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDHDataTableID>      DHItem                                                           (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDHDataTableID>      K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// struct FDHDataTableID              CallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_GetItemFromID_Item                                      (HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::DH_AddWeaponKeyItems(const TArray<struct FDHDataTableID>& DHItem, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FDHDataTableID>& K2Node_MakeArray_Array, const struct FDHDataTableID& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FInventoryItem& CallFunc_GetItemFromID_Item, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_AddWeaponKeyItems");

	Params::ABarbarous_C_DH_AddWeaponKeyItems_Params Parms{};

	Parms.DHItem = DHItem;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetItemFromID_Item = CallFunc_GetItemFromID_Item;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.DH_RemoveUnlocks
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                Empty                                                            (Edit, BlueprintVisible, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::DH_RemoveUnlocks(const TArray<class FName>& Empty, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_RemoveUnlocks");

	Params::ABarbarous_C_DH_RemoveUnlocks_Params Parms{};

	Parms.Empty = Empty;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.DH_DisplayUnlocks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_DebugUnlockedItems_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::DH_DisplayUnlocks(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUI_DebugUnlockedItems_C* CallFunc_Create_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_DisplayUnlocks");

	Params::ABarbarous_C_DH_DisplayUnlocks_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.AddBoneShards
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bForceAmount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bStormSpent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_AmountFinal                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_ForceAmount                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_Amount                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPassiveUnlocked_bUnlocked                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNamedPCInt_Value_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Clamp_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::AddBoneShards(int32 Amount, bool bForceAmount, bool bStormSpent, int32 Local_AmountFinal, bool Local_ForceAmount, int32 Local_Amount, bool Temp_bool_Variable, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, float CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_2, int32 CallFunc_Round_ReturnValue, int32 CallFunc_GetNamedPCInt_Value, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool Temp_bool_Variable_1, int32 K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsPassiveUnlocked_bUnlocked, class FName CallFunc_MakeLiteralName_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_GetNamedPCInt_Value_1, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, int32 CallFunc_Clamp_ReturnValue_1, int32 K2Node_Select_Default_1, int32 CallFunc_Add_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "AddBoneShards");

	Params::ABarbarous_C_AddBoneShards_Params Parms{};

	Parms.Amount = Amount;
	Parms.bForceAmount = bForceAmount;
	Parms.bStormSpent = bStormSpent;
	Parms.Local_AmountFinal = Local_AmountFinal;
	Parms.Local_ForceAmount = Local_ForceAmount;
	Parms.Local_Amount = Local_Amount;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue_1 = CallFunc_MakeLiteralName_ReturnValue_1;
	Parms.CallFunc_MakeLiteralName_ReturnValue_2 = CallFunc_MakeLiteralName_ReturnValue_2;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsPassiveUnlocked_bUnlocked = CallFunc_IsPassiveUnlocked_bUnlocked;
	Parms.CallFunc_MakeLiteralName_ReturnValue_3 = CallFunc_MakeLiteralName_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetNamedPCInt_Value_1 = CallFunc_GetNamedPCInt_Value_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_Clamp_ReturnValue_1 = CallFunc_Clamp_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.DH_SetBoneShards
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::DH_SetBoneShards(int32& Value, int32 CallFunc_GetNamedPCInt_Value, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_SetBoneShards");

	Params::ABarbarous_C_DH_SetBoneShards_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.GetBoostedDmgAgainstActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              BaseDmg                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              BoostedDmg                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAlone_bAlone                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPassiveUnlocked_bUnlocked                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::GetBoostedDmgAgainstActor(class AActor* Actor, float BaseDmg, float* BoostedDmg, bool Temp_bool_Variable, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, float Temp_float_Variable, bool CallFunc_IsAlone_bAlone, float Temp_float_Variable_1, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float Temp_float_Variable_2, bool Temp_bool_Variable_1, float K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsPassiveUnlocked_bUnlocked, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, float K2Node_Select_Default_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "GetBoostedDmgAgainstActor");

	Params::ABarbarous_C_GetBoostedDmgAgainstActor_Params Parms{};

	Parms.Actor = Actor;
	Parms.BaseDmg = BaseDmg;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsEnemy_Character = K2Node_DynamicCast_AsEnemy_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_IsAlone_bAlone = CallFunc_IsAlone_bAlone;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsPassiveUnlocked_bUnlocked = CallFunc_IsPassiveUnlocked_bUnlocked;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (BoostedDmg != nullptr)
		*BoostedDmg = Parms.BoostedDmg;

}


// Function Barbarous.Barbarous_C.SpawnTestKnifes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RotateAngleAxis_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerProjectileKnife_C*    CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::SpawnTestKnifes(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class APlayerProjectileKnife_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "SpawnTestKnifes");

	Params::ABarbarous_C_SpawnTestKnifes_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_RotateAngleAxis_ReturnValue = CallFunc_RotateAngleAxis_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.GetLastChanceLaunchVector
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Impact                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::GetLastChanceLaunchVector(class AActor* DamageCauser, struct FVector* Impact, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "GetLastChanceLaunchVector");

	Params::ABarbarous_C_GetLastChanceLaunchVector_Params Parms{};

	Parms.DamageCauser = DamageCauser;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Impact != nullptr)
		*Impact = std::move(Parms.Impact);

}


// Function Barbarous.Barbarous_C.CheckForHardenTutorial2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameModeUtilInterface_C>CallFunc_GameModeUtils_AddAbritraryNameToChangedSet_self_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameModeUtilInterface_C>CallFunc_GameModeUtils_IsAbritraryNameInSet_self_CastInput       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GameModeUtils_IsAbritraryNameInSet_bIsInSet             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_C::CheckForHardenTutorial2(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, TScriptInterface<class IGameModeUtilInterface_C> CallFunc_GameModeUtils_AddAbritraryNameToChangedSet_self_CastInput, TScriptInterface<class IGameModeUtilInterface_C> CallFunc_GameModeUtils_IsAbritraryNameInSet_self_CastInput, bool CallFunc_GameModeUtils_IsAbritraryNameInSet_bIsInSet, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "CheckForHardenTutorial2");

	Params::ABarbarous_C_CheckForHardenTutorial2_Params Parms{};

	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.CallFunc_GameModeUtils_AddAbritraryNameToChangedSet_self_CastInput = CallFunc_GameModeUtils_AddAbritraryNameToChangedSet_self_CastInput;
	Parms.CallFunc_GameModeUtils_IsAbritraryNameInSet_self_CastInput = CallFunc_GameModeUtils_IsAbritraryNameInSet_self_CastInput;
	Parms.CallFunc_GameModeUtils_IsAbritraryNameInSet_bIsInSet = CallFunc_GameModeUtils_IsAbritraryNameInSet_bIsInSet;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.EquipShell
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             ShellType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::EquipShell(enum class EArmorTypes ShellType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "EquipShell");

	Params::ABarbarous_C_EquipShell_Params Parms{};

	Parms.ShellType = ShellType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.RemoveFireSource
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      FireSource                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IFireSourceBaseInterface_C>K2Node_DynamicCast_AsFire_Source_Base_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IFireSourceBaseInterface_C>K2Node_DynamicCast_AsFire_Source_Base_Interface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_C::RemoveFireSource(class AActor* FireSource, TScriptInterface<class IFireSourceBaseInterface_C> K2Node_DynamicCast_AsFire_Source_Base_Interface, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IFireSourceBaseInterface_C> K2Node_DynamicCast_AsFire_Source_Base_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "RemoveFireSource");

	Params::ABarbarous_C_RemoveFireSource_Params Parms{};

	Parms.FireSource = FireSource;
	Parms.K2Node_DynamicCast_AsFire_Source_Base_Interface = K2Node_DynamicCast_AsFire_Source_Base_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsFire_Source_Base_Interface_1 = K2Node_DynamicCast_AsFire_Source_Base_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.AddFireSource
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      FireSource                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IFireSourceBaseInterface_C>K2Node_DynamicCast_AsFire_Source_Base_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IFireSourceBaseInterface_C>K2Node_DynamicCast_AsFire_Source_Base_Interface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IFireSourceBaseInterface_C>K2Node_DynamicCast_AsFire_Source_Base_Interface_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_C::AddFireSource(class AActor* FireSource, TScriptInterface<class IFireSourceBaseInterface_C> K2Node_DynamicCast_AsFire_Source_Base_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IFireSourceBaseInterface_C> K2Node_DynamicCast_AsFire_Source_Base_Interface_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IFireSourceBaseInterface_C> K2Node_DynamicCast_AsFire_Source_Base_Interface_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "AddFireSource");

	Params::ABarbarous_C_AddFireSource_Params Parms{};

	Parms.FireSource = FireSource;
	Parms.K2Node_DynamicCast_AsFire_Source_Base_Interface = K2Node_DynamicCast_AsFire_Source_Base_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFire_Source_Base_Interface_1 = K2Node_DynamicCast_AsFire_Source_Base_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsFire_Source_Base_Interface_2 = K2Node_DynamicCast_AsFire_Source_Base_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.SetCharacterCurrentHP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PlayerHealth                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::SetCharacterCurrentHP(float PlayerHealth, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "SetCharacterCurrentHP");

	Params::ABarbarous_C_SetCharacterCurrentHP_Params Parms{};

	Parms.PlayerHealth = PlayerHealth;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1 = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.SetCharacterMaxHP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AddDeflectStacks                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              PlayerMaxHealth                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetParryStacksHealthBonus_HealthBonus                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::SetCharacterMaxHP(bool AddDeflectStacks, int32 PlayerMaxHealth, int32 CallFunc_GetParryStacksHealthBonus_HealthBonus, int32 Temp_int_Variable, bool Temp_bool_Variable, int32 K2Node_Select_Default, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "SetCharacterMaxHP");

	Params::ABarbarous_C_SetCharacterMaxHP_Params Parms{};

	Parms.AddDeflectStacks = AddDeflectStacks;
	Parms.PlayerMaxHealth = PlayerMaxHealth;
	Parms.CallFunc_GetParryStacksHealthBonus_HealthBonus = CallFunc_GetParryStacksHealthBonus_HealthBonus;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.StopGlow__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABarbarous_C::StopGlow__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "StopGlow__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.StopGlow__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABarbarous_C::StopGlow__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "StopGlow__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.StartToGlow__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABarbarous_C::StartToGlow__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "StartToGlow__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.StartToGlow__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABarbarous_C::StartToGlow__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "StartToGlow__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.AnimateFireEffectForPower__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABarbarous_C::AnimateFireEffectForPower__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "AnimateFireEffectForPower__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.AnimateFireEffectForPower__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABarbarous_C::AnimateFireEffectForPower__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "AnimateFireEffectForPower__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.AnimateFireEffect__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABarbarous_C::AnimateFireEffect__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "AnimateFireEffect__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.AnimateFireEffect__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABarbarous_C::AnimateFireEffect__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "AnimateFireEffect__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.LastChanceDarkFromEffect__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABarbarous_C::LastChanceDarkFromEffect__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "LastChanceDarkFromEffect__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.LastChanceDarkFromEffect__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABarbarous_C::LastChanceDarkFromEffect__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "LastChanceDarkFromEffect__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.InpActEvt_SwitchToNormalCamera_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABarbarous_C::InpActEvt_SwitchToNormalCamera_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "InpActEvt_SwitchToNormalCamera_K2Node_InputActionEvent_3");

	Params::ABarbarous_C_InpActEvt_SwitchToNormalCamera_K2Node_InputActionEvent_3_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.InpActEvt_SwitchToTempCameraC_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABarbarous_C::InpActEvt_SwitchToTempCameraC_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "InpActEvt_SwitchToTempCameraC_K2Node_InputActionEvent_2");

	Params::ABarbarous_C_InpActEvt_SwitchToTempCameraC_K2Node_InputActionEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.OnNotifyEnd_17549A504E1C56D33FF99E82CB64DBC8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::OnNotifyEnd_17549A504E1C56D33FF99E82CB64DBC8(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "OnNotifyEnd_17549A504E1C56D33FF99E82CB64DBC8");

	Params::ABarbarous_C_OnNotifyEnd_17549A504E1C56D33FF99E82CB64DBC8_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.OnNotifyBegin_17549A504E1C56D33FF99E82CB64DBC8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::OnNotifyBegin_17549A504E1C56D33FF99E82CB64DBC8(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "OnNotifyBegin_17549A504E1C56D33FF99E82CB64DBC8");

	Params::ABarbarous_C_OnNotifyBegin_17549A504E1C56D33FF99E82CB64DBC8_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.OnInterrupted_17549A504E1C56D33FF99E82CB64DBC8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::OnInterrupted_17549A504E1C56D33FF99E82CB64DBC8(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "OnInterrupted_17549A504E1C56D33FF99E82CB64DBC8");

	Params::ABarbarous_C_OnInterrupted_17549A504E1C56D33FF99E82CB64DBC8_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.OnBlendOut_17549A504E1C56D33FF99E82CB64DBC8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::OnBlendOut_17549A504E1C56D33FF99E82CB64DBC8(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "OnBlendOut_17549A504E1C56D33FF99E82CB64DBC8");

	Params::ABarbarous_C_OnBlendOut_17549A504E1C56D33FF99E82CB64DBC8_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.OnCompleted_17549A504E1C56D33FF99E82CB64DBC8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::OnCompleted_17549A504E1C56D33FF99E82CB64DBC8(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "OnCompleted_17549A504E1C56D33FF99E82CB64DBC8");

	Params::ABarbarous_C_OnCompleted_17549A504E1C56D33FF99E82CB64DBC8_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.OnNotifyEnd_9D67565F4D84698709D082B2834A7774
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::OnNotifyEnd_9D67565F4D84698709D082B2834A7774(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "OnNotifyEnd_9D67565F4D84698709D082B2834A7774");

	Params::ABarbarous_C_OnNotifyEnd_9D67565F4D84698709D082B2834A7774_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.OnNotifyBegin_9D67565F4D84698709D082B2834A7774
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::OnNotifyBegin_9D67565F4D84698709D082B2834A7774(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "OnNotifyBegin_9D67565F4D84698709D082B2834A7774");

	Params::ABarbarous_C_OnNotifyBegin_9D67565F4D84698709D082B2834A7774_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.OnInterrupted_9D67565F4D84698709D082B2834A7774
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::OnInterrupted_9D67565F4D84698709D082B2834A7774(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "OnInterrupted_9D67565F4D84698709D082B2834A7774");

	Params::ABarbarous_C_OnInterrupted_9D67565F4D84698709D082B2834A7774_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.OnBlendOut_9D67565F4D84698709D082B2834A7774
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::OnBlendOut_9D67565F4D84698709D082B2834A7774(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "OnBlendOut_9D67565F4D84698709D082B2834A7774");

	Params::ABarbarous_C_OnBlendOut_9D67565F4D84698709D082B2834A7774_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.OnCompleted_9D67565F4D84698709D082B2834A7774
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::OnCompleted_9D67565F4D84698709D082B2834A7774(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "OnCompleted_9D67565F4D84698709D082B2834A7774");

	Params::ABarbarous_C_OnCompleted_9D67565F4D84698709D082B2834A7774_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.InpActEvt_SwitchToTempCameraB_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABarbarous_C::InpActEvt_SwitchToTempCameraB_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "InpActEvt_SwitchToTempCameraB_K2Node_InputActionEvent_1");

	Params::ABarbarous_C_InpActEvt_SwitchToTempCameraB_K2Node_InputActionEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.OnNotifyEnd_4DA7D9ED4C37B557C854248B9FB2791B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::OnNotifyEnd_4DA7D9ED4C37B557C854248B9FB2791B(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "OnNotifyEnd_4DA7D9ED4C37B557C854248B9FB2791B");

	Params::ABarbarous_C_OnNotifyEnd_4DA7D9ED4C37B557C854248B9FB2791B_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.OnNotifyBegin_4DA7D9ED4C37B557C854248B9FB2791B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::OnNotifyBegin_4DA7D9ED4C37B557C854248B9FB2791B(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "OnNotifyBegin_4DA7D9ED4C37B557C854248B9FB2791B");

	Params::ABarbarous_C_OnNotifyBegin_4DA7D9ED4C37B557C854248B9FB2791B_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.OnInterrupted_4DA7D9ED4C37B557C854248B9FB2791B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::OnInterrupted_4DA7D9ED4C37B557C854248B9FB2791B(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "OnInterrupted_4DA7D9ED4C37B557C854248B9FB2791B");

	Params::ABarbarous_C_OnInterrupted_4DA7D9ED4C37B557C854248B9FB2791B_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.OnBlendOut_4DA7D9ED4C37B557C854248B9FB2791B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::OnBlendOut_4DA7D9ED4C37B557C854248B9FB2791B(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "OnBlendOut_4DA7D9ED4C37B557C854248B9FB2791B");

	Params::ABarbarous_C_OnBlendOut_4DA7D9ED4C37B557C854248B9FB2791B_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.OnCompleted_4DA7D9ED4C37B557C854248B9FB2791B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::OnCompleted_4DA7D9ED4C37B557C854248B9FB2791B(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "OnCompleted_4DA7D9ED4C37B557C854248B9FB2791B");

	Params::ABarbarous_C_OnCompleted_4DA7D9ED4C37B557C854248B9FB2791B_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.InpActEvt_SwitchToTempCameraA_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABarbarous_C::InpActEvt_SwitchToTempCameraA_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "InpActEvt_SwitchToTempCameraA_K2Node_InputActionEvent_0");

	Params::ABarbarous_C_InpActEvt_SwitchToTempCameraA_K2Node_InputActionEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.OnNindjaDash
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bStart                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_C::OnNindjaDash(bool bStart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "OnNindjaDash");

	Params::ABarbarous_C_OnNindjaDash_Params Parms{};

	Parms.bStart = bStart;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.Barbarous_AddFireSource
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      FireSource                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::Barbarous_AddFireSource(class AActor* FireSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "Barbarous_AddFireSource");

	Params::ABarbarous_C_Barbarous_AddFireSource_Params Parms{};

	Parms.FireSource = FireSource;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.Barbarous_RemoveFireSource
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      FireSource                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::Barbarous_RemoveFireSource(class AActor* FireSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "Barbarous_RemoveFireSource");

	Params::ABarbarous_C_Barbarous_RemoveFireSource_Params Parms{};

	Parms.FireSource = FireSource;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.DH_SetMeOnFire
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::DH_SetMeOnFire()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_SetMeOnFire");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.UseItemTaintedNectar
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::UseItemTaintedNectar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "UseItemTaintedNectar");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.OnBottleDropped
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::OnBottleDropped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "OnBottleDropped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.Play_Generic_Animation_ItemConsumed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::Play_Generic_Animation_ItemConsumed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "Play_Generic_Animation_ItemConsumed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.StartDPSBurn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 DPSBurnInstigator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DmgPerSec                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::StartDPSBurn(class AController* DPSBurnInstigator, float DmgPerSec, float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "StartDPSBurn");

	Params::ABarbarous_C_StartDPSBurn_Params Parms{};

	Parms.DPSBurnInstigator = DPSBurnInstigator;
	Parms.DmgPerSec = DmgPerSec;
	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "Update");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.ClearEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  Char                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SlotIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::ClearEffect(class ACharacter* Char, int32 SlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "ClearEffect");

	Params::ABarbarous_C_ClearEffect_Params Parms{};

	Parms.Char = Char;
	Parms.SlotIndex = SlotIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.ApplyEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  Char                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::ApplyEffect(class ACharacter* Char, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "ApplyEffect");

	Params::ABarbarous_C_ApplyEffect_Params Parms{};

	Parms.Char = Char;
	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.DH_SetForceFeedbackScale
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ScaleValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::DH_SetForceFeedbackScale(float ScaleValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_SetForceFeedbackScale");

	Params::ABarbarous_C_DH_SetForceFeedbackScale_Params Parms{};

	Parms.ScaleValue = ScaleValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.DH_PrintForceFeedbackScale
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::DH_PrintForceFeedbackScale()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_PrintForceFeedbackScale");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.DH_SetCameraShakeGlobalScale
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::DH_SetCameraShakeGlobalScale(float Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_SetCameraShakeGlobalScale");

	Params::ABarbarous_C_DH_SetCameraShakeGlobalScale_Params Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.DH_PrintCameraShakeGlobalScale
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::DH_PrintCameraShakeGlobalScale()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_PrintCameraShakeGlobalScale");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.Barbarous_SetInvulnerable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Invulnerable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_C::Barbarous_SetInvulnerable(bool Invulnerable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "Barbarous_SetInvulnerable");

	Params::ABarbarous_C_Barbarous_SetInvulnerable_Params Parms{};

	Parms.Invulnerable = Invulnerable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.DH_PhotoMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::DH_PhotoMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_PhotoMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.DH_TestFadeToWhite
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::DH_TestFadeToWhite()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_TestFadeToWhite");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.0Base_HideSacredGlands
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hidden_                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_C::ZeroBase_HideSacredGlands(bool Hidden_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "0Base_HideSacredGlands");

	Params::ABarbarous_C_ZeroBase_HideSacredGlands_Params Parms{};

	Parms.Hidden_ = Hidden_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.CheckGlandsHiddenState
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::CheckGlandsHiddenState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "CheckGlandsHiddenState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.CharacterUtils_AddRemove_Tar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TarAmount                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bStormSpent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_C::CharacterUtils_AddRemove_Tar(int32 TarAmount, bool bStormSpent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "CharacterUtils_AddRemove_Tar");

	Params::ABarbarous_C_CharacterUtils_AddRemove_Tar_Params Parms{};

	Parms.TarAmount = TarAmount;
	Parms.bStormSpent = bStormSpent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.DestroyBCameraPrintStringReset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::DestroyBCameraPrintStringReset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DestroyBCameraPrintStringReset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.CutsceneEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::CutsceneEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "CutsceneEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.SetBCamFOV
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InFieldOfView                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::SetBCamFOV(float InFieldOfView)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "SetBCamFOV");

	Params::ABarbarous_C_SetBCamFOV_Params Parms{};

	Parms.InFieldOfView = InFieldOfView;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.BurnedMaceSuperAOE
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::BurnedMaceSuperAOE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "BurnedMaceSuperAOE");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.SuperAttack2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::SuperAttack2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "SuperAttack2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.UpdateBCamRot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::UpdateBCamRot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "UpdateBCamRot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.DestroyBCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              BlendTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              BlendExponent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EViewTargetBlendFunctionBlendFunc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::DestroyBCamera(float BlendTime, float BlendExponent, enum class EViewTargetBlendFunction BlendFunc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DestroyBCamera");

	Params::ABarbarous_C_DestroyBCamera_Params Parms{};

	Parms.BlendTime = BlendTime;
	Parms.BlendExponent = BlendExponent;
	Parms.BlendFunc = BlendFunc;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.SpawnAndSwitchToBCamea
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              BlendTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EViewTargetBlendFunctionBlendFunc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              BlendExp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::SpawnAndSwitchToBCamea(float BlendTime, enum class EViewTargetBlendFunction BlendFunc, float BlendExp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "SpawnAndSwitchToBCamea");

	Params::ABarbarous_C_SpawnAndSwitchToBCamea_Params Parms{};

	Parms.BlendTime = BlendTime;
	Parms.BlendFunc = BlendFunc;
	Parms.BlendExp = BlendExp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.LightRigLoop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::LightRigLoop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "LightRigLoop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.OnDamageCaused
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::OnDamageCaused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "OnDamageCaused");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.SetupLightRig
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::SetupLightRig()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "SetupLightRig");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.LoadDesignElementsAfterSaveLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::LoadDesignElementsAfterSaveLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "LoadDesignElementsAfterSaveLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABarbarous_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.OnUpdateLoc
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::OnUpdateLoc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "OnUpdateLoc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.OnFirePowerChargeInterrupted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::OnFirePowerChargeInterrupted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "OnFirePowerChargeInterrupted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.OnFirePowerChargeStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PlayRate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::OnFirePowerChargeStart(float Duration, float PlayRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "OnFirePowerChargeStart");

	Params::ABarbarous_C_OnFirePowerChargeStart_Params Parms{};

	Parms.Duration = Duration;
	Parms.PlayRate = PlayRate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.ReceivePointDamage
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitNormal                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         HitComponent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        BoneName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ShotFromDirection                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABarbarous_C::ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, class FName BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, struct FHitResult& HitInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "ReceivePointDamage");

	Params::ABarbarous_C_ReceivePointDamage_Params Parms{};

	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.HitLocation = HitLocation;
	Parms.HitNormal = HitNormal;
	Parms.HitComponent = HitComponent;
	Parms.BoneName = BoneName;
	Parms.ShotFromDirection = ShotFromDirection;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitInfo = HitInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.ReduceCharacterStats
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::ReduceCharacterStats()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "ReduceCharacterStats");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.SetShellOpacity
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::SetShellOpacity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "SetShellOpacity");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.SetupGhostedMods
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::SetupGhostedMods()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "SetupGhostedMods");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.OnMaceSuperVfxEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::OnMaceSuperVfxEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "OnMaceSuperVfxEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.PlayRagdollGetupMontage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::PlayRagdollGetupMontage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "PlayRagdollGetupMontage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.StartRagdoll
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                ActiveRagdollMontage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::StartRagdoll(class UAnimMontage* ActiveRagdollMontage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "StartRagdoll");

	Params::ABarbarous_C_StartRagdoll_Params Parms{};

	Parms.ActiveRagdollMontage = ActiveRagdollMontage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.ChangedShells_Event_Unbind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::ChangedShells_Event_Unbind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "ChangedShells_Event_Unbind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.ForceApplyLastGaspEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::ForceApplyLastGaspEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "ForceApplyLastGaspEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.DropWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::DropWeapon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DropWeapon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.AttachGlandToDeathShell
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::AttachGlandToDeathShell()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "AttachGlandToDeathShell");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.ResetLastChance
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::ResetLastChance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "ResetLastChance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.NoLastChance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Killer                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::NoLastChance(class AActor* Killer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "NoLastChance");

	Params::ABarbarous_C_NoLastChance_Params Parms{};

	Parms.Killer = Killer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.PlayDeathAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::PlayDeathAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "PlayDeathAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.PlayLastGaspAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::PlayLastGaspAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "PlayLastGaspAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.SavePreviousShell
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::SavePreviousShell()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "SavePreviousShell");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.DH_SetShellLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ShellIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::DH_SetShellLevel(int32 ShellIndex, int32 Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_SetShellLevel");

	Params::ABarbarous_C_DH_SetShellLevel_Params Parms{};

	Parms.ShellIndex = ShellIndex;
	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.RestoreShell
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             ShellToRestore                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::RestoreShell(enum class EArmorTypes ShellToRestore)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "RestoreShell");

	Params::ABarbarous_C_RestoreShell_Params Parms{};

	Parms.ShellToRestore = ShellToRestore;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.ChangedShells_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::ChangedShells_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "ChangedShells_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.OnMaceSuperVfxStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::OnMaceSuperVfxStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "OnMaceSuperVfxStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.LastChance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Impact                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::LastChance(class AActor* DamageCauser, const struct FVector& Impact)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "LastChance");

	Params::ABarbarous_C_LastChance_Params Parms{};

	Parms.DamageCauser = DamageCauser;
	Parms.Impact = Impact;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.UpdateDesignVariables
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::UpdateDesignVariables()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "UpdateDesignVariables");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.InitializeHadernShellUpgrade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UpdateAbilities                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_C::InitializeHadernShellUpgrade(bool UpdateAbilities)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "InitializeHadernShellUpgrade");

	Params::ABarbarous_C_InitializeHadernShellUpgrade_Params Parms{};

	Parms.UpdateAbilities = UpdateAbilities;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.SetDesignVar_HadernShell
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::SetDesignVar_HadernShell()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "SetDesignVar_HadernShell");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.SetDesignVar_NinjaShell
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::SetDesignVar_NinjaShell()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "SetDesignVar_NinjaShell");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.SetDesignVar_HeavyShell
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::SetDesignVar_HeavyShell()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "SetDesignVar_HeavyShell");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.SetDesignVar_FlutedShell
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::SetDesignVar_FlutedShell()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "SetDesignVar_FlutedShell");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.SetDesignVar_BalancedShell
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::SetDesignVar_BalancedShell()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "SetDesignVar_BalancedShell");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.SetDesignVar_DarkForm
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::SetDesignVar_DarkForm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "SetDesignVar_DarkForm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.ToggleGlandSaveState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_C::ToggleGlandSaveState(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "ToggleGlandSaveState");

	Params::ABarbarous_C_ToggleGlandSaveState_Params Parms{};

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.BindGlandSaveStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::BindGlandSaveStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "BindGlandSaveStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.SetGlandEmissiveLow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::SetGlandEmissiveLow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "SetGlandEmissiveLow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.UpdateGlandEmissive
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::UpdateGlandEmissive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "UpdateGlandEmissive");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.ModifyHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::ModifyHealth(float Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "ModifyHealth");

	Params::ABarbarous_C_ModifyHealth_Params Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.InitializeFlutedShellUpgrade
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::InitializeFlutedShellUpgrade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "InitializeFlutedShellUpgrade");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.InitializeLightShellUpgrade
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::InitializeLightShellUpgrade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "InitializeLightShellUpgrade");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.InitializeBalancedShellUpgrades
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::InitializeBalancedShellUpgrades()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "InitializeBalancedShellUpgrades");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "ReceiveTick");

	Params::ABarbarous_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.InitializeHeavyShellUpgrades
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::InitializeHeavyShellUpgrades()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "InitializeHeavyShellUpgrades");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.InitializeShellAbilties
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::InitializeShellAbilties()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "InitializeShellAbilties");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.DH_ActivateInactiveUnlockedShellAbilities
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::DH_ActivateInactiveUnlockedShellAbilities()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_ActivateInactiveUnlockedShellAbilities");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.UpdateShellAbilities
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::UpdateShellAbilities()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "UpdateShellAbilities");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.DH_AddShellBondingPoints
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ShellIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::DH_AddShellBondingPoints(int32 ShellIndex, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_AddShellBondingPoints");

	Params::ABarbarous_C_DH_AddShellBondingPoints_Params Parms{};

	Parms.ShellIndex = ShellIndex;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.ClearShellAbilities
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::ClearShellAbilities()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "ClearShellAbilities");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.DisableGland
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGland_Types            GlandToDisable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::DisableGland(enum class EGland_Types GlandToDisable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DisableGland");

	Params::ABarbarous_C_DisableGland_Params Parms{};

	Parms.GlandToDisable = GlandToDisable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.EnableGland
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGland_Types            GlandType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::EnableGland(enum class EGland_Types GlandType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "EnableGland");

	Params::ABarbarous_C_EnableGland_Params Parms{};

	Parms.GlandType = GlandType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.Change Shells
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               FastChange_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bReinitPose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_C::Change_Shells(bool FastChange_, bool bReinitPose)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "Change Shells");

	Params::ABarbarous_C_Change_Shells_Params Parms{};

	Parms.FastChange_ = FastChange_;
	Parms.bReinitPose = bReinitPose;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.InitializeDesignElements
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::InitializeDesignElements()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "InitializeDesignElements");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.DH_PrintCameraLagSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::DH_PrintCameraLagSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "DH_PrintCameraLagSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.LockOnCameraVariables
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::LockOnCameraVariables()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "LockOnCameraVariables");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.ExecuteUbergraph_Barbarous
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGland_Types            Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGland_Types            Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGland_Types            Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_6                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bStart                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsGlandOn_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_FireSource_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_FireSource                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLastChanceAvailable_bAvailable                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 K2Node_Event_DPSBurnInstigator                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DmgPerSec                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Duration_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetLocalizedEmissiveSourceName_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_Event_Char_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_SlotIndex                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetLocalizedEmissiveMinDistName_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetLocalizedEmissiveMaxDistName_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetLocalizedEmissiveSourceName_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_Event_Char                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Index                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetLocalizedEmissiveMaxDistName_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetLocalizedEmissiveMinDistName_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_ScaleValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetForceFeedbackScale_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// enum class EGland_Types            Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Scale                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreConsoleCheatsEnabled_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_1                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Invulnerable                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsStoneFormDmgResOn_Yes                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Hidden_                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_TarAmount                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bStormSpent                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetHideSacredGland_Hidden_                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_7                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGland_Types            Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetArbNameInChangedSetPure_bIsInSet                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetArbNameInChangedSetPure_bIsInSet_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetArbNameInChangedSetPure_bIsInSet_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_InFieldOfView                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACamera_B_C*                 K2Node_DynamicCast_AsCamera_B                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              K2Node_CustomEvent_BlendTime_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_BlendExponent                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EViewTargetBlendFunctionK2Node_CustomEvent_BlendFunc_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_BlendTime                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EViewTargetBlendFunctionK2Node_CustomEvent_BlendFunc                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_BlendExp                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult_1                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsStoneFormOnCooldown__StoneFormOnCooldown_             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPassiveUnlocked_bUnlocked                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key                                      (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Duration                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_PlayRate                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 K2Node_Event_DamageType                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_HitLocation                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_HitNormal                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_Event_HitComponent                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_BoneName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_ShotFromDirection                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_Event_InstigatedBy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetClosestHitLocationToPoint_OutLocation                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetClosestHitLocationToPoint_OutBoneName                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetClosestHitLocationToPoint_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_LineTraceComponent_HitLocation                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_LineTraceComponent_HitNormal                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_K2_LineTraceComponent_BoneName                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_LineTraceComponent_OutHit                            (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_LineTraceComponent_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetUpgradedMaxShellDeterioration_BoosedMaxCount         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_Event_ActiveRagdollMontage                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TwitchDrop_ShouldUseDarkFormSkin_bYes                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_NoShellLostOnLastChance_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_ShellDyes           CallFunc_GetShellDyes_Dyes                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class FText                        CallFunc_GetShellName_ShellName                                  (None)
// class FText                        CallFunc_GetShellTagline_ShellTagline                            (None)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_6               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLastGaspUnlocked_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_7               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_8               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLastChanceAvailable_bAvailable_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_9               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARagdollImpactEffect_C*      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorScale3D_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_2                             (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_DeathShell_C*            CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_DeathDarkForm_C*         CallFunc_FinishSpawningActor_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Killer                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetShellUnlockID_ShellUnlockID                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUpgradeUnlocked_bUnlocked                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetShellUnlockID_ShellUnlockID_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetShellUnlockID_ShellUnlockID_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUpgradeUnlocked_bUnlocked_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUpgradeUnlocked_bUnlocked_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetShellUnlockID_ShellUnlockID_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetShellUnlockID_ShellUnlockID_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUpgradeUnlocked_bUnlocked_3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUpgradeUnlocked_bUnlocked_4                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_10              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_11              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// int32                              K2Node_CustomEvent_ShellIndex_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Level                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Get_Shell_Bonding_Points_Name_Name                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetShellBondingLevelName_ShellBondingLevelName          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             K2Node_CustomEvent_ShellToRestore                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBuffGenerateResolveWhileShellOff_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLastGaspUnlocked_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetPhysicsLinearVelocity_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_Impact                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetActorScale3D_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_3                             (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_DeathShell_C*            CallFunc_FinishSpawningActor_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UShellUpgradeBase_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_UpdateAbilities                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_1                                    (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_CheckPlayerInventoryForGland_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bEnabled                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_12              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// float                              K2Node_Event_Amount                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (ZeroConstructor, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_13                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_14                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ShellIndex                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Amount                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UShellUpgradeBase_C*> K2Node_Select_Default                                            (ReferenceParm, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable_3                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// TArray<struct FHitResult>          CallFunc_SphereTraceMulti_OutHits                                (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SphereTraceMulti_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_Array_Get_Item_1                                        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BreakHitResult_bBlockingHit_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        K2Node_DynamicCast_AsStatic_Mesh_Component                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_SetGlandSMBasedOnLevel_Gland                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable_4                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// enum class EGland_Types            K2Node_CustomEvent_GlandToDisable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_2                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGland_Types            K2Node_CustomEvent_GlandType                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_3                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default_4                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_5                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UShellUpgradeBase_C*         CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_FastChange_                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bReinitPose                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_20                          (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_21                          (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlatform               CallFunc_GetPlatform_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_2                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_3                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentPersistentLevelName_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_11                            (ZeroConstructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_2                                    (HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UShellUpgradeBase_C*         CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_3                                    (HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IFireSourceBaseInterface_C>K2Node_DynamicCast_AsFire_Source_Base_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::ExecuteUbergraph_Barbarous(int32 EntryPoint, enum class EGland_Types Temp_byte_Variable, float Temp_float_Variable, enum class EGland_Types Temp_byte_Variable_1, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, enum class EArmorTypes Temp_byte_Variable_2, enum class EGland_Types Temp_byte_Variable_3, class UStaticMesh* Temp_object_Variable, class UStaticMesh* Temp_object_Variable_1, class UStaticMesh* Temp_object_Variable_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool Temp_bool_Variable, float Temp_float_Variable_4, float Temp_float_Variable_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, float Temp_float_Variable_6, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_Event_bStart, bool CallFunc_IsGlandOn_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* K2Node_Event_FireSource_1, class AActor* K2Node_Event_FireSource, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsLastChanceAvailable_bAvailable, class AController* K2Node_Event_DPSBurnInstigator, float K2Node_Event_DmgPerSec, float K2Node_Event_Duration_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class FName CallFunc_GetLocalizedEmissiveSourceName_ReturnValue, class ACharacter* K2Node_Event_Char_1, int32 K2Node_Event_SlotIndex, class FName CallFunc_GetLocalizedEmissiveMinDistName_ReturnValue, class FName CallFunc_GetLocalizedEmissiveMaxDistName_ReturnValue, class FName CallFunc_GetLocalizedEmissiveSourceName_ReturnValue_1, class ACharacter* K2Node_Event_Char, int32 K2Node_Event_Index, class FName CallFunc_GetLocalizedEmissiveMaxDistName_ReturnValue_1, class FName CallFunc_GetLocalizedEmissiveMinDistName_ReturnValue_1, float K2Node_CustomEvent_ScaleValue, float CallFunc_GetForceFeedbackScale_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, enum class EGland_Types Temp_byte_Variable_4, float K2Node_CustomEvent_Scale, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, bool CallFunc_AreConsoleCheatsEnabled_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool K2Node_Event_Invulnerable, bool CallFunc_IsStoneFormDmgResOn_Yes, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2, bool K2Node_Event_Hidden_, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, int32 K2Node_Event_TarAmount, bool K2Node_Event_bStormSpent, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetHideSacredGland_Hidden_, float Temp_float_Variable_7, enum class EGland_Types Temp_byte_Variable_5, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_GetArbNameInChangedSetPure_bIsInSet, bool CallFunc_Not_PreBool_ReturnValue_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, bool CallFunc_GetArbNameInChangedSetPure_bIsInSet_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2, class FName CallFunc_Conv_StringToName_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_GetArbNameInChangedSetPure_bIsInSet_2, bool CallFunc_IsValid_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, float K2Node_CustomEvent_InFieldOfView, int32 Temp_int_Loop_Counter_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, class ACamera_B_C* K2Node_DynamicCast_AsCamera_B, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_2, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, float K2Node_CustomEvent_BlendTime_1, float K2Node_CustomEvent_BlendExponent, enum class EViewTargetBlendFunction K2Node_CustomEvent_BlendFunc_1, float K2Node_CustomEvent_BlendTime, enum class EViewTargetBlendFunction K2Node_CustomEvent_BlendFunc, float K2Node_CustomEvent_BlendExp, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_FInterpTo_ReturnValue, float CallFunc_FInterpTo_ReturnValue_1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue_1, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_1, bool CallFunc_IsStoneFormOnCooldown__StoneFormOnCooldown_, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_IsPassiveUnlocked_bUnlocked, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, const struct FKey& K2Node_InputActionEvent_Key, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_3, float K2Node_Event_Duration, float K2Node_Event_PlayRate, float K2Node_Event_Damage, class UDamageType* K2Node_Event_DamageType, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, class UPrimitiveComponent* K2Node_Event_HitComponent, class FName K2Node_Event_BoneName, const struct FVector& K2Node_Event_ShotFromDirection, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser_1, const struct FHitResult& K2Node_Event_HitInfo, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_4, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_5, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_6, const struct FVector& CallFunc_GetClosestHitLocationToPoint_OutLocation, class FName CallFunc_GetClosestHitLocationToPoint_OutBoneName, bool CallFunc_GetClosestHitLocationToPoint_ReturnValue, const struct FVector& CallFunc_K2_LineTraceComponent_HitLocation, const struct FVector& CallFunc_K2_LineTraceComponent_HitNormal, class FName CallFunc_K2_LineTraceComponent_BoneName, const struct FHitResult& CallFunc_K2_LineTraceComponent_OutHit, bool CallFunc_K2_LineTraceComponent_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_2, bool CallFunc_NotEqual_NameName_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, int32 CallFunc_GetUpgradedMaxShellDeterioration_BoosedMaxCount, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, class FName Temp_name_Variable, float CallFunc_Conv_IntToFloat_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class UAnimMontage* K2Node_Event_ActiveRagdollMontage, bool CallFunc_TwitchDrop_ShouldUseDarkFormSkin_bYes, bool CallFunc_Not_PreBool_ReturnValue_2, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_NoShellLostOnLastChance_ReturnValue, int32 Temp_int_Array_Index_Variable, class FName K2Node_CustomEvent_NotifyName_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess_2, const struct FStruct_ShellDyes& CallFunc_GetShellDyes_Dyes, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_3, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5, bool CallFunc_IsValid_ReturnValue_5, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FText CallFunc_GetShellName_ShellName, class FText CallFunc_GetShellTagline_ShellTagline, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, bool CallFunc_IsLastGaspUnlocked_ReturnValue, class FName K2Node_CustomEvent_NotifyName_4, bool CallFunc_BooleanAND_ReturnValue_4, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_7, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_8, bool CallFunc_EqualEqual_ByteByte_ReturnValue_8, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_IsLastChanceAvailable_bAvailable_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_9, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_K2_AttachToComponent_ReturnValue_3, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ARagdollImpactEffect_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FVector& CallFunc_GetActorScale3D_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, class ABP_DeathShell_C* CallFunc_FinishSpawningActor_ReturnValue_1, class ABP_DeathDarkForm_C* CallFunc_FinishSpawningActor_ReturnValue_2, class AActor* K2Node_CustomEvent_Killer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, class FName CallFunc_GetShellUnlockID_ShellUnlockID, bool CallFunc_IsUpgradeUnlocked_bUnlocked, class FName CallFunc_GetShellUnlockID_ShellUnlockID_1, class FName CallFunc_GetShellUnlockID_ShellUnlockID_2, bool CallFunc_IsUpgradeUnlocked_bUnlocked_1, bool CallFunc_IsUpgradeUnlocked_bUnlocked_2, class FName CallFunc_GetShellUnlockID_ShellUnlockID_3, class FName CallFunc_GetShellUnlockID_ShellUnlockID_4, bool CallFunc_IsUpgradeUnlocked_bUnlocked_3, bool CallFunc_IsUpgradeUnlocked_bUnlocked_4, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_10, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_8, int32 CallFunc_MakeLiteralInt_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, int32 K2Node_CustomEvent_ShellIndex_1, int32 K2Node_CustomEvent_Level, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, class FName CallFunc_Get_Shell_Bonding_Points_Name_Name, class FName CallFunc_GetShellBondingLevelName_ShellBondingLevelName, enum class EArmorTypes K2Node_CustomEvent_ShellToRestore, class UBuffGenerateResolveWhileShellOff_C* CallFunc_SpawnObject_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_9, bool CallFunc_IsLastGaspUnlocked_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_6, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, bool Temp_bool_IsClosed_Variable, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, bool CallFunc_IsValid_ReturnValue_9, const struct FVector& CallFunc_GetPhysicsLinearVelocity_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_10, bool CallFunc_BooleanAND_ReturnValue_7, float CallFunc_Multiply_FloatFloat_ReturnValue_3, class AActor* K2Node_Event_DamageCauser, const struct FVector& K2Node_Event_Impact, float CallFunc_Multiply_FloatFloat_ReturnValue_4, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_10, const struct FVector& CallFunc_GetActorScale3D_ReturnValue_1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_5, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_3, const struct FTransform& CallFunc_MakeTransform_ReturnValue_3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3, class ABP_DeathShell_C* CallFunc_FinishSpawningActor_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UShellUpgradeBase_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_CustomEvent_UpdateAbilities, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, bool K2Node_SwitchEnum_CmpSuccess, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1, bool CallFunc_IsValid_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_12, const struct FKey& K2Node_InputActionEvent_Key_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool CallFunc_CheckPlayerInventoryForGland_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, bool K2Node_CustomEvent_bEnabled, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool CallFunc_EqualEqual_NameName_ReturnValue_1, class FName K2Node_CustomEvent_NotifyName_5, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, bool K2Node_SwitchString_CmpSuccess, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_12, class FName K2Node_CustomEvent_NotifyName_6, float CallFunc_Conv_IntToFloat_ReturnValue_3, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, float K2Node_Event_Amount, float CallFunc_Multiply_FloatFloat_ReturnValue_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, class FName K2Node_CustomEvent_NotifyName_9, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class FName Temp_name_Variable_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool K2Node_SwitchName_CmpSuccess, class FName K2Node_CustomEvent_NotifyName_10, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, float CallFunc_Multiply_FloatFloat_ReturnValue_7, class FName K2Node_CustomEvent_NotifyName_13, float K2Node_Event_DeltaSeconds, int32 Temp_int_Array_Index_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, class FName K2Node_CustomEvent_NotifyName_14, int32 CallFunc_Array_Length_ReturnValue_3, int32 K2Node_CustomEvent_ShellIndex, int32 K2Node_CustomEvent_Amount, TArray<class UShellUpgradeBase_C*>& K2Node_Select_Default, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_4, TArray<class AActor*>& Temp_object_Variable_3, TArray<struct FHitResult>& CallFunc_SphereTraceMulti_OutHits, bool CallFunc_SphereTraceMulti_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item_1, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, class UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component, bool K2Node_DynamicCast_bSuccess_3, class UStaticMeshComponent* CallFunc_SetGlandSMBasedOnLevel_Gland, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_5, TArray<class AActor*>& Temp_object_Variable_4, enum class EGland_Types K2Node_CustomEvent_GlandToDisable, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_BreakHitResult_bBlockingHit_2, bool CallFunc_BreakHitResult_bInitialOverlap_2, float CallFunc_BreakHitResult_Time_2, float CallFunc_BreakHitResult_Distance_2, const struct FVector& CallFunc_BreakHitResult_Location_2, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_2, const struct FVector& CallFunc_BreakHitResult_Normal_2, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_2, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_2, class AActor* CallFunc_BreakHitResult_HitActor_2, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_2, class FName CallFunc_BreakHitResult_HitBoneName_2, int32 CallFunc_BreakHitResult_HitItem_2, int32 CallFunc_BreakHitResult_FaceIndex_2, const struct FVector& CallFunc_BreakHitResult_TraceStart_2, const struct FVector& CallFunc_BreakHitResult_TraceEnd_2, enum class EGland_Types K2Node_CustomEvent_GlandType, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, float K2Node_Select_Default_1, class UStaticMesh* K2Node_Select_Default_2, float K2Node_Select_Default_3, bool CallFunc_SetStaticMesh_ReturnValue, float K2Node_Select_Default_4, float K2Node_Select_Default_5, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, class UShellUpgradeBase_C* CallFunc_Array_Get_Item_2, bool K2Node_CustomEvent_FastChange_, bool K2Node_CustomEvent_bReinitPose, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, int32 Temp_int_Array_Index_Variable_3, class UStaticMeshComponent* CallFunc_Array_Get_Item_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, bool K2Node_SwitchEnum_CmpSuccess_2, enum class EPlatform CallFunc_GetPlatform_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_11, float CallFunc_SelectFloat_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue_2, const class FString& CallFunc_Conv_FloatToString_ReturnValue_2, const class FString& CallFunc_Conv_FloatToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, class FName CallFunc_GetCurrentPersistentLevelName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, bool CallFunc_EqualEqual_NameName_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, float K2Node_Select_Default_6, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_3, const struct FKey& K2Node_InputActionEvent_Key_2, int32 Temp_int_Array_Index_Variable_4, class UShellUpgradeBase_C* CallFunc_Array_Get_Item_4, float CallFunc_Conv_IntToFloat_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable_4, bool CallFunc_Less_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_4, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_1, const struct FKey& K2Node_InputActionEvent_Key_3, int32 Temp_int_Array_Index_Variable_5, class AActor* CallFunc_Array_Get_Item_5, TScriptInterface<class IFireSourceBaseInterface_C> K2Node_DynamicCast_AsFire_Source_Base_Interface, bool K2Node_DynamicCast_bSuccess_4, int32 Temp_int_Loop_Counter_Variable_5, bool CallFunc_Less_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_5, float CallFunc_Conv_IntToFloat_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "ExecuteUbergraph_Barbarous");

	Params::ABarbarous_C_ExecuteUbergraph_Barbarous_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable_4 = Temp_float_Variable_4;
	Parms.Temp_float_Variable_5 = Temp_float_Variable_5;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.Temp_float_Variable_6 = Temp_float_Variable_6;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Event_bStart = K2Node_Event_bStart;
	Parms.CallFunc_IsGlandOn_ReturnValue = CallFunc_IsGlandOn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Event_FireSource_1 = K2Node_Event_FireSource_1;
	Parms.K2Node_Event_FireSource = K2Node_Event_FireSource;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsLastChanceAvailable_bAvailable = CallFunc_IsLastChanceAvailable_bAvailable;
	Parms.K2Node_Event_DPSBurnInstigator = K2Node_Event_DPSBurnInstigator;
	Parms.K2Node_Event_DmgPerSec = K2Node_Event_DmgPerSec;
	Parms.K2Node_Event_Duration_1 = K2Node_Event_Duration_1;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_GetLocalizedEmissiveSourceName_ReturnValue = CallFunc_GetLocalizedEmissiveSourceName_ReturnValue;
	Parms.K2Node_Event_Char_1 = K2Node_Event_Char_1;
	Parms.K2Node_Event_SlotIndex = K2Node_Event_SlotIndex;
	Parms.CallFunc_GetLocalizedEmissiveMinDistName_ReturnValue = CallFunc_GetLocalizedEmissiveMinDistName_ReturnValue;
	Parms.CallFunc_GetLocalizedEmissiveMaxDistName_ReturnValue = CallFunc_GetLocalizedEmissiveMaxDistName_ReturnValue;
	Parms.CallFunc_GetLocalizedEmissiveSourceName_ReturnValue_1 = CallFunc_GetLocalizedEmissiveSourceName_ReturnValue_1;
	Parms.K2Node_Event_Char = K2Node_Event_Char;
	Parms.K2Node_Event_Index = K2Node_Event_Index;
	Parms.CallFunc_GetLocalizedEmissiveMaxDistName_ReturnValue_1 = CallFunc_GetLocalizedEmissiveMaxDistName_ReturnValue_1;
	Parms.CallFunc_GetLocalizedEmissiveMinDistName_ReturnValue_1 = CallFunc_GetLocalizedEmissiveMinDistName_ReturnValue_1;
	Parms.K2Node_CustomEvent_ScaleValue = K2Node_CustomEvent_ScaleValue;
	Parms.CallFunc_GetForceFeedbackScale_ReturnValue = CallFunc_GetForceFeedbackScale_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.K2Node_CustomEvent_Scale = K2Node_CustomEvent_Scale;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_AreConsoleCheatsEnabled_ReturnValue = CallFunc_AreConsoleCheatsEnabled_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_1 = CallFunc_Conv_FloatToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.K2Node_Event_Invulnerable = K2Node_Event_Invulnerable;
	Parms.CallFunc_IsStoneFormDmgResOn_Yes = CallFunc_IsStoneFormDmgResOn_Yes;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2;
	Parms.K2Node_Event_Hidden_ = K2Node_Event_Hidden_;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_Event_TarAmount = K2Node_Event_TarAmount;
	Parms.K2Node_Event_bStormSpent = K2Node_Event_bStormSpent;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetHideSacredGland_Hidden_ = CallFunc_GetHideSacredGland_Hidden_;
	Parms.Temp_float_Variable_7 = Temp_float_Variable_7;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetArbNameInChangedSetPure_bIsInSet = CallFunc_GetArbNameInChangedSetPure_bIsInSet;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_2 = CallFunc_MakeLiteralByte_ReturnValue_2;
	Parms.CallFunc_GetArbNameInChangedSetPure_bIsInSet_1 = CallFunc_GetArbNameInChangedSetPure_bIsInSet_1;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2;
	Parms.CallFunc_Conv_StringToName_ReturnValue_2 = CallFunc_Conv_StringToName_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetArbNameInChangedSetPure_bIsInSet_2 = CallFunc_GetArbNameInChangedSetPure_bIsInSet_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_CustomEvent_InFieldOfView = K2Node_CustomEvent_InFieldOfView;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue_1 = CallFunc_GetSocketLocation_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsCamera_B = K2Node_DynamicCast_AsCamera_B;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetSocketLocation_ReturnValue_2 = CallFunc_GetSocketLocation_ReturnValue_2;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;
	Parms.K2Node_CustomEvent_BlendTime_1 = K2Node_CustomEvent_BlendTime_1;
	Parms.K2Node_CustomEvent_BlendExponent = K2Node_CustomEvent_BlendExponent;
	Parms.K2Node_CustomEvent_BlendFunc_1 = K2Node_CustomEvent_BlendFunc_1;
	Parms.K2Node_CustomEvent_BlendTime = K2Node_CustomEvent_BlendTime;
	Parms.K2Node_CustomEvent_BlendFunc = K2Node_CustomEvent_BlendFunc;
	Parms.K2Node_CustomEvent_BlendExp = K2Node_CustomEvent_BlendExp;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue_1 = CallFunc_FInterpTo_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_FindLookAtRotation_ReturnValue_1 = CallFunc_FindLookAtRotation_ReturnValue_1;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult_1 = CallFunc_K2_SetWorldRotation_SweepHitResult_1;
	Parms.CallFunc_IsStoneFormOnCooldown__StoneFormOnCooldown_ = CallFunc_IsStoneFormOnCooldown__StoneFormOnCooldown_;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_IsPassiveUnlocked_bUnlocked = CallFunc_IsPassiveUnlocked_bUnlocked;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.K2Node_InputActionEvent_Key = K2Node_InputActionEvent_Key;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_GetSocketLocation_ReturnValue_3 = CallFunc_GetSocketLocation_ReturnValue_3;
	Parms.K2Node_Event_Duration = K2Node_Event_Duration;
	Parms.K2Node_Event_PlayRate = K2Node_Event_PlayRate;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageType = K2Node_Event_DamageType;
	Parms.K2Node_Event_HitLocation = K2Node_Event_HitLocation;
	Parms.K2Node_Event_HitNormal = K2Node_Event_HitNormal;
	Parms.K2Node_Event_HitComponent = K2Node_Event_HitComponent;
	Parms.K2Node_Event_BoneName = K2Node_Event_BoneName;
	Parms.K2Node_Event_ShotFromDirection = K2Node_Event_ShotFromDirection;
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser_1 = K2Node_Event_DamageCauser_1;
	Parms.K2Node_Event_HitInfo = K2Node_Event_HitInfo;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
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
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_1 = CallFunc_Subtract_VectorVector_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_GetSocketLocation_ReturnValue_4 = CallFunc_GetSocketLocation_ReturnValue_4;
	Parms.CallFunc_GetSocketLocation_ReturnValue_5 = CallFunc_GetSocketLocation_ReturnValue_5;
	Parms.CallFunc_GetSocketLocation_ReturnValue_6 = CallFunc_GetSocketLocation_ReturnValue_6;
	Parms.CallFunc_GetClosestHitLocationToPoint_OutLocation = CallFunc_GetClosestHitLocationToPoint_OutLocation;
	Parms.CallFunc_GetClosestHitLocationToPoint_OutBoneName = CallFunc_GetClosestHitLocationToPoint_OutBoneName;
	Parms.CallFunc_GetClosestHitLocationToPoint_ReturnValue = CallFunc_GetClosestHitLocationToPoint_ReturnValue;
	Parms.CallFunc_K2_LineTraceComponent_HitLocation = CallFunc_K2_LineTraceComponent_HitLocation;
	Parms.CallFunc_K2_LineTraceComponent_HitNormal = CallFunc_K2_LineTraceComponent_HitNormal;
	Parms.CallFunc_K2_LineTraceComponent_BoneName = CallFunc_K2_LineTraceComponent_BoneName;
	Parms.CallFunc_K2_LineTraceComponent_OutHit = CallFunc_K2_LineTraceComponent_OutHit;
	Parms.CallFunc_K2_LineTraceComponent_ReturnValue = CallFunc_K2_LineTraceComponent_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_2 = CallFunc_Subtract_VectorVector_ReturnValue_2;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_3 = CallFunc_Subtract_VectorVector_ReturnValue_3;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;
	Parms.CallFunc_GetUpgradedMaxShellDeterioration_BoosedMaxCount = CallFunc_GetUpgradedMaxShellDeterioration_BoosedMaxCount;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = CallFunc_EqualEqual_ByteByte_ReturnValue_5;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.K2Node_Event_ActiveRagdollMontage = K2Node_Event_ActiveRagdollMontage;
	Parms.CallFunc_TwitchDrop_ShouldUseDarkFormSkin_bYes = CallFunc_TwitchDrop_ShouldUseDarkFormSkin_bYes;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_NoShellLostOnLastChance_ReturnValue = CallFunc_NoShellLostOnLastChance_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetShellDyes_Dyes = CallFunc_GetShellDyes_Dyes;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_6 = CallFunc_EqualEqual_ByteByte_ReturnValue_6;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetShellName_ShellName = CallFunc_GetShellName_ShellName;
	Parms.CallFunc_GetShellTagline_ShellTagline = CallFunc_GetShellTagline_ShellTagline;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_6 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_6;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_7 = CallFunc_EqualEqual_ByteByte_ReturnValue_7;
	Parms.CallFunc_IsLastGaspUnlocked_ReturnValue = CallFunc_IsLastGaspUnlocked_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_7 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_7;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_8 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_8;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_8 = CallFunc_EqualEqual_ByteByte_ReturnValue_8;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.CallFunc_IsLastChanceAvailable_bAvailable_1 = CallFunc_IsLastChanceAvailable_bAvailable_1;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_9 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_9;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_1 = CallFunc_K2_AttachToComponent_ReturnValue_1;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_2 = CallFunc_K2_AttachToComponent_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_3 = CallFunc_K2_AttachToComponent_ReturnValue_3;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetActorScale3D_ReturnValue = CallFunc_GetActorScale3D_ReturnValue;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue_1 = CallFunc_K2_GetComponentRotation_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_2 = CallFunc_K2_GetComponentLocation_ReturnValue_2;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue_2 = CallFunc_MakeTransform_ReturnValue_2;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_2 = CallFunc_FinishSpawningActor_ReturnValue_2;
	Parms.K2Node_CustomEvent_Killer = K2Node_CustomEvent_Killer;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetShellUnlockID_ShellUnlockID = CallFunc_GetShellUnlockID_ShellUnlockID;
	Parms.CallFunc_IsUpgradeUnlocked_bUnlocked = CallFunc_IsUpgradeUnlocked_bUnlocked;
	Parms.CallFunc_GetShellUnlockID_ShellUnlockID_1 = CallFunc_GetShellUnlockID_ShellUnlockID_1;
	Parms.CallFunc_GetShellUnlockID_ShellUnlockID_2 = CallFunc_GetShellUnlockID_ShellUnlockID_2;
	Parms.CallFunc_IsUpgradeUnlocked_bUnlocked_1 = CallFunc_IsUpgradeUnlocked_bUnlocked_1;
	Parms.CallFunc_IsUpgradeUnlocked_bUnlocked_2 = CallFunc_IsUpgradeUnlocked_bUnlocked_2;
	Parms.CallFunc_GetShellUnlockID_ShellUnlockID_3 = CallFunc_GetShellUnlockID_ShellUnlockID_3;
	Parms.CallFunc_GetShellUnlockID_ShellUnlockID_4 = CallFunc_GetShellUnlockID_ShellUnlockID_4;
	Parms.CallFunc_IsUpgradeUnlocked_bUnlocked_3 = CallFunc_IsUpgradeUnlocked_bUnlocked_3;
	Parms.CallFunc_IsUpgradeUnlocked_bUnlocked_4 = CallFunc_IsUpgradeUnlocked_bUnlocked_4;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_10 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_10;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_11 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CustomEvent_ShellIndex_1 = K2Node_CustomEvent_ShellIndex_1;
	Parms.K2Node_CustomEvent_Level = K2Node_CustomEvent_Level;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_2 = CallFunc_NotEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_Get_Shell_Bonding_Points_Name_Name = CallFunc_Get_Shell_Bonding_Points_Name_Name;
	Parms.CallFunc_GetShellBondingLevelName_ShellBondingLevelName = CallFunc_GetShellBondingLevelName_ShellBondingLevelName;
	Parms.K2Node_CustomEvent_ShellToRestore = K2Node_CustomEvent_ShellToRestore;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_9 = CallFunc_EqualEqual_ByteByte_ReturnValue_9;
	Parms.CallFunc_IsLastGaspUnlocked_ReturnValue_1 = CallFunc_IsLastGaspUnlocked_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_6 = CallFunc_BooleanAND_ReturnValue_6;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_Add_VectorVector_ReturnValue_3 = CallFunc_Add_VectorVector_ReturnValue_3;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_GetPhysicsLinearVelocity_ReturnValue = CallFunc_GetPhysicsLinearVelocity_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_10 = CallFunc_EqualEqual_ByteByte_ReturnValue_10;
	Parms.CallFunc_BooleanAND_ReturnValue_7 = CallFunc_BooleanAND_ReturnValue_7;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.K2Node_Event_Impact = K2Node_Event_Impact;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_4 = CallFunc_Multiply_FloatFloat_ReturnValue_4;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_GetActorScale3D_ReturnValue_1 = CallFunc_GetActorScale3D_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue_2 = CallFunc_K2_GetComponentRotation_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_5 = CallFunc_Multiply_FloatFloat_ReturnValue_5;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_3 = CallFunc_K2_GetComponentLocation_ReturnValue_3;
	Parms.CallFunc_MakeTransform_ReturnValue_3 = CallFunc_MakeTransform_ReturnValue_3;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_3 = CallFunc_FinishSpawningActor_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_UpdateAbilities = K2Node_CustomEvent_UpdateAbilities;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_1 = CallFunc_Conv_BoolToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1 = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.K2Node_InputActionEvent_Key_1 = K2Node_InputActionEvent_Key_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_CheckPlayerInventoryForGland_ReturnValue = CallFunc_CheckPlayerInventoryForGland_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.K2Node_CustomEvent_bEnabled = K2Node_CustomEvent_bEnabled;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.K2Node_CustomEvent_NotifyName_5 = K2Node_CustomEvent_NotifyName_5;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_12 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_12;
	Parms.K2Node_CustomEvent_NotifyName_6 = K2Node_CustomEvent_NotifyName_6;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_3 = CallFunc_Conv_IntToFloat_ReturnValue_3;
	Parms.K2Node_CustomEvent_NotifyName_7 = K2Node_CustomEvent_NotifyName_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CustomEvent_NotifyName_8 = K2Node_CustomEvent_NotifyName_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_Event_Amount = K2Node_Event_Amount;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_6 = CallFunc_Multiply_FloatFloat_ReturnValue_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_9 = K2Node_CustomEvent_NotifyName_9;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.K2Node_CustomEvent_NotifyName_10 = K2Node_CustomEvent_NotifyName_10;
	Parms.K2Node_CustomEvent_NotifyName_11 = K2Node_CustomEvent_NotifyName_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.K2Node_CustomEvent_NotifyName_12 = K2Node_CustomEvent_NotifyName_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.K2Node_CreateDelegate_OutputDelegate_18 = K2Node_CreateDelegate_OutputDelegate_18;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_7 = CallFunc_Multiply_FloatFloat_ReturnValue_7;
	Parms.K2Node_CustomEvent_NotifyName_13 = K2Node_CustomEvent_NotifyName_13;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_19 = K2Node_CreateDelegate_OutputDelegate_19;
	Parms.K2Node_CustomEvent_NotifyName_14 = K2Node_CustomEvent_NotifyName_14;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.K2Node_CustomEvent_ShellIndex = K2Node_CustomEvent_ShellIndex;
	Parms.K2Node_CustomEvent_Amount = K2Node_CustomEvent_Amount;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetValidValue_ReturnValue_1 = CallFunc_GetValidValue_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.CallFunc_SphereTraceMulti_OutHits = CallFunc_SphereTraceMulti_OutHits;
	Parms.CallFunc_SphereTraceMulti_ReturnValue = CallFunc_SphereTraceMulti_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_BreakHitResult_bBlockingHit_1 = CallFunc_BreakHitResult_bBlockingHit_1;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_1 = CallFunc_BreakHitResult_bInitialOverlap_1;
	Parms.CallFunc_BreakHitResult_Time_1 = CallFunc_BreakHitResult_Time_1;
	Parms.CallFunc_BreakHitResult_Distance_1 = CallFunc_BreakHitResult_Distance_1;
	Parms.CallFunc_BreakHitResult_Location_1 = CallFunc_BreakHitResult_Location_1;
	Parms.CallFunc_BreakHitResult_ImpactPoint_1 = CallFunc_BreakHitResult_ImpactPoint_1;
	Parms.CallFunc_BreakHitResult_Normal_1 = CallFunc_BreakHitResult_Normal_1;
	Parms.CallFunc_BreakHitResult_ImpactNormal_1 = CallFunc_BreakHitResult_ImpactNormal_1;
	Parms.CallFunc_BreakHitResult_PhysMat_1 = CallFunc_BreakHitResult_PhysMat_1;
	Parms.CallFunc_BreakHitResult_HitActor_1 = CallFunc_BreakHitResult_HitActor_1;
	Parms.CallFunc_BreakHitResult_HitComponent_1 = CallFunc_BreakHitResult_HitComponent_1;
	Parms.CallFunc_BreakHitResult_HitBoneName_1 = CallFunc_BreakHitResult_HitBoneName_1;
	Parms.CallFunc_BreakHitResult_HitItem_1 = CallFunc_BreakHitResult_HitItem_1;
	Parms.CallFunc_BreakHitResult_FaceIndex_1 = CallFunc_BreakHitResult_FaceIndex_1;
	Parms.CallFunc_BreakHitResult_TraceStart_1 = CallFunc_BreakHitResult_TraceStart_1;
	Parms.CallFunc_BreakHitResult_TraceEnd_1 = CallFunc_BreakHitResult_TraceEnd_1;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsStatic_Mesh_Component = K2Node_DynamicCast_AsStatic_Mesh_Component;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_SetGlandSMBasedOnLevel_Gland = CallFunc_SetGlandSMBasedOnLevel_Gland;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_4 = CallFunc_K2_AttachToComponent_ReturnValue_4;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.K2Node_CustomEvent_GlandToDisable = K2Node_CustomEvent_GlandToDisable;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_BreakHitResult_bBlockingHit_2 = CallFunc_BreakHitResult_bBlockingHit_2;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_2 = CallFunc_BreakHitResult_bInitialOverlap_2;
	Parms.CallFunc_BreakHitResult_Time_2 = CallFunc_BreakHitResult_Time_2;
	Parms.CallFunc_BreakHitResult_Distance_2 = CallFunc_BreakHitResult_Distance_2;
	Parms.CallFunc_BreakHitResult_Location_2 = CallFunc_BreakHitResult_Location_2;
	Parms.CallFunc_BreakHitResult_ImpactPoint_2 = CallFunc_BreakHitResult_ImpactPoint_2;
	Parms.CallFunc_BreakHitResult_Normal_2 = CallFunc_BreakHitResult_Normal_2;
	Parms.CallFunc_BreakHitResult_ImpactNormal_2 = CallFunc_BreakHitResult_ImpactNormal_2;
	Parms.CallFunc_BreakHitResult_PhysMat_2 = CallFunc_BreakHitResult_PhysMat_2;
	Parms.CallFunc_BreakHitResult_HitActor_2 = CallFunc_BreakHitResult_HitActor_2;
	Parms.CallFunc_BreakHitResult_HitComponent_2 = CallFunc_BreakHitResult_HitComponent_2;
	Parms.CallFunc_BreakHitResult_HitBoneName_2 = CallFunc_BreakHitResult_HitBoneName_2;
	Parms.CallFunc_BreakHitResult_HitItem_2 = CallFunc_BreakHitResult_HitItem_2;
	Parms.CallFunc_BreakHitResult_FaceIndex_2 = CallFunc_BreakHitResult_FaceIndex_2;
	Parms.CallFunc_BreakHitResult_TraceStart_2 = CallFunc_BreakHitResult_TraceStart_2;
	Parms.CallFunc_BreakHitResult_TraceEnd_2 = CallFunc_BreakHitResult_TraceEnd_2;
	Parms.K2Node_CustomEvent_GlandType = K2Node_CustomEvent_GlandType;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.K2Node_CustomEvent_FastChange_ = K2Node_CustomEvent_FastChange_;
	Parms.K2Node_CustomEvent_bReinitPose = K2Node_CustomEvent_bReinitPose;
	Parms.K2Node_CreateDelegate_OutputDelegate_20 = K2Node_CreateDelegate_OutputDelegate_20;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_21 = K2Node_CreateDelegate_OutputDelegate_21;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_GetPlatform_ReturnValue = CallFunc_GetPlatform_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_11 = CallFunc_EqualEqual_ByteByte_ReturnValue_11;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_2 = CallFunc_Conv_FloatToString_ReturnValue_2;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_3 = CallFunc_Conv_FloatToString_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_GetCurrentPersistentLevelName_ReturnValue = CallFunc_GetCurrentPersistentLevelName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_2 = CallFunc_EqualEqual_NameName_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_11 = CallFunc_Concat_StrStr_ReturnValue_11;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.K2Node_InputActionEvent_Key_2 = K2Node_InputActionEvent_Key_2;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_4 = CallFunc_Conv_IntToFloat_ReturnValue_4;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.K2Node_InputActionEvent_Key_3 = K2Node_InputActionEvent_Key_3;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.K2Node_DynamicCast_AsFire_Source_Base_Interface = K2Node_DynamicCast_AsFire_Source_Base_Interface;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_5 = CallFunc_Conv_IntToFloat_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.OnMaxResolveSetForHadern__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::OnMaxResolveSetForHadern__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "OnMaxResolveSetForHadern__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.OnMaxResolveSetForFlutedShell__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::OnMaxResolveSetForFlutedShell__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "OnMaxResolveSetForFlutedShell__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.OnMaxResolveChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::OnMaxResolveChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "OnMaxResolveChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.OnCureAllPoison__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::OnCureAllPoison__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "OnCureAllPoison__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.OnGlimpsePickedUp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::OnGlimpsePickedUp__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "OnGlimpsePickedUp__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.OnLoreReadFirstTime__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        UnhandledParamID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABarbarous_C::OnLoreReadFirstTime__DelegateSignature(class FName UnhandledParamID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "OnLoreReadFirstTime__DelegateSignature");

	Params::ABarbarous_C_OnLoreReadFirstTime__DelegateSignature_Params Parms{};

	Parms.UnhandledParamID = UnhandledParamID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.OnGlandStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABarbarous_C::OnGlandStateChanged__DelegateSignature(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "OnGlandStateChanged__DelegateSignature");

	Params::ABarbarous_C_OnGlandStateChanged__DelegateSignature_Params Parms{};

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Barbarous.Barbarous_C.OnDetachFromShell__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::OnDetachFromShell__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "OnDetachFromShell__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.OnLastChanceRecharged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::OnLastChanceRecharged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "OnLastChanceRecharged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.OnLastGaspUsed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::OnLastGaspUsed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "OnLastGaspUsed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.OnBoneShardsPickedUp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::OnBoneShardsPickedUp__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "OnBoneShardsPickedUp__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.OnShellRestored__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::OnShellRestored__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "OnShellRestored__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Barbarous.Barbarous_C.ChangedShells__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABarbarous_C::ChangedShells__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Barbarous_C", "ChangedShells__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


