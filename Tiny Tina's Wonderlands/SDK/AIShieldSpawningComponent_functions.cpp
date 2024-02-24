#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIShieldSpawningComponent.AIShieldSpawningComponent_C
// (SceneComponent)

class UClass* UAIShieldSpawningComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIShieldSpawningComponent_C");

	return Clss;
}


// AIShieldSpawningComponent_C AIShieldSpawningComponent.Default__AIShieldSpawningComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIShieldSpawningComponent_C* UAIShieldSpawningComponent_C::GetDefaultObj()
{
	static class UAIShieldSpawningComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIShieldSpawningComponent_C*>(UAIShieldSpawningComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIShieldSpawningComponent.AIShieldSpawningComponent_C.AIShield_Spawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAIShieldSpawningComponent_C::AIShield_Spawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIShieldSpawningComponent_C", "AIShield_Spawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIShieldSpawningComponent.AIShieldSpawningComponent_C.AIShield_ThrowAtTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ThrowSpeed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ThrowAnglePercent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        TargetSocket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TargetOffset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    ThrowAngleOffset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              MaxPrediction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RequestNewShield                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SpawnIfDoesntExist                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIShieldSpawningComponent_C::AIShield_ThrowAtTarget(float ThrowSpeed, float ThrowAnglePercent, class FName TargetSocket, const struct FVector& TargetOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewShield, bool SpawnIfDoesntExist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIShieldSpawningComponent_C", "AIShield_ThrowAtTarget");

	Params::UAIShieldSpawningComponent_C_AIShield_ThrowAtTarget_Params Parms{};

	Parms.ThrowSpeed = ThrowSpeed;
	Parms.ThrowAnglePercent = ThrowAnglePercent;
	Parms.TargetSocket = TargetSocket;
	Parms.TargetOffset = TargetOffset;
	Parms.ThrowAngleOffset = ThrowAngleOffset;
	Parms.MaxPrediction = MaxPrediction;
	Parms.RequestNewShield = RequestNewShield;
	Parms.SpawnIfDoesntExist = SpawnIfDoesntExist;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIShieldSpawningComponent.AIShieldSpawningComponent_C.AIShield_ThrowAtActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorToThrowAt                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ThrowSpeed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ThrowAnglePercentage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ActorSocket                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ActorOffset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    ThrowAngleOffset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              MaxPrediction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RequestNewShield                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SpawnIfDoesntExist                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIShieldSpawningComponent_C::AIShield_ThrowAtActor(class AActor* ActorToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, class FName ActorSocket, const struct FVector& ActorOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewShield, bool SpawnIfDoesntExist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIShieldSpawningComponent_C", "AIShield_ThrowAtActor");

	Params::UAIShieldSpawningComponent_C_AIShield_ThrowAtActor_Params Parms{};

	Parms.ActorToThrowAt = ActorToThrowAt;
	Parms.ThrowSpeed = ThrowSpeed;
	Parms.ThrowAnglePercentage = ThrowAnglePercentage;
	Parms.ActorSocket = ActorSocket;
	Parms.ActorOffset = ActorOffset;
	Parms.ThrowAngleOffset = ThrowAngleOffset;
	Parms.MaxPrediction = MaxPrediction;
	Parms.RequestNewShield = RequestNewShield;
	Parms.SpawnIfDoesntExist = SpawnIfDoesntExist;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIShieldSpawningComponent.AIShieldSpawningComponent_C.AIShield_ThrowAtLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     LocationToThrowAt                                                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ThrowSpeed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ThrowAnglePercentage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RequestNewShield                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SpawnIfDoesntExist                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIShieldSpawningComponent_C::AIShield_ThrowAtLocation(const struct FVector& LocationToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, bool RequestNewShield, bool SpawnIfDoesntExist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIShieldSpawningComponent_C", "AIShield_ThrowAtLocation");

	Params::UAIShieldSpawningComponent_C_AIShield_ThrowAtLocation_Params Parms{};

	Parms.LocationToThrowAt = LocationToThrowAt;
	Parms.ThrowSpeed = ThrowSpeed;
	Parms.ThrowAnglePercentage = ThrowAnglePercentage;
	Parms.RequestNewShield = RequestNewShield;
	Parms.SpawnIfDoesntExist = SpawnIfDoesntExist;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIShieldSpawningComponent.AIShieldSpawningComponent_C.AIShield_Drop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               RequestNewShield                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIShieldSpawningComponent_C::AIShield_Drop(bool RequestNewShield)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIShieldSpawningComponent_C", "AIShield_Drop");

	Params::UAIShieldSpawningComponent_C_AIShield_Drop_Params Parms{};

	Parms.RequestNewShield = RequestNewShield;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIShieldSpawningComponent.AIShieldSpawningComponent_C.AIShield_SetNewShieldClass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      NewShieldClass                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIShieldSpawningComponent_C::AIShield_SetNewShieldClass(class UClass* NewShieldClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIShieldSpawningComponent_C", "AIShield_SetNewShieldClass");

	Params::UAIShieldSpawningComponent_C_AIShield_SetNewShieldClass_Params Parms{};

	Parms.NewShieldClass = NewShieldClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIShieldSpawningComponent.AIShieldSpawningComponent_C.ExecuteUbergraph_AIShieldSpawningComponent
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ThrowSpeed2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ThrowAnglePercent                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_TargetSocket                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_TargetOffset                                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_Event_ThrowAngleOffset1                                   (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_MaxPrediction1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_RequestNewShield3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_SpawnIfDoesntExist2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_ActorToThrowAt                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ThrowSpeed1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ThrowAnglePercentage1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_ActorSocket                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_ActorOffset                                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_Event_ThrowAngleOffset                                    (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_MaxPrediction                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_RequestNewShield2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_SpawnIfDoesntExist1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Event_LocationToThrowAt                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ThrowSpeed                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ThrowAnglePercentage                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_RequestNewShield1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_SpawnIfDoesntExist                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_RequestNewShield                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Event_NewShieldClass                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetHeldActor_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetHeldActor_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetHeldActor_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetHeldActor_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIShieldSpawningComponent_C::ExecuteUbergraph_AIShieldSpawningComponent(int32 EntryPoint, float K2Node_Event_ThrowSpeed2, float K2Node_Event_ThrowAnglePercent, class FName K2Node_Event_TargetSocket, const struct FVector& K2Node_Event_TargetOffset, const struct FRotator& K2Node_Event_ThrowAngleOffset1, float K2Node_Event_MaxPrediction1, bool K2Node_Event_RequestNewShield3, bool K2Node_Event_SpawnIfDoesntExist2, class AActor* K2Node_Event_ActorToThrowAt, float K2Node_Event_ThrowSpeed1, float K2Node_Event_ThrowAnglePercentage1, class FName K2Node_Event_ActorSocket, const struct FVector& K2Node_Event_ActorOffset, const struct FRotator& K2Node_Event_ThrowAngleOffset, float K2Node_Event_MaxPrediction, bool K2Node_Event_RequestNewShield2, bool K2Node_Event_SpawnIfDoesntExist1, const struct FVector& K2Node_Event_LocationToThrowAt, float K2Node_Event_ThrowSpeed, float K2Node_Event_ThrowAnglePercentage, bool K2Node_Event_RequestNewShield1, bool K2Node_Event_SpawnIfDoesntExist, bool K2Node_Event_RequestNewShield, class UClass* K2Node_Event_NewShieldClass, class AActor* CallFunc_GetHeldActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetHeldActor_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, class AActor* CallFunc_GetHeldActor_ReturnValue2, class AActor* CallFunc_GetHeldActor_ReturnValue3, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIShieldSpawningComponent_C", "ExecuteUbergraph_AIShieldSpawningComponent");

	Params::UAIShieldSpawningComponent_C_ExecuteUbergraph_AIShieldSpawningComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ThrowSpeed2 = K2Node_Event_ThrowSpeed2;
	Parms.K2Node_Event_ThrowAnglePercent = K2Node_Event_ThrowAnglePercent;
	Parms.K2Node_Event_TargetSocket = K2Node_Event_TargetSocket;
	Parms.K2Node_Event_TargetOffset = K2Node_Event_TargetOffset;
	Parms.K2Node_Event_ThrowAngleOffset1 = K2Node_Event_ThrowAngleOffset1;
	Parms.K2Node_Event_MaxPrediction1 = K2Node_Event_MaxPrediction1;
	Parms.K2Node_Event_RequestNewShield3 = K2Node_Event_RequestNewShield3;
	Parms.K2Node_Event_SpawnIfDoesntExist2 = K2Node_Event_SpawnIfDoesntExist2;
	Parms.K2Node_Event_ActorToThrowAt = K2Node_Event_ActorToThrowAt;
	Parms.K2Node_Event_ThrowSpeed1 = K2Node_Event_ThrowSpeed1;
	Parms.K2Node_Event_ThrowAnglePercentage1 = K2Node_Event_ThrowAnglePercentage1;
	Parms.K2Node_Event_ActorSocket = K2Node_Event_ActorSocket;
	Parms.K2Node_Event_ActorOffset = K2Node_Event_ActorOffset;
	Parms.K2Node_Event_ThrowAngleOffset = K2Node_Event_ThrowAngleOffset;
	Parms.K2Node_Event_MaxPrediction = K2Node_Event_MaxPrediction;
	Parms.K2Node_Event_RequestNewShield2 = K2Node_Event_RequestNewShield2;
	Parms.K2Node_Event_SpawnIfDoesntExist1 = K2Node_Event_SpawnIfDoesntExist1;
	Parms.K2Node_Event_LocationToThrowAt = K2Node_Event_LocationToThrowAt;
	Parms.K2Node_Event_ThrowSpeed = K2Node_Event_ThrowSpeed;
	Parms.K2Node_Event_ThrowAnglePercentage = K2Node_Event_ThrowAnglePercentage;
	Parms.K2Node_Event_RequestNewShield1 = K2Node_Event_RequestNewShield1;
	Parms.K2Node_Event_SpawnIfDoesntExist = K2Node_Event_SpawnIfDoesntExist;
	Parms.K2Node_Event_RequestNewShield = K2Node_Event_RequestNewShield;
	Parms.K2Node_Event_NewShieldClass = K2Node_Event_NewShieldClass;
	Parms.CallFunc_GetHeldActor_ReturnValue = CallFunc_GetHeldActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetHeldActor_ReturnValue1 = CallFunc_GetHeldActor_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetHeldActor_ReturnValue2 = CallFunc_GetHeldActor_ReturnValue2;
	Parms.CallFunc_GetHeldActor_ReturnValue3 = CallFunc_GetHeldActor_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

}

}


