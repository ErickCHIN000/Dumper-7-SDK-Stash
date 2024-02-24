#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ProjectileBase.BP_ProjectileBase_C
// (Actor)

class UClass* ABP_ProjectileBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ProjectileBase_C");

	return Clss;
}


// BP_ProjectileBase_C BP_ProjectileBase.Default__BP_ProjectileBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ProjectileBase_C* ABP_ProjectileBase_C::GetDefaultObj()
{
	static class ABP_ProjectileBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ProjectileBase_C*>(ABP_ProjectileBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ProjectileBase.BP_ProjectileBase_C.GetMaximumRange
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             InitialHeight                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Range                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGravityZ_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_CalculateProjectileRange_Distance                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_CalculateProjectileRange_Gravity_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::GetMaximumRange(double InitialHeight, double* Range, double CallFunc_VSize_ReturnValue, float CallFunc_GetGravityZ_ReturnValue, double CallFunc_CalculateProjectileRange_Distance, double CallFunc_CalculateProjectileRange_Gravity_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "GetMaximumRange");

	Params::ABP_ProjectileBase_C_GetMaximumRange_Params Parms{};

	Parms.InitialHeight = InitialHeight;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_GetGravityZ_ReturnValue = CallFunc_GetGravityZ_ReturnValue;
	Parms.CallFunc_CalculateProjectileRange_Distance = CallFunc_CalculateProjectileRange_Distance;
	Parms.CallFunc_CalculateProjectileRange_Gravity_ImplicitCast = CallFunc_CalculateProjectileRange_Gravity_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Range != nullptr)
		*Range = Parms.Range;

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.IsReadyToTrace
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               IsReady                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::IsReadyToTrace(bool* IsReady)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "IsReadyToTrace");

	Params::ABP_ProjectileBase_C_IsReadyToTrace_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsReady != nullptr)
		*IsReady = Parms.IsReady;

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.ShouldHideOnFirstCollision
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldStopTrace                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::ShouldHideOnFirstCollision(bool* ShouldStopTrace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "ShouldHideOnFirstCollision");

	Params::ABP_ProjectileBase_C_ShouldHideOnFirstCollision_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ShouldStopTrace != nullptr)
		*ShouldStopTrace = Parms.ShouldStopTrace;

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.TraceOffset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  TraceOffset                                                      (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::TraceOffset(struct FTransform* TraceOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "TraceOffset");

	Params::ABP_ProjectileBase_C_TraceOffset_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TraceOffset != nullptr)
		*TraceOffset = std::move(Parms.TraceOffset);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.TraceIgnoreActors
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              TraceIgnoreActors                                                (Parm, OutParm)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ReferenceParm)

void ABP_ProjectileBase_C::TraceIgnoreActors(TArray<class AActor*>* TraceIgnoreActors, TArray<class AActor*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "TraceIgnoreActors");

	Params::ABP_ProjectileBase_C_TraceIgnoreActors_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (TraceIgnoreActors != nullptr)
		*TraceIgnoreActors = std::move(Parms.TraceIgnoreActors);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.TraceImpactDetected
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TimeToImpact                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitVelocity                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResult                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::TraceImpactDetected(double TimeToImpact, const struct FVector& HitVelocity, const struct FHitResult& HitResult, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "TraceImpactDetected");

	Params::ABP_ProjectileBase_C_TraceImpactDetected_Params Parms{};

	Parms.TimeToImpact = TimeToImpact;
	Parms.HitVelocity = HitVelocity;
	Parms.HitResult = HitResult;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.StartSoundPresentation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               K2Node_DynamicCast_AsAk_Audio_Event                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::StartSoundPresentation(bool CallFunc_IsDedicatedServer_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UAkAudioEvent* K2Node_DynamicCast_AsAk_Audio_Event, bool K2Node_DynamicCast_bSuccess, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "StartSoundPresentation");

	Params::ABP_ProjectileBase_C_StartSoundPresentation_Params Parms{};

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsAk_Audio_Event = K2Node_DynamicCast_AsAk_Audio_Event;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue = CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.OnFlightParticleLoaded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Asset                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              K2Node_DynamicCast_AsNiagara_System                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::OnFlightParticleLoaded(class UObject* Asset, class UNiagaraSystem* K2Node_DynamicCast_AsNiagara_System, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "OnFlightParticleLoaded");

	Params::ABP_ProjectileBase_C_OnFlightParticleLoaded_Params Parms{};

	Parms.Asset = Asset;
	Parms.K2Node_DynamicCast_AsNiagara_System = K2Node_DynamicCast_AsNiagara_System;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.PlayInAirParticles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IAssetLoaderProvider>CallFunc_LoadSingle_LoaderProvider_CastInput                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::PlayInAirParticles(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IAssetLoaderProvider> CallFunc_LoadSingle_LoaderProvider_CastInput, bool CallFunc_IsValidSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "PlayInAirParticles");

	Params::ABP_ProjectileBase_C_PlayInAirParticles_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_LoadSingle_LoaderProvider_CastInput = CallFunc_LoadSingle_LoaderProvider_CastInput;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.CacheSourceData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             K2Node_VariableSet_SD_ProjectileDamage_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::CacheSourceData(double K2Node_VariableSet_SD_ProjectileDamage_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "CacheSourceData");

	Params::ABP_ProjectileBase_C_CacheSourceData_Params Parms{};

	Parms.K2Node_VariableSet_SD_ProjectileDamage_ImplicitCast = K2Node_VariableSet_SD_ProjectileDamage_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.OnRep_StartingLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ProjectileBase_C::OnRep_StartingLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "OnRep_StartingLocation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.LaunchPresentation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ProjectileBase_C::LaunchPresentation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "LaunchPresentation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.CacheAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<TSoftObjectPtr<class UAkAudioEvent>>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)

void ABP_ProjectileBase_C::CacheAudio(FDelegateProperty_ Temp_delegate_Variable, TArray<TSoftObjectPtr<class UAkAudioEvent>>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "CacheAudio");

	Params::ABP_ProjectileBase_C_CacheAudio_Params Parms{};

	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.GetPMVelocity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     PMVelocity                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::GetPMVelocity(struct FVector* PMVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "GetPMVelocity");

	Params::ABP_ProjectileBase_C_GetPMVelocity_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PMVelocity != nullptr)
		*PMVelocity = std::move(Parms.PMVelocity);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.PlayTimeoutEffects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::PlayTimeoutEffects(const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "PlayTimeoutEffects");

	Params::ABP_ProjectileBase_C_PlayTimeoutEffects_Params Parms{};

	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.Is Projectile Instigator Locally Controlled
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLocallyControlled                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::Is_Projectile_Instigator_Locally_Controlled(bool* IsLocallyControlled, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "Is Projectile Instigator Locally Controlled");

	Params::ABP_ProjectileBase_C_Is_Projectile_Instigator_Locally_Controlled_Params Parms{};

	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsLocallyControlled != nullptr)
		*IsLocallyControlled = Parms.IsLocallyControlled;

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.Get Source Tag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                ImpactTag                                                        (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::Get_Source_Tag(struct FGameplayTag* ImpactTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "Get Source Tag");

	Params::ABP_ProjectileBase_C_Get_Source_Tag_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ImpactTag != nullptr)
		*ImpactTag = std::move(Parms.ImpactTag);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.CacheProjectileData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UScriptStruct*>       K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAffinityTableCellDataWrapper>CallFunc_QueryTable_OutMemoryPtrs                                (ReferenceParm)
// bool                               CallFunc_QueryTable_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_RangedAbilityResponses   CallFunc_GetTableCellData_OutData                                (HasGetValueTypeHash)
// bool                               CallFunc_IsValidRowHandle_IsValid                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Temp_struct_Variable_1                                           (ConstParm, ContainsInstancedReference)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FProjectileData             CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::CacheProjectileData(TArray<class UScriptStruct*>& K2Node_MakeArray_Array, bool CallFunc_IsDedicatedServer_ReturnValue, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, const struct FS_RangedAbilityResponses& CallFunc_GetTableCellData_OutData, bool CallFunc_IsValidRowHandle_IsValid, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayCueParameters& Temp_struct_Variable_1, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FProjectileData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "CacheProjectileData");

	Params::ABP_ProjectileBase_C_CacheProjectileData_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_QueryTable_OutMemoryPtrs = CallFunc_QueryTable_OutMemoryPtrs;
	Parms.CallFunc_QueryTable_ReturnValue = CallFunc_QueryTable_ReturnValue;
	Parms.CallFunc_GetTableCellData_OutData = CallFunc_GetTableCellData_OutData;
	Parms.CallFunc_IsValidRowHandle_IsValid = CallFunc_IsValidRowHandle_IsValid;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.Get Element Tag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                ElementTag                                                       (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::Get_Element_Tag(struct FGameplayTag* ElementTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "Get Element Tag");

	Params::ABP_ProjectileBase_C_Get_Element_Tag_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ElementTag != nullptr)
		*ElementTag = std::move(Parms.ElementTag);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.Get Impact Tag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                ImpactTag                                                        (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::Get_Impact_Tag(struct FGameplayTag* ImpactTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "Get Impact Tag");

	Params::ABP_ProjectileBase_C_Get_Impact_Tag_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ImpactTag != nullptr)
		*ImpactTag = std::move(Parms.ImpactTag);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.OnRep_ProjectileHidden
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ProjectileBase_C::OnRep_ProjectileHidden()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "OnRep_ProjectileHidden");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.OnRep_ProjectileStop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ProjectileBase_C::OnRep_ProjectileStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "OnRep_ProjectileStop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.OnRep_PMVelocity
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ProjectileBase_C::OnRep_PMVelocity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "OnRep_PMVelocity");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.OnRep_PMMaxSpeed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              K2Node_VariableSet_MaxSpeed_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::OnRep_PMMaxSpeed(float K2Node_VariableSet_MaxSpeed_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "OnRep_PMMaxSpeed");

	Params::ABP_ProjectileBase_C_OnRep_PMMaxSpeed_Params Parms{};

	Parms.K2Node_VariableSet_MaxSpeed_ImplicitCast = K2Node_VariableSet_MaxSpeed_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.GetMaxFlightDistance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             MaxFlightDistance                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::GetMaxFlightDistance(double* MaxFlightDistance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "GetMaxFlightDistance");

	Params::ABP_ProjectileBase_C_GetMaxFlightDistance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MaxFlightDistance != nullptr)
		*MaxFlightDistance = Parms.MaxFlightDistance;

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.GetMaxFlightLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     MaxFlightLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::GetMaxFlightLocation(struct FVector* MaxFlightLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "GetMaxFlightLocation");

	Params::ABP_ProjectileBase_C_GetMaxFlightLocation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MaxFlightLocation != nullptr)
		*MaxFlightLocation = std::move(Parms.MaxFlightLocation);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.GetStartingLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     StartingLocation                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::GetStartingLocation(struct FVector* StartingLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "GetStartingLocation");

	Params::ABP_ProjectileBase_C_GetStartingLocation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (StartingLocation != nullptr)
		*StartingLocation = std::move(Parms.StartingLocation);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.HasExceededMaxFlightDistance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_ProjectileBase_C::HasExceededMaxFlightDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "HasExceededMaxFlightDistance");

	Params::ABP_ProjectileBase_C_HasExceededMaxFlightDistance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.GetMaxFlightDistanceProgress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             FlightDistanceProgress                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::GetMaxFlightDistanceProgress(double* FlightDistanceProgress, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "GetMaxFlightDistanceProgress");

	Params::ABP_ProjectileBase_C_GetMaxFlightDistanceProgress_Params Parms{};

	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FlightDistanceProgress != nullptr)
		*FlightDistanceProgress = Parms.FlightDistanceProgress;

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.IsLaunchAbilityActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsActive                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAbilityActive_bIsAbilityActive                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::IsLaunchAbilityActive(bool* IsActive, bool CallFunc_IsAbilityActive_bIsAbilityActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "IsLaunchAbilityActive");

	Params::ABP_ProjectileBase_C_IsLaunchAbilityActive_Params Parms{};

	Parms.CallFunc_IsAbilityActive_bIsAbilityActive = CallFunc_IsAbilityActive_bIsAbilityActive;

	UObject::ProcessEvent(Func, &Parms);

	if (IsActive != nullptr)
		*IsActive = Parms.IsActive;

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.IsFlightAbilityActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsActive                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAbilityActive_bIsAbilityActive                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::IsFlightAbilityActive(bool* IsActive, bool CallFunc_IsAbilityActive_bIsAbilityActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "IsFlightAbilityActive");

	Params::ABP_ProjectileBase_C_IsFlightAbilityActive_Params Parms{};

	Parms.CallFunc_IsAbilityActive_bIsAbilityActive = CallFunc_IsAbilityActive_bIsAbilityActive;

	UObject::ProcessEvent(Func, &Parms);

	if (IsActive != nullptr)
		*IsActive = Parms.IsActive;

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.IsPayloadAbilityActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsActive                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAbilityActive_bIsAbilityActive                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::IsPayloadAbilityActive(bool* IsActive, bool CallFunc_IsAbilityActive_bIsAbilityActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "IsPayloadAbilityActive");

	Params::ABP_ProjectileBase_C_IsPayloadAbilityActive_Params Parms{};

	Parms.CallFunc_IsAbilityActive_bIsAbilityActive = CallFunc_IsAbilityActive_bIsAbilityActive;

	UObject::ProcessEvent(Func, &Parms);

	if (IsActive != nullptr)
		*IsActive = Parms.IsActive;

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.ServiceLifeTimeCheck
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::ServiceLifeTimeCheck(double CallFunc_GetGameTimeInSeconds_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "ServiceLifeTimeCheck");

	Params::ABP_ProjectileBase_C_ServiceLifeTimeCheck_Params Parms{};

	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.StopProjectile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::StopProjectile(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "StopProjectile");

	Params::ABP_ProjectileBase_C_StopProjectile_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.SetMaxSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewMaxSpeed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::SetMaxSpeed(double NewMaxSpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "SetMaxSpeed");

	Params::ABP_ProjectileBase_C_SetMaxSpeed_Params Parms{};

	Parms.NewMaxSpeed = NewMaxSpeed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.SetVelocity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     NewVelocity                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::SetVelocity(const struct FVector& NewVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "SetVelocity");

	Params::ABP_ProjectileBase_C_SetVelocity_Params Parms{};

	Parms.NewVelocity = NewVelocity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.SetProjectileCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::SetProjectileCollision(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "SetProjectileCollision");

	Params::ABP_ProjectileBase_C_SetProjectileCollision_Params Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.SetHomingEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HomingEnabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::SetHomingEnabled(bool HomingEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "SetHomingEnabled");

	Params::ABP_ProjectileBase_C_SetHomingEnabled_Params Parms{};

	Parms.HomingEnabled = HomingEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.GetTraceImpactDetectionData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FHitResult                  TraceHitResult                                                   (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// double                             TraceTimeToImpact                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TraceHitVelocity                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::GetTraceImpactDetectionData(struct FHitResult* TraceHitResult, double* TraceTimeToImpact, struct FVector* TraceHitVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "GetTraceImpactDetectionData");

	Params::ABP_ProjectileBase_C_GetTraceImpactDetectionData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TraceHitResult != nullptr)
		*TraceHitResult = std::move(Parms.TraceHitResult);

	if (TraceTimeToImpact != nullptr)
		*TraceTimeToImpact = Parms.TraceTimeToImpact;

	if (TraceHitVelocity != nullptr)
		*TraceHitVelocity = std::move(Parms.TraceHitVelocity);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.HandleServiceHomingPassedTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ProjectileBase_C::HandleServiceHomingPassedTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "HandleServiceHomingPassedTarget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.HandleServiceMaxFlightDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ProjectileBase_C::HandleServiceMaxFlightDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "HandleServiceMaxFlightDistance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.ValidatePayloadConditions
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               CanActivatePayload                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::ValidatePayloadConditions(bool* CanActivatePayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "ValidatePayloadConditions");

	Params::ABP_ProjectileBase_C_ValidatePayloadConditions_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CanActivatePayload != nullptr)
		*CanActivatePayload = Parms.CanActivatePayload;

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.ActivateProjectileAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ProjectileAbility                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetClassDisplayName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryActivateAbilityByClass_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::ActivateProjectileAbility(class UClass* ProjectileAbility, const class FString& CallFunc_GetClassDisplayName_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_TryActivateAbilityByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "ActivateProjectileAbility");

	Params::ABP_ProjectileBase_C_ActivateProjectileAbility_Params Parms{};

	Parms.ProjectileAbility = ProjectileAbility;
	Parms.CallFunc_GetClassDisplayName_ReturnValue = CallFunc_GetClassDisplayName_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_TryActivateAbilityByClass_ReturnValue = CallFunc_TryActivateAbilityByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.GrantProjectileAbilities
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilitySpecDef     CallFunc_CreateAbilitySpecDefFromClass_ReturnValue               (None)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilitySpecDef     CallFunc_CreateAbilitySpecDefFromClass_ReturnValue_1             (None)
// bool                               CallFunc_IsValidClass_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilitySpecHandle  CallFunc_GiveAbility_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilitySpecDef     CallFunc_CreateAbilitySpecDefFromClass_ReturnValue_2             (None)
// bool                               CallFunc_IsValidClass_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilitySpecHandle  CallFunc_GiveAbility_ReturnValue_1                               (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilitySpecHandle  CallFunc_GiveAbility_ReturnValue_2                               (NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::GrantProjectileAbilities(const struct FGameplayAbilitySpecDef& CallFunc_CreateAbilitySpecDefFromClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, const struct FGameplayAbilitySpecDef& CallFunc_CreateAbilitySpecDefFromClass_ReturnValue_1, bool CallFunc_IsValidClass_ReturnValue_1, const struct FGameplayAbilitySpecHandle& CallFunc_GiveAbility_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayAbilitySpecDef& CallFunc_CreateAbilitySpecDefFromClass_ReturnValue_2, bool CallFunc_IsValidClass_ReturnValue_2, const struct FGameplayAbilitySpecHandle& CallFunc_GiveAbility_ReturnValue_1, const struct FGameplayAbilitySpecHandle& CallFunc_GiveAbility_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "GrantProjectileAbilities");

	Params::ABP_ProjectileBase_C_GrantProjectileAbilities_Params Parms{};

	Parms.CallFunc_CreateAbilitySpecDefFromClass_ReturnValue = CallFunc_CreateAbilitySpecDefFromClass_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_CreateAbilitySpecDefFromClass_ReturnValue_1 = CallFunc_CreateAbilitySpecDefFromClass_ReturnValue_1;
	Parms.CallFunc_IsValidClass_ReturnValue_1 = CallFunc_IsValidClass_ReturnValue_1;
	Parms.CallFunc_GiveAbility_ReturnValue = CallFunc_GiveAbility_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateAbilitySpecDefFromClass_ReturnValue_2 = CallFunc_CreateAbilitySpecDefFromClass_ReturnValue_2;
	Parms.CallFunc_IsValidClass_ReturnValue_2 = CallFunc_IsValidClass_ReturnValue_2;
	Parms.CallFunc_GiveAbility_ReturnValue_1 = CallFunc_GiveAbility_ReturnValue_1;
	Parms.CallFunc_GiveAbility_ReturnValue_2 = CallFunc_GiveAbility_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.HandleCleanup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ProjectileBase_C::HandleCleanup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "HandleCleanup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.HandleAwaitPayload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ProjectileBase_C::HandleAwaitPayload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "HandleAwaitPayload");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.ValidateImpactDetection
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ValidTraceImpact                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_GetTraceImpactDetectionData_TraceHitResult              (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// double                             CallFunc_GetTraceImpactDetectionData_TraceTimeToImpact           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetTraceImpactDetectionData_TraceHitVelocity            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::ValidateImpactDetection(bool* ValidTraceImpact, const struct FHitResult& CallFunc_GetTraceImpactDetectionData_TraceHitResult, double CallFunc_GetTraceImpactDetectionData_TraceTimeToImpact, const struct FVector& CallFunc_GetTraceImpactDetectionData_TraceHitVelocity, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "ValidateImpactDetection");

	Params::ABP_ProjectileBase_C_ValidateImpactDetection_Params Parms{};

	Parms.CallFunc_GetTraceImpactDetectionData_TraceHitResult = CallFunc_GetTraceImpactDetectionData_TraceHitResult;
	Parms.CallFunc_GetTraceImpactDetectionData_TraceTimeToImpact = CallFunc_GetTraceImpactDetectionData_TraceTimeToImpact;
	Parms.CallFunc_GetTraceImpactDetectionData_TraceHitVelocity = CallFunc_GetTraceImpactDetectionData_TraceHitVelocity;
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
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ValidTraceImpact != nullptr)
		*ValidTraceImpact = Parms.ValidTraceImpact;

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.StateChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_ProjectileState       NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::StateChanged(enum class E_ProjectileState& NewState, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "StateChanged");

	Params::ABP_ProjectileBase_C_StateChanged_Params Parms{};

	Parms.NewState = NewState;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.OnRep_ProjectileCollisionEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ProjectileBase_C::OnRep_ProjectileCollisionEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "OnRep_ProjectileCollisionEnabled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.OnRep_State
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ProjectileBase_C::OnRep_State()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "OnRep_State");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.SetServiceLifeTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::SetServiceLifeTime(bool Enable, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "SetServiceLifeTime");

	Params::ABP_ProjectileBase_C_SetServiceLifeTime_Params Parms{};

	Parms.Enable = Enable;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.Set Service Passed Homing Target
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::Set_Service_Passed_Homing_Target(bool Enable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "Set Service Passed Homing Target");

	Params::ABP_ProjectileBase_C_Set_Service_Passed_Homing_Target_Params Parms{};

	Parms.Enable = Enable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.SetServiceMaxFlightDistance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::SetServiceMaxFlightDistance(bool Enable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "SetServiceMaxFlightDistance");

	Params::ABP_ProjectileBase_C_SetServiceMaxFlightDistance_Params Parms{};

	Parms.Enable = Enable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.GetState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class E_ProjectileState       ProjectileState                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::GetState(enum class E_ProjectileState* ProjectileState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "GetState");

	Params::ABP_ProjectileBase_C_GetState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ProjectileState != nullptr)
		*ProjectileState = Parms.ProjectileState;

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.GetSourceData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_ProjectileSourceData     SourceData                                                       (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)

void ABP_ProjectileBase_C::GetSourceData(struct FS_ProjectileSourceData* SourceData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "GetSourceData");

	Params::ABP_ProjectileBase_C_GetSourceData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SourceData != nullptr)
		*SourceData = std::move(Parms.SourceData);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.CheckPayloadComplete
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsPayloadAbilityActive_IsActive                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::CheckPayloadComplete(bool CallFunc_IsPayloadAbilityActive_IsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "CheckPayloadComplete");

	Params::ABP_ProjectileBase_C_CheckPayloadComplete_Params Parms{};

	Parms.CallFunc_IsPayloadAbilityActive_IsActive = CallFunc_IsPayloadAbilityActive_IsActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.SetState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_ProjectileState       State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::SetState(enum class E_ProjectileState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "SetState");

	Params::ABP_ProjectileBase_C_SetState_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.ProjectileLog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      LogMessage                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ENWXLogLevel            LogLevel                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::ProjectileLog(const class FString& LogMessage, enum class ENWXLogLevel LogLevel, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "ProjectileLog");

	Params::ABP_ProjectileBase_C_ProjectileLog_Params Parms{};

	Parms.LogMessage = LogMessage;
	Parms.LogLevel = LogLevel;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.ServiceHomingPassedTargetCheck
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Vector_Distance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::ServiceHomingPassedTargetCheck(const struct FTransform& CallFunc_GetTransform_ReturnValue, bool Temp_bool_Variable, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasMatchingGameplayTag_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, double CallFunc_Vector_Distance_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "ServiceHomingPassedTargetCheck");

	Params::ABP_ProjectileBase_C_ServiceHomingPassedTargetCheck_Params Parms{};

	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.ServiceMaxFlightDistanceCheck
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Vector_Distance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::ServiceMaxFlightDistanceCheck(bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, double CallFunc_Vector_Distance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "ServiceMaxFlightDistanceCheck");

	Params::ABP_ProjectileBase_C_ServiceMaxFlightDistanceCheck_Params Parms{};

	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.LaunchEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::LaunchEffect(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "LaunchEffect");

	Params::ABP_ProjectileBase_C_LaunchEffect_Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue_1 = CallFunc_Normal_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue = CallFunc_GreaterGreater_VectorRotator_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.SetProjectileVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::SetProjectileVisibility(bool IsVisible, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "SetProjectileVisibility");

	Params::ABP_ProjectileBase_C_SetProjectileVisibility_Params Parms{};

	Parms.IsVisible = IsVisible;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.Hook to Item Table
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData_Projectile        CallFunc_TryGetItemDataProjectile_OutData                        (None)
// enum class EGetResult              CallFunc_TryGetItemDataProjectile_Branches                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::Hook_to_Item_Table(const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData_Projectile& CallFunc_TryGetItemDataProjectile_OutData, enum class EGetResult CallFunc_TryGetItemDataProjectile_Branches, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "Hook to Item Table");

	Params::ABP_ProjectileBase_C_Hook_to_Item_Table_Params Parms{};

	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_TryGetItemDataProjectile_OutData = CallFunc_TryGetItemDataProjectile_OutData;
	Parms.CallFunc_TryGetItemDataProjectile_Branches = CallFunc_TryGetItemDataProjectile_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.TransitionToProxy
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     HitVelocity                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             TimeToImpact                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResult                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FTransform                  TransitionTransformL                                             (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      HitActorL                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DetectedImpact_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::TransitionToProxy(const struct FVector& HitVelocity, double TimeToImpact, struct FHitResult& HitResult, const struct FTransform& TransitionTransformL, class AActor* HitActorL, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_DetectedImpact_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "TransitionToProxy");

	Params::ABP_ProjectileBase_C_TransitionToProxy_Params Parms{};

	Parms.HitVelocity = HitVelocity;
	Parms.TimeToImpact = TimeToImpact;
	Parms.HitResult = HitResult;
	Parms.TransitionTransformL = TransitionTransformL;
	Parms.HitActorL = HitActorL;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
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
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_DetectedImpact_bSuccess = CallFunc_DetectedImpact_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_K2_GetComponentScale_ReturnValue = CallFunc_K2_GetComponentScale_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.HandlePayload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ProjectileBase_C::HandlePayload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "HandlePayload");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.HandleImpactDetected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ProjectileBase_C::HandleImpactDetected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "HandleImpactDetected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.HandleDisarm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_StopTrace_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::HandleDisarm(bool CallFunc_StopTrace_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "HandleDisarm");

	Params::ABP_ProjectileBase_C_HandleDisarm_Params Parms{};

	Parms.CallFunc_StopTrace_bSuccess = CallFunc_StopTrace_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.HandleArm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ProjectileBase_C::HandleArm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "HandleArm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.HandleLaunched
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::HandleLaunched(bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "HandleLaunched");

	Params::ABP_ProjectileBase_C_HandleLaunched_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.Cleanup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_StopTrace_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetLifeSpan_InLifespan_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::Cleanup(bool CallFunc_StopTrace_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_SetLifeSpan_InLifespan_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "Cleanup");

	Params::ABP_ProjectileBase_C_Cleanup_Params Parms{};

	Parms.CallFunc_StopTrace_bSuccess = CallFunc_StopTrace_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SetLifeSpan_InLifespan_ImplicitCast = CallFunc_SetLifeSpan_InLifespan_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.Payload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_ValidatePayloadConditions_CanActivatePayload            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::Payload(bool CallFunc_ValidatePayloadConditions_CanActivatePayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "Payload");

	Params::ABP_ProjectileBase_C_Payload_Params Parms{};

	Parms.CallFunc_ValidatePayloadConditions_CanActivatePayload = CallFunc_ValidatePayloadConditions_CanActivatePayload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.ImpactCommit
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ProjectileBase_C::ImpactCommit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "ImpactCommit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.ImpactDetected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TimeToImpact                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitVelocity                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResult                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ValidateImpactDetection_ValidTraceImpact                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::ImpactDetected(double TimeToImpact, const struct FVector& HitVelocity, const struct FHitResult& HitResult, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_ValidateImpactDetection_ValidTraceImpact, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "ImpactDetected");

	Params::ABP_ProjectileBase_C_ImpactDetected_Params Parms{};

	Parms.TimeToImpact = TimeToImpact;
	Parms.HitVelocity = HitVelocity;
	Parms.HitResult = HitResult;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_ValidateImpactDetection_ValidTraceImpact = CallFunc_ValidateImpactDetection_ValidTraceImpact;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.Disarm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ProjectileBase_C::Disarm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "Disarm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.Arm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ProjectileBase_C::Arm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "Arm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.Launch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     LaunchVelocity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::Launch(const struct FVector& LaunchVelocity, double CallFunc_VSize_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "Launch");

	Params::ABP_ProjectileBase_C_Launch_Params Parms{};

	Parms.LaunchVelocity = LaunchVelocity;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ProjectileTraceComponent_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_ProjectileLifetime_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::Initialize(int32 Temp_int_Array_Index_Variable, bool CallFunc_IsServer_ReturnValue, class UBP_ProjectileTraceComponent_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double K2Node_VariableSet_ProjectileLifetime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "Initialize");

	Params::ABP_ProjectileBase_C_Initialize_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_VariableSet_ProjectileLifetime_ImplicitCast = K2Node_VariableSet_ProjectileLifetime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::UserConstructionScript(class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "UserConstructionScript");

	Params::ABP_ProjectileBase_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ProjectileBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.LaunchProjectile
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Velocity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::LaunchProjectile(const struct FVector& Velocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "LaunchProjectile");

	Params::ABP_ProjectileBase_C_LaunchProjectile_Params Parms{};

	Parms.Velocity = Velocity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.GetImpactDecal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ProjectileBase_C::GetImpactDecal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "GetImpactDecal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.LatentLaunchProjectile
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ProjectileBase_C*        Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::LatentLaunchProjectile(class ABP_ProjectileBase_C* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "LatentLaunchProjectile");

	Params::ABP_ProjectileBase_C_LatentLaunchProjectile_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.GetImpactParticle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ProjectileBase_C::GetImpactParticle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "GetImpactParticle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.ReceiveAuthorityGained
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_ProjectileBase_C::ReceiveAuthorityGained()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "ReceiveAuthorityGained");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.RegisterWhenTraceReady
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_ProjectileTraceComponent_C*Registree                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::RegisterWhenTraceReady(class UBP_ProjectileTraceComponent_C* Registree)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "RegisterWhenTraceReady");

	Params::ABP_ProjectileBase_C_RegisterWhenTraceReady_Params Parms{};

	Parms.Registree = Registree;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.ExecuteUbergraph_BP_ProjectileBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Velocity                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ProjectileBase_C*        K2Node_CustomEvent_Projectile                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_ProjectileTraceComponent_C*K2Node_Event_Registree                                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::ExecuteUbergraph_BP_ProjectileBase(int32 EntryPoint, const struct FVector& K2Node_CustomEvent_Velocity, class ABP_ProjectileBase_C* K2Node_CustomEvent_Projectile, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBP_ProjectileTraceComponent_C* K2Node_Event_Registree, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "ExecuteUbergraph_BP_ProjectileBase");

	Params::ABP_ProjectileBase_C_ExecuteUbergraph_BP_ProjectileBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Velocity = K2Node_CustomEvent_Velocity;
	Parms.K2Node_CustomEvent_Projectile = K2Node_CustomEvent_Projectile;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_Registree = K2Node_Event_Registree;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.OnProjectilePassedHomingTarget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  ProjectileTransform                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::OnProjectilePassedHomingTarget__DelegateSignature(const struct FTransform& ProjectileTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "OnProjectilePassedHomingTarget__DelegateSignature");

	Params::ABP_ProjectileBase_C_OnProjectilePassedHomingTarget__DelegateSignature_Params Parms{};

	Parms.ProjectileTransform = ProjectileTransform;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.OnProjectileMaxTravelDistanceReached__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ProjectileBase_C::OnProjectileMaxTravelDistanceReached__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "OnProjectileMaxTravelDistanceReached__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.OnProjectileCleanup__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ProjectileBase_C*        Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::OnProjectileCleanup__DelegateSignature(class ABP_ProjectileBase_C* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "OnProjectileCleanup__DelegateSignature");

	Params::ABP_ProjectileBase_C_OnProjectileCleanup__DelegateSignature_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.OnProjectileAwaitPayload__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ProjectileBase_C*        Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::OnProjectileAwaitPayload__DelegateSignature(class ABP_ProjectileBase_C* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "OnProjectileAwaitPayload__DelegateSignature");

	Params::ABP_ProjectileBase_C_OnProjectileAwaitPayload__DelegateSignature_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.OnProjectileDisarmed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ProjectileBase_C*        Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::OnProjectileDisarmed__DelegateSignature(class ABP_ProjectileBase_C* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "OnProjectileDisarmed__DelegateSignature");

	Params::ABP_ProjectileBase_C_OnProjectileDisarmed__DelegateSignature_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.OnProjectileArmed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ProjectileBase_C*        Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::OnProjectileArmed__DelegateSignature(class ABP_ProjectileBase_C* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "OnProjectileArmed__DelegateSignature");

	Params::ABP_ProjectileBase_C_OnProjectileArmed__DelegateSignature_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.OnProjectileInitialized__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ProjectileBase_C*        Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::OnProjectileInitialized__DelegateSignature(class ABP_ProjectileBase_C* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "OnProjectileInitialized__DelegateSignature");

	Params::ABP_ProjectileBase_C_OnProjectileInitialized__DelegateSignature_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.OnProjectilePayloadActivated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ProjectileBase_C*        Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::OnProjectilePayloadActivated__DelegateSignature(class ABP_ProjectileBase_C* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "OnProjectilePayloadActivated__DelegateSignature");

	Params::ABP_ProjectileBase_C_OnProjectilePayloadActivated__DelegateSignature_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.OnProjectileLaunch__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ProjectileBase_C*        Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::OnProjectileLaunch__DelegateSignature(class ABP_ProjectileBase_C* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "OnProjectileLaunch__DelegateSignature");

	Params::ABP_ProjectileBase_C_OnProjectileLaunch__DelegateSignature_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileBase.BP_ProjectileBase_C.OnProjectileImpactDetected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ProjectileBase_C*        Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileBase_C::OnProjectileImpactDetected__DelegateSignature(class ABP_ProjectileBase_C* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ProjectileBase_C", "OnProjectileImpactDetected__DelegateSignature");

	Params::ABP_ProjectileBase_C_OnProjectileImpactDetected__DelegateSignature_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}

}


