#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SpreadComponent.BP_SpreadComponent_C
// (None)

class UClass* UBP_SpreadComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SpreadComponent_C");

	return Clss;
}


// BP_SpreadComponent_C BP_SpreadComponent.Default__BP_SpreadComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SpreadComponent_C* UBP_SpreadComponent_C::GetDefaultObj()
{
	static class UBP_SpreadComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SpreadComponent_C*>(UBP_SpreadComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SpreadComponent.BP_SpreadComponent_C.ParseHitForDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  HitResult                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FGameplayTagContainer       HitTags                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer       HitMarkerTags                                                    (Edit, BlueprintVisible)
// bool                               CallFunc_HasAnyTags_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SpreadComponent_C::ParseHitForDisplay(const struct FHitResult& HitResult, const struct FGameplayTagContainer& HitTags, const struct FGameplayTagContainer& HitMarkerTags, bool CallFunc_HasAnyTags_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpreadComponent_C", "ParseHitForDisplay");

	Params::UBP_SpreadComponent_C_ParseHitForDisplay_Params Parms{};

	Parms.HitResult = HitResult;
	Parms.HitTags = HitTags;
	Parms.HitMarkerTags = HitMarkerTags;
	Parms.CallFunc_HasAnyTags_ReturnValue = CallFunc_HasAnyTags_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SpreadComponent.BP_SpreadComponent_C.CheckSpread
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetSpread_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_LastSpread_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SpreadComponent_C::CheckSpread(float CallFunc_GetSpread_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast, double K2Node_VariableSet_LastSpread_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpreadComponent_C", "CheckSpread");

	Params::UBP_SpreadComponent_C_CheckSpread_Params Parms{};

	Parms.CallFunc_GetSpread_ReturnValue = CallFunc_GetSpread_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast = CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast;
	Parms.K2Node_VariableSet_LastSpread_ImplicitCast = K2Node_VariableSet_LastSpread_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SpreadComponent.BP_SpreadComponent_C.ReceiveAuthorityGained
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_SpreadComponent_C::ReceiveAuthorityGained()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpreadComponent_C", "ReceiveAuthorityGained");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SpreadComponent.BP_SpreadComponent_C.ReceiveAuthorityLost
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_SpreadComponent_C::ReceiveAuthorityLost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpreadComponent_C", "ReceiveAuthorityLost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SpreadComponent.BP_SpreadComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SpreadComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpreadComponent_C", "ReceiveTick");

	Params::UBP_SpreadComponent_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SpreadComponent.BP_SpreadComponent_C.Client_SendHit
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  HitResult                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FGameplayTagContainer       HitTags                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_SpreadComponent_C::Client_SendHit(const struct FHitResult& HitResult, const struct FGameplayTagContainer& HitTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpreadComponent_C", "Client_SendHit");

	Params::UBP_SpreadComponent_C_Client_SendHit_Params Parms{};

	Parms.HitResult = HitResult;
	Parms.HitTags = HitTags;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SpreadComponent.BP_SpreadComponent_C.ExecuteUbergraph_BP_SpreadComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_CustomEvent_HitResult                                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FGameplayTagContainer       K2Node_CustomEvent_HitTags                                       (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SpreadComponent_C::ExecuteUbergraph_BP_SpreadComponent(int32 EntryPoint, const struct FHitResult& K2Node_CustomEvent_HitResult, const struct FGameplayTagContainer& K2Node_CustomEvent_HitTags, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpreadComponent_C", "ExecuteUbergraph_BP_SpreadComponent");

	Params::UBP_SpreadComponent_C_ExecuteUbergraph_BP_SpreadComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_HitResult = K2Node_CustomEvent_HitResult;
	Parms.K2Node_CustomEvent_HitTags = K2Node_CustomEvent_HitTags;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SpreadComponent.BP_SpreadComponent_C.HitDealt__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  HitResult                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FGameplayTagContainer       HitTags                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_SpreadComponent_C::HitDealt__DelegateSignature(const struct FHitResult& HitResult, const struct FGameplayTagContainer& HitTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpreadComponent_C", "HitDealt__DelegateSignature");

	Params::UBP_SpreadComponent_C_HitDealt__DelegateSignature_Params Parms{};

	Parms.HitResult = HitResult;
	Parms.HitTags = HitTags;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SpreadComponent.BP_SpreadComponent_C.SpreadUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewSpread                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SpreadComponent_C::SpreadUpdated__DelegateSignature(double NewSpread)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpreadComponent_C", "SpreadUpdated__DelegateSignature");

	Params::UBP_SpreadComponent_C_SpreadUpdated__DelegateSignature_Params Parms{};

	Parms.NewSpread = NewSpread;

	UObject::ProcessEvent(Func, &Parms);

}

}


