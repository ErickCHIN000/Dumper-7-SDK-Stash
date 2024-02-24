#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIMeleeSpawningComponent.AIMeleeSpawningComponent_C
// (SceneComponent)

class UClass* UAIMeleeSpawningComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIMeleeSpawningComponent_C");

	return Clss;
}


// AIMeleeSpawningComponent_C AIMeleeSpawningComponent.Default__AIMeleeSpawningComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIMeleeSpawningComponent_C* UAIMeleeSpawningComponent_C::GetDefaultObj()
{
	static class UAIMeleeSpawningComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIMeleeSpawningComponent_C*>(UAIMeleeSpawningComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.AIMelee_GetElementalTypeFromMeleeWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOakElementalType       MeleeWeaponElement                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IAIHeldActorInterface>K2Node_DynamicCast_AsAIHeld_Actor_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EOakElementalType       CallFunc_AIHeldActor_GetElementalType_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIMeleeSpawningComponent_C::AIMelee_GetElementalTypeFromMeleeWeapon(enum class EOakElementalType* MeleeWeaponElement, TScriptInterface<class IAIHeldActorInterface> K2Node_DynamicCast_AsAIHeld_Actor_Interface, bool K2Node_DynamicCast_bSuccess, enum class EOakElementalType CallFunc_AIHeldActor_GetElementalType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIMeleeSpawningComponent_C", "AIMelee_GetElementalTypeFromMeleeWeapon");

	Params::UAIMeleeSpawningComponent_C_AIMelee_GetElementalTypeFromMeleeWeapon_Params Parms{};

	Parms.K2Node_DynamicCast_AsAIHeld_Actor_Interface = K2Node_DynamicCast_AsAIHeld_Actor_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AIHeldActor_GetElementalType_ReturnValue = CallFunc_AIHeldActor_GetElementalType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MeleeWeaponElement != nullptr)
		*MeleeWeaponElement = Parms.MeleeWeaponElement;

}


// Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.AIMelee_Drop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               RequestNewMeleeWeapon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIMeleeSpawningComponent_C::AIMelee_Drop(bool RequestNewMeleeWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIMeleeSpawningComponent_C", "AIMelee_Drop");

	Params::UAIMeleeSpawningComponent_C_AIMelee_Drop_Params Parms{};

	Parms.RequestNewMeleeWeapon = RequestNewMeleeWeapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.AIMelee_ThrowAtTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ThrowSpeed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ThrowAnglePercent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        TargetSocket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TargetOffset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    ThrowAngleOffset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              MaxPrediction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RequestNewMeleeWeapon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SpawnIfDoesntExist                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIMeleeSpawningComponent_C::AIMelee_ThrowAtTarget(float ThrowSpeed, float ThrowAnglePercent, class FName TargetSocket, const struct FVector& TargetOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewMeleeWeapon, bool SpawnIfDoesntExist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIMeleeSpawningComponent_C", "AIMelee_ThrowAtTarget");

	Params::UAIMeleeSpawningComponent_C_AIMelee_ThrowAtTarget_Params Parms{};

	Parms.ThrowSpeed = ThrowSpeed;
	Parms.ThrowAnglePercent = ThrowAnglePercent;
	Parms.TargetSocket = TargetSocket;
	Parms.TargetOffset = TargetOffset;
	Parms.ThrowAngleOffset = ThrowAngleOffset;
	Parms.MaxPrediction = MaxPrediction;
	Parms.RequestNewMeleeWeapon = RequestNewMeleeWeapon;
	Parms.SpawnIfDoesntExist = SpawnIfDoesntExist;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.AIMelee_Spawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAIMeleeSpawningComponent_C::AIMelee_Spawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIMeleeSpawningComponent_C", "AIMelee_Spawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.AIMelee_ThrowAtActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorToThrowAt                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ThrowSpeed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ThrowAnglePercentage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ActorSocket                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ActorOffset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    ThrowAngleOffset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              MaxPrediction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RequestNewMeleeWeapon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SpawnIfDoesntExist                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIMeleeSpawningComponent_C::AIMelee_ThrowAtActor(class AActor* ActorToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, class FName ActorSocket, const struct FVector& ActorOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewMeleeWeapon, bool SpawnIfDoesntExist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIMeleeSpawningComponent_C", "AIMelee_ThrowAtActor");

	Params::UAIMeleeSpawningComponent_C_AIMelee_ThrowAtActor_Params Parms{};

	Parms.ActorToThrowAt = ActorToThrowAt;
	Parms.ThrowSpeed = ThrowSpeed;
	Parms.ThrowAnglePercentage = ThrowAnglePercentage;
	Parms.ActorSocket = ActorSocket;
	Parms.ActorOffset = ActorOffset;
	Parms.ThrowAngleOffset = ThrowAngleOffset;
	Parms.MaxPrediction = MaxPrediction;
	Parms.RequestNewMeleeWeapon = RequestNewMeleeWeapon;
	Parms.SpawnIfDoesntExist = SpawnIfDoesntExist;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.AIMelee_ThrowAtLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     LocationToThrowAt                                                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ThrowSpeed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ThrowAnglePercentage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RequestNewMeleeWeapon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SpawnIfDoesntExist                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIMeleeSpawningComponent_C::AIMelee_ThrowAtLocation(const struct FVector& LocationToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, bool RequestNewMeleeWeapon, bool SpawnIfDoesntExist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIMeleeSpawningComponent_C", "AIMelee_ThrowAtLocation");

	Params::UAIMeleeSpawningComponent_C_AIMelee_ThrowAtLocation_Params Parms{};

	Parms.LocationToThrowAt = LocationToThrowAt;
	Parms.ThrowSpeed = ThrowSpeed;
	Parms.ThrowAnglePercentage = ThrowAnglePercentage;
	Parms.RequestNewMeleeWeapon = RequestNewMeleeWeapon;
	Parms.SpawnIfDoesntExist = SpawnIfDoesntExist;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.AIMelee_SetNewMeleeWeaponClass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      NewMeleeWeaponClass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIMeleeSpawningComponent_C::AIMelee_SetNewMeleeWeaponClass(class UClass* NewMeleeWeaponClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIMeleeSpawningComponent_C", "AIMelee_SetNewMeleeWeaponClass");

	Params::UAIMeleeSpawningComponent_C_AIMelee_SetNewMeleeWeaponClass_Params Parms{};

	Parms.NewMeleeWeaponClass = NewMeleeWeaponClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.OnHeldActorNativeDrop
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIMeleeSpawningComponent_C::OnHeldActorNativeDrop(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIMeleeSpawningComponent_C", "OnHeldActorNativeDrop");

	Params::UAIMeleeSpawningComponent_C_OnHeldActorNativeDrop_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIMeleeSpawningComponent.AIMeleeSpawningComponent_C.ExecuteUbergraph_AIMeleeSpawningComponent
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_RequestNewMeleeWeapon3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_ThrowSpeed2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ThrowAnglePercent                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_TargetSocket                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_TargetOffset                                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_Event_ThrowAngleOffset1                                   (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_MaxPrediction1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_RequestNewMeleeWeapon2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_SpawnIfDoesntExist2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_ActorToThrowAt                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ThrowSpeed1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ThrowAnglePercentage1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_ActorSocket                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_ActorOffset                                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_Event_ThrowAngleOffset                                    (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_MaxPrediction                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_RequestNewMeleeWeapon1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_SpawnIfDoesntExist1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Event_LocationToThrowAt                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ThrowSpeed                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ThrowAnglePercentage                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_RequestNewMeleeWeapon                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_SpawnIfDoesntExist                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Event_NewMeleeWeaponClass                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetHeldActor_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetHeldActor_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetHeldActor_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetHeldActor_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIMeleeSpawningComponent_C::ExecuteUbergraph_AIMeleeSpawningComponent(int32 EntryPoint, class AActor* K2Node_Event_Actor, bool K2Node_Event_RequestNewMeleeWeapon3, float K2Node_Event_ThrowSpeed2, float K2Node_Event_ThrowAnglePercent, class FName K2Node_Event_TargetSocket, const struct FVector& K2Node_Event_TargetOffset, const struct FRotator& K2Node_Event_ThrowAngleOffset1, float K2Node_Event_MaxPrediction1, bool K2Node_Event_RequestNewMeleeWeapon2, bool K2Node_Event_SpawnIfDoesntExist2, class AActor* K2Node_Event_ActorToThrowAt, float K2Node_Event_ThrowSpeed1, float K2Node_Event_ThrowAnglePercentage1, class FName K2Node_Event_ActorSocket, const struct FVector& K2Node_Event_ActorOffset, const struct FRotator& K2Node_Event_ThrowAngleOffset, float K2Node_Event_MaxPrediction, bool K2Node_Event_RequestNewMeleeWeapon1, bool K2Node_Event_SpawnIfDoesntExist1, const struct FVector& K2Node_Event_LocationToThrowAt, float K2Node_Event_ThrowSpeed, float K2Node_Event_ThrowAnglePercentage, bool K2Node_Event_RequestNewMeleeWeapon, bool K2Node_Event_SpawnIfDoesntExist, class UClass* K2Node_Event_NewMeleeWeaponClass, class AActor* CallFunc_GetHeldActor_ReturnValue, class AActor* CallFunc_GetHeldActor_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class AActor* CallFunc_GetHeldActor_ReturnValue2, bool CallFunc_IsValid_ReturnValue2, class AActor* CallFunc_GetHeldActor_ReturnValue3, bool CallFunc_IsValid_ReturnValue3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIMeleeSpawningComponent_C", "ExecuteUbergraph_AIMeleeSpawningComponent");

	Params::UAIMeleeSpawningComponent_C_ExecuteUbergraph_AIMeleeSpawningComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.K2Node_Event_RequestNewMeleeWeapon3 = K2Node_Event_RequestNewMeleeWeapon3;
	Parms.K2Node_Event_ThrowSpeed2 = K2Node_Event_ThrowSpeed2;
	Parms.K2Node_Event_ThrowAnglePercent = K2Node_Event_ThrowAnglePercent;
	Parms.K2Node_Event_TargetSocket = K2Node_Event_TargetSocket;
	Parms.K2Node_Event_TargetOffset = K2Node_Event_TargetOffset;
	Parms.K2Node_Event_ThrowAngleOffset1 = K2Node_Event_ThrowAngleOffset1;
	Parms.K2Node_Event_MaxPrediction1 = K2Node_Event_MaxPrediction1;
	Parms.K2Node_Event_RequestNewMeleeWeapon2 = K2Node_Event_RequestNewMeleeWeapon2;
	Parms.K2Node_Event_SpawnIfDoesntExist2 = K2Node_Event_SpawnIfDoesntExist2;
	Parms.K2Node_Event_ActorToThrowAt = K2Node_Event_ActorToThrowAt;
	Parms.K2Node_Event_ThrowSpeed1 = K2Node_Event_ThrowSpeed1;
	Parms.K2Node_Event_ThrowAnglePercentage1 = K2Node_Event_ThrowAnglePercentage1;
	Parms.K2Node_Event_ActorSocket = K2Node_Event_ActorSocket;
	Parms.K2Node_Event_ActorOffset = K2Node_Event_ActorOffset;
	Parms.K2Node_Event_ThrowAngleOffset = K2Node_Event_ThrowAngleOffset;
	Parms.K2Node_Event_MaxPrediction = K2Node_Event_MaxPrediction;
	Parms.K2Node_Event_RequestNewMeleeWeapon1 = K2Node_Event_RequestNewMeleeWeapon1;
	Parms.K2Node_Event_SpawnIfDoesntExist1 = K2Node_Event_SpawnIfDoesntExist1;
	Parms.K2Node_Event_LocationToThrowAt = K2Node_Event_LocationToThrowAt;
	Parms.K2Node_Event_ThrowSpeed = K2Node_Event_ThrowSpeed;
	Parms.K2Node_Event_ThrowAnglePercentage = K2Node_Event_ThrowAnglePercentage;
	Parms.K2Node_Event_RequestNewMeleeWeapon = K2Node_Event_RequestNewMeleeWeapon;
	Parms.K2Node_Event_SpawnIfDoesntExist = K2Node_Event_SpawnIfDoesntExist;
	Parms.K2Node_Event_NewMeleeWeaponClass = K2Node_Event_NewMeleeWeaponClass;
	Parms.CallFunc_GetHeldActor_ReturnValue = CallFunc_GetHeldActor_ReturnValue;
	Parms.CallFunc_GetHeldActor_ReturnValue1 = CallFunc_GetHeldActor_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetHeldActor_ReturnValue2 = CallFunc_GetHeldActor_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_GetHeldActor_ReturnValue3 = CallFunc_GetHeldActor_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}

}


