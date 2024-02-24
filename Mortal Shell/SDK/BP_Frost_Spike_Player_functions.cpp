#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Frost_Spike_Player.BP_Frost_Spike_Player_C
// (Actor)

class UClass* ABP_Frost_Spike_Player_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Frost_Spike_Player_C");

	return Clss;
}


// BP_Frost_Spike_Player_C BP_Frost_Spike_Player.Default__BP_Frost_Spike_Player_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Frost_Spike_Player_C* ABP_Frost_Spike_Player_C::GetDefaultObj()
{
	static class ABP_Frost_Spike_Player_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Frost_Spike_Player_C*>(ABP_Frost_Spike_Player_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Frost_Spike_Player.BP_Frost_Spike_Player_C.ShouldIncreaseDropItemChance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IEnemyCommonInterface_C>CallFunc_EnemyCommon_GetHealth_self_CastInput                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_EnemyCommon_GetHealth_Health                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_EnemyCommon_GetHealth_MaxHealth                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Frost_Spike_Player_C::ShouldIncreaseDropItemChance(bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IEnemyCommonInterface_C> CallFunc_EnemyCommon_GetHealth_self_CastInput, float CallFunc_EnemyCommon_GetHealth_Health, float CallFunc_EnemyCommon_GetHealth_MaxHealth, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frost_Spike_Player_C", "ShouldIncreaseDropItemChance");

	Params::ABP_Frost_Spike_Player_C_ShouldIncreaseDropItemChance_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EnemyCommon_GetHealth_self_CastInput = CallFunc_EnemyCommon_GetHealth_self_CastInput;
	Parms.CallFunc_EnemyCommon_GetHealth_Health = CallFunc_EnemyCommon_GetHealth_Health;
	Parms.CallFunc_EnemyCommon_GetHealth_MaxHealth = CallFunc_EnemyCommon_GetHealth_MaxHealth;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frost_Spike_Player.BP_Frost_Spike_Player_C.SetDecalOpacityAndScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Alpha                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Frost_Spike_Player_C::SetDecalOpacityAndScale(float Alpha, float CallFunc_Lerp_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frost_Spike_Player_C", "SetDecalOpacityAndScale");

	Params::ABP_Frost_Spike_Player_C_SetDecalOpacityAndScale_Params Parms{};

	Parms.Alpha = Alpha;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frost_Spike_Player.BP_Frost_Spike_Player_C.Decal_CreateMID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Frost_Spike_Player_C::Decal_CreateMID(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frost_Spike_Player_C", "Decal_CreateMID");

	Params::ABP_Frost_Spike_Player_C_Decal_CreateMID_Params Parms{};

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frost_Spike_Player.BP_Frost_Spike_Player_C.Player_Unfreeze
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Frost_Spike_Player_C::Player_Unfreeze(class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frost_Spike_Player_C", "Player_Unfreeze");

	Params::ABP_Frost_Spike_Player_C_Player_Unfreeze_Params Parms{};

	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frost_Spike_Player.BP_Frost_Spike_Player_C.Player_Freeze
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICryptBossInterface_C>K2Node_DynamicCast_AsCrypt_Boss_Interface                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Frost_Spike_Player_C::Player_Freeze(class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class ICryptBossInterface_C> K2Node_DynamicCast_AsCrypt_Boss_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frost_Spike_Player_C", "Player_Freeze");

	Params::ABP_Frost_Spike_Player_C_Player_Freeze_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsCrypt_Boss_Interface = K2Node_DynamicCast_AsCrypt_Boss_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frost_Spike_Player.BP_Frost_Spike_Player_C.ApplyDamageToPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_ApplyDamage_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Frost_Spike_Player_C::ApplyDamageToPlayer(float CallFunc_ApplyDamage_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frost_Spike_Player_C", "ApplyDamageToPlayer");

	Params::ABP_Frost_Spike_Player_C_ApplyDamageToPlayer_Params Parms{};

	Parms.CallFunc_ApplyDamage_ReturnValue = CallFunc_ApplyDamage_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frost_Spike_Player.BP_Frost_Spike_Player_C.SetSpikeZLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewLocation_Z                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Frost_Spike_Player_C::SetSpikeZLocation(float NewLocation_Z, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frost_Spike_Player_C", "SetSpikeZLocation");

	Params::ABP_Frost_Spike_Player_C_SetSpikeZLocation_Params Parms{};

	Parms.NewLocation_Z = NewLocation_Z;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frost_Spike_Player.BP_Frost_Spike_Player_C.Sound_IceSpike
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Frost_Spike_Player_C::Sound_IceSpike(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frost_Spike_Player_C", "Sound_IceSpike");

	Params::ABP_Frost_Spike_Player_C_Sound_IceSpike_Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frost_Spike_Player.BP_Frost_Spike_Player_C.SetRandomScaleZ
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Frost_Spike_Player_C::SetRandomScaleZ(float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frost_Spike_Player_C", "SetRandomScaleZ");

	Params::ABP_Frost_Spike_Player_C_SetRandomScaleZ_Params Parms{};

	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_K2_GetComponentScale_ReturnValue = CallFunc_K2_GetComponentScale_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frost_Spike_Player.BP_Frost_Spike_Player_C.InitializeSpikeAOEParticle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam                               (IsPlainOldData, NoDestructor)

void ABP_Frost_Spike_Player_C::InitializeSpikeAOEParticle(const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frost_Spike_Player_C", "InitializeSpikeAOEParticle");

	Params::ABP_Frost_Spike_Player_C_InitializeSpikeAOEParticle_Params Parms{};

	Parms.K2Node_MakeStruct_ParticleSysParam = K2Node_MakeStruct_ParticleSysParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frost_Spike_Player.BP_Frost_Spike_Player_C.DebugFrostSpike
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      String                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)

void ABP_Frost_Spike_Player_C::DebugFrostSpike(const class FString& String, float CallFunc_GetGameTimeInSeconds_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frost_Spike_Player_C", "DebugFrostSpike");

	Params::ABP_Frost_Spike_Player_C_DebugFrostSpike_Params Parms{};

	Parms.String = String;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frost_Spike_Player.BP_Frost_Spike_Player_C.AlreadyHit?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_Frost_Spike_Player_C::AlreadyHit_(bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frost_Spike_Player_C", "AlreadyHit?");

	Params::ABP_Frost_Spike_Player_C_AlreadyHit__Params Parms{};

	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Frost_Spike_Player.BP_Frost_Spike_Player_C.IgnoreSuper?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ComponentHasTag_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_Frost_Spike_Player_C::IgnoreSuper_(bool CallFunc_ComponentHasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frost_Spike_Player_C", "IgnoreSuper?");

	Params::ABP_Frost_Spike_Player_C_IgnoreSuper__Params Parms{};

	Parms.CallFunc_ComponentHasTag_ReturnValue = CallFunc_ComponentHasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Frost_Spike_Player.BP_Frost_Spike_Player_C.Timeline_Spike_Raise__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Frost_Spike_Player_C::Timeline_Spike_Raise__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frost_Spike_Player_C", "Timeline_Spike_Raise__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frost_Spike_Player.BP_Frost_Spike_Player_C.Timeline_Spike_Raise__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Frost_Spike_Player_C::Timeline_Spike_Raise__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frost_Spike_Player_C", "Timeline_Spike_Raise__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frost_Spike_Player.BP_Frost_Spike_Player_C.Timeline_Spike_Lower__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Frost_Spike_Player_C::Timeline_Spike_Lower__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frost_Spike_Player_C", "Timeline_Spike_Lower__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frost_Spike_Player.BP_Frost_Spike_Player_C.Timeline_Spike_Lower__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Frost_Spike_Player_C::Timeline_Spike_Lower__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frost_Spike_Player_C", "Timeline_Spike_Lower__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frost_Spike_Player.BP_Frost_Spike_Player_C.Timeline_Decal_Opacity__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Frost_Spike_Player_C::Timeline_Decal_Opacity__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frost_Spike_Player_C", "Timeline_Decal_Opacity__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frost_Spike_Player.BP_Frost_Spike_Player_C.Timeline_Decal_Opacity__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Frost_Spike_Player_C::Timeline_Decal_Opacity__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frost_Spike_Player_C", "Timeline_Decal_Opacity__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frost_Spike_Player.BP_Frost_Spike_Player_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Frost_Spike_Player_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frost_Spike_Player_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frost_Spike_Player.BP_Frost_Spike_Player_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Frost_Spike_Player_C::BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frost_Spike_Player_C", "BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::ABP_Frost_Spike_Player_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frost_Spike_Player.BP_Frost_Spike_Player_C.UnFreezePlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frost_Spike_Player_C::UnFreezePlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frost_Spike_Player_C", "UnFreezePlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frost_Spike_Player.BP_Frost_Spike_Player_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Frost_Spike_Player_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frost_Spike_Player_C", "BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	Params::ABP_Frost_Spike_Player_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frost_Spike_Player.BP_Frost_Spike_Player_C.TryEnemyCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frost_Spike_Player_C::TryEnemyCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frost_Spike_Player_C", "TryEnemyCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frost_Spike_Player.BP_Frost_Spike_Player_C.Spike_Raise_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frost_Spike_Player_C::Spike_Raise_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frost_Spike_Player_C", "Spike_Raise_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frost_Spike_Player.BP_Frost_Spike_Player_C.Spike_Lower_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frost_Spike_Player_C::Spike_Lower_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frost_Spike_Player_C", "Spike_Lower_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frost_Spike_Player.BP_Frost_Spike_Player_C.Spike_Decal_Opacity
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frost_Spike_Player_C::Spike_Decal_Opacity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frost_Spike_Player_C", "Spike_Decal_Opacity");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frost_Spike_Player.BP_Frost_Spike_Player_C.ExecuteUbergraph_BP_Frost_Spike_Player
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IgnoreSuper__ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AlreadyHit__ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult_1                         (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ICryptBossInterface_C>K2Node_DynamicCast_AsCrypt_Boss_Interface                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IEnemyCommonInterface_C>K2Node_DynamicCast_AsEnemy_Common_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BossCryptCharacter_GetThrowAttack_ThrowAttack           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_ApplyDamage_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Frost_Spike_Player_C::ExecuteUbergraph_BP_Frost_Spike_Player(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IgnoreSuper__ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_AlreadyHit__ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_4, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep_1, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class AActor* CallFunc_GetOwner_ReturnValue, bool Temp_bool_IsClosed_Variable, TScriptInterface<class ICryptBossInterface_C> K2Node_DynamicCast_AsCrypt_Boss_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess_1, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IEnemyCommonInterface_C> K2Node_DynamicCast_AsEnemy_Common_Interface, bool K2Node_DynamicCast_bSuccess_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_BossCryptCharacter_GetThrowAttack_ThrowAttack, float CallFunc_ApplyDamage_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frost_Spike_Player_C", "ExecuteUbergraph_BP_Frost_Spike_Player");

	Params::ABP_Frost_Spike_Player_C_ExecuteUbergraph_BP_Frost_Spike_Player_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_IgnoreSuper__ReturnValue = CallFunc_IgnoreSuper__ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_AlreadyHit__ReturnValue = CallFunc_AlreadyHit__ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent_1 = K2Node_ComponentBoundEvent_OverlappedComponent_1;
	Parms.K2Node_ComponentBoundEvent_OtherActor_1 = K2Node_ComponentBoundEvent_OtherActor_1;
	Parms.K2Node_ComponentBoundEvent_OtherComp_1 = K2Node_ComponentBoundEvent_OtherComp_1;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex_1 = K2Node_ComponentBoundEvent_OtherBodyIndex_1;
	Parms.K2Node_ComponentBoundEvent_bFromSweep_1 = K2Node_ComponentBoundEvent_bFromSweep_1;
	Parms.K2Node_ComponentBoundEvent_SweepResult_1 = K2Node_ComponentBoundEvent_SweepResult_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_DynamicCast_AsCrypt_Boss_Interface = K2Node_DynamicCast_AsCrypt_Boss_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsEnemy_Character = K2Node_DynamicCast_AsEnemy_Character;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsEnemy_Common_Interface = K2Node_DynamicCast_AsEnemy_Common_Interface;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_BossCryptCharacter_GetThrowAttack_ThrowAttack = CallFunc_BossCryptCharacter_GetThrowAttack_ThrowAttack;
	Parms.CallFunc_ApplyDamage_ReturnValue = CallFunc_ApplyDamage_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_6 = CallFunc_Not_PreBool_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

}

}


