#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C
// (None)

class UClass* UBP_ControllerRumbleComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ControllerRumbleComponent_C");

	return Clss;
}


// BP_ControllerRumbleComponent_C BP_ControllerRumbleComponent.Default__BP_ControllerRumbleComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ControllerRumbleComponent_C* UBP_ControllerRumbleComponent_C::GetDefaultObj()
{
	static class UBP_ControllerRumbleComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ControllerRumbleComponent_C*>(UBP_ControllerRumbleComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.Get Local Controller
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AGGPlayerController*         AsGGPlayer_Controller                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         K2Node_DynamicCast_AsGGPlayer_Controller                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ControllerRumbleComponent_C::Get_Local_Controller(class AGGPlayerController** AsGGPlayer_Controller, class AActor* CallFunc_GetOwner_ReturnValue, class AGGPlayerController* K2Node_DynamicCast_AsGGPlayer_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerRumbleComponent_C", "Get Local Controller");

	Params::UBP_ControllerRumbleComponent_C_Get_Local_Controller_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsGGPlayer_Controller = K2Node_DynamicCast_AsGGPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsGGPlayer_Controller != nullptr)
		*AsGGPlayer_Controller = Parms.AsGGPlayer_Controller;

}


// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.WhileCurrentVehicleIsSpeedBoosting
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AGGVehicle*                  Vehicle                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsDriver                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Speed                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ControllerRumbleComponent_C::WhileCurrentVehicleIsSpeedBoosting(class AGGVehicle* Vehicle, bool bIsDriver, float Speed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerRumbleComponent_C", "WhileCurrentVehicleIsSpeedBoosting");

	Params::UBP_ControllerRumbleComponent_C_WhileCurrentVehicleIsSpeedBoosting_Params Parms{};

	Parms.Vehicle = Vehicle;
	Parms.bIsDriver = bIsDriver;
	Parms.Speed = Speed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.OnCurrentVehicleHit
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AGGVehicle*                  Vehicle                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComponent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ImpactSize                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OtherImpactSize                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResult                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_ControllerRumbleComponent_C::OnCurrentVehicleHit(class AGGVehicle* Vehicle, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, float ImpactSize, float OtherImpactSize, const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerRumbleComponent_C", "OnCurrentVehicleHit");

	Params::UBP_ControllerRumbleComponent_C_OnCurrentVehicleHit_Params Parms{};

	Parms.Vehicle = Vehicle;
	Parms.OtherActor = OtherActor;
	Parms.OtherComponent = OtherComponent;
	Parms.ImpactSize = ImpactSize;
	Parms.OtherImpactSize = OtherImpactSize;
	Parms.HitResult = HitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.OnLocalGoatRagdollImpact
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Speed                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_ControllerRumbleComponent_C::OnLocalGoatRagdollImpact(class AGGGoat* Goat, float Speed, struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerRumbleComponent_C", "OnLocalGoatRagdollImpact");

	Params::UBP_ControllerRumbleComponent_C_OnLocalGoatRagdollImpact_Params Parms{};

	Parms.Goat = Goat;
	Parms.Speed = Speed;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.WhileLocalGoatIsVehicleBraking
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AGGGoat*                     LocalGoat                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGVehicle*                  Vehicle                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsHandBraking                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ControllerRumbleComponent_C::WhileLocalGoatIsVehicleBraking(class AGGGoat* LocalGoat, class AGGVehicle* Vehicle, bool bIsHandBraking)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerRumbleComponent_C", "WhileLocalGoatIsVehicleBraking");

	Params::UBP_ControllerRumbleComponent_C_WhileLocalGoatIsVehicleBraking_Params Parms{};

	Parms.LocalGoat = LocalGoat;
	Parms.Vehicle = Vehicle;
	Parms.bIsHandBraking = bIsHandBraking;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.OnLocalGoatBounced
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AGGCharacter*                Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGBouncyStaticMeshComponent*BouncyComponent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ControllerRumbleComponent_C::OnLocalGoatBounced(class AGGCharacter* Character, class UGGBouncyStaticMeshComponent* BouncyComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerRumbleComponent_C", "OnLocalGoatBounced");

	Params::UBP_ControllerRumbleComponent_C_OnLocalGoatBounced_Params Parms{};

	Parms.Character = Character;
	Parms.BouncyComponent = BouncyComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.OnLocalGoatHeadbutting
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class AGGGoat*                     HeadbuttingGoat                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bHitSomething                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              HeadbuttedActors                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bIsChargeHeadbutt                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EStatusEffectTypes>ActiveStatusEffects                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_ControllerRumbleComponent_C::OnLocalGoatHeadbutting(class AGGGoat* HeadbuttingGoat, bool bHitSomething, TArray<class AActor*>& HeadbuttedActors, bool bIsChargeHeadbutt, TArray<enum class EStatusEffectTypes>& ActiveStatusEffects)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerRumbleComponent_C", "OnLocalGoatHeadbutting");

	Params::UBP_ControllerRumbleComponent_C_OnLocalGoatHeadbutting_Params Parms{};

	Parms.HeadbuttingGoat = HeadbuttingGoat;
	Parms.bHitSomething = bHitSomething;
	Parms.HeadbuttedActors = HeadbuttedActors;
	Parms.bIsChargeHeadbutt = bIsChargeHeadbutt;
	Parms.ActiveStatusEffects = ActiveStatusEffects;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.OnLocalGoatBackkicking
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class AGGGoat*                     BackkickingGoat                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bHitSomething                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              KickedActors                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<enum class EStatusEffectTypes>ActiveStatusEffects                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_ControllerRumbleComponent_C::OnLocalGoatBackkicking(class AGGGoat* BackkickingGoat, bool bHitSomething, TArray<class AActor*>& KickedActors, TArray<enum class EStatusEffectTypes>& ActiveStatusEffects)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerRumbleComponent_C", "OnLocalGoatBackkicking");

	Params::UBP_ControllerRumbleComponent_C_OnLocalGoatBackkicking_Params Parms{};

	Parms.BackkickingGoat = BackkickingGoat;
	Parms.bHitSomething = bHitSomething;
	Parms.KickedActors = KickedActors;
	Parms.ActiveStatusEffects = ActiveStatusEffects;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.OnLocalGoatNeckRagdollImpact
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Speed                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_ControllerRumbleComponent_C::OnLocalGoatNeckRagdollImpact(class AGGGoat* Goat, float Speed, struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerRumbleComponent_C", "OnLocalGoatNeckRagdollImpact");

	Params::UBP_ControllerRumbleComponent_C_OnLocalGoatNeckRagdollImpact_Params Parms{};

	Parms.Goat = Goat;
	Parms.Speed = Speed;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ControllerRumbleComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerRumbleComponent_C", "ReceiveTick");

	Params::UBP_ControllerRumbleComponent_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.Play rumble for random gear customization
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ControllerRumbleComponent_C::Play_rumble_for_random_gear_customization()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerRumbleComponent_C", "Play rumble for random gear customization");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.OnLocalGoatBouncyJumped
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AGGGoat*                     LocalGoat                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PreviousJumpCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ControllerRumbleComponent_C::OnLocalGoatBouncyJumped(class AGGGoat* LocalGoat, int32 PreviousJumpCount, const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerRumbleComponent_C", "OnLocalGoatBouncyJumped");

	Params::UBP_ControllerRumbleComponent_C_OnLocalGoatBouncyJumped_Params Parms{};

	Parms.LocalGoat = LocalGoat;
	Parms.PreviousJumpCount = PreviousJumpCount;
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.Play goat gear pickup rumble
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ControllerRumbleComponent_C::Play_goat_gear_pickup_rumble()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerRumbleComponent_C", "Play goat gear pickup rumble");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.WhileLocalGoatIsGrinding
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AGGGoat*                     LocalGoat                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsHyperspeedGrinding                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGGrindableSplineComponent* GrindSpline                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ControllerRumbleComponent_C::WhileLocalGoatIsGrinding(class AGGGoat* LocalGoat, bool bIsHyperspeedGrinding, class UGGGrindableSplineComponent* GrindSpline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerRumbleComponent_C", "WhileLocalGoatIsGrinding");

	Params::UBP_ControllerRumbleComponent_C_WhileLocalGoatIsGrinding_Params Parms{};

	Parms.LocalGoat = LocalGoat;
	Parms.bIsHyperspeedGrinding = bIsHyperspeedGrinding;
	Parms.GrindSpline = GrindSpline;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.OnLocalGoatStartHyperspeedGrind
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UGGGrindableSplineComponent* GrindSpline                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ControllerRumbleComponent_C::OnLocalGoatStartHyperspeedGrind(class UGGGrindableSplineComponent* GrindSpline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerRumbleComponent_C", "OnLocalGoatStartHyperspeedGrind");

	Params::UBP_ControllerRumbleComponent_C_OnLocalGoatStartHyperspeedGrind_Params Parms{};

	Parms.GrindSpline = GrindSpline;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.OnLocalGoatGetStatusEffect
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      GoatActor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGStatusEffectManager*      Manager                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGStatusEffectBase*         NewStatusEffect                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStatusEffectTypes      Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ControllerRumbleComponent_C::OnLocalGoatGetStatusEffect(class AActor* GoatActor, class UGGStatusEffectManager* Manager, class AGGStatusEffectBase* NewStatusEffect, enum class EStatusEffectTypes Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerRumbleComponent_C", "OnLocalGoatGetStatusEffect");

	Params::UBP_ControllerRumbleComponent_C_OnLocalGoatGetStatusEffect_Params Parms{};

	Parms.GoatActor = GoatActor;
	Parms.Manager = Manager;
	Parms.NewStatusEffect = NewStatusEffect;
	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.OnLocalGoatLickedActor
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AGGGoat*                     GoatLicking                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      LickedActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ControllerRumbleComponent_C::OnLocalGoatLickedActor(class AGGGoat* GoatLicking, class AActor* LickedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerRumbleComponent_C", "OnLocalGoatLickedActor");

	Params::UBP_ControllerRumbleComponent_C_OnLocalGoatLickedActor_Params Parms{};

	Parms.GoatLicking = GoatLicking;
	Parms.LickedActor = LickedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.OnVehicleExploded
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AGGVehicle*                  Vehicle                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ControllerRumbleComponent_C::OnVehicleExploded(class AGGVehicle* Vehicle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerRumbleComponent_C", "OnVehicleExploded");

	Params::UBP_ControllerRumbleComponent_C_OnVehicleExploded_Params Parms{};

	Parms.Vehicle = Vehicle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.OnExplosiveActorExploded
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AGGExplosiveActor*           ExplosiveActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ControllerRumbleComponent_C::OnExplosiveActorExploded(class AGGExplosiveActor* ExplosiveActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerRumbleComponent_C", "OnExplosiveActorExploded");

	Params::UBP_ControllerRumbleComponent_C_OnExplosiveActorExploded_Params Parms{};

	Parms.ExplosiveActor = ExplosiveActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.OnFireballImpact
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AGGFireballProjectile*       Fireball                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ControllerRumbleComponent_C::OnFireballImpact(class AGGFireballProjectile* Fireball)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerRumbleComponent_C", "OnFireballImpact");

	Params::UBP_ControllerRumbleComponent_C_OnFireballImpact_Params Parms{};

	Parms.Fireball = Fireball;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.OnGoatPerfectLanding
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AGGGoat*                     LandedGoat                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ControllerRumbleComponent_C::OnGoatPerfectLanding(class AGGGoat* LandedGoat, const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerRumbleComponent_C", "OnGoatPerfectLanding");

	Params::UBP_ControllerRumbleComponent_C_OnGoatPerfectLanding_Params Parms{};

	Parms.LandedGoat = LandedGoat;
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.OnGoatPerfectJump
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AGGGoat*                     JumpingGoat                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ControllerRumbleComponent_C::OnGoatPerfectJump(class AGGGoat* JumpingGoat, const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerRumbleComponent_C", "OnGoatPerfectJump");

	Params::UBP_ControllerRumbleComponent_C_OnGoatPerfectJump_Params Parms{};

	Parms.JumpingGoat = JumpingGoat;
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.OnLocalGoatHeadbutted
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     HeadbuttedObject                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     HeadbuttingGoat                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ControllerRumbleComponent_C::OnLocalGoatHeadbutted(class UObject* HeadbuttedObject, class AGGGoat* HeadbuttingGoat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerRumbleComponent_C", "OnLocalGoatHeadbutted");

	Params::UBP_ControllerRumbleComponent_C_OnLocalGoatHeadbutted_Params Parms{};

	Parms.HeadbuttedObject = HeadbuttedObject;
	Parms.HeadbuttingGoat = HeadbuttingGoat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.OnLocalGoatTakeDamage
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      DamagedGoat                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ControllerRumbleComponent_C::OnLocalGoatTakeDamage(class AActor* DamagedGoat, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerRumbleComponent_C", "OnLocalGoatTakeDamage");

	Params::UBP_ControllerRumbleComponent_C_OnLocalGoatTakeDamage_Params Parms{};

	Parms.DamagedGoat = DamagedGoat;
	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.ExecuteUbergraph_BP_ControllerRumbleComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamagedGoat                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 K2Node_Event_DamageType                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_Event_InstigatedBy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// class UGGDamageType_Base*          K2Node_DynamicCast_AsGGDamage_Type_Base                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable_1                                           (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_2                                           (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_3                                           (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_4                                           (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_5                                           (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable_6                                           (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_7                                           (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable_8                                           (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_9                                           (NoDestructor, HasGetValueTypeHash)
// enum class EStatusEffectTypes      Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStatusEffectTypes      Temp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStatusEffectTypes      Temp_byte_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStatusEffectTypes      Temp_byte_Variable_3                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable_10                                          (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_11                                          (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable_12                                          (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_13                                          (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable_14                                          (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable_15                                          (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_16                                          (NoDestructor, HasGetValueTypeHash)
// enum class ETypeOfDamage           Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_17                                          (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_18                                          (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_19                                          (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_20                                          (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_21                                          (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_22                                          (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_23                                          (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_24                                          (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_25                                          (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_26                                          (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_27                                          (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_28                                          (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Select_Default                                            (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_29                                          (NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_Get_Local_Controller_AsGGPlayer_Controller              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_Get_Local_Controller_AsGGPlayer_Controller_1            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_Get_Local_Controller_AsGGPlayer_Controller_2            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_Get_Local_Controller_AsGGPlayer_Controller_3            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class AGGVehicle*                  K2Node_Event_Vehicle_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsDriver                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Speed_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGVehicle*                  K2Node_Event_Vehicle_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OtherActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_Event_OtherComponent                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ImpactSize                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_OtherImpactSize                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitResult                                           (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AGGGoat*                     K2Node_Event_Goat_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Speed_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_Hit_1                                               (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AGGGoat*                     K2Node_Event_LocalGoat_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGVehicle*                  K2Node_Event_Vehicle_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsHandBraking                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                K2Node_Select_Default_1                                          (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Select_Default_2                                          (NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetGGPlayerController_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGCharacter*                K2Node_Event_Character                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGBouncyStaticMeshComponent*K2Node_Event_BouncyComponent                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_Event_HeadbuttingGoat_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bHitSomething_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              K2Node_Event_HeadbuttedActors                                    (ConstParm, ReferenceParm)
// bool                               K2Node_Event_bIsChargeHeadbutt                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EStatusEffectTypes>K2Node_Event_ActiveStatusEffects_1                               (ConstParm, ReferenceParm)
// class AGGGoat*                     K2Node_Event_BackkickingGoat                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bHitSomething                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              K2Node_Event_KickedActors                                        (ConstParm, ReferenceParm)
// TArray<enum class EStatusEffectTypes>K2Node_Event_ActiveStatusEffects                                 (ConstParm, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGPlayerController*         CallFunc_GetGGPlayerController_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetGGPlayerController_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetGGPlayerController_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                K2Node_Select_Default_3                                          (NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetGGPlayerController_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetGGPlayerController_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetGGPlayerController_ReturnValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_30                                          (NoDestructor, HasGetValueTypeHash)
// enum class EStatusEffectTypes      Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_Get_Local_Controller_AsGGPlayer_Controller_4            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_Get_Local_Controller_AsGGPlayer_Controller_5            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_31                                          (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_32                                          (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGPlayerController*         CallFunc_Get_Local_Controller_AsGGPlayer_Controller_6            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_Get_Local_Controller_AsGGPlayer_Controller_7            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_33                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGGoat*                     K2Node_Event_Goat                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Speed                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_Hit                                                 (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimeSinceStartChargingHeadbutt_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     CallFunc_GetLocalPossessedGoat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                K2Node_Select_Default_4                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsChargingHeadbutt_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetTimeSinceStartChargingHeadbutt_ReturnValue_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Select_Default_5                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGPlayerController*         CallFunc_Get_Local_Controller_AsGGPlayer_Controller_8            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGGoat*                     K2Node_Event_LocalGoat_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_PreviousJumpCount                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_Location_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalGoatDriving_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGGoat*                     K2Node_Event_LocalGoat                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsHyperspeedGrinding                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGGrindableSplineComponent* K2Node_Event_GrindSpline_1                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGGrindableSplineComponent* K2Node_Event_GrindSpline                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetGGPlayerController_ReturnValue_7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Select_Default_6                                          (NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_GoatActor                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGStatusEffectManager*      K2Node_Event_Manager                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGStatusEffectBase*         K2Node_Event_NewStatusEffect                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStatusEffectTypes      K2Node_Event_Type                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Select_Default_7                                          (NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_Event_GoatLicking                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_LickedActor                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetActorsMass_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetActorsMass_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                K2Node_Select_Default_8                                          (NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetGGPlayerController_ReturnValue_8                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Select_Default_9                                          (NoDestructor, HasGetValueTypeHash)
// class AGGVehicle*                  K2Node_Event_Vehicle                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGExplosiveActor*           K2Node_Event_ExplosiveActor                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGForceFeedbackComponent*   CallFunc_SpawnForceFeedbackAtLocation_ReturnValue                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGFireballProjectile*       K2Node_Event_Fireball                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGForceFeedbackComponent*   CallFunc_SpawnForceFeedbackAtLocation_ReturnValue_1              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_Event_LandedGoat                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_Location_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGForceFeedbackComponent*   CallFunc_SpawnForceFeedbackAtLocation_ReturnValue_2              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGForceFeedbackComponent*   CallFunc_SpawnForceFeedbackAtLocation_ReturnValue_3              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_Event_JumpingGoat                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_Location                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_HeadbuttedObject                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_Event_HeadbuttingGoat                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGForceFeedbackComponent*   CallFunc_SpawnForceFeedbackAtLocation_ReturnValue_4              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ControllerRumbleComponent_C::ExecuteUbergraph_BP_ControllerRumbleComponent(int32 EntryPoint, class AActor* K2Node_Event_DamagedGoat, float K2Node_Event_Damage, class UDamageType* K2Node_Event_DamageType, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayTag& Temp_struct_Variable, class UGGDamageType_Base* K2Node_DynamicCast_AsGGDamage_Type_Base, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTag& Temp_struct_Variable_1, const struct FGameplayTag& Temp_struct_Variable_2, const struct FGameplayTag& Temp_struct_Variable_3, const struct FGameplayTag& Temp_struct_Variable_4, const struct FGameplayTag& Temp_struct_Variable_5, bool Temp_bool_Variable, const struct FGameplayTag& Temp_struct_Variable_6, const struct FGameplayTag& Temp_struct_Variable_7, bool Temp_bool_Variable_1, const struct FGameplayTag& Temp_struct_Variable_8, const struct FGameplayTag& Temp_struct_Variable_9, enum class EStatusEffectTypes Temp_byte_Variable, enum class EStatusEffectTypes Temp_byte_Variable_1, enum class EStatusEffectTypes Temp_byte_Variable_2, enum class EStatusEffectTypes Temp_byte_Variable_3, bool Temp_bool_Variable_2, const struct FGameplayTag& Temp_struct_Variable_10, const struct FGameplayTag& Temp_struct_Variable_11, bool Temp_bool_Variable_3, const struct FGameplayTag& Temp_struct_Variable_12, const struct FGameplayTag& Temp_struct_Variable_13, bool Temp_bool_Variable_4, const struct FGameplayTag& Temp_struct_Variable_14, bool Temp_bool_Variable_5, const struct FGameplayTag& Temp_struct_Variable_15, const struct FGameplayTag& Temp_struct_Variable_16, enum class ETypeOfDamage Temp_byte_Variable_4, const struct FGameplayTag& Temp_struct_Variable_17, const struct FGameplayTag& Temp_struct_Variable_18, const struct FGameplayTag& Temp_struct_Variable_19, const struct FGameplayTag& Temp_struct_Variable_20, const struct FGameplayTag& Temp_struct_Variable_21, const struct FGameplayTag& Temp_struct_Variable_22, const struct FGameplayTag& Temp_struct_Variable_23, const struct FGameplayTag& Temp_struct_Variable_24, const struct FGameplayTag& Temp_struct_Variable_25, const struct FGameplayTag& Temp_struct_Variable_26, const struct FGameplayTag& Temp_struct_Variable_27, const struct FGameplayTag& Temp_struct_Variable_28, const struct FGameplayTag& K2Node_Select_Default, const struct FGameplayTag& Temp_struct_Variable_29, class AGGPlayerController* CallFunc_Get_Local_Controller_AsGGPlayer_Controller, class AGGPlayerController* CallFunc_Get_Local_Controller_AsGGPlayer_Controller_1, class AGGPlayerController* CallFunc_Get_Local_Controller_AsGGPlayer_Controller_2, class AGGPlayerController* CallFunc_Get_Local_Controller_AsGGPlayer_Controller_3, class AGGVehicle* K2Node_Event_Vehicle_3, bool K2Node_Event_bIsDriver, float K2Node_Event_Speed_2, class AGGVehicle* K2Node_Event_Vehicle_2, class AActor* K2Node_Event_OtherActor, class UPrimitiveComponent* K2Node_Event_OtherComponent, float K2Node_Event_ImpactSize, float K2Node_Event_OtherImpactSize, const struct FHitResult& K2Node_Event_HitResult, class AGGGoat* K2Node_Event_Goat_1, float K2Node_Event_Speed_1, const struct FHitResult& K2Node_Event_Hit_1, class AGGGoat* K2Node_Event_LocalGoat_2, class AGGVehicle* K2Node_Event_Vehicle_1, bool K2Node_Event_bIsHandBraking, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FGameplayTag& K2Node_Select_Default_1, const struct FGameplayTag& K2Node_Select_Default_2, class AGGPlayerController* CallFunc_GetGGPlayerController_ReturnValue, class AGGCharacter* K2Node_Event_Character, class UGGBouncyStaticMeshComponent* K2Node_Event_BouncyComponent, class AGGGoat* K2Node_Event_HeadbuttingGoat_1, bool K2Node_Event_bHitSomething_1, TArray<class AActor*>& K2Node_Event_HeadbuttedActors, bool K2Node_Event_bIsChargeHeadbutt, TArray<enum class EStatusEffectTypes>& K2Node_Event_ActiveStatusEffects_1, class AGGGoat* K2Node_Event_BackkickingGoat, bool K2Node_Event_bHitSomething, TArray<class AActor*>& K2Node_Event_KickedActors, TArray<enum class EStatusEffectTypes>& K2Node_Event_ActiveStatusEffects, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_2, class AGGPlayerController* CallFunc_GetGGPlayerController_ReturnValue_1, class AGGPlayerController* CallFunc_GetGGPlayerController_ReturnValue_2, class AGGPlayerController* CallFunc_GetGGPlayerController_ReturnValue_3, bool CallFunc_Array_Contains_ReturnValue_3, const struct FGameplayTag& K2Node_Select_Default_3, class AGGPlayerController* CallFunc_GetGGPlayerController_ReturnValue_4, class AGGPlayerController* CallFunc_GetGGPlayerController_ReturnValue_5, class AGGPlayerController* CallFunc_GetGGPlayerController_ReturnValue_6, const struct FGameplayTag& Temp_struct_Variable_30, enum class EStatusEffectTypes Temp_byte_Variable_5, class AGGPlayerController* CallFunc_Get_Local_Controller_AsGGPlayer_Controller_4, class AGGPlayerController* CallFunc_Get_Local_Controller_AsGGPlayer_Controller_5, const struct FGameplayTag& Temp_struct_Variable_31, const struct FGameplayTag& Temp_struct_Variable_32, bool Temp_bool_Variable_6, class AGGPlayerController* CallFunc_Get_Local_Controller_AsGGPlayer_Controller_6, class AGGPlayerController* CallFunc_Get_Local_Controller_AsGGPlayer_Controller_7, const struct FGameplayTag& Temp_struct_Variable_33, bool CallFunc_Greater_FloatFloat_ReturnValue_1, class AGGGoat* K2Node_Event_Goat, float K2Node_Event_Speed, const struct FHitResult& K2Node_Event_Hit, float K2Node_Event_DeltaSeconds, float CallFunc_GetTimeSinceStartChargingHeadbutt_ReturnValue, class AGGGoat* CallFunc_GetLocalPossessedGoat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTag& K2Node_Select_Default_4, bool CallFunc_IsChargingHeadbutt_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_3, float CallFunc_GetTimeSinceStartChargingHeadbutt_ReturnValue_1, const struct FGameplayTag& K2Node_Select_Default_5, bool CallFunc_Greater_FloatFloat_ReturnValue_4, class AGGPlayerController* CallFunc_Get_Local_Controller_AsGGPlayer_Controller_8, bool CallFunc_BooleanAND_ReturnValue, class AGGGoat* K2Node_Event_LocalGoat_1, int32 K2Node_Event_PreviousJumpCount, const struct FVector& K2Node_Event_Location_2, bool CallFunc_IsLocalGoatDriving_ReturnValue, bool Temp_bool_Variable_7, class AGGGoat* K2Node_Event_LocalGoat, bool K2Node_Event_bIsHyperspeedGrinding, class UGGGrindableSplineComponent* K2Node_Event_GrindSpline_1, class UGGGrindableSplineComponent* K2Node_Event_GrindSpline, class AGGPlayerController* CallFunc_GetGGPlayerController_ReturnValue_7, const struct FGameplayTag& K2Node_Select_Default_6, class AActor* K2Node_Event_GoatActor, class UGGStatusEffectManager* K2Node_Event_Manager, class AGGStatusEffectBase* K2Node_Event_NewStatusEffect, enum class EStatusEffectTypes K2Node_Event_Type, const struct FGameplayTag& K2Node_Select_Default_7, class AGGGoat* K2Node_Event_GoatLicking, class AActor* K2Node_Event_LickedActor, float CallFunc_GetActorsMass_ReturnValue, float CallFunc_GetActorsMass_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FGameplayTag& K2Node_Select_Default_8, class AGGPlayerController* CallFunc_GetGGPlayerController_ReturnValue_8, const struct FGameplayTag& K2Node_Select_Default_9, class AGGVehicle* K2Node_Event_Vehicle, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AGGExplosiveActor* K2Node_Event_ExplosiveActor, class UGGForceFeedbackComponent* CallFunc_SpawnForceFeedbackAtLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class AGGFireballProjectile* K2Node_Event_Fireball, class UGGForceFeedbackComponent* CallFunc_SpawnForceFeedbackAtLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, class AGGGoat* K2Node_Event_LandedGoat, const struct FVector& K2Node_Event_Location_1, class UGGForceFeedbackComponent* CallFunc_SpawnForceFeedbackAtLocation_ReturnValue_2, class UGGForceFeedbackComponent* CallFunc_SpawnForceFeedbackAtLocation_ReturnValue_3, class AGGGoat* K2Node_Event_JumpingGoat, const struct FVector& K2Node_Event_Location, class UObject* K2Node_Event_HeadbuttedObject, class AGGGoat* K2Node_Event_HeadbuttingGoat, class UGGForceFeedbackComponent* CallFunc_SpawnForceFeedbackAtLocation_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControllerRumbleComponent_C", "ExecuteUbergraph_BP_ControllerRumbleComponent");

	Params::UBP_ControllerRumbleComponent_C_ExecuteUbergraph_BP_ControllerRumbleComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DamagedGoat = K2Node_Event_DamagedGoat;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageType = K2Node_Event_DamageType;
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_DynamicCast_AsGGDamage_Type_Base = K2Node_DynamicCast_AsGGDamage_Type_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable_6 = Temp_struct_Variable_6;
	Parms.Temp_struct_Variable_7 = Temp_struct_Variable_7;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_struct_Variable_8 = Temp_struct_Variable_8;
	Parms.Temp_struct_Variable_9 = Temp_struct_Variable_9;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_struct_Variable_10 = Temp_struct_Variable_10;
	Parms.Temp_struct_Variable_11 = Temp_struct_Variable_11;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_struct_Variable_12 = Temp_struct_Variable_12;
	Parms.Temp_struct_Variable_13 = Temp_struct_Variable_13;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_struct_Variable_14 = Temp_struct_Variable_14;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.Temp_struct_Variable_15 = Temp_struct_Variable_15;
	Parms.Temp_struct_Variable_16 = Temp_struct_Variable_16;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_struct_Variable_17 = Temp_struct_Variable_17;
	Parms.Temp_struct_Variable_18 = Temp_struct_Variable_18;
	Parms.Temp_struct_Variable_19 = Temp_struct_Variable_19;
	Parms.Temp_struct_Variable_20 = Temp_struct_Variable_20;
	Parms.Temp_struct_Variable_21 = Temp_struct_Variable_21;
	Parms.Temp_struct_Variable_22 = Temp_struct_Variable_22;
	Parms.Temp_struct_Variable_23 = Temp_struct_Variable_23;
	Parms.Temp_struct_Variable_24 = Temp_struct_Variable_24;
	Parms.Temp_struct_Variable_25 = Temp_struct_Variable_25;
	Parms.Temp_struct_Variable_26 = Temp_struct_Variable_26;
	Parms.Temp_struct_Variable_27 = Temp_struct_Variable_27;
	Parms.Temp_struct_Variable_28 = Temp_struct_Variable_28;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_struct_Variable_29 = Temp_struct_Variable_29;
	Parms.CallFunc_Get_Local_Controller_AsGGPlayer_Controller = CallFunc_Get_Local_Controller_AsGGPlayer_Controller;
	Parms.CallFunc_Get_Local_Controller_AsGGPlayer_Controller_1 = CallFunc_Get_Local_Controller_AsGGPlayer_Controller_1;
	Parms.CallFunc_Get_Local_Controller_AsGGPlayer_Controller_2 = CallFunc_Get_Local_Controller_AsGGPlayer_Controller_2;
	Parms.CallFunc_Get_Local_Controller_AsGGPlayer_Controller_3 = CallFunc_Get_Local_Controller_AsGGPlayer_Controller_3;
	Parms.K2Node_Event_Vehicle_3 = K2Node_Event_Vehicle_3;
	Parms.K2Node_Event_bIsDriver = K2Node_Event_bIsDriver;
	Parms.K2Node_Event_Speed_2 = K2Node_Event_Speed_2;
	Parms.K2Node_Event_Vehicle_2 = K2Node_Event_Vehicle_2;
	Parms.K2Node_Event_OtherActor = K2Node_Event_OtherActor;
	Parms.K2Node_Event_OtherComponent = K2Node_Event_OtherComponent;
	Parms.K2Node_Event_ImpactSize = K2Node_Event_ImpactSize;
	Parms.K2Node_Event_OtherImpactSize = K2Node_Event_OtherImpactSize;
	Parms.K2Node_Event_HitResult = K2Node_Event_HitResult;
	Parms.K2Node_Event_Goat_1 = K2Node_Event_Goat_1;
	Parms.K2Node_Event_Speed_1 = K2Node_Event_Speed_1;
	Parms.K2Node_Event_Hit_1 = K2Node_Event_Hit_1;
	Parms.K2Node_Event_LocalGoat_2 = K2Node_Event_LocalGoat_2;
	Parms.K2Node_Event_Vehicle_1 = K2Node_Event_Vehicle_1;
	Parms.K2Node_Event_bIsHandBraking = K2Node_Event_bIsHandBraking;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_GetGGPlayerController_ReturnValue = CallFunc_GetGGPlayerController_ReturnValue;
	Parms.K2Node_Event_Character = K2Node_Event_Character;
	Parms.K2Node_Event_BouncyComponent = K2Node_Event_BouncyComponent;
	Parms.K2Node_Event_HeadbuttingGoat_1 = K2Node_Event_HeadbuttingGoat_1;
	Parms.K2Node_Event_bHitSomething_1 = K2Node_Event_bHitSomething_1;
	Parms.K2Node_Event_HeadbuttedActors = K2Node_Event_HeadbuttedActors;
	Parms.K2Node_Event_bIsChargeHeadbutt = K2Node_Event_bIsChargeHeadbutt;
	Parms.K2Node_Event_ActiveStatusEffects_1 = K2Node_Event_ActiveStatusEffects_1;
	Parms.K2Node_Event_BackkickingGoat = K2Node_Event_BackkickingGoat;
	Parms.K2Node_Event_bHitSomething = K2Node_Event_bHitSomething;
	Parms.K2Node_Event_KickedActors = K2Node_Event_KickedActors;
	Parms.K2Node_Event_ActiveStatusEffects = K2Node_Event_ActiveStatusEffects;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_Array_Contains_ReturnValue_2 = CallFunc_Array_Contains_ReturnValue_2;
	Parms.CallFunc_GetGGPlayerController_ReturnValue_1 = CallFunc_GetGGPlayerController_ReturnValue_1;
	Parms.CallFunc_GetGGPlayerController_ReturnValue_2 = CallFunc_GetGGPlayerController_ReturnValue_2;
	Parms.CallFunc_GetGGPlayerController_ReturnValue_3 = CallFunc_GetGGPlayerController_ReturnValue_3;
	Parms.CallFunc_Array_Contains_ReturnValue_3 = CallFunc_Array_Contains_ReturnValue_3;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_GetGGPlayerController_ReturnValue_4 = CallFunc_GetGGPlayerController_ReturnValue_4;
	Parms.CallFunc_GetGGPlayerController_ReturnValue_5 = CallFunc_GetGGPlayerController_ReturnValue_5;
	Parms.CallFunc_GetGGPlayerController_ReturnValue_6 = CallFunc_GetGGPlayerController_ReturnValue_6;
	Parms.Temp_struct_Variable_30 = Temp_struct_Variable_30;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.CallFunc_Get_Local_Controller_AsGGPlayer_Controller_4 = CallFunc_Get_Local_Controller_AsGGPlayer_Controller_4;
	Parms.CallFunc_Get_Local_Controller_AsGGPlayer_Controller_5 = CallFunc_Get_Local_Controller_AsGGPlayer_Controller_5;
	Parms.Temp_struct_Variable_31 = Temp_struct_Variable_31;
	Parms.Temp_struct_Variable_32 = Temp_struct_Variable_32;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.CallFunc_Get_Local_Controller_AsGGPlayer_Controller_6 = CallFunc_Get_Local_Controller_AsGGPlayer_Controller_6;
	Parms.CallFunc_Get_Local_Controller_AsGGPlayer_Controller_7 = CallFunc_Get_Local_Controller_AsGGPlayer_Controller_7;
	Parms.Temp_struct_Variable_33 = Temp_struct_Variable_33;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.K2Node_Event_Goat = K2Node_Event_Goat;
	Parms.K2Node_Event_Speed = K2Node_Event_Speed;
	Parms.K2Node_Event_Hit = K2Node_Event_Hit;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetTimeSinceStartChargingHeadbutt_ReturnValue = CallFunc_GetTimeSinceStartChargingHeadbutt_ReturnValue;
	Parms.CallFunc_GetLocalPossessedGoat_ReturnValue = CallFunc_GetLocalPossessedGoat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_2 = CallFunc_Greater_FloatFloat_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_IsChargingHeadbutt_ReturnValue = CallFunc_IsChargingHeadbutt_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_3 = CallFunc_Greater_FloatFloat_ReturnValue_3;
	Parms.CallFunc_GetTimeSinceStartChargingHeadbutt_ReturnValue_1 = CallFunc_GetTimeSinceStartChargingHeadbutt_ReturnValue_1;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_4 = CallFunc_Greater_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Get_Local_Controller_AsGGPlayer_Controller_8 = CallFunc_Get_Local_Controller_AsGGPlayer_Controller_8;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Event_LocalGoat_1 = K2Node_Event_LocalGoat_1;
	Parms.K2Node_Event_PreviousJumpCount = K2Node_Event_PreviousJumpCount;
	Parms.K2Node_Event_Location_2 = K2Node_Event_Location_2;
	Parms.CallFunc_IsLocalGoatDriving_ReturnValue = CallFunc_IsLocalGoatDriving_ReturnValue;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.K2Node_Event_LocalGoat = K2Node_Event_LocalGoat;
	Parms.K2Node_Event_bIsHyperspeedGrinding = K2Node_Event_bIsHyperspeedGrinding;
	Parms.K2Node_Event_GrindSpline_1 = K2Node_Event_GrindSpline_1;
	Parms.K2Node_Event_GrindSpline = K2Node_Event_GrindSpline;
	Parms.CallFunc_GetGGPlayerController_ReturnValue_7 = CallFunc_GetGGPlayerController_ReturnValue_7;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.K2Node_Event_GoatActor = K2Node_Event_GoatActor;
	Parms.K2Node_Event_Manager = K2Node_Event_Manager;
	Parms.K2Node_Event_NewStatusEffect = K2Node_Event_NewStatusEffect;
	Parms.K2Node_Event_Type = K2Node_Event_Type;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.K2Node_Event_GoatLicking = K2Node_Event_GoatLicking;
	Parms.K2Node_Event_LickedActor = K2Node_Event_LickedActor;
	Parms.CallFunc_GetActorsMass_ReturnValue = CallFunc_GetActorsMass_ReturnValue;
	Parms.CallFunc_GetActorsMass_ReturnValue_1 = CallFunc_GetActorsMass_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.CallFunc_GetGGPlayerController_ReturnValue_8 = CallFunc_GetGGPlayerController_ReturnValue_8;
	Parms.K2Node_Select_Default_9 = K2Node_Select_Default_9;
	Parms.K2Node_Event_Vehicle = K2Node_Event_Vehicle;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_Event_ExplosiveActor = K2Node_Event_ExplosiveActor;
	Parms.CallFunc_SpawnForceFeedbackAtLocation_ReturnValue = CallFunc_SpawnForceFeedbackAtLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.K2Node_Event_Fireball = K2Node_Event_Fireball;
	Parms.CallFunc_SpawnForceFeedbackAtLocation_ReturnValue_1 = CallFunc_SpawnForceFeedbackAtLocation_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.K2Node_Event_LandedGoat = K2Node_Event_LandedGoat;
	Parms.K2Node_Event_Location_1 = K2Node_Event_Location_1;
	Parms.CallFunc_SpawnForceFeedbackAtLocation_ReturnValue_2 = CallFunc_SpawnForceFeedbackAtLocation_ReturnValue_2;
	Parms.CallFunc_SpawnForceFeedbackAtLocation_ReturnValue_3 = CallFunc_SpawnForceFeedbackAtLocation_ReturnValue_3;
	Parms.K2Node_Event_JumpingGoat = K2Node_Event_JumpingGoat;
	Parms.K2Node_Event_Location = K2Node_Event_Location;
	Parms.K2Node_Event_HeadbuttedObject = K2Node_Event_HeadbuttedObject;
	Parms.K2Node_Event_HeadbuttingGoat = K2Node_Event_HeadbuttingGoat;
	Parms.CallFunc_SpawnForceFeedbackAtLocation_ReturnValue_4 = CallFunc_SpawnForceFeedbackAtLocation_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


