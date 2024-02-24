#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Passive_GunMage_13.Passive_GunMage_13_C
// (None)

class UClass* UPassive_GunMage_13_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Passive_GunMage_13_C");

	return Clss;
}


// Passive_GunMage_13_C Passive_GunMage_13.Default__Passive_GunMage_13_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPassive_GunMage_13_C* UPassive_GunMage_13_C::GetDefaultObj()
{
	static class UPassive_GunMage_13_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPassive_GunMage_13_C*>(UPassive_GunMage_13_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Passive_GunMage_13.Passive_GunMage_13_C.GetManualHUDIconValues
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int32                              OutStackCount                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OutDuration                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OutTimeRemaining                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable6                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable7                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable8                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable9                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable10                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable11                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable12                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable13                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable14                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable15                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable16                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable17                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable18                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable19                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable20                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable21                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable10                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable22                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable23                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAbilityTimerValue_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAbilityTimerValue_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAbilityTimerValue_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAbilityTimerValue_ReturnValue3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAbilityTimerValue_ReturnValue4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAbilityTimerValue_ReturnValue5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAbilityTimerActive_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAbilityTimerActive_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAbilityTimerActive_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAbilityTimerActive_ReturnValue3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAbilityTimerActive_ReturnValue4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAbilityTimerActive_ReturnValue5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAbilityTimerActive_ReturnValue6                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select5_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAbilityTimerValue_ReturnValue6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAbilityTimerActive_ReturnValue7                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAbilityTimerActive_ReturnValue8                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select6_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select7_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAbilityTimerActive_ReturnValue9                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAbilityTimerActive_ReturnValue10                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select8_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select9_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAbilityTimerActive_ReturnValue11                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable11                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select10_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select11_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAbilityTimerValue_ReturnValue7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAbilityTimerValue_ReturnValue8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAbilityTimerValue_ReturnValue9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAbilityTimerValue_ReturnValue10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAbilityTimerValue_ReturnValue11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue6                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue7                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue8                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue9                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue10                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassive_GunMage_13_C::GetManualHUDIconValues(int32* OutStackCount, float* OutDuration, float* OutTimeRemaining, int32 Temp_int_Variable, int32 Temp_int_Variable1, bool Temp_bool_Variable, int32 Temp_int_Variable2, int32 Temp_int_Variable3, bool Temp_bool_Variable1, int32 Temp_int_Variable4, int32 Temp_int_Variable5, bool Temp_bool_Variable2, int32 Temp_int_Variable6, int32 Temp_int_Variable7, bool Temp_bool_Variable3, int32 Temp_int_Variable8, int32 Temp_int_Variable9, bool Temp_bool_Variable4, int32 Temp_int_Variable10, int32 Temp_int_Variable11, bool Temp_bool_Variable5, int32 Temp_int_Variable12, int32 Temp_int_Variable13, bool Temp_bool_Variable6, int32 Temp_int_Variable14, int32 Temp_int_Variable15, bool Temp_bool_Variable7, int32 Temp_int_Variable16, int32 Temp_int_Variable17, bool Temp_bool_Variable8, int32 Temp_int_Variable18, int32 Temp_int_Variable19, bool Temp_bool_Variable9, int32 Temp_int_Variable20, int32 Temp_int_Variable21, bool Temp_bool_Variable10, int32 Temp_int_Variable22, int32 Temp_int_Variable23, float CallFunc_GetAbilityTimerValue_ReturnValue, float CallFunc_GetAbilityTimerValue_ReturnValue1, float CallFunc_GetAbilityTimerValue_ReturnValue2, float CallFunc_GetAbilityTimerValue_ReturnValue3, float CallFunc_GetAbilityTimerValue_ReturnValue4, float CallFunc_GetAbilityTimerValue_ReturnValue5, bool CallFunc_IsAbilityTimerActive_ReturnValue, bool CallFunc_IsAbilityTimerActive_ReturnValue1, bool CallFunc_IsAbilityTimerActive_ReturnValue2, int32 K2Node_Select_Default, int32 K2Node_Select1_Default, bool CallFunc_IsAbilityTimerActive_ReturnValue3, bool CallFunc_IsAbilityTimerActive_ReturnValue4, int32 K2Node_Select2_Default, int32 K2Node_Select3_Default, bool CallFunc_IsAbilityTimerActive_ReturnValue5, bool CallFunc_IsAbilityTimerActive_ReturnValue6, int32 K2Node_Select4_Default, int32 K2Node_Select5_Default, float CallFunc_GetAbilityTimerValue_ReturnValue6, bool CallFunc_IsAbilityTimerActive_ReturnValue7, bool CallFunc_IsAbilityTimerActive_ReturnValue8, int32 K2Node_Select6_Default, int32 K2Node_Select7_Default, bool CallFunc_IsAbilityTimerActive_ReturnValue9, bool CallFunc_IsAbilityTimerActive_ReturnValue10, int32 K2Node_Select8_Default, int32 K2Node_Select9_Default, bool CallFunc_IsAbilityTimerActive_ReturnValue11, bool Temp_bool_Variable11, int32 K2Node_Select10_Default, int32 K2Node_Select11_Default, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, float CallFunc_GetDataTableValueFromHandle_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, float CallFunc_GetAbilityTimerValue_ReturnValue7, int32 CallFunc_Add_IntInt_ReturnValue3, float CallFunc_GetAbilityTimerValue_ReturnValue8, int32 CallFunc_Add_IntInt_ReturnValue4, float CallFunc_GetAbilityTimerValue_ReturnValue9, int32 CallFunc_Add_IntInt_ReturnValue5, float CallFunc_GetAbilityTimerValue_ReturnValue10, int32 CallFunc_Add_IntInt_ReturnValue6, float CallFunc_GetAbilityTimerValue_ReturnValue11, int32 CallFunc_Add_IntInt_ReturnValue7, float CallFunc_FMax_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue8, float CallFunc_FMax_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue9, float CallFunc_FMax_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue10, float CallFunc_FMax_ReturnValue3, float CallFunc_FMax_ReturnValue4, float CallFunc_FMax_ReturnValue5, float CallFunc_FMax_ReturnValue6, float CallFunc_FMax_ReturnValue7, float CallFunc_FMax_ReturnValue8, float CallFunc_FMax_ReturnValue9, float CallFunc_FMax_ReturnValue10, float CallFunc_Subtract_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_GunMage_13_C", "GetManualHUDIconValues");

	Params::UPassive_GunMage_13_C_GetManualHUDIconValues_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.Temp_int_Variable3 = Temp_int_Variable3;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_int_Variable4 = Temp_int_Variable4;
	Parms.Temp_int_Variable5 = Temp_int_Variable5;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_int_Variable6 = Temp_int_Variable6;
	Parms.Temp_int_Variable7 = Temp_int_Variable7;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_int_Variable8 = Temp_int_Variable8;
	Parms.Temp_int_Variable9 = Temp_int_Variable9;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_int_Variable10 = Temp_int_Variable10;
	Parms.Temp_int_Variable11 = Temp_int_Variable11;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.Temp_int_Variable12 = Temp_int_Variable12;
	Parms.Temp_int_Variable13 = Temp_int_Variable13;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.Temp_int_Variable14 = Temp_int_Variable14;
	Parms.Temp_int_Variable15 = Temp_int_Variable15;
	Parms.Temp_bool_Variable7 = Temp_bool_Variable7;
	Parms.Temp_int_Variable16 = Temp_int_Variable16;
	Parms.Temp_int_Variable17 = Temp_int_Variable17;
	Parms.Temp_bool_Variable8 = Temp_bool_Variable8;
	Parms.Temp_int_Variable18 = Temp_int_Variable18;
	Parms.Temp_int_Variable19 = Temp_int_Variable19;
	Parms.Temp_bool_Variable9 = Temp_bool_Variable9;
	Parms.Temp_int_Variable20 = Temp_int_Variable20;
	Parms.Temp_int_Variable21 = Temp_int_Variable21;
	Parms.Temp_bool_Variable10 = Temp_bool_Variable10;
	Parms.Temp_int_Variable22 = Temp_int_Variable22;
	Parms.Temp_int_Variable23 = Temp_int_Variable23;
	Parms.CallFunc_GetAbilityTimerValue_ReturnValue = CallFunc_GetAbilityTimerValue_ReturnValue;
	Parms.CallFunc_GetAbilityTimerValue_ReturnValue1 = CallFunc_GetAbilityTimerValue_ReturnValue1;
	Parms.CallFunc_GetAbilityTimerValue_ReturnValue2 = CallFunc_GetAbilityTimerValue_ReturnValue2;
	Parms.CallFunc_GetAbilityTimerValue_ReturnValue3 = CallFunc_GetAbilityTimerValue_ReturnValue3;
	Parms.CallFunc_GetAbilityTimerValue_ReturnValue4 = CallFunc_GetAbilityTimerValue_ReturnValue4;
	Parms.CallFunc_GetAbilityTimerValue_ReturnValue5 = CallFunc_GetAbilityTimerValue_ReturnValue5;
	Parms.CallFunc_IsAbilityTimerActive_ReturnValue = CallFunc_IsAbilityTimerActive_ReturnValue;
	Parms.CallFunc_IsAbilityTimerActive_ReturnValue1 = CallFunc_IsAbilityTimerActive_ReturnValue1;
	Parms.CallFunc_IsAbilityTimerActive_ReturnValue2 = CallFunc_IsAbilityTimerActive_ReturnValue2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_IsAbilityTimerActive_ReturnValue3 = CallFunc_IsAbilityTimerActive_ReturnValue3;
	Parms.CallFunc_IsAbilityTimerActive_ReturnValue4 = CallFunc_IsAbilityTimerActive_ReturnValue4;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_IsAbilityTimerActive_ReturnValue5 = CallFunc_IsAbilityTimerActive_ReturnValue5;
	Parms.CallFunc_IsAbilityTimerActive_ReturnValue6 = CallFunc_IsAbilityTimerActive_ReturnValue6;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.CallFunc_GetAbilityTimerValue_ReturnValue6 = CallFunc_GetAbilityTimerValue_ReturnValue6;
	Parms.CallFunc_IsAbilityTimerActive_ReturnValue7 = CallFunc_IsAbilityTimerActive_ReturnValue7;
	Parms.CallFunc_IsAbilityTimerActive_ReturnValue8 = CallFunc_IsAbilityTimerActive_ReturnValue8;
	Parms.K2Node_Select6_Default = K2Node_Select6_Default;
	Parms.K2Node_Select7_Default = K2Node_Select7_Default;
	Parms.CallFunc_IsAbilityTimerActive_ReturnValue9 = CallFunc_IsAbilityTimerActive_ReturnValue9;
	Parms.CallFunc_IsAbilityTimerActive_ReturnValue10 = CallFunc_IsAbilityTimerActive_ReturnValue10;
	Parms.K2Node_Select8_Default = K2Node_Select8_Default;
	Parms.K2Node_Select9_Default = K2Node_Select9_Default;
	Parms.CallFunc_IsAbilityTimerActive_ReturnValue11 = CallFunc_IsAbilityTimerActive_ReturnValue11;
	Parms.Temp_bool_Variable11 = Temp_bool_Variable11;
	Parms.K2Node_Select10_Default = K2Node_Select10_Default;
	Parms.K2Node_Select11_Default = K2Node_Select11_Default;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_GetAbilityTimerValue_ReturnValue7 = CallFunc_GetAbilityTimerValue_ReturnValue7;
	Parms.CallFunc_Add_IntInt_ReturnValue3 = CallFunc_Add_IntInt_ReturnValue3;
	Parms.CallFunc_GetAbilityTimerValue_ReturnValue8 = CallFunc_GetAbilityTimerValue_ReturnValue8;
	Parms.CallFunc_Add_IntInt_ReturnValue4 = CallFunc_Add_IntInt_ReturnValue4;
	Parms.CallFunc_GetAbilityTimerValue_ReturnValue9 = CallFunc_GetAbilityTimerValue_ReturnValue9;
	Parms.CallFunc_Add_IntInt_ReturnValue5 = CallFunc_Add_IntInt_ReturnValue5;
	Parms.CallFunc_GetAbilityTimerValue_ReturnValue10 = CallFunc_GetAbilityTimerValue_ReturnValue10;
	Parms.CallFunc_Add_IntInt_ReturnValue6 = CallFunc_Add_IntInt_ReturnValue6;
	Parms.CallFunc_GetAbilityTimerValue_ReturnValue11 = CallFunc_GetAbilityTimerValue_ReturnValue11;
	Parms.CallFunc_Add_IntInt_ReturnValue7 = CallFunc_Add_IntInt_ReturnValue7;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue8 = CallFunc_Add_IntInt_ReturnValue8;
	Parms.CallFunc_FMax_ReturnValue1 = CallFunc_FMax_ReturnValue1;
	Parms.CallFunc_Add_IntInt_ReturnValue9 = CallFunc_Add_IntInt_ReturnValue9;
	Parms.CallFunc_FMax_ReturnValue2 = CallFunc_FMax_ReturnValue2;
	Parms.CallFunc_Add_IntInt_ReturnValue10 = CallFunc_Add_IntInt_ReturnValue10;
	Parms.CallFunc_FMax_ReturnValue3 = CallFunc_FMax_ReturnValue3;
	Parms.CallFunc_FMax_ReturnValue4 = CallFunc_FMax_ReturnValue4;
	Parms.CallFunc_FMax_ReturnValue5 = CallFunc_FMax_ReturnValue5;
	Parms.CallFunc_FMax_ReturnValue6 = CallFunc_FMax_ReturnValue6;
	Parms.CallFunc_FMax_ReturnValue7 = CallFunc_FMax_ReturnValue7;
	Parms.CallFunc_FMax_ReturnValue8 = CallFunc_FMax_ReturnValue8;
	Parms.CallFunc_FMax_ReturnValue9 = CallFunc_FMax_ReturnValue9;
	Parms.CallFunc_FMax_ReturnValue10 = CallFunc_FMax_ReturnValue10;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutStackCount != nullptr)
		*OutStackCount = Parms.OutStackCount;

	if (OutDuration != nullptr)
		*OutDuration = Parms.OutDuration;

	if (OutTimeRemaining != nullptr)
		*OutTimeRemaining = Parms.OutTimeRemaining;

}


// Function Passive_GunMage_13.Passive_GunMage_13_C.CalculateAbilityState
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EGbxAbilityState        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGbxAbilityState        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGbxAbilityState        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAbilityTimerActive_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAbilityTimerActive_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAbilityTimerActive_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAbilityTimerActive_ReturnValue3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAbilityTimerActive_ReturnValue4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAbilityTimerActive_ReturnValue5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGbxAbilityState        CallFunc_CalculateAbilityState_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGbxAbilityState        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EGbxAbilityState UPassive_GunMage_13_C::CalculateAbilityState(bool Temp_bool_Variable, enum class EGbxAbilityState Temp_byte_Variable, enum class EGbxAbilityState Temp_byte_Variable1, bool CallFunc_IsAbilityTimerActive_ReturnValue, bool CallFunc_IsAbilityTimerActive_ReturnValue1, bool CallFunc_IsAbilityTimerActive_ReturnValue2, bool CallFunc_IsAbilityTimerActive_ReturnValue3, bool CallFunc_IsAbilityTimerActive_ReturnValue4, bool CallFunc_IsAbilityTimerActive_ReturnValue5, class AActor* CallFunc_GetAbilityOwner_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue2, enum class EGbxAbilityState CallFunc_CalculateAbilityState_ReturnValue, bool CallFunc_BooleanOR_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue4, enum class EGbxAbilityState K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_GunMage_13_C", "CalculateAbilityState");

	Params::UPassive_GunMage_13_C_CalculateAbilityState_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_IsAbilityTimerActive_ReturnValue = CallFunc_IsAbilityTimerActive_ReturnValue;
	Parms.CallFunc_IsAbilityTimerActive_ReturnValue1 = CallFunc_IsAbilityTimerActive_ReturnValue1;
	Parms.CallFunc_IsAbilityTimerActive_ReturnValue2 = CallFunc_IsAbilityTimerActive_ReturnValue2;
	Parms.CallFunc_IsAbilityTimerActive_ReturnValue3 = CallFunc_IsAbilityTimerActive_ReturnValue3;
	Parms.CallFunc_IsAbilityTimerActive_ReturnValue4 = CallFunc_IsAbilityTimerActive_ReturnValue4;
	Parms.CallFunc_IsAbilityTimerActive_ReturnValue5 = CallFunc_IsAbilityTimerActive_ReturnValue5;
	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.CallFunc_CalculateAbilityState_ReturnValue = CallFunc_CalculateAbilityState_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue3 = CallFunc_BooleanOR_ReturnValue3;
	Parms.CallFunc_BooleanOR_ReturnValue4 = CallFunc_BooleanOR_ReturnValue4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Passive_GunMage_13.Passive_GunMage_13_C.GetStopCDM
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOakAbilityTimerSpec        Timer                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UConditionalDamageModifier*  CDM                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue3                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue4                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue5                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue6                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue7                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue8                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue9                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue10                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPassive_GunMage_13_C::GetStopCDM(const struct FOakAbilityTimerSpec& Timer, class UConditionalDamageModifier** CDM, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue4, bool CallFunc_EqualEqual_ObjectObject_ReturnValue5, bool CallFunc_EqualEqual_ObjectObject_ReturnValue6, bool CallFunc_EqualEqual_ObjectObject_ReturnValue7, bool CallFunc_EqualEqual_ObjectObject_ReturnValue8, bool CallFunc_EqualEqual_ObjectObject_ReturnValue9, bool CallFunc_EqualEqual_ObjectObject_ReturnValue10)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_GunMage_13_C", "GetStopCDM");

	Params::UPassive_GunMage_13_C_GetStopCDM_Params Parms{};

	Parms.Timer = Timer;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue1 = CallFunc_EqualEqual_ObjectObject_ReturnValue1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue2 = CallFunc_EqualEqual_ObjectObject_ReturnValue2;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue3 = CallFunc_EqualEqual_ObjectObject_ReturnValue3;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue4 = CallFunc_EqualEqual_ObjectObject_ReturnValue4;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue5 = CallFunc_EqualEqual_ObjectObject_ReturnValue5;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue6 = CallFunc_EqualEqual_ObjectObject_ReturnValue6;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue7 = CallFunc_EqualEqual_ObjectObject_ReturnValue7;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue8 = CallFunc_EqualEqual_ObjectObject_ReturnValue8;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue9 = CallFunc_EqualEqual_ObjectObject_ReturnValue9;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue10 = CallFunc_EqualEqual_ObjectObject_ReturnValue10;

	UObject::ProcessEvent(Func, &Parms);

	if (CDM != nullptr)
		*CDM = Parms.CDM;

}


// Function Passive_GunMage_13.Passive_GunMage_13_C.GetStartCDM
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGrenadeMod*                 Spell                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PrimarySpell                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOakAbilityTimerSpec        Timer                                                            (Parm, OutParm, NoDestructor)
// class UConditionalDamageModifier*  CDM                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LocalDuration                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetSpellDamageType_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue4                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UConditionalDamageModifier*  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UConditionalDamageModifier*  Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UConditionalDamageModifier*  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakAbilityTimerData*        Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakAbilityTimerData*        Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOakAbilityTimerData*        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UConditionalDamageModifier*  Temp_object_Variable4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UConditionalDamageModifier*  Temp_object_Variable5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UConditionalDamageModifier*  K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakAbilityTimerData*        Temp_object_Variable6                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakAbilityTimerData*        Temp_object_Variable7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOakAbilityTimerData*        K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UConditionalDamageModifier*  Temp_object_Variable8                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UConditionalDamageModifier*  Temp_object_Variable9                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UConditionalDamageModifier*  K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakAbilityTimerData*        Temp_object_Variable10                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakAbilityTimerData*        Temp_object_Variable11                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOakAbilityTimerData*        K2Node_Select5_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UConditionalDamageModifier*  Temp_object_Variable12                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UConditionalDamageModifier*  Temp_object_Variable13                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UConditionalDamageModifier*  K2Node_Select6_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakAbilityTimerData*        Temp_object_Variable14                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakAbilityTimerData*        Temp_object_Variable15                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOakAbilityTimerData*        K2Node_Select7_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UConditionalDamageModifier*  Temp_object_Variable16                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UConditionalDamageModifier*  Temp_object_Variable17                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UConditionalDamageModifier*  K2Node_Select8_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakAbilityTimerData*        Temp_object_Variable18                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakAbilityTimerData*        Temp_object_Variable19                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable10                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOakAbilityTimerData*        K2Node_Select9_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UConditionalDamageModifier*  Temp_object_Variable20                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UConditionalDamageModifier*  Temp_object_Variable21                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable11                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UConditionalDamageModifier*  K2Node_Select10_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakAbilityTimerData*        Temp_object_Variable22                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakAbilityTimerData*        Temp_object_Variable23                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakAbilityTimerData*        K2Node_Select11_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOakAbilityTimerSpec        K2Node_MakeStruct_OakAbilityTimerSpec                            (NoDestructor)
// struct FOakAbilityTimerSpec        K2Node_MakeStruct_OakAbilityTimerSpec1                           (NoDestructor)
// struct FOakAbilityTimerSpec        K2Node_MakeStruct_OakAbilityTimerSpec2                           (NoDestructor)
// struct FOakAbilityTimerSpec        K2Node_MakeStruct_OakAbilityTimerSpec3                           (NoDestructor)
// struct FOakAbilityTimerSpec        K2Node_MakeStruct_OakAbilityTimerSpec4                           (NoDestructor)
// struct FOakAbilityTimerSpec        K2Node_MakeStruct_OakAbilityTimerSpec5                           (NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassive_GunMage_13_C::GetStartCDM(class AGrenadeMod* Spell, bool PrimarySpell, struct FOakAbilityTimerSpec* Timer, class UConditionalDamageModifier** CDM, float LocalDuration, bool Temp_bool_Variable, class UClass* CallFunc_GetSpellDamageType_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue1, bool CallFunc_EqualEqual_ClassClass_ReturnValue2, bool CallFunc_EqualEqual_ClassClass_ReturnValue3, bool CallFunc_EqualEqual_ClassClass_ReturnValue4, class UConditionalDamageModifier* Temp_object_Variable, class UConditionalDamageModifier* Temp_object_Variable1, bool Temp_bool_Variable1, class UConditionalDamageModifier* K2Node_Select_Default, class UOakAbilityTimerData* Temp_object_Variable2, class UOakAbilityTimerData* Temp_object_Variable3, bool Temp_bool_Variable2, class UOakAbilityTimerData* K2Node_Select1_Default, class UConditionalDamageModifier* Temp_object_Variable4, class UConditionalDamageModifier* Temp_object_Variable5, bool Temp_bool_Variable3, class UConditionalDamageModifier* K2Node_Select2_Default, class UOakAbilityTimerData* Temp_object_Variable6, class UOakAbilityTimerData* Temp_object_Variable7, bool Temp_bool_Variable4, class UOakAbilityTimerData* K2Node_Select3_Default, class UConditionalDamageModifier* Temp_object_Variable8, class UConditionalDamageModifier* Temp_object_Variable9, bool Temp_bool_Variable5, class UConditionalDamageModifier* K2Node_Select4_Default, class UOakAbilityTimerData* Temp_object_Variable10, class UOakAbilityTimerData* Temp_object_Variable11, bool Temp_bool_Variable6, class UOakAbilityTimerData* K2Node_Select5_Default, class UConditionalDamageModifier* Temp_object_Variable12, class UConditionalDamageModifier* Temp_object_Variable13, bool Temp_bool_Variable7, class UConditionalDamageModifier* K2Node_Select6_Default, class UOakAbilityTimerData* Temp_object_Variable14, class UOakAbilityTimerData* Temp_object_Variable15, bool Temp_bool_Variable8, class UOakAbilityTimerData* K2Node_Select7_Default, class UConditionalDamageModifier* Temp_object_Variable16, class UConditionalDamageModifier* Temp_object_Variable17, bool Temp_bool_Variable9, class UConditionalDamageModifier* K2Node_Select8_Default, class UOakAbilityTimerData* Temp_object_Variable18, class UOakAbilityTimerData* Temp_object_Variable19, bool Temp_bool_Variable10, class UOakAbilityTimerData* K2Node_Select9_Default, class UConditionalDamageModifier* Temp_object_Variable20, class UConditionalDamageModifier* Temp_object_Variable21, bool Temp_bool_Variable11, class UConditionalDamageModifier* K2Node_Select10_Default, class UOakAbilityTimerData* Temp_object_Variable22, class UOakAbilityTimerData* Temp_object_Variable23, class UOakAbilityTimerData* K2Node_Select11_Default, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec1, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec2, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec3, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec4, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec5, float CallFunc_GetDataTableValueFromHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_GunMage_13_C", "GetStartCDM");

	Params::UPassive_GunMage_13_C_GetStartCDM_Params Parms{};

	Parms.Spell = Spell;
	Parms.PrimarySpell = PrimarySpell;
	Parms.LocalDuration = LocalDuration;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetSpellDamageType_ReturnValue = CallFunc_GetSpellDamageType_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue1 = CallFunc_EqualEqual_ClassClass_ReturnValue1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue2 = CallFunc_EqualEqual_ClassClass_ReturnValue2;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue3 = CallFunc_EqualEqual_ClassClass_ReturnValue3;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue4 = CallFunc_EqualEqual_ClassClass_ReturnValue4;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.Temp_object_Variable4 = Temp_object_Variable4;
	Parms.Temp_object_Variable5 = Temp_object_Variable5;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.Temp_object_Variable6 = Temp_object_Variable6;
	Parms.Temp_object_Variable7 = Temp_object_Variable7;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.Temp_object_Variable8 = Temp_object_Variable8;
	Parms.Temp_object_Variable9 = Temp_object_Variable9;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.Temp_object_Variable10 = Temp_object_Variable10;
	Parms.Temp_object_Variable11 = Temp_object_Variable11;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.Temp_object_Variable12 = Temp_object_Variable12;
	Parms.Temp_object_Variable13 = Temp_object_Variable13;
	Parms.Temp_bool_Variable7 = Temp_bool_Variable7;
	Parms.K2Node_Select6_Default = K2Node_Select6_Default;
	Parms.Temp_object_Variable14 = Temp_object_Variable14;
	Parms.Temp_object_Variable15 = Temp_object_Variable15;
	Parms.Temp_bool_Variable8 = Temp_bool_Variable8;
	Parms.K2Node_Select7_Default = K2Node_Select7_Default;
	Parms.Temp_object_Variable16 = Temp_object_Variable16;
	Parms.Temp_object_Variable17 = Temp_object_Variable17;
	Parms.Temp_bool_Variable9 = Temp_bool_Variable9;
	Parms.K2Node_Select8_Default = K2Node_Select8_Default;
	Parms.Temp_object_Variable18 = Temp_object_Variable18;
	Parms.Temp_object_Variable19 = Temp_object_Variable19;
	Parms.Temp_bool_Variable10 = Temp_bool_Variable10;
	Parms.K2Node_Select9_Default = K2Node_Select9_Default;
	Parms.Temp_object_Variable20 = Temp_object_Variable20;
	Parms.Temp_object_Variable21 = Temp_object_Variable21;
	Parms.Temp_bool_Variable11 = Temp_bool_Variable11;
	Parms.K2Node_Select10_Default = K2Node_Select10_Default;
	Parms.Temp_object_Variable22 = Temp_object_Variable22;
	Parms.Temp_object_Variable23 = Temp_object_Variable23;
	Parms.K2Node_Select11_Default = K2Node_Select11_Default;
	Parms.K2Node_MakeStruct_OakAbilityTimerSpec = K2Node_MakeStruct_OakAbilityTimerSpec;
	Parms.K2Node_MakeStruct_OakAbilityTimerSpec1 = K2Node_MakeStruct_OakAbilityTimerSpec1;
	Parms.K2Node_MakeStruct_OakAbilityTimerSpec2 = K2Node_MakeStruct_OakAbilityTimerSpec2;
	Parms.K2Node_MakeStruct_OakAbilityTimerSpec3 = K2Node_MakeStruct_OakAbilityTimerSpec3;
	Parms.K2Node_MakeStruct_OakAbilityTimerSpec4 = K2Node_MakeStruct_OakAbilityTimerSpec4;
	Parms.K2Node_MakeStruct_OakAbilityTimerSpec5 = K2Node_MakeStruct_OakAbilityTimerSpec5;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Timer != nullptr)
		*Timer = std::move(Parms.Timer);

	if (CDM != nullptr)
		*CDM = Parms.CDM;

}


// Function Passive_GunMage_13.Passive_GunMage_13_C.OakPassiveOnCastSpell
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGrenadeMod*                 SpellMod                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        EquippedPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassive_GunMage_13_C::OakPassiveOnCastSpell(class AGrenadeMod* SpellMod, class AOakCharacter_Player* EquippedPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_GunMage_13_C", "OakPassiveOnCastSpell");

	Params::UPassive_GunMage_13_C_OakPassiveOnCastSpell_Params Parms{};

	Parms.SpellMod = SpellMod;
	Parms.EquippedPlayer = EquippedPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Passive_GunMage_13.Passive_GunMage_13_C.OnAbilityTimerEnded
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FOakAbilityTimerSpec        Spec                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FOakAbilityTimerResult      Result                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UPassive_GunMage_13_C::OnAbilityTimerEnded(struct FOakAbilityTimerSpec& Spec, struct FOakAbilityTimerResult& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_GunMage_13_C", "OnAbilityTimerEnded");

	Params::UPassive_GunMage_13_C_OnAbilityTimerEnded_Params Parms{};

	Parms.Spec = Spec;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Passive_GunMage_13.Passive_GunMage_13_C.ExecuteUbergraph_Passive_GunMage_13
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGrenadeMod*                 K2Node_Event_SpellMod                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        K2Node_Event_EquippedPlayer                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetEquippedInventoryForSlot_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOakAbilityTimerSpec        K2Node_Event_Spec                                                (ConstParm, NoDestructor)
// struct FOakAbilityTimerResult      K2Node_Event_Result                                              (ConstParm, NoDestructor)
// struct FOakAbilityTimerSpec        CallFunc_GetStartCDM_Timer                                       (NoDestructor)
// class UConditionalDamageModifier*  CallFunc_GetStartCDM_CDM                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UConditionalDamageModifier*  CallFunc_GetStopCDM_CDM                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxAbilityResourceSpec_ConditionalDamageModifierK2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier(NoDestructor, ContainsInstancedReference)
// struct FGbxAbilityResourceSpec_ConditionalDamageModifierK2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1(NoDestructor, ContainsInstancedReference)

void UPassive_GunMage_13_C::ExecuteUbergraph_Passive_GunMage_13(int32 EntryPoint, class AGrenadeMod* K2Node_Event_SpellMod, class AOakCharacter_Player* K2Node_Event_EquippedPlayer, class AActor* CallFunc_GetEquippedInventoryForSlot_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FOakAbilityTimerSpec& K2Node_Event_Spec, const struct FOakAbilityTimerResult& K2Node_Event_Result, const struct FOakAbilityTimerSpec& CallFunc_GetStartCDM_Timer, class UConditionalDamageModifier* CallFunc_GetStartCDM_CDM, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, class UConditionalDamageModifier* CallFunc_GetStopCDM_CDM, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_GunMage_13_C", "ExecuteUbergraph_Passive_GunMage_13");

	Params::UPassive_GunMage_13_C_ExecuteUbergraph_Passive_GunMage_13_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_SpellMod = K2Node_Event_SpellMod;
	Parms.K2Node_Event_EquippedPlayer = K2Node_Event_EquippedPlayer;
	Parms.CallFunc_GetEquippedInventoryForSlot_ReturnValue = CallFunc_GetEquippedInventoryForSlot_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_Event_Spec = K2Node_Event_Spec;
	Parms.K2Node_Event_Result = K2Node_Event_Result;
	Parms.CallFunc_GetStartCDM_Timer = CallFunc_GetStartCDM_Timer;
	Parms.CallFunc_GetStartCDM_CDM = CallFunc_GetStartCDM_CDM;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetStopCDM_CDM = CallFunc_GetStopCDM_CDM;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier = K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1 = K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1;

	UObject::ProcessEvent(Func, &Parms);

}

}


