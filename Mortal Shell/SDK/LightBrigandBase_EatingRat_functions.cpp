#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightBrigandBase_EatingRat.LightBrigandBase_EatingRat_C
// (Actor, Pawn)

class UClass* ALightBrigandBase_EatingRat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightBrigandBase_EatingRat_C");

	return Clss;
}


// LightBrigandBase_EatingRat_C LightBrigandBase_EatingRat.Default__LightBrigandBase_EatingRat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALightBrigandBase_EatingRat_C* ALightBrigandBase_EatingRat_C::GetDefaultObj()
{
	static class ALightBrigandBase_EatingRat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALightBrigandBase_EatingRat_C*>(ALightBrigandBase_EatingRat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightBrigandBase_EatingRat.LightBrigandBase_EatingRat_C.OnNotifyEnd_C40E48624FB3BE8BCA98E2844BD70157
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_EatingRat_C::OnNotifyEnd_C40E48624FB3BE8BCA98E2844BD70157(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_EatingRat_C", "OnNotifyEnd_C40E48624FB3BE8BCA98E2844BD70157");

	Params::ALightBrigandBase_EatingRat_C_OnNotifyEnd_C40E48624FB3BE8BCA98E2844BD70157_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase_EatingRat.LightBrigandBase_EatingRat_C.OnNotifyBegin_C40E48624FB3BE8BCA98E2844BD70157
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_EatingRat_C::OnNotifyBegin_C40E48624FB3BE8BCA98E2844BD70157(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_EatingRat_C", "OnNotifyBegin_C40E48624FB3BE8BCA98E2844BD70157");

	Params::ALightBrigandBase_EatingRat_C_OnNotifyBegin_C40E48624FB3BE8BCA98E2844BD70157_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase_EatingRat.LightBrigandBase_EatingRat_C.OnInterrupted_C40E48624FB3BE8BCA98E2844BD70157
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_EatingRat_C::OnInterrupted_C40E48624FB3BE8BCA98E2844BD70157(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_EatingRat_C", "OnInterrupted_C40E48624FB3BE8BCA98E2844BD70157");

	Params::ALightBrigandBase_EatingRat_C_OnInterrupted_C40E48624FB3BE8BCA98E2844BD70157_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase_EatingRat.LightBrigandBase_EatingRat_C.OnBlendOut_C40E48624FB3BE8BCA98E2844BD70157
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_EatingRat_C::OnBlendOut_C40E48624FB3BE8BCA98E2844BD70157(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_EatingRat_C", "OnBlendOut_C40E48624FB3BE8BCA98E2844BD70157");

	Params::ALightBrigandBase_EatingRat_C_OnBlendOut_C40E48624FB3BE8BCA98E2844BD70157_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase_EatingRat.LightBrigandBase_EatingRat_C.OnCompleted_C40E48624FB3BE8BCA98E2844BD70157
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandBase_EatingRat_C::OnCompleted_C40E48624FB3BE8BCA98E2844BD70157(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_EatingRat_C", "OnCompleted_C40E48624FB3BE8BCA98E2844BD70157");

	Params::ALightBrigandBase_EatingRat_C_OnCompleted_C40E48624FB3BE8BCA98E2844BD70157_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase_EatingRat.LightBrigandBase_EatingRat_C.SetDistanceCheckTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALightBrigandBase_EatingRat_C::SetDistanceCheckTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_EatingRat_C", "SetDistanceCheckTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase_EatingRat.LightBrigandBase_EatingRat_C.AggroAnimComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALightBrigandBase_EatingRat_C::AggroAnimComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_EatingRat_C", "AggroAnimComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase_EatingRat.LightBrigandBase_EatingRat_C.StopPlaying
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALightBrigandBase_EatingRat_C::StopPlaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_EatingRat_C", "StopPlaying");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase_EatingRat.LightBrigandBase_EatingRat_C.ThrowRat
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALightBrigandBase_EatingRat_C::ThrowRat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_EatingRat_C", "ThrowRat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase_EatingRat.LightBrigandBase_EatingRat_C.OnAggroDelayOver
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALightBrigandBase_EatingRat_C::OnAggroDelayOver()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_EatingRat_C", "OnAggroDelayOver");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase_EatingRat.LightBrigandBase_EatingRat_C.AggroAnimInterrupted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALightBrigandBase_EatingRat_C::AggroAnimInterrupted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_EatingRat_C", "AggroAnimInterrupted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase_EatingRat.LightBrigandBase_EatingRat_C.UpdateAggroPoseFromSpawner
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALightBrigandBase_EatingRat_C::UpdateAggroPoseFromSpawner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_EatingRat_C", "UpdateAggroPoseFromSpawner");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandBase_EatingRat.LightBrigandBase_EatingRat_C.EnemyDeath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Killer                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bShouldPlayDeathAnim                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ALightBrigandBase_EatingRat_C::EnemyDeath(class AActor* Killer, bool bShouldPlayDeathAnim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_EatingRat_C", "EnemyDeath");

	Params::ALightBrigandBase_EatingRat_C_EnemyDeath_Params Parms{};

	Parms.Killer = Killer;
	Parms.bShouldPlayDeathAnim = bShouldPlayDeathAnim;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LightBrigandBase_EatingRat.LightBrigandBase_EatingRat_C.ExecuteUbergraph_LightBrigandBase_EatingRat
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Killer                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShouldPlayDeathAnim                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayingParryRiposteReactOrDead__ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALightBrigandBase_EatingRat_C::ExecuteUbergraph_LightBrigandBase_EatingRat(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, class AActor* K2Node_Event_Killer, bool K2Node_Event_bShouldPlayDeathAnim, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValid_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsPlayingParryRiposteReactOrDead__ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandBase_EatingRat_C", "ExecuteUbergraph_LightBrigandBase_EatingRat");

	Params::ALightBrigandBase_EatingRat_C_ExecuteUbergraph_LightBrigandBase_EatingRat_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_Event_Killer = K2Node_Event_Killer;
	Parms.K2Node_Event_bShouldPlayDeathAnim = K2Node_Event_bShouldPlayDeathAnim;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsPlayingParryRiposteReactOrDead__ReturnValue = CallFunc_IsPlayingParryRiposteReactOrDead__ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


