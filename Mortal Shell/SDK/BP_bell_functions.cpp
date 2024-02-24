#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_bell.BP_bell_C
// (Actor)

class UClass* ABP_bell_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_bell_C");

	return Clss;
}


// BP_bell_C BP_bell.Default__BP_bell_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_bell_C* ABP_bell_C::GetDefaultObj()
{
	static class ABP_bell_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_bell_C*>(ABP_bell_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_bell.BP_bell_C.BellAnim__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_bell_C::BellAnim__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_bell_C", "BellAnim__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_bell.BP_bell_C.BellAnim__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_bell_C::BellAnim__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_bell_C", "BellAnim__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_bell.BP_bell_C.SpawnDualSenseAudio_Full2D
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Pitch                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              StartTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_bell_C::SpawnDualSenseAudio_Full2D(class USoundBase* Sound, float Volume, float Pitch, float StartTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_bell_C", "SpawnDualSenseAudio_Full2D");

	Params::ABP_bell_C_SpawnDualSenseAudio_Full2D_Params Parms{};

	Parms.Sound = Sound;
	Parms.Volume = Volume;
	Parms.Pitch = Pitch;
	Parms.StartTime = StartTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_bell.BP_bell_C.HitWithSword
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_bell_C::HitWithSword()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_bell_C", "HitWithSword");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_bell.BP_bell_C.BndEvt__HitWithSwordSoundCollider_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         HitComponent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     NormalImpulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_bell_C::BndEvt__HitWithSwordSoundCollider_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_bell_C", "BndEvt__HitWithSwordSoundCollider_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");

	Params::ABP_bell_C_BndEvt__HitWithSwordSoundCollider_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_bell.BP_bell_C.StartRingingGland
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_bell_C::StartRingingGland()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_bell_C", "StartRingingGland");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_bell.BP_bell_C.SpawnDualSenseAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ControllerAudio_TypeSoundType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              SoundVolume                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ControllerAudio_TypeVibrationType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Vibration                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              VibrationVolume                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AttachToComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               UseSocketLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        SocketName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_bell_C::SpawnDualSenseAudio(const struct FVector& Location, enum class Enum_ControllerAudio_Type SoundType, class USoundBase* Sound, float SoundVolume, enum class Enum_ControllerAudio_Type VibrationType, class USoundBase* Vibration, float VibrationVolume, bool AttachToComponent, bool UseSocketLocation, class FName SocketName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_bell_C", "SpawnDualSenseAudio");

	Params::ABP_bell_C_SpawnDualSenseAudio_Params Parms{};

	Parms.Location = Location;
	Parms.SoundType = SoundType;
	Parms.Sound = Sound;
	Parms.SoundVolume = SoundVolume;
	Parms.VibrationType = VibrationType;
	Parms.Vibration = Vibration;
	Parms.VibrationVolume = VibrationVolume;
	Parms.AttachToComponent = AttachToComponent;
	Parms.UseSocketLocation = UseSocketLocation;
	Parms.SocketName = SocketName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_bell.BP_bell_C.ExecuteUbergraph_BP_bell
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  K2Node_Event_Sound_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Volume                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Pitch                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_StartTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BellHitSound_C*          CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_HitComponent                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_ComponentBoundEvent_NormalImpulse                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_ComponentBoundEvent_Hit                                   (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     K2Node_Event_Location                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ControllerAudio_TypeK2Node_Event_SoundType                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Event_Sound                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_SoundVolume                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ControllerAudio_TypeK2Node_Event_VibrationType                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Event_Vibration                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_VibrationVolume                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_AttachToComponent                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_UseSocketLocation                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_SocketName                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ControllerAudio_C*       CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_bell_C::ExecuteUbergraph_BP_bell(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& Temp_struct_Variable, bool Temp_bool_Has_Been_Initd_Variable, class USoundBase* K2Node_Event_Sound_1, float K2Node_Event_Volume, float K2Node_Event_Pitch, float K2Node_Event_StartTime, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_BellHitSound_C* CallFunc_FinishSpawningActor_ReturnValue, float CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_Greater_FloatFloat_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, const struct FVector& K2Node_ComponentBoundEvent_NormalImpulse, const struct FHitResult& K2Node_ComponentBoundEvent_Hit, const struct FVector& K2Node_Event_Location, enum class Enum_ControllerAudio_Type K2Node_Event_SoundType, class USoundBase* K2Node_Event_Sound, float K2Node_Event_SoundVolume, enum class Enum_ControllerAudio_Type K2Node_Event_VibrationType, class USoundBase* K2Node_Event_Vibration, float K2Node_Event_VibrationVolume, bool K2Node_Event_AttachToComponent, bool K2Node_Event_UseSocketLocation, class FName K2Node_Event_SocketName, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FVector& K2Node_Select_Default, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABP_ControllerAudio_C* CallFunc_FinishSpawningActor_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_bell_C", "ExecuteUbergraph_BP_bell");

	Params::ABP_bell_C_ExecuteUbergraph_BP_bell_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_Event_Sound_1 = K2Node_Event_Sound_1;
	Parms.K2Node_Event_Volume = K2Node_Event_Volume;
	Parms.K2Node_Event_Pitch = K2Node_Event_Pitch;
	Parms.K2Node_Event_StartTime = K2Node_Event_StartTime;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_HitComponent = K2Node_ComponentBoundEvent_HitComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_NormalImpulse = K2Node_ComponentBoundEvent_NormalImpulse;
	Parms.K2Node_ComponentBoundEvent_Hit = K2Node_ComponentBoundEvent_Hit;
	Parms.K2Node_Event_Location = K2Node_Event_Location;
	Parms.K2Node_Event_SoundType = K2Node_Event_SoundType;
	Parms.K2Node_Event_Sound = K2Node_Event_Sound;
	Parms.K2Node_Event_SoundVolume = K2Node_Event_SoundVolume;
	Parms.K2Node_Event_VibrationType = K2Node_Event_VibrationType;
	Parms.K2Node_Event_Vibration = K2Node_Event_Vibration;
	Parms.K2Node_Event_VibrationVolume = K2Node_Event_VibrationVolume;
	Parms.K2Node_Event_AttachToComponent = K2Node_Event_AttachToComponent;
	Parms.K2Node_Event_UseSocketLocation = K2Node_Event_UseSocketLocation;
	Parms.K2Node_Event_SocketName = K2Node_Event_SocketName;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


