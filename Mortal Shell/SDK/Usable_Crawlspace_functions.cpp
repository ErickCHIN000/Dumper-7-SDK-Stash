#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Usable_Crawlspace.Usable_Crawlspace_C
// (Actor)

class UClass* AUsable_Crawlspace_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Usable_Crawlspace_C");

	return Clss;
}


// Usable_Crawlspace_C Usable_Crawlspace.Default__Usable_Crawlspace_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AUsable_Crawlspace_C* AUsable_Crawlspace_C::GetDefaultObj()
{
	static class AUsable_Crawlspace_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AUsable_Crawlspace_C*>(AUsable_Crawlspace_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Usable_Crawlspace.Usable_Crawlspace_C.Enemy_IsInParryableState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsParryableState_                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Crawlspace_C::Enemy_IsInParryableState(bool* IsParryableState_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Crawlspace_C", "Enemy_IsInParryableState");

	Params::AUsable_Crawlspace_C_Enemy_IsInParryableState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsParryableState_ != nullptr)
		*IsParryableState_ = Parms.IsParryableState_;

}


// Function Usable_Crawlspace.Usable_Crawlspace_C.BossCrucix_IsSimulatingLittleBro
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AUsable_Crawlspace_C::BossCrucix_IsSimulatingLittleBro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Crawlspace_C", "BossCrucix_IsSimulatingLittleBro");

	Params::AUsable_Crawlspace_C_BossCrucix_IsSimulatingLittleBro_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Usable_Crawlspace.Usable_Crawlspace_C.BossCharacterHadern_IsHadern
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHadern                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Crawlspace_C::BossCharacterHadern_IsHadern(bool* IsHadern)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Crawlspace_C", "BossCharacterHadern_IsHadern");

	Params::AUsable_Crawlspace_C_BossCharacterHadern_IsHadern_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsHadern != nullptr)
		*IsHadern = Parms.IsHadern;

}


// Function Usable_Crawlspace.Usable_Crawlspace_C.BossCryptCharacter_GetThrowAttack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ThrowAttack                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Crawlspace_C::BossCryptCharacter_GetThrowAttack(bool* ThrowAttack)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Crawlspace_C", "BossCryptCharacter_GetThrowAttack");

	Params::AUsable_Crawlspace_C_BossCryptCharacter_GetThrowAttack_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ThrowAttack != nullptr)
		*ThrowAttack = Parms.ThrowAttack;

}


// Function Usable_Crawlspace.Usable_Crawlspace_C.EnemyCommon_SkipDeathBlowReactionAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldSkip                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Crawlspace_C::EnemyCommon_SkipDeathBlowReactionAnimation(bool* ShouldSkip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Crawlspace_C", "EnemyCommon_SkipDeathBlowReactionAnimation");

	Params::AUsable_Crawlspace_C_EnemyCommon_SkipDeathBlowReactionAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ShouldSkip != nullptr)
		*ShouldSkip = Parms.ShouldSkip;

}


// Function Usable_Crawlspace.Usable_Crawlspace_C.EnemyCommon_GetHealth
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Health                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MaxHealth                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Crawlspace_C::EnemyCommon_GetHealth(float* Health, float* MaxHealth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Crawlspace_C", "EnemyCommon_GetHealth");

	Params::AUsable_Crawlspace_C_EnemyCommon_GetHealth_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Health != nullptr)
		*Health = Parms.Health;

	if (MaxHealth != nullptr)
		*MaxHealth = Parms.MaxHealth;

}


// Function Usable_Crawlspace.Usable_Crawlspace_C.SetCapText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void AUsable_Crawlspace_C::SetCapText(const class FString& Text, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Crawlspace_C", "SetCapText");

	Params::AUsable_Crawlspace_C_SetCapText_Params Parms{};

	Parms.Text = Text;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Crawlspace.Usable_Crawlspace_C.SwitchToExitCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Crawlspace_C::SwitchToExitCamera(const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Crawlspace_C", "SwitchToExitCamera");

	Params::AUsable_Crawlspace_C_SwitchToExitCamera_Params Parms{};

	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Crawlspace.Usable_Crawlspace_C.SetExitCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCineCameraComponent*        Cam                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Crawlspace_C::SetExitCamera(class UCineCameraComponent* Cam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Crawlspace_C", "SetExitCamera");

	Params::AUsable_Crawlspace_C_SetExitCamera_Params Parms{};

	Parms.Cam = Cam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Crawlspace.Usable_Crawlspace_C.GetCrawlspaceExitLocation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScaledCapsuleHalfHeight_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
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
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector AUsable_Crawlspace_C::GetCrawlspaceExitLocation(TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Crawlspace_C", "GetCrawlspaceExitLocation");

	Params::AUsable_Crawlspace_C_GetCrawlspaceExitLocation_Params Parms{};

	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue_1 = CallFunc_GetActorForwardVector_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_GetScaledCapsuleHalfHeight_ReturnValue = CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_2 = CallFunc_K2_GetComponentLocation_ReturnValue_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
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
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_3 = CallFunc_Add_VectorVector_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Usable_Crawlspace.Usable_Crawlspace_C.GetUseActionText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ActionText                                                       (Parm, OutParm)

void AUsable_Crawlspace_C::GetUseActionText(class FText* ActionText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Crawlspace_C", "GetUseActionText");

	Params::AUsable_Crawlspace_C_GetUseActionText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ActionText != nullptr)
		*ActionText = Parms.ActionText;

}


// Function Usable_Crawlspace.Usable_Crawlspace_C.OnActorUsed
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnActorUsed_Success                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AEnemyCharacter_C*>   CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// class AEnemyCharacter_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IEnemyCommonInterface_C>CallFunc_ForceReturn_self_CastInput                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Crawlspace_C::OnActorUsed(class APlayerController* Controller, bool* Success, bool CallFunc_OnActorUsed_Success, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AEnemyCharacter_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AEnemyCharacter_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, TScriptInterface<class IEnemyCommonInterface_C> CallFunc_ForceReturn_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Crawlspace_C", "OnActorUsed");

	Params::AUsable_Crawlspace_C_OnActorUsed_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_OnActorUsed_Success = CallFunc_OnActorUsed_Success;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_ForceReturn_self_CastInput = CallFunc_ForceReturn_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function Usable_Crawlspace.Usable_Crawlspace_C.CrawlSpaceEndTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AUsable_Crawlspace_C::CrawlSpaceEndTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Crawlspace_C", "CrawlSpaceEndTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Crawlspace.Usable_Crawlspace_C.CrawlSpaceEndTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AUsable_Crawlspace_C::CrawlSpaceEndTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Crawlspace_C", "CrawlSpaceEndTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Crawlspace.Usable_Crawlspace_C.ExitCamAnim__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AUsable_Crawlspace_C::ExitCamAnim__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Crawlspace_C", "ExitCamAnim__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Crawlspace.Usable_Crawlspace_C.ExitCamAnim__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AUsable_Crawlspace_C::ExitCamAnim__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Crawlspace_C", "ExitCamAnim__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Crawlspace.Usable_Crawlspace_C.Enemy_DeAggroPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Crawlspace_C::Enemy_DeAggroPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Crawlspace_C", "Enemy_DeAggroPlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Crawlspace.Usable_Crawlspace_C.Enemy_ReEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Crawlspace_C::Enemy_ReEnable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Crawlspace_C", "Enemy_ReEnable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Crawlspace.Usable_Crawlspace_C.Enemy_StoneSkinTimeline_Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Crawlspace_C::Enemy_StoneSkinTimeline_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Crawlspace_C", "Enemy_StoneSkinTimeline_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Crawlspace.Usable_Crawlspace_C.Enemy_StoneSkinTimeline_End
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Crawlspace_C::Enemy_StoneSkinTimeline_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Crawlspace_C", "Enemy_StoneSkinTimeline_End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Crawlspace.Usable_Crawlspace_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AUsable_Crawlspace_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Crawlspace_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Crawlspace.Usable_Crawlspace_C.EnemyCommon_StopPhysicalHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Crawlspace_C::EnemyCommon_StopPhysicalHit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Crawlspace_C", "EnemyCommon_StopPhysicalHit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Crawlspace.Usable_Crawlspace_C.ForceCharacterPastOverlappingMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Crawlspace_C::ForceCharacterPastOverlappingMesh(class APawn* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Crawlspace_C", "ForceCharacterPastOverlappingMesh");

	Params::AUsable_Crawlspace_C_ForceCharacterPastOverlappingMesh_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Crawlspace.Usable_Crawlspace_C.BossCrucix_SimLittleBro_Stop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Crawlspace_C::BossCrucix_SimLittleBro_Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Crawlspace_C", "BossCrucix_SimLittleBro_Stop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Crawlspace.Usable_Crawlspace_C.BossCrucix_SimLittleBro_Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Crawlspace_C::BossCrucix_SimLittleBro_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Crawlspace_C", "BossCrucix_SimLittleBro_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Crawlspace.Usable_Crawlspace_C.ForceReturn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Crawlspace_C::ForceReturn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Crawlspace_C", "ForceReturn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Crawlspace.Usable_Crawlspace_C.RenableMovementComponentAfterCrawl
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Crawlspace_C::RenableMovementComponentAfterCrawl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Crawlspace_C", "RenableMovementComponentAfterCrawl");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Crawlspace.Usable_Crawlspace_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AUsable_Crawlspace_C::BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Crawlspace_C", "BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::AUsable_Crawlspace_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Crawlspace.Usable_Crawlspace_C.ExecuteUbergraph_Usable_Crawlspace
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       K2Node_CustomEvent_Target                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetCrawlspaceExitLocation_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_PlayAnimMontage_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AUsable_Crawlspace_C::ExecuteUbergraph_Usable_Crawlspace(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Lerp_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class APawn* K2Node_CustomEvent_Target, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetCrawlspaceExitLocation_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, float CallFunc_PlayAnimMontage_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class AZero_Base_C* K2Node_DynamicCast_As0_Base_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanAND_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Crawlspace_C", "ExecuteUbergraph_Usable_Crawlspace");

	Params::AUsable_Crawlspace_C_ExecuteUbergraph_Usable_Crawlspace_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_Target = K2Node_CustomEvent_Target;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCrawlspaceExitLocation_ReturnValue = CallFunc_GetCrawlspaceExitLocation_ReturnValue;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.CallFunc_PlayAnimMontage_ReturnValue = CallFunc_PlayAnimMontage_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.K2Node_DynamicCast_As0_Base_1 = K2Node_DynamicCast_As0_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue_1 = CallFunc_GetPlayerCameraManager_ReturnValue_1;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}

}


