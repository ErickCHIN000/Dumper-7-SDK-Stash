#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ChangeAreaPillar.BP_ChangeAreaPillar_C
// (Actor)

class UClass* ABP_ChangeAreaPillar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ChangeAreaPillar_C");

	return Clss;
}


// BP_ChangeAreaPillar_C BP_ChangeAreaPillar.Default__BP_ChangeAreaPillar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ChangeAreaPillar_C* ABP_ChangeAreaPillar_C::GetDefaultObj()
{
	static class ABP_ChangeAreaPillar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ChangeAreaPillar_C*>(ABP_ChangeAreaPillar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.ShouldShowWarning
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show_                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCanUnlockAnyRunicEntry_CanUnlock                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ChangeAreaPillar_C::ShouldShowWarning(bool* Show_, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GetCanUnlockAnyRunicEntry_CanUnlock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "ShouldShowWarning");

	Params::ABP_ChangeAreaPillar_C_ShouldShowWarning_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetCanUnlockAnyRunicEntry_CanUnlock = CallFunc_GetCanUnlockAnyRunicEntry_CanUnlock;

	UObject::ProcessEvent(Func, &Parms);

	if (Show_ != nullptr)
		*Show_ = Parms.Show_;

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.Sound_FadeOut_FireAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ChangeAreaPillar_C::Sound_FadeOut_FireAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "Sound_FadeOut_FireAudio");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.Sound_FadeIn_FireAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ChangeAreaPillar_C::Sound_FadeIn_FireAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "Sound_FadeIn_FireAudio");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.Turn Off Pillar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Alpha                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ChangeAreaPillar_C::Turn_Off_Pillar(float Alpha, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "Turn Off Pillar");

	Params::ABP_ChangeAreaPillar_C_Turn_Off_Pillar_Params Parms{};

	Parms.Alpha = Alpha;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.GetCubeRot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ChangeAreaPillar_C::GetCubeRot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "GetCubeRot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.AddRandomRotToCubes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_AddRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_AddRelativeRotation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_AddRelativeRotation_SweepHitResult_2                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_ChangeAreaPillar_C::AddRandomRotToCubes(int32 Temp_int_Variable, float Temp_float_Variable, float Temp_float_Variable_1, int32 Temp_int_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, int32 Temp_int_Variable_2, float Temp_float_Variable_4, float Temp_float_Variable_5, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, float K2Node_Select_Default, float K2Node_Select_Default_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue_2, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult, float K2Node_Select_Default_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult_1, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "AddRandomRotToCubes");

	Params::ABP_ChangeAreaPillar_C_AddRandomRotToCubes_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_float_Variable_4 = Temp_float_Variable_4;
	Parms.Temp_float_Variable_5 = Temp_float_Variable_5;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_1 = CallFunc_RandomIntegerInRange_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_2 = CallFunc_RandomIntegerInRange_ReturnValue_2;
	Parms.CallFunc_K2_AddRelativeRotation_SweepHitResult = CallFunc_K2_AddRelativeRotation_SweepHitResult;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_MakeRotator_ReturnValue_2 = CallFunc_MakeRotator_ReturnValue_2;
	Parms.CallFunc_K2_AddRelativeRotation_SweepHitResult_1 = CallFunc_K2_AddRelativeRotation_SweepHitResult_1;
	Parms.CallFunc_K2_AddRelativeRotation_SweepHitResult_2 = CallFunc_K2_AddRelativeRotation_SweepHitResult_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.SoundPillarCube
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             Component                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ChangeAreaPillar_C::SoundPillarCube(class USoundBase* Sound, class USceneComponent* Component, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "SoundPillarCube");

	Params::ABP_ChangeAreaPillar_C_SoundPillarCube_Params Parms{};

	Parms.Sound = Sound;
	Parms.Component = Component;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.AddCubeRot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Alpha                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rot                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Yaw                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FRotator                    Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_RLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FRotator ABP_ChangeAreaPillar_C::AddCubeRot(float Alpha, const struct FRotator& Rot, float Yaw, const struct FRotator& Temp_struct_Variable, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool Temp_bool_Variable, const struct FRotator& K2Node_Select_Default, const struct FRotator& CallFunc_RLerp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "AddCubeRot");

	Params::ABP_ChangeAreaPillar_C_AddCubeRot_Params Parms{};

	Parms.Alpha = Alpha;
	Parms.Rot = Rot;
	Parms.Yaw = Yaw;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_RLerp_ReturnValue = CallFunc_RLerp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.Pillar_AlignRot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Alpha                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rot                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             Component                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Yaw                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_AddCubeRot_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_ChangeAreaPillar_C::Pillar_AlignRot(float Alpha, const struct FRotator& Rot, class USceneComponent* Component, float Yaw, const struct FRotator& CallFunc_AddCubeRot_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "Pillar_AlignRot");

	Params::ABP_ChangeAreaPillar_C_Pillar_AlignRot_Params Parms{};

	Parms.Alpha = Alpha;
	Parms.Rot = Rot;
	Parms.Component = Component;
	Parms.Yaw = Yaw;
	Parms.CallFunc_AddCubeRot_ReturnValue = CallFunc_AddCubeRot_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.SetFireColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Local_Color                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_LinearColorToVector_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ChangeAreaPillar_C::SetFireColor(const struct FLinearColor& Local_Color, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "SetFireColor");

	Params::ABP_ChangeAreaPillar_C_SetFireColor_Params Parms{};

	Parms.Local_Color = Local_Color;
	Parms.CallFunc_Conv_LinearColorToVector_ReturnValue = CallFunc_Conv_LinearColorToVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.SetGodRay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRangeFromStream_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ChangeAreaPillar_C::SetGodRay(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, float CallFunc_RandomFloatInRangeFromStream_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "SetGodRay");

	Params::ABP_ChangeAreaPillar_C_SetGodRay_Params Parms{};

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRangeFromStream_ReturnValue = CallFunc_RandomFloatInRangeFromStream_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.TeleportToFinalBoss
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ChangeAreaPillar_C::TeleportToFinalBoss(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "TeleportToFinalBoss");

	Params::ABP_ChangeAreaPillar_C_TeleportToFinalBoss_Params Parms{};

	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.DisableSpawnedRunicGate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ChangeAreaPillar_C::DisableSpawnedRunicGate(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "DisableSpawnedRunicGate");

	Params::ABP_ChangeAreaPillar_C_DisableSpawnedRunicGate_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.IncrementStormModeProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_5                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_6                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_7                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_StormModeProgress  CallFunc_GetStormModeProgress_Progress                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ChangeAreaPillar_C::IncrementStormModeProgress(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_3, bool K2Node_DynamicCast_bSuccess_3, bool K2Node_SwitchName_CmpSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_4, bool K2Node_DynamicCast_bSuccess_4, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_5, bool K2Node_DynamicCast_bSuccess_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_6, bool K2Node_DynamicCast_bSuccess_6, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_7, bool K2Node_DynamicCast_bSuccess_7, enum class Enum_StormModeProgress CallFunc_GetStormModeProgress_Progress, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "IncrementStormModeProgress");

	Params::ABP_ChangeAreaPillar_C_IncrementStormModeProgress_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_3 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_4 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_5 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_5;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_6 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_6;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_7 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_7;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_GetStormModeProgress_Progress = CallFunc_GetStormModeProgress_Progress;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.UnlockStartingInfusion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGland_Types            Gland                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERiposteTypes           CallFunc_GetInfusionToUnlockFromGland_Riposte                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetStartingInfusionIDs_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ChangeAreaPillar_C::UnlockStartingInfusion(enum class EGland_Types Gland, int32 CallFunc_MakeLiteralInt_ReturnValue, enum class ERiposteTypes CallFunc_GetInfusionToUnlockFromGland_Riposte, class FName CallFunc_GetStartingInfusionIDs_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "UnlockStartingInfusion");

	Params::ABP_ChangeAreaPillar_C_UnlockStartingInfusion_Params Parms{};

	Parms.Gland = Gland;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_GetInfusionToUnlockFromGland_Riposte = CallFunc_GetInfusionToUnlockFromGland_Riposte;
	Parms.CallFunc_GetStartingInfusionIDs_ReturnValue = CallFunc_GetStartingInfusionIDs_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.UnlockRiposte
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGland_Types            Gand                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ToFinalBoss_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        NotifyAtEnd                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              GlandNumber                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_GlandNumber                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_NotifyAtEnd                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_ToFinalBoss_                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGland_Types            Local_Gland                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSeedRipostes_Seed                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_Character_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Character                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRangeFromStream_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERiposteTypes           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_Character_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Character_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_Character_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Character_2                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class ERiposteTypes>   CallFunc_GetUnlockedRipostes_Ripostes                            (ReferenceParm, HasGetValueTypeHash)
// enum class ERiposteTypes           CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormMode_StartingRiposteNotDefault__ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_StormMode_StartingRiposteNotDefault__StartingRiposte    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetRiposteUpgradeIDs_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ChangeAreaPillar_C::UnlockRiposte(enum class EGland_Types Gand, bool ToFinalBoss_, class FName NotifyAtEnd, int32 GlandNumber, int32 Local_GlandNumber, class FName Local_NotifyAtEnd, bool Local_ToFinalBoss_, enum class EGland_Types Local_Gland, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_GetSeedRipostes_Seed, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, enum class ERiposteTypes CallFunc_Array_Get_Item, TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character_1, bool K2Node_DynamicCast_bSuccess_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_2, TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character_2, bool K2Node_DynamicCast_bSuccess_2, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, TArray<enum class ERiposteTypes>& CallFunc_GetUnlockedRipostes_Ripostes, enum class ERiposteTypes CallFunc_Array_Get_Item_1, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_StormMode_StartingRiposteNotDefault__ReturnValue, class FName CallFunc_StormMode_StartingRiposteNotDefault__StartingRiposte, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FName CallFunc_GetRiposteUpgradeIDs_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "UnlockRiposte");

	Params::ABP_ChangeAreaPillar_C_UnlockRiposte_Params Parms{};

	Parms.Gand = Gand;
	Parms.ToFinalBoss_ = ToFinalBoss_;
	Parms.NotifyAtEnd = NotifyAtEnd;
	Parms.GlandNumber = GlandNumber;
	Parms.Local_GlandNumber = Local_GlandNumber;
	Parms.Local_NotifyAtEnd = Local_NotifyAtEnd;
	Parms.Local_ToFinalBoss_ = Local_ToFinalBoss_;
	Parms.Local_Gland = Local_Gland;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetSeedRipostes_Seed = CallFunc_GetSeedRipostes_Seed;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Character = K2Node_DynamicCast_AsBPI_Storm_Mode_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_RandomIntegerInRangeFromStream_ReturnValue = CallFunc_RandomIntegerInRangeFromStream_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_1 = CallFunc_GetPlayerCharacter_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Character_1 = K2Node_DynamicCast_AsBPI_Storm_Mode_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_2 = CallFunc_GetPlayerCharacter_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Character_2 = K2Node_DynamicCast_AsBPI_Storm_Mode_Character_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;
	Parms.CallFunc_GetUnlockedRipostes_Ripostes = CallFunc_GetUnlockedRipostes_Ripostes;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_StormMode_StartingRiposteNotDefault__ReturnValue = CallFunc_StormMode_StartingRiposteNotDefault__ReturnValue;
	Parms.CallFunc_StormMode_StartingRiposteNotDefault__StartingRiposte = CallFunc_StormMode_StartingRiposteNotDefault__StartingRiposte;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetRiposteUpgradeIDs_ReturnValue = CallFunc_GetRiposteUpgradeIDs_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.IncrementGlandData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ToFinalBoss_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              GlandNumber                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_GlandNumber                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_ToFinalBoss_                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveInventoryItem_Success                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveInventoryItem_Success_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_StormModeGlandData CallFunc_StormMode_GetCurrentGlandData_Gland                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveInventoryItem_Success_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ChangeAreaPillar_C::IncrementGlandData(bool ToFinalBoss_, int32 GlandNumber, int32 Local_GlandNumber, bool Local_ToFinalBoss_, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2, bool K2Node_DynamicCast_bSuccess_2, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, bool CallFunc_RemoveInventoryItem_Success, bool CallFunc_RemoveInventoryItem_Success_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_3, bool K2Node_DynamicCast_bSuccess_3, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2, enum class Enum_StormModeGlandData CallFunc_StormMode_GetCurrentGlandData_Gland, bool CallFunc_RemoveInventoryItem_Success_2, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "IncrementGlandData");

	Params::ABP_ChangeAreaPillar_C_IncrementGlandData_Params Parms{};

	Parms.ToFinalBoss_ = ToFinalBoss_;
	Parms.GlandNumber = GlandNumber;
	Parms.Local_GlandNumber = Local_GlandNumber;
	Parms.Local_ToFinalBoss_ = Local_ToFinalBoss_;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1;
	Parms.CallFunc_RemoveInventoryItem_Success = CallFunc_RemoveInventoryItem_Success;
	Parms.CallFunc_RemoveInventoryItem_Success_1 = CallFunc_RemoveInventoryItem_Success_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_3 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2;
	Parms.CallFunc_StormMode_GetCurrentGlandData_Gland = CallFunc_StormMode_GetCurrentGlandData_Gland;
	Parms.CallFunc_RemoveInventoryItem_Success_2 = CallFunc_RemoveInventoryItem_Success_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.LeaveDialogue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ChangeAreaPillar_C::LeaveDialogue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "LeaveDialogue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.OnActorUsed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldShowWarning_Show_                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnActorUsed_Success                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ChangeAreaPillar_C::OnActorUsed(class APlayerController* Controller, bool* Success, bool CallFunc_ShouldShowWarning_Show_, bool CallFunc_OnActorUsed_Success, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "OnActorUsed");

	Params::ABP_ChangeAreaPillar_C_OnActorUsed_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_ShouldShowWarning_Show_ = CallFunc_ShouldShowWarning_Show_;
	Parms.CallFunc_OnActorUsed_Success = CallFunc_OnActorUsed_Success;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.HasAnyGlandInInventory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckPlayerInventoryForItem_Success                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CheckPlayerInventoryForItem_InventorySlot               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckPlayerInventoryForItem_Success_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CheckPlayerInventoryForItem_InventorySlot_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckPlayerInventoryForItem_Success_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CheckPlayerInventoryForItem_InventorySlot_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_ChangeAreaPillar_C::HasAnyGlandInInventory(bool CallFunc_CheckPlayerInventoryForItem_Success, int32 CallFunc_CheckPlayerInventoryForItem_InventorySlot, bool CallFunc_CheckPlayerInventoryForItem_Success_1, int32 CallFunc_CheckPlayerInventoryForItem_InventorySlot_1, bool CallFunc_CheckPlayerInventoryForItem_Success_2, int32 CallFunc_CheckPlayerInventoryForItem_InventorySlot_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "HasAnyGlandInInventory");

	Params::ABP_ChangeAreaPillar_C_HasAnyGlandInInventory_Params Parms{};

	Parms.CallFunc_CheckPlayerInventoryForItem_Success = CallFunc_CheckPlayerInventoryForItem_Success;
	Parms.CallFunc_CheckPlayerInventoryForItem_InventorySlot = CallFunc_CheckPlayerInventoryForItem_InventorySlot;
	Parms.CallFunc_CheckPlayerInventoryForItem_Success_1 = CallFunc_CheckPlayerInventoryForItem_Success_1;
	Parms.CallFunc_CheckPlayerInventoryForItem_InventorySlot_1 = CallFunc_CheckPlayerInventoryForItem_InventorySlot_1;
	Parms.CallFunc_CheckPlayerInventoryForItem_Success_2 = CallFunc_CheckPlayerInventoryForItem_Success_2;
	Parms.CallFunc_CheckPlayerInventoryForItem_InventorySlot_2 = CallFunc_CheckPlayerInventoryForItem_InventorySlot_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ChangeAreaPillar_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.Timeline_Cubes_Movement_3__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_ChangeAreaPillar_C::Timeline_Cubes_Movement_3__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "Timeline_Cubes_Movement_3__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.Timeline_Cubes_Movement_3__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_ChangeAreaPillar_C::Timeline_Cubes_Movement_3__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "Timeline_Cubes_Movement_3__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.Timeline_Cubes_Movement_3__Sound__EventFunc
// (BlueprintEvent)
// Parameters:

void ABP_ChangeAreaPillar_C::Timeline_Cubes_Movement_3__Sound__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "Timeline_Cubes_Movement_3__Sound__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.Timeline_Cubes_Movement_2__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_ChangeAreaPillar_C::Timeline_Cubes_Movement_2__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "Timeline_Cubes_Movement_2__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.Timeline_Cubes_Movement_2__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_ChangeAreaPillar_C::Timeline_Cubes_Movement_2__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "Timeline_Cubes_Movement_2__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.Timeline_Cubes_Movement_2__Sound__EventFunc
// (BlueprintEvent)
// Parameters:

void ABP_ChangeAreaPillar_C::Timeline_Cubes_Movement_2__Sound__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "Timeline_Cubes_Movement_2__Sound__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.Timeline_Cubes_Movement_1__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_ChangeAreaPillar_C::Timeline_Cubes_Movement_1__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "Timeline_Cubes_Movement_1__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.Timeline_Cubes_Movement_1__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_ChangeAreaPillar_C::Timeline_Cubes_Movement_1__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "Timeline_Cubes_Movement_1__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.Timeline_Cubes_Movement_1__Sound__EventFunc
// (BlueprintEvent)
// Parameters:

void ABP_ChangeAreaPillar_C::Timeline_Cubes_Movement_1__Sound__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "Timeline_Cubes_Movement_1__Sound__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.Timeline_3__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_ChangeAreaPillar_C::Timeline_3__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "Timeline_3__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.Timeline_3__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_ChangeAreaPillar_C::Timeline_3__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "Timeline_3__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.OnAnswerSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ChangeAreaPillar_C::OnAnswerSelected(class FName ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "OnAnswerSelected");

	Params::ABP_ChangeAreaPillar_C_OnAnswerSelected_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.Dialogue_CheckForGland
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        GiveID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ChangeAreaPillar_C::Dialogue_CheckForGland(class FName GiveID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "Dialogue_CheckForGland");

	Params::ABP_ChangeAreaPillar_C_Dialogue_CheckForGland_Params Parms{};

	Parms.GiveID = GiveID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.Gland_Returned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        GlandID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ChangeAreaPillar_C::Gland_Returned(class FName GlandID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "Gland_Returned");

	Params::ABP_ChangeAreaPillar_C_Gland_Returned_Params Parms{};

	Parms.GlandID = GlandID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.BndEvt__RuneRandomizerComponent_K2Node_ComponentBoundEvent_0_OnUpgradesSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class Enum_Rune_Category_RandomizerCategory                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ChangeAreaPillar_C::BndEvt__RuneRandomizerComponent_K2Node_ComponentBoundEvent_0_OnUpgradesSelected__DelegateSignature(enum class Enum_Rune_Category_Randomizer Category, class FName ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "BndEvt__RuneRandomizerComponent_K2Node_ComponentBoundEvent_0_OnUpgradesSelected__DelegateSignature");

	Params::ABP_ChangeAreaPillar_C_BndEvt__RuneRandomizerComponent_K2Node_ComponentBoundEvent_0_OnUpgradesSelected__DelegateSignature_Params Parms{};

	Parms.Category = Category;
	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.StartTeleporting
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ChangeAreaPillar_C::StartTeleporting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "StartTeleporting");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.ContinueDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ChangeAreaPillar_C::ContinueDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "ContinueDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.OnFinalGlandReturned
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ChangeAreaPillar_C::OnFinalGlandReturned()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "OnFinalGlandReturned");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ChangeAreaPillar_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.Animation_Cube_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ChangeAreaPillar_C::Animation_Cube_2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "Animation_Cube_2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.Animation_Cube_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ChangeAreaPillar_C::Animation_Cube_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "Animation_Cube_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.Animation_Cube_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ChangeAreaPillar_C::Animation_Cube_3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "Animation_Cube_3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.CubesAnim_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ChangeAreaPillar_C::CubesAnim_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "CubesAnim_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.DisablePillarAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ChangeAreaPillar_C::DisablePillarAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "DisablePillarAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.ShowWarning
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ChangeAreaPillar_C::ShowWarning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "ShowWarning");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ChangeAreaPillar.BP_ChangeAreaPillar_C.ExecuteUbergraph_BP_ChangeAreaPillar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_StormMode_RunicWarning_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenu_C>CallFunc_OnOpen_self_CastInput                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_ID                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyGlandInInventory_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_GiveID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_GlandID                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Category_RandomizerK2Node_ComponentBoundEvent_Category                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_ID                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_StormModeProgress  CallFunc_GetStormModeProgress_Progress                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_Character_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Character                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_Character_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Character_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetYesText_Yes                                          (None)
// class FText                        CallFunc_GetNoText_No                                            (None)
// TArray<class FText>                K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_K2_GetScalarParameterValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_4                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ChangeAreaPillar_C::ExecuteUbergraph_BP_ChangeAreaPillar(int32 EntryPoint, class UUI_StormMode_RunicWarning_C* CallFunc_Create_ReturnValue, TScriptInterface<class IBPI_StormModeMenu_C> CallFunc_OnOpen_self_CastInput, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, class FName K2Node_CustomEvent_ID, TArray<class FName>& K2Node_MakeArray_Array, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_HasAnyGlandInInventory_ReturnValue, class FName K2Node_CustomEvent_GiveID, class FName K2Node_CustomEvent_GlandID, enum class Enum_Rune_Category_Randomizer K2Node_ComponentBoundEvent_Category, class FName K2Node_ComponentBoundEvent_ID, bool K2Node_SwitchName_CmpSuccess_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_StormModeProgress CallFunc_GetStormModeProgress_Progress, bool K2Node_SwitchName_CmpSuccess_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2, bool K2Node_DynamicCast_bSuccess_2, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character, bool K2Node_DynamicCast_bSuccess_3, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character_1, bool K2Node_DynamicCast_bSuccess_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_6, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_2, bool K2Node_DynamicCast_bSuccess_7, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool K2Node_SwitchString_CmpSuccess, class FText CallFunc_GetYesText_Yes, class FText CallFunc_GetNoText_No, TArray<class FText>& K2Node_MakeArray_Array_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, float CallFunc_K2_GetScalarParameterValue_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_3, bool K2Node_DynamicCast_bSuccess_8, class APlayerController* CallFunc_GetPlayerController_ReturnValue_7, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_4, bool K2Node_DynamicCast_bSuccess_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ChangeAreaPillar_C", "ExecuteUbergraph_BP_ChangeAreaPillar");

	Params::ABP_ChangeAreaPillar_C_ExecuteUbergraph_BP_ChangeAreaPillar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_OnOpen_self_CastInput = CallFunc_OnOpen_self_CastInput;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_ID = K2Node_CustomEvent_ID;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_HasAnyGlandInInventory_ReturnValue = CallFunc_HasAnyGlandInInventory_ReturnValue;
	Parms.K2Node_CustomEvent_GiveID = K2Node_CustomEvent_GiveID;
	Parms.K2Node_CustomEvent_GlandID = K2Node_CustomEvent_GlandID;
	Parms.K2Node_ComponentBoundEvent_Category = K2Node_ComponentBoundEvent_Category;
	Parms.K2Node_ComponentBoundEvent_ID = K2Node_ComponentBoundEvent_ID;
	Parms.K2Node_SwitchName_CmpSuccess_1 = K2Node_SwitchName_CmpSuccess_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetStormModeProgress_Progress = CallFunc_GetStormModeProgress_Progress;
	Parms.K2Node_SwitchName_CmpSuccess_2 = K2Node_SwitchName_CmpSuccess_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Character = K2Node_DynamicCast_AsBPI_Storm_Mode_Character;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_1 = CallFunc_GetPlayerCharacter_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Character_1 = K2Node_DynamicCast_AsBPI_Storm_Mode_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_1 = K2Node_DynamicCast_AsGame_Play_PCInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_2 = K2Node_DynamicCast_AsGame_Play_PCInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_GetYesText_Yes = CallFunc_GetYesText_Yes;
	Parms.CallFunc_GetNoText_No = CallFunc_GetNoText_No;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_K2_GetScalarParameterValue_ReturnValue = CallFunc_K2_GetScalarParameterValue_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_6 = CallFunc_GetPlayerController_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_3 = K2Node_DynamicCast_AsGame_Play_PCInterface_3;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_GetPlayerController_ReturnValue_7 = CallFunc_GetPlayerController_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_4 = K2Node_DynamicCast_AsGame_Play_PCInterface_4;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;

	UObject::ProcessEvent(Func, &Parms);

}

}


