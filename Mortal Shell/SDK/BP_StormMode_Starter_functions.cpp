#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StormMode_Starter.BP_StormMode_Starter_C
// (Actor)

class UClass* ABP_StormMode_Starter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StormMode_Starter_C");

	return Clss;
}


// BP_StormMode_Starter_C BP_StormMode_Starter.Default__BP_StormMode_Starter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_StormMode_Starter_C* ABP_StormMode_Starter_C::GetDefaultObj()
{
	static class ABP_StormMode_Starter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_StormMode_Starter_C*>(ABP_StormMode_Starter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StormMode_Starter.BP_StormMode_Starter_C.ShouldShowWarning
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show_                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCanUnlockAnyRunicEntry_CanUnlock                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_StormMode_Starter_C::ShouldShowWarning(bool* Show_, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GetCanUnlockAnyRunicEntry_CanUnlock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_Starter_C", "ShouldShowWarning");

	Params::ABP_StormMode_Starter_C_ShouldShowWarning_Params Parms{};

	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetCanUnlockAnyRunicEntry_CanUnlock = CallFunc_GetCanUnlockAnyRunicEntry_CanUnlock;

	UObject::ProcessEvent(Func, &Parms);

	if (Show_ != nullptr)
		*Show_ = Parms.Show_;

}


// Function BP_StormMode_Starter.BP_StormMode_Starter_C.DisablePillar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StormMode_Starter_C::DisablePillar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_Starter_C", "DisablePillar");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormMode_Starter.BP_StormMode_Starter_C.Sound_FadeOut_FireAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StormMode_Starter_C::Sound_FadeOut_FireAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_Starter_C", "Sound_FadeOut_FireAudio");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormMode_Starter.BP_StormMode_Starter_C.Sound_FadeIn_FireAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StormMode_Starter_C::Sound_FadeIn_FireAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_Starter_C", "Sound_FadeIn_FireAudio");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormMode_Starter.BP_StormMode_Starter_C.Turn Off Pillar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Alpha                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StormMode_Starter_C::Turn_Off_Pillar(float Alpha, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_Starter_C", "Turn Off Pillar");

	Params::ABP_StormMode_Starter_C_Turn_Off_Pillar_Params Parms{};

	Parms.Alpha = Alpha;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StormMode_Starter.BP_StormMode_Starter_C.GetCubeRot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StormMode_Starter_C::GetCubeRot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_Starter_C", "GetCubeRot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormMode_Starter.BP_StormMode_Starter_C.AddRandomRotToCubes
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

void ABP_StormMode_Starter_C::AddRandomRotToCubes(int32 Temp_int_Variable, float Temp_float_Variable, float Temp_float_Variable_1, int32 Temp_int_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, int32 Temp_int_Variable_2, float Temp_float_Variable_4, float Temp_float_Variable_5, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, float K2Node_Select_Default, float K2Node_Select_Default_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue_2, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult, float K2Node_Select_Default_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult_1, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_Starter_C", "AddRandomRotToCubes");

	Params::ABP_StormMode_Starter_C_AddRandomRotToCubes_Params Parms{};

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


// Function BP_StormMode_Starter.BP_StormMode_Starter_C.SoundPillarCube
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             Component                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StormMode_Starter_C::SoundPillarCube(class USoundBase* Sound, class USceneComponent* Component, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_Starter_C", "SoundPillarCube");

	Params::ABP_StormMode_Starter_C_SoundPillarCube_Params Parms{};

	Parms.Sound = Sound;
	Parms.Component = Component;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StormMode_Starter.BP_StormMode_Starter_C.AddCubeRot
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

struct FRotator ABP_StormMode_Starter_C::AddCubeRot(float Alpha, const struct FRotator& Rot, float Yaw, const struct FRotator& Temp_struct_Variable, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool Temp_bool_Variable, const struct FRotator& K2Node_Select_Default, const struct FRotator& CallFunc_RLerp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_Starter_C", "AddCubeRot");

	Params::ABP_StormMode_Starter_C_AddCubeRot_Params Parms{};

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


// Function BP_StormMode_Starter.BP_StormMode_Starter_C.Pillar_AlignRot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Alpha                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rot                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             Component                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Yaw                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_AddCubeRot_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_StormMode_Starter_C::Pillar_AlignRot(float Alpha, const struct FRotator& Rot, class USceneComponent* Component, float Yaw, const struct FRotator& CallFunc_AddCubeRot_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_Starter_C", "Pillar_AlignRot");

	Params::ABP_StormMode_Starter_C_Pillar_AlignRot_Params Parms{};

	Parms.Alpha = Alpha;
	Parms.Rot = Rot;
	Parms.Component = Component;
	Parms.Yaw = Yaw;
	Parms.CallFunc_AddCubeRot_ReturnValue = CallFunc_AddCubeRot_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StormMode_Starter.BP_StormMode_Starter_C.SaveSelectedShell
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             Shell                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Custom                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             CallFunc_0_Base_GetCurrentArmor_CurrentArmorType                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StormMode_Starter_C::SaveSelectedShell(enum class EArmorTypes Shell, bool Custom, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool Temp_bool_Variable, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, enum class EArmorTypes CallFunc_0_Base_GetCurrentArmor_CurrentArmorType, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess_1, enum class EArmorTypes K2Node_Select_Default, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_Starter_C", "SaveSelectedShell");

	Params::ABP_StormMode_Starter_C_SaveSelectedShell_Params Parms{};

	Parms.Shell = Shell;
	Parms.Custom = Custom;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_0_Base_GetCurrentArmor_CurrentArmorType = CallFunc_0_Base_GetCurrentArmor_CurrentArmorType;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StormMode_Starter.BP_StormMode_Starter_C.DisableStarter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StormMode_Starter_C::DisableStarter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_Starter_C", "DisableStarter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormMode_Starter.BP_StormMode_Starter_C.SetFireColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Local_Color                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_LinearColorToVector_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StormMode_Starter_C::SetFireColor(const struct FLinearColor& Local_Color, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_Starter_C", "SetFireColor");

	Params::ABP_StormMode_Starter_C_SetFireColor_Params Parms{};

	Parms.Local_Color = Local_Color;
	Parms.CallFunc_Conv_LinearColorToVector_ReturnValue = CallFunc_Conv_LinearColorToVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StormMode_Starter.BP_StormMode_Starter_C.GetStartingSelections
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EArmorTypes             SelectedShell                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             SelectedWeapon                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERiposteTypes           SelectedRiposte                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StormMode_Starter_C::GetStartingSelections(enum class EArmorTypes* SelectedShell, enum class EComboTypes* SelectedWeapon, enum class ERiposteTypes* SelectedRiposte)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_Starter_C", "GetStartingSelections");

	Params::ABP_StormMode_Starter_C_GetStartingSelections_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectedShell != nullptr)
		*SelectedShell = Parms.SelectedShell;

	if (SelectedWeapon != nullptr)
		*SelectedWeapon = Parms.SelectedWeapon;

	if (SelectedRiposte != nullptr)
		*SelectedRiposte = Parms.SelectedRiposte;

}


// Function BP_StormMode_Starter.BP_StormMode_Starter_C.SetGodRay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRangeFromStream_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StormMode_Starter_C::SetGodRay(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, float CallFunc_RandomFloatInRangeFromStream_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_Starter_C", "SetGodRay");

	Params::ABP_StormMode_Starter_C_SetGodRay_Params Parms{};

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRangeFromStream_ReturnValue = CallFunc_RandomFloatInRangeFromStream_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StormMode_Starter.BP_StormMode_Starter_C.OnActorUsed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldShowWarning_Show_                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_StormMode_Starter_C::OnActorUsed(class APlayerController* Controller, bool* Success, bool CallFunc_ShouldShowWarning_Show_, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_Starter_C", "OnActorUsed");

	Params::ABP_StormMode_Starter_C_OnActorUsed_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_ShouldShowWarning_Show_ = CallFunc_ShouldShowWarning_Show_;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_StormMode_Starter.BP_StormMode_Starter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StormMode_Starter_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_Starter_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormMode_Starter.BP_StormMode_Starter_C.Timeline_Cubes_Movement_3__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_StormMode_Starter_C::Timeline_Cubes_Movement_3__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_Starter_C", "Timeline_Cubes_Movement_3__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormMode_Starter.BP_StormMode_Starter_C.Timeline_Cubes_Movement_3__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_StormMode_Starter_C::Timeline_Cubes_Movement_3__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_Starter_C", "Timeline_Cubes_Movement_3__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormMode_Starter.BP_StormMode_Starter_C.Timeline_Cubes_Movement_3__Sound__EventFunc
// (BlueprintEvent)
// Parameters:

void ABP_StormMode_Starter_C::Timeline_Cubes_Movement_3__Sound__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_Starter_C", "Timeline_Cubes_Movement_3__Sound__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormMode_Starter.BP_StormMode_Starter_C.Timeline_Cubes_Movement_2__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_StormMode_Starter_C::Timeline_Cubes_Movement_2__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_Starter_C", "Timeline_Cubes_Movement_2__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormMode_Starter.BP_StormMode_Starter_C.Timeline_Cubes_Movement_2__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_StormMode_Starter_C::Timeline_Cubes_Movement_2__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_Starter_C", "Timeline_Cubes_Movement_2__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormMode_Starter.BP_StormMode_Starter_C.Timeline_Cubes_Movement_2__Sound__EventFunc
// (BlueprintEvent)
// Parameters:

void ABP_StormMode_Starter_C::Timeline_Cubes_Movement_2__Sound__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_Starter_C", "Timeline_Cubes_Movement_2__Sound__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormMode_Starter.BP_StormMode_Starter_C.Timeline_Cubes_Movement_1__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_StormMode_Starter_C::Timeline_Cubes_Movement_1__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_Starter_C", "Timeline_Cubes_Movement_1__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormMode_Starter.BP_StormMode_Starter_C.Timeline_Cubes_Movement_1__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_StormMode_Starter_C::Timeline_Cubes_Movement_1__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_Starter_C", "Timeline_Cubes_Movement_1__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormMode_Starter.BP_StormMode_Starter_C.Timeline_Cubes_Movement_1__Sound__EventFunc
// (BlueprintEvent)
// Parameters:

void ABP_StormMode_Starter_C::Timeline_Cubes_Movement_1__Sound__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_Starter_C", "Timeline_Cubes_Movement_1__Sound__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormMode_Starter.BP_StormMode_Starter_C.Timeline_TurnOffPillar__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_StormMode_Starter_C::Timeline_TurnOffPillar__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_Starter_C", "Timeline_TurnOffPillar__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormMode_Starter.BP_StormMode_Starter_C.Timeline_TurnOffPillar__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_StormMode_Starter_C::Timeline_TurnOffPillar__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_Starter_C", "Timeline_TurnOffPillar__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormMode_Starter.BP_StormMode_Starter_C.OnUserWantToStartRun
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_ShellDyes           Dyes                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERiposteTypes           Riposte                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StormMode_Starter_C::OnUserWantToStartRun(const struct FStruct_ShellDyes& Dyes, enum class EArmorTypes Character, enum class EComboTypes Weapon, enum class ERiposteTypes Riposte)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_Starter_C", "OnUserWantToStartRun");

	Params::ABP_StormMode_Starter_C_OnUserWantToStartRun_Params Parms{};

	Parms.Dyes = Dyes;
	Parms.Character = Character;
	Parms.Weapon = Weapon;
	Parms.Riposte = Riposte;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StormMode_Starter.BP_StormMode_Starter_C.Animation_Cube_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StormMode_Starter_C::Animation_Cube_2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_Starter_C", "Animation_Cube_2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormMode_Starter.BP_StormMode_Starter_C.Animation_Cube_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StormMode_Starter_C::Animation_Cube_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_Starter_C", "Animation_Cube_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormMode_Starter.BP_StormMode_Starter_C.Animation_Cube_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StormMode_Starter_C::Animation_Cube_3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_Starter_C", "Animation_Cube_3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormMode_Starter.BP_StormMode_Starter_C.Open_StormMode_Menu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_StormMode_Menu_C*        Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StormMode_Starter_C::Open_StormMode_Menu(class UUI_StormMode_Menu_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_Starter_C", "Open_StormMode_Menu");

	Params::ABP_StormMode_Starter_C_Open_StormMode_Menu_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StormMode_Starter.BP_StormMode_Starter_C.CubesAnim_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StormMode_Starter_C::CubesAnim_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_Starter_C", "CubesAnim_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormMode_Starter.BP_StormMode_Starter_C.DisablePillarAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StormMode_Starter_C::DisablePillarAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_Starter_C", "DisablePillarAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormMode_Starter.BP_StormMode_Starter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_StormMode_Starter_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_Starter_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormMode_Starter.BP_StormMode_Starter_C.ShowWarning
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StormMode_Starter_C::ShowWarning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_Starter_C", "ShowWarning");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StormMode_Starter.BP_StormMode_Starter_C.ExecuteUbergraph_BP_StormMode_Starter
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInViewport_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_StormMode_RunicWarning_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenu_C>CallFunc_OnOpen_self_CastInput                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_ShellDyes           K2Node_CustomEvent_Dyes                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             K2Node_CustomEvent_Character                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             K2Node_CustomEvent_Weapon                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERiposteTypes           K2Node_CustomEvent_Riposte                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetRiposteUpgradeIDs_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_StormModeProgress  CallFunc_GetStormModeProgress_Progress                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_StormMode_Menu_C*        K2Node_CustomEvent_Widget                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetScalarParameterValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_StormMode_Starter_C::ExecuteUbergraph_BP_StormMode_Starter(int32 EntryPoint, bool CallFunc_IsInViewport_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UUI_StormMode_RunicWarning_C* CallFunc_Create_ReturnValue, TScriptInterface<class IBPI_StormModeMenu_C> CallFunc_OnOpen_self_CastInput, const struct FStruct_ShellDyes& K2Node_CustomEvent_Dyes, enum class EArmorTypes K2Node_CustomEvent_Character, enum class EComboTypes K2Node_CustomEvent_Weapon, enum class ERiposteTypes K2Node_CustomEvent_Riposte, class FName CallFunc_GetRiposteUpgradeIDs_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_IsValid_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2, bool K2Node_DynamicCast_bSuccess_3, enum class Enum_StormModeProgress CallFunc_GetStormModeProgress_Progress, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UUI_StormMode_Menu_C* K2Node_CustomEvent_Widget, float CallFunc_K2_GetScalarParameterValue_ReturnValue, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_3, bool K2Node_DynamicCast_bSuccess_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StormMode_Starter_C", "ExecuteUbergraph_BP_StormMode_Starter");

	Params::ABP_StormMode_Starter_C_ExecuteUbergraph_BP_StormMode_Starter_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsInViewport_ReturnValue = CallFunc_IsInViewport_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_OnOpen_self_CastInput = CallFunc_OnOpen_self_CastInput;
	Parms.K2Node_CustomEvent_Dyes = K2Node_CustomEvent_Dyes;
	Parms.K2Node_CustomEvent_Character = K2Node_CustomEvent_Character;
	Parms.K2Node_CustomEvent_Weapon = K2Node_CustomEvent_Weapon;
	Parms.K2Node_CustomEvent_Riposte = K2Node_CustomEvent_Riposte;
	Parms.CallFunc_GetRiposteUpgradeIDs_ReturnValue = CallFunc_GetRiposteUpgradeIDs_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetStormModeProgress_Progress = CallFunc_GetStormModeProgress_Progress;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_CustomEvent_Widget = K2Node_CustomEvent_Widget;
	Parms.CallFunc_K2_GetScalarParameterValue_ReturnValue = CallFunc_K2_GetScalarParameterValue_ReturnValue;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_3 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_3;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


