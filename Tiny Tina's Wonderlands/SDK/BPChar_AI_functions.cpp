#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPChar_AI.BPChar_AI_C
// (Actor, Pawn)

class UClass* ABPChar_AI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPChar_AI_C");

	return Clss;
}


// BPChar_AI_C BPChar_AI.Default__BPChar_AI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPChar_AI_C* ABPChar_AI_C::GetDefaultObj()
{
	static class ABPChar_AI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPChar_AI_C*>(ABPChar_AI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPChar_AI.BPChar_AI_C.AIStolenProj_AttemptDetonate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAIStolenProjDetector_C*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_AIStolenProj_C>K2Node_DynamicCast_AsBPI_AIStolen_Proj                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AIStolenProj_AttemptDetonate_Success                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_AI_C::AIStolenProj_AttemptDetonate(bool* Success, class UAIStolenProjDetector_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_AIStolenProj_C> K2Node_DynamicCast_AsBPI_AIStolen_Proj, bool K2Node_DynamicCast_bSuccess, bool CallFunc_AIStolenProj_AttemptDetonate_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_AI_C", "AIStolenProj_AttemptDetonate");

	Params::ABPChar_AI_C_AIStolenProj_AttemptDetonate_Params Parms{};

	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_AIStolen_Proj = K2Node_DynamicCast_AsBPI_AIStolen_Proj;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AIStolenProj_AttemptDetonate_Success = CallFunc_AIStolenProj_AttemptDetonate_Success;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPChar_AI.BPChar_AI_C.AIStolenProj_GetElementalTypeFromStolenProjectile
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOakElementalType       StolenProjectileElement                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIStolenProjDetector_C*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_AIStolenProj_C>K2Node_DynamicCast_AsBPI_AIStolen_Proj                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EOakElementalType       CallFunc_AIStolenProj_GetElementalTypeFromStolenProjectile_StolenProjectileElement(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_AI_C::AIStolenProj_GetElementalTypeFromStolenProjectile(enum class EOakElementalType* StolenProjectileElement, class UAIStolenProjDetector_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_AIStolenProj_C> K2Node_DynamicCast_AsBPI_AIStolen_Proj, bool K2Node_DynamicCast_bSuccess, enum class EOakElementalType CallFunc_AIStolenProj_GetElementalTypeFromStolenProjectile_StolenProjectileElement)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_AI_C", "AIStolenProj_GetElementalTypeFromStolenProjectile");

	Params::ABPChar_AI_C_AIStolenProj_GetElementalTypeFromStolenProjectile_Params Parms{};

	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_AIStolen_Proj = K2Node_DynamicCast_AsBPI_AIStolen_Proj;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AIStolenProj_GetElementalTypeFromStolenProjectile_StolenProjectileElement = CallFunc_AIStolenProj_GetElementalTypeFromStolenProjectile_StolenProjectileElement;

	UObject::ProcessEvent(Func, &Parms);

	if (StolenProjectileElement != nullptr)
		*StolenProjectileElement = Parms.StolenProjectileElement;

}


// Function BPChar_AI.BPChar_AI_C.AIStolenProj_AttemptDisarm
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAIStolenProjDetector_C*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_AIStolenProj_C>K2Node_DynamicCast_AsBPI_AIStolen_Proj                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AIStolenProj_AttemptDisarm_Success                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_AI_C::AIStolenProj_AttemptDisarm(bool* Success, class UAIStolenProjDetector_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_AIStolenProj_C> K2Node_DynamicCast_AsBPI_AIStolen_Proj, bool K2Node_DynamicCast_bSuccess, bool CallFunc_AIStolenProj_AttemptDisarm_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_AI_C", "AIStolenProj_AttemptDisarm");

	Params::ABPChar_AI_C_AIStolenProj_AttemptDisarm_Params Parms{};

	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_AIStolen_Proj = K2Node_DynamicCast_AsBPI_AIStolen_Proj;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AIStolenProj_AttemptDisarm_Success = CallFunc_AIStolenProj_AttemptDisarm_Success;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPChar_AI.BPChar_AI_C.AIStolenProj_AttemptDestroy
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAIStolenProjDetector_C*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_AIStolenProj_C>K2Node_DynamicCast_AsBPI_AIStolen_Proj                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AIStolenProj_AttemptDestroy_Success                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_AI_C::AIStolenProj_AttemptDestroy(bool* Success, class UAIStolenProjDetector_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_AIStolenProj_C> K2Node_DynamicCast_AsBPI_AIStolen_Proj, bool K2Node_DynamicCast_bSuccess, bool CallFunc_AIStolenProj_AttemptDestroy_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_AI_C", "AIStolenProj_AttemptDestroy");

	Params::ABPChar_AI_C_AIStolenProj_AttemptDestroy_Params Parms{};

	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_AIStolen_Proj = K2Node_DynamicCast_AsBPI_AIStolen_Proj;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AIStolenProj_AttemptDestroy_Success = CallFunc_AIStolenProj_AttemptDestroy_Success;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPChar_AI.BPChar_AI_C.AIStolenProj_AttemptAttach
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SocketName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAIStolenProjDetector_C*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_AIStolenProj_C>K2Node_DynamicCast_AsBPI_AIStolen_Proj                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AIStolenProj_AttemptAttach_Success                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_AI_C::AIStolenProj_AttemptAttach(class FName SocketName, bool* Success, class UAIStolenProjDetector_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_AIStolenProj_C> K2Node_DynamicCast_AsBPI_AIStolen_Proj, bool K2Node_DynamicCast_bSuccess, bool CallFunc_AIStolenProj_AttemptAttach_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_AI_C", "AIStolenProj_AttemptAttach");

	Params::ABPChar_AI_C_AIStolenProj_AttemptAttach_Params Parms{};

	Parms.SocketName = SocketName;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_AIStolen_Proj = K2Node_DynamicCast_AsBPI_AIStolen_Proj;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AIStolenProj_AttemptAttach_Success = CallFunc_AIStolenProj_AttemptAttach_Success;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPChar_AI.BPChar_AI_C.AIStolenProj_AttemptReturnTo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_AIThrowAtStyle     ReturnTo                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        TargetSocket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MaxPrediction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Speed                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AnglePercent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    DirectionOffset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FVector                     TargetOffset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      SpecifiedActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     WorldLocation                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAIStolenProjDetector_C*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_AIStolenProj_C>K2Node_DynamicCast_AsBPI_AIStolen_Proj                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AIStolenProj_AttemptReturnTo_Success                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_AI_C::AIStolenProj_AttemptReturnTo(enum class Enum_AIThrowAtStyle ReturnTo, class FName TargetSocket, float MaxPrediction, float Speed, float AnglePercent, const struct FRotator& DirectionOffset, const struct FVector& TargetOffset, class AActor* SpecifiedActor, const struct FVector& WorldLocation, bool* Success, class UAIStolenProjDetector_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_AIStolenProj_C> K2Node_DynamicCast_AsBPI_AIStolen_Proj, bool K2Node_DynamicCast_bSuccess, bool CallFunc_AIStolenProj_AttemptReturnTo_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_AI_C", "AIStolenProj_AttemptReturnTo");

	Params::ABPChar_AI_C_AIStolenProj_AttemptReturnTo_Params Parms{};

	Parms.ReturnTo = ReturnTo;
	Parms.TargetSocket = TargetSocket;
	Parms.MaxPrediction = MaxPrediction;
	Parms.Speed = Speed;
	Parms.AnglePercent = AnglePercent;
	Parms.DirectionOffset = DirectionOffset;
	Parms.TargetOffset = TargetOffset;
	Parms.SpecifiedActor = SpecifiedActor;
	Parms.WorldLocation = WorldLocation;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_AIStolen_Proj = K2Node_DynamicCast_AsBPI_AIStolen_Proj;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AIStolenProj_AttemptReturnTo_Success = CallFunc_AIStolenProj_AttemptReturnTo_Success;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPChar_AI.BPChar_AI_C.AIStolenProj_AttemptLerpToSocket
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SocketToLerpTo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LerpDuration                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAIStolenProjDetector_C*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LerpToSocket_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_AI_C::AIStolenProj_AttemptLerpToSocket(class FName SocketToLerpTo, float LerpDuration, bool* Success, class UAIStolenProjDetector_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LerpToSocket_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_AI_C", "AIStolenProj_AttemptLerpToSocket");

	Params::ABPChar_AI_C_AIStolenProj_AttemptLerpToSocket_Params Parms{};

	Parms.SocketToLerpTo = SocketToLerpTo;
	Parms.LerpDuration = LerpDuration;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_LerpToSocket_ReturnValue = CallFunc_LerpToSocket_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPChar_AI.BPChar_AI_C.AIMelee_GetElementalTypeFromMeleeWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOakElementalType       MeleeWeaponElement                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIMeleeSpawningComponent_C* CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_AIMeleeHandling_C>K2Node_DynamicCast_AsBPI_AIMelee_Handling                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EOakElementalType       CallFunc_AIMelee_GetElementalTypeFromMeleeWeapon_MeleeWeaponElement(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_AI_C::AIMelee_GetElementalTypeFromMeleeWeapon(enum class EOakElementalType* MeleeWeaponElement, class UAIMeleeSpawningComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_AIMeleeHandling_C> K2Node_DynamicCast_AsBPI_AIMelee_Handling, bool K2Node_DynamicCast_bSuccess, enum class EOakElementalType CallFunc_AIMelee_GetElementalTypeFromMeleeWeapon_MeleeWeaponElement)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_AI_C", "AIMelee_GetElementalTypeFromMeleeWeapon");

	Params::ABPChar_AI_C_AIMelee_GetElementalTypeFromMeleeWeapon_Params Parms{};

	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_AIMelee_Handling = K2Node_DynamicCast_AsBPI_AIMelee_Handling;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AIMelee_GetElementalTypeFromMeleeWeapon_MeleeWeaponElement = CallFunc_AIMelee_GetElementalTypeFromMeleeWeapon_MeleeWeaponElement;

	UObject::ProcessEvent(Func, &Parms);

	if (MeleeWeaponElement != nullptr)
		*MeleeWeaponElement = Parms.MeleeWeaponElement;

}


// Function BPChar_AI.BPChar_AI_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_AI_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_AI_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_AI.BPChar_AI_C.AI_Bamf_In
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_AI_C::AI_Bamf_In()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_AI_C", "AI_Bamf_In");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_AI.BPChar_AI_C.AIMelee_Drop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               RequestNewMeleeWeapon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_AI_C::AIMelee_Drop(bool RequestNewMeleeWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_AI_C", "AIMelee_Drop");

	Params::ABPChar_AI_C_AIMelee_Drop_Params Parms{};

	Parms.RequestNewMeleeWeapon = RequestNewMeleeWeapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_AI.BPChar_AI_C.AIMelee_Spawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_AI_C::AIMelee_Spawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_AI_C", "AIMelee_Spawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_AI.BPChar_AI_C.AIMelee_ThrowAtTarget
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

void ABPChar_AI_C::AIMelee_ThrowAtTarget(float ThrowSpeed, float ThrowAnglePercent, class FName TargetSocket, const struct FVector& TargetOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewMeleeWeapon, bool SpawnIfDoesntExist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_AI_C", "AIMelee_ThrowAtTarget");

	Params::ABPChar_AI_C_AIMelee_ThrowAtTarget_Params Parms{};

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


// Function BPChar_AI.BPChar_AI_C.AIExplosive_Spawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_AI_C::AIExplosive_Spawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_AI_C", "AIExplosive_Spawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_AI.BPChar_AI_C.AIExplosive_Prime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_AI_C::AIExplosive_Prime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_AI_C", "AIExplosive_Prime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_AI.BPChar_AI_C.AIExplosive_ThrowAtTarget
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

void ABPChar_AI_C::AIExplosive_ThrowAtTarget(float ThrowSpeed, float ThrowAnglePercent, class FName TargetSocket, const struct FVector& TargetOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewExplosive, bool SpawnIfDoesn_tExist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_AI_C", "AIExplosive_ThrowAtTarget");

	Params::ABPChar_AI_C_AIExplosive_ThrowAtTarget_Params Parms{};

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


// Function BPChar_AI.BPChar_AI_C.AIExplosive_Detonate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               KillSelfOnDetonate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               RequestNewExplosive                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      InstigatorOverride                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_AI_C::AIExplosive_Detonate(bool KillSelfOnDetonate, bool RequestNewExplosive, class AActor* InstigatorOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_AI_C", "AIExplosive_Detonate");

	Params::ABPChar_AI_C_AIExplosive_Detonate_Params Parms{};

	Parms.KillSelfOnDetonate = KillSelfOnDetonate;
	Parms.RequestNewExplosive = RequestNewExplosive;
	Parms.InstigatorOverride = InstigatorOverride;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_AI.BPChar_AI_C.AIExplosive_Drop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               RequestNewExplosive                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      InstigatorOverride                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_AI_C::AIExplosive_Drop(bool RequestNewExplosive, class AActor* InstigatorOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_AI_C", "AIExplosive_Drop");

	Params::ABPChar_AI_C_AIExplosive_Drop_Params Parms{};

	Parms.RequestNewExplosive = RequestNewExplosive;
	Parms.InstigatorOverride = InstigatorOverride;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_AI.BPChar_AI_C.AIExplosive_ThrowAtActor
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

void ABPChar_AI_C::AIExplosive_ThrowAtActor(class AActor* ActorToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, class FName ActorSocket, const struct FVector& ActorOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewExplosive, bool SpawnIfDoesntExist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_AI_C", "AIExplosive_ThrowAtActor");

	Params::ABPChar_AI_C_AIExplosive_ThrowAtActor_Params Parms{};

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


// Function BPChar_AI.BPChar_AI_C.AIExplosive_ThrowAtLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     LocationToThrowAt                                                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ThrowSpeed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ThrowAnglePercentage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RequestNewExplosive                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SpawnIfDoesntExist                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_AI_C::AIExplosive_ThrowAtLocation(const struct FVector& LocationToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, bool RequestNewExplosive, bool SpawnIfDoesntExist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_AI_C", "AIExplosive_ThrowAtLocation");

	Params::ABPChar_AI_C_AIExplosive_ThrowAtLocation_Params Parms{};

	Parms.LocationToThrowAt = LocationToThrowAt;
	Parms.ThrowSpeed = ThrowSpeed;
	Parms.ThrowAnglePercentage = ThrowAnglePercentage;
	Parms.RequestNewExplosive = RequestNewExplosive;
	Parms.SpawnIfDoesntExist = SpawnIfDoesntExist;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_AI.BPChar_AI_C.AIMelee_ThrowAtActor
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

void ABPChar_AI_C::AIMelee_ThrowAtActor(class AActor* ActorToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, class FName ActorSocket, const struct FVector& ActorOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewMeleeWeapon, bool SpawnIfDoesntExist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_AI_C", "AIMelee_ThrowAtActor");

	Params::ABPChar_AI_C_AIMelee_ThrowAtActor_Params Parms{};

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


// Function BPChar_AI.BPChar_AI_C.AIMelee_ThrowAtLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     LocationToThrowAt                                                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ThrowSpeed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ThrowAnglePercentage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RequestNewMeleeWeapon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SpawnIfDoesntExist                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_AI_C::AIMelee_ThrowAtLocation(const struct FVector& LocationToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, bool RequestNewMeleeWeapon, bool SpawnIfDoesntExist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_AI_C", "AIMelee_ThrowAtLocation");

	Params::ABPChar_AI_C_AIMelee_ThrowAtLocation_Params Parms{};

	Parms.LocationToThrowAt = LocationToThrowAt;
	Parms.ThrowSpeed = ThrowSpeed;
	Parms.ThrowAnglePercentage = ThrowAnglePercentage;
	Parms.RequestNewMeleeWeapon = RequestNewMeleeWeapon;
	Parms.SpawnIfDoesntExist = SpawnIfDoesntExist;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_AI.BPChar_AI_C.AIMelee_SetNewMeleeWeaponClass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      NewMeleeWeaponClass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_AI_C::AIMelee_SetNewMeleeWeaponClass(class UClass* NewMeleeWeaponClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_AI_C", "AIMelee_SetNewMeleeWeaponClass");

	Params::ABPChar_AI_C_AIMelee_SetNewMeleeWeaponClass_Params Parms{};

	Parms.NewMeleeWeaponClass = NewMeleeWeaponClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_AI.BPChar_AI_C.AIExplosive_SetNewExplosiveClass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      NewExplosiveClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_AI_C::AIExplosive_SetNewExplosiveClass(class UClass* NewExplosiveClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_AI_C", "AIExplosive_SetNewExplosiveClass");

	Params::ABPChar_AI_C_AIExplosive_SetNewExplosiveClass_Params Parms{};

	Parms.NewExplosiveClass = NewExplosiveClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_AI.BPChar_AI_C.AIShield_SetNewShieldClass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      NewShieldClass                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_AI_C::AIShield_SetNewShieldClass(class UClass* NewShieldClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_AI_C", "AIShield_SetNewShieldClass");

	Params::ABPChar_AI_C_AIShield_SetNewShieldClass_Params Parms{};

	Parms.NewShieldClass = NewShieldClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_AI.BPChar_AI_C.AIShield_Spawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_AI_C::AIShield_Spawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_AI_C", "AIShield_Spawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_AI.BPChar_AI_C.AIShield_ThrowAtTarget
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

void ABPChar_AI_C::AIShield_ThrowAtTarget(float ThrowSpeed, float ThrowAnglePercent, class FName TargetSocket, const struct FVector& TargetOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewShield, bool SpawnIfDoesntExist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_AI_C", "AIShield_ThrowAtTarget");

	Params::ABPChar_AI_C_AIShield_ThrowAtTarget_Params Parms{};

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


// Function BPChar_AI.BPChar_AI_C.AIShield_ThrowAtActor
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

void ABPChar_AI_C::AIShield_ThrowAtActor(class AActor* ActorToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, class FName ActorSocket, const struct FVector& ActorOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewShield, bool SpawnIfDoesntExist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_AI_C", "AIShield_ThrowAtActor");

	Params::ABPChar_AI_C_AIShield_ThrowAtActor_Params Parms{};

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


// Function BPChar_AI.BPChar_AI_C.AIShield_ThrowAtLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     LocationToThrowAt                                                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ThrowSpeed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ThrowAnglePercentage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RequestNewShield                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SpawnIfDoesntExist                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_AI_C::AIShield_ThrowAtLocation(const struct FVector& LocationToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, bool RequestNewShield, bool SpawnIfDoesntExist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_AI_C", "AIShield_ThrowAtLocation");

	Params::ABPChar_AI_C_AIShield_ThrowAtLocation_Params Parms{};

	Parms.LocationToThrowAt = LocationToThrowAt;
	Parms.ThrowSpeed = ThrowSpeed;
	Parms.ThrowAnglePercentage = ThrowAnglePercentage;
	Parms.RequestNewShield = RequestNewShield;
	Parms.SpawnIfDoesntExist = SpawnIfDoesntExist;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_AI.BPChar_AI_C.AIShield_Drop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               RequestNewShield                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPChar_AI_C::AIShield_Drop(bool RequestNewShield)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_AI_C", "AIShield_Drop");

	Params::ABPChar_AI_C_AIShield_Drop_Params Parms{};

	Parms.RequestNewShield = RequestNewShield;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPChar_AI.BPChar_AI_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABPChar_AI_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_AI_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_AI.BPChar_AI_C.AI_Bamf_Out
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_AI_C::AI_Bamf_Out()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_AI_C", "AI_Bamf_Out");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_AI.BPChar_AI_C.AI_Teleport_Out
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPChar_AI_C::AI_Teleport_Out()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_AI_C", "AI_Teleport_Out");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPChar_AI.BPChar_AI_C.ExecuteUbergraph_BPChar_AI
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_RequestNewMeleeWeapon3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_ThrowSpeed8                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ThrowAnglePercent2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_TargetSocket2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_TargetOffset2                                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_Event_ThrowAngleOffset5                                   (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_MaxPrediction5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_RequestNewMeleeWeapon2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_SpawnIfDoesntExist7                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_ThrowSpeed7                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ThrowAnglePercent1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_TargetSocket1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_TargetOffset1                                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_Event_ThrowAngleOffset4                                   (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_MaxPrediction4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_RequestNewExplosive4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_SpawnIfDoesn_tExist                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_KillSelfOnDetonate                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_RequestNewExplosive3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_InstigatorOverride1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_RequestNewExplosive2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_InstigatorOverride                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIMeleeSpawningComponent_C* CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIMeleeSpawningComponent_C* CallFunc_GetComponentByClass_ReturnValue1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_AIMeleeHandling_C>K2Node_DynamicCast_AsBPI_AIMelee_Handling                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_AIMeleeHandling_C>K2Node_DynamicCast_AsBPI_AIMelee_Handling1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAIMeleeSpawningComponent_C* CallFunc_GetComponentByClass_ReturnValue2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIExplosiveSpawningComponent_C*CallFunc_GetComponentByClass_ReturnValue3                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_AIMeleeHandling_C>K2Node_DynamicCast_AsBPI_AIMelee_Handling2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_AIExplosiveHandling_C>K2Node_DynamicCast_AsBPI_AIExplosive_Handling                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAIExplosiveSpawningComponent_C*CallFunc_GetComponentByClass_ReturnValue4                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIExplosiveSpawningComponent_C*CallFunc_GetComponentByClass_ReturnValue5                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_AIExplosiveHandling_C>K2Node_DynamicCast_AsBPI_AIExplosive_Handling1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_AIExplosiveHandling_C>K2Node_DynamicCast_AsBPI_AIExplosive_Handling2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess5                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAIExplosiveSpawningComponent_C*CallFunc_GetComponentByClass_ReturnValue6                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIExplosiveSpawningComponent_C*CallFunc_GetComponentByClass_ReturnValue7                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_AIExplosiveHandling_C>K2Node_DynamicCast_AsBPI_AIExplosive_Handling3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess6                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_AIExplosiveHandling_C>K2Node_DynamicCast_AsBPI_AIExplosive_Handling4                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess7                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_ActorToThrowAt2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ThrowSpeed6                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ThrowAnglePercentage5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_ActorSocket2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_ActorOffset2                                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_Event_ThrowAngleOffset3                                   (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_MaxPrediction3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_RequestNewExplosive1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_SpawnIfDoesntExist6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Event_LocationToThrowAt2                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ThrowSpeed5                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ThrowAnglePercentage4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_RequestNewExplosive                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_SpawnIfDoesntExist5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAIExplosiveSpawningComponent_C*CallFunc_GetComponentByClass_ReturnValue8                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIExplosiveSpawningComponent_C*CallFunc_GetComponentByClass_ReturnValue9                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_AIExplosiveHandling_C>K2Node_DynamicCast_AsBPI_AIExplosive_Handling5                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess8                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_AIExplosiveHandling_C>K2Node_DynamicCast_AsBPI_AIExplosive_Handling6                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess9                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_ActorToThrowAt1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ThrowSpeed4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ThrowAnglePercentage3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_ActorSocket1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_ActorOffset1                                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_Event_ThrowAngleOffset2                                   (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_MaxPrediction2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_RequestNewMeleeWeapon1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_SpawnIfDoesntExist4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Event_LocationToThrowAt1                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ThrowSpeed3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ThrowAnglePercentage2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_RequestNewMeleeWeapon                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_SpawnIfDoesntExist3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAIMeleeSpawningComponent_C* CallFunc_GetComponentByClass_ReturnValue10                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIMeleeSpawningComponent_C* CallFunc_GetComponentByClass_ReturnValue11                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_AIMeleeHandling_C>K2Node_DynamicCast_AsBPI_AIMelee_Handling3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess10                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_AIMeleeHandling_C>K2Node_DynamicCast_AsBPI_AIMelee_Handling4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess11                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Event_NewMeleeWeaponClass                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIMeleeSpawningComponent_C* CallFunc_GetComponentByClass_ReturnValue12                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Event_NewExplosiveClass                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_AIMeleeHandling_C>K2Node_DynamicCast_AsBPI_AIMelee_Handling5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess12                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAIExplosiveSpawningComponent_C*CallFunc_GetComponentByClass_ReturnValue13                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Event_NewShieldClass                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_AIExplosiveHandling_C>K2Node_DynamicCast_AsBPI_AIExplosive_Handling7                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess13                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
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
// class UAIShieldSpawningComponent_C*CallFunc_GetComponentByClass_ReturnValue14                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIShieldSpawningComponent_C*CallFunc_GetComponentByClass_ReturnValue15                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_AIShieldHandling_C>K2Node_DynamicCast_AsBPI_AIShield_Handling                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess14                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_AIShieldHandling_C>K2Node_DynamicCast_AsBPI_AIShield_Handling1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess15                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue15                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAIShieldSpawningComponent_C*CallFunc_GetComponentByClass_ReturnValue16                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIShieldSpawningComponent_C*CallFunc_GetComponentByClass_ReturnValue17                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_AIShieldHandling_C>K2Node_DynamicCast_AsBPI_AIShield_Handling2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess16                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_AIShieldHandling_C>K2Node_DynamicCast_AsBPI_AIShield_Handling3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess17                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue16                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue17                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FGbxActionRegister>  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// class UAIShieldSpawningComponent_C*CallFunc_GetComponentByClass_ReturnValue18                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGbxActionRegister>  Temp_struct_Variable1                                            (ConstParm, ZeroConstructor, ReferenceParm)
// TScriptInterface<class IBPI_AIShieldHandling_C>K2Node_DynamicCast_AsBPI_AIShield_Handling4                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess18                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue18                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAIShieldSpawningComponent_C*CallFunc_GetComponentByClass_ReturnValue19                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_AIShieldHandling_C>K2Node_DynamicCast_AsBPI_AIShield_Handling5                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess19                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue19                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AOakAIController*            CallFunc_GetOakAIController_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue20                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOakNavComponent*            CallFunc_GetOakNavComponent_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakAIActionComponent*       CallFunc_GetOakAIActionComponent_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue21                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue22                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPChar_AI_C::ExecuteUbergraph_BPChar_AI(int32 EntryPoint, bool K2Node_Event_RequestNewMeleeWeapon3, float K2Node_Event_ThrowSpeed8, float K2Node_Event_ThrowAnglePercent2, class FName K2Node_Event_TargetSocket2, const struct FVector& K2Node_Event_TargetOffset2, const struct FRotator& K2Node_Event_ThrowAngleOffset5, float K2Node_Event_MaxPrediction5, bool K2Node_Event_RequestNewMeleeWeapon2, bool K2Node_Event_SpawnIfDoesntExist7, float K2Node_Event_ThrowSpeed7, float K2Node_Event_ThrowAnglePercent1, class FName K2Node_Event_TargetSocket1, const struct FVector& K2Node_Event_TargetOffset1, const struct FRotator& K2Node_Event_ThrowAngleOffset4, float K2Node_Event_MaxPrediction4, bool K2Node_Event_RequestNewExplosive4, bool K2Node_Event_SpawnIfDoesn_tExist, bool K2Node_Event_KillSelfOnDetonate, bool K2Node_Event_RequestNewExplosive3, class AActor* K2Node_Event_InstigatorOverride1, bool K2Node_Event_RequestNewExplosive2, class AActor* K2Node_Event_InstigatorOverride, class UAIMeleeSpawningComponent_C* CallFunc_GetComponentByClass_ReturnValue, class UAIMeleeSpawningComponent_C* CallFunc_GetComponentByClass_ReturnValue1, TScriptInterface<class IBPI_AIMeleeHandling_C> K2Node_DynamicCast_AsBPI_AIMelee_Handling, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_AIMeleeHandling_C> K2Node_DynamicCast_AsBPI_AIMelee_Handling1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UAIMeleeSpawningComponent_C* CallFunc_GetComponentByClass_ReturnValue2, class UAIExplosiveSpawningComponent_C* CallFunc_GetComponentByClass_ReturnValue3, TScriptInterface<class IBPI_AIMeleeHandling_C> K2Node_DynamicCast_AsBPI_AIMelee_Handling2, bool K2Node_DynamicCast_bSuccess2, TScriptInterface<class IBPI_AIExplosiveHandling_C> K2Node_DynamicCast_AsBPI_AIExplosive_Handling, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, class UAIExplosiveSpawningComponent_C* CallFunc_GetComponentByClass_ReturnValue4, class UAIExplosiveSpawningComponent_C* CallFunc_GetComponentByClass_ReturnValue5, TScriptInterface<class IBPI_AIExplosiveHandling_C> K2Node_DynamicCast_AsBPI_AIExplosive_Handling1, bool K2Node_DynamicCast_bSuccess4, TScriptInterface<class IBPI_AIExplosiveHandling_C> K2Node_DynamicCast_AsBPI_AIExplosive_Handling2, bool K2Node_DynamicCast_bSuccess5, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_IsValid_ReturnValue5, class UAIExplosiveSpawningComponent_C* CallFunc_GetComponentByClass_ReturnValue6, class UAIExplosiveSpawningComponent_C* CallFunc_GetComponentByClass_ReturnValue7, TScriptInterface<class IBPI_AIExplosiveHandling_C> K2Node_DynamicCast_AsBPI_AIExplosive_Handling3, bool K2Node_DynamicCast_bSuccess6, TScriptInterface<class IBPI_AIExplosiveHandling_C> K2Node_DynamicCast_AsBPI_AIExplosive_Handling4, bool K2Node_DynamicCast_bSuccess7, bool CallFunc_IsValid_ReturnValue6, bool CallFunc_IsValid_ReturnValue7, class AActor* K2Node_Event_ActorToThrowAt2, float K2Node_Event_ThrowSpeed6, float K2Node_Event_ThrowAnglePercentage5, class FName K2Node_Event_ActorSocket2, const struct FVector& K2Node_Event_ActorOffset2, const struct FRotator& K2Node_Event_ThrowAngleOffset3, float K2Node_Event_MaxPrediction3, bool K2Node_Event_RequestNewExplosive1, bool K2Node_Event_SpawnIfDoesntExist6, const struct FVector& K2Node_Event_LocationToThrowAt2, float K2Node_Event_ThrowSpeed5, float K2Node_Event_ThrowAnglePercentage4, bool K2Node_Event_RequestNewExplosive, bool K2Node_Event_SpawnIfDoesntExist5, class UAIExplosiveSpawningComponent_C* CallFunc_GetComponentByClass_ReturnValue8, class UAIExplosiveSpawningComponent_C* CallFunc_GetComponentByClass_ReturnValue9, TScriptInterface<class IBPI_AIExplosiveHandling_C> K2Node_DynamicCast_AsBPI_AIExplosive_Handling5, bool K2Node_DynamicCast_bSuccess8, TScriptInterface<class IBPI_AIExplosiveHandling_C> K2Node_DynamicCast_AsBPI_AIExplosive_Handling6, bool K2Node_DynamicCast_bSuccess9, bool CallFunc_IsValid_ReturnValue8, bool CallFunc_IsValid_ReturnValue9, class AActor* K2Node_Event_ActorToThrowAt1, float K2Node_Event_ThrowSpeed4, float K2Node_Event_ThrowAnglePercentage3, class FName K2Node_Event_ActorSocket1, const struct FVector& K2Node_Event_ActorOffset1, const struct FRotator& K2Node_Event_ThrowAngleOffset2, float K2Node_Event_MaxPrediction2, bool K2Node_Event_RequestNewMeleeWeapon1, bool K2Node_Event_SpawnIfDoesntExist4, const struct FVector& K2Node_Event_LocationToThrowAt1, float K2Node_Event_ThrowSpeed3, float K2Node_Event_ThrowAnglePercentage2, bool K2Node_Event_RequestNewMeleeWeapon, bool K2Node_Event_SpawnIfDoesntExist3, class UAIMeleeSpawningComponent_C* CallFunc_GetComponentByClass_ReturnValue10, class UAIMeleeSpawningComponent_C* CallFunc_GetComponentByClass_ReturnValue11, TScriptInterface<class IBPI_AIMeleeHandling_C> K2Node_DynamicCast_AsBPI_AIMelee_Handling3, bool K2Node_DynamicCast_bSuccess10, TScriptInterface<class IBPI_AIMeleeHandling_C> K2Node_DynamicCast_AsBPI_AIMelee_Handling4, bool K2Node_DynamicCast_bSuccess11, bool CallFunc_IsValid_ReturnValue10, bool CallFunc_IsValid_ReturnValue11, class UClass* K2Node_Event_NewMeleeWeaponClass, class UAIMeleeSpawningComponent_C* CallFunc_GetComponentByClass_ReturnValue12, class UClass* K2Node_Event_NewExplosiveClass, TScriptInterface<class IBPI_AIMeleeHandling_C> K2Node_DynamicCast_AsBPI_AIMelee_Handling5, bool K2Node_DynamicCast_bSuccess12, bool CallFunc_IsValid_ReturnValue12, class UAIExplosiveSpawningComponent_C* CallFunc_GetComponentByClass_ReturnValue13, class UClass* K2Node_Event_NewShieldClass, TScriptInterface<class IBPI_AIExplosiveHandling_C> K2Node_DynamicCast_AsBPI_AIExplosive_Handling7, bool K2Node_DynamicCast_bSuccess13, bool CallFunc_IsValid_ReturnValue13, float K2Node_Event_ThrowSpeed2, float K2Node_Event_ThrowAnglePercent, class FName K2Node_Event_TargetSocket, const struct FVector& K2Node_Event_TargetOffset, const struct FRotator& K2Node_Event_ThrowAngleOffset1, float K2Node_Event_MaxPrediction1, bool K2Node_Event_RequestNewShield3, bool K2Node_Event_SpawnIfDoesntExist2, class AActor* K2Node_Event_ActorToThrowAt, float K2Node_Event_ThrowSpeed1, float K2Node_Event_ThrowAnglePercentage1, class FName K2Node_Event_ActorSocket, const struct FVector& K2Node_Event_ActorOffset, const struct FRotator& K2Node_Event_ThrowAngleOffset, float K2Node_Event_MaxPrediction, bool K2Node_Event_RequestNewShield2, bool K2Node_Event_SpawnIfDoesntExist1, const struct FVector& K2Node_Event_LocationToThrowAt, float K2Node_Event_ThrowSpeed, float K2Node_Event_ThrowAnglePercentage, bool K2Node_Event_RequestNewShield1, bool K2Node_Event_SpawnIfDoesntExist, bool K2Node_Event_RequestNewShield, class UAIShieldSpawningComponent_C* CallFunc_GetComponentByClass_ReturnValue14, class UAIShieldSpawningComponent_C* CallFunc_GetComponentByClass_ReturnValue15, TScriptInterface<class IBPI_AIShieldHandling_C> K2Node_DynamicCast_AsBPI_AIShield_Handling, bool K2Node_DynamicCast_bSuccess14, TScriptInterface<class IBPI_AIShieldHandling_C> K2Node_DynamicCast_AsBPI_AIShield_Handling1, bool K2Node_DynamicCast_bSuccess15, bool CallFunc_IsValid_ReturnValue14, bool CallFunc_IsValid_ReturnValue15, class UAIShieldSpawningComponent_C* CallFunc_GetComponentByClass_ReturnValue16, class UAIShieldSpawningComponent_C* CallFunc_GetComponentByClass_ReturnValue17, TScriptInterface<class IBPI_AIShieldHandling_C> K2Node_DynamicCast_AsBPI_AIShield_Handling2, bool K2Node_DynamicCast_bSuccess16, TScriptInterface<class IBPI_AIShieldHandling_C> K2Node_DynamicCast_AsBPI_AIShield_Handling3, bool K2Node_DynamicCast_bSuccess17, bool CallFunc_IsValid_ReturnValue16, bool CallFunc_IsValid_ReturnValue17, TArray<struct FGbxActionRegister>& Temp_struct_Variable, class UAIShieldSpawningComponent_C* CallFunc_GetComponentByClass_ReturnValue18, TArray<struct FGbxActionRegister>& Temp_struct_Variable1, TScriptInterface<class IBPI_AIShieldHandling_C> K2Node_DynamicCast_AsBPI_AIShield_Handling4, bool K2Node_DynamicCast_bSuccess18, bool CallFunc_IsValid_ReturnValue18, class UAIShieldSpawningComponent_C* CallFunc_GetComponentByClass_ReturnValue19, TScriptInterface<class IBPI_AIShieldHandling_C> K2Node_DynamicCast_AsBPI_AIShield_Handling5, bool K2Node_DynamicCast_bSuccess19, bool CallFunc_IsValid_ReturnValue19, class AOakAIController* CallFunc_GetOakAIController_ReturnValue, bool CallFunc_IsValid_ReturnValue20, bool CallFunc_NotEqual_ClassClass_ReturnValue, class UOakNavComponent* CallFunc_GetOakNavComponent_ReturnValue, class UOakAIActionComponent* CallFunc_GetOakAIActionComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue21, bool CallFunc_IsValid_ReturnValue22, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UGbxAction* CallFunc_K2Play_ReturnValue, class UGbxAction* CallFunc_K2Play_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPChar_AI_C", "ExecuteUbergraph_BPChar_AI");

	Params::ABPChar_AI_C_ExecuteUbergraph_BPChar_AI_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_RequestNewMeleeWeapon3 = K2Node_Event_RequestNewMeleeWeapon3;
	Parms.K2Node_Event_ThrowSpeed8 = K2Node_Event_ThrowSpeed8;
	Parms.K2Node_Event_ThrowAnglePercent2 = K2Node_Event_ThrowAnglePercent2;
	Parms.K2Node_Event_TargetSocket2 = K2Node_Event_TargetSocket2;
	Parms.K2Node_Event_TargetOffset2 = K2Node_Event_TargetOffset2;
	Parms.K2Node_Event_ThrowAngleOffset5 = K2Node_Event_ThrowAngleOffset5;
	Parms.K2Node_Event_MaxPrediction5 = K2Node_Event_MaxPrediction5;
	Parms.K2Node_Event_RequestNewMeleeWeapon2 = K2Node_Event_RequestNewMeleeWeapon2;
	Parms.K2Node_Event_SpawnIfDoesntExist7 = K2Node_Event_SpawnIfDoesntExist7;
	Parms.K2Node_Event_ThrowSpeed7 = K2Node_Event_ThrowSpeed7;
	Parms.K2Node_Event_ThrowAnglePercent1 = K2Node_Event_ThrowAnglePercent1;
	Parms.K2Node_Event_TargetSocket1 = K2Node_Event_TargetSocket1;
	Parms.K2Node_Event_TargetOffset1 = K2Node_Event_TargetOffset1;
	Parms.K2Node_Event_ThrowAngleOffset4 = K2Node_Event_ThrowAngleOffset4;
	Parms.K2Node_Event_MaxPrediction4 = K2Node_Event_MaxPrediction4;
	Parms.K2Node_Event_RequestNewExplosive4 = K2Node_Event_RequestNewExplosive4;
	Parms.K2Node_Event_SpawnIfDoesn_tExist = K2Node_Event_SpawnIfDoesn_tExist;
	Parms.K2Node_Event_KillSelfOnDetonate = K2Node_Event_KillSelfOnDetonate;
	Parms.K2Node_Event_RequestNewExplosive3 = K2Node_Event_RequestNewExplosive3;
	Parms.K2Node_Event_InstigatorOverride1 = K2Node_Event_InstigatorOverride1;
	Parms.K2Node_Event_RequestNewExplosive2 = K2Node_Event_RequestNewExplosive2;
	Parms.K2Node_Event_InstigatorOverride = K2Node_Event_InstigatorOverride;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue1 = CallFunc_GetComponentByClass_ReturnValue1;
	Parms.K2Node_DynamicCast_AsBPI_AIMelee_Handling = K2Node_DynamicCast_AsBPI_AIMelee_Handling;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBPI_AIMelee_Handling1 = K2Node_DynamicCast_AsBPI_AIMelee_Handling1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetComponentByClass_ReturnValue2 = CallFunc_GetComponentByClass_ReturnValue2;
	Parms.CallFunc_GetComponentByClass_ReturnValue3 = CallFunc_GetComponentByClass_ReturnValue3;
	Parms.K2Node_DynamicCast_AsBPI_AIMelee_Handling2 = K2Node_DynamicCast_AsBPI_AIMelee_Handling2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_DynamicCast_AsBPI_AIExplosive_Handling = K2Node_DynamicCast_AsBPI_AIExplosive_Handling;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_GetComponentByClass_ReturnValue4 = CallFunc_GetComponentByClass_ReturnValue4;
	Parms.CallFunc_GetComponentByClass_ReturnValue5 = CallFunc_GetComponentByClass_ReturnValue5;
	Parms.K2Node_DynamicCast_AsBPI_AIExplosive_Handling1 = K2Node_DynamicCast_AsBPI_AIExplosive_Handling1;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.K2Node_DynamicCast_AsBPI_AIExplosive_Handling2 = K2Node_DynamicCast_AsBPI_AIExplosive_Handling2;
	Parms.K2Node_DynamicCast_bSuccess5 = K2Node_DynamicCast_bSuccess5;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.CallFunc_IsValid_ReturnValue5 = CallFunc_IsValid_ReturnValue5;
	Parms.CallFunc_GetComponentByClass_ReturnValue6 = CallFunc_GetComponentByClass_ReturnValue6;
	Parms.CallFunc_GetComponentByClass_ReturnValue7 = CallFunc_GetComponentByClass_ReturnValue7;
	Parms.K2Node_DynamicCast_AsBPI_AIExplosive_Handling3 = K2Node_DynamicCast_AsBPI_AIExplosive_Handling3;
	Parms.K2Node_DynamicCast_bSuccess6 = K2Node_DynamicCast_bSuccess6;
	Parms.K2Node_DynamicCast_AsBPI_AIExplosive_Handling4 = K2Node_DynamicCast_AsBPI_AIExplosive_Handling4;
	Parms.K2Node_DynamicCast_bSuccess7 = K2Node_DynamicCast_bSuccess7;
	Parms.CallFunc_IsValid_ReturnValue6 = CallFunc_IsValid_ReturnValue6;
	Parms.CallFunc_IsValid_ReturnValue7 = CallFunc_IsValid_ReturnValue7;
	Parms.K2Node_Event_ActorToThrowAt2 = K2Node_Event_ActorToThrowAt2;
	Parms.K2Node_Event_ThrowSpeed6 = K2Node_Event_ThrowSpeed6;
	Parms.K2Node_Event_ThrowAnglePercentage5 = K2Node_Event_ThrowAnglePercentage5;
	Parms.K2Node_Event_ActorSocket2 = K2Node_Event_ActorSocket2;
	Parms.K2Node_Event_ActorOffset2 = K2Node_Event_ActorOffset2;
	Parms.K2Node_Event_ThrowAngleOffset3 = K2Node_Event_ThrowAngleOffset3;
	Parms.K2Node_Event_MaxPrediction3 = K2Node_Event_MaxPrediction3;
	Parms.K2Node_Event_RequestNewExplosive1 = K2Node_Event_RequestNewExplosive1;
	Parms.K2Node_Event_SpawnIfDoesntExist6 = K2Node_Event_SpawnIfDoesntExist6;
	Parms.K2Node_Event_LocationToThrowAt2 = K2Node_Event_LocationToThrowAt2;
	Parms.K2Node_Event_ThrowSpeed5 = K2Node_Event_ThrowSpeed5;
	Parms.K2Node_Event_ThrowAnglePercentage4 = K2Node_Event_ThrowAnglePercentage4;
	Parms.K2Node_Event_RequestNewExplosive = K2Node_Event_RequestNewExplosive;
	Parms.K2Node_Event_SpawnIfDoesntExist5 = K2Node_Event_SpawnIfDoesntExist5;
	Parms.CallFunc_GetComponentByClass_ReturnValue8 = CallFunc_GetComponentByClass_ReturnValue8;
	Parms.CallFunc_GetComponentByClass_ReturnValue9 = CallFunc_GetComponentByClass_ReturnValue9;
	Parms.K2Node_DynamicCast_AsBPI_AIExplosive_Handling5 = K2Node_DynamicCast_AsBPI_AIExplosive_Handling5;
	Parms.K2Node_DynamicCast_bSuccess8 = K2Node_DynamicCast_bSuccess8;
	Parms.K2Node_DynamicCast_AsBPI_AIExplosive_Handling6 = K2Node_DynamicCast_AsBPI_AIExplosive_Handling6;
	Parms.K2Node_DynamicCast_bSuccess9 = K2Node_DynamicCast_bSuccess9;
	Parms.CallFunc_IsValid_ReturnValue8 = CallFunc_IsValid_ReturnValue8;
	Parms.CallFunc_IsValid_ReturnValue9 = CallFunc_IsValid_ReturnValue9;
	Parms.K2Node_Event_ActorToThrowAt1 = K2Node_Event_ActorToThrowAt1;
	Parms.K2Node_Event_ThrowSpeed4 = K2Node_Event_ThrowSpeed4;
	Parms.K2Node_Event_ThrowAnglePercentage3 = K2Node_Event_ThrowAnglePercentage3;
	Parms.K2Node_Event_ActorSocket1 = K2Node_Event_ActorSocket1;
	Parms.K2Node_Event_ActorOffset1 = K2Node_Event_ActorOffset1;
	Parms.K2Node_Event_ThrowAngleOffset2 = K2Node_Event_ThrowAngleOffset2;
	Parms.K2Node_Event_MaxPrediction2 = K2Node_Event_MaxPrediction2;
	Parms.K2Node_Event_RequestNewMeleeWeapon1 = K2Node_Event_RequestNewMeleeWeapon1;
	Parms.K2Node_Event_SpawnIfDoesntExist4 = K2Node_Event_SpawnIfDoesntExist4;
	Parms.K2Node_Event_LocationToThrowAt1 = K2Node_Event_LocationToThrowAt1;
	Parms.K2Node_Event_ThrowSpeed3 = K2Node_Event_ThrowSpeed3;
	Parms.K2Node_Event_ThrowAnglePercentage2 = K2Node_Event_ThrowAnglePercentage2;
	Parms.K2Node_Event_RequestNewMeleeWeapon = K2Node_Event_RequestNewMeleeWeapon;
	Parms.K2Node_Event_SpawnIfDoesntExist3 = K2Node_Event_SpawnIfDoesntExist3;
	Parms.CallFunc_GetComponentByClass_ReturnValue10 = CallFunc_GetComponentByClass_ReturnValue10;
	Parms.CallFunc_GetComponentByClass_ReturnValue11 = CallFunc_GetComponentByClass_ReturnValue11;
	Parms.K2Node_DynamicCast_AsBPI_AIMelee_Handling3 = K2Node_DynamicCast_AsBPI_AIMelee_Handling3;
	Parms.K2Node_DynamicCast_bSuccess10 = K2Node_DynamicCast_bSuccess10;
	Parms.K2Node_DynamicCast_AsBPI_AIMelee_Handling4 = K2Node_DynamicCast_AsBPI_AIMelee_Handling4;
	Parms.K2Node_DynamicCast_bSuccess11 = K2Node_DynamicCast_bSuccess11;
	Parms.CallFunc_IsValid_ReturnValue10 = CallFunc_IsValid_ReturnValue10;
	Parms.CallFunc_IsValid_ReturnValue11 = CallFunc_IsValid_ReturnValue11;
	Parms.K2Node_Event_NewMeleeWeaponClass = K2Node_Event_NewMeleeWeaponClass;
	Parms.CallFunc_GetComponentByClass_ReturnValue12 = CallFunc_GetComponentByClass_ReturnValue12;
	Parms.K2Node_Event_NewExplosiveClass = K2Node_Event_NewExplosiveClass;
	Parms.K2Node_DynamicCast_AsBPI_AIMelee_Handling5 = K2Node_DynamicCast_AsBPI_AIMelee_Handling5;
	Parms.K2Node_DynamicCast_bSuccess12 = K2Node_DynamicCast_bSuccess12;
	Parms.CallFunc_IsValid_ReturnValue12 = CallFunc_IsValid_ReturnValue12;
	Parms.CallFunc_GetComponentByClass_ReturnValue13 = CallFunc_GetComponentByClass_ReturnValue13;
	Parms.K2Node_Event_NewShieldClass = K2Node_Event_NewShieldClass;
	Parms.K2Node_DynamicCast_AsBPI_AIExplosive_Handling7 = K2Node_DynamicCast_AsBPI_AIExplosive_Handling7;
	Parms.K2Node_DynamicCast_bSuccess13 = K2Node_DynamicCast_bSuccess13;
	Parms.CallFunc_IsValid_ReturnValue13 = CallFunc_IsValid_ReturnValue13;
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
	Parms.CallFunc_GetComponentByClass_ReturnValue14 = CallFunc_GetComponentByClass_ReturnValue14;
	Parms.CallFunc_GetComponentByClass_ReturnValue15 = CallFunc_GetComponentByClass_ReturnValue15;
	Parms.K2Node_DynamicCast_AsBPI_AIShield_Handling = K2Node_DynamicCast_AsBPI_AIShield_Handling;
	Parms.K2Node_DynamicCast_bSuccess14 = K2Node_DynamicCast_bSuccess14;
	Parms.K2Node_DynamicCast_AsBPI_AIShield_Handling1 = K2Node_DynamicCast_AsBPI_AIShield_Handling1;
	Parms.K2Node_DynamicCast_bSuccess15 = K2Node_DynamicCast_bSuccess15;
	Parms.CallFunc_IsValid_ReturnValue14 = CallFunc_IsValid_ReturnValue14;
	Parms.CallFunc_IsValid_ReturnValue15 = CallFunc_IsValid_ReturnValue15;
	Parms.CallFunc_GetComponentByClass_ReturnValue16 = CallFunc_GetComponentByClass_ReturnValue16;
	Parms.CallFunc_GetComponentByClass_ReturnValue17 = CallFunc_GetComponentByClass_ReturnValue17;
	Parms.K2Node_DynamicCast_AsBPI_AIShield_Handling2 = K2Node_DynamicCast_AsBPI_AIShield_Handling2;
	Parms.K2Node_DynamicCast_bSuccess16 = K2Node_DynamicCast_bSuccess16;
	Parms.K2Node_DynamicCast_AsBPI_AIShield_Handling3 = K2Node_DynamicCast_AsBPI_AIShield_Handling3;
	Parms.K2Node_DynamicCast_bSuccess17 = K2Node_DynamicCast_bSuccess17;
	Parms.CallFunc_IsValid_ReturnValue16 = CallFunc_IsValid_ReturnValue16;
	Parms.CallFunc_IsValid_ReturnValue17 = CallFunc_IsValid_ReturnValue17;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetComponentByClass_ReturnValue18 = CallFunc_GetComponentByClass_ReturnValue18;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.K2Node_DynamicCast_AsBPI_AIShield_Handling4 = K2Node_DynamicCast_AsBPI_AIShield_Handling4;
	Parms.K2Node_DynamicCast_bSuccess18 = K2Node_DynamicCast_bSuccess18;
	Parms.CallFunc_IsValid_ReturnValue18 = CallFunc_IsValid_ReturnValue18;
	Parms.CallFunc_GetComponentByClass_ReturnValue19 = CallFunc_GetComponentByClass_ReturnValue19;
	Parms.K2Node_DynamicCast_AsBPI_AIShield_Handling5 = K2Node_DynamicCast_AsBPI_AIShield_Handling5;
	Parms.K2Node_DynamicCast_bSuccess19 = K2Node_DynamicCast_bSuccess19;
	Parms.CallFunc_IsValid_ReturnValue19 = CallFunc_IsValid_ReturnValue19;
	Parms.CallFunc_GetOakAIController_ReturnValue = CallFunc_GetOakAIController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue20 = CallFunc_IsValid_ReturnValue20;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue = CallFunc_NotEqual_ClassClass_ReturnValue;
	Parms.CallFunc_GetOakNavComponent_ReturnValue = CallFunc_GetOakNavComponent_ReturnValue;
	Parms.CallFunc_GetOakAIActionComponent_ReturnValue = CallFunc_GetOakAIActionComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue21 = CallFunc_IsValid_ReturnValue21;
	Parms.CallFunc_IsValid_ReturnValue22 = CallFunc_IsValid_ReturnValue22;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_K2Play_ReturnValue = CallFunc_K2Play_ReturnValue;
	Parms.CallFunc_K2Play_ReturnValue1 = CallFunc_K2Play_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}


