#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIStolenProjDetector.AIStolenProjDetector_C
// (SceneComponent, PrimitiveComponent)

class UClass* UAIStolenProjDetector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIStolenProjDetector_C");

	return Clss;
}


// AIStolenProjDetector_C AIStolenProjDetector.Default__AIStolenProjDetector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIStolenProjDetector_C* UAIStolenProjDetector_C::GetDefaultObj()
{
	static class UAIStolenProjDetector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIStolenProjDetector_C*>(UAIStolenProjDetector_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIStolenProjDetector.AIStolenProjDetector_C.AIStolenProj_AttemptDetonate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DetonateProjectile_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIStolenProjDetector_C::AIStolenProj_AttemptDetonate(bool* Success, bool CallFunc_DetonateProjectile_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIStolenProjDetector_C", "AIStolenProj_AttemptDetonate");

	Params::UAIStolenProjDetector_C_AIStolenProj_AttemptDetonate_Params Parms{};

	Parms.CallFunc_DetonateProjectile_ReturnValue = CallFunc_DetonateProjectile_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function AIStolenProjDetector.AIStolenProjDetector_C.AIStolenProj_AttemptDisarm
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DisarmProjectile_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIStolenProjDetector_C::AIStolenProj_AttemptDisarm(bool* Success, bool CallFunc_DisarmProjectile_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIStolenProjDetector_C", "AIStolenProj_AttemptDisarm");

	Params::UAIStolenProjDetector_C_AIStolenProj_AttemptDisarm_Params Parms{};

	Parms.CallFunc_DisarmProjectile_ReturnValue = CallFunc_DisarmProjectile_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function AIStolenProjDetector.AIStolenProjDetector_C.AIStolenProj_AttemptDestroy
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DestroyProjectile_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIStolenProjDetector_C::AIStolenProj_AttemptDestroy(bool* Success, bool CallFunc_DestroyProjectile_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIStolenProjDetector_C", "AIStolenProj_AttemptDestroy");

	Params::UAIStolenProjDetector_C_AIStolenProj_AttemptDestroy_Params Parms{};

	Parms.CallFunc_DestroyProjectile_ReturnValue = CallFunc_DestroyProjectile_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function AIStolenProjDetector.AIStolenProjDetector_C.AIStolenProj_AttemptAttach
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SocketName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AttachProjectile_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIStolenProjDetector_C::AIStolenProj_AttemptAttach(class FName SocketName, bool* Success, bool CallFunc_AttachProjectile_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIStolenProjDetector_C", "AIStolenProj_AttemptAttach");

	Params::UAIStolenProjDetector_C_AIStolenProj_AttemptAttach_Params Parms{};

	Parms.SocketName = SocketName;
	Parms.CallFunc_AttachProjectile_ReturnValue = CallFunc_AttachProjectile_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function AIStolenProjDetector.AIStolenProjDetector_C.AIStolenProj_AttemptReturnTo
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
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ReturnProjectileToLocation_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ReturnProjectileToActor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ReturnProjectileToOwner_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ReturnProjectileToTarget_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIStolenProjDetector_C::AIStolenProj_AttemptReturnTo(enum class Enum_AIThrowAtStyle ReturnTo, class FName TargetSocket, float MaxPrediction, float Speed, float AnglePercent, const struct FRotator& DirectionOffset, const struct FVector& TargetOffset, class AActor* SpecifiedActor, const struct FVector& WorldLocation, bool* Success, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_ReturnProjectileToLocation_ReturnValue, bool CallFunc_ReturnProjectileToActor_ReturnValue, bool CallFunc_ReturnProjectileToOwner_ReturnValue, bool CallFunc_ReturnProjectileToTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIStolenProjDetector_C", "AIStolenProj_AttemptReturnTo");

	Params::UAIStolenProjDetector_C_AIStolenProj_AttemptReturnTo_Params Parms{};

	Parms.ReturnTo = ReturnTo;
	Parms.TargetSocket = TargetSocket;
	Parms.MaxPrediction = MaxPrediction;
	Parms.Speed = Speed;
	Parms.AnglePercent = AnglePercent;
	Parms.DirectionOffset = DirectionOffset;
	Parms.TargetOffset = TargetOffset;
	Parms.SpecifiedActor = SpecifiedActor;
	Parms.WorldLocation = WorldLocation;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_ReturnProjectileToLocation_ReturnValue = CallFunc_ReturnProjectileToLocation_ReturnValue;
	Parms.CallFunc_ReturnProjectileToActor_ReturnValue = CallFunc_ReturnProjectileToActor_ReturnValue;
	Parms.CallFunc_ReturnProjectileToOwner_ReturnValue = CallFunc_ReturnProjectileToOwner_ReturnValue;
	Parms.CallFunc_ReturnProjectileToTarget_ReturnValue = CallFunc_ReturnProjectileToTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function AIStolenProjDetector.AIStolenProjDetector_C.AIStolenProj_AttemptLerpToSocket
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SocketToLerpTo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LerpDuration                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LerpToSocket_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIStolenProjDetector_C::AIStolenProj_AttemptLerpToSocket(class FName SocketToLerpTo, float LerpDuration, bool* Success, bool CallFunc_LerpToSocket_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIStolenProjDetector_C", "AIStolenProj_AttemptLerpToSocket");

	Params::UAIStolenProjDetector_C_AIStolenProj_AttemptLerpToSocket_Params Parms{};

	Parms.SocketToLerpTo = SocketToLerpTo;
	Parms.LerpDuration = LerpDuration;
	Parms.CallFunc_LerpToSocket_ReturnValue = CallFunc_LerpToSocket_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function AIStolenProjDetector.AIStolenProjDetector_C.AIStolenProj_GetElementalTypeFromStolenProjectile
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOakElementalType       StolenProjectileElement                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       CallFunc_GetElementalType_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIStolenProjDetector_C::AIStolenProj_GetElementalTypeFromStolenProjectile(enum class EOakElementalType* StolenProjectileElement, enum class EOakElementalType CallFunc_GetElementalType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIStolenProjDetector_C", "AIStolenProj_GetElementalTypeFromStolenProjectile");

	Params::UAIStolenProjDetector_C_AIStolenProj_GetElementalTypeFromStolenProjectile_Params Parms{};

	Parms.CallFunc_GetElementalType_ReturnValue = CallFunc_GetElementalType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (StolenProjectileElement != nullptr)
		*StolenProjectileElement = Parms.StolenProjectileElement;

}


// Function AIStolenProjDetector.AIStolenProjDetector_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UAIStolenProjDetector_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIStolenProjDetector_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIStolenProjDetector.AIStolenProjDetector_C.OnStolenProjectileUpdated_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      StolenProjectile                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIStolenProjDetector_C::OnStolenProjectileUpdated_Event_0(class AActor* StolenProjectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIStolenProjDetector_C", "OnStolenProjectileUpdated_Event_0");

	Params::UAIStolenProjDetector_C_OnStolenProjectileUpdated_Event_0_Params Parms{};

	Parms.StolenProjectile = StolenProjectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIStolenProjDetector.AIStolenProjDetector_C.OnStolenProjectileDestroyed_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      StolenProjectile                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIStolenProjDetector_C::OnStolenProjectileDestroyed_Event_0(class AActor* StolenProjectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIStolenProjDetector_C", "OnStolenProjectileDestroyed_Event_0");

	Params::UAIStolenProjDetector_C_OnStolenProjectileDestroyed_Event_0_Params Parms{};

	Parms.StolenProjectile = StolenProjectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIStolenProjDetector.AIStolenProjDetector_C.OnStolenProjectileReturned_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      StolenProjectile                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIStolenProjDetector_C::OnStolenProjectileReturned_Event_0(class AActor* StolenProjectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIStolenProjDetector_C", "OnStolenProjectileReturned_Event_0");

	Params::UAIStolenProjDetector_C_OnStolenProjectileReturned_Event_0_Params Parms{};

	Parms.StolenProjectile = StolenProjectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIStolenProjDetector.AIStolenProjDetector_C.ExecuteUbergraph_AIStolenProjDetector
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_StolenProjectile                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class AActor*                      K2Node_CustomEvent_StolenProjectile2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_StolenProjectile1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIStolenProjDetector_C::ExecuteUbergraph_AIStolenProjDetector(int32 EntryPoint, class AActor* K2Node_CustomEvent_StolenProjectile, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class AActor* K2Node_CustomEvent_StolenProjectile2, class AActor* K2Node_CustomEvent_StolenProjectile1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIStolenProjDetector_C", "ExecuteUbergraph_AIStolenProjDetector");

	Params::UAIStolenProjDetector_C_ExecuteUbergraph_AIStolenProjDetector_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_StolenProjectile = K2Node_CustomEvent_StolenProjectile;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CustomEvent_StolenProjectile2 = K2Node_CustomEvent_StolenProjectile2;
	Parms.K2Node_CustomEvent_StolenProjectile1 = K2Node_CustomEvent_StolenProjectile1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIStolenProjDetector.AIStolenProjDetector_C.AIStolenProjectileDestroyFX__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyStolenProjectile                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIStolenProjDetector_C::AIStolenProjectileDestroyFX__DelegateSignature(class AActor* MyStolenProjectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIStolenProjDetector_C", "AIStolenProjectileDestroyFX__DelegateSignature");

	Params::UAIStolenProjDetector_C_AIStolenProjectileDestroyFX__DelegateSignature_Params Parms{};

	Parms.MyStolenProjectile = MyStolenProjectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIStolenProjDetector.AIStolenProjDetector_C.AIStolenProjectileReturnFX__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyStolenProjectile                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIStolenProjDetector_C::AIStolenProjectileReturnFX__DelegateSignature(class AActor* MyStolenProjectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIStolenProjDetector_C", "AIStolenProjectileReturnFX__DelegateSignature");

	Params::UAIStolenProjDetector_C_AIStolenProjectileReturnFX__DelegateSignature_Params Parms{};

	Parms.MyStolenProjectile = MyStolenProjectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIStolenProjDetector.AIStolenProjDetector_C.AIStolenProjectileUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyStolenProjectile                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIStolenProjDetector_C::AIStolenProjectileUpdated__DelegateSignature(class AActor* MyStolenProjectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIStolenProjDetector_C", "AIStolenProjectileUpdated__DelegateSignature");

	Params::UAIStolenProjDetector_C_AIStolenProjectileUpdated__DelegateSignature_Params Parms{};

	Parms.MyStolenProjectile = MyStolenProjectile;

	UObject::ProcessEvent(Func, &Parms);

}

}


