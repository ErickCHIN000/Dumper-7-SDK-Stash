#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ButterflyEffect_Ballerina.BP_ButterflyEffect_Ballerina_C
// (Actor)

class UClass* ABP_ButterflyEffect_Ballerina_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ButterflyEffect_Ballerina_C");

	return Clss;
}


// BP_ButterflyEffect_Ballerina_C BP_ButterflyEffect_Ballerina.Default__BP_ButterflyEffect_Ballerina_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ButterflyEffect_Ballerina_C* ABP_ButterflyEffect_Ballerina_C::GetDefaultObj()
{
	static class ABP_ButterflyEffect_Ballerina_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ButterflyEffect_Ballerina_C*>(ABP_ButterflyEffect_Ballerina_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ButterflyEffect_Ballerina.BP_ButterflyEffect_Ballerina_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ButterflyEffect_Ballerina_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ButterflyEffect_Ballerina_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ButterflyEffect_Ballerina.BP_ButterflyEffect_Ballerina_C.BallerinaTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_ButterflyEffect_Ballerina_C::BallerinaTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ButterflyEffect_Ballerina_C", "BallerinaTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ButterflyEffect_Ballerina.BP_ButterflyEffect_Ballerina_C.BallerinaTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_ButterflyEffect_Ballerina_C::BallerinaTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ButterflyEffect_Ballerina_C", "BallerinaTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ButterflyEffect_Ballerina.BP_ButterflyEffect_Ballerina_C.PirrouteTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_ButterflyEffect_Ballerina_C::PirrouteTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ButterflyEffect_Ballerina_C", "PirrouteTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ButterflyEffect_Ballerina.BP_ButterflyEffect_Ballerina_C.PirrouteTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_ButterflyEffect_Ballerina_C::PirrouteTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ButterflyEffect_Ballerina_C", "PirrouteTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ButterflyEffect_Ballerina.BP_ButterflyEffect_Ballerina_C.Pirroute2Timeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_ButterflyEffect_Ballerina_C::Pirroute2Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ButterflyEffect_Ballerina_C", "Pirroute2Timeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ButterflyEffect_Ballerina.BP_ButterflyEffect_Ballerina_C.Pirroute2Timeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_ButterflyEffect_Ballerina_C::Pirroute2Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ButterflyEffect_Ballerina_C", "Pirroute2Timeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ButterflyEffect_Ballerina.BP_ButterflyEffect_Ballerina_C.OnNotifyEnd_5C8F8311450EAC1D61CEC5AA7EB27E3C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ButterflyEffect_Ballerina_C::OnNotifyEnd_5C8F8311450EAC1D61CEC5AA7EB27E3C(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ButterflyEffect_Ballerina_C", "OnNotifyEnd_5C8F8311450EAC1D61CEC5AA7EB27E3C");

	Params::ABP_ButterflyEffect_Ballerina_C_OnNotifyEnd_5C8F8311450EAC1D61CEC5AA7EB27E3C_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ButterflyEffect_Ballerina.BP_ButterflyEffect_Ballerina_C.OnNotifyBegin_5C8F8311450EAC1D61CEC5AA7EB27E3C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ButterflyEffect_Ballerina_C::OnNotifyBegin_5C8F8311450EAC1D61CEC5AA7EB27E3C(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ButterflyEffect_Ballerina_C", "OnNotifyBegin_5C8F8311450EAC1D61CEC5AA7EB27E3C");

	Params::ABP_ButterflyEffect_Ballerina_C_OnNotifyBegin_5C8F8311450EAC1D61CEC5AA7EB27E3C_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ButterflyEffect_Ballerina.BP_ButterflyEffect_Ballerina_C.OnInterrupted_5C8F8311450EAC1D61CEC5AA7EB27E3C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ButterflyEffect_Ballerina_C::OnInterrupted_5C8F8311450EAC1D61CEC5AA7EB27E3C(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ButterflyEffect_Ballerina_C", "OnInterrupted_5C8F8311450EAC1D61CEC5AA7EB27E3C");

	Params::ABP_ButterflyEffect_Ballerina_C_OnInterrupted_5C8F8311450EAC1D61CEC5AA7EB27E3C_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ButterflyEffect_Ballerina.BP_ButterflyEffect_Ballerina_C.OnBlendOut_5C8F8311450EAC1D61CEC5AA7EB27E3C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ButterflyEffect_Ballerina_C::OnBlendOut_5C8F8311450EAC1D61CEC5AA7EB27E3C(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ButterflyEffect_Ballerina_C", "OnBlendOut_5C8F8311450EAC1D61CEC5AA7EB27E3C");

	Params::ABP_ButterflyEffect_Ballerina_C_OnBlendOut_5C8F8311450EAC1D61CEC5AA7EB27E3C_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ButterflyEffect_Ballerina.BP_ButterflyEffect_Ballerina_C.OnCompleted_5C8F8311450EAC1D61CEC5AA7EB27E3C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ButterflyEffect_Ballerina_C::OnCompleted_5C8F8311450EAC1D61CEC5AA7EB27E3C(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ButterflyEffect_Ballerina_C", "OnCompleted_5C8F8311450EAC1D61CEC5AA7EB27E3C");

	Params::ABP_ButterflyEffect_Ballerina_C_OnCompleted_5C8F8311450EAC1D61CEC5AA7EB27E3C_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ButterflyEffect_Ballerina.BP_ButterflyEffect_Ballerina_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ButterflyEffect_Ballerina_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ButterflyEffect_Ballerina_C", "ReceiveAnyDamage");

	Params::ABP_ButterflyEffect_Ballerina_C_ReceiveAnyDamage_Params Parms{};

	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ButterflyEffect_Ballerina.BP_ButterflyEffect_Ballerina_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ButterflyEffect_Ballerina_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ButterflyEffect_Ballerina_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ButterflyEffect_Ballerina.BP_ButterflyEffect_Ballerina_C.StartSpinning - Multicast
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ButterflyEffect_Ballerina_C::StartSpinning_Minus_Multicast()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ButterflyEffect_Ballerina_C", "StartSpinning - Multicast");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ButterflyEffect_Ballerina.BP_ButterflyEffect_Ballerina_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ButterflyEffect_Ballerina_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ButterflyEffect_Ballerina_C", "ReceiveEndPlay");

	Params::ABP_ButterflyEffect_Ballerina_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ButterflyEffect_Ballerina.BP_ButterflyEffect_Ballerina_C.BndEvt__GGDynamicAssetHolding_K2Node_ComponentBoundEvent_0_OnDynamicLoadingFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGGDynamicAssetHoldingComponent*DynAssetComp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ButterflyEffect_Ballerina_C::BndEvt__GGDynamicAssetHolding_K2Node_ComponentBoundEvent_0_OnDynamicLoadingFinished__DelegateSignature(class UGGDynamicAssetHoldingComponent* DynAssetComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ButterflyEffect_Ballerina_C", "BndEvt__GGDynamicAssetHolding_K2Node_ComponentBoundEvent_0_OnDynamicLoadingFinished__DelegateSignature");

	Params::ABP_ButterflyEffect_Ballerina_C_BndEvt__GGDynamicAssetHolding_K2Node_ComponentBoundEvent_0_OnDynamicLoadingFinished__DelegateSignature_Params Parms{};

	Parms.DynAssetComp = DynAssetComp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ButterflyEffect_Ballerina.BP_ButterflyEffect_Ballerina_C.BndEvt__GGDynamicAssetHolding_K2Node_ComponentBoundEvent_1_OnLostSignificance__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGGDynamicAssetHoldingComponent*DynAssetComp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ButterflyEffect_Ballerina_C::BndEvt__GGDynamicAssetHolding_K2Node_ComponentBoundEvent_1_OnLostSignificance__DelegateSignature(class UGGDynamicAssetHoldingComponent* DynAssetComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ButterflyEffect_Ballerina_C", "BndEvt__GGDynamicAssetHolding_K2Node_ComponentBoundEvent_1_OnLostSignificance__DelegateSignature");

	Params::ABP_ButterflyEffect_Ballerina_C_BndEvt__GGDynamicAssetHolding_K2Node_ComponentBoundEvent_1_OnLostSignificance__DelegateSignature_Params Parms{};

	Parms.DynAssetComp = DynAssetComp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ButterflyEffect_Ballerina.BP_ButterflyEffect_Ballerina_C.PrepareToAttachToTornado
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ButterflyEffect_Ballerina_C::PrepareToAttachToTornado()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ButterflyEffect_Ballerina_C", "PrepareToAttachToTornado");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ButterflyEffect_Ballerina.BP_ButterflyEffect_Ballerina_C.ExecuteUbergraph_BP_ButterflyEffect_Ballerina
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 K2Node_Event_DamageType                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_Event_InstigatedBy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_DynamicCast_AsGGGoat                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_RLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystem*             CallFunc_GetLoadedAsset_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGDynamicAssetHoldingComponent*K2Node_ComponentBoundEvent_DynAssetComp_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGDynamicAssetHoldingComponent*K2Node_ComponentBoundEvent_DynAssetComp                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundCue*                   CallFunc_GetLoadedAsset_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ButterflyEffect_Ballerina_C::ExecuteUbergraph_BP_ButterflyEffect_Ballerina(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_IsClosed_Variable, float K2Node_Event_Damage, class UDamageType* K2Node_Event_DamageType, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, class AGGGoat* K2Node_DynamicCast_AsGGGoat, bool K2Node_DynamicCast_bSuccess, const struct FRotator& CallFunc_RLerp_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool Temp_bool_Has_Been_Initd_Variable, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UGGDynamicAssetHoldingComponent* K2Node_ComponentBoundEvent_DynAssetComp_1, class UGGDynamicAssetHoldingComponent* K2Node_ComponentBoundEvent_DynAssetComp, class USoundCue* CallFunc_GetLoadedAsset_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ButterflyEffect_Ballerina_C", "ExecuteUbergraph_BP_ButterflyEffect_Ballerina");

	Params::ABP_ButterflyEffect_Ballerina_C_ExecuteUbergraph_BP_ButterflyEffect_Ballerina_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageType = K2Node_Event_DamageType;
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.K2Node_DynamicCast_AsGGGoat = K2Node_DynamicCast_AsGGGoat;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_RLerp_ReturnValue = CallFunc_RLerp_ReturnValue;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_GetLoadedAsset_ReturnValue = CallFunc_GetLoadedAsset_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_DynAssetComp_1 = K2Node_ComponentBoundEvent_DynAssetComp_1;
	Parms.K2Node_ComponentBoundEvent_DynAssetComp = K2Node_ComponentBoundEvent_DynAssetComp;
	Parms.CallFunc_GetLoadedAsset_ReturnValue_1 = CallFunc_GetLoadedAsset_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ButterflyEffect_Ballerina.BP_ButterflyEffect_Ballerina_C.IsSpinningFast__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ButterflyEffect_Ballerina_C::IsSpinningFast__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ButterflyEffect_Ballerina_C", "IsSpinningFast__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


