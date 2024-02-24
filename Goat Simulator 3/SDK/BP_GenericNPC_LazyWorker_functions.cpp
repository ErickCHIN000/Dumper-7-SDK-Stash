#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GenericNPC_LazyWorker.BP_GenericNPC_LazyWorker_C
// (Actor)

class UClass* ABP_GenericNPC_LazyWorker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GenericNPC_LazyWorker_C");

	return Clss;
}


// BP_GenericNPC_LazyWorker_C BP_GenericNPC_LazyWorker.Default__BP_GenericNPC_LazyWorker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GenericNPC_LazyWorker_C* ABP_GenericNPC_LazyWorker_C::GetDefaultObj()
{
	static class ABP_GenericNPC_LazyWorker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GenericNPC_LazyWorker_C*>(ABP_GenericNPC_LazyWorker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_GenericNPC_LazyWorker.BP_GenericNPC_LazyWorker_C.OnNotifyEnd_C1F2542F44275B0F0A984299000BF76A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GenericNPC_LazyWorker_C::OnNotifyEnd_C1F2542F44275B0F0A984299000BF76A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GenericNPC_LazyWorker_C", "OnNotifyEnd_C1F2542F44275B0F0A984299000BF76A");

	Params::ABP_GenericNPC_LazyWorker_C_OnNotifyEnd_C1F2542F44275B0F0A984299000BF76A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GenericNPC_LazyWorker.BP_GenericNPC_LazyWorker_C.OnNotifyBegin_C1F2542F44275B0F0A984299000BF76A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GenericNPC_LazyWorker_C::OnNotifyBegin_C1F2542F44275B0F0A984299000BF76A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GenericNPC_LazyWorker_C", "OnNotifyBegin_C1F2542F44275B0F0A984299000BF76A");

	Params::ABP_GenericNPC_LazyWorker_C_OnNotifyBegin_C1F2542F44275B0F0A984299000BF76A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GenericNPC_LazyWorker.BP_GenericNPC_LazyWorker_C.OnInterrupted_C1F2542F44275B0F0A984299000BF76A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GenericNPC_LazyWorker_C::OnInterrupted_C1F2542F44275B0F0A984299000BF76A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GenericNPC_LazyWorker_C", "OnInterrupted_C1F2542F44275B0F0A984299000BF76A");

	Params::ABP_GenericNPC_LazyWorker_C_OnInterrupted_C1F2542F44275B0F0A984299000BF76A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GenericNPC_LazyWorker.BP_GenericNPC_LazyWorker_C.OnBlendOut_C1F2542F44275B0F0A984299000BF76A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GenericNPC_LazyWorker_C::OnBlendOut_C1F2542F44275B0F0A984299000BF76A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GenericNPC_LazyWorker_C", "OnBlendOut_C1F2542F44275B0F0A984299000BF76A");

	Params::ABP_GenericNPC_LazyWorker_C_OnBlendOut_C1F2542F44275B0F0A984299000BF76A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GenericNPC_LazyWorker.BP_GenericNPC_LazyWorker_C.OnCompleted_C1F2542F44275B0F0A984299000BF76A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GenericNPC_LazyWorker_C::OnCompleted_C1F2542F44275B0F0A984299000BF76A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GenericNPC_LazyWorker_C", "OnCompleted_C1F2542F44275B0F0A984299000BF76A");

	Params::ABP_GenericNPC_LazyWorker_C_OnCompleted_C1F2542F44275B0F0A984299000BF76A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GenericNPC_LazyWorker.BP_GenericNPC_LazyWorker_C.SpawnNPC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Impulse                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     OffsetLoc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GenericNPC_LazyWorker_C::SpawnNPC(const struct FVector& Impulse, const struct FVector& OffsetLoc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GenericNPC_LazyWorker_C", "SpawnNPC");

	Params::ABP_GenericNPC_LazyWorker_C_SpawnNPC_Params Parms{};

	Parms.Impulse = Impulse;
	Parms.OffsetLoc = OffsetLoc;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GenericNPC_LazyWorker.BP_GenericNPC_LazyWorker_C.ExecuteUbergraph_BP_GenericNPC_LazyWorker
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
// struct FVector                     K2Node_Event_Impulse                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_OffsetLoc                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGNPC*                      CallFunc_SpawnCivilianNPC_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GenericNPC_LazyWorker_C::ExecuteUbergraph_BP_GenericNPC_LazyWorker(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, const struct FVector& K2Node_Event_Impulse, const struct FVector& K2Node_Event_OffsetLoc, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AGGNPC* CallFunc_SpawnCivilianNPC_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GenericNPC_LazyWorker_C", "ExecuteUbergraph_BP_GenericNPC_LazyWorker");

	Params::ABP_GenericNPC_LazyWorker_C_ExecuteUbergraph_BP_GenericNPC_LazyWorker_Params Parms{};

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
	Parms.K2Node_Event_Impulse = K2Node_Event_Impulse;
	Parms.K2Node_Event_OffsetLoc = K2Node_Event_OffsetLoc;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_SpawnCivilianNPC_ReturnValue = CallFunc_SpawnCivilianNPC_ReturnValue;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


