#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BasicMeleeEnemy.BasicMeleeEnemy_C
// (Actor, Pawn)

class UClass* ABasicMeleeEnemy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BasicMeleeEnemy_C");

	return Clss;
}


// BasicMeleeEnemy_C BasicMeleeEnemy.Default__BasicMeleeEnemy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABasicMeleeEnemy_C* ABasicMeleeEnemy_C::GetDefaultObj()
{
	static class ABasicMeleeEnemy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABasicMeleeEnemy_C*>(ABasicMeleeEnemy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BasicMeleeEnemy.BasicMeleeEnemy_C.ExecuteAttack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AI_WaitTime                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABasicMeleeEnemy_C::ExecuteAttack(float* AI_WaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicMeleeEnemy_C", "ExecuteAttack");

	Params::ABasicMeleeEnemy_C_ExecuteAttack_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AI_WaitTime != nullptr)
		*AI_WaitTime = Parms.AI_WaitTime;

}


// Function BasicMeleeEnemy.BasicMeleeEnemy_C.OnNotifyEnd_E7AB9ADD4EB25E9F5B12249E352C2C45
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABasicMeleeEnemy_C::OnNotifyEnd_E7AB9ADD4EB25E9F5B12249E352C2C45(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicMeleeEnemy_C", "OnNotifyEnd_E7AB9ADD4EB25E9F5B12249E352C2C45");

	Params::ABasicMeleeEnemy_C_OnNotifyEnd_E7AB9ADD4EB25E9F5B12249E352C2C45_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasicMeleeEnemy.BasicMeleeEnemy_C.OnNotifyBegin_E7AB9ADD4EB25E9F5B12249E352C2C45
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABasicMeleeEnemy_C::OnNotifyBegin_E7AB9ADD4EB25E9F5B12249E352C2C45(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicMeleeEnemy_C", "OnNotifyBegin_E7AB9ADD4EB25E9F5B12249E352C2C45");

	Params::ABasicMeleeEnemy_C_OnNotifyBegin_E7AB9ADD4EB25E9F5B12249E352C2C45_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasicMeleeEnemy.BasicMeleeEnemy_C.OnInterrupted_E7AB9ADD4EB25E9F5B12249E352C2C45
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABasicMeleeEnemy_C::OnInterrupted_E7AB9ADD4EB25E9F5B12249E352C2C45(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicMeleeEnemy_C", "OnInterrupted_E7AB9ADD4EB25E9F5B12249E352C2C45");

	Params::ABasicMeleeEnemy_C_OnInterrupted_E7AB9ADD4EB25E9F5B12249E352C2C45_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasicMeleeEnemy.BasicMeleeEnemy_C.OnBlendOut_E7AB9ADD4EB25E9F5B12249E352C2C45
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABasicMeleeEnemy_C::OnBlendOut_E7AB9ADD4EB25E9F5B12249E352C2C45(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicMeleeEnemy_C", "OnBlendOut_E7AB9ADD4EB25E9F5B12249E352C2C45");

	Params::ABasicMeleeEnemy_C_OnBlendOut_E7AB9ADD4EB25E9F5B12249E352C2C45_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasicMeleeEnemy.BasicMeleeEnemy_C.OnCompleted_E7AB9ADD4EB25E9F5B12249E352C2C45
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABasicMeleeEnemy_C::OnCompleted_E7AB9ADD4EB25E9F5B12249E352C2C45(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicMeleeEnemy_C", "OnCompleted_E7AB9ADD4EB25E9F5B12249E352C2C45");

	Params::ABasicMeleeEnemy_C_OnCompleted_E7AB9ADD4EB25E9F5B12249E352C2C45_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasicMeleeEnemy.BasicMeleeEnemy_C.ExecuteShortAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABasicMeleeEnemy_C::ExecuteShortAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicMeleeEnemy_C", "ExecuteShortAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BasicMeleeEnemy.BasicMeleeEnemy_C.ExecuteMidAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABasicMeleeEnemy_C::ExecuteMidAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicMeleeEnemy_C", "ExecuteMidAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BasicMeleeEnemy.BasicMeleeEnemy_C.ExecuteLongAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABasicMeleeEnemy_C::ExecuteLongAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicMeleeEnemy_C", "ExecuteLongAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BasicMeleeEnemy.BasicMeleeEnemy_C.PlayAttackMontage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                MontageToPlay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PlayRate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              StartingPosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        StartingSection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABasicMeleeEnemy_C::PlayAttackMontage(class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, class FName StartingSection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicMeleeEnemy_C", "PlayAttackMontage");

	Params::ABasicMeleeEnemy_C_PlayAttackMontage_Params Parms{};

	Parms.MontageToPlay = MontageToPlay;
	Parms.PlayRate = PlayRate;
	Parms.StartingPosition = StartingPosition;
	Parms.StartingSection = StartingSection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasicMeleeEnemy.BasicMeleeEnemy_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABasicMeleeEnemy_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicMeleeEnemy_C", "ReceiveTick");

	Params::ABasicMeleeEnemy_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasicMeleeEnemy.BasicMeleeEnemy_C.ExecuteUbergraph_BasicMeleeEnemy
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                K2Node_Event_MontageToPlay                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_PlayRate                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_StartingPosition                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_StartingSection                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABasicMeleeEnemy_C::ExecuteUbergraph_BasicMeleeEnemy(int32 EntryPoint, float K2Node_Event_DeltaSeconds, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, bool Temp_bool_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, class UAnimMontage* K2Node_Event_MontageToPlay, float K2Node_Event_PlayRate, float K2Node_Event_StartingPosition, class FName K2Node_Event_StartingSection, bool CallFunc_IsValid_ReturnValue, class UAnimMontage* K2Node_Select_Default, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicMeleeEnemy_C", "ExecuteUbergraph_BasicMeleeEnemy");

	Params::ABasicMeleeEnemy_C_ExecuteUbergraph_BasicMeleeEnemy_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
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
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_Event_MontageToPlay = K2Node_Event_MontageToPlay;
	Parms.K2Node_Event_PlayRate = K2Node_Event_PlayRate;
	Parms.K2Node_Event_StartingPosition = K2Node_Event_StartingPosition;
	Parms.K2Node_Event_StartingSection = K2Node_Event_StartingSection;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


