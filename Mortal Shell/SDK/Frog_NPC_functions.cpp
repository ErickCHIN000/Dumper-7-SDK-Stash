#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Frog_NPC.Frog_NPC_C
// (Actor)

class UClass* AFrog_NPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Frog_NPC_C");

	return Clss;
}


// Frog_NPC_C Frog_NPC.Default__Frog_NPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFrog_NPC_C* AFrog_NPC_C::GetDefaultObj()
{
	static class AFrog_NPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFrog_NPC_C*>(AFrog_NPC_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Frog_NPC.Frog_NPC_C.BoiledFrogAnswer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrog_NPC_C::BoiledFrogAnswer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "BoiledFrogAnswer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frog_NPC.Frog_NPC_C.SpawnNotify
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_ShellDye           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetShadeNames_ReturnValue                               (None)

void AFrog_NPC_C::SpawnNotify(enum class Enum_ShellDye Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, int32 K2Node_Select_Default, class FText CallFunc_GetShadeNames_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "SpawnNotify");

	Params::AFrog_NPC_C_SpawnNotify_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetShadeNames_ReturnValue = CallFunc_GetShadeNames_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frog_NPC.Frog_NPC_C.ShouldShowNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CurrentValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AFrog_NPC_C::ShouldShowNotify(bool CurrentValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "ShouldShowNotify");

	Params::AFrog_NPC_C_ShouldShowNotify_Params Parms{};

	Parms.CurrentValue = CurrentValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frog_NPC.Frog_NPC_C.UpdateOrShowIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        LastFedItem                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFrog_NPC_C::UpdateOrShowIndicator(class FName LastFedItem, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "UpdateOrShowIndicator");

	Params::AFrog_NPC_C_UpdateOrShowIndicator_Params Parms{};

	Parms.LastFedItem = LastFedItem;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frog_NPC.Frog_NPC_C.CreateAnswerWithAmount
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Int                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Answer                                                           (Parm, OutParm)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void AFrog_NPC_C::CreateAnswerWithAmount(class FText& Text, int32 Int, class FText* Answer, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "CreateAnswerWithAmount");

	Params::AFrog_NPC_C_CreateAnswerWithAmount_Params Parms{};

	Parms.Text = Text;
	Parms.Int = Int;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Answer != nullptr)
		*Answer = Parms.Answer;

}


// Function Frog_NPC.Frog_NPC_C.GorfSimpleDance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bDance                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFrog_king_v2_Skeleton_AnimBlueprint_C*K2Node_DynamicCast_AsFrog_King_V_2_Skeleton_Anim_Blueprint       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFrog_NPC_C::GorfSimpleDance(bool bDance, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UFrog_king_v2_Skeleton_AnimBlueprint_C* K2Node_DynamicCast_AsFrog_King_V_2_Skeleton_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "GorfSimpleDance");

	Params::AFrog_NPC_C_GorfSimpleDance_Params Parms{};

	Parms.bDance = bDance;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsFrog_King_V_2_Skeleton_Anim_Blueprint = K2Node_DynamicCast_AsFrog_King_V_2_Skeleton_Anim_Blueprint;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frog_NPC.Frog_NPC_C.RemoveIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFrog_NPC_C::RemoveIndicator(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "RemoveIndicator");

	Params::AFrog_NPC_C_RemoveIndicator_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frog_NPC.Frog_NPC_C.UpdateIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               JustUpdate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_JustUpdate                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFrog_NPC_C::UpdateIndicator(bool JustUpdate, bool Local_JustUpdate, bool K2Node_SwitchName_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "UpdateIndicator");

	Params::AFrog_NPC_C_UpdateIndicator_Params Parms{};

	Parms.JustUpdate = JustUpdate;
	Parms.Local_JustUpdate = Local_JustUpdate;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frog_NPC.Frog_NPC_C.GorfIndicator_Create
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUsableIndicator_Gorf_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInViewport_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFrog_NPC_C::GorfIndicator_Create(class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUsableIndicator_Gorf_C* CallFunc_Create_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "GorfIndicator_Create");

	Params::AFrog_NPC_C_GorfIndicator_Create_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsInViewport_ReturnValue = CallFunc_IsInViewport_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frog_NPC.Frog_NPC_C.FeedSFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrog_NPC_C::FeedSFX(class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "FeedSFX");

	Params::AFrog_NPC_C_FeedSFX_Params Parms{};

	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_1 = CallFunc_SpawnSoundAttached_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frog_NPC.Frog_NPC_C.GetFroSpawnYaw
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue_Yaw                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrog_NPC_C::GetFroSpawnYaw(float* ReturnValue_Yaw, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "GetFroSpawnYaw");

	Params::AFrog_NPC_C_GetFroSpawnYaw_Params Parms{};

	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnValue_Yaw != nullptr)
		*ReturnValue_Yaw = Parms.ReturnValue_Yaw;

}


// Function Frog_NPC.Frog_NPC_C.SpawnFrog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetFroSpawnYaw_ReturnValue_Yaw                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetFrogSpawnLoc_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AExplodingFrogCharacter_C*   CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrog_NPC_C::SpawnFrog(float CallFunc_GetFroSpawnYaw_ReturnValue_Yaw, const struct FVector& CallFunc_GetFrogSpawnLoc_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AExplodingFrogCharacter_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "SpawnFrog");

	Params::AFrog_NPC_C_SpawnFrog_Params Parms{};

	Parms.CallFunc_GetFroSpawnYaw_ReturnValue_Yaw = CallFunc_GetFroSpawnYaw_ReturnValue_Yaw;
	Parms.CallFunc_GetFrogSpawnLoc_ReturnValue = CallFunc_GetFrogSpawnLoc_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frog_NPC.Frog_NPC_C.GetFrogSpawnLoc
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_TransformLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector AFrog_NPC_C::GetFrogSpawnLoc(const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, const struct FVector& CallFunc_TransformLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "GetFrogSpawnLoc");

	Params::AFrog_NPC_C_GetFrogSpawnLoc_Params Parms{};

	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_TransformLocation_ReturnValue = CallFunc_TransformLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Frog_NPC.Frog_NPC_C.PlayWeaponImpactAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrog_NPC_C::PlayWeaponImpactAudio(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "PlayWeaponImpactAudio");

	Params::AFrog_NPC_C_PlayWeaponImpactAudio_Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frog_NPC.Frog_NPC_C.SpawnEmitterOnHit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              CallFunc_GetWeaponMesh_WeaponMesh                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrog_NPC_C::SpawnEmitterOnHit(const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UMeshComponent* CallFunc_GetWeaponMesh_WeaponMesh, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "SpawnEmitterOnHit");

	Params::AFrog_NPC_C_SpawnEmitterOnHit_Params Parms{};

	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_GetWeaponMesh_WeaponMesh = CallFunc_GetWeaponMesh_WeaponMesh;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frog_NPC.Frog_NPC_C.GetDyeToUnlock
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_ShellDye           NoDye                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           Dye1                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           Dye2                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           Dye3                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           Temp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           Temp_byte_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           Temp_byte_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           Temp_byte_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           Temp_byte_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           Temp_byte_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           Temp_byte_Variable_14                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           Temp_byte_Variable_15                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           Temp_byte_Variable_16                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           Temp_byte_Variable_17                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           Temp_byte_Variable_18                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           Temp_byte_Variable_19                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrog_NPC_C::GetDyeToUnlock(enum class Enum_ShellDye* NoDye, enum class Enum_ShellDye* Dye1, enum class Enum_ShellDye* Dye2, enum class Enum_ShellDye* Dye3, enum class Enum_ShellDye Temp_byte_Variable, enum class Enum_ShellDye Temp_byte_Variable_1, enum class Enum_ShellDye Temp_byte_Variable_2, enum class Enum_ShellDye Temp_byte_Variable_3, enum class Enum_ShellDye Temp_byte_Variable_4, enum class Enum_ShellDye Temp_byte_Variable_5, enum class Enum_ShellDye Temp_byte_Variable_6, enum class Enum_ShellDye Temp_byte_Variable_7, enum class Enum_ShellDye Temp_byte_Variable_8, enum class Enum_ShellDye Temp_byte_Variable_9, enum class Enum_ShellDye Temp_byte_Variable_10, enum class Enum_ShellDye Temp_byte_Variable_11, enum class Enum_ShellDye Temp_byte_Variable_12, enum class Enum_ShellDye Temp_byte_Variable_13, enum class Enum_ShellDye Temp_byte_Variable_14, enum class Enum_ShellDye Temp_byte_Variable_15, enum class Enum_ShellDye Temp_byte_Variable_16, enum class Enum_ShellDye Temp_byte_Variable_17, enum class Enum_ShellDye Temp_byte_Variable_18, enum class Enum_ShellDye Temp_byte_Variable_19, enum class Enum_ShellDye K2Node_Select_Default, enum class Enum_ShellDye K2Node_Select_Default_1, enum class Enum_ShellDye K2Node_Select_Default_2, enum class Enum_ShellDye K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "GetDyeToUnlock");

	Params::AFrog_NPC_C_GetDyeToUnlock_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.Temp_byte_Variable_9 = Temp_byte_Variable_9;
	Parms.Temp_byte_Variable_10 = Temp_byte_Variable_10;
	Parms.Temp_byte_Variable_11 = Temp_byte_Variable_11;
	Parms.Temp_byte_Variable_12 = Temp_byte_Variable_12;
	Parms.Temp_byte_Variable_13 = Temp_byte_Variable_13;
	Parms.Temp_byte_Variable_14 = Temp_byte_Variable_14;
	Parms.Temp_byte_Variable_15 = Temp_byte_Variable_15;
	Parms.Temp_byte_Variable_16 = Temp_byte_Variable_16;
	Parms.Temp_byte_Variable_17 = Temp_byte_Variable_17;
	Parms.Temp_byte_Variable_18 = Temp_byte_Variable_18;
	Parms.Temp_byte_Variable_19 = Temp_byte_Variable_19;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

	if (NoDye != nullptr)
		*NoDye = Parms.NoDye;

	if (Dye1 != nullptr)
		*Dye1 = Parms.Dye1;

	if (Dye2 != nullptr)
		*Dye2 = Parms.Dye2;

	if (Dye3 != nullptr)
		*Dye3 = Parms.Dye3;

}


// Function Frog_NPC.Frog_NPC_C.GorfHasBeenFed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Fed                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             CallFunc_0_Base_GetCurrentArmor_CurrentArmorType                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_PCGetNamedName_Value                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormModeContentIsEnabled_Enabled_                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_InRange_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_InRange_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFrog_NPC_C::GorfHasBeenFed(bool* Fed, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, enum class EArmorTypes CallFunc_0_Base_GetCurrentArmor_CurrentArmorType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FName CallFunc_PCGetNamedName_Value, bool CallFunc_EqualEqual_NameName_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_StormModeContentIsEnabled_Enabled_, bool CallFunc_InRange_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, bool CallFunc_InRange_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "GorfHasBeenFed");

	Params::AFrog_NPC_C_GorfHasBeenFed_Params Parms{};

	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_0_Base_GetCurrentArmor_CurrentArmorType = CallFunc_0_Base_GetCurrentArmor_CurrentArmorType;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_PCGetNamedName_Value = CallFunc_PCGetNamedName_Value;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_StormModeContentIsEnabled_Enabled_ = CallFunc_StormModeContentIsEnabled_Enabled_;
	Parms.CallFunc_InRange_IntInt_ReturnValue = CallFunc_InRange_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_2 = CallFunc_GreaterEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_InRange_IntInt_ReturnValue_1 = CallFunc_InRange_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Fed != nullptr)
		*Fed = Parms.Fed;

}


// Function Frog_NPC.Frog_NPC_C.GetFedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CallFunc_PCGetNamedName_Value                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetArbNameInChangedSetPure_bIsInSet                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNamedPCInt_Value_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrog_NPC_C::GetFedState(class FName CallFunc_PCGetNamedName_Value, int32 CallFunc_GetNamedPCInt_Value, int32 CallFunc_GetNamedPCInt_Value_1, int32 CallFunc_GetNamedPCInt_Value_2, bool CallFunc_GetArbNameInChangedSetPure_bIsInSet, int32 CallFunc_GetNamedPCInt_Value_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "GetFedState");

	Params::AFrog_NPC_C_GetFedState_Params Parms{};

	Parms.CallFunc_PCGetNamedName_Value = CallFunc_PCGetNamedName_Value;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_GetNamedPCInt_Value_1 = CallFunc_GetNamedPCInt_Value_1;
	Parms.CallFunc_GetNamedPCInt_Value_2 = CallFunc_GetNamedPCInt_Value_2;
	Parms.CallFunc_GetArbNameInChangedSetPure_bIsInSet = CallFunc_GetArbNameInChangedSetPure_bIsInSet;
	Parms.CallFunc_GetNamedPCInt_Value_3 = CallFunc_GetNamedPCInt_Value_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frog_NPC.Frog_NPC_C.ResetFedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrog_NPC_C::ResetFedState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "ResetFedState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frog_NPC.Frog_NPC_C.DebugFedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_3                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_4                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_5                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_6                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_11                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_7                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_12                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_13                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_14                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_15                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_16                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_17                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_18                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_19                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_20                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_21                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_22                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrog_NPC_C::DebugFedState(const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_GetNamedPCInt_Value, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, int32 CallFunc_GetNamedPCInt_Value_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const class FString& CallFunc_Conv_IntToString_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, int32 CallFunc_GetNamedPCInt_Value_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Conv_IntToString_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, int32 CallFunc_GetNamedPCInt_Value_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Conv_IntToString_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, const class FString& CallFunc_Conv_IntToString_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, const class FString& CallFunc_Concat_StrStr_ReturnValue_13, const class FString& CallFunc_Concat_StrStr_ReturnValue_14, const class FString& CallFunc_Concat_StrStr_ReturnValue_15, const class FString& CallFunc_Concat_StrStr_ReturnValue_16, const class FString& CallFunc_Concat_StrStr_ReturnValue_17, const class FString& CallFunc_Concat_StrStr_ReturnValue_18, const class FString& CallFunc_Concat_StrStr_ReturnValue_19, const class FString& CallFunc_Concat_StrStr_ReturnValue_20, const class FString& CallFunc_Concat_StrStr_ReturnValue_21, const class FString& CallFunc_Concat_StrStr_ReturnValue_22, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "DebugFedState");

	Params::AFrog_NPC_C_DebugFedState_Params Parms{};

	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Conv_IntToString_ReturnValue_2 = CallFunc_Conv_IntToString_ReturnValue_2;
	Parms.CallFunc_GetNamedPCInt_Value_1 = CallFunc_GetNamedPCInt_Value_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue_3 = CallFunc_Conv_IntToString_ReturnValue_3;
	Parms.CallFunc_Conv_IntToString_ReturnValue_4 = CallFunc_Conv_IntToString_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_GetNamedPCInt_Value_2 = CallFunc_GetNamedPCInt_Value_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Conv_IntToString_ReturnValue_5 = CallFunc_Conv_IntToString_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_GetNamedPCInt_Value_3 = CallFunc_GetNamedPCInt_Value_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_Conv_IntToString_ReturnValue_6 = CallFunc_Conv_IntToString_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;
	Parms.CallFunc_Concat_StrStr_ReturnValue_11 = CallFunc_Concat_StrStr_ReturnValue_11;
	Parms.CallFunc_Conv_IntToString_ReturnValue_7 = CallFunc_Conv_IntToString_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_12 = CallFunc_Concat_StrStr_ReturnValue_12;
	Parms.CallFunc_Concat_StrStr_ReturnValue_13 = CallFunc_Concat_StrStr_ReturnValue_13;
	Parms.CallFunc_Concat_StrStr_ReturnValue_14 = CallFunc_Concat_StrStr_ReturnValue_14;
	Parms.CallFunc_Concat_StrStr_ReturnValue_15 = CallFunc_Concat_StrStr_ReturnValue_15;
	Parms.CallFunc_Concat_StrStr_ReturnValue_16 = CallFunc_Concat_StrStr_ReturnValue_16;
	Parms.CallFunc_Concat_StrStr_ReturnValue_17 = CallFunc_Concat_StrStr_ReturnValue_17;
	Parms.CallFunc_Concat_StrStr_ReturnValue_18 = CallFunc_Concat_StrStr_ReturnValue_18;
	Parms.CallFunc_Concat_StrStr_ReturnValue_19 = CallFunc_Concat_StrStr_ReturnValue_19;
	Parms.CallFunc_Concat_StrStr_ReturnValue_20 = CallFunc_Concat_StrStr_ReturnValue_20;
	Parms.CallFunc_Concat_StrStr_ReturnValue_21 = CallFunc_Concat_StrStr_ReturnValue_21;
	Parms.CallFunc_Concat_StrStr_ReturnValue_22 = CallFunc_Concat_StrStr_ReturnValue_22;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frog_NPC.Frog_NPC_C.CanFeedGorfAndCreateAnswers
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanFeed                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FText>                Answers                                                          (Parm, OutParm, HasGetValueTypeHash)
// TArray<class FName>                AnswersIDs                                                       (Parm, OutParm, HasGetValueTypeHash)
// TArray<class FName>                Local_Answers_IDs                                                (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               Local_CanFeed                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FText>                Local_Answers                                                    (Edit, BlueprintVisible, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormModeContentIsEnabled_Enabled_                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_PCGetNamedName_Value                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_CreateAnswerWithAmount_Answer                           (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasItem_Success                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_HasItem_Amount                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_4                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_5                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_CreateAnswerWithAmount_Answer_1                         (None)
// bool                               CallFunc_HasItem_Success_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_HasItem_Amount_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_CreateAnswerWithAmount_Answer_2                         (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_3                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_4                           (None)
// class FText                        CallFunc_CreateAnswerWithAmount_Answer_3                         (None)
// class FText                        CallFunc_CreateAnswerWithAmount_Answer_4                         (None)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasItem_Success_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_HasItem_Amount_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasItem_Success_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_HasItem_Amount_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasItem_Success_4                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_HasItem_Amount_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_11                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrog_NPC_C::CanFeedGorfAndCreateAnswers(bool* CanFeed, TArray<class FText>* Answers, TArray<class FName>* AnswersIDs, const TArray<class FName>& Local_Answers_IDs, bool Local_CanFeed, const TArray<class FText>& Local_Answers, class FText Temp_text_Variable, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_StormModeContentIsEnabled_Enabled_, class FName CallFunc_PCGetNamedName_Value, bool CallFunc_EqualEqual_NameName_ReturnValue, class FName Temp_name_Variable, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_CreateAnswerWithAmount_Answer, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_HasItem_Success, int32 CallFunc_HasItem_Amount, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, int32 CallFunc_Array_Add_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, class FText CallFunc_CreateAnswerWithAmount_Answer_1, bool CallFunc_HasItem_Success_1, int32 CallFunc_HasItem_Amount_1, int32 CallFunc_Array_Add_ReturnValue_3, class FText CallFunc_MakeLiteralText_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_CreateAnswerWithAmount_Answer_2, class FText CallFunc_MakeLiteralText_ReturnValue_3, class FText CallFunc_MakeLiteralText_ReturnValue_4, class FText CallFunc_CreateAnswerWithAmount_Answer_3, class FText CallFunc_CreateAnswerWithAmount_Answer_4, int32 CallFunc_Array_Add_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_5, bool CallFunc_HasItem_Success_2, int32 CallFunc_HasItem_Amount_2, int32 CallFunc_Array_Add_ReturnValue_6, int32 CallFunc_Array_Add_ReturnValue_7, int32 CallFunc_Array_Add_ReturnValue_8, int32 CallFunc_Array_Add_ReturnValue_9, bool CallFunc_HasItem_Success_3, int32 CallFunc_HasItem_Amount_3, int32 CallFunc_Array_Add_ReturnValue_10, bool CallFunc_HasItem_Success_4, int32 CallFunc_HasItem_Amount_4, int32 CallFunc_Array_Add_ReturnValue_11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "CanFeedGorfAndCreateAnswers");

	Params::AFrog_NPC_C_CanFeedGorfAndCreateAnswers_Params Parms{};

	Parms.Local_Answers_IDs = Local_Answers_IDs;
	Parms.Local_CanFeed = Local_CanFeed;
	Parms.Local_Answers = Local_Answers;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_StormModeContentIsEnabled_Enabled_ = CallFunc_StormModeContentIsEnabled_Enabled_;
	Parms.CallFunc_PCGetNamedName_Value = CallFunc_PCGetNamedName_Value;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_CreateAnswerWithAmount_Answer = CallFunc_CreateAnswerWithAmount_Answer;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_HasItem_Success = CallFunc_HasItem_Success;
	Parms.CallFunc_HasItem_Amount = CallFunc_HasItem_Amount;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;
	Parms.Temp_name_Variable_5 = Temp_name_Variable_5;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_CreateAnswerWithAmount_Answer_1 = CallFunc_CreateAnswerWithAmount_Answer_1;
	Parms.CallFunc_HasItem_Success_1 = CallFunc_HasItem_Success_1;
	Parms.CallFunc_HasItem_Amount_1 = CallFunc_HasItem_Amount_1;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_CreateAnswerWithAmount_Answer_2 = CallFunc_CreateAnswerWithAmount_Answer_2;
	Parms.CallFunc_MakeLiteralText_ReturnValue_3 = CallFunc_MakeLiteralText_ReturnValue_3;
	Parms.CallFunc_MakeLiteralText_ReturnValue_4 = CallFunc_MakeLiteralText_ReturnValue_4;
	Parms.CallFunc_CreateAnswerWithAmount_Answer_3 = CallFunc_CreateAnswerWithAmount_Answer_3;
	Parms.CallFunc_CreateAnswerWithAmount_Answer_4 = CallFunc_CreateAnswerWithAmount_Answer_4;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;
	Parms.CallFunc_Array_Add_ReturnValue_5 = CallFunc_Array_Add_ReturnValue_5;
	Parms.CallFunc_HasItem_Success_2 = CallFunc_HasItem_Success_2;
	Parms.CallFunc_HasItem_Amount_2 = CallFunc_HasItem_Amount_2;
	Parms.CallFunc_Array_Add_ReturnValue_6 = CallFunc_Array_Add_ReturnValue_6;
	Parms.CallFunc_Array_Add_ReturnValue_7 = CallFunc_Array_Add_ReturnValue_7;
	Parms.CallFunc_Array_Add_ReturnValue_8 = CallFunc_Array_Add_ReturnValue_8;
	Parms.CallFunc_Array_Add_ReturnValue_9 = CallFunc_Array_Add_ReturnValue_9;
	Parms.CallFunc_HasItem_Success_3 = CallFunc_HasItem_Success_3;
	Parms.CallFunc_HasItem_Amount_3 = CallFunc_HasItem_Amount_3;
	Parms.CallFunc_Array_Add_ReturnValue_10 = CallFunc_Array_Add_ReturnValue_10;
	Parms.CallFunc_HasItem_Success_4 = CallFunc_HasItem_Success_4;
	Parms.CallFunc_HasItem_Amount_4 = CallFunc_HasItem_Amount_4;
	Parms.CallFunc_Array_Add_ReturnValue_11 = CallFunc_Array_Add_ReturnValue_11;

	UObject::ProcessEvent(Func, &Parms);

	if (CanFeed != nullptr)
		*CanFeed = Parms.CanFeed;

	if (Answers != nullptr)
		*Answers = std::move(Parms.Answers);

	if (AnswersIDs != nullptr)
		*AnswersIDs = std::move(Parms.AnswersIDs);

}


// Function Frog_NPC.Frog_NPC_C.HasItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Amount                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasItem_Success                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_HasItem_InventorySlot                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_HasItem_Amount                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrog_NPC_C::HasItem(class FName ItemId, bool* Success, int32* Amount, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_HasItem_Success, int32 CallFunc_HasItem_InventorySlot, int32 CallFunc_HasItem_Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "HasItem");

	Params::AFrog_NPC_C_HasItem_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_HasItem_Success = CallFunc_HasItem_Success;
	Parms.CallFunc_HasItem_InventorySlot = CallFunc_HasItem_InventorySlot;
	Parms.CallFunc_HasItem_Amount = CallFunc_HasItem_Amount;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (Amount != nullptr)
		*Amount = Parms.Amount;

}


// Function Frog_NPC.Frog_NPC_C.GetFrogDialogue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FDHDialogueLine>     ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDHDialogueLine>     Temp_struct_Variable                                             (ReferenceParm, HasGetValueTypeHash)
// TArray<struct FDHDialogueLine>     Temp_struct_Variable_1                                           (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDHDialogueLine>     K2Node_Select_Default                                            (ReferenceParm, HasGetValueTypeHash)

TArray<struct FDHDialogueLine> AFrog_NPC_C::GetFrogDialogue(int32 Temp_int_Variable, TArray<struct FDHDialogueLine>& Temp_struct_Variable, TArray<struct FDHDialogueLine>& Temp_struct_Variable_1, int32 CallFunc_Clamp_ReturnValue, TArray<struct FDHDialogueLine>& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "GetFrogDialogue");

	Params::AFrog_NPC_C_GetFrogDialogue_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Frog_NPC.Frog_NPC_C.UnlockHadernDye
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_ShellsDyes_LockStateCallFunc_GetShellDyesLockState_LockState                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_ShellsDyes_LockStateCallFunc_GetShellDyesLockState_LockState_1                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Dyes_LockState      K2Node_MakeStruct_Struct_Dyes_LockState                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ShellsDyes_LockStateK2Node_SetFieldsInStruct_StructOut                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Dyes_LockState      K2Node_MakeStruct_Struct_Dyes_LockState_1                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_4                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_ShellsDyes_LockStateK2Node_SetFieldsInStruct_StructOut_1                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_5                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_6                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_ShellsDyes_LockStateCallFunc_GetShellDyesLockState_LockState_2                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ShellDyes           CallFunc_GetShellDyes_Dyes                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Dyes_LockState      K2Node_MakeStruct_Struct_Dyes_LockState_2                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ShellsDyes_LockStateK2Node_SetFieldsInStruct_StructOut_2                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrog_NPC_C::UnlockHadernDye(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_1, const struct FStruct_ShellsDyes_LockState& CallFunc_GetShellDyesLockState_LockState, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_2, bool K2Node_DynamicCast_bSuccess_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_3, bool K2Node_DynamicCast_bSuccess_3, const struct FStruct_ShellsDyes_LockState& CallFunc_GetShellDyesLockState_LockState_1, const struct FStruct_Dyes_LockState& K2Node_MakeStruct_Struct_Dyes_LockState, const struct FStruct_ShellsDyes_LockState& K2Node_SetFieldsInStruct_StructOut, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, const struct FStruct_Dyes_LockState& K2Node_MakeStruct_Struct_Dyes_LockState_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_4, bool K2Node_DynamicCast_bSuccess_4, const struct FStruct_ShellsDyes_LockState& K2Node_SetFieldsInStruct_StructOut_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_5, bool K2Node_DynamicCast_bSuccess_5, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_6, bool K2Node_DynamicCast_bSuccess_6, const struct FStruct_ShellsDyes_LockState& CallFunc_GetShellDyesLockState_LockState_2, const struct FStruct_ShellDyes& CallFunc_GetShellDyes_Dyes, bool K2Node_SwitchEnum_CmpSuccess, const struct FStruct_Dyes_LockState& K2Node_MakeStruct_Struct_Dyes_LockState_2, const struct FStruct_ShellsDyes_LockState& K2Node_SetFieldsInStruct_StructOut_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "UnlockHadernDye");

	Params::AFrog_NPC_C_UnlockHadernDye_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_1 = K2Node_DynamicCast_AsGame_Play_PCInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetShellDyesLockState_LockState = CallFunc_GetShellDyesLockState_LockState;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_2 = K2Node_DynamicCast_AsGame_Play_PCInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_3 = K2Node_DynamicCast_AsGame_Play_PCInterface_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetShellDyesLockState_LockState_1 = CallFunc_GetShellDyesLockState_LockState_1;
	Parms.K2Node_MakeStruct_Struct_Dyes_LockState = K2Node_MakeStruct_Struct_Dyes_LockState;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.K2Node_MakeStruct_Struct_Dyes_LockState_1 = K2Node_MakeStruct_Struct_Dyes_LockState_1;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_4 = K2Node_DynamicCast_AsGame_Play_PCInterface_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_SetFieldsInStruct_StructOut_1 = K2Node_SetFieldsInStruct_StructOut_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.CallFunc_GetPlayerController_ReturnValue_6 = CallFunc_GetPlayerController_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_5 = K2Node_DynamicCast_AsGame_Play_PCInterface_5;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_6 = K2Node_DynamicCast_AsGame_Play_PCInterface_6;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetShellDyesLockState_LockState_2 = CallFunc_GetShellDyesLockState_LockState_2;
	Parms.CallFunc_GetShellDyes_Dyes = CallFunc_GetShellDyes_Dyes;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_Struct_Dyes_LockState_2 = K2Node_MakeStruct_Struct_Dyes_LockState_2;
	Parms.K2Node_SetFieldsInStruct_StructOut_2 = K2Node_SetFieldsInStruct_StructOut_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frog_NPC.Frog_NPC_C.UnlockTielDye
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_ShellsDyes_LockStateCallFunc_GetShellDyesLockState_LockState                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_ShellsDyes_LockStateCallFunc_GetShellDyesLockState_LockState_1                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Dyes_LockState      K2Node_MakeStruct_Struct_Dyes_LockState                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ShellsDyes_LockStateK2Node_SetFieldsInStruct_StructOut                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Dyes_LockState      K2Node_MakeStruct_Struct_Dyes_LockState_1                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_4                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_ShellsDyes_LockStateK2Node_SetFieldsInStruct_StructOut_1                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_5                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_6                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_ShellsDyes_LockStateCallFunc_GetShellDyesLockState_LockState_2                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ShellDyes           CallFunc_GetShellDyes_Dyes                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Dyes_LockState      K2Node_MakeStruct_Struct_Dyes_LockState_2                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ShellsDyes_LockStateK2Node_SetFieldsInStruct_StructOut_2                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrog_NPC_C::UnlockTielDye(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_1, const struct FStruct_ShellsDyes_LockState& CallFunc_GetShellDyesLockState_LockState, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_2, bool K2Node_DynamicCast_bSuccess_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_3, bool K2Node_DynamicCast_bSuccess_3, const struct FStruct_ShellsDyes_LockState& CallFunc_GetShellDyesLockState_LockState_1, const struct FStruct_Dyes_LockState& K2Node_MakeStruct_Struct_Dyes_LockState, const struct FStruct_ShellsDyes_LockState& K2Node_SetFieldsInStruct_StructOut, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, const struct FStruct_Dyes_LockState& K2Node_MakeStruct_Struct_Dyes_LockState_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_4, bool K2Node_DynamicCast_bSuccess_4, const struct FStruct_ShellsDyes_LockState& K2Node_SetFieldsInStruct_StructOut_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_5, bool K2Node_DynamicCast_bSuccess_5, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_6, bool K2Node_DynamicCast_bSuccess_6, const struct FStruct_ShellsDyes_LockState& CallFunc_GetShellDyesLockState_LockState_2, const struct FStruct_ShellDyes& CallFunc_GetShellDyes_Dyes, bool K2Node_SwitchEnum_CmpSuccess, const struct FStruct_Dyes_LockState& K2Node_MakeStruct_Struct_Dyes_LockState_2, const struct FStruct_ShellsDyes_LockState& K2Node_SetFieldsInStruct_StructOut_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "UnlockTielDye");

	Params::AFrog_NPC_C_UnlockTielDye_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_1 = K2Node_DynamicCast_AsGame_Play_PCInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetShellDyesLockState_LockState = CallFunc_GetShellDyesLockState_LockState;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_2 = K2Node_DynamicCast_AsGame_Play_PCInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_3 = K2Node_DynamicCast_AsGame_Play_PCInterface_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetShellDyesLockState_LockState_1 = CallFunc_GetShellDyesLockState_LockState_1;
	Parms.K2Node_MakeStruct_Struct_Dyes_LockState = K2Node_MakeStruct_Struct_Dyes_LockState;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.K2Node_MakeStruct_Struct_Dyes_LockState_1 = K2Node_MakeStruct_Struct_Dyes_LockState_1;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_4 = K2Node_DynamicCast_AsGame_Play_PCInterface_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_SetFieldsInStruct_StructOut_1 = K2Node_SetFieldsInStruct_StructOut_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.CallFunc_GetPlayerController_ReturnValue_6 = CallFunc_GetPlayerController_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_5 = K2Node_DynamicCast_AsGame_Play_PCInterface_5;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_6 = K2Node_DynamicCast_AsGame_Play_PCInterface_6;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetShellDyesLockState_LockState_2 = CallFunc_GetShellDyesLockState_LockState_2;
	Parms.CallFunc_GetShellDyes_Dyes = CallFunc_GetShellDyes_Dyes;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_Struct_Dyes_LockState_2 = K2Node_MakeStruct_Struct_Dyes_LockState_2;
	Parms.K2Node_SetFieldsInStruct_StructOut_2 = K2Node_SetFieldsInStruct_StructOut_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frog_NPC.Frog_NPC_C.UnlockEredrimDye
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_ShellsDyes_LockStateCallFunc_GetShellDyesLockState_LockState                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_ShellsDyes_LockStateCallFunc_GetShellDyesLockState_LockState_1                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Dyes_LockState      K2Node_MakeStruct_Struct_Dyes_LockState                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ShellsDyes_LockStateK2Node_SetFieldsInStruct_StructOut                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Dyes_LockState      K2Node_MakeStruct_Struct_Dyes_LockState_1                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_4                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_ShellsDyes_LockStateK2Node_SetFieldsInStruct_StructOut_1                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_5                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_6                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_ShellsDyes_LockStateCallFunc_GetShellDyesLockState_LockState_2                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ShellDyes           CallFunc_GetShellDyes_Dyes                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Dyes_LockState      K2Node_MakeStruct_Struct_Dyes_LockState_2                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ShellsDyes_LockStateK2Node_SetFieldsInStruct_StructOut_2                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrog_NPC_C::UnlockEredrimDye(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_1, const struct FStruct_ShellsDyes_LockState& CallFunc_GetShellDyesLockState_LockState, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_2, bool K2Node_DynamicCast_bSuccess_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_3, bool K2Node_DynamicCast_bSuccess_3, const struct FStruct_ShellsDyes_LockState& CallFunc_GetShellDyesLockState_LockState_1, const struct FStruct_Dyes_LockState& K2Node_MakeStruct_Struct_Dyes_LockState, const struct FStruct_ShellsDyes_LockState& K2Node_SetFieldsInStruct_StructOut, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, const struct FStruct_Dyes_LockState& K2Node_MakeStruct_Struct_Dyes_LockState_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_4, bool K2Node_DynamicCast_bSuccess_4, const struct FStruct_ShellsDyes_LockState& K2Node_SetFieldsInStruct_StructOut_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_5, bool K2Node_DynamicCast_bSuccess_5, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_6, bool K2Node_DynamicCast_bSuccess_6, const struct FStruct_ShellsDyes_LockState& CallFunc_GetShellDyesLockState_LockState_2, const struct FStruct_ShellDyes& CallFunc_GetShellDyes_Dyes, bool K2Node_SwitchEnum_CmpSuccess, const struct FStruct_Dyes_LockState& K2Node_MakeStruct_Struct_Dyes_LockState_2, const struct FStruct_ShellsDyes_LockState& K2Node_SetFieldsInStruct_StructOut_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "UnlockEredrimDye");

	Params::AFrog_NPC_C_UnlockEredrimDye_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_1 = K2Node_DynamicCast_AsGame_Play_PCInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetShellDyesLockState_LockState = CallFunc_GetShellDyesLockState_LockState;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_2 = K2Node_DynamicCast_AsGame_Play_PCInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_3 = K2Node_DynamicCast_AsGame_Play_PCInterface_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetShellDyesLockState_LockState_1 = CallFunc_GetShellDyesLockState_LockState_1;
	Parms.K2Node_MakeStruct_Struct_Dyes_LockState = K2Node_MakeStruct_Struct_Dyes_LockState;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.K2Node_MakeStruct_Struct_Dyes_LockState_1 = K2Node_MakeStruct_Struct_Dyes_LockState_1;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_4 = K2Node_DynamicCast_AsGame_Play_PCInterface_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_SetFieldsInStruct_StructOut_1 = K2Node_SetFieldsInStruct_StructOut_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.CallFunc_GetPlayerController_ReturnValue_6 = CallFunc_GetPlayerController_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_5 = K2Node_DynamicCast_AsGame_Play_PCInterface_5;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_6 = K2Node_DynamicCast_AsGame_Play_PCInterface_6;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetShellDyesLockState_LockState_2 = CallFunc_GetShellDyesLockState_LockState_2;
	Parms.CallFunc_GetShellDyes_Dyes = CallFunc_GetShellDyes_Dyes;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_Struct_Dyes_LockState_2 = K2Node_MakeStruct_Struct_Dyes_LockState_2;
	Parms.K2Node_SetFieldsInStruct_StructOut_2 = K2Node_SetFieldsInStruct_StructOut_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frog_NPC.Frog_NPC_C.UnlockSolomonDye
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_ShellsDyes_LockStateCallFunc_GetShellDyesLockState_LockState                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_ShellsDyes_LockStateCallFunc_GetShellDyesLockState_LockState_1                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Dyes_LockState      K2Node_MakeStruct_Struct_Dyes_LockState                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ShellsDyes_LockStateK2Node_SetFieldsInStruct_StructOut                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Dyes_LockState      K2Node_MakeStruct_Struct_Dyes_LockState_1                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_4                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_ShellsDyes_LockStateK2Node_SetFieldsInStruct_StructOut_1                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_5                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_6                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_ShellsDyes_LockStateCallFunc_GetShellDyesLockState_LockState_2                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ShellDyes           CallFunc_GetShellDyes_Dyes                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Dyes_LockState      K2Node_MakeStruct_Struct_Dyes_LockState_2                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ShellsDyes_LockStateK2Node_SetFieldsInStruct_StructOut_2                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrog_NPC_C::UnlockSolomonDye(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_1, const struct FStruct_ShellsDyes_LockState& CallFunc_GetShellDyesLockState_LockState, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_2, bool K2Node_DynamicCast_bSuccess_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_3, bool K2Node_DynamicCast_bSuccess_3, const struct FStruct_ShellsDyes_LockState& CallFunc_GetShellDyesLockState_LockState_1, const struct FStruct_Dyes_LockState& K2Node_MakeStruct_Struct_Dyes_LockState, const struct FStruct_ShellsDyes_LockState& K2Node_SetFieldsInStruct_StructOut, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, const struct FStruct_Dyes_LockState& K2Node_MakeStruct_Struct_Dyes_LockState_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_4, bool K2Node_DynamicCast_bSuccess_4, const struct FStruct_ShellsDyes_LockState& K2Node_SetFieldsInStruct_StructOut_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_5, bool K2Node_DynamicCast_bSuccess_5, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_6, bool K2Node_DynamicCast_bSuccess_6, const struct FStruct_ShellsDyes_LockState& CallFunc_GetShellDyesLockState_LockState_2, const struct FStruct_ShellDyes& CallFunc_GetShellDyes_Dyes, bool K2Node_SwitchEnum_CmpSuccess, const struct FStruct_Dyes_LockState& K2Node_MakeStruct_Struct_Dyes_LockState_2, const struct FStruct_ShellsDyes_LockState& K2Node_SetFieldsInStruct_StructOut_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "UnlockSolomonDye");

	Params::AFrog_NPC_C_UnlockSolomonDye_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_1 = K2Node_DynamicCast_AsGame_Play_PCInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetShellDyesLockState_LockState = CallFunc_GetShellDyesLockState_LockState;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_2 = K2Node_DynamicCast_AsGame_Play_PCInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_3 = K2Node_DynamicCast_AsGame_Play_PCInterface_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetShellDyesLockState_LockState_1 = CallFunc_GetShellDyesLockState_LockState_1;
	Parms.K2Node_MakeStruct_Struct_Dyes_LockState = K2Node_MakeStruct_Struct_Dyes_LockState;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.K2Node_MakeStruct_Struct_Dyes_LockState_1 = K2Node_MakeStruct_Struct_Dyes_LockState_1;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_4 = K2Node_DynamicCast_AsGame_Play_PCInterface_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_SetFieldsInStruct_StructOut_1 = K2Node_SetFieldsInStruct_StructOut_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.CallFunc_GetPlayerController_ReturnValue_6 = CallFunc_GetPlayerController_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_5 = K2Node_DynamicCast_AsGame_Play_PCInterface_5;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_6 = K2Node_DynamicCast_AsGame_Play_PCInterface_6;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetShellDyesLockState_LockState_2 = CallFunc_GetShellDyesLockState_LockState_2;
	Parms.CallFunc_GetShellDyes_Dyes = CallFunc_GetShellDyes_Dyes;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_Struct_Dyes_LockState_2 = K2Node_MakeStruct_Struct_Dyes_LockState_2;
	Parms.K2Node_SetFieldsInStruct_StructOut_2 = K2Node_SetFieldsInStruct_StructOut_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frog_NPC.Frog_NPC_C.UnlockHarrosDye
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_ShellsDyes_LockStateCallFunc_GetShellDyesLockState_LockState                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_ShellsDyes_LockStateCallFunc_GetShellDyesLockState_LockState_1                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Dyes_LockState      K2Node_MakeStruct_Struct_Dyes_LockState                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ShellsDyes_LockStateK2Node_SetFieldsInStruct_StructOut                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Dyes_LockState      K2Node_MakeStruct_Struct_Dyes_LockState_1                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_4                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_ShellsDyes_LockStateK2Node_SetFieldsInStruct_StructOut_1                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_5                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_6                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_ShellsDyes_LockStateCallFunc_GetShellDyesLockState_LockState_2                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ShellDyes           CallFunc_GetShellDyes_Dyes                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Dyes_LockState      K2Node_MakeStruct_Struct_Dyes_LockState_2                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ShellsDyes_LockStateK2Node_SetFieldsInStruct_StructOut_2                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrog_NPC_C::UnlockHarrosDye(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_1, const struct FStruct_ShellsDyes_LockState& CallFunc_GetShellDyesLockState_LockState, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_2, bool K2Node_DynamicCast_bSuccess_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_3, bool K2Node_DynamicCast_bSuccess_3, const struct FStruct_ShellsDyes_LockState& CallFunc_GetShellDyesLockState_LockState_1, const struct FStruct_Dyes_LockState& K2Node_MakeStruct_Struct_Dyes_LockState, const struct FStruct_ShellsDyes_LockState& K2Node_SetFieldsInStruct_StructOut, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, const struct FStruct_Dyes_LockState& K2Node_MakeStruct_Struct_Dyes_LockState_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_4, bool K2Node_DynamicCast_bSuccess_4, const struct FStruct_ShellsDyes_LockState& K2Node_SetFieldsInStruct_StructOut_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_5, bool K2Node_DynamicCast_bSuccess_5, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_6, bool K2Node_DynamicCast_bSuccess_6, const struct FStruct_ShellsDyes_LockState& CallFunc_GetShellDyesLockState_LockState_2, const struct FStruct_ShellDyes& CallFunc_GetShellDyes_Dyes, bool K2Node_SwitchEnum_CmpSuccess, const struct FStruct_Dyes_LockState& K2Node_MakeStruct_Struct_Dyes_LockState_2, const struct FStruct_ShellsDyes_LockState& K2Node_SetFieldsInStruct_StructOut_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "UnlockHarrosDye");

	Params::AFrog_NPC_C_UnlockHarrosDye_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_1 = K2Node_DynamicCast_AsGame_Play_PCInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetShellDyesLockState_LockState = CallFunc_GetShellDyesLockState_LockState;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_2 = K2Node_DynamicCast_AsGame_Play_PCInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_3 = K2Node_DynamicCast_AsGame_Play_PCInterface_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetShellDyesLockState_LockState_1 = CallFunc_GetShellDyesLockState_LockState_1;
	Parms.K2Node_MakeStruct_Struct_Dyes_LockState = K2Node_MakeStruct_Struct_Dyes_LockState;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.K2Node_MakeStruct_Struct_Dyes_LockState_1 = K2Node_MakeStruct_Struct_Dyes_LockState_1;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_4 = K2Node_DynamicCast_AsGame_Play_PCInterface_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_SetFieldsInStruct_StructOut_1 = K2Node_SetFieldsInStruct_StructOut_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.CallFunc_GetPlayerController_ReturnValue_6 = CallFunc_GetPlayerController_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_5 = K2Node_DynamicCast_AsGame_Play_PCInterface_5;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_6 = K2Node_DynamicCast_AsGame_Play_PCInterface_6;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetShellDyesLockState_LockState_2 = CallFunc_GetShellDyesLockState_LockState_2;
	Parms.CallFunc_GetShellDyes_Dyes = CallFunc_GetShellDyes_Dyes;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_Struct_Dyes_LockState_2 = K2Node_MakeStruct_Struct_Dyes_LockState_2;
	Parms.K2Node_SetFieldsInStruct_StructOut_2 = K2Node_SetFieldsInStruct_StructOut_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frog_NPC.Frog_NPC_C.UnlockFoundlingDye
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ShellsDyes_LockStateCallFunc_GetShellDyesLockState_LockState                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_ShellsDyes_LockStateCallFunc_GetShellDyesLockState_LockState_1                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Dyes_LockState      K2Node_MakeStruct_Struct_Dyes_LockState                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ShellsDyes_LockStateK2Node_SetFieldsInStruct_StructOut                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Dyes_LockState      K2Node_MakeStruct_Struct_Dyes_LockState_1                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_4                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_ShellsDyes_LockStateK2Node_SetFieldsInStruct_StructOut_1                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ShellDyes           CallFunc_GetShellDyes_Dyes                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFrog_NPC_C::UnlockFoundlingDye(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, const struct FStruct_ShellsDyes_LockState& CallFunc_GetShellDyesLockState_LockState, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_2, bool K2Node_DynamicCast_bSuccess_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_3, bool K2Node_DynamicCast_bSuccess_3, const struct FStruct_ShellsDyes_LockState& CallFunc_GetShellDyesLockState_LockState_1, const struct FStruct_Dyes_LockState& K2Node_MakeStruct_Struct_Dyes_LockState, const struct FStruct_ShellsDyes_LockState& K2Node_SetFieldsInStruct_StructOut, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, const struct FStruct_Dyes_LockState& K2Node_MakeStruct_Struct_Dyes_LockState_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_4, bool K2Node_DynamicCast_bSuccess_4, const struct FStruct_ShellsDyes_LockState& K2Node_SetFieldsInStruct_StructOut_1, const struct FStruct_ShellDyes& CallFunc_GetShellDyes_Dyes, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "UnlockFoundlingDye");

	Params::AFrog_NPC_C_UnlockFoundlingDye_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_1 = K2Node_DynamicCast_AsGame_Play_PCInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_GetShellDyesLockState_LockState = CallFunc_GetShellDyesLockState_LockState;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_2 = K2Node_DynamicCast_AsGame_Play_PCInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_3 = K2Node_DynamicCast_AsGame_Play_PCInterface_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetShellDyesLockState_LockState_1 = CallFunc_GetShellDyesLockState_LockState_1;
	Parms.K2Node_MakeStruct_Struct_Dyes_LockState = K2Node_MakeStruct_Struct_Dyes_LockState;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.K2Node_MakeStruct_Struct_Dyes_LockState_1 = K2Node_MakeStruct_Struct_Dyes_LockState_1;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_4 = K2Node_DynamicCast_AsGame_Play_PCInterface_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_SetFieldsInStruct_StructOut_1 = K2Node_SetFieldsInStruct_StructOut_1;
	Parms.CallFunc_GetShellDyes_Dyes = CallFunc_GetShellDyes_Dyes;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frog_NPC.Frog_NPC_C.UpdateLookAtPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUseCustomLookAtLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CustomLookAtLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFrog_king_v2_Skeleton_AnimBlueprint_C*K2Node_DynamicCast_AsFrog_King_V_2_Skeleton_Anim_Blueprint       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFrog_NPC_C::UpdateLookAtPlayer(bool bUseCustomLookAtLocation, const struct FVector& CustomLookAtLocation, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UFrog_king_v2_Skeleton_AnimBlueprint_C* K2Node_DynamicCast_AsFrog_King_V_2_Skeleton_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "UpdateLookAtPlayer");

	Params::AFrog_NPC_C_UpdateLookAtPlayer_Params Parms{};

	Parms.bUseCustomLookAtLocation = bUseCustomLookAtLocation;
	Parms.CustomLookAtLocation = CustomLookAtLocation;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsFrog_King_V_2_Skeleton_Anim_Blueprint = K2Node_DynamicCast_AsFrog_King_V_2_Skeleton_Anim_Blueprint;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frog_NPC.Frog_NPC_C.UpdateDye
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_ShellDye           CallFunc_GetDyeToUnlock_NoDye                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           CallFunc_GetDyeToUnlock_Dye1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           CallFunc_GetDyeToUnlock_Dye2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           CallFunc_GetDyeToUnlock_Dye3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           CallFunc_GetDyeToUnlock_NoDye_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           CallFunc_GetDyeToUnlock_Dye1_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           CallFunc_GetDyeToUnlock_Dye2_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           CallFunc_GetDyeToUnlock_Dye3_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_4                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_5                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_6                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_7                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_ShellDye           CallFunc_GetDyeToUnlock_NoDye_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           CallFunc_GetDyeToUnlock_Dye1_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           CallFunc_GetDyeToUnlock_Dye2_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           CallFunc_GetDyeToUnlock_Dye3_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_8                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_9                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_10                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_11                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_ShellDye           CallFunc_GetDyeToUnlock_NoDye_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           CallFunc_GetDyeToUnlock_Dye1_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           CallFunc_GetDyeToUnlock_Dye2_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           CallFunc_GetDyeToUnlock_Dye3_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_12                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_12                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_13                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_13                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_14                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_14                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_15                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_15                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_ShellDye           CallFunc_GetDyeToUnlock_NoDye_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           CallFunc_GetDyeToUnlock_Dye1_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           CallFunc_GetDyeToUnlock_Dye2_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           CallFunc_GetDyeToUnlock_Dye3_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_16                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_16                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_17                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_17                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_17                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_18                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_18                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_18                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_19                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_19                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_19                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_ShellDye           CallFunc_GetDyeToUnlock_NoDye_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           CallFunc_GetDyeToUnlock_Dye1_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           CallFunc_GetDyeToUnlock_Dye2_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ShellDye           CallFunc_GetDyeToUnlock_Dye3_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_20                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_20                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_20                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_21                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_21                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_21                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_22                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_22                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_22                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_GetMeshForArmorType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_23                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_23                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_23                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_24                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             CallFunc_0_Base_GetCurrentArmor_CurrentArmorType                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_24                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_24                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_25                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_ShellDyes           CallFunc_GetShellDyes_Dyes                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrog_NPC_C::UpdateDye(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_2, bool K2Node_DynamicCast_bSuccess_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_3, bool K2Node_DynamicCast_bSuccess_3, enum class Enum_ShellDye CallFunc_GetDyeToUnlock_NoDye, enum class Enum_ShellDye CallFunc_GetDyeToUnlock_Dye1, enum class Enum_ShellDye CallFunc_GetDyeToUnlock_Dye2, enum class Enum_ShellDye CallFunc_GetDyeToUnlock_Dye3, enum class Enum_ShellDye CallFunc_GetDyeToUnlock_NoDye_1, enum class Enum_ShellDye CallFunc_GetDyeToUnlock_Dye1_1, enum class Enum_ShellDye CallFunc_GetDyeToUnlock_Dye2_1, enum class Enum_ShellDye CallFunc_GetDyeToUnlock_Dye3_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_4, bool K2Node_DynamicCast_bSuccess_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_5, bool K2Node_DynamicCast_bSuccess_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_6, bool K2Node_DynamicCast_bSuccess_6, class APlayerController* CallFunc_GetPlayerController_ReturnValue_7, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_7, bool K2Node_DynamicCast_bSuccess_7, enum class Enum_ShellDye CallFunc_GetDyeToUnlock_NoDye_2, enum class Enum_ShellDye CallFunc_GetDyeToUnlock_Dye1_2, enum class Enum_ShellDye CallFunc_GetDyeToUnlock_Dye2_2, enum class Enum_ShellDye CallFunc_GetDyeToUnlock_Dye3_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_8, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_8, bool K2Node_DynamicCast_bSuccess_8, class APlayerController* CallFunc_GetPlayerController_ReturnValue_9, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_9, bool K2Node_DynamicCast_bSuccess_9, class APlayerController* CallFunc_GetPlayerController_ReturnValue_10, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_10, bool K2Node_DynamicCast_bSuccess_10, class APlayerController* CallFunc_GetPlayerController_ReturnValue_11, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_11, bool K2Node_DynamicCast_bSuccess_11, enum class Enum_ShellDye CallFunc_GetDyeToUnlock_NoDye_3, enum class Enum_ShellDye CallFunc_GetDyeToUnlock_Dye1_3, enum class Enum_ShellDye CallFunc_GetDyeToUnlock_Dye2_3, enum class Enum_ShellDye CallFunc_GetDyeToUnlock_Dye3_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_12, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_12, bool K2Node_DynamicCast_bSuccess_12, class APlayerController* CallFunc_GetPlayerController_ReturnValue_13, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_13, bool K2Node_DynamicCast_bSuccess_13, class APlayerController* CallFunc_GetPlayerController_ReturnValue_14, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_14, bool K2Node_DynamicCast_bSuccess_14, class APlayerController* CallFunc_GetPlayerController_ReturnValue_15, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_15, bool K2Node_DynamicCast_bSuccess_15, enum class Enum_ShellDye CallFunc_GetDyeToUnlock_NoDye_4, enum class Enum_ShellDye CallFunc_GetDyeToUnlock_Dye1_4, enum class Enum_ShellDye CallFunc_GetDyeToUnlock_Dye2_4, enum class Enum_ShellDye CallFunc_GetDyeToUnlock_Dye3_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_16, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_16, bool K2Node_DynamicCast_bSuccess_16, class APlayerController* CallFunc_GetPlayerController_ReturnValue_17, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_17, bool K2Node_DynamicCast_bSuccess_17, class APlayerController* CallFunc_GetPlayerController_ReturnValue_18, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_18, bool K2Node_DynamicCast_bSuccess_18, class APlayerController* CallFunc_GetPlayerController_ReturnValue_19, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_19, bool K2Node_DynamicCast_bSuccess_19, enum class Enum_ShellDye CallFunc_GetDyeToUnlock_NoDye_5, enum class Enum_ShellDye CallFunc_GetDyeToUnlock_Dye1_5, enum class Enum_ShellDye CallFunc_GetDyeToUnlock_Dye2_5, enum class Enum_ShellDye CallFunc_GetDyeToUnlock_Dye3_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_20, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_20, bool K2Node_DynamicCast_bSuccess_20, class APlayerController* CallFunc_GetPlayerController_ReturnValue_21, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_21, bool K2Node_DynamicCast_bSuccess_21, class APlayerController* CallFunc_GetPlayerController_ReturnValue_22, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_22, bool K2Node_DynamicCast_bSuccess_22, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class USkeletalMesh* CallFunc_GetMeshForArmorType_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_23, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_23, bool K2Node_DynamicCast_bSuccess_23, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess_24, enum class EArmorTypes CallFunc_0_Base_GetCurrentArmor_CurrentArmorType, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3, bool K2Node_SwitchEnum_CmpSuccess_4, bool K2Node_SwitchEnum_CmpSuccess_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_24, bool K2Node_SwitchEnum_CmpSuccess_6, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_24, bool K2Node_DynamicCast_bSuccess_25, const struct FStruct_ShellDyes& CallFunc_GetShellDyes_Dyes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "UpdateDye");

	Params::AFrog_NPC_C_UpdateDye_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_1 = K2Node_DynamicCast_AsGame_Play_PCInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_2 = K2Node_DynamicCast_AsGame_Play_PCInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_3 = K2Node_DynamicCast_AsGame_Play_PCInterface_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetDyeToUnlock_NoDye = CallFunc_GetDyeToUnlock_NoDye;
	Parms.CallFunc_GetDyeToUnlock_Dye1 = CallFunc_GetDyeToUnlock_Dye1;
	Parms.CallFunc_GetDyeToUnlock_Dye2 = CallFunc_GetDyeToUnlock_Dye2;
	Parms.CallFunc_GetDyeToUnlock_Dye3 = CallFunc_GetDyeToUnlock_Dye3;
	Parms.CallFunc_GetDyeToUnlock_NoDye_1 = CallFunc_GetDyeToUnlock_NoDye_1;
	Parms.CallFunc_GetDyeToUnlock_Dye1_1 = CallFunc_GetDyeToUnlock_Dye1_1;
	Parms.CallFunc_GetDyeToUnlock_Dye2_1 = CallFunc_GetDyeToUnlock_Dye2_1;
	Parms.CallFunc_GetDyeToUnlock_Dye3_1 = CallFunc_GetDyeToUnlock_Dye3_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_4 = K2Node_DynamicCast_AsGame_Play_PCInterface_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_5 = K2Node_DynamicCast_AsGame_Play_PCInterface_5;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetPlayerController_ReturnValue_6 = CallFunc_GetPlayerController_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_6 = K2Node_DynamicCast_AsGame_Play_PCInterface_6;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetPlayerController_ReturnValue_7 = CallFunc_GetPlayerController_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_7 = K2Node_DynamicCast_AsGame_Play_PCInterface_7;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_GetDyeToUnlock_NoDye_2 = CallFunc_GetDyeToUnlock_NoDye_2;
	Parms.CallFunc_GetDyeToUnlock_Dye1_2 = CallFunc_GetDyeToUnlock_Dye1_2;
	Parms.CallFunc_GetDyeToUnlock_Dye2_2 = CallFunc_GetDyeToUnlock_Dye2_2;
	Parms.CallFunc_GetDyeToUnlock_Dye3_2 = CallFunc_GetDyeToUnlock_Dye3_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_8 = CallFunc_GetPlayerController_ReturnValue_8;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_8 = K2Node_DynamicCast_AsGame_Play_PCInterface_8;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_GetPlayerController_ReturnValue_9 = CallFunc_GetPlayerController_ReturnValue_9;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_9 = K2Node_DynamicCast_AsGame_Play_PCInterface_9;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_GetPlayerController_ReturnValue_10 = CallFunc_GetPlayerController_ReturnValue_10;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_10 = K2Node_DynamicCast_AsGame_Play_PCInterface_10;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_GetPlayerController_ReturnValue_11 = CallFunc_GetPlayerController_ReturnValue_11;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_11 = K2Node_DynamicCast_AsGame_Play_PCInterface_11;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_GetDyeToUnlock_NoDye_3 = CallFunc_GetDyeToUnlock_NoDye_3;
	Parms.CallFunc_GetDyeToUnlock_Dye1_3 = CallFunc_GetDyeToUnlock_Dye1_3;
	Parms.CallFunc_GetDyeToUnlock_Dye2_3 = CallFunc_GetDyeToUnlock_Dye2_3;
	Parms.CallFunc_GetDyeToUnlock_Dye3_3 = CallFunc_GetDyeToUnlock_Dye3_3;
	Parms.CallFunc_GetPlayerController_ReturnValue_12 = CallFunc_GetPlayerController_ReturnValue_12;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_12 = K2Node_DynamicCast_AsGame_Play_PCInterface_12;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.CallFunc_GetPlayerController_ReturnValue_13 = CallFunc_GetPlayerController_ReturnValue_13;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_13 = K2Node_DynamicCast_AsGame_Play_PCInterface_13;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.CallFunc_GetPlayerController_ReturnValue_14 = CallFunc_GetPlayerController_ReturnValue_14;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_14 = K2Node_DynamicCast_AsGame_Play_PCInterface_14;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;
	Parms.CallFunc_GetPlayerController_ReturnValue_15 = CallFunc_GetPlayerController_ReturnValue_15;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_15 = K2Node_DynamicCast_AsGame_Play_PCInterface_15;
	Parms.K2Node_DynamicCast_bSuccess_15 = K2Node_DynamicCast_bSuccess_15;
	Parms.CallFunc_GetDyeToUnlock_NoDye_4 = CallFunc_GetDyeToUnlock_NoDye_4;
	Parms.CallFunc_GetDyeToUnlock_Dye1_4 = CallFunc_GetDyeToUnlock_Dye1_4;
	Parms.CallFunc_GetDyeToUnlock_Dye2_4 = CallFunc_GetDyeToUnlock_Dye2_4;
	Parms.CallFunc_GetDyeToUnlock_Dye3_4 = CallFunc_GetDyeToUnlock_Dye3_4;
	Parms.CallFunc_GetPlayerController_ReturnValue_16 = CallFunc_GetPlayerController_ReturnValue_16;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_16 = K2Node_DynamicCast_AsGame_Play_PCInterface_16;
	Parms.K2Node_DynamicCast_bSuccess_16 = K2Node_DynamicCast_bSuccess_16;
	Parms.CallFunc_GetPlayerController_ReturnValue_17 = CallFunc_GetPlayerController_ReturnValue_17;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_17 = K2Node_DynamicCast_AsGame_Play_PCInterface_17;
	Parms.K2Node_DynamicCast_bSuccess_17 = K2Node_DynamicCast_bSuccess_17;
	Parms.CallFunc_GetPlayerController_ReturnValue_18 = CallFunc_GetPlayerController_ReturnValue_18;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_18 = K2Node_DynamicCast_AsGame_Play_PCInterface_18;
	Parms.K2Node_DynamicCast_bSuccess_18 = K2Node_DynamicCast_bSuccess_18;
	Parms.CallFunc_GetPlayerController_ReturnValue_19 = CallFunc_GetPlayerController_ReturnValue_19;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_19 = K2Node_DynamicCast_AsGame_Play_PCInterface_19;
	Parms.K2Node_DynamicCast_bSuccess_19 = K2Node_DynamicCast_bSuccess_19;
	Parms.CallFunc_GetDyeToUnlock_NoDye_5 = CallFunc_GetDyeToUnlock_NoDye_5;
	Parms.CallFunc_GetDyeToUnlock_Dye1_5 = CallFunc_GetDyeToUnlock_Dye1_5;
	Parms.CallFunc_GetDyeToUnlock_Dye2_5 = CallFunc_GetDyeToUnlock_Dye2_5;
	Parms.CallFunc_GetDyeToUnlock_Dye3_5 = CallFunc_GetDyeToUnlock_Dye3_5;
	Parms.CallFunc_GetPlayerController_ReturnValue_20 = CallFunc_GetPlayerController_ReturnValue_20;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_20 = K2Node_DynamicCast_AsGame_Play_PCInterface_20;
	Parms.K2Node_DynamicCast_bSuccess_20 = K2Node_DynamicCast_bSuccess_20;
	Parms.CallFunc_GetPlayerController_ReturnValue_21 = CallFunc_GetPlayerController_ReturnValue_21;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_21 = K2Node_DynamicCast_AsGame_Play_PCInterface_21;
	Parms.K2Node_DynamicCast_bSuccess_21 = K2Node_DynamicCast_bSuccess_21;
	Parms.CallFunc_GetPlayerController_ReturnValue_22 = CallFunc_GetPlayerController_ReturnValue_22;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_22 = K2Node_DynamicCast_AsGame_Play_PCInterface_22;
	Parms.K2Node_DynamicCast_bSuccess_22 = K2Node_DynamicCast_bSuccess_22;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_GetMeshForArmorType_ReturnValue = CallFunc_GetMeshForArmorType_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_23 = CallFunc_GetPlayerController_ReturnValue_23;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_23 = K2Node_DynamicCast_AsGame_Play_PCInterface_23;
	Parms.K2Node_DynamicCast_bSuccess_23 = K2Node_DynamicCast_bSuccess_23;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess_24 = K2Node_DynamicCast_bSuccess_24;
	Parms.CallFunc_0_Base_GetCurrentArmor_CurrentArmorType = CallFunc_0_Base_GetCurrentArmor_CurrentArmorType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.CallFunc_GetPlayerController_ReturnValue_24 = CallFunc_GetPlayerController_ReturnValue_24;
	Parms.K2Node_SwitchEnum_CmpSuccess_6 = K2Node_SwitchEnum_CmpSuccess_6;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_24 = K2Node_DynamicCast_AsGame_Play_PCInterface_24;
	Parms.K2Node_DynamicCast_bSuccess_25 = K2Node_DynamicCast_bSuccess_25;
	Parms.CallFunc_GetShellDyes_Dyes = CallFunc_GetShellDyes_Dyes;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frog_NPC.Frog_NPC_C.IsCharacterInRange
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetSocketRotation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_SphereTraceSingleForObjects_OutHit                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SphereTraceSingleForObjects_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AFrog_NPC_C::IsCharacterInRange(TArray<class AActor*>& Temp_object_Variable, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "IsCharacterInRange");

	Params::AFrog_NPC_C_IsCharacterInRange_Params Parms{};

	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetSocketRotation_ReturnValue = CallFunc_GetSocketRotation_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_GetSocketLocation_ReturnValue_1 = CallFunc_GetSocketLocation_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_SphereTraceSingleForObjects_OutHit = CallFunc_SphereTraceSingleForObjects_OutHit;
	Parms.CallFunc_SphereTraceSingleForObjects_ReturnValue = CallFunc_SphereTraceSingleForObjects_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Frog_NPC.Frog_NPC_C.OnActorUsed
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           Local_Controller                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_GetGorfGiftsEnabled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanFeedGorfAndCreateAnswers_CanFeed                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FText>                CallFunc_CanFeedGorfAndCreateAnswers_Answers                     (ReferenceParm, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_CanFeedGorfAndCreateAnswers_AnswersIDs                  (ReferenceParm, HasGetValueTypeHash)
// TArray<struct FDHDialogueLine>     CallFunc_GetFrogDialogue_ReturnValue                             (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_OnActorUsed_Success                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_Dialogue_C*              CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFrog_NPC_C::OnActorUsed(class APlayerController* Controller, bool* Success, class APlayerController* Local_Controller, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_GetGorfGiftsEnabled_ReturnValue, int32 Temp_int_Variable_1, bool CallFunc_CanFeedGorfAndCreateAnswers_CanFeed, TArray<class FText>& CallFunc_CanFeedGorfAndCreateAnswers_Answers, TArray<class FName>& CallFunc_CanFeedGorfAndCreateAnswers_AnswersIDs, TArray<struct FDHDialogueLine>& CallFunc_GetFrogDialogue_ReturnValue, bool CallFunc_OnActorUsed_Success, class UUI_Dialogue_C* CallFunc_Create_ReturnValue, int32 Temp_int_Variable_2, int32 K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "OnActorUsed");

	Params::AFrog_NPC_C_OnActorUsed_Params Parms{};

	Parms.Controller = Controller;
	Parms.Local_Controller = Local_Controller;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetGorfGiftsEnabled_ReturnValue = CallFunc_GetGorfGiftsEnabled_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_CanFeedGorfAndCreateAnswers_CanFeed = CallFunc_CanFeedGorfAndCreateAnswers_CanFeed;
	Parms.CallFunc_CanFeedGorfAndCreateAnswers_Answers = CallFunc_CanFeedGorfAndCreateAnswers_Answers;
	Parms.CallFunc_CanFeedGorfAndCreateAnswers_AnswersIDs = CallFunc_CanFeedGorfAndCreateAnswers_AnswersIDs;
	Parms.CallFunc_GetFrogDialogue_ReturnValue = CallFunc_GetFrogDialogue_ReturnValue;
	Parms.CallFunc_OnActorUsed_Success = CallFunc_OnActorUsed_Success;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function Frog_NPC.Frog_NPC_C.Timeline_Audio__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AFrog_NPC_C::Timeline_Audio__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "Timeline_Audio__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frog_NPC.Frog_NPC_C.Timeline_Audio__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AFrog_NPC_C::Timeline_Audio__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "Timeline_Audio__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frog_NPC.Frog_NPC_C.OnNotifyEnd_1F7D735E4D34874075FB54B2034C7336
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrog_NPC_C::OnNotifyEnd_1F7D735E4D34874075FB54B2034C7336(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "OnNotifyEnd_1F7D735E4D34874075FB54B2034C7336");

	Params::AFrog_NPC_C_OnNotifyEnd_1F7D735E4D34874075FB54B2034C7336_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frog_NPC.Frog_NPC_C.OnNotifyBegin_1F7D735E4D34874075FB54B2034C7336
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrog_NPC_C::OnNotifyBegin_1F7D735E4D34874075FB54B2034C7336(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "OnNotifyBegin_1F7D735E4D34874075FB54B2034C7336");

	Params::AFrog_NPC_C_OnNotifyBegin_1F7D735E4D34874075FB54B2034C7336_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frog_NPC.Frog_NPC_C.OnInterrupted_1F7D735E4D34874075FB54B2034C7336
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrog_NPC_C::OnInterrupted_1F7D735E4D34874075FB54B2034C7336(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "OnInterrupted_1F7D735E4D34874075FB54B2034C7336");

	Params::AFrog_NPC_C_OnInterrupted_1F7D735E4D34874075FB54B2034C7336_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frog_NPC.Frog_NPC_C.OnBlendOut_1F7D735E4D34874075FB54B2034C7336
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrog_NPC_C::OnBlendOut_1F7D735E4D34874075FB54B2034C7336(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "OnBlendOut_1F7D735E4D34874075FB54B2034C7336");

	Params::AFrog_NPC_C_OnBlendOut_1F7D735E4D34874075FB54B2034C7336_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frog_NPC.Frog_NPC_C.OnCompleted_1F7D735E4D34874075FB54B2034C7336
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrog_NPC_C::OnCompleted_1F7D735E4D34874075FB54B2034C7336(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "OnCompleted_1F7D735E4D34874075FB54B2034C7336");

	Params::AFrog_NPC_C_OnCompleted_1F7D735E4D34874075FB54B2034C7336_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frog_NPC.Frog_NPC_C.OnNotifyEnd_47E0E08442C78F7882E34C9623480BB4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrog_NPC_C::OnNotifyEnd_47E0E08442C78F7882E34C9623480BB4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "OnNotifyEnd_47E0E08442C78F7882E34C9623480BB4");

	Params::AFrog_NPC_C_OnNotifyEnd_47E0E08442C78F7882E34C9623480BB4_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frog_NPC.Frog_NPC_C.OnNotifyBegin_47E0E08442C78F7882E34C9623480BB4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrog_NPC_C::OnNotifyBegin_47E0E08442C78F7882E34C9623480BB4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "OnNotifyBegin_47E0E08442C78F7882E34C9623480BB4");

	Params::AFrog_NPC_C_OnNotifyBegin_47E0E08442C78F7882E34C9623480BB4_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frog_NPC.Frog_NPC_C.OnInterrupted_47E0E08442C78F7882E34C9623480BB4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrog_NPC_C::OnInterrupted_47E0E08442C78F7882E34C9623480BB4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "OnInterrupted_47E0E08442C78F7882E34C9623480BB4");

	Params::AFrog_NPC_C_OnInterrupted_47E0E08442C78F7882E34C9623480BB4_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frog_NPC.Frog_NPC_C.OnBlendOut_47E0E08442C78F7882E34C9623480BB4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrog_NPC_C::OnBlendOut_47E0E08442C78F7882E34C9623480BB4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "OnBlendOut_47E0E08442C78F7882E34C9623480BB4");

	Params::AFrog_NPC_C_OnBlendOut_47E0E08442C78F7882E34C9623480BB4_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frog_NPC.Frog_NPC_C.OnCompleted_47E0E08442C78F7882E34C9623480BB4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrog_NPC_C::OnCompleted_47E0E08442C78F7882E34C9623480BB4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "OnCompleted_47E0E08442C78F7882E34C9623480BB4");

	Params::AFrog_NPC_C_OnCompleted_47E0E08442C78F7882E34C9623480BB4_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frog_NPC.Frog_NPC_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFrog_NPC_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frog_NPC.Frog_NPC_C.SwapMusic
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrog_NPC_C::SwapMusic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "SwapMusic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frog_NPC.Frog_NPC_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrog_NPC_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "ReceiveAnyDamage");

	Params::AFrog_NPC_C_ReceiveAnyDamage_Params Parms{};

	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frog_NPC.Frog_NPC_C.OnLuteMusicPlay_StartTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrog_NPC_C::OnLuteMusicPlay_StartTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "OnLuteMusicPlay_StartTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frog_NPC.Frog_NPC_C.OnLuteMusic_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrog_NPC_C::OnLuteMusic_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "OnLuteMusic_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frog_NPC.Frog_NPC_C.OnCutsceneEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrog_NPC_C::OnCutsceneEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "OnCutsceneEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frog_NPC.Frog_NPC_C.OnAnswerSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrog_NPC_C::OnAnswerSelected(class FName ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "OnAnswerSelected");

	Params::AFrog_NPC_C_OnAnswerSelected_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frog_NPC.Frog_NPC_C.Gorf_SpawnFrogs_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrog_NPC_C::Gorf_SpawnFrogs_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "Gorf_SpawnFrogs_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frog_NPC.Frog_NPC_C.Gorf_SpawnFrogs_Reset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrog_NPC_C::Gorf_SpawnFrogs_Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "Gorf_SpawnFrogs_Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frog_NPC.Frog_NPC_C.Gorf_EatMontage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrog_NPC_C::Gorf_EatMontage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "Gorf_EatMontage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frog_NPC.Frog_NPC_C.OnLuteMusicStop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrog_NPC_C::OnLuteMusicStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "OnLuteMusicStop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frog_NPC.Frog_NPC_C.OnSequenceCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrog_NPC_C::OnSequenceCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "OnSequenceCompleted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frog_NPC.Frog_NPC_C.ExecuteUbergraph_Frog_NPC
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGamePlayGameState_C*        K2Node_DynamicCast_AsGame_Play_Game_State                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 K2Node_Event_DamageType                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_Event_InstigatedBy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCharacterInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALevelSequenceActor*         K2Node_DynamicCast_AsLevel_Sequence_Actor                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetGorfGiftsEnabled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveInventoryItem_Success                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveInventoryItem_Success_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_ID                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GorfHasBeenFed_Fed                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetFrogSpawnLoc_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_RemoveInventoryItem_Success_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_MakeLiteralInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FDHDialogueLine>     CallFunc_GetFrogDialogue_ReturnValue                             (ReferenceParm, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCharacterInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_CanFeedGorfAndCreateAnswers_CanFeed                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FText>                CallFunc_CanFeedGorfAndCreateAnswers_Answers                     (ReferenceParm, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_CanFeedGorfAndCreateAnswers_AnswersIDs                  (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_CanFeedGorfAndCreateAnswers_CanFeed_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FText>                CallFunc_CanFeedGorfAndCreateAnswers_Answers_1                   (ReferenceParm, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_CanFeedGorfAndCreateAnswers_AnswersIDs_1                (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_CanFeedGorfAndCreateAnswers_CanFeed_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FText>                CallFunc_CanFeedGorfAndCreateAnswers_Answers_2                   (ReferenceParm, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_CanFeedGorfAndCreateAnswers_AnswersIDs_2                (ReferenceParm, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveInventoryItem_Success_3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_MakeLiteralInt_ReturnValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue_8                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFrog_NPC_C::ExecuteUbergraph_Frog_NPC(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_IsClosed_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_Has_Been_Initd_Variable, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, int32 Temp_int_Variable, int32 Temp_int_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_3, float CallFunc_Multiply_FloatFloat_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class AGamePlayGameState_C* K2Node_DynamicCast_AsGame_Play_Game_State, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_Damage, class UDamageType* K2Node_Event_DamageType, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, bool CallFunc_IsCharacterInRange_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class FName K2Node_CustomEvent_NotifyName_4, class ALevelSequenceActor* K2Node_DynamicCast_AsLevel_Sequence_Actor, bool K2Node_DynamicCast_bSuccess_1, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class FName Temp_name_Variable_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USoundBase* Temp_object_Variable, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_GetGorfGiftsEnabled_ReturnValue, class FName K2Node_CustomEvent_NotifyName_5, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3, bool CallFunc_RemoveInventoryItem_Success, bool CallFunc_RemoveInventoryItem_Success_1, class FName K2Node_CustomEvent_ID, bool K2Node_SwitchName_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_GorfHasBeenFed_Fed, const struct FVector& CallFunc_GetFrogSpawnLoc_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class FName K2Node_CustomEvent_NotifyName_6, int32 Temp_int_Variable_2, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool CallFunc_RemoveInventoryItem_Success_2, int32 CallFunc_MakeLiteralInt_ReturnValue_1, int32 Temp_int_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_MakeLiteralInt_ReturnValue_2, int32 CallFunc_MakeLiteralInt_ReturnValue_3, int32 CallFunc_MakeLiteralInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_MakeLiteralInt_ReturnValue_5, class USoundBase* Temp_object_Variable_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FDHDialogueLine>& CallFunc_GetFrogDialogue_ReturnValue, class FName K2Node_CustomEvent_NotifyName_7, bool CallFunc_IsCharacterInRange_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, bool CallFunc_CanFeedGorfAndCreateAnswers_CanFeed, TArray<class FText>& CallFunc_CanFeedGorfAndCreateAnswers_Answers, TArray<class FName>& CallFunc_CanFeedGorfAndCreateAnswers_AnswersIDs, bool CallFunc_CanFeedGorfAndCreateAnswers_CanFeed_1, TArray<class FText>& CallFunc_CanFeedGorfAndCreateAnswers_Answers_1, TArray<class FName>& CallFunc_CanFeedGorfAndCreateAnswers_AnswersIDs_1, bool CallFunc_CanFeedGorfAndCreateAnswers_CanFeed_2, TArray<class FText>& CallFunc_CanFeedGorfAndCreateAnswers_Answers_2, TArray<class FName>& CallFunc_CanFeedGorfAndCreateAnswers_AnswersIDs_2, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, bool Temp_bool_Variable, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, class USoundBase* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5, int32 CallFunc_MakeLiteralInt_ReturnValue_6, bool CallFunc_RemoveInventoryItem_Success_3, int32 CallFunc_MakeLiteralInt_ReturnValue_7, int32 CallFunc_MakeLiteralInt_ReturnValue_8, int32 Temp_int_Variable_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_Add_IntInt_ReturnValue_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_2, bool K2Node_DynamicCast_bSuccess_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_3, bool K2Node_DynamicCast_bSuccess_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frog_NPC_C", "ExecuteUbergraph_Frog_NPC");

	Params::AFrog_NPC_C_ExecuteUbergraph_Frog_NPC_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_Game_State = K2Node_DynamicCast_AsGame_Play_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageType = K2Node_Event_DamageType;
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.CallFunc_IsCharacterInRange_ReturnValue = CallFunc_IsCharacterInRange_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_DynamicCast_AsLevel_Sequence_Actor = K2Node_DynamicCast_AsLevel_Sequence_Actor;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetSequencePlayer_ReturnValue = CallFunc_GetSequencePlayer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetGorfGiftsEnabled_ReturnValue = CallFunc_GetGorfGiftsEnabled_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_5 = K2Node_CustomEvent_NotifyName_5;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3;
	Parms.CallFunc_RemoveInventoryItem_Success = CallFunc_RemoveInventoryItem_Success;
	Parms.CallFunc_RemoveInventoryItem_Success_1 = CallFunc_RemoveInventoryItem_Success_1;
	Parms.K2Node_CustomEvent_ID = K2Node_CustomEvent_ID;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_GorfHasBeenFed_Fed = CallFunc_GorfHasBeenFed_Fed;
	Parms.CallFunc_GetFrogSpawnLoc_ReturnValue = CallFunc_GetFrogSpawnLoc_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_6 = K2Node_CustomEvent_NotifyName_6;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_RemoveInventoryItem_Success_2 = CallFunc_RemoveInventoryItem_Success_2;
	Parms.CallFunc_MakeLiteralInt_ReturnValue_1 = CallFunc_MakeLiteralInt_ReturnValue_1;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_MakeLiteralInt_ReturnValue_2 = CallFunc_MakeLiteralInt_ReturnValue_2;
	Parms.CallFunc_MakeLiteralInt_ReturnValue_3 = CallFunc_MakeLiteralInt_ReturnValue_3;
	Parms.CallFunc_MakeLiteralInt_ReturnValue_4 = CallFunc_MakeLiteralInt_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_MakeLiteralInt_ReturnValue_5 = CallFunc_MakeLiteralInt_ReturnValue_5;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetFrogDialogue_ReturnValue = CallFunc_GetFrogDialogue_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_7 = K2Node_CustomEvent_NotifyName_7;
	Parms.CallFunc_IsCharacterInRange_ReturnValue_1 = CallFunc_IsCharacterInRange_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_CanFeedGorfAndCreateAnswers_CanFeed = CallFunc_CanFeedGorfAndCreateAnswers_CanFeed;
	Parms.CallFunc_CanFeedGorfAndCreateAnswers_Answers = CallFunc_CanFeedGorfAndCreateAnswers_Answers;
	Parms.CallFunc_CanFeedGorfAndCreateAnswers_AnswersIDs = CallFunc_CanFeedGorfAndCreateAnswers_AnswersIDs;
	Parms.CallFunc_CanFeedGorfAndCreateAnswers_CanFeed_1 = CallFunc_CanFeedGorfAndCreateAnswers_CanFeed_1;
	Parms.CallFunc_CanFeedGorfAndCreateAnswers_Answers_1 = CallFunc_CanFeedGorfAndCreateAnswers_Answers_1;
	Parms.CallFunc_CanFeedGorfAndCreateAnswers_AnswersIDs_1 = CallFunc_CanFeedGorfAndCreateAnswers_AnswersIDs_1;
	Parms.CallFunc_CanFeedGorfAndCreateAnswers_CanFeed_2 = CallFunc_CanFeedGorfAndCreateAnswers_CanFeed_2;
	Parms.CallFunc_CanFeedGorfAndCreateAnswers_Answers_2 = CallFunc_CanFeedGorfAndCreateAnswers_Answers_2;
	Parms.CallFunc_CanFeedGorfAndCreateAnswers_AnswersIDs_2 = CallFunc_CanFeedGorfAndCreateAnswers_AnswersIDs_2;
	Parms.K2Node_CustomEvent_NotifyName_8 = K2Node_CustomEvent_NotifyName_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CustomEvent_NotifyName_9 = K2Node_CustomEvent_NotifyName_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5;
	Parms.CallFunc_MakeLiteralInt_ReturnValue_6 = CallFunc_MakeLiteralInt_ReturnValue_6;
	Parms.CallFunc_RemoveInventoryItem_Success_3 = CallFunc_RemoveInventoryItem_Success_3;
	Parms.CallFunc_MakeLiteralInt_ReturnValue_7 = CallFunc_MakeLiteralInt_ReturnValue_7;
	Parms.CallFunc_MakeLiteralInt_ReturnValue_8 = CallFunc_MakeLiteralInt_ReturnValue_8;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_1 = K2Node_DynamicCast_AsGame_Play_PCInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_2 = K2Node_DynamicCast_AsGame_Play_PCInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_3 = K2Node_DynamicCast_AsGame_Play_PCInterface_3;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;

	UObject::ProcessEvent(Func, &Parms);

}

}


