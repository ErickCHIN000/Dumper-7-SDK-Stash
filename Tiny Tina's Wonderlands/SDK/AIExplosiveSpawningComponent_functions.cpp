#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C
// (SceneComponent)

class UClass* UAIExplosiveSpawningComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIExplosiveSpawningComponent_C");

	return Clss;
}


// AIExplosiveSpawningComponent_C AIExplosiveSpawningComponent.Default__AIExplosiveSpawningComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIExplosiveSpawningComponent_C* UAIExplosiveSpawningComponent_C::GetDefaultObj()
{
	static class UAIExplosiveSpawningComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIExplosiveSpawningComponent_C*>(UAIExplosiveSpawningComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.AIExplosive_Spawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAIExplosiveSpawningComponent_C::AIExplosive_Spawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIExplosiveSpawningComponent_C", "AIExplosive_Spawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.AIExplosive_Prime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAIExplosiveSpawningComponent_C::AIExplosive_Prime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIExplosiveSpawningComponent_C", "AIExplosive_Prime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.AIExplosive_Detonate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               KillSelfOnDetonate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               RequestNewExplosive                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      InstigatorOverride                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIExplosiveSpawningComponent_C::AIExplosive_Detonate(bool KillSelfOnDetonate, bool RequestNewExplosive, class AActor* InstigatorOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIExplosiveSpawningComponent_C", "AIExplosive_Detonate");

	Params::UAIExplosiveSpawningComponent_C_AIExplosive_Detonate_Params Parms{};

	Parms.KillSelfOnDetonate = KillSelfOnDetonate;
	Parms.RequestNewExplosive = RequestNewExplosive;
	Parms.InstigatorOverride = InstigatorOverride;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.AIExplosive_ThrowAtTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ThrowSpeed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ThrowAnglePercent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        TargetSocket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TargetOffset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    ThrowAngleOffset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              MaxPrediction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RequestNewExplosive                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SpawnIfDoesn_tExist                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIExplosiveSpawningComponent_C::AIExplosive_ThrowAtTarget(float ThrowSpeed, float ThrowAnglePercent, class FName TargetSocket, const struct FVector& TargetOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewExplosive, bool SpawnIfDoesn_tExist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIExplosiveSpawningComponent_C", "AIExplosive_ThrowAtTarget");

	Params::UAIExplosiveSpawningComponent_C_AIExplosive_ThrowAtTarget_Params Parms{};

	Parms.ThrowSpeed = ThrowSpeed;
	Parms.ThrowAnglePercent = ThrowAnglePercent;
	Parms.TargetSocket = TargetSocket;
	Parms.TargetOffset = TargetOffset;
	Parms.ThrowAngleOffset = ThrowAngleOffset;
	Parms.MaxPrediction = MaxPrediction;
	Parms.RequestNewExplosive = RequestNewExplosive;
	Parms.SpawnIfDoesn_tExist = SpawnIfDoesn_tExist;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.AIExplosive_Drop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               RequestNewExplosive                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      InstigatorOverride                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIExplosiveSpawningComponent_C::AIExplosive_Drop(bool RequestNewExplosive, class AActor* InstigatorOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIExplosiveSpawningComponent_C", "AIExplosive_Drop");

	Params::UAIExplosiveSpawningComponent_C_AIExplosive_Drop_Params Parms{};

	Parms.RequestNewExplosive = RequestNewExplosive;
	Parms.InstigatorOverride = InstigatorOverride;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.AIExplosive_ThrowAtActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorToThrowAt                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ThrowSpeed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ThrowAnglePercentage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ActorSocket                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ActorOffset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    ThrowAngleOffset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              MaxPrediction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RequestNewExplosive                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SpawnIfDoesntExist                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIExplosiveSpawningComponent_C::AIExplosive_ThrowAtActor(class AActor* ActorToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, class FName ActorSocket, const struct FVector& ActorOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewExplosive, bool SpawnIfDoesntExist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIExplosiveSpawningComponent_C", "AIExplosive_ThrowAtActor");

	Params::UAIExplosiveSpawningComponent_C_AIExplosive_ThrowAtActor_Params Parms{};

	Parms.ActorToThrowAt = ActorToThrowAt;
	Parms.ThrowSpeed = ThrowSpeed;
	Parms.ThrowAnglePercentage = ThrowAnglePercentage;
	Parms.ActorSocket = ActorSocket;
	Parms.ActorOffset = ActorOffset;
	Parms.ThrowAngleOffset = ThrowAngleOffset;
	Parms.MaxPrediction = MaxPrediction;
	Parms.RequestNewExplosive = RequestNewExplosive;
	Parms.SpawnIfDoesntExist = SpawnIfDoesntExist;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.AIExplosive_ThrowAtLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     LocationToThrowAt                                                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ThrowSpeed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ThrowAnglePercentage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RequestNewExplosive                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SpawnIfDoesntExist                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIExplosiveSpawningComponent_C::AIExplosive_ThrowAtLocation(const struct FVector& LocationToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, bool RequestNewExplosive, bool SpawnIfDoesntExist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIExplosiveSpawningComponent_C", "AIExplosive_ThrowAtLocation");

	Params::UAIExplosiveSpawningComponent_C_AIExplosive_ThrowAtLocation_Params Parms{};

	Parms.LocationToThrowAt = LocationToThrowAt;
	Parms.ThrowSpeed = ThrowSpeed;
	Parms.ThrowAnglePercentage = ThrowAnglePercentage;
	Parms.RequestNewExplosive = RequestNewExplosive;
	Parms.SpawnIfDoesntExist = SpawnIfDoesntExist;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.AIExplosive_SetNewExplosiveClass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      NewExplosiveClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIExplosiveSpawningComponent_C::AIExplosive_SetNewExplosiveClass(class UClass* NewExplosiveClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIExplosiveSpawningComponent_C", "AIExplosive_SetNewExplosiveClass");

	Params::UAIExplosiveSpawningComponent_C_AIExplosive_SetNewExplosiveClass_Params Parms{};

	Parms.NewExplosiveClass = NewExplosiveClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.ExecuteUbergraph_AIExplosiveSpawningComponent
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_KillSelfOnDetonate                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_RequestNewExplosive4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_InstigatorOverride1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ThrowSpeed2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ThrowAnglePercent                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_TargetSocket                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_TargetOffset                                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_Event_ThrowAngleOffset1                                   (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_MaxPrediction1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_RequestNewExplosive3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_SpawnIfDoesn_tExist                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_RequestNewExplosive2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_InstigatorOverride                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_ActorToThrowAt                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ThrowSpeed1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ThrowAnglePercentage1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_ActorSocket                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_ActorOffset                                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_Event_ThrowAngleOffset                                    (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_MaxPrediction                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_RequestNewExplosive1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_SpawnIfDoesntExist1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Event_LocationToThrowAt                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ThrowSpeed                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ThrowAnglePercentage                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_RequestNewExplosive                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_SpawnIfDoesntExist                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Event_NewExplosiveClass                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetHeldActor_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetHeldActor_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetHeldActor_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetHeldActor_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetHeldActor_ReturnValue4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIExplosiveSpawningComponent_C::ExecuteUbergraph_AIExplosiveSpawningComponent(int32 EntryPoint, bool K2Node_Event_KillSelfOnDetonate, bool K2Node_Event_RequestNewExplosive4, class AActor* K2Node_Event_InstigatorOverride1, float K2Node_Event_ThrowSpeed2, float K2Node_Event_ThrowAnglePercent, class FName K2Node_Event_TargetSocket, const struct FVector& K2Node_Event_TargetOffset, const struct FRotator& K2Node_Event_ThrowAngleOffset1, float K2Node_Event_MaxPrediction1, bool K2Node_Event_RequestNewExplosive3, bool K2Node_Event_SpawnIfDoesn_tExist, bool K2Node_Event_RequestNewExplosive2, class AActor* K2Node_Event_InstigatorOverride, class AActor* K2Node_Event_ActorToThrowAt, float K2Node_Event_ThrowSpeed1, float K2Node_Event_ThrowAnglePercentage1, class FName K2Node_Event_ActorSocket, const struct FVector& K2Node_Event_ActorOffset, const struct FRotator& K2Node_Event_ThrowAngleOffset, float K2Node_Event_MaxPrediction, bool K2Node_Event_RequestNewExplosive1, bool K2Node_Event_SpawnIfDoesntExist1, const struct FVector& K2Node_Event_LocationToThrowAt, float K2Node_Event_ThrowSpeed, float K2Node_Event_ThrowAnglePercentage, bool K2Node_Event_RequestNewExplosive, bool K2Node_Event_SpawnIfDoesntExist, class UClass* K2Node_Event_NewExplosiveClass, class AActor* CallFunc_GetHeldActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetHeldActor_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, class AActor* CallFunc_GetHeldActor_ReturnValue2, bool CallFunc_IsValid_ReturnValue2, class AActor* CallFunc_GetHeldActor_ReturnValue3, class AActor* CallFunc_GetHeldActor_ReturnValue4, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIExplosiveSpawningComponent_C", "ExecuteUbergraph_AIExplosiveSpawningComponent");

	Params::UAIExplosiveSpawningComponent_C_ExecuteUbergraph_AIExplosiveSpawningComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_KillSelfOnDetonate = K2Node_Event_KillSelfOnDetonate;
	Parms.K2Node_Event_RequestNewExplosive4 = K2Node_Event_RequestNewExplosive4;
	Parms.K2Node_Event_InstigatorOverride1 = K2Node_Event_InstigatorOverride1;
	Parms.K2Node_Event_ThrowSpeed2 = K2Node_Event_ThrowSpeed2;
	Parms.K2Node_Event_ThrowAnglePercent = K2Node_Event_ThrowAnglePercent;
	Parms.K2Node_Event_TargetSocket = K2Node_Event_TargetSocket;
	Parms.K2Node_Event_TargetOffset = K2Node_Event_TargetOffset;
	Parms.K2Node_Event_ThrowAngleOffset1 = K2Node_Event_ThrowAngleOffset1;
	Parms.K2Node_Event_MaxPrediction1 = K2Node_Event_MaxPrediction1;
	Parms.K2Node_Event_RequestNewExplosive3 = K2Node_Event_RequestNewExplosive3;
	Parms.K2Node_Event_SpawnIfDoesn_tExist = K2Node_Event_SpawnIfDoesn_tExist;
	Parms.K2Node_Event_RequestNewExplosive2 = K2Node_Event_RequestNewExplosive2;
	Parms.K2Node_Event_InstigatorOverride = K2Node_Event_InstigatorOverride;
	Parms.K2Node_Event_ActorToThrowAt = K2Node_Event_ActorToThrowAt;
	Parms.K2Node_Event_ThrowSpeed1 = K2Node_Event_ThrowSpeed1;
	Parms.K2Node_Event_ThrowAnglePercentage1 = K2Node_Event_ThrowAnglePercentage1;
	Parms.K2Node_Event_ActorSocket = K2Node_Event_ActorSocket;
	Parms.K2Node_Event_ActorOffset = K2Node_Event_ActorOffset;
	Parms.K2Node_Event_ThrowAngleOffset = K2Node_Event_ThrowAngleOffset;
	Parms.K2Node_Event_MaxPrediction = K2Node_Event_MaxPrediction;
	Parms.K2Node_Event_RequestNewExplosive1 = K2Node_Event_RequestNewExplosive1;
	Parms.K2Node_Event_SpawnIfDoesntExist1 = K2Node_Event_SpawnIfDoesntExist1;
	Parms.K2Node_Event_LocationToThrowAt = K2Node_Event_LocationToThrowAt;
	Parms.K2Node_Event_ThrowSpeed = K2Node_Event_ThrowSpeed;
	Parms.K2Node_Event_ThrowAnglePercentage = K2Node_Event_ThrowAnglePercentage;
	Parms.K2Node_Event_RequestNewExplosive = K2Node_Event_RequestNewExplosive;
	Parms.K2Node_Event_SpawnIfDoesntExist = K2Node_Event_SpawnIfDoesntExist;
	Parms.K2Node_Event_NewExplosiveClass = K2Node_Event_NewExplosiveClass;
	Parms.CallFunc_GetHeldActor_ReturnValue = CallFunc_GetHeldActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetHeldActor_ReturnValue1 = CallFunc_GetHeldActor_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetHeldActor_ReturnValue2 = CallFunc_GetHeldActor_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_GetHeldActor_ReturnValue3 = CallFunc_GetHeldActor_ReturnValue3;
	Parms.CallFunc_GetHeldActor_ReturnValue4 = CallFunc_GetHeldActor_ReturnValue4;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;

	UObject::ProcessEvent(Func, &Parms);

}

}


