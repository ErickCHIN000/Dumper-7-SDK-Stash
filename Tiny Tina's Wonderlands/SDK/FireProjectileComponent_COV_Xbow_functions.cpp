#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FireProjectileComponent_COV_Xbow.FireProjectileComponent_COV_Xbow_C
// (None)

class UClass* UFireProjectileComponent_COV_Xbow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FireProjectileComponent_COV_Xbow_C");

	return Clss;
}


// FireProjectileComponent_COV_Xbow_C FireProjectileComponent_COV_Xbow.Default__FireProjectileComponent_COV_Xbow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFireProjectileComponent_COV_Xbow_C* UFireProjectileComponent_COV_Xbow_C::GetDefaultObj()
{
	static class UFireProjectileComponent_COV_Xbow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFireProjectileComponent_COV_Xbow_C*>(UFireProjectileComponent_COV_Xbow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FireProjectileComponent_COV_Xbow.FireProjectileComponent_COV_Xbow_C.ResetShotCounter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFireProjectileComponent_COV_Xbow_C::ResetShotCounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireProjectileComponent_COV_Xbow_C", "ResetShotCounter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FireProjectileComponent_COV_Xbow.FireProjectileComponent_COV_Xbow_C.GetShotLightProjectileData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TSubclassOf<class ULightProjectileData>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

TSubclassOf<class ULightProjectileData> UFireProjectileComponent_COV_Xbow_C::GetShotLightProjectileData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireProjectileComponent_COV_Xbow_C", "GetShotLightProjectileData");

	Params::UFireProjectileComponent_COV_Xbow_C_GetShotLightProjectileData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FireProjectileComponent_COV_Xbow.FireProjectileComponent_COV_Xbow_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UFireProjectileComponent_COV_Xbow_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireProjectileComponent_COV_Xbow_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FireProjectileComponent_COV_Xbow.FireProjectileComponent_COV_Xbow_C.OnUsed_COVXbow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFireProjectileComponent_COV_Xbow_C::OnUsed_COVXbow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireProjectileComponent_COV_Xbow_C", "OnUsed_COVXbow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FireProjectileComponent_COV_Xbow.FireProjectileComponent_COV_Xbow_C.CompareShotCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NShotReq                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFireProjectileComponent_COV_Xbow_C::CompareShotCount(int32 NShotReq)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireProjectileComponent_COV_Xbow_C", "CompareShotCount");

	Params::UFireProjectileComponent_COV_Xbow_C_CompareShotCount_Params Parms{};

	Parms.NShotReq = NShotReq;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FireProjectileComponent_COV_Xbow.FireProjectileComponent_COV_Xbow_C.ReloadCoVMagic
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bAutoReload                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFireProjectileComponent_COV_Xbow_C::ReloadCoVMagic(bool bAutoReload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireProjectileComponent_COV_Xbow_C", "ReloadCoVMagic");

	Params::UFireProjectileComponent_COV_Xbow_C_ReloadCoVMagic_Params Parms{};

	Parms.bAutoReload = bAutoReload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FireProjectileComponent_COV_Xbow.FireProjectileComponent_COV_Xbow_C.ExecuteUbergraph_FireProjectileComponent_COV_Xbow
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              K2Node_CustomEvent_nShotReq                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueOfAttribute_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bAutoReload                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWeaponReloadComponent*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFireProjectileComponent_COV_Xbow_C::ExecuteUbergraph_FireProjectileComponent_COV_Xbow(int32 EntryPoint, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 K2Node_CustomEvent_nShotReq, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, float CallFunc_GetValueOfAttribute_ReturnValue2, float CallFunc_GetValueOfAttribute_ReturnValue3, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue1, bool K2Node_CustomEvent_bAutoReload, class UWeaponReloadComponent* CallFunc_GetComponentByClass_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, int32 Temp_int_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireProjectileComponent_COV_Xbow_C", "ExecuteUbergraph_FireProjectileComponent_COV_Xbow");

	Params::UFireProjectileComponent_COV_Xbow_C_ExecuteUbergraph_FireProjectileComponent_COV_Xbow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_nShotReq = K2Node_CustomEvent_nShotReq;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue1 = CallFunc_GetValueOfAttribute_ReturnValue1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue1 = CallFunc_Greater_FloatFloat_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue2 = CallFunc_GetValueOfAttribute_ReturnValue2;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue3 = CallFunc_GetValueOfAttribute_ReturnValue3;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue1 = CallFunc_LessEqual_FloatFloat_ReturnValue1;
	Parms.CallFunc_GetOwner_ReturnValue1 = CallFunc_GetOwner_ReturnValue1;
	Parms.K2Node_CustomEvent_bAutoReload = K2Node_CustomEvent_bAutoReload;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.Temp_int_Variable = Temp_int_Variable;

	UObject::ProcessEvent(Func, &Parms);

}

}


