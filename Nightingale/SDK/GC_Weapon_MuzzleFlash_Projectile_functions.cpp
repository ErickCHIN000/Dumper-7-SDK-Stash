#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Weapon_MuzzleFlash_Projectile.GC_Weapon_MuzzleFlash_Projectile_C
// (None)

class UClass* UGC_Weapon_MuzzleFlash_Projectile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Weapon_MuzzleFlash_Projectile_C");

	return Clss;
}


// GC_Weapon_MuzzleFlash_Projectile_C GC_Weapon_MuzzleFlash_Projectile.Default__GC_Weapon_MuzzleFlash_Projectile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_Weapon_MuzzleFlash_Projectile_C* UGC_Weapon_MuzzleFlash_Projectile_C::GetDefaultObj()
{
	static class UGC_Weapon_MuzzleFlash_Projectile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_Weapon_MuzzleFlash_Projectile_C*>(UGC_Weapon_MuzzleFlash_Projectile_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GC_Weapon_MuzzleFlash_Projectile.GC_Weapon_MuzzleFlash_Projectile_C.HandleLaunchSoundLoaded
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*               LoadedEvent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGC_Weapon_MuzzleFlash_Projectile_C::HandleLaunchSoundLoaded(class UAkAudioEvent* LoadedEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Weapon_MuzzleFlash_Projectile_C", "HandleLaunchSoundLoaded");

	Params::UGC_Weapon_MuzzleFlash_Projectile_C_HandleLaunchSoundLoaded_Params Parms{};

	Parms.LoadedEvent = LoadedEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GC_Weapon_MuzzleFlash_Projectile.GC_Weapon_MuzzleFlash_Projectile_C.PlayLaunchSound
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_ProjectileBase_C*        Projectile                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class ABP_ProjectileBase_C*        K2Node_DynamicCast_AsBP_Projectile_Base                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGC_Weapon_MuzzleFlash_Projectile_C::PlayLaunchSound(class UObject* MyTarget, class ABP_ProjectileBase_C* Projectile, class ABP_ProjectileBase_C* K2Node_DynamicCast_AsBP_Projectile_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Weapon_MuzzleFlash_Projectile_C", "PlayLaunchSound");

	Params::UGC_Weapon_MuzzleFlash_Projectile_C_PlayLaunchSound_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Projectile = Projectile;
	Parms.K2Node_DynamicCast_AsBP_Projectile_Base = K2Node_DynamicCast_AsBP_Projectile_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GC_Weapon_MuzzleFlash_Projectile.GC_Weapon_MuzzleFlash_Projectile_C.OnExecute
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CachedReturnValue                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnExecute_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGC_Weapon_MuzzleFlash_Projectile_C::OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CachedReturnValue, bool CallFunc_OnExecute_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Weapon_MuzzleFlash_Projectile_C", "OnExecute");

	Params::UGC_Weapon_MuzzleFlash_Projectile_C_OnExecute_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.CachedReturnValue = CachedReturnValue;
	Parms.CallFunc_OnExecute_ReturnValue = CallFunc_OnExecute_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GC_Weapon_MuzzleFlash_Projectile.GC_Weapon_MuzzleFlash_Projectile_C.SpawnMuzzleFlash
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             AttachToComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FS_RangedAbilityResponses   RangedAbilityResponse                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                               FirstPerson                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ProjectileBase_C*        K2Node_DynamicCast_AsBP_Projectile_Base                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetStartingLocation_StartingLocation                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromZ_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGC_Weapon_MuzzleFlash_Projectile_C::SpawnMuzzleFlash(class UObject* MyTarget, class USceneComponent* AttachToComponent, struct FS_RangedAbilityResponses& RangedAbilityResponse, bool FirstPerson, class ABP_ProjectileBase_C* K2Node_DynamicCast_AsBP_Projectile_Base, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetStartingLocation_StartingLocation, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Weapon_MuzzleFlash_Projectile_C", "SpawnMuzzleFlash");

	Params::UGC_Weapon_MuzzleFlash_Projectile_C_SpawnMuzzleFlash_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.AttachToComponent = AttachToComponent;
	Parms.RangedAbilityResponse = RangedAbilityResponse;
	Parms.FirstPerson = FirstPerson;
	Parms.K2Node_DynamicCast_AsBP_Projectile_Base = K2Node_DynamicCast_AsBP_Projectile_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetStartingLocation_StartingLocation = CallFunc_GetStartingLocation_StartingLocation;
	Parms.CallFunc_MakeRotFromZ_ReturnValue = CallFunc_MakeRotFromZ_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GC_Weapon_MuzzleFlash_Projectile.GC_Weapon_MuzzleFlash_Projectile_C.GetMuzzleFlashParameters
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsFirstPerson                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShouldExecute                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             AttachToComponent                                                (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FS_RangedAbilityResponses   RangedAbilityResponse                                            (Parm, OutParm, HasGetValueTypeHash)
// class ABP_ProjectileBase_C*        K2Node_DynamicCast_AsBP_Projectile_Base                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGC_Weapon_MuzzleFlash_Projectile_C::GetMuzzleFlashParameters(class AActor* Target, bool IsFirstPerson, bool* ShouldExecute, class USceneComponent** AttachToComponent, struct FS_RangedAbilityResponses* RangedAbilityResponse, class ABP_ProjectileBase_C* K2Node_DynamicCast_AsBP_Projectile_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Weapon_MuzzleFlash_Projectile_C", "GetMuzzleFlashParameters");

	Params::UGC_Weapon_MuzzleFlash_Projectile_C_GetMuzzleFlashParameters_Params Parms{};

	Parms.Target = Target;
	Parms.IsFirstPerson = IsFirstPerson;
	Parms.K2Node_DynamicCast_AsBP_Projectile_Base = K2Node_DynamicCast_AsBP_Projectile_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldExecute != nullptr)
		*ShouldExecute = Parms.ShouldExecute;

	if (AttachToComponent != nullptr)
		*AttachToComponent = Parms.AttachToComponent;

	if (RangedAbilityResponse != nullptr)
		*RangedAbilityResponse = std::move(Parms.RangedAbilityResponse);

}


// Function GC_Weapon_MuzzleFlash_Projectile.GC_Weapon_MuzzleFlash_Projectile_C.IsFirstPerson
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsFirstPerson                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_DynamicCast_AsCharacter                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGC_Weapon_MuzzleFlash_Projectile_C::IsFirstPerson(class AActor* MyTarget, bool* IsFirstPerson, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Weapon_MuzzleFlash_Projectile_C", "IsFirstPerson");

	Params::UGC_Weapon_MuzzleFlash_Projectile_C_IsFirstPerson_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.K2Node_DynamicCast_AsCharacter = K2Node_DynamicCast_AsCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsFirstPerson != nullptr)
		*IsFirstPerson = Parms.IsFirstPerson;

}

}


