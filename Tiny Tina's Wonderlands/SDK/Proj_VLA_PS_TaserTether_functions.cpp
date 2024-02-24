#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C
// (Actor)

class UClass* AProj_VLA_PS_TaserTether_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Proj_VLA_PS_TaserTether_C");

	return Clss;
}


// Proj_VLA_PS_TaserTether_C Proj_VLA_PS_TaserTether.Default__Proj_VLA_PS_TaserTether_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProj_VLA_PS_TaserTether_C* AProj_VLA_PS_TaserTether_C::GetDefaultObj()
{
	static class AProj_VLA_PS_TaserTether_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProj_VLA_PS_TaserTether_C*>(AProj_VLA_PS_TaserTether_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.TriggerElementalPuddles
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FForceSelection             CallFunc_Conv_FloatToForceSelection_ReturnValue                  (NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_GbxAttributeFloatToFloat_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProj_VLA_PS_TaserTether_C::TriggerElementalPuddles(const struct FHitResult& Temp_struct_Variable, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Conv_GbxAttributeFloatToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Proj_VLA_PS_TaserTether_C", "TriggerElementalPuddles");

	Params::AProj_VLA_PS_TaserTether_C_TriggerElementalPuddles_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Conv_FloatToForceSelection_ReturnValue = CallFunc_Conv_FloatToForceSelection_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Conv_GbxAttributeFloatToFloat_ReturnValue = CallFunc_Conv_GbxAttributeFloatToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.AttachBeam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      BeamTarget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// struct FLightBeamAttachment        K2Node_MakeStruct_LightBeamAttachment                            (NoDestructor, ContainsInstancedReference)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLightBeamAttachment        K2Node_MakeStruct_LightBeamAttachment1                           (NoDestructor, ContainsInstancedReference)

void AProj_VLA_PS_TaserTether_C::AttachBeam(class AActor* BeamTarget, class UClass* Data, const class FString& CallFunc_GetDisplayName_ReturnValue, const struct FLightBeamAttachment& K2Node_MakeStruct_LightBeamAttachment, class FName CallFunc_Conv_StringToName_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FLightBeamAttachment& K2Node_MakeStruct_LightBeamAttachment1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Proj_VLA_PS_TaserTether_C", "AttachBeam");

	Params::AProj_VLA_PS_TaserTether_C_AttachBeam_Params Parms{};

	Parms.BeamTarget = BeamTarget;
	Parms.Data = Data;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.K2Node_MakeStruct_LightBeamAttachment = K2Node_MakeStruct_LightBeamAttachment;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_LightBeamAttachment1 = K2Node_MakeStruct_LightBeamAttachment1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.StopMovementEnableTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AProj_VLA_PS_TaserTether_C::StopMovementEnableTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Proj_VLA_PS_TaserTether_C", "StopMovementEnableTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AProj_VLA_PS_TaserTether_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Proj_VLA_PS_TaserTether_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BPI_StartFuse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AProj_VLA_PS_TaserTether_C::BPI_StartFuse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Proj_VLA_PS_TaserTether_C", "BPI_StartFuse");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BPI_Explode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AProj_VLA_PS_TaserTether_C::BPI_Explode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Proj_VLA_PS_TaserTether_C", "BPI_Explode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BPI_SetSimulatePhysics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PhysicsOn_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProj_VLA_PS_TaserTether_C::BPI_SetSimulatePhysics(bool PhysicsOn_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Proj_VLA_PS_TaserTether_C", "BPI_SetSimulatePhysics");

	Params::AProj_VLA_PS_TaserTether_C_BPI_SetSimulatePhysics_Params Parms{};

	Parms.PhysicsOn_ = PhysicsOn_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BPI_ImpulseThrow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     ThrowVector                                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Force                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    RotatorForSpin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              FuseSpeedScale                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     AdditiveVector                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProj_VLA_PS_TaserTether_C::BPI_ImpulseThrow(const struct FVector& ThrowVector, float Force, const struct FRotator& RotatorForSpin, float FuseSpeedScale, const struct FVector& AdditiveVector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Proj_VLA_PS_TaserTether_C", "BPI_ImpulseThrow");

	Params::AProj_VLA_PS_TaserTether_C_BPI_ImpulseThrow_Params Parms{};

	Parms.ThrowVector = ThrowVector;
	Parms.Force = Force;
	Parms.RotatorForSpin = RotatorForSpin;
	Parms.FuseSpeedScale = FuseSpeedScale;
	Parms.AdditiveVector = AdditiveVector;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BPI_ResetHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AProj_VLA_PS_TaserTether_C::BPI_ResetHealth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Proj_VLA_PS_TaserTether_C", "BPI_ResetHealth");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BPI_SetNavPainterEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProj_VLA_PS_TaserTether_C::BPI_SetNavPainterEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Proj_VLA_PS_TaserTether_C", "BPI_SetNavPainterEnabled");

	Params::AProj_VLA_PS_TaserTether_C_BPI_SetNavPainterEnabled_Params Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.ReceiveHit
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         MyComp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Other                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bSelfMoved                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     HitLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitNormal                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     NormalImpulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AProj_VLA_PS_TaserTether_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Proj_VLA_PS_TaserTether_C", "ReceiveHit");

	Params::AProj_VLA_PS_TaserTether_C_ReceiveHit_Params Parms{};

	Parms.MyComp = MyComp;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.bSelfMoved = bSelfMoved;
	Parms.HitLocation = HitLocation;
	Parms.HitNormal = HitNormal;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AProj_VLA_PS_TaserTether_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Proj_VLA_PS_TaserTether_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.OnExplode
// (Event, Protected, BlueprintEvent)
// Parameters:

void AProj_VLA_PS_TaserTether_C::OnExplode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Proj_VLA_PS_TaserTether_C", "OnExplode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Proj_VLA_PS_TaserTether
// (BlueprintEvent)
// Parameters:
// class AActor*                      TouchingActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsPlayer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UActorComponent*             ComponentTouched                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProj_VLA_PS_TaserTether_C::BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Proj_VLA_PS_TaserTether(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Proj_VLA_PS_TaserTether_C", "BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Proj_VLA_PS_TaserTether");

	Params::AProj_VLA_PS_TaserTether_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Proj_VLA_PS_TaserTether_Params Parms{};

	Parms.TouchingActor = TouchingActor;
	Parms.bIsPlayer = bIsPlayer;
	Parms.ComponentTouched = ComponentTouched;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_2_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_VLA_PS_TaserTether
// (BlueprintEvent)
// Parameters:
// class AActor*                      LeavingActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsPlayer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProj_VLA_PS_TaserTether_C::BndEvt__OakTrigger_K2Node_ComponentBoundEvent_2_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_VLA_PS_TaserTether(class AActor* LeavingActor, bool bIsPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Proj_VLA_PS_TaserTether_C", "BndEvt__OakTrigger_K2Node_ComponentBoundEvent_2_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_VLA_PS_TaserTether");

	Params::AProj_VLA_PS_TaserTether_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_2_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_VLA_PS_TaserTether_Params Parms{};

	Parms.LeavingActor = LeavingActor;
	Parms.bIsPlayer = bIsPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.Destructible_Fractured
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     HitPoint                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitDetection                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProj_VLA_PS_TaserTether_C::Destructible_Fractured(struct FVector& HitPoint, struct FVector& HitDetection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Proj_VLA_PS_TaserTether_C", "Destructible_Fractured");

	Params::AProj_VLA_PS_TaserTether_C_Destructible_Fractured_Params Parms{};

	Parms.HitPoint = HitPoint;
	Parms.HitDetection = HitDetection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.BarrelExplode
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AProj_VLA_PS_TaserTether_C::BarrelExplode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Proj_VLA_PS_TaserTether_C", "BarrelExplode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C.ExecuteUbergraph_Proj_VLA_PS_TaserTether
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_PhysicsOn_                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Event_ThrowVector                                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Force                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_Event_RotatorForSpin                                      (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_FuseSpeedScale                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_AdditiveVector                                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Enabled                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_Event_MyComp                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Other                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_Event_OtherComp                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSelfMoved                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Event_HitLocation                                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_HitNormal                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_NormalImpulse                                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_Hit                                                 (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AActor*                      K2Node_ComponentBoundEvent_TouchingActor                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsPlayer1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UActorComponent*             K2Node_ComponentBoundEvent_ComponentTouched                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_LeavingActor                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsPlayer                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_EvaluateConditionType_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_IO_Combat_Barrel_C>K2Node_DynamicCast_AsBPI_IO_Combat_Barrel                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_ExplodingObject_C*       K2Node_DynamicCast_AsBP_Exploding_Object                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StickToTarget_Attached                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StickToTarget_StuckToActor                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Event_HitPoint                                            (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_HitDetection                                        (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location1                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint1                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal1                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal1                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart1                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd1                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void AProj_VLA_PS_TaserTether_C::ExecuteUbergraph_Proj_VLA_PS_TaserTether(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool K2Node_Event_PhysicsOn_, const struct FVector& K2Node_Event_ThrowVector, float K2Node_Event_Force, const struct FRotator& K2Node_Event_RotatorForSpin, float K2Node_Event_FuseSpeedScale, const struct FVector& K2Node_Event_AdditiveVector, bool K2Node_Event_Enabled, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, int32 CallFunc_Array_Length_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* K2Node_ComponentBoundEvent_TouchingActor, bool K2Node_ComponentBoundEvent_bIsPlayer1, class UActorComponent* K2Node_ComponentBoundEvent_ComponentTouched, class AActor* K2Node_ComponentBoundEvent_LeavingActor, bool K2Node_ComponentBoundEvent_bIsPlayer, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_K2_EvaluateConditionType_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_GreaterEqual_IntInt_ReturnValue, TScriptInterface<class IBPI_IO_Combat_Barrel_C> K2Node_DynamicCast_AsBPI_IO_Combat_Barrel, bool K2Node_DynamicCast_bSuccess, class ABP_ExplodingObject_C* K2Node_DynamicCast_AsBP_Exploding_Object, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_StickToTarget_Attached, bool CallFunc_StickToTarget_StuckToActor, bool Temp_bool_Has_Been_Initd_Variable, const struct FVector& K2Node_Event_HitPoint, const struct FVector& K2Node_Event_HitDetection, int32 CallFunc_Array_AddUnique_ReturnValue1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit1, bool CallFunc_BreakHitResult_bInitialOverlap1, float CallFunc_BreakHitResult_Time1, float CallFunc_BreakHitResult_Distance1, const struct FVector& CallFunc_BreakHitResult_Location1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint1, const struct FVector& CallFunc_BreakHitResult_Normal1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat1, class AActor* CallFunc_BreakHitResult_HitActor1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent1, class FName CallFunc_BreakHitResult_HitBoneName1, int32 CallFunc_BreakHitResult_HitItem1, int32 CallFunc_BreakHitResult_FaceIndex1, const struct FVector& CallFunc_BreakHitResult_TraceStart1, const struct FVector& CallFunc_BreakHitResult_TraceEnd1, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Proj_VLA_PS_TaserTether_C", "ExecuteUbergraph_Proj_VLA_PS_TaserTether");

	Params::AProj_VLA_PS_TaserTether_C_ExecuteUbergraph_Proj_VLA_PS_TaserTether_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_PhysicsOn_ = K2Node_Event_PhysicsOn_;
	Parms.K2Node_Event_ThrowVector = K2Node_Event_ThrowVector;
	Parms.K2Node_Event_Force = K2Node_Event_Force;
	Parms.K2Node_Event_RotatorForSpin = K2Node_Event_RotatorForSpin;
	Parms.K2Node_Event_FuseSpeedScale = K2Node_Event_FuseSpeedScale;
	Parms.K2Node_Event_AdditiveVector = K2Node_Event_AdditiveVector;
	Parms.K2Node_Event_Enabled = K2Node_Event_Enabled;
	Parms.K2Node_Event_MyComp = K2Node_Event_MyComp;
	Parms.K2Node_Event_Other = K2Node_Event_Other;
	Parms.K2Node_Event_OtherComp = K2Node_Event_OtherComp;
	Parms.K2Node_Event_bSelfMoved = K2Node_Event_bSelfMoved;
	Parms.K2Node_Event_HitLocation = K2Node_Event_HitLocation;
	Parms.K2Node_Event_HitNormal = K2Node_Event_HitNormal;
	Parms.K2Node_Event_NormalImpulse = K2Node_Event_NormalImpulse;
	Parms.K2Node_Event_Hit = K2Node_Event_Hit;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_ComponentBoundEvent_TouchingActor = K2Node_ComponentBoundEvent_TouchingActor;
	Parms.K2Node_ComponentBoundEvent_bIsPlayer1 = K2Node_ComponentBoundEvent_bIsPlayer1;
	Parms.K2Node_ComponentBoundEvent_ComponentTouched = K2Node_ComponentBoundEvent_ComponentTouched;
	Parms.K2Node_ComponentBoundEvent_LeavingActor = K2Node_ComponentBoundEvent_LeavingActor;
	Parms.K2Node_ComponentBoundEvent_bIsPlayer = K2Node_ComponentBoundEvent_bIsPlayer;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_K2_EvaluateConditionType_ReturnValue = CallFunc_K2_EvaluateConditionType_ReturnValue;
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
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_IO_Combat_Barrel = K2Node_DynamicCast_AsBPI_IO_Combat_Barrel;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Exploding_Object = K2Node_DynamicCast_AsBP_Exploding_Object;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_StickToTarget_Attached = CallFunc_StickToTarget_Attached;
	Parms.CallFunc_StickToTarget_StuckToActor = CallFunc_StickToTarget_StuckToActor;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_Event_HitPoint = K2Node_Event_HitPoint;
	Parms.K2Node_Event_HitDetection = K2Node_Event_HitDetection;
	Parms.CallFunc_Array_AddUnique_ReturnValue1 = CallFunc_Array_AddUnique_ReturnValue1;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit1 = CallFunc_BreakHitResult_bBlockingHit1;
	Parms.CallFunc_BreakHitResult_bInitialOverlap1 = CallFunc_BreakHitResult_bInitialOverlap1;
	Parms.CallFunc_BreakHitResult_Time1 = CallFunc_BreakHitResult_Time1;
	Parms.CallFunc_BreakHitResult_Distance1 = CallFunc_BreakHitResult_Distance1;
	Parms.CallFunc_BreakHitResult_Location1 = CallFunc_BreakHitResult_Location1;
	Parms.CallFunc_BreakHitResult_ImpactPoint1 = CallFunc_BreakHitResult_ImpactPoint1;
	Parms.CallFunc_BreakHitResult_Normal1 = CallFunc_BreakHitResult_Normal1;
	Parms.CallFunc_BreakHitResult_ImpactNormal1 = CallFunc_BreakHitResult_ImpactNormal1;
	Parms.CallFunc_BreakHitResult_PhysMat1 = CallFunc_BreakHitResult_PhysMat1;
	Parms.CallFunc_BreakHitResult_HitActor1 = CallFunc_BreakHitResult_HitActor1;
	Parms.CallFunc_BreakHitResult_HitComponent1 = CallFunc_BreakHitResult_HitComponent1;
	Parms.CallFunc_BreakHitResult_HitBoneName1 = CallFunc_BreakHitResult_HitBoneName1;
	Parms.CallFunc_BreakHitResult_HitItem1 = CallFunc_BreakHitResult_HitItem1;
	Parms.CallFunc_BreakHitResult_FaceIndex1 = CallFunc_BreakHitResult_FaceIndex1;
	Parms.CallFunc_BreakHitResult_TraceStart1 = CallFunc_BreakHitResult_TraceStart1;
	Parms.CallFunc_BreakHitResult_TraceEnd1 = CallFunc_BreakHitResult_TraceEnd1;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


