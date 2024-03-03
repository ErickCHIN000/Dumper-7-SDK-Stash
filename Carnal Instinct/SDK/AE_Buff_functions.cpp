#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AE_Buff.AE_Buff_C
// (Actor)

class UClass* AAE_Buff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AE_Buff_C");

	return Clss;
}


// AE_Buff_C AE_Buff.Default__AE_Buff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAE_Buff_C* AAE_Buff_C::GetDefaultObj()
{
	static class AAE_Buff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAE_Buff_C*>(AAE_Buff_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AE_Buff.AE_Buff_C.GetStatType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class E_StatType              StatType                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAE_Buff_C::GetStatType(enum class E_StatType* StatType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AE_Buff_C", "GetStatType");

	Params::AAE_Buff_C_GetStatType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (StatType != nullptr)
		*StatType = Parms.StatType;

}


// Function AE_Buff.AE_Buff_C.GetTimeElapsed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAE_Buff_C::GetTimeElapsed(float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AE_Buff_C", "GetTimeElapsed");

	Params::AAE_Buff_C_GetTimeElapsed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function AE_Buff.AE_Buff_C.AdjustBuff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewDuration                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              L_ValuesDifference                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              L_PreviousBuffValue                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAE_Buff_C::AdjustBuff(float NewValue, float NewDuration, float L_ValuesDifference, float L_PreviousBuffValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AE_Buff_C", "AdjustBuff");

	Params::AAE_Buff_C_AdjustBuff_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.NewDuration = NewDuration;
	Parms.L_ValuesDifference = L_ValuesDifference;
	Parms.L_PreviousBuffValue = L_PreviousBuffValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AE_Buff.AE_Buff_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAE_Buff_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AE_Buff_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AE_Buff.AE_Buff_C.ApplyBuff
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAE_Buff_C::ApplyBuff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AE_Buff_C", "ApplyBuff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AE_Buff.AE_Buff_C.AttachToOwner
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAE_Buff_C::AttachToOwner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AE_Buff_C", "AttachToOwner");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AE_Buff.AE_Buff_C.UpdateParticleColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAE_Buff_C::UpdateParticleColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AE_Buff_C", "UpdateParticleColor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AE_Buff.AE_Buff_C.UpdateElapsedTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAE_Buff_C::UpdateElapsedTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AE_Buff_C", "UpdateElapsedTime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AE_Buff.AE_Buff_C.StartTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAE_Buff_C::StartTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AE_Buff_C", "StartTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AE_Buff.AE_Buff_C.Deactivate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAE_Buff_C::Deactivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AE_Buff_C", "Deactivate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AE_Buff.AE_Buff_C.RemoveBuff
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAE_Buff_C::RemoveBuff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AE_Buff_C", "RemoveBuff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AE_Buff.AE_Buff_C.ExecuteUbergraph_AE_Buff
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStatsManagerComponent_C*    CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_DynamicCast_AsCharacter                                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Conv_LinearColorToVector_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAE_Buff_C::ExecuteUbergraph_AE_Buff(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UStatsManagerComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_1, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AE_Buff_C", "ExecuteUbergraph_AE_Buff");

	Params::AAE_Buff_C_ExecuteUbergraph_AE_Buff_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsCharacter = K2Node_DynamicCast_AsCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_LinearColorToVector_ReturnValue = CallFunc_Conv_LinearColorToVector_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;

	UObject::ProcessEvent(Func, &Parms);

}

}


