#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HeavyBrigandBase.HeavyBrigandBase_C
// (Actor, Pawn)

class UClass* AHeavyBrigandBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HeavyBrigandBase_C");

	return Clss;
}


// HeavyBrigandBase_C HeavyBrigandBase.Default__HeavyBrigandBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHeavyBrigandBase_C* AHeavyBrigandBase_C::GetDefaultObj()
{
	static class AHeavyBrigandBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHeavyBrigandBase_C*>(AHeavyBrigandBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HeavyBrigandBase.HeavyBrigandBase_C.Death_HandleStormModeMilestones
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormMode_GetSelectedShell_HasSelected                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             CallFunc_StormMode_GetSelectedShell_Shell                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void AHeavyBrigandBase_C::Death_HandleStormModeMilestones(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_StormMode_GetSelectedShell_HasSelected, enum class EArmorTypes CallFunc_StormMode_GetSelectedShell_Shell, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "Death_HandleStormModeMilestones");

	Params::AHeavyBrigandBase_C_Death_HandleStormModeMilestones_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_StormMode_GetSelectedShell_HasSelected = CallFunc_StormMode_GetSelectedShell_HasSelected;
	Parms.CallFunc_StormMode_GetSelectedShell_Shell = CallFunc_StormMode_GetSelectedShell_Shell;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.GetStandardAudioComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAudioComponentLocation Audio_Component_Location                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponIdentity         WeaponIdentity__only_for_weapons_                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFootstepSocket         FootstepSocket__only_for_feet_                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             Audio_Component                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAudioComponentLocation Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             Temp_object_Variable                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             Temp_object_Variable_1                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             Temp_object_Variable_2                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::GetStandardAudioComponent(enum class EAudioComponentLocation Audio_Component_Location, enum class EWeaponIdentity WeaponIdentity__only_for_weapons_, enum class EFootstepSocket FootstepSocket__only_for_feet_, class UAudioComponent** Audio_Component, enum class EAudioComponentLocation Temp_byte_Variable, class UAudioComponent* Temp_object_Variable, class UAudioComponent* Temp_object_Variable_1, class UAudioComponent* Temp_object_Variable_2, class UAudioComponent* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "GetStandardAudioComponent");

	Params::AHeavyBrigandBase_C_GetStandardAudioComponent_Params Parms{};

	Parms.Audio_Component_Location = Audio_Component_Location;
	Parms.WeaponIdentity__only_for_weapons_ = WeaponIdentity__only_for_weapons_;
	Parms.FootstepSocket__only_for_feet_ = FootstepSocket__only_for_feet_;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Audio_Component != nullptr)
		*Audio_Component = Parms.Audio_Component;

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.SetMaskType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseBeakMask                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AHeavyBrigandBase_C::SetMaskType(bool UseBeakMask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "SetMaskType");

	Params::AHeavyBrigandBase_C_SetMaskType_Params Parms{};

	Parms.UseBeakMask = UseBeakMask;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.CheckPlayerInRange
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TestingRange                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsPlayerInRange                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void AHeavyBrigandBase_C::CheckPlayerInRange(float TestingRange, bool* IsPlayerInRange, class APawn* CallFunc_GetPlayerPawn_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "CheckPlayerInRange");

	Params::AHeavyBrigandBase_C_CheckPlayerInRange_Params Parms{};

	Parms.TestingRange = TestingRange;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsPlayerInRange != nullptr)
		*IsPlayerInRange = Parms.IsPlayerInRange;

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.SecondAggroNearbyBrigands
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FHitResult>          CallFunc_SphereTraceMultiForObjects_OutHits                      (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SphereTraceMultiForObjects_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AHeavyBrigandBase_C::SecondAggroNearbyBrigands(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TArray<struct FHitResult>& CallFunc_SphereTraceMultiForObjects_OutHits, bool CallFunc_SphereTraceMultiForObjects_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "SecondAggroNearbyBrigands");

	Params::AHeavyBrigandBase_C_SecondAggroNearbyBrigands_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_SphereTraceMultiForObjects_OutHits = CallFunc_SphereTraceMultiForObjects_OutHits;
	Parms.CallFunc_SphereTraceMultiForObjects_ReturnValue = CallFunc_SphereTraceMultiForObjects_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.AggroNearbyBrigands
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHeavyBrigandBase_C::AggroNearbyBrigands()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "AggroNearbyBrigands");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.CheckForAmbush
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WasAmbush_                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AHeavyBrigandBase_C::CheckForAmbush(bool* WasAmbush_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "CheckForAmbush");

	Params::AHeavyBrigandBase_C_CheckForAmbush_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (WasAmbush_ != nullptr)
		*WasAmbush_ = Parms.WasAmbush_;

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.RunAway
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor)

void AHeavyBrigandBase_C::RunAway(class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation, bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "RunAway");

	Params::AHeavyBrigandBase_C_RunAway_Params Parms{};

	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation = CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation;
	Parms.CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue = CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.GetWeaponMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMeshComponent*              WeaponMesh                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::GetWeaponMesh(class UMeshComponent** WeaponMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "GetWeaponMesh");

	Params::AHeavyBrigandBase_C_GetWeaponMesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (WeaponMesh != nullptr)
		*WeaponMesh = Parms.WeaponMesh;

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.ScareNearbyBrigands
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomBool_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm, HasGetValueTypeHash)
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
// class ALightBrigandBase_C*         K2Node_DynamicCast_AsLight_Brigand_Base                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_PlayAnimMontage_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::ScareNearbyBrigands(bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_RandomBool_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UAnimMontage* K2Node_Select_Default, class APawn* CallFunc_K2_GetPawn_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TArray<class AActor*>& K2Node_MakeArray_Array_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TArray<struct FHitResult>& CallFunc_SphereTraceMultiForObjects_OutHits, bool CallFunc_SphereTraceMultiForObjects_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class ALightBrigandBase_C* K2Node_DynamicCast_AsLight_Brigand_Base, bool K2Node_DynamicCast_bSuccess, float CallFunc_PlayAnimMontage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "ScareNearbyBrigands");

	Params::AHeavyBrigandBase_C_ScareNearbyBrigands_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_RandomBool_ReturnValue = CallFunc_RandomBool_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
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
	Parms.K2Node_DynamicCast_AsLight_Brigand_Base = K2Node_DynamicCast_AsLight_Brigand_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_PlayAnimMontage_ReturnValue = CallFunc_PlayAnimMontage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.GetMeleeAtkComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UStaticMeshComponent*        MeleeAtkComponent                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::GetMeleeAtkComponent(class UStaticMeshComponent** MeleeAtkComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "GetMeleeAtkComponent");

	Params::AHeavyBrigandBase_C_GetMeleeAtkComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MeleeAtkComponent != nullptr)
		*MeleeAtkComponent = Parms.MeleeAtkComponent;

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.GetMeleeTraceEnd
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionalSocketOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TraceEnd                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::GetMeleeTraceEnd(class FName OptionalSocketOverride, struct FVector* TraceEnd, const struct FVector& CallFunc_GetSocketLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "GetMeleeTraceEnd");

	Params::AHeavyBrigandBase_C_GetMeleeTraceEnd_Params Parms{};

	Parms.OptionalSocketOverride = OptionalSocketOverride;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TraceEnd != nullptr)
		*TraceEnd = std::move(Parms.TraceEnd);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.GetMeleeTraceStart
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionalSocketOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TraceStart                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::GetMeleeTraceStart(class FName OptionalSocketOverride, struct FVector* TraceStart, const struct FVector& CallFunc_GetSocketLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "GetMeleeTraceStart");

	Params::AHeavyBrigandBase_C_GetMeleeTraceStart_Params Parms{};

	Parms.OptionalSocketOverride = OptionalSocketOverride;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TraceStart != nullptr)
		*TraceStart = std::move(Parms.TraceStart);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.OnNotifyEnd_973FEB0F469F68AC252E9B8D9762E6BA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::OnNotifyEnd_973FEB0F469F68AC252E9B8D9762E6BA(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "OnNotifyEnd_973FEB0F469F68AC252E9B8D9762E6BA");

	Params::AHeavyBrigandBase_C_OnNotifyEnd_973FEB0F469F68AC252E9B8D9762E6BA_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.OnNotifyBegin_973FEB0F469F68AC252E9B8D9762E6BA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::OnNotifyBegin_973FEB0F469F68AC252E9B8D9762E6BA(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "OnNotifyBegin_973FEB0F469F68AC252E9B8D9762E6BA");

	Params::AHeavyBrigandBase_C_OnNotifyBegin_973FEB0F469F68AC252E9B8D9762E6BA_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.OnInterrupted_973FEB0F469F68AC252E9B8D9762E6BA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::OnInterrupted_973FEB0F469F68AC252E9B8D9762E6BA(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "OnInterrupted_973FEB0F469F68AC252E9B8D9762E6BA");

	Params::AHeavyBrigandBase_C_OnInterrupted_973FEB0F469F68AC252E9B8D9762E6BA_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.OnBlendOut_973FEB0F469F68AC252E9B8D9762E6BA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::OnBlendOut_973FEB0F469F68AC252E9B8D9762E6BA(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "OnBlendOut_973FEB0F469F68AC252E9B8D9762E6BA");

	Params::AHeavyBrigandBase_C_OnBlendOut_973FEB0F469F68AC252E9B8D9762E6BA_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.OnCompleted_973FEB0F469F68AC252E9B8D9762E6BA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::OnCompleted_973FEB0F469F68AC252E9B8D9762E6BA(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "OnCompleted_973FEB0F469F68AC252E9B8D9762E6BA");

	Params::AHeavyBrigandBase_C_OnCompleted_973FEB0F469F68AC252E9B8D9762E6BA_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.OnNotifyEnd_22B170784091FEE625E43B82EEDCBE05
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::OnNotifyEnd_22B170784091FEE625E43B82EEDCBE05(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "OnNotifyEnd_22B170784091FEE625E43B82EEDCBE05");

	Params::AHeavyBrigandBase_C_OnNotifyEnd_22B170784091FEE625E43B82EEDCBE05_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.OnNotifyBegin_22B170784091FEE625E43B82EEDCBE05
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::OnNotifyBegin_22B170784091FEE625E43B82EEDCBE05(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "OnNotifyBegin_22B170784091FEE625E43B82EEDCBE05");

	Params::AHeavyBrigandBase_C_OnNotifyBegin_22B170784091FEE625E43B82EEDCBE05_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.OnInterrupted_22B170784091FEE625E43B82EEDCBE05
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::OnInterrupted_22B170784091FEE625E43B82EEDCBE05(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "OnInterrupted_22B170784091FEE625E43B82EEDCBE05");

	Params::AHeavyBrigandBase_C_OnInterrupted_22B170784091FEE625E43B82EEDCBE05_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.OnBlendOut_22B170784091FEE625E43B82EEDCBE05
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::OnBlendOut_22B170784091FEE625E43B82EEDCBE05(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "OnBlendOut_22B170784091FEE625E43B82EEDCBE05");

	Params::AHeavyBrigandBase_C_OnBlendOut_22B170784091FEE625E43B82EEDCBE05_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.OnCompleted_22B170784091FEE625E43B82EEDCBE05
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::OnCompleted_22B170784091FEE625E43B82EEDCBE05(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "OnCompleted_22B170784091FEE625E43B82EEDCBE05");

	Params::AHeavyBrigandBase_C_OnCompleted_22B170784091FEE625E43B82EEDCBE05_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.OnNotifyEnd_482557FB4BD6E99BF85127990AB6B08D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::OnNotifyEnd_482557FB4BD6E99BF85127990AB6B08D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "OnNotifyEnd_482557FB4BD6E99BF85127990AB6B08D");

	Params::AHeavyBrigandBase_C_OnNotifyEnd_482557FB4BD6E99BF85127990AB6B08D_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.OnNotifyBegin_482557FB4BD6E99BF85127990AB6B08D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::OnNotifyBegin_482557FB4BD6E99BF85127990AB6B08D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "OnNotifyBegin_482557FB4BD6E99BF85127990AB6B08D");

	Params::AHeavyBrigandBase_C_OnNotifyBegin_482557FB4BD6E99BF85127990AB6B08D_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.OnInterrupted_482557FB4BD6E99BF85127990AB6B08D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::OnInterrupted_482557FB4BD6E99BF85127990AB6B08D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "OnInterrupted_482557FB4BD6E99BF85127990AB6B08D");

	Params::AHeavyBrigandBase_C_OnInterrupted_482557FB4BD6E99BF85127990AB6B08D_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.OnBlendOut_482557FB4BD6E99BF85127990AB6B08D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::OnBlendOut_482557FB4BD6E99BF85127990AB6B08D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "OnBlendOut_482557FB4BD6E99BF85127990AB6B08D");

	Params::AHeavyBrigandBase_C_OnBlendOut_482557FB4BD6E99BF85127990AB6B08D_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.OnCompleted_482557FB4BD6E99BF85127990AB6B08D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::OnCompleted_482557FB4BD6E99BF85127990AB6B08D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "OnCompleted_482557FB4BD6E99BF85127990AB6B08D");

	Params::AHeavyBrigandBase_C_OnCompleted_482557FB4BD6E99BF85127990AB6B08D_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.OnNotifyEnd_1C853AA74ABD239706CADFA80D0AA561
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::OnNotifyEnd_1C853AA74ABD239706CADFA80D0AA561(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "OnNotifyEnd_1C853AA74ABD239706CADFA80D0AA561");

	Params::AHeavyBrigandBase_C_OnNotifyEnd_1C853AA74ABD239706CADFA80D0AA561_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.OnNotifyBegin_1C853AA74ABD239706CADFA80D0AA561
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::OnNotifyBegin_1C853AA74ABD239706CADFA80D0AA561(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "OnNotifyBegin_1C853AA74ABD239706CADFA80D0AA561");

	Params::AHeavyBrigandBase_C_OnNotifyBegin_1C853AA74ABD239706CADFA80D0AA561_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.OnInterrupted_1C853AA74ABD239706CADFA80D0AA561
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::OnInterrupted_1C853AA74ABD239706CADFA80D0AA561(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "OnInterrupted_1C853AA74ABD239706CADFA80D0AA561");

	Params::AHeavyBrigandBase_C_OnInterrupted_1C853AA74ABD239706CADFA80D0AA561_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.OnBlendOut_1C853AA74ABD239706CADFA80D0AA561
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::OnBlendOut_1C853AA74ABD239706CADFA80D0AA561(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "OnBlendOut_1C853AA74ABD239706CADFA80D0AA561");

	Params::AHeavyBrigandBase_C_OnBlendOut_1C853AA74ABD239706CADFA80D0AA561_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.OnCompleted_1C853AA74ABD239706CADFA80D0AA561
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::OnCompleted_1C853AA74ABD239706CADFA80D0AA561(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "OnCompleted_1C853AA74ABD239706CADFA80D0AA561");

	Params::AHeavyBrigandBase_C_OnCompleted_1C853AA74ABD239706CADFA80D0AA561_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.OnNotifyEnd_2260235840C2D5ED050A16808EF1D7BD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::OnNotifyEnd_2260235840C2D5ED050A16808EF1D7BD(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "OnNotifyEnd_2260235840C2D5ED050A16808EF1D7BD");

	Params::AHeavyBrigandBase_C_OnNotifyEnd_2260235840C2D5ED050A16808EF1D7BD_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.OnNotifyBegin_2260235840C2D5ED050A16808EF1D7BD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::OnNotifyBegin_2260235840C2D5ED050A16808EF1D7BD(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "OnNotifyBegin_2260235840C2D5ED050A16808EF1D7BD");

	Params::AHeavyBrigandBase_C_OnNotifyBegin_2260235840C2D5ED050A16808EF1D7BD_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.OnInterrupted_2260235840C2D5ED050A16808EF1D7BD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::OnInterrupted_2260235840C2D5ED050A16808EF1D7BD(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "OnInterrupted_2260235840C2D5ED050A16808EF1D7BD");

	Params::AHeavyBrigandBase_C_OnInterrupted_2260235840C2D5ED050A16808EF1D7BD_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.OnBlendOut_2260235840C2D5ED050A16808EF1D7BD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::OnBlendOut_2260235840C2D5ED050A16808EF1D7BD(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "OnBlendOut_2260235840C2D5ED050A16808EF1D7BD");

	Params::AHeavyBrigandBase_C_OnBlendOut_2260235840C2D5ED050A16808EF1D7BD_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.OnCompleted_2260235840C2D5ED050A16808EF1D7BD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::OnCompleted_2260235840C2D5ED050A16808EF1D7BD(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "OnCompleted_2260235840C2D5ED050A16808EF1D7BD");

	Params::AHeavyBrigandBase_C_OnCompleted_2260235840C2D5ED050A16808EF1D7BD_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.OnNotifyEnd_32F00FA5456F7374675D51906D55360E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::OnNotifyEnd_32F00FA5456F7374675D51906D55360E(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "OnNotifyEnd_32F00FA5456F7374675D51906D55360E");

	Params::AHeavyBrigandBase_C_OnNotifyEnd_32F00FA5456F7374675D51906D55360E_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.OnNotifyBegin_32F00FA5456F7374675D51906D55360E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::OnNotifyBegin_32F00FA5456F7374675D51906D55360E(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "OnNotifyBegin_32F00FA5456F7374675D51906D55360E");

	Params::AHeavyBrigandBase_C_OnNotifyBegin_32F00FA5456F7374675D51906D55360E_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.OnInterrupted_32F00FA5456F7374675D51906D55360E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::OnInterrupted_32F00FA5456F7374675D51906D55360E(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "OnInterrupted_32F00FA5456F7374675D51906D55360E");

	Params::AHeavyBrigandBase_C_OnInterrupted_32F00FA5456F7374675D51906D55360E_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.OnBlendOut_32F00FA5456F7374675D51906D55360E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::OnBlendOut_32F00FA5456F7374675D51906D55360E(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "OnBlendOut_32F00FA5456F7374675D51906D55360E");

	Params::AHeavyBrigandBase_C_OnBlendOut_32F00FA5456F7374675D51906D55360E_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.OnCompleted_32F00FA5456F7374675D51906D55360E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::OnCompleted_32F00FA5456F7374675D51906D55360E(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "OnCompleted_32F00FA5456F7374675D51906D55360E");

	Params::AHeavyBrigandBase_C_OnCompleted_32F00FA5456F7374675D51906D55360E_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.OnNotifyEnd_A1C21F644C79C6BE9DC88FBA48AF2C4F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::OnNotifyEnd_A1C21F644C79C6BE9DC88FBA48AF2C4F(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "OnNotifyEnd_A1C21F644C79C6BE9DC88FBA48AF2C4F");

	Params::AHeavyBrigandBase_C_OnNotifyEnd_A1C21F644C79C6BE9DC88FBA48AF2C4F_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.OnNotifyBegin_A1C21F644C79C6BE9DC88FBA48AF2C4F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::OnNotifyBegin_A1C21F644C79C6BE9DC88FBA48AF2C4F(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "OnNotifyBegin_A1C21F644C79C6BE9DC88FBA48AF2C4F");

	Params::AHeavyBrigandBase_C_OnNotifyBegin_A1C21F644C79C6BE9DC88FBA48AF2C4F_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.OnInterrupted_A1C21F644C79C6BE9DC88FBA48AF2C4F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::OnInterrupted_A1C21F644C79C6BE9DC88FBA48AF2C4F(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "OnInterrupted_A1C21F644C79C6BE9DC88FBA48AF2C4F");

	Params::AHeavyBrigandBase_C_OnInterrupted_A1C21F644C79C6BE9DC88FBA48AF2C4F_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.OnBlendOut_A1C21F644C79C6BE9DC88FBA48AF2C4F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::OnBlendOut_A1C21F644C79C6BE9DC88FBA48AF2C4F(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "OnBlendOut_A1C21F644C79C6BE9DC88FBA48AF2C4F");

	Params::AHeavyBrigandBase_C_OnBlendOut_A1C21F644C79C6BE9DC88FBA48AF2C4F_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.OnCompleted_A1C21F644C79C6BE9DC88FBA48AF2C4F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::OnCompleted_A1C21F644C79C6BE9DC88FBA48AF2C4F(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "OnCompleted_A1C21F644C79C6BE9DC88FBA48AF2C4F");

	Params::AHeavyBrigandBase_C_OnCompleted_A1C21F644C79C6BE9DC88FBA48AF2C4F_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.CheckDistanceToPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHeavyBrigandBase_C::CheckDistanceToPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "CheckDistanceToPlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.PlayDeathMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHeavyBrigandBase_C::PlayDeathMontage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "PlayDeathMontage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.ExecuteMidAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHeavyBrigandBase_C::ExecuteMidAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "ExecuteMidAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.ExecuteShortAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHeavyBrigandBase_C::ExecuteShortAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "ExecuteShortAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.ExecuteLongAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHeavyBrigandBase_C::ExecuteLongAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "ExecuteLongAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.SetCurrentAttackDistance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FloatValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::SetCurrentAttackDistance(float FloatValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "SetCurrentAttackDistance");

	Params::AHeavyBrigandBase_C_SetCurrentAttackDistance_Params Parms{};

	Parms.FloatValue = FloatValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.PlayAggroMontage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHeavyBrigandBase_C::PlayAggroMontage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "PlayAggroMontage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.CheckSecondAggro
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DistanceToPlayer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::CheckSecondAggro(float DistanceToPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "CheckSecondAggro");

	Params::AHeavyBrigandBase_C_CheckSecondAggro_Params Parms{};

	Parms.DistanceToPlayer = DistanceToPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.PrintFwdAtkDistance
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHeavyBrigandBase_C::PrintFwdAtkDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "PrintFwdAtkDistance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.InitAfterSpawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAdvancedEnemySpawner_C*     SpawnerRef                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        UniqueId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELevelPhases            PhaseToSpawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bPermanentlyDeadOnceKilled_                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APatrolPoint_C*              PatrolPointA                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bShouldWander_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APatrolPoint_C*              PatrolPointB                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AggroRadius                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_TriggerOnEnemyAggro_C*   TriggerToActivateOnAggro                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShouldPatrol_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  SpawnTransform                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void AHeavyBrigandBase_C::InitAfterSpawn(class AAdvancedEnemySpawner_C* SpawnerRef, class FName UniqueId, enum class ELevelPhases PhaseToSpawn, bool bPermanentlyDeadOnceKilled_, class APatrolPoint_C* PatrolPointA, bool bShouldWander_, class APatrolPoint_C* PatrolPointB, float AggroRadius, class ABP_TriggerOnEnemyAggro_C* TriggerToActivateOnAggro, bool ShouldPatrol_, const struct FTransform& SpawnTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "InitAfterSpawn");

	Params::AHeavyBrigandBase_C_InitAfterSpawn_Params Parms{};

	Parms.SpawnerRef = SpawnerRef;
	Parms.UniqueId = UniqueId;
	Parms.PhaseToSpawn = PhaseToSpawn;
	Parms.bPermanentlyDeadOnceKilled_ = bPermanentlyDeadOnceKilled_;
	Parms.PatrolPointA = PatrolPointA;
	Parms.bShouldWander_ = bShouldWander_;
	Parms.PatrolPointB = PatrolPointB;
	Parms.AggroRadius = AggroRadius;
	Parms.TriggerToActivateOnAggro = TriggerToActivateOnAggro;
	Parms.ShouldPatrol_ = ShouldPatrol_;
	Parms.SpawnTransform = SpawnTransform;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.UpdateAggroPoseFromSpawner
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHeavyBrigandBase_C::UpdateAggroPoseFromSpawner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "UpdateAggroPoseFromSpawner");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.AggroedByOtherBrigand
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHeavyBrigandBase_C::AggroedByOtherBrigand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "AggroedByOtherBrigand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.ForceSecondAggro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHeavyBrigandBase_C::ForceSecondAggro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "ForceSecondAggro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.PlayHitReactionMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHeavyBrigandBase_C::PlayHitReactionMontage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "PlayHitReactionMontage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.Force Dodge
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHeavyBrigandBase_C::Force_Dodge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "Force Dodge");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.OnAggroDelayOver
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHeavyBrigandBase_C::OnAggroDelayOver()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "OnAggroDelayOver");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.ResetAtkIfDistant
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHeavyBrigandBase_C::ResetAtkIfDistant()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "ResetAtkIfDistant");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.EnemyDeath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Killer                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bShouldPlayDeathAnim                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AHeavyBrigandBase_C::EnemyDeath(class AActor* Killer, bool bShouldPlayDeathAnim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "EnemyDeath");

	Params::AHeavyBrigandBase_C_EnemyDeath_Params Parms{};

	Parms.Killer = Killer;
	Parms.bShouldPlayDeathAnim = bShouldPlayDeathAnim;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.ClearHitCounter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHeavyBrigandBase_C::ClearHitCounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "ClearHitCounter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "ReceiveTick");

	Params::AHeavyBrigandBase_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AHeavyBrigandBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.ShitPants
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHeavyBrigandBase_C::ShitPants()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "ShitPants");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.PlayRunAwayMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHeavyBrigandBase_C::PlayRunAwayMontage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "PlayRunAwayMontage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.SetDistanceCheckTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHeavyBrigandBase_C::SetDistanceCheckTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "SetDistanceCheckTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.ForceHeavyStaggerDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     DirectionToSource                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeavyBrigandBase_C::ForceHeavyStaggerDamage(const struct FVector& DirectionToSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "ForceHeavyStaggerDamage");

	Params::AHeavyBrigandBase_C_ForceHeavyStaggerDamage_Params Parms{};

	Parms.DirectionToSource = DirectionToSource;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.PlayLightHitReaction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHeavyBrigandBase_C::PlayLightHitReaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "PlayLightHitReaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.DropWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHeavyBrigandBase_C::DropWeapon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "DropWeapon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.AggroOnPlayerDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      PlayerToAggro                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsFromLute_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AHeavyBrigandBase_C::AggroOnPlayerDamage(class AActor* PlayerToAggro, bool bIsFromLute_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "AggroOnPlayerDamage");

	Params::AHeavyBrigandBase_C_AggroOnPlayerDamage_Params Parms{};

	Parms.PlayerToAggro = PlayerToAggro;
	Parms.bIsFromLute_ = bIsFromLute_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.EnableFrozenRiverLightRig
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable_                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AHeavyBrigandBase_C::EnableFrozenRiverLightRig(bool Enable_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "EnableFrozenRiverLightRig");

	Params::AHeavyBrigandBase_C_EnableFrozenRiverLightRig_Params Parms{};

	Parms.Enable_ = Enable_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeavyBrigandBase.HeavyBrigandBase_C.ExecuteUbergraph_HeavyBrigandBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_27                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_26                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_25                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_24                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_23                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_22                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_21                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_20                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_19                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_18                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_17                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_16                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_15                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_14                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_13                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_20                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_21                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_22                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_23                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_24                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_25                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_26                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_27                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_28                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHeavyBrigandSpawner_C*      K2Node_DynamicCast_AsHeavy_Brigand_Spawner                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_29                          (ZeroConstructor, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_FloatValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_DistanceToPlayer                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_33                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorRelativeScale3D_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAdvancedEnemySpawner_C*     K2Node_Event_SpawnerRef                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_UniqueID                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELevelPhases            K2Node_Event_PhaseToSpawn                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bPermanentlyDeadOnceKilled_                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APatrolPoint_C*              K2Node_Event_PatrolPointA                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShouldWander_                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APatrolPoint_C*              K2Node_Event_PatrolPointB                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_AggroRadius                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_TriggerOnEnemyAggro_C*   K2Node_Event_TriggerToActivateOnAggro                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_ShouldPatrol_                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  K2Node_Event_SpawnTransform                                      (IsPlainOldData, NoDestructor)
// class UHeavy_Brigand_Melee_AnimBlueprint_C*K2Node_DynamicCast_AsHeavy_Brigand_Melee_Anim_Blueprint          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckForAmbush_WasAmbush_                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckForAmbush_WasAmbush__1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_28                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayAnimMontage_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMyDetourCrowdAIController_C*K2Node_DynamicCast_AsMy_Detour_Crowd_AIController                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_30                          (ZeroConstructor, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_31                          (ZeroConstructor, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue_2                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_GetAllRootMotionForwardDeltaFromMontage_ReturnValue     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class AActor*                      K2Node_Event_Killer                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShouldPlayDeathAnim                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_34                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue_3                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_32                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_33                          (ZeroConstructor, NoDestructor)
// struct FVector                     K2Node_Event_DirectionToSource                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectRandomAttack_SelectedAttack                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayingParryRiposteReactOrDead__ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_6           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayingParryRiposteReactOrDead__ReturnValue_1         (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_34                          (ZeroConstructor, NoDestructor)
// class AActor*                      K2Node_Event_PlayerToAggro                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsFromLute_                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_29                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHeavyBrigandSpawner_Patrol_C*K2Node_DynamicCast_AsHeavy_Brigand_Spawner_Patrol                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_35                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_30                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAdvancedEnemySpawner_StormMode_C*K2Node_DynamicCast_AsAdvanced_Enemy_Spawner_Storm_Mode           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_31                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_36                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_32                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_37                          (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_Enable_                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void AHeavyBrigandBase_C::ExecuteUbergraph_HeavyBrigandBase(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_27, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_26, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_25, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_24, class FName K2Node_CustomEvent_NotifyName_23, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_22, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_21, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_20, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName_19, class FName K2Node_CustomEvent_NotifyName_18, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName K2Node_CustomEvent_NotifyName_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName K2Node_CustomEvent_NotifyName_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName Temp_name_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class FName K2Node_CustomEvent_NotifyName_14, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, class FName Temp_name_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, class FName K2Node_CustomEvent_NotifyName_9, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, class FName Temp_name_Variable_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_24, bool CallFunc_EqualEqual_NameName_ReturnValue, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_25, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_26, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_27, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_28, class FName Temp_name_Variable_5, int32 Temp_int_Variable, class UAnimMontage* Temp_object_Variable, class UAnimMontage* Temp_object_Variable_1, class UAnimMontage* Temp_object_Variable_2, class UAnimMontage* Temp_object_Variable_3, class UAnimMontage* Temp_object_Variable_4, class UAnimMontage* Temp_object_Variable_5, class UAnimMontage* Temp_object_Variable_6, class UAnimMontage* Temp_object_Variable_7, class AHeavyBrigandSpawner_C* K2Node_DynamicCast_AsHeavy_Brigand_Spawner, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_MakeLiteralName_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_29, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, float K2Node_CustomEvent_FloatValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, float K2Node_CustomEvent_DistanceToPlayer, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FName K2Node_CustomEvent_NotifyName_33, const struct FVector& CallFunc_GetActorRelativeScale3D_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class AAdvancedEnemySpawner_C* K2Node_Event_SpawnerRef, class FName K2Node_Event_UniqueID, enum class ELevelPhases K2Node_Event_PhaseToSpawn, bool K2Node_Event_bPermanentlyDeadOnceKilled_, class APatrolPoint_C* K2Node_Event_PatrolPointA, bool K2Node_Event_bShouldWander_, class APatrolPoint_C* K2Node_Event_PatrolPointB, float K2Node_Event_AggroRadius, class ABP_TriggerOnEnemyAggro_C* K2Node_Event_TriggerToActivateOnAggro, bool K2Node_Event_ShouldPatrol_, const struct FTransform& K2Node_Event_SpawnTransform, class UHeavy_Brigand_Melee_AnimBlueprint_C* K2Node_DynamicCast_AsHeavy_Brigand_Melee_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_CheckForAmbush_WasAmbush_, bool CallFunc_CheckForAmbush_WasAmbush__1, class FName K2Node_CustomEvent_NotifyName_28, class AController* CallFunc_GetController_ReturnValue_2, float CallFunc_PlayAnimMontage_ReturnValue, class AMyDetourCrowdAIController_C* K2Node_DynamicCast_AsMy_Detour_Crowd_AIController, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_RandomFloatInRange_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_30, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed, class AController* CallFunc_GetController_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_31, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2, class FName CallFunc_MakeLiteralName_ReturnValue_2, const class FString& CallFunc_GetDisplayName_ReturnValue, float CallFunc_GetAllRootMotionForwardDeltaFromMontage_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class AActor* K2Node_Event_Killer, bool K2Node_Event_bShouldPlayDeathAnim, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FName K2Node_CustomEvent_NotifyName_34, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_6, class AController* CallFunc_GetController_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, class FName CallFunc_MakeLiteralName_ReturnValue_3, class AController* CallFunc_GetController_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_9, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_3, float K2Node_Event_DeltaSeconds, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_32, bool CallFunc_IsValid_ReturnValue_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_33, const struct FVector& K2Node_Event_DirectionToSource, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_2, bool CallFunc_IsValid_ReturnValue_11, int32 CallFunc_SelectRandomAttack_SelectedAttack, bool K2Node_SwitchInteger_CmpSuccess_1, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, class UAnimMontage* K2Node_Select_Default, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_12, float CallFunc_RandomFloatInRange_ReturnValue_1, bool CallFunc_IsPlayingParryRiposteReactOrDead__ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_13, bool CallFunc_IsPlayingParryRiposteReactOrDead__ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_34, class AActor* K2Node_Event_PlayerToAggro, bool K2Node_Event_bIsFromLute_, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class FName K2Node_CustomEvent_NotifyName_29, class AHeavyBrigandSpawner_Patrol_C* K2Node_DynamicCast_AsHeavy_Brigand_Spawner_Patrol, bool K2Node_DynamicCast_bSuccess_3, class FName Temp_name_Variable_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_35, class FName K2Node_CustomEvent_NotifyName_30, class AAdvancedEnemySpawner_StormMode_C* K2Node_DynamicCast_AsAdvanced_Enemy_Spawner_Storm_Mode, bool K2Node_DynamicCast_bSuccess_4, class FName K2Node_CustomEvent_NotifyName_31, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_36, class FName K2Node_CustomEvent_NotifyName_32, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_37, bool K2Node_Event_Enable_, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeavyBrigandBase_C", "ExecuteUbergraph_HeavyBrigandBase");

	Params::AHeavyBrigandBase_C_ExecuteUbergraph_HeavyBrigandBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NotifyName_27 = K2Node_CustomEvent_NotifyName_27;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName_26 = K2Node_CustomEvent_NotifyName_26;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyName_25 = K2Node_CustomEvent_NotifyName_25;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_NotifyName_24 = K2Node_CustomEvent_NotifyName_24;
	Parms.K2Node_CustomEvent_NotifyName_23 = K2Node_CustomEvent_NotifyName_23;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_NotifyName_22 = K2Node_CustomEvent_NotifyName_22;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_NotifyName_21 = K2Node_CustomEvent_NotifyName_21;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CustomEvent_NotifyName_20 = K2Node_CustomEvent_NotifyName_20;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CustomEvent_NotifyName_19 = K2Node_CustomEvent_NotifyName_19;
	Parms.K2Node_CustomEvent_NotifyName_18 = K2Node_CustomEvent_NotifyName_18;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CustomEvent_NotifyName_17 = K2Node_CustomEvent_NotifyName_17;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CustomEvent_NotifyName_16 = K2Node_CustomEvent_NotifyName_16;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CustomEvent_NotifyName_15 = K2Node_CustomEvent_NotifyName_15;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.K2Node_CustomEvent_NotifyName_14 = K2Node_CustomEvent_NotifyName_14;
	Parms.K2Node_CustomEvent_NotifyName_13 = K2Node_CustomEvent_NotifyName_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.K2Node_CustomEvent_NotifyName_12 = K2Node_CustomEvent_NotifyName_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.K2Node_CustomEvent_NotifyName_11 = K2Node_CustomEvent_NotifyName_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.K2Node_CustomEvent_NotifyName_10 = K2Node_CustomEvent_NotifyName_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_18 = K2Node_CreateDelegate_OutputDelegate_18;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_19 = K2Node_CreateDelegate_OutputDelegate_19;
	Parms.K2Node_CustomEvent_NotifyName_9 = K2Node_CustomEvent_NotifyName_9;
	Parms.K2Node_CustomEvent_NotifyName_8 = K2Node_CustomEvent_NotifyName_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_20 = K2Node_CreateDelegate_OutputDelegate_20;
	Parms.K2Node_CustomEvent_NotifyName_7 = K2Node_CustomEvent_NotifyName_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_21 = K2Node_CreateDelegate_OutputDelegate_21;
	Parms.K2Node_CustomEvent_NotifyName_6 = K2Node_CustomEvent_NotifyName_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_22 = K2Node_CreateDelegate_OutputDelegate_22;
	Parms.K2Node_CustomEvent_NotifyName_5 = K2Node_CustomEvent_NotifyName_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_23 = K2Node_CreateDelegate_OutputDelegate_23;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_24 = K2Node_CreateDelegate_OutputDelegate_24;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_25 = K2Node_CreateDelegate_OutputDelegate_25;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_26 = K2Node_CreateDelegate_OutputDelegate_26;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_27 = K2Node_CreateDelegate_OutputDelegate_27;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_28 = K2Node_CreateDelegate_OutputDelegate_28;
	Parms.Temp_name_Variable_5 = Temp_name_Variable_5;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.K2Node_DynamicCast_AsHeavy_Brigand_Spawner = K2Node_DynamicCast_AsHeavy_Brigand_Spawner;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_29 = K2Node_CreateDelegate_OutputDelegate_29;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.CallFunc_MakeLiteralName_ReturnValue_1 = CallFunc_MakeLiteralName_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetBlackboard_ReturnValue_1 = CallFunc_GetBlackboard_ReturnValue_1;
	Parms.K2Node_CustomEvent_FloatValue = K2Node_CustomEvent_FloatValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.K2Node_CustomEvent_DistanceToPlayer = K2Node_CustomEvent_DistanceToPlayer;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_33 = K2Node_CustomEvent_NotifyName_33;
	Parms.CallFunc_GetActorRelativeScale3D_ReturnValue = CallFunc_GetActorRelativeScale3D_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_Event_SpawnerRef = K2Node_Event_SpawnerRef;
	Parms.K2Node_Event_UniqueID = K2Node_Event_UniqueID;
	Parms.K2Node_Event_PhaseToSpawn = K2Node_Event_PhaseToSpawn;
	Parms.K2Node_Event_bPermanentlyDeadOnceKilled_ = K2Node_Event_bPermanentlyDeadOnceKilled_;
	Parms.K2Node_Event_PatrolPointA = K2Node_Event_PatrolPointA;
	Parms.K2Node_Event_bShouldWander_ = K2Node_Event_bShouldWander_;
	Parms.K2Node_Event_PatrolPointB = K2Node_Event_PatrolPointB;
	Parms.K2Node_Event_AggroRadius = K2Node_Event_AggroRadius;
	Parms.K2Node_Event_TriggerToActivateOnAggro = K2Node_Event_TriggerToActivateOnAggro;
	Parms.K2Node_Event_ShouldPatrol_ = K2Node_Event_ShouldPatrol_;
	Parms.K2Node_Event_SpawnTransform = K2Node_Event_SpawnTransform;
	Parms.K2Node_DynamicCast_AsHeavy_Brigand_Melee_Anim_Blueprint = K2Node_DynamicCast_AsHeavy_Brigand_Melee_Anim_Blueprint;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_CheckForAmbush_WasAmbush_ = CallFunc_CheckForAmbush_WasAmbush_;
	Parms.CallFunc_CheckForAmbush_WasAmbush__1 = CallFunc_CheckForAmbush_WasAmbush__1;
	Parms.K2Node_CustomEvent_NotifyName_28 = K2Node_CustomEvent_NotifyName_28;
	Parms.CallFunc_GetController_ReturnValue_2 = CallFunc_GetController_ReturnValue_2;
	Parms.CallFunc_PlayAnimMontage_ReturnValue = CallFunc_PlayAnimMontage_ReturnValue;
	Parms.K2Node_DynamicCast_AsMy_Detour_Crowd_AIController = K2Node_DynamicCast_AsMy_Detour_Crowd_AIController;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_30 = K2Node_CreateDelegate_OutputDelegate_30;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_1 = CallFunc_LessEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed = CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed;
	Parms.CallFunc_GetController_ReturnValue_3 = CallFunc_GetController_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_31 = K2Node_CreateDelegate_OutputDelegate_31;
	Parms.CallFunc_GetBlackboard_ReturnValue_2 = CallFunc_GetBlackboard_ReturnValue_2;
	Parms.CallFunc_MakeLiteralName_ReturnValue_2 = CallFunc_MakeLiteralName_ReturnValue_2;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetAllRootMotionForwardDeltaFromMontage_ReturnValue = CallFunc_GetAllRootMotionForwardDeltaFromMontage_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_Event_Killer = K2Node_Event_Killer;
	Parms.K2Node_Event_bShouldPlayDeathAnim = K2Node_Event_bShouldPlayDeathAnim;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_34 = K2Node_CustomEvent_NotifyName_34;
	Parms.CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_1 = CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_1;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_GetController_ReturnValue_4 = CallFunc_GetController_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_MakeLiteralName_ReturnValue_3 = CallFunc_MakeLiteralName_ReturnValue_3;
	Parms.CallFunc_GetController_ReturnValue_5 = CallFunc_GetController_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_GetBlackboard_ReturnValue_3 = CallFunc_GetBlackboard_ReturnValue_3;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_32 = K2Node_CreateDelegate_OutputDelegate_32;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_33 = K2Node_CreateDelegate_OutputDelegate_33;
	Parms.K2Node_Event_DirectionToSource = K2Node_Event_DirectionToSource;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4;
	Parms.CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_2 = CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_2;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_SelectRandomAttack_SelectedAttack = CallFunc_SelectRandomAttack_SelectedAttack;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_1 = CallFunc_RandomIntegerInRange_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_IsPlayingParryRiposteReactOrDead__ReturnValue = CallFunc_IsPlayingParryRiposteReactOrDead__ReturnValue;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_6 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.CallFunc_IsPlayingParryRiposteReactOrDead__ReturnValue_1 = CallFunc_IsPlayingParryRiposteReactOrDead__ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_34 = K2Node_CreateDelegate_OutputDelegate_34;
	Parms.K2Node_Event_PlayerToAggro = K2Node_Event_PlayerToAggro;
	Parms.K2Node_Event_bIsFromLute_ = K2Node_Event_bIsFromLute_;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.K2Node_CustomEvent_NotifyName_29 = K2Node_CustomEvent_NotifyName_29;
	Parms.K2Node_DynamicCast_AsHeavy_Brigand_Spawner_Patrol = K2Node_DynamicCast_AsHeavy_Brigand_Spawner_Patrol;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.Temp_name_Variable_6 = Temp_name_Variable_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_35 = K2Node_CreateDelegate_OutputDelegate_35;
	Parms.K2Node_CustomEvent_NotifyName_30 = K2Node_CustomEvent_NotifyName_30;
	Parms.K2Node_DynamicCast_AsAdvanced_Enemy_Spawner_Storm_Mode = K2Node_DynamicCast_AsAdvanced_Enemy_Spawner_Storm_Mode;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_CustomEvent_NotifyName_31 = K2Node_CustomEvent_NotifyName_31;
	Parms.K2Node_CreateDelegate_OutputDelegate_36 = K2Node_CreateDelegate_OutputDelegate_36;
	Parms.K2Node_CustomEvent_NotifyName_32 = K2Node_CustomEvent_NotifyName_32;
	Parms.K2Node_CreateDelegate_OutputDelegate_37 = K2Node_CreateDelegate_OutputDelegate_37;
	Parms.K2Node_Event_Enable_ = K2Node_Event_Enable_;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


