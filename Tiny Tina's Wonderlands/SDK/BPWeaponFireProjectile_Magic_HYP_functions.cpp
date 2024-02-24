#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeaponFireProjectile_Magic_HYP.BPWeaponFireProjectile_Magic_HYP_C
// (None)

class UClass* UBPWeaponFireProjectile_Magic_HYP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeaponFireProjectile_Magic_HYP_C");

	return Clss;
}


// BPWeaponFireProjectile_Magic_HYP_C BPWeaponFireProjectile_Magic_HYP.Default__BPWeaponFireProjectile_Magic_HYP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPWeaponFireProjectile_Magic_HYP_C* UBPWeaponFireProjectile_Magic_HYP_C::GetDefaultObj()
{
	static class UBPWeaponFireProjectile_Magic_HYP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPWeaponFireProjectile_Magic_HYP_C*>(UBPWeaponFireProjectile_Magic_HYP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPWeaponFireProjectile_Magic_HYP.BPWeaponFireProjectile_Magic_HYP_C.ResetShotsFired
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)

void UBPWeaponFireProjectile_Magic_HYP_C::ResetShotsFired(const class FString& CallFunc_Conv_IntToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeaponFireProjectile_Magic_HYP_C", "ResetShotsFired");

	Params::UBPWeaponFireProjectile_Magic_HYP_C_ResetShotsFired_Params Parms{};

	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeaponFireProjectile_Magic_HYP.BPWeaponFireProjectile_Magic_HYP_C.K2_OnActivated
// (Event, Public, BlueprintEvent)
// Parameters:

void UBPWeaponFireProjectile_Magic_HYP_C::K2_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeaponFireProjectile_Magic_HYP_C", "K2_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeaponFireProjectile_Magic_HYP.BPWeaponFireProjectile_Magic_HYP_C.WeaponUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPWeaponFireProjectile_Magic_HYP_C::WeaponUsed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeaponFireProjectile_Magic_HYP_C", "WeaponUsed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeaponFireProjectile_Magic_HYP.BPWeaponFireProjectile_Magic_HYP_C.ReloadEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bCompleted                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bAmmoGiven                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPWeaponFireProjectile_Magic_HYP_C::ReloadEnded(bool bCompleted, bool bAmmoGiven)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeaponFireProjectile_Magic_HYP_C", "ReloadEnded");

	Params::UBPWeaponFireProjectile_Magic_HYP_C_ReloadEnded_Params Parms{};

	Parms.bCompleted = bCompleted;
	Parms.bAmmoGiven = bAmmoGiven;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeaponFireProjectile_Magic_HYP.BPWeaponFireProjectile_Magic_HYP_C.DebugOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      String                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBPWeaponFireProjectile_Magic_HYP_C::DebugOut(const class FString& String)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeaponFireProjectile_Magic_HYP_C", "DebugOut");

	Params::UBPWeaponFireProjectile_Magic_HYP_C_DebugOut_Params Parms{};

	Parms.String = String;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeaponFireProjectile_Magic_HYP.BPWeaponFireProjectile_Magic_HYP_C.BeginRegeneratingAccuracy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameResourcePoolReference  ResourcePool                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)

void UBPWeaponFireProjectile_Magic_HYP_C::BeginRegeneratingAccuracy(const struct FGameResourcePoolReference& ResourcePool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeaponFireProjectile_Magic_HYP_C", "BeginRegeneratingAccuracy");

	Params::UBPWeaponFireProjectile_Magic_HYP_C_BeginRegeneratingAccuracy_Params Parms{};

	Parms.ResourcePool = ResourcePool;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeaponFireProjectile_Magic_HYP.BPWeaponFireProjectile_Magic_HYP_C.AccuracyFiIlled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameResourcePoolReference  ResourcePool                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)

void UBPWeaponFireProjectile_Magic_HYP_C::AccuracyFiIlled(const struct FGameResourcePoolReference& ResourcePool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeaponFireProjectile_Magic_HYP_C", "AccuracyFiIlled");

	Params::UBPWeaponFireProjectile_Magic_HYP_C_AccuracyFiIlled_Params Parms{};

	Parms.ResourcePool = ResourcePool;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeaponFireProjectile_Magic_HYP.BPWeaponFireProjectile_Magic_HYP_C.ExecuteUbergraph_BPWeaponFireProjectile_Magic_HYP
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_bCompleted                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bAmmoGiven                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWeaponReloadComponent*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameResourcePoolManagerComponent*CallFunc_GetComponentByClass_ReturnValue1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_String                                        (ZeroConstructor, HasGetValueTypeHash)
// struct FGameResourcePoolReference  K2Node_CustomEvent_ResourcePool1                                 (NoDestructor, ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_ResourcePoolData_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)
// struct FGameResourcePoolReference  K2Node_CustomEvent_ResourcePool                                  (NoDestructor, ContainsInstancedReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ResourcePoolData_ReturnValue1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter*               K2Node_DynamicCast_AsOak_Character                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsZoomed_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AOakCharacter*               K2Node_DynamicCast_AsOak_Character1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsZoomed_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPWeaponFireProjectile_Magic_HYP_C::ExecuteUbergraph_BPWeaponFireProjectile_Magic_HYP(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool K2Node_CustomEvent_bCompleted, bool K2Node_CustomEvent_bAmmoGiven, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWeaponReloadComponent* CallFunc_GetComponentByClass_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue2, int32 Temp_int_Variable, class UGameResourcePoolManagerComponent* CallFunc_GetComponentByClass_ReturnValue1, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& K2Node_CustomEvent_String, const struct FGameResourcePoolReference& K2Node_CustomEvent_ResourcePool1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, bool CallFunc_EqualEqual_ResourcePoolData_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue3, float CallFunc_GetValueOfAttribute_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FGameResourcePoolReference& K2Node_CustomEvent_ResourcePool, class AActor* CallFunc_GetOwner_ReturnValue4, bool CallFunc_EqualEqual_ResourcePoolData_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue5, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue6, bool CallFunc_IsZoomed_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue7, bool CallFunc_Not_PreBool_ReturnValue, class AOakCharacter* K2Node_DynamicCast_AsOak_Character1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsZoomed_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeaponFireProjectile_Magic_HYP_C", "ExecuteUbergraph_BPWeaponFireProjectile_Magic_HYP");

	Params::UBPWeaponFireProjectile_Magic_HYP_C_ExecuteUbergraph_BPWeaponFireProjectile_Magic_HYP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CustomEvent_bCompleted = K2Node_CustomEvent_bCompleted;
	Parms.K2Node_CustomEvent_bAmmoGiven = K2Node_CustomEvent_bAmmoGiven;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue1 = CallFunc_GetOwner_ReturnValue1;
	Parms.CallFunc_GetOwner_ReturnValue2 = CallFunc_GetOwner_ReturnValue2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetComponentByClass_ReturnValue1 = CallFunc_GetComponentByClass_ReturnValue1;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.K2Node_CustomEvent_String = K2Node_CustomEvent_String;
	Parms.K2Node_CustomEvent_ResourcePool1 = K2Node_CustomEvent_ResourcePool1;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_EqualEqual_ResourcePoolData_ReturnValue = CallFunc_EqualEqual_ResourcePoolData_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue3 = CallFunc_GetOwner_ReturnValue3;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.K2Node_CustomEvent_ResourcePool = K2Node_CustomEvent_ResourcePool;
	Parms.CallFunc_GetOwner_ReturnValue4 = CallFunc_GetOwner_ReturnValue4;
	Parms.CallFunc_EqualEqual_ResourcePoolData_ReturnValue1 = CallFunc_EqualEqual_ResourcePoolData_ReturnValue1;
	Parms.CallFunc_GetOwner_ReturnValue5 = CallFunc_GetOwner_ReturnValue5;
	Parms.K2Node_DynamicCast_AsOak_Character = K2Node_DynamicCast_AsOak_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwner_ReturnValue6 = CallFunc_GetOwner_ReturnValue6;
	Parms.CallFunc_IsZoomed_ReturnValue = CallFunc_IsZoomed_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue7 = CallFunc_GetOwner_ReturnValue7;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsOak_Character1 = K2Node_DynamicCast_AsOak_Character1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsZoomed_ReturnValue1 = CallFunc_IsZoomed_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}


