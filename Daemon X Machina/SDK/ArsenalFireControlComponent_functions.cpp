#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ArsenalFireControlComponent.ArsenalFireControlComponent_C
// (None)

class UClass* UArsenalFireControlComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArsenalFireControlComponent_C");

	return Clss;
}


// ArsenalFireControlComponent_C ArsenalFireControlComponent.Default__ArsenalFireControlComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UArsenalFireControlComponent_C* UArsenalFireControlComponent_C::GetDefaultObj()
{
	static class UArsenalFireControlComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UArsenalFireControlComponent_C*>(UArsenalFireControlComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ArsenalFireControlComponent.ArsenalFireControlComponent_C.GetShoulderWeaponDistanceIgnoreGravity
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              Range                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalFireControlComponent_C::GetShoulderWeaponDistanceIgnoreGravity(float* Range, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalFireControlComponent_C", "GetShoulderWeaponDistanceIgnoreGravity");

	Params::UArsenalFireControlComponent_C_GetShoulderWeaponDistanceIgnoreGravity_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	if (Range != nullptr)
		*Range = Parms.Range;

}


// Function ArsenalFireControlComponent.ArsenalFireControlComponent_C.GetLeftWeaponDistanceIgnoreGravity
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              Range                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalFireControlComponent_C::GetLeftWeaponDistanceIgnoreGravity(float* Range, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalFireControlComponent_C", "GetLeftWeaponDistanceIgnoreGravity");

	Params::UArsenalFireControlComponent_C_GetLeftWeaponDistanceIgnoreGravity_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	if (Range != nullptr)
		*Range = Parms.Range;

}


// Function ArsenalFireControlComponent.ArsenalFireControlComponent_C.GetRightWeaponDistanceIgnoreGravity
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              Range                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalFireControlComponent_C::GetRightWeaponDistanceIgnoreGravity(float* Range, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalFireControlComponent_C", "GetRightWeaponDistanceIgnoreGravity");

	Params::UArsenalFireControlComponent_C_GetRightWeaponDistanceIgnoreGravity_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	if (Range != nullptr)
		*Range = Parms.Range;

}


// Function ArsenalFireControlComponent.ArsenalFireControlComponent_C.GetShoulderWeaponCriticalRangeBP
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                              Range                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalFireControlComponent_C::GetShoulderWeaponCriticalRangeBP(float* Range, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, float CallFunc_RandomFloatInRange_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalFireControlComponent_C", "GetShoulderWeaponCriticalRangeBP");

	Params::UArsenalFireControlComponent_C_GetShoulderWeaponCriticalRangeBP_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Range != nullptr)
		*Range = Parms.Range;

}


// Function ArsenalFireControlComponent.ArsenalFireControlComponent_C.GetLeftWeaponCriticalRangeBP
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                              Range                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalFireControlComponent_C::GetLeftWeaponCriticalRangeBP(float* Range, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, float CallFunc_RandomFloatInRange_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalFireControlComponent_C", "GetLeftWeaponCriticalRangeBP");

	Params::UArsenalFireControlComponent_C_GetLeftWeaponCriticalRangeBP_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Range != nullptr)
		*Range = Parms.Range;

}


// Function ArsenalFireControlComponent.ArsenalFireControlComponent_C.GetRightWeaponCriticalRangeBP
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                              Range                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalFireControlComponent_C::GetRightWeaponCriticalRangeBP(float* Range, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, float CallFunc_RandomFloatInRange_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalFireControlComponent_C", "GetRightWeaponCriticalRangeBP");

	Params::UArsenalFireControlComponent_C_GetRightWeaponCriticalRangeBP_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Range != nullptr)
		*Range = Parms.Range;

}


// Function ArsenalFireControlComponent.ArsenalFireControlComponent_C.GetWeaponRangeSpecialBP
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              Range                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalFireControlComponent_C::GetWeaponRangeSpecialBP(float* Range, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalFireControlComponent_C", "GetWeaponRangeSpecialBP");

	Params::UArsenalFireControlComponent_C_GetWeaponRangeSpecialBP_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	if (Range != nullptr)
		*Range = Parms.Range;

}


// Function ArsenalFireControlComponent.ArsenalFireControlComponent_C.ProcessSupportWeaponAttackInput
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsStart                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsAIControl                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryCatchGrenadeEitherHand_Succeed                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TryCatchGrenadeEitherHand_IsLeftHandResult              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TryStartAim_isStartAim                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLWeaponBase*              CallFunc_GetCurrentSupportWeapon_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanSupportInput_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalFireControlComponent_C::ProcessSupportWeaponAttackInput(bool IsStart, bool IsAIControl, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, bool CallFunc_TryCatchGrenadeEitherHand_Succeed, bool CallFunc_TryCatchGrenadeEitherHand_IsLeftHandResult, bool CallFunc_TryStartAim_isStartAim, class ATTLWeaponBase* CallFunc_GetCurrentSupportWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CanSupportInput_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalFireControlComponent_C", "ProcessSupportWeaponAttackInput");

	Params::UArsenalFireControlComponent_C_ProcessSupportWeaponAttackInput_Params Parms{};

	Parms.IsStart = IsStart;
	Parms.IsAIControl = IsAIControl;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_TryCatchGrenadeEitherHand_Succeed = CallFunc_TryCatchGrenadeEitherHand_Succeed;
	Parms.CallFunc_TryCatchGrenadeEitherHand_IsLeftHandResult = CallFunc_TryCatchGrenadeEitherHand_IsLeftHandResult;
	Parms.CallFunc_TryStartAim_isStartAim = CallFunc_TryStartAim_isStartAim;
	Parms.CallFunc_GetCurrentSupportWeapon_ReturnValue = CallFunc_GetCurrentSupportWeapon_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CanSupportInput_ReturnValue = CallFunc_CanSupportInput_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalFireControlComponent.ArsenalFireControlComponent_C.GetCloseRangeComboAttackLeftBP
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              Range                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalFireControlComponent_C::GetCloseRangeComboAttackLeftBP(float* Range, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalFireControlComponent_C", "GetCloseRangeComboAttackLeftBP");

	Params::UArsenalFireControlComponent_C_GetCloseRangeComboAttackLeftBP_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	if (Range != nullptr)
		*Range = Parms.Range;

}


// Function ArsenalFireControlComponent.ArsenalFireControlComponent_C.GetCloseRangeComboAttackRightBP
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              Range                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalFireControlComponent_C::GetCloseRangeComboAttackRightBP(float* Range, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalFireControlComponent_C", "GetCloseRangeComboAttackRightBP");

	Params::UArsenalFireControlComponent_C_GetCloseRangeComboAttackRightBP_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	if (Range != nullptr)
		*Range = Parms.Range;

}


// Function ArsenalFireControlComponent.ArsenalFireControlComponent_C.EndShoulderAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsKnockBackDamage_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLActiveMissileLauncher*   K2Node_DynamicCast_AsTTLActive_Missile_Launcher                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalFireControlComponent_C::EndShoulderAttack(bool CallFunc_IsKnockBackDamage_ReturnValue, class ATTLActiveMissileLauncher* K2Node_DynamicCast_AsTTLActive_Missile_Launcher, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalFireControlComponent_C", "EndShoulderAttack");

	Params::UArsenalFireControlComponent_C_EndShoulderAttack_Params Parms{};

	Parms.CallFunc_IsKnockBackDamage_ReturnValue = CallFunc_IsKnockBackDamage_ReturnValue;
	Parms.K2Node_DynamicCast_AsTTLActive_Missile_Launcher = K2Node_DynamicCast_AsTTLActive_Missile_Launcher;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalFireControlComponent.ArsenalFireControlComponent_C.GetWeaponRangeShoulderBP
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              Range                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalFireControlComponent_C::GetWeaponRangeShoulderBP(float* Range, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalFireControlComponent_C", "GetWeaponRangeShoulderBP");

	Params::UArsenalFireControlComponent_C_GetWeaponRangeShoulderBP_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	if (Range != nullptr)
		*Range = Parms.Range;

}


// Function ArsenalFireControlComponent.ArsenalFireControlComponent_C.GetWeaponRangeLeftBP
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              Range                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalFireControlComponent_C::GetWeaponRangeLeftBP(float* Range, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalFireControlComponent_C", "GetWeaponRangeLeftBP");

	Params::UArsenalFireControlComponent_C_GetWeaponRangeLeftBP_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Range != nullptr)
		*Range = Parms.Range;

}


// Function ArsenalFireControlComponent.ArsenalFireControlComponent_C.GetWeaponRangeRightBP
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              Range                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalFireControlComponent_C::GetWeaponRangeRightBP(float* Range, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalFireControlComponent_C", "GetWeaponRangeRightBP");

	Params::UArsenalFireControlComponent_C_GetWeaponRangeRightBP_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Range != nullptr)
		*Range = Parms.Range;

}


// Function ArsenalFireControlComponent.ArsenalFireControlComponent_C.CheckShoulderFiring
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsReloading_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalFireControlComponent_C::CheckShoulderFiring(bool CallFunc_IsReloading_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalFireControlComponent_C", "CheckShoulderFiring");

	Params::UArsenalFireControlComponent_C_CheckShoulderFiring_Params Parms{};

	Parms.CallFunc_IsReloading_ReturnValue = CallFunc_IsReloading_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalFireControlComponent.ArsenalFireControlComponent_C.ProcessShoulderAttackInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsStart                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ProcessShoulderInputCPP_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalFireControlComponent_C::ProcessShoulderAttackInput(bool IsStart, bool CallFunc_ProcessShoulderInputCPP_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalFireControlComponent_C", "ProcessShoulderAttackInput");

	Params::UArsenalFireControlComponent_C_ProcessShoulderAttackInput_Params Parms{};

	Parms.IsStart = IsStart;
	Parms.CallFunc_ProcessShoulderInputCPP_ReturnValue = CallFunc_ProcessShoulderInputCPP_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalFireControlComponent.ArsenalFireControlComponent_C.ProcessFireInput
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeft                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsEnabledGrenade                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ProcessHandInputCPP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalFireControlComponent_C::ProcessFireInput(bool IsLeft, bool* Result, bool ReturnValue, bool IsEnabledGrenade, bool CallFunc_ProcessHandInputCPP_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalFireControlComponent_C", "ProcessFireInput");

	Params::UArsenalFireControlComponent_C_ProcessFireInput_Params Parms{};

	Parms.IsLeft = IsLeft;
	Parms.ReturnValue = ReturnValue;
	Parms.IsEnabledGrenade = IsEnabledGrenade;
	Parms.CallFunc_ProcessHandInputCPP_ReturnValue = CallFunc_ProcessHandInputCPP_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ArsenalFireControlComponent.ArsenalFireControlComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UArsenalFireControlComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalFireControlComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalFireControlComponent.ArsenalFireControlComponent_C.ExecuteUbergraph_ArsenalFireControlComponent
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalFireControlComponent_C::ExecuteUbergraph_ArsenalFireControlComponent(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalFireControlComponent_C", "ExecuteUbergraph_ArsenalFireControlComponent");

	Params::UArsenalFireControlComponent_C_ExecuteUbergraph_ArsenalFireControlComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Character = K2Node_DynamicCast_AsBase_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


