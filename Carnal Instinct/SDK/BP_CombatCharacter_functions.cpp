#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CombatCharacter.BP_CombatCharacter_C
// (Actor, Pawn)

class UClass* ABP_CombatCharacter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CombatCharacter_C");

	return Clss;
}


// BP_CombatCharacter_C BP_CombatCharacter.Default__BP_CombatCharacter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CombatCharacter_C* ABP_CombatCharacter_C::GetDefaultObj()
{
	static class ABP_CombatCharacter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CombatCharacter_C*>(ABP_CombatCharacter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CombatCharacter.BP_CombatCharacter_C.Get Transport Type
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETransportType          TransportType                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::Get_Transport_Type(enum class ETransportType* TransportType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "Get Transport Type");

	Params::ABP_CombatCharacter_C_Get_Transport_Type_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TransportType != nullptr)
		*TransportType = Parms.TransportType;

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.GetIsInCombat
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::GetIsInCombat(bool* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "GetIsInCombat");

	Params::ABP_CombatCharacter_C_GetIsInCombat_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.GetCombatType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_CombatType            Type                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::GetCombatType(enum class E_CombatType* Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "GetCombatType");

	Params::ABP_CombatCharacter_C_GetCombatType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Type != nullptr)
		*Type = Parms.Type;

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.SetIsInCombat
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Dummy                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::SetIsInCombat(bool Value, bool* Dummy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "SetIsInCombat");

	Params::ABP_CombatCharacter_C_SetIsInCombat_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

	if (Dummy != nullptr)
		*Dummy = Parms.Dummy;

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.ToggleIsInCombat
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Dummy                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetIsInCombat_Dummy                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::ToggleIsInCombat(bool* Dummy, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_SetIsInCombat_Dummy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "ToggleIsInCombat");

	Params::ABP_CombatCharacter_C_ToggleIsInCombat_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_SetIsInCombat_Dummy = CallFunc_SetIsInCombat_Dummy;

	UObject::ProcessEvent(Func, &Parms);

	if (Dummy != nullptr)
		*Dummy = Parms.Dummy;

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.CanCastAbility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_State                 CallFunc_GetState_State                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetManaCost_Value                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCurrentValue_CurrentValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::CanCastAbility(bool* Result, enum class E_State CallFunc_GetState_State, bool CallFunc_IsFalling_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_GetManaCost_Value, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetCurrentValue_CurrentValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "CanCastAbility");

	Params::ABP_CombatCharacter_C_CanCastAbility_Params Parms{};

	Parms.CallFunc_GetState_State = CallFunc_GetState_State;
	Parms.CallFunc_IsFalling_ReturnValue = CallFunc_IsFalling_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetManaCost_Value = CallFunc_GetManaCost_Value;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetCurrentValue_CurrentValue = CallFunc_GetCurrentValue_CurrentValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.GetMagicDamage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStatValue_Value                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::GetMagicDamage(float* Value, float CallFunc_GetStatValue_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "GetMagicDamage");

	Params::ABP_CombatCharacter_C_GetMagicDamage_Params Parms{};

	Parms.CallFunc_GetStatValue_Value = CallFunc_GetStatValue_Value;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.GetCastingSpeed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStatValue_Value                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::GetCastingSpeed(float* Value, float CallFunc_GetStatValue_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "GetCastingSpeed");

	Params::ABP_CombatCharacter_C_GetCastingSpeed_Params Parms{};

	Parms.CallFunc_GetStatValue_Value = CallFunc_GetStatValue_Value;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.GetBowStringSocketName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::GetBowStringSocketName(class FName* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "GetBowStringSocketName");

	Params::ABP_CombatCharacter_C_GetBowStringSocketName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.DoesHoldBowString
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_State                 CallFunc_GetState_State                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRolling_Rolling                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSprinting_Sprinting                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::DoesHoldBowString(bool* Result, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class E_State CallFunc_GetState_State, bool CallFunc_IsRolling_Rolling, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsSprinting_Sprinting, bool CallFunc_Not_PreBool_ReturnValue_2, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "DoesHoldBowString");

	Params::ABP_CombatCharacter_C_DoesHoldBowString_Params Parms{};

	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_IsFalling_ReturnValue = CallFunc_IsFalling_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetState_State = CallFunc_GetState_State;
	Parms.CallFunc_IsRolling_Rolling = CallFunc_IsRolling_Rolling;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_IsSprinting_Sprinting = CallFunc_IsSprinting_Sprinting;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.GetAimAlpha
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::GetAimAlpha(float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "GetAimAlpha");

	Params::ABP_CombatCharacter_C_GetAimAlpha_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.GetMontages
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_MontageAction         Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Montages                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_MontageAction         L_Action                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class E_MontageAction> L_CommonMontages                                                 (Edit, BlueprintVisible)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class E_MontageAction> K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class E_MontageAction> K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::GetMontages(enum class E_MontageAction Action, class UDataTable** Montages, enum class E_MontageAction L_Action, const TArray<enum class E_MontageAction>& L_CommonMontages, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3, TArray<enum class E_MontageAction>& K2Node_MakeArray_Array, bool CallFunc_Array_Contains_ReturnValue, TArray<enum class E_MontageAction>& K2Node_MakeArray_Array_1, bool CallFunc_Array_Contains_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "GetMontages");

	Params::ABP_CombatCharacter_C_GetMontages_Params Parms{};

	Parms.Action = Action;
	Parms.L_Action = L_Action;
	Parms.L_CommonMontages = L_CommonMontages;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Montages != nullptr)
		*Montages = Parms.Montages;

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.GetDesiredRotation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    Rotation                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_State                 CallFunc_GetState_State                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_State                 CallFunc_GetState_State_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsCasting_Result                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetEffectTransform_Transform                            (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_State                 CallFunc_GetState_State_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLastInputVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_MontageAction         CallFunc_GetLastRequestedAction_Action                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_MontageAction         CallFunc_GetLastRequestedAction_Action_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll_3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetLastMovementInputVector_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLastInputVector_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll_4                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTargetingEnabled_return_value                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll_5                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetLastMovementInputVector_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::GetDesiredRotation(struct FRotator* Rotation, uint8 CallFunc_MakeLiteralByte_ReturnValue, enum class E_State CallFunc_GetState_State, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, enum class E_State CallFunc_GetState_State_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_GetIsCasting_Result, const struct FTransform& CallFunc_GetEffectTransform_Transform, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, enum class E_State CallFunc_GetState_State_2, const struct FVector& CallFunc_GetLastInputVector_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, bool CallFunc_NotEqual_VectorVector_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, enum class E_MontageAction CallFunc_GetLastRequestedAction_Action, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, enum class E_MontageAction CallFunc_GetLastRequestedAction_Action_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, float CallFunc_BreakRotator_Roll_3, float CallFunc_BreakRotator_Pitch_3, float CallFunc_BreakRotator_Yaw_3, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, const struct FVector& CallFunc_GetLastMovementInputVector_ReturnValue, const struct FVector& CallFunc_GetLastInputVector_ReturnValue_1, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, bool CallFunc_NotEqual_VectorVector_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_BreakRotator_Roll_4, float CallFunc_BreakRotator_Pitch_4, float CallFunc_BreakRotator_Yaw_4, bool CallFunc_IsTargetingEnabled_return_value, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_4, float CallFunc_BreakRotator_Roll_5, float CallFunc_BreakRotator_Pitch_5, float CallFunc_BreakRotator_Yaw_5, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, const struct FVector& CallFunc_GetLastMovementInputVector_ReturnValue_1, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "GetDesiredRotation");

	Params::ABP_CombatCharacter_C_GetDesiredRotation_Params Parms{};

	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_GetState_State = CallFunc_GetState_State;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_GetState_State_1 = CallFunc_GetState_State_1;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetIsCasting_Result = CallFunc_GetIsCasting_Result;
	Parms.CallFunc_GetEffectTransform_Transform = CallFunc_GetEffectTransform_Transform;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetState_State_2 = CallFunc_GetState_State_2;
	Parms.CallFunc_GetLastInputVector_ReturnValue = CallFunc_GetLastInputVector_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.CallFunc_NotEqual_VectorVector_ReturnValue = CallFunc_NotEqual_VectorVector_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetLastRequestedAction_Action = CallFunc_GetLastRequestedAction_Action;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_GetLastRequestedAction_Action_1 = CallFunc_GetLastRequestedAction_Action_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue_1 = CallFunc_K2_GetActorRotation_ReturnValue_1;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue_2 = CallFunc_K2_GetActorRotation_ReturnValue_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_BreakRotator_Roll_2 = CallFunc_BreakRotator_Roll_2;
	Parms.CallFunc_BreakRotator_Pitch_2 = CallFunc_BreakRotator_Pitch_2;
	Parms.CallFunc_BreakRotator_Yaw_2 = CallFunc_BreakRotator_Yaw_2;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_2 = CallFunc_MakeLiteralByte_ReturnValue_2;
	Parms.CallFunc_BreakRotator_Roll_3 = CallFunc_BreakRotator_Roll_3;
	Parms.CallFunc_BreakRotator_Pitch_3 = CallFunc_BreakRotator_Pitch_3;
	Parms.CallFunc_BreakRotator_Yaw_3 = CallFunc_BreakRotator_Yaw_3;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_GetLastMovementInputVector_ReturnValue = CallFunc_GetLastMovementInputVector_ReturnValue;
	Parms.CallFunc_GetLastInputVector_ReturnValue_1 = CallFunc_GetLastInputVector_ReturnValue_1;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_NotEqual_VectorVector_ReturnValue_1 = CallFunc_NotEqual_VectorVector_ReturnValue_1;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue_3 = CallFunc_K2_GetActorRotation_ReturnValue_3;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_BreakRotator_Roll_4 = CallFunc_BreakRotator_Roll_4;
	Parms.CallFunc_BreakRotator_Pitch_4 = CallFunc_BreakRotator_Pitch_4;
	Parms.CallFunc_BreakRotator_Yaw_4 = CallFunc_BreakRotator_Yaw_4;
	Parms.CallFunc_IsTargetingEnabled_return_value = CallFunc_IsTargetingEnabled_return_value;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_3 = CallFunc_K2_GetActorLocation_ReturnValue_3;
	Parms.CallFunc_FindLookAtRotation_ReturnValue_1 = CallFunc_FindLookAtRotation_ReturnValue_1;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue_4 = CallFunc_K2_GetActorRotation_ReturnValue_4;
	Parms.CallFunc_BreakRotator_Roll_5 = CallFunc_BreakRotator_Roll_5;
	Parms.CallFunc_BreakRotator_Pitch_5 = CallFunc_BreakRotator_Pitch_5;
	Parms.CallFunc_BreakRotator_Yaw_5 = CallFunc_BreakRotator_Yaw_5;
	Parms.CallFunc_MakeRotator_ReturnValue_2 = CallFunc_MakeRotator_ReturnValue_2;
	Parms.CallFunc_GetLastMovementInputVector_ReturnValue_1 = CallFunc_GetLastMovementInputVector_ReturnValue_1;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue_1 = CallFunc_Conv_VectorToRotator_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.CanEffectBeApplied
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_EffectType            Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Applier                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                      L_Applier                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetActivityValue_Value                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetActivityValue_Value_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetActivityValue_Value_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanBeStunned_Result                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetActivityValue_Value_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetActivityValue_Value_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanBeStunned_Result_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanBeAttacked_Result                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_CombatCharacter_C::CanEffectBeApplied(enum class E_EffectType Type, class AActor* Applier, class AActor* L_Applier, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, bool CallFunc_GetActivityValue_Value, bool CallFunc_GetActivityValue_Value_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_GetActivityValue_Value_2, bool CallFunc_Not_PreBool_ReturnValue_2, uint8 CallFunc_MakeLiteralByte_ReturnValue_3, bool CallFunc_CanBeStunned_Result, bool CallFunc_GetActivityValue_Value_3, uint8 CallFunc_MakeLiteralByte_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GetActivityValue_Value_4, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_CanBeStunned_Result_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_CanBeAttacked_Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "CanEffectBeApplied");

	Params::ABP_CombatCharacter_C_CanEffectBeApplied_Params Parms{};

	Parms.Type = Type;
	Parms.Applier = Applier;
	Parms.L_Applier = L_Applier;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_2 = CallFunc_MakeLiteralByte_ReturnValue_2;
	Parms.CallFunc_GetActivityValue_Value = CallFunc_GetActivityValue_Value;
	Parms.CallFunc_GetActivityValue_Value_1 = CallFunc_GetActivityValue_Value_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetActivityValue_Value_2 = CallFunc_GetActivityValue_Value_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_3 = CallFunc_MakeLiteralByte_ReturnValue_3;
	Parms.CallFunc_CanBeStunned_Result = CallFunc_CanBeStunned_Result;
	Parms.CallFunc_GetActivityValue_Value_3 = CallFunc_GetActivityValue_Value_3;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_4 = CallFunc_MakeLiteralByte_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetActivityValue_Value_4 = CallFunc_GetActivityValue_Value_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_CanBeStunned_Result_1 = CallFunc_CanBeStunned_Result_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_CanBeAttacked_Result = CallFunc_CanBeAttacked_Result;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.TakeDamage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FF_HitData                  HitData                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_AttackResult          ResultType                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FF_HitData                  L_HitData                                                        (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               L_Parried                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               L_Blocked                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDecalComponent*             CallFunc_SpawnDecalAtLocation_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDecalComponent*             CallFunc_SpawnDecalAtLocation_ReturnValue_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDecalComponent*             CallFunc_SpawnDecalAtLocation_ReturnValue_2                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetActivityValue_Value                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCurrentValue_CurrentValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAlive_Result                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UEffectsComponent_C*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ApplyEffect_Applied                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Scale_Damage_for_Difficulty_New_Damage                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEffectsComponent_C*         CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_Direction             CallFunc_GetHitDirection_Direction                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ApplyEffect_Applied_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanBeAttacked_Result                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::TakeDamage(struct FF_HitData& HitData, bool* Result, enum class E_AttackResult* ResultType, const struct FF_HitData& L_HitData, bool L_Parried, bool L_Blocked, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess_1, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, class UDecalComponent* CallFunc_SpawnDecalAtLocation_ReturnValue, class UDecalComponent* CallFunc_SpawnDecalAtLocation_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, uint8 CallFunc_MakeLiteralByte_ReturnValue, class UDecalComponent* CallFunc_SpawnDecalAtLocation_ReturnValue_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, bool CallFunc_GetActivityValue_Value, float CallFunc_GetCurrentValue_CurrentValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsAlive_Result, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UEffectsComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ApplyEffect_Applied, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, float CallFunc_Scale_Damage_for_Difficulty_New_Damage, class UEffectsComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, enum class E_Direction CallFunc_GetHitDirection_Direction, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_ApplyEffect_Applied_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, bool CallFunc_CanBeAttacked_Result, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "TakeDamage");

	Params::ABP_CombatCharacter_C_TakeDamage_Params Parms{};

	Parms.HitData = HitData;
	Parms.L_HitData = L_HitData;
	Parms.L_Parried = L_Parried;
	Parms.L_Blocked = L_Blocked;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_1 = CallFunc_RandomIntegerInRange_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_SpawnDecalAtLocation_ReturnValue = CallFunc_SpawnDecalAtLocation_ReturnValue;
	Parms.CallFunc_SpawnDecalAtLocation_ReturnValue_1 = CallFunc_SpawnDecalAtLocation_ReturnValue_1;
	Parms.CallFunc_MakeRotator_ReturnValue_2 = CallFunc_MakeRotator_ReturnValue_2;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_SpawnDecalAtLocation_ReturnValue_2 = CallFunc_SpawnDecalAtLocation_ReturnValue_2;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue_1 = CallFunc_SpawnEmitterAttached_ReturnValue_1;
	Parms.CallFunc_GetActivityValue_Value = CallFunc_GetActivityValue_Value;
	Parms.CallFunc_GetCurrentValue_CurrentValue = CallFunc_GetCurrentValue_CurrentValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_IsAlive_Result = CallFunc_IsAlive_Result;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_ApplyEffect_Applied = CallFunc_ApplyEffect_Applied;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Scale_Damage_for_Difficulty_New_Damage = CallFunc_Scale_Damage_for_Difficulty_New_Damage;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetHitDirection_Direction = CallFunc_GetHitDirection_Direction;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_ApplyEffect_Applied_1 = CallFunc_ApplyEffect_Applied_1;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.CallFunc_CanBeAttacked_Result = CallFunc_CanBeAttacked_Result;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (ResultType != nullptr)
		*ResultType = Parms.ResultType;

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.GetHeadSocket
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SocketName                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::GetHeadSocket(class FName* SocketName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "GetHeadSocket");

	Params::ABP_CombatCharacter_C_GetHeadSocket_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SocketName != nullptr)
		*SocketName = Parms.SocketName;

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.IsAlive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_State                 CallFunc_GetState_State                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::IsAlive(bool* Result, uint8 CallFunc_MakeLiteralByte_ReturnValue, enum class E_State CallFunc_GetState_State, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "IsAlive");

	Params::ABP_CombatCharacter_C_IsAlive_Params Parms{};

	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_GetState_State = CallFunc_GetState_State;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.Scale Damage for Difficulty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              New_Damage                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage_Scaling                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::Scale_Damage_for_Difficulty(float Damage, float* New_Damage, float Damage_Scaling, float CallFunc_Multiply_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "Scale Damage for Difficulty");

	Params::ABP_CombatCharacter_C_Scale_Damage_for_Difficulty_Params Parms{};

	Parms.Damage = Damage;
	Parms.Damage_Scaling = Damage_Scaling;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (New_Damage != nullptr)
		*New_Damage = Parms.New_Damage;

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.EthnicitySlider
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_MorphTargets             Input_Morph                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// float                              Morph_Eth2                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_MorphTargets>     MorphName                                                        (Edit, BlueprintVisible)
// float                              Morph_Eth1                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_MorphTargets             K2Node_MakeStruct_s_MorphTargets                                 (HasGetValueTypeHash)
// struct FS_MorphTargets             K2Node_MakeStruct_s_MorphTargets_1                               (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_MorphTargets             CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_MorphTargets             K2Node_MakeStruct_s_MorphTargets_2                               (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_MorphTargets             K2Node_MakeStruct_s_MorphTargets_3                               (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::EthnicitySlider(const struct FS_MorphTargets& Input_Morph, float Morph_Eth2, const TArray<struct FS_MorphTargets>& MorphName, float Morph_Eth1, int32 Temp_int_Array_Index_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FS_MorphTargets& K2Node_MakeStruct_s_MorphTargets, const struct FS_MorphTargets& K2Node_MakeStruct_s_MorphTargets_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, const struct FS_MorphTargets& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, const struct FS_MorphTargets& K2Node_MakeStruct_s_MorphTargets_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FS_MorphTargets& K2Node_MakeStruct_s_MorphTargets_3, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, class USkeletalMeshComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "EthnicitySlider");

	Params::ABP_CombatCharacter_C_EthnicitySlider_Params Parms{};

	Parms.Input_Morph = Input_Morph;
	Parms.Morph_Eth2 = Morph_Eth2;
	Parms.MorphName = MorphName;
	Parms.Morph_Eth1 = Morph_Eth1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_MakeStruct_s_MorphTargets = K2Node_MakeStruct_s_MorphTargets;
	Parms.K2Node_MakeStruct_s_MorphTargets_1 = K2Node_MakeStruct_s_MorphTargets_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.K2Node_MakeStruct_s_MorphTargets_2 = K2Node_MakeStruct_s_MorphTargets_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_MakeStruct_s_MorphTargets_3 = K2Node_MakeStruct_s_MorphTargets_3;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.TittyMorphs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_MorphTargets             Input_Morph                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// float                              Morph_BreastsHu                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Morph_BreastEnl                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_MorphTargets>     MorphName                                                        (Edit, BlueprintVisible)
// float                              Morph_BreastReduction                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InRange_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_MorphTargets             K2Node_MakeStruct_s_MorphTargets                                 (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_MorphTargets             K2Node_MakeStruct_s_MorphTargets_1                               (HasGetValueTypeHash)
// struct FS_MorphTargets             K2Node_MakeStruct_s_MorphTargets_2                               (HasGetValueTypeHash)
// struct FS_MorphTargets             CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::TittyMorphs(const struct FS_MorphTargets& Input_Morph, float Morph_BreastsHu, float Morph_BreastEnl, const TArray<struct FS_MorphTargets>& MorphName, float Morph_BreastReduction, int32 Temp_int_Array_Index_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_InRange_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, const struct FS_MorphTargets& K2Node_MakeStruct_s_MorphTargets, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FS_MorphTargets& K2Node_MakeStruct_s_MorphTargets_1, const struct FS_MorphTargets& K2Node_MakeStruct_s_MorphTargets_2, const struct FS_MorphTargets& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, class USkeletalMeshComponent* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "TittyMorphs");

	Params::ABP_CombatCharacter_C_TittyMorphs_Params Parms{};

	Parms.Input_Morph = Input_Morph;
	Parms.Morph_BreastsHu = Morph_BreastsHu;
	Parms.Morph_BreastEnl = Morph_BreastEnl;
	Parms.MorphName = MorphName;
	Parms.Morph_BreastReduction = Morph_BreastReduction;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_InRange_FloatFloat_ReturnValue = CallFunc_InRange_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.K2Node_MakeStruct_s_MorphTargets = K2Node_MakeStruct_s_MorphTargets;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_MakeStruct_s_MorphTargets_1 = K2Node_MakeStruct_s_MorphTargets_1;
	Parms.K2Node_MakeStruct_s_MorphTargets_2 = K2Node_MakeStruct_s_MorphTargets_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.GetDeathMontage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRandomMontageIndex_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetMontageForAction_Montage                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::GetDeathMontage(class UAnimMontage** Montage, int32 CallFunc_GetRandomMontageIndex_ReturnValue, class UAnimMontage* CallFunc_GetMontageForAction_Montage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "GetDeathMontage");

	Params::ABP_CombatCharacter_C_GetDeathMontage_Params Parms{};

	Parms.CallFunc_GetRandomMontageIndex_ReturnValue = CallFunc_GetRandomMontageIndex_ReturnValue;
	Parms.CallFunc_GetMontageForAction_Montage = CallFunc_GetMontageForAction_Montage;

	UObject::ProcessEvent(Func, &Parms);

	if (Montage != nullptr)
		*Montage = Parms.Montage;

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.Imprisoned
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerStart*                NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ImprisonLocation_C*      CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocationAndRotation_SweepHitResult           (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocationAndRotation_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_GetMaxValue_Value                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::Imprisoned(class APlayerStart* NewLocalVar_0, class ABP_ImprisonLocation_C* CallFunc_GetActorOfClass_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult, float CallFunc_GetMaxValue_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "Imprisoned");

	Params::ABP_CombatCharacter_C_Imprisoned_Params Parms{};

	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_SetActorLocationAndRotation_SweepHitResult = CallFunc_K2_SetActorLocationAndRotation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocationAndRotation_ReturnValue = CallFunc_K2_SetActorLocationAndRotation_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult = CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult;
	Parms.CallFunc_GetMaxValue_Value = CallFunc_GetMaxValue_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.Set Morph
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_MorphTargets             Morph                                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TMap<class FString, struct FS_bodySystem>BodyTemp                                                         (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_bodySystem>       CallFunc_Map_Values_Values                                       (ReferenceParm)
// struct FS_bodySystem               CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_MorphTargets             K2Node_SetFieldsInStruct_StructOut                               (UObjectWrapper, HasGetValueTypeHash)
// struct FS_bodySystem               K2Node_SetFieldsInStruct_StructOut_1                             (HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::Set_Morph(const struct FS_MorphTargets& Morph, TMap<class FString, struct FS_bodySystem> BodyTemp, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, bool K2Node_SwitchName_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<struct FS_bodySystem>& CallFunc_Map_Values_Values, const struct FS_bodySystem& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_MorphTargets& K2Node_SetFieldsInStruct_StructOut, const struct FS_bodySystem& K2Node_SetFieldsInStruct_StructOut_1, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, class USkeletalMeshComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "Set Morph");

	Params::ABP_CombatCharacter_C_Set_Morph_Params Parms{};

	Parms.Morph = Morph;
	Parms.BodyTemp = BodyTemp;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.K2Node_SetFieldsInStruct_StructOut_1 = K2Node_SetFieldsInStruct_StructOut_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.Select Camp Item
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_CampUnlocks              Selected_Camp_Item                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)
// TMap<class FString, struct FS_CampUnlocks>Camp_Items_Temp                                                  (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAllActorsWithTag_OutActors                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAttachedActors_OutActors                             (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// TArray<struct FS_CampUnlocks>      CallFunc_Map_Values_Values                                       (ReferenceParm, ContainsInstancedReference)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CampUnlocks              CallFunc_Array_Get_Item_2                                        (ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)
// class ABP_CampItem_Base_C*         CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CampUnlocks              K2Node_SetFieldsInStruct_StructOut                               (ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_CampUnlocks              K2Node_SetFieldsInStruct_StructOut_1                             (ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::Select_Camp_Item(const struct FS_CampUnlocks& Selected_Camp_Item, TMap<class FString, struct FS_CampUnlocks> Camp_Items_Temp, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, class AActor* CallFunc_Array_Get_Item, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, class AActor* CallFunc_Array_Get_Item_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, TArray<struct FS_CampUnlocks>& CallFunc_Map_Values_Values, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FS_CampUnlocks& CallFunc_Array_Get_Item_2, class ABP_CampItem_Base_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FS_CampUnlocks& K2Node_SetFieldsInStruct_StructOut, bool CallFunc_IsValid_ReturnValue, const struct FS_CampUnlocks& K2Node_SetFieldsInStruct_StructOut_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "Select Camp Item");

	Params::ABP_CombatCharacter_C_Select_Camp_Item_Params Parms{};

	Parms.Selected_Camp_Item = Selected_Camp_Item;
	Parms.Camp_Items_Temp = Camp_Items_Temp;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetAllActorsWithTag_OutActors = CallFunc_GetAllActorsWithTag_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetAttachedActors_OutActors = CallFunc_GetAttachedActors_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SetFieldsInStruct_StructOut_1 = K2Node_SetFieldsInStruct_StructOut_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.Load Camp Unlocks
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_CampUnlocks>      Camp_Unlocks                                                     (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_CampUnlocks>      CallFunc_Map_Values_Values                                       (ReferenceParm, ContainsInstancedReference)
// struct FS_CampUnlocks              CallFunc_Array_Get_Item                                          (ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_CampUnlocks              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class ABP_CampItem_Base_C*         CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_GetAllActorsWithTag_OutActors                           (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_GetAttachedActors_OutActors                             (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_CampUnlocks              CallFunc_Map_Find_Value                                          (ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_CampUnlocks              CallFunc_GetDataTableRowFromName_OutRow                          (ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::Load_Camp_Unlocks(const TArray<struct FS_CampUnlocks>& Camp_Unlocks, const struct FTransform& CallFunc_MakeTransform_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Loop_Counter_Variable_3, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_4, TArray<struct FS_CampUnlocks>& CallFunc_Map_Values_Values, const struct FS_CampUnlocks& CallFunc_Array_Get_Item, const struct FS_CampUnlocks& CallFunc_Array_Get_Item_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class ABP_CampItem_Base_C* CallFunc_FinishSpawningActor_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, class AActor* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, class AActor* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, const struct FS_CampUnlocks& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue_4, class FName CallFunc_Array_Get_Item_4, bool CallFunc_Less_IntInt_ReturnValue_4, const struct FS_CampUnlocks& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "Load Camp Unlocks");

	Params::ABP_CombatCharacter_C_Load_Camp_Unlocks_Params Parms{};

	Parms.Camp_Unlocks = Camp_Unlocks;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAllActorsWithTag_OutActors = CallFunc_GetAllActorsWithTag_OutActors;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetAttachedActors_OutActors = CallFunc_GetAttachedActors_OutActors;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.CheckInCombatEnemies
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BaseAI_C*                K2Node_DynamicCast_AsBP_Base_AI                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_SphereOverlapActors_OutActors                           (ReferenceParm)
// bool                               CallFunc_SphereOverlapActors_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class II_CombatState_C>CallFunc_SetIsInCombat_self_CastInput                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetIsInCombat_Dummy                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::CheckInCombatEnemies(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TArray<class AActor*>& Temp_object_Variable, class AActor* CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class ABP_BaseAI_C* K2Node_DynamicCast_AsBP_Base_AI, bool K2Node_DynamicCast_bSuccess, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, TScriptInterface<class II_CombatState_C> CallFunc_SetIsInCombat_self_CastInput, bool CallFunc_SetIsInCombat_Dummy, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "CheckInCombatEnemies");

	Params::ABP_CombatCharacter_C_CheckInCombatEnemies_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Base_AI = K2Node_DynamicCast_AsBP_Base_AI;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SphereOverlapActors_OutActors = CallFunc_SphereOverlapActors_OutActors;
	Parms.CallFunc_SphereOverlapActors_ReturnValue = CallFunc_SphereOverlapActors_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_SetIsInCombat_self_CastInput = CallFunc_SetIsInCombat_self_CastInput;
	Parms.CallFunc_SetIsInCombat_Dummy = CallFunc_SetIsInCombat_Dummy;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.Check Combat Music
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::Check_Combat_Music(int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "Check Combat Music");

	Params::ABP_CombatCharacter_C_Check_Combat_Music_Params Parms{};

	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.ActivateTorch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::ActivateTorch(bool IsEnabled_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "ActivateTorch");

	Params::ABP_CombatCharacter_C_ActivateTorch_Params Parms{};

	Parms.IsEnabled_ = IsEnabled_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.Remove Enemy in Combat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::Remove_Enemy_in_Combat(class AActor* Actor, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "Remove Enemy in Combat");

	Params::ABP_CombatCharacter_C_Remove_Enemy_in_Combat_Params Parms{};

	Parms.Actor = Actor;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.Add in Combat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ActorHasTag_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::Add_in_Combat(class AActor* Actor, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "Add in Combat");

	Params::ABP_CombatCharacter_C_Add_in_Combat_Params Parms{};

	Parms.Actor = Actor;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue_1 = CallFunc_ActorHasTag_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.GetKnockdownMontage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_MontageAction         L_StunDirection                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetMontageForAction_Montage                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::GetKnockdownMontage(class UAnimMontage** Montage, enum class E_MontageAction L_StunDirection, class UAnimMontage* CallFunc_GetMontageForAction_Montage, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "GetKnockdownMontage");

	Params::ABP_CombatCharacter_C_GetKnockdownMontage_Params Parms{};

	Parms.L_StunDirection = L_StunDirection;
	Parms.CallFunc_GetMontageForAction_Montage = CallFunc_GetMontageForAction_Montage;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Montage != nullptr)
		*Montage = Parms.Montage;

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.Knockdown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                CallFunc_GetKnockdownMontage_Montage                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Montage_Play_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::Knockdown(class UAnimMontage* CallFunc_GetKnockdownMontage_Montage, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_Montage_Play_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "Knockdown");

	Params::ABP_CombatCharacter_C_Knockdown_Params Parms{};

	Parms.CallFunc_GetKnockdownMontage_Montage = CallFunc_GetKnockdownMontage_Montage;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_Montage_Play_ReturnValue = CallFunc_Montage_Play_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.ToggleCombatKeybindings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show_                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::ToggleCombatKeybindings(bool Show_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "ToggleCombatKeybindings");

	Params::ABP_CombatCharacter_C_ToggleCombatKeybindings_Params Parms{};

	Parms.Show_ = Show_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.GetRiposteMontage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRandomMontageIndex_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetMontageForAction_Montage                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::GetRiposteMontage(class UAnimMontage** Montage, int32 CallFunc_GetRandomMontageIndex_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, class UAnimMontage* CallFunc_GetMontageForAction_Montage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "GetRiposteMontage");

	Params::ABP_CombatCharacter_C_GetRiposteMontage_Params Parms{};

	Parms.CallFunc_GetRandomMontageIndex_ReturnValue = CallFunc_GetRandomMontageIndex_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_GetMontageForAction_Montage = CallFunc_GetMontageForAction_Montage;

	UObject::ProcessEvent(Func, &Parms);

	if (Montage != nullptr)
		*Montage = Parms.Montage;

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.AttemptRiposte
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      L_HitActor                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetRiposteMontage_Montage                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDamage_Damage                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Montage_Play_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEffectsComponent_C*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanMeleeAttack_Result                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ApplyRiposteEffect_Applied                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDotProductTo_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::AttemptRiposte(bool* Result, class AActor* L_HitActor, class UAnimMontage* CallFunc_GetRiposteMontage_Montage, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetDamage_Damage, float CallFunc_Multiply_FloatFloat_ReturnValue, TArray<class AActor*>& Temp_object_Variable, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_Montage_Play_ReturnValue, class UEffectsComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_CanMeleeAttack_Result, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_ApplyRiposteEffect_Applied, float CallFunc_GetDotProductTo_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "AttemptRiposte");

	Params::ABP_CombatCharacter_C_AttemptRiposte_Params Parms{};

	Parms.L_HitActor = L_HitActor;
	Parms.CallFunc_GetRiposteMontage_Montage = CallFunc_GetRiposteMontage_Montage;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDamage_Damage = CallFunc_GetDamage_Damage;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_Montage_Play_ReturnValue = CallFunc_Montage_Play_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_CanMeleeAttack_Result = CallFunc_CanMeleeAttack_Result;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_ApplyRiposteEffect_Applied = CallFunc_ApplyRiposteEffect_Applied;
	Parms.CallFunc_GetDotProductTo_ReturnValue = CallFunc_GetDotProductTo_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.SetRotationModeExplore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::SetRotationModeExplore()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "SetRotationModeExplore");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.SetRotationModeCombat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::SetRotationModeCombat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "SetRotationModeCombat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.SetInitialHead
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ItemData                 InitialHead                                                      (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)

void ABP_CombatCharacter_C::SetInitialHead(const struct FS_ItemData& InitialHead)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "SetInitialHead");

	Params::ABP_CombatCharacter_C_SetInitialHead_Params Parms{};

	Parms.InitialHead = InitialHead;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.SetRotationModeToggle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::SetRotationModeToggle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "SetRotationModeToggle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.Respawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerStart*                NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANpc_bed_C*                  CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerStart*                CallFunc_GetActorOfClass_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorLocationAndRotation_SweepHitResult           (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocationAndRotation_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocationAndRotation_SweepHitResult_1         (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocationAndRotation_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxValue_Value                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::Respawn(class APlayerStart* NewLocalVar_0, class ANpc_bed_C* CallFunc_GetActorOfClass_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APlayerStart* CallFunc_GetActorOfClass_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult_1, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult, class FName CallFunc_MakeLiteralName_ReturnValue, float CallFunc_GetMaxValue_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "Respawn");

	Params::ABP_CombatCharacter_C_Respawn_Params Parms{};

	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetActorOfClass_ReturnValue_1 = CallFunc_GetActorOfClass_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue_1 = CallFunc_K2_GetActorRotation_ReturnValue_1;
	Parms.CallFunc_K2_SetActorLocationAndRotation_SweepHitResult = CallFunc_K2_SetActorLocationAndRotation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocationAndRotation_ReturnValue = CallFunc_K2_SetActorLocationAndRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_SetActorLocationAndRotation_SweepHitResult_1 = CallFunc_K2_SetActorLocationAndRotation_SweepHitResult_1;
	Parms.CallFunc_K2_SetActorLocationAndRotation_ReturnValue_1 = CallFunc_K2_SetActorLocationAndRotation_ReturnValue_1;
	Parms.CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult = CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetMaxValue_Value = CallFunc_GetMaxValue_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.IsRolling
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Rolling                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AALS_Base_CharacterBP_C*     K2Node_DynamicCast_AsALS_Base_Character_BP                       (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::IsRolling(bool* Rolling, class AALS_Base_CharacterBP_C* K2Node_DynamicCast_AsALS_Base_Character_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "IsRolling");

	Params::ABP_CombatCharacter_C_IsRolling_Params Parms{};

	Parms.K2Node_DynamicCast_AsALS_Base_Character_BP = K2Node_DynamicCast_AsALS_Base_Character_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Rolling != nullptr)
		*Rolling = Parms.Rolling;

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.DrainStamina
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetCurrentValue_CurrentValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AALS_Base_CharacterBP_C*     K2Node_DynamicCast_AsALS_Base_Character_BP                       (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AALS_Base_CharacterBP_C*     K2Node_DynamicCast_AsALS_Base_Character_BP_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSprinting_Sprinting                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::DrainStamina(float CallFunc_GetCurrentValue_CurrentValue, class AALS_Base_CharacterBP_C* K2Node_DynamicCast_AsALS_Base_Character_BP, bool K2Node_DynamicCast_bSuccess, class AALS_Base_CharacterBP_C* K2Node_DynamicCast_AsALS_Base_Character_BP_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsSprinting_Sprinting, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "DrainStamina");

	Params::ABP_CombatCharacter_C_DrainStamina_Params Parms{};

	Parms.CallFunc_GetCurrentValue_CurrentValue = CallFunc_GetCurrentValue_CurrentValue;
	Parms.K2Node_DynamicCast_AsALS_Base_Character_BP = K2Node_DynamicCast_AsALS_Base_Character_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsALS_Base_Character_BP_1 = K2Node_DynamicCast_AsALS_Base_Character_BP_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsSprinting_Sprinting = CallFunc_IsSprinting_Sprinting;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.IsSprinting
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Sprinting                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AALS_Base_CharacterBP_C*     K2Node_DynamicCast_AsALS_Base_Character_BP                       (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::IsSprinting(bool* Sprinting, class AALS_Base_CharacterBP_C* K2Node_DynamicCast_AsALS_Base_Character_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "IsSprinting");

	Params::ABP_CombatCharacter_C_IsSprinting_Params Parms{};

	Parms.K2Node_DynamicCast_AsALS_Base_Character_BP = K2Node_DynamicCast_AsALS_Base_Character_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Sprinting != nullptr)
		*Sprinting = Parms.Sprinting;

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.CanBlock
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::CanBlock(bool* Result, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "CanBlock");

	Params::ABP_CombatCharacter_C_CanBlock_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.UpdateCameraLag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FInterpTo_Constant_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::UpdateCameraLag(float CallFunc_GetWorldDeltaSeconds_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, float CallFunc_FInterpTo_Constant_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "UpdateCameraLag");

	Params::ABP_CombatCharacter_C_UpdateCameraLag_Params Parms{};

	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue = CallFunc_FInterpTo_Constant_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.SetCameraLagSmoothly
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TargetLagSpeed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::SetCameraLagSmoothly(float TargetLagSpeed, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "SetCameraLagSmoothly");

	Params::ABP_CombatCharacter_C_SetCameraLagSmoothly_Params Parms{};

	Parms.TargetLagSpeed = TargetLagSpeed;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.ResetAimingMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::ResetAimingMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "ResetAimingMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.ApplyHitImpulseToCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      HitActor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitNormal                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ImpulsePower                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_DynamicCast_AsCharacter                                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnySimulatingPhysics_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::ApplyHitImpulseToCharacter(class AActor* HitActor, const struct FVector& HitNormal, float ImpulsePower, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_IsAnySimulatingPhysics_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "ApplyHitImpulseToCharacter");

	Params::ABP_CombatCharacter_C_ApplyHitImpulseToCharacter_Params Parms{};

	Parms.HitActor = HitActor;
	Parms.HitNormal = HitNormal;
	Parms.ImpulsePower = ImpulsePower;
	Parms.K2Node_DynamicCast_AsCharacter = K2Node_DynamicCast_AsCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_IsAnySimulatingPhysics_ReturnValue = CallFunc_IsAnySimulatingPhysics_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.GetParryMontage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetMontageForAction_Montage                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::GetParryMontage(class UAnimMontage** Montage, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 K2Node_Select_Default, class UAnimMontage* CallFunc_GetMontageForAction_Montage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "GetParryMontage");

	Params::ABP_CombatCharacter_C_GetParryMontage_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetMontageForAction_Montage = CallFunc_GetMontageForAction_Montage;

	UObject::ProcessEvent(Func, &Parms);

	if (Montage != nullptr)
		*Montage = Parms.Montage;

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.MakeMeleeHitData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      HitActor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FF_HitData                  HitData                                                          (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetDirectionUnitVector_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDamage_Damage                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ScaleMeleeDamageByType_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FF_HitData                  K2Node_MakeStruct_F_HitData                                      (IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

void ABP_CombatCharacter_C::MakeMeleeHitData(class AActor* HitActor, struct FF_HitData* HitData, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_GetDamage_Damage, float CallFunc_ScaleMeleeDamageByType_ReturnValue, const struct FF_HitData& K2Node_MakeStruct_F_HitData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "MakeMeleeHitData");

	Params::ABP_CombatCharacter_C_MakeMeleeHitData_Params Parms{};

	Parms.HitActor = HitActor;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_GetDirectionUnitVector_ReturnValue = CallFunc_GetDirectionUnitVector_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetDamage_Damage = CallFunc_GetDamage_Damage;
	Parms.CallFunc_ScaleMeleeDamageByType_ReturnValue = CallFunc_ScaleMeleeDamageByType_ReturnValue;
	Parms.K2Node_MakeStruct_F_HitData = K2Node_MakeStruct_F_HitData;

	UObject::ProcessEvent(Func, &Parms);

	if (HitData != nullptr)
		*HitData = std::move(Parms.HitData);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.Backstabbed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                CallFunc_GetMontageForAction_Montage                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Montage_Play_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::Backstabbed(class UAnimMontage* CallFunc_GetMontageForAction_Montage, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_Montage_Play_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "Backstabbed");

	Params::ABP_CombatCharacter_C_Backstabbed_Params Parms{};

	Parms.CallFunc_GetMontageForAction_Montage = CallFunc_GetMontageForAction_Montage;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_Montage_Play_ReturnValue = CallFunc_Montage_Play_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.UpdateRotationSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_RotationMode          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_RotationMode          Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_RotationMode          Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CombatType            Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_RotationMode          Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CombatType            Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_State                 CallFunc_GetState_State                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_RotationMode          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFalling_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsPressed_Result                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_State                 CallFunc_GetState_State_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_State                 CallFunc_GetState_State_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetActivityValue_Value                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_State                 CallFunc_GetState_State_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTargetingEnabled_return_value                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::UpdateRotationSettings(enum class E_RotationMode Temp_byte_Variable, enum class E_RotationMode Temp_byte_Variable_1, enum class E_RotationMode Temp_byte_Variable_2, enum class E_CombatType Temp_byte_Variable_3, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, enum class E_RotationMode Temp_byte_Variable_4, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, enum class E_CombatType Temp_byte_Variable_5, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, enum class E_State CallFunc_GetState_State, enum class E_RotationMode K2Node_Select_Default, bool K2Node_Select_Default_1, bool CallFunc_IsFalling_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_GetIsPressed_Result, bool CallFunc_BooleanAND_ReturnValue, enum class E_State CallFunc_GetState_State_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, enum class E_State CallFunc_GetState_State_2, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_3, bool CallFunc_GetActivityValue_Value, enum class E_State CallFunc_GetState_State_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, uint8 CallFunc_MakeLiteralByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_IsTargetingEnabled_return_value, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "UpdateRotationSettings");

	Params::ABP_CombatCharacter_C_UpdateRotationSettings_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.CallFunc_IsFalling_ReturnValue = CallFunc_IsFalling_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.CallFunc_GetState_State = CallFunc_GetState_State;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_IsFalling_ReturnValue_1 = CallFunc_IsFalling_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetIsPressed_Result = CallFunc_GetIsPressed_Result;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetState_State_1 = CallFunc_GetState_State_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetState_State_2 = CallFunc_GetState_State_2;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_2 = CallFunc_MakeLiteralByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_3 = CallFunc_MakeLiteralByte_ReturnValue_3;
	Parms.CallFunc_GetActivityValue_Value = CallFunc_GetActivityValue_Value;
	Parms.CallFunc_GetState_State_3 = CallFunc_GetState_State_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_4 = CallFunc_MakeLiteralByte_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_IsTargetingEnabled_return_value = CallFunc_IsTargetingEnabled_return_value;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.LoopSlowMotion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetCurrentValue_CurrentValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanEnterSlowMotion_Result                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::LoopSlowMotion(float CallFunc_GetCurrentValue_CurrentValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_CanEnterSlowMotion_Result, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "LoopSlowMotion");

	Params::ABP_CombatCharacter_C_LoopSlowMotion_Params Parms{};

	Parms.CallFunc_GetCurrentValue_CurrentValue = CallFunc_GetCurrentValue_CurrentValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_CanEnterSlowMotion_Result = CallFunc_CanEnterSlowMotion_Result;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.StopSlotMotion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::StopSlotMotion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "StopSlotMotion");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.StartSlotMotion
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_CanEnterSlowMotion_Result                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::StartSlotMotion(bool CallFunc_CanEnterSlowMotion_Result, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "StartSlotMotion");

	Params::ABP_CombatCharacter_C_StartSlotMotion_Params Parms{};

	Parms.CallFunc_CanEnterSlowMotion_Result = CallFunc_CanEnterSlowMotion_Result;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.HideCrosshair
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::HideCrosshair(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "HideCrosshair");

	Params::ABP_CombatCharacter_C_HideCrosshair_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.ShowCrosshair
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::ShowCrosshair(class UTexture2D* Texture, class UTexture2D* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_1, class UTexture2D* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "ShowCrosshair");

	Params::ABP_CombatCharacter_C_ShowCrosshair_Params Parms{};

	Parms.Texture = Texture;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.SprintLoop
// (Private, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_State                 CallFunc_GetState_State                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentValue_CurrentValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetActivityValue_Value                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::SprintLoop(uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class E_State CallFunc_GetState_State, float CallFunc_GetCurrentValue_CurrentValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_GetActivityValue_Value, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "SprintLoop");

	Params::ABP_CombatCharacter_C_SprintLoop_Params Parms{};

	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_IsFalling_ReturnValue = CallFunc_IsFalling_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetState_State = CallFunc_GetState_State;
	Parms.CallFunc_GetCurrentValue_CurrentValue = CallFunc_GetCurrentValue_CurrentValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_GetActivityValue_Value = CallFunc_GetActivityValue_Value;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.AttemptBackstab
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      L_HitActor                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDamage_Damage                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// class UAnimMontage*                CallFunc_GetMontageForAction_Montage                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Montage_Play_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEffectsComponent_C*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanMeleeAttack_Result                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ApplyBackstabEffect_Applied                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDotProductTo_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::AttemptBackstab(bool* Result, class AActor* L_HitActor, float CallFunc_GetDamage_Damage, float CallFunc_Multiply_FloatFloat_ReturnValue, TArray<class AActor*>& Temp_object_Variable, class UAnimMontage* CallFunc_GetMontageForAction_Montage, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_Montage_Play_ReturnValue, class UEffectsComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_CanMeleeAttack_Result, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_ApplyBackstabEffect_Applied, float CallFunc_GetDotProductTo_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "AttemptBackstab");

	Params::ABP_CombatCharacter_C_AttemptBackstab_Params Parms{};

	Parms.L_HitActor = L_HitActor;
	Parms.CallFunc_GetDamage_Damage = CallFunc_GetDamage_Damage;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetMontageForAction_Montage = CallFunc_GetMontageForAction_Montage;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_Montage_Play_ReturnValue = CallFunc_Montage_Play_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_CanMeleeAttack_Result = CallFunc_CanMeleeAttack_Result;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_ApplyBackstabEffect_Applied = CallFunc_ApplyBackstabEffect_Applied;
	Parms.CallFunc_GetDotProductTo_ReturnValue = CallFunc_GetDotProductTo_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.Impact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                CallFunc_GetMontageForAction_Montage                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Montage_Play_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::Impact(class UAnimMontage* CallFunc_GetMontageForAction_Montage, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_Montage_Play_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "Impact");

	Params::ABP_CombatCharacter_C_Impact_Params Parms{};

	Parms.CallFunc_GetMontageForAction_Montage = CallFunc_GetMontageForAction_Montage;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_Montage_Play_ReturnValue = CallFunc_Montage_Play_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.GetSpawnedArrowTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Transform                                                        (Parm, OutParm, IsPlainOldData, NoDestructor)
// struct FVector                     L_ImpactPoint                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     L_CurrentTraceDirection                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              L_CurrentIndex                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     L_LineTraceEnd                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     L_LineTraceStart                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              L_TraceLength                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     L_CameraDirection                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    L_ArrowSpawnDirection                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     L_ArrowSpawnLocation                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetDirectionUnitVector_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue_2                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue_3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue_3                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Dot_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DegAcos_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// float                              CallFunc_DegCos_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetDirectionUnitVector_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::GetSpawnedArrowTransform(struct FTransform* Transform, const struct FVector& L_ImpactPoint, const struct FVector& L_CurrentTraceDirection, int32 L_CurrentIndex, const struct FVector& L_LineTraceEnd, const struct FVector& L_LineTraceStart, float L_TraceLength, const struct FVector& L_CameraDirection, const struct FRotator& L_ArrowSpawnDirection, const struct FVector& L_ArrowSpawnLocation, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_2, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, TArray<class AActor*>& Temp_object_Variable, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_DoesImplementInterface_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_2, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_3, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_3, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_3, float CallFunc_VSize_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_3, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue_1, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_DegAcos_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, float CallFunc_DegCos_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_4, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_4, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue_1, float CallFunc_VSize_ReturnValue_2, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_5, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "GetSpawnedArrowTransform");

	Params::ABP_CombatCharacter_C_GetSpawnedArrowTransform_Params Parms{};

	Parms.L_ImpactPoint = L_ImpactPoint;
	Parms.L_CurrentTraceDirection = L_CurrentTraceDirection;
	Parms.L_CurrentIndex = L_CurrentIndex;
	Parms.L_LineTraceEnd = L_LineTraceEnd;
	Parms.L_LineTraceStart = L_LineTraceStart;
	Parms.L_TraceLength = L_TraceLength;
	Parms.L_CameraDirection = L_CameraDirection;
	Parms.L_ArrowSpawnDirection = L_ArrowSpawnDirection;
	Parms.L_ArrowSpawnLocation = L_ArrowSpawnLocation;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue_1 = CallFunc_GetPlayerCameraManager_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue_1 = CallFunc_K2_GetRootComponent_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_1 = CallFunc_Subtract_VectorVector_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_2 = CallFunc_Subtract_VectorVector_ReturnValue_2;
	Parms.CallFunc_GetDirectionUnitVector_ReturnValue = CallFunc_GetDirectionUnitVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue_2 = CallFunc_GetPlayerCameraManager_ReturnValue_2;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue_2 = CallFunc_K2_GetRootComponent_ReturnValue_2;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_2 = CallFunc_K2_GetComponentLocation_ReturnValue_2;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue_3 = CallFunc_GetPlayerCameraManager_ReturnValue_3;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_3 = CallFunc_Subtract_VectorVector_ReturnValue_3;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue_3 = CallFunc_K2_GetRootComponent_ReturnValue_3;
	Parms.CallFunc_VSize_ReturnValue_1 = CallFunc_VSize_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_3 = CallFunc_K2_GetComponentLocation_ReturnValue_3;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue_1 = CallFunc_Normal_ReturnValue_1;
	Parms.CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
	Parms.CallFunc_DegAcos_ReturnValue = CallFunc_DegAcos_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_DegCos_ReturnValue = CallFunc_DegCos_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_4 = CallFunc_K2_GetComponentLocation_ReturnValue_4;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_4 = CallFunc_Subtract_VectorVector_ReturnValue_4;
	Parms.CallFunc_GetDirectionUnitVector_ReturnValue_1 = CallFunc_GetDirectionUnitVector_ReturnValue_1;
	Parms.CallFunc_VSize_ReturnValue_2 = CallFunc_VSize_ReturnValue_2;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue_1 = CallFunc_Conv_VectorToRotator_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_2 = CallFunc_Multiply_VectorFloat_ReturnValue_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_5 = CallFunc_K2_GetComponentLocation_ReturnValue_5;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.CanEnterSlowMotion
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetActivityValue_Value                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_State                 CallFunc_GetState_State                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_State                 CallFunc_GetState_State_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::CanEnterSlowMotion(bool* Result, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GetActivityValue_Value, enum class E_State CallFunc_GetState_State, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, enum class E_State CallFunc_GetState_State_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "CanEnterSlowMotion");

	Params::ABP_CombatCharacter_C_CanEnterSlowMotion_Params Parms{};

	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_IsFalling_ReturnValue = CallFunc_IsFalling_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetActivityValue_Value = CallFunc_GetActivityValue_Value;
	Parms.CallFunc_GetState_State = CallFunc_GetState_State;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.CallFunc_GetState_State_1 = CallFunc_GetState_State_1;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_2 = CallFunc_MakeLiteralByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.UpdateAimAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_State                 CallFunc_GetState_State                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStatValue_Value                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetActivityValue_Value                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_Constant_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_Constant_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::UpdateAimAlpha(uint8 CallFunc_MakeLiteralByte_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsFalling_ReturnValue, enum class E_State CallFunc_GetState_State, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float Temp_float_Variable, float CallFunc_GetStatValue_Value, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool Temp_bool_Variable_1, bool CallFunc_GetActivityValue_Value, bool CallFunc_BooleanAND_ReturnValue_1, float K2Node_Select_Default, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_FInterpTo_Constant_ReturnValue, float CallFunc_FInterpTo_Constant_ReturnValue_1, float K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "UpdateAimAlpha");

	Params::ABP_CombatCharacter_C_UpdateAimAlpha_Params Parms{};

	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsFalling_ReturnValue = CallFunc_IsFalling_ReturnValue;
	Parms.CallFunc_GetState_State = CallFunc_GetState_State;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_GetStatValue_Value = CallFunc_GetStatValue_Value;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetActivityValue_Value = CallFunc_GetActivityValue_Value;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue = CallFunc_FInterpTo_Constant_ReturnValue;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue_1 = CallFunc_FInterpTo_Constant_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.CanBowAttack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRolling_Rolling                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSprinting_Sprinting                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::CanBowAttack(bool* Result, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_IsRolling_Rolling, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsSprinting_Sprinting, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "CanBowAttack");

	Params::ABP_CombatCharacter_C_CanBowAttack_Params Parms{};

	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_IsRolling_Rolling = CallFunc_IsRolling_Rolling;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsSprinting_Sprinting = CallFunc_IsSprinting_Sprinting;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.GetParriedMontage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRandomMontageIndex_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetMontageForAction_Montage                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::GetParriedMontage(class UAnimMontage** Montage, int32 CallFunc_GetRandomMontageIndex_ReturnValue, class UAnimMontage* CallFunc_GetMontageForAction_Montage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "GetParriedMontage");

	Params::ABP_CombatCharacter_C_GetParriedMontage_Params Parms{};

	Parms.CallFunc_GetRandomMontageIndex_ReturnValue = CallFunc_GetRandomMontageIndex_ReturnValue;
	Parms.CallFunc_GetMontageForAction_Montage = CallFunc_GetMontageForAction_Montage;

	UObject::ProcessEvent(Func, &Parms);

	if (Montage != nullptr)
		*Montage = Parms.Montage;

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.Parried
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                CallFunc_GetParriedMontage_Montage                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Montage_Play_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::Parried(class UAnimMontage* CallFunc_GetParriedMontage_Montage, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_Montage_Play_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "Parried");

	Params::ABP_CombatCharacter_C_Parried_Params Parms{};

	Parms.CallFunc_GetParriedMontage_Montage = CallFunc_GetParriedMontage_Montage;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_Montage_Play_ReturnValue = CallFunc_Montage_Play_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.CanOpenUI
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_State                 CallFunc_GetState_State                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAlive_Result                                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::CanOpenUI(bool* Result, uint8 CallFunc_MakeLiteralByte_ReturnValue, enum class E_State CallFunc_GetState_State, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsAlive_Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "CanOpenUI");

	Params::ABP_CombatCharacter_C_CanOpenUI_Params Parms{};

	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_GetState_State = CallFunc_GetState_State;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsAlive_Result = CallFunc_IsAlive_Result;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.CalculateLeanAmount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              LeanAmount                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InterpSpeed                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_State                 CallFunc_GetState_State                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInputAxisValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetActivityValue_Value                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::CalculateLeanAmount(float* LeanAmount, float* InterpSpeed, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, float Temp_float_Variable_2, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class E_State CallFunc_GetState_State, uint8 CallFunc_MakeLiteralByte_ReturnValue, float CallFunc_GetInputAxisValue_ReturnValue, bool CallFunc_GetActivityValue_Value, float CallFunc_FClamp_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, float CallFunc_VSize_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, float K2Node_Select_Default, float K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "CalculateLeanAmount");

	Params::ABP_CombatCharacter_C_CalculateLeanAmount_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.CallFunc_IsFalling_ReturnValue = CallFunc_IsFalling_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetState_State = CallFunc_GetState_State;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_GetInputAxisValue_ReturnValue = CallFunc_GetInputAxisValue_ReturnValue;
	Parms.CallFunc_GetActivityValue_Value = CallFunc_GetActivityValue_Value;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	if (LeanAmount != nullptr)
		*LeanAmount = Parms.LeanAmount;

	if (InterpSpeed != nullptr)
		*InterpSpeed = Parms.InterpSpeed;

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.CanUseOrSwitchItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_State                 CallFunc_GetState_State                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAlive_Result                                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::CanUseOrSwitchItem(bool* Result, uint8 CallFunc_MakeLiteralByte_ReturnValue, enum class E_State CallFunc_GetState_State, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsAlive_Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "CanUseOrSwitchItem");

	Params::ABP_CombatCharacter_C_CanUseOrSwitchItem_Params Parms{};

	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_GetState_State = CallFunc_GetState_State;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsAlive_Result = CallFunc_IsAlive_Result;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.Parry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                CallFunc_GetParryMontage_Montage                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetStatValue_Value                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Montage_Play_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanMeleeAttack_Result                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::Parry(class UAnimMontage* CallFunc_GetParryMontage_Montage, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsFalling_ReturnValue, float CallFunc_GetStatValue_Value, bool CallFunc_Not_PreBool_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_Montage_Play_ReturnValue, bool CallFunc_CanMeleeAttack_Result, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "Parry");

	Params::ABP_CombatCharacter_C_Parry_Params Parms{};

	Parms.CallFunc_GetParryMontage_Montage = CallFunc_GetParryMontage_Montage;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsFalling_ReturnValue = CallFunc_IsFalling_ReturnValue;
	Parms.CallFunc_GetStatValue_Value = CallFunc_GetStatValue_Value;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_Montage_Play_ReturnValue = CallFunc_Montage_Play_ReturnValue;
	Parms.CallFunc_CanMeleeAttack_Result = CallFunc_CanMeleeAttack_Result;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.GetImpactMontage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRandomMontageIndex_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetMontageForAction_Montage                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::GetImpactMontage(class UAnimMontage** Montage, int32 CallFunc_GetRandomMontageIndex_ReturnValue, class UAnimMontage* CallFunc_GetMontageForAction_Montage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "GetImpactMontage");

	Params::ABP_CombatCharacter_C_GetImpactMontage_Params Parms{};

	Parms.CallFunc_GetRandomMontageIndex_ReturnValue = CallFunc_GetRandomMontageIndex_ReturnValue;
	Parms.CallFunc_GetMontageForAction_Montage = CallFunc_GetMontageForAction_Montage;

	UObject::ProcessEvent(Func, &Parms);

	if (Montage != nullptr)
		*Montage = Parms.Montage;

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.Death
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetDeathMontage_Montage                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetIsInCombat_Dummy                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Montage_Play_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::Death(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UAnimMontage* CallFunc_GetDeathMontage_Montage, bool CallFunc_SetIsInCombat_Dummy, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_Montage_Play_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "Death");

	Params::ABP_CombatCharacter_C_Death_Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetDeathMontage_Montage = CallFunc_GetDeathMontage_Montage;
	Parms.CallFunc_SetIsInCombat_Dummy = CallFunc_SetIsInCombat_Dummy;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_Montage_Play_ReturnValue = CallFunc_Montage_Play_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.GetBlockMontage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRandomMontageIndex_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetMontageForAction_Montage                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRandomMontageIndex_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetMontageForAction_Montage_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::GetBlockMontage(class UAnimMontage** Montage, int32 CallFunc_GetRandomMontageIndex_ReturnValue, class UAnimMontage* CallFunc_GetMontageForAction_Montage, int32 CallFunc_GetRandomMontageIndex_ReturnValue_1, class UAnimMontage* CallFunc_GetMontageForAction_Montage_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "GetBlockMontage");

	Params::ABP_CombatCharacter_C_GetBlockMontage_Params Parms{};

	Parms.CallFunc_GetRandomMontageIndex_ReturnValue = CallFunc_GetRandomMontageIndex_ReturnValue;
	Parms.CallFunc_GetMontageForAction_Montage = CallFunc_GetMontageForAction_Montage;
	Parms.CallFunc_GetRandomMontageIndex_ReturnValue_1 = CallFunc_GetRandomMontageIndex_ReturnValue_1;
	Parms.CallFunc_GetMontageForAction_Montage_1 = CallFunc_GetMontageForAction_Montage_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Montage != nullptr)
		*Montage = Parms.Montage;

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.GetStunMontage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_Direction             Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Montage                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_MontageAction         L_StunDirection                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Direction             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_MontageAction         Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_MontageAction         Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_MontageAction         Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_MontageAction         Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_MontageAction         K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetRandomMontageIndex_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRandomMontageIndex_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetMontageForAction_Montage                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetMontageForAction_Montage_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::GetStunMontage(enum class E_Direction Direction, class UAnimMontage** Montage, enum class E_MontageAction L_StunDirection, enum class E_Direction Temp_byte_Variable, enum class E_MontageAction Temp_byte_Variable_1, enum class E_MontageAction Temp_byte_Variable_2, enum class E_MontageAction Temp_byte_Variable_3, enum class E_MontageAction Temp_byte_Variable_4, enum class E_MontageAction K2Node_Select_Default, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 CallFunc_GetRandomMontageIndex_ReturnValue, int32 CallFunc_GetRandomMontageIndex_ReturnValue_1, class UAnimMontage* CallFunc_GetMontageForAction_Montage, class UAnimMontage* CallFunc_GetMontageForAction_Montage_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "GetStunMontage");

	Params::ABP_CombatCharacter_C_GetStunMontage_Params Parms{};

	Parms.Direction = Direction;
	Parms.L_StunDirection = L_StunDirection;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetRandomMontageIndex_ReturnValue = CallFunc_GetRandomMontageIndex_ReturnValue;
	Parms.CallFunc_GetRandomMontageIndex_ReturnValue_1 = CallFunc_GetRandomMontageIndex_ReturnValue_1;
	Parms.CallFunc_GetMontageForAction_Montage = CallFunc_GetMontageForAction_Montage;
	Parms.CallFunc_GetMontageForAction_Montage_1 = CallFunc_GetMontageForAction_Montage_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Montage != nullptr)
		*Montage = Parms.Montage;

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.CanBeStunned
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEffectApplied_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::CanBeStunned(bool* Result, bool CallFunc_IsEffectApplied_ReturnValue, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "CanBeStunned");

	Params::ABP_CombatCharacter_C_CanBeStunned_Params Parms{};

	Parms.CallFunc_IsEffectApplied_ReturnValue = CallFunc_IsEffectApplied_ReturnValue;
	Parms.CallFunc_IsFalling_ReturnValue = CallFunc_IsFalling_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.Stunned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                CallFunc_GetStunMontage_Montage                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Montage_Play_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::Stunned(class UAnimMontage* CallFunc_GetStunMontage_Montage, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_Montage_Play_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "Stunned");

	Params::ABP_CombatCharacter_C_Stunned_Params Parms{};

	Parms.CallFunc_GetStunMontage_Montage = CallFunc_GetStunMontage_Montage;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_Montage_Play_ReturnValue = CallFunc_Montage_Play_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.bLock
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                CallFunc_GetBlockMontage_Montage                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Montage_Play_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::bLock(class UAnimMontage* CallFunc_GetBlockMontage_Montage, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_Montage_Play_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "bLock");

	Params::ABP_CombatCharacter_C_bLock_Params Parms{};

	Parms.CallFunc_GetBlockMontage_Montage = CallFunc_GetBlockMontage_Montage;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_Montage_Play_ReturnValue = CallFunc_Montage_Play_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.CanBeAttacked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAlive_Result                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetActivityValue_Value                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::CanBeAttacked(bool* Result, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_IsAlive_Result, bool CallFunc_GetActivityValue_Value, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "CanBeAttacked");

	Params::ABP_CombatCharacter_C_CanBeAttacked_Params Parms{};

	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_IsAlive_Result = CallFunc_IsAlive_Result;
	Parms.CallFunc_GetActivityValue_Value = CallFunc_GetActivityValue_Value;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.ToggleCombat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_MontageAction         Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_MontageAction         Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_State                 CallFunc_GetState_State                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ToggleIsInCombat_Dummy                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_MontageAction         K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetMontageForAction_Montage                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_PlayAnimMontage_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::ToggleCombat(bool Temp_bool_Variable, enum class E_MontageAction Temp_byte_Variable, enum class E_MontageAction Temp_byte_Variable_1, uint8 CallFunc_MakeLiteralByte_ReturnValue, enum class E_State CallFunc_GetState_State, bool CallFunc_ToggleIsInCombat_Dummy, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class E_MontageAction K2Node_Select_Default, class UAnimMontage* CallFunc_GetMontageForAction_Montage, bool CallFunc_IsValid_ReturnValue, float CallFunc_PlayAnimMontage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "ToggleCombat");

	Params::ABP_CombatCharacter_C_ToggleCombat_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_GetState_State = CallFunc_GetState_State;
	Parms.CallFunc_ToggleIsInCombat_Dummy = CallFunc_ToggleIsInCombat_Dummy;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetMontageForAction_Montage = CallFunc_GetMontageForAction_Montage;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PlayAnimMontage_ReturnValue = CallFunc_PlayAnimMontage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.SetSprint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Activate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsTimerActive_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::SetSprint(bool Activate, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_K2_IsTimerActive_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "SetSprint");

	Params::ABP_CombatCharacter_C_SetSprint_Params Parms{};

	Parms.Activate = Activate;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_K2_IsTimerActive_ReturnValue = CallFunc_K2_IsTimerActive_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.CustomJump
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_State                 CallFunc_GetState_State                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanJump_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnyMontagePlaying_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::CustomJump(uint8 CallFunc_MakeLiteralByte_ReturnValue, enum class E_State CallFunc_GetState_State, bool CallFunc_CanJump_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_IsAnyMontagePlaying_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "CustomJump");

	Params::ABP_CombatCharacter_C_CustomJump_Params Parms{};

	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_GetState_State = CallFunc_GetState_State;
	Parms.CallFunc_CanJump_ReturnValue = CallFunc_CanJump_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_IsAnyMontagePlaying_ReturnValue = CallFunc_IsAnyMontagePlaying_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.GetRollMontage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                RollMontage                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_Right_Pressed                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_Left_Pressed                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_Backward_Pressed                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_Forward_Pressed                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_MontageAction         L_RollDirection                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetLastInputVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInputAxisValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInputAxisValue_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTargetingEnabled_return_value                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetRandomMontageIndex_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetMontageForAction_Montage                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRandomMontageIndex_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetMontageForAction_Montage_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::GetRollMontage(class UAnimMontage** RollMontage, bool Local_Right_Pressed, bool Local_Left_Pressed, bool Local_Backward_Pressed, bool Local_Forward_Pressed, enum class E_MontageAction L_RollDirection, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_GetLastInputVector_ReturnValue, bool CallFunc_NotEqual_VectorVector_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, float CallFunc_GetInputAxisValue_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_GetInputAxisValue_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_IsTargetingEnabled_return_value, bool CallFunc_Greater_FloatFloat_ReturnValue_1, int32 CallFunc_GetRandomMontageIndex_ReturnValue, class UAnimMontage* CallFunc_GetMontageForAction_Montage, int32 CallFunc_GetRandomMontageIndex_ReturnValue_1, class UAnimMontage* CallFunc_GetMontageForAction_Montage_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "GetRollMontage");

	Params::ABP_CombatCharacter_C_GetRollMontage_Params Parms{};

	Parms.Local_Right_Pressed = Local_Right_Pressed;
	Parms.Local_Left_Pressed = Local_Left_Pressed;
	Parms.Local_Backward_Pressed = Local_Backward_Pressed;
	Parms.Local_Forward_Pressed = Local_Forward_Pressed;
	Parms.L_RollDirection = L_RollDirection;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetLastInputVector_ReturnValue = CallFunc_GetLastInputVector_ReturnValue;
	Parms.CallFunc_NotEqual_VectorVector_ReturnValue = CallFunc_NotEqual_VectorVector_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_GetInputAxisValue_ReturnValue = CallFunc_GetInputAxisValue_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_GetInputAxisValue_ReturnValue_1 = CallFunc_GetInputAxisValue_ReturnValue_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.CallFunc_IsTargetingEnabled_return_value = CallFunc_IsTargetingEnabled_return_value;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetRandomMontageIndex_ReturnValue = CallFunc_GetRandomMontageIndex_ReturnValue;
	Parms.CallFunc_GetMontageForAction_Montage = CallFunc_GetMontageForAction_Montage;
	Parms.CallFunc_GetRandomMontageIndex_ReturnValue_1 = CallFunc_GetRandomMontageIndex_ReturnValue_1;
	Parms.CallFunc_GetMontageForAction_Montage_1 = CallFunc_GetMontageForAction_Montage_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RollMontage != nullptr)
		*RollMontage = Parms.RollMontage;

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.CanRoll
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_State                 CallFunc_GetState_State                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentValue_CurrentValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::CanRoll(bool* Result, bool CallFunc_IsFalling_ReturnValue, enum class E_State CallFunc_GetState_State, bool CallFunc_Not_PreBool_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, float CallFunc_GetCurrentValue_CurrentValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "CanRoll");

	Params::ABP_CombatCharacter_C_CanRoll_Params Parms{};

	Parms.CallFunc_IsFalling_ReturnValue = CallFunc_IsFalling_ReturnValue;
	Parms.CallFunc_GetState_State = CallFunc_GetState_State;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_GetCurrentValue_CurrentValue = CallFunc_GetCurrentValue_CurrentValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.Roll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_MontageAction         L_Direction                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                L_Montage                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetRollMontage_RollMontage                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_PlayAnimMontage_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanRoll_Result                                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::Roll(enum class E_MontageAction L_Direction, class UAnimMontage* L_Montage, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, class UAnimMontage* CallFunc_GetRollMontage_RollMontage, bool CallFunc_IsValid_ReturnValue, float CallFunc_PlayAnimMontage_ReturnValue, bool CallFunc_CanRoll_Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "Roll");

	Params::ABP_CombatCharacter_C_Roll_Params Parms{};

	Parms.L_Direction = L_Direction;
	Parms.L_Montage = L_Montage;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetRollMontage_RollMontage = CallFunc_GetRollMontage_RollMontage;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PlayAnimMontage_ReturnValue = CallFunc_PlayAnimMontage_ReturnValue;
	Parms.CallFunc_CanRoll_Result = CallFunc_CanRoll_Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.ResetMeleeAttackCounter
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::ResetMeleeAttackCounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "ResetMeleeAttackCounter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.GetMeleeAttackMontage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_MeleeAttackType       AttackType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Montage                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_MontageAction         L_Action                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              L_LastIndex                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                L_Montage                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_MontageAction         CallFunc_ConvertMeleeAttackTypeToAction_MontageAction            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRandomMontageIndex_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                CallFunc_GetMontageForAction_Montage                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::GetMeleeAttackMontage(enum class E_MeleeAttackType AttackType, class UAnimMontage** Montage, enum class E_MontageAction L_Action, int32 L_LastIndex, class UAnimMontage* L_Montage, enum class E_MontageAction CallFunc_ConvertMeleeAttackTypeToAction_MontageAction, int32 CallFunc_GetRandomMontageIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UAnimMontage* CallFunc_GetMontageForAction_Montage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "GetMeleeAttackMontage");

	Params::ABP_CombatCharacter_C_GetMeleeAttackMontage_Params Parms{};

	Parms.AttackType = AttackType;
	Parms.L_Action = L_Action;
	Parms.L_LastIndex = L_LastIndex;
	Parms.L_Montage = L_Montage;
	Parms.CallFunc_ConvertMeleeAttackTypeToAction_MontageAction = CallFunc_ConvertMeleeAttackTypeToAction_MontageAction;
	Parms.CallFunc_GetRandomMontageIndex_ReturnValue = CallFunc_GetRandomMontageIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetMontageForAction_Montage = CallFunc_GetMontageForAction_Montage;

	UObject::ProcessEvent(Func, &Parms);

	if (Montage != nullptr)
		*Montage = Parms.Montage;

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.CanMeleeAttack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_State                 CallFunc_GetState_State                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCurrentValue_CurrentValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::CanMeleeAttack(bool* Result, uint8 CallFunc_MakeLiteralByte_ReturnValue, enum class E_State CallFunc_GetState_State, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_GetCurrentValue_CurrentValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "CanMeleeAttack");

	Params::ABP_CombatCharacter_C_CanMeleeAttack_Params Parms{};

	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_GetState_State = CallFunc_GetState_State;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_2 = CallFunc_MakeLiteralByte_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetCurrentValue_CurrentValue = CallFunc_GetCurrentValue_CurrentValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.MeleeAttack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_MeleeAttackType       Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_MeleeAttackType       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStatValue_Value                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_MeleeAttackType       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetMeleeAttackMontage_Montage                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetStatValue_Value_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ScaleMeleeAttackStaminaCostByType_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Montage_Play_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanMeleeAttack_Result                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::MeleeAttack(enum class E_MeleeAttackType Type, bool Temp_bool_Variable, enum class E_MeleeAttackType Temp_byte_Variable, float CallFunc_GetStatValue_Value, bool CallFunc_IsFalling_ReturnValue, enum class E_MeleeAttackType K2Node_Select_Default, class UAnimMontage* CallFunc_GetMeleeAttackMontage_Montage, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetStatValue_Value_1, float CallFunc_ScaleMeleeAttackStaminaCostByType_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_Montage_Play_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_CanMeleeAttack_Result, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "MeleeAttack");

	Params::ABP_CombatCharacter_C_MeleeAttack_Params Parms{};

	Parms.Type = Type;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetStatValue_Value = CallFunc_GetStatValue_Value;
	Parms.CallFunc_IsFalling_ReturnValue = CallFunc_IsFalling_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetMeleeAttackMontage_Montage = CallFunc_GetMeleeAttackMontage_Montage;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetStatValue_Value_1 = CallFunc_GetStatValue_Value_1;
	Parms.CallFunc_ScaleMeleeAttackStaminaCostByType_ReturnValue = CallFunc_ScaleMeleeAttackStaminaCostByType_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_Montage_Play_ReturnValue = CallFunc_Montage_Play_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_CanMeleeAttack_Result = CallFunc_CanMeleeAttack_Result;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.Zooming_Timeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::Zooming_Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "Zooming_Timeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.Zooming_Timeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::Zooming_Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "Zooming_Timeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.Blocking_Timeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::Blocking_Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "Blocking_Timeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.Blocking_Timeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::Blocking_Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "Blocking_Timeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_K_K2Node_InputKeyEvent_33
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_K_K2Node_InputKeyEvent_33(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_K_K2Node_InputKeyEvent_33");

	Params::ABP_CombatCharacter_C_InpActEvt_K_K2Node_InputKeyEvent_33_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_L_K2Node_InputKeyEvent_32
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_L_K2Node_InputKeyEvent_32(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_L_K2Node_InputKeyEvent_32");

	Params::ABP_CombatCharacter_C_InpActEvt_L_K2Node_InputKeyEvent_32_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_Escape_K2Node_InputKeyEvent_31
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_Escape_K2Node_InputKeyEvent_31(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_Escape_K2Node_InputKeyEvent_31");

	Params::ABP_CombatCharacter_C_InpActEvt_Escape_K2Node_InputKeyEvent_31_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_WorldMap_K2Node_InputActionEvent_24
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_WorldMap_K2Node_InputActionEvent_24(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_WorldMap_K2Node_InputActionEvent_24");

	Params::ABP_CombatCharacter_C_InpActEvt_WorldMap_K2Node_InputActionEvent_24_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_CIVision_K2Node_InputActionEvent_23
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_CIVision_K2Node_InputActionEvent_23(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_CIVision_K2Node_InputActionEvent_23");

	Params::ABP_CombatCharacter_C_InpActEvt_CIVision_K2Node_InputActionEvent_23_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_Block_K2Node_InputActionEvent_22
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_Block_K2Node_InputActionEvent_22(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_Block_K2Node_InputActionEvent_22");

	Params::ABP_CombatCharacter_C_InpActEvt_Block_K2Node_InputActionEvent_22_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_Block_K2Node_InputActionEvent_21
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_Block_K2Node_InputActionEvent_21(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_Block_K2Node_InputActionEvent_21");

	Params::ABP_CombatCharacter_C_InpActEvt_Block_K2Node_InputActionEvent_21_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_Attack_K2Node_InputActionEvent_20
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_Attack_K2Node_InputActionEvent_20(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_Attack_K2Node_InputActionEvent_20");

	Params::ABP_CombatCharacter_C_InpActEvt_Attack_K2Node_InputActionEvent_20_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_HeavyAttack_K2Node_InputActionEvent_19
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_HeavyAttack_K2Node_InputActionEvent_19(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_HeavyAttack_K2Node_InputActionEvent_19");

	Params::ABP_CombatCharacter_C_InpActEvt_HeavyAttack_K2Node_InputActionEvent_19_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_SpecialAttack_K2Node_InputActionEvent_18
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_SpecialAttack_K2Node_InputActionEvent_18(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_SpecialAttack_K2Node_InputActionEvent_18");

	Params::ABP_CombatCharacter_C_InpActEvt_SpecialAttack_K2Node_InputActionEvent_18_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_Parry_K2Node_InputActionEvent_17
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_Parry_K2Node_InputActionEvent_17(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_Parry_K2Node_InputActionEvent_17");

	Params::ABP_CombatCharacter_C_InpActEvt_Parry_K2Node_InputActionEvent_17_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_TargetRight_K2Node_InputActionEvent_16
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_TargetRight_K2Node_InputActionEvent_16(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_TargetRight_K2Node_InputActionEvent_16");

	Params::ABP_CombatCharacter_C_InpActEvt_TargetRight_K2Node_InputActionEvent_16_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_TargetLeft_K2Node_InputActionEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_TargetLeft_K2Node_InputActionEvent_15(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_TargetLeft_K2Node_InputActionEvent_15");

	Params::ABP_CombatCharacter_C_InpActEvt_TargetLeft_K2Node_InputActionEvent_15_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_ToggleTargeting_K2Node_InputActionEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_ToggleTargeting_K2Node_InputActionEvent_14(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_ToggleTargeting_K2Node_InputActionEvent_14");

	Params::ABP_CombatCharacter_C_InpActEvt_ToggleTargeting_K2Node_InputActionEvent_14_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_Roll_K2Node_InputActionEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_Roll_K2Node_InputActionEvent_13(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_Roll_K2Node_InputActionEvent_13");

	Params::ABP_CombatCharacter_C_InpActEvt_Roll_K2Node_InputActionEvent_13_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_SlowMotion_K2Node_InputActionEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_SlowMotion_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_SlowMotion_K2Node_InputActionEvent_12");

	Params::ABP_CombatCharacter_C_InpActEvt_SlowMotion_K2Node_InputActionEvent_12_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_SlowMotion_K2Node_InputActionEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_SlowMotion_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_SlowMotion_K2Node_InputActionEvent_11");

	Params::ABP_CombatCharacter_C_InpActEvt_SlowMotion_K2Node_InputActionEvent_11_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_AbilityAttack_K2Node_InputActionEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_AbilityAttack_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_AbilityAttack_K2Node_InputActionEvent_10");

	Params::ABP_CombatCharacter_C_InpActEvt_AbilityAttack_K2Node_InputActionEvent_10_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_AbilityAttack_K2Node_InputActionEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_AbilityAttack_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_AbilityAttack_K2Node_InputActionEvent_9");

	Params::ABP_CombatCharacter_C_InpActEvt_AbilityAttack_K2Node_InputActionEvent_9_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_ThumbMouseButton_K2Node_InputKeyEvent_30
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_ThumbMouseButton_K2Node_InputKeyEvent_30(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_ThumbMouseButton_K2Node_InputKeyEvent_30");

	Params::ABP_CombatCharacter_C_InpActEvt_ThumbMouseButton_K2Node_InputKeyEvent_30_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_ThumbMouseButton_K2Node_InputKeyEvent_29
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_ThumbMouseButton_K2Node_InputKeyEvent_29(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_ThumbMouseButton_K2Node_InputKeyEvent_29");

	Params::ABP_CombatCharacter_C_InpActEvt_ThumbMouseButton_K2Node_InputKeyEvent_29_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_Five_K2Node_InputKeyEvent_28
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_Five_K2Node_InputKeyEvent_28(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_Five_K2Node_InputKeyEvent_28");

	Params::ABP_CombatCharacter_C_InpActEvt_Five_K2Node_InputKeyEvent_28_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_Four_K2Node_InputKeyEvent_27
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_Four_K2Node_InputKeyEvent_27(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_Four_K2Node_InputKeyEvent_27");

	Params::ABP_CombatCharacter_C_InpActEvt_Four_K2Node_InputKeyEvent_27_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_Three_K2Node_InputKeyEvent_26
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_Three_K2Node_InputKeyEvent_26(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_Three_K2Node_InputKeyEvent_26");

	Params::ABP_CombatCharacter_C_InpActEvt_Three_K2Node_InputKeyEvent_26_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_Two_K2Node_InputKeyEvent_25
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_Two_K2Node_InputKeyEvent_25(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_Two_K2Node_InputKeyEvent_25");

	Params::ABP_CombatCharacter_C_InpActEvt_Two_K2Node_InputKeyEvent_25_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_One_K2Node_InputKeyEvent_24
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_One_K2Node_InputKeyEvent_24(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_One_K2Node_InputKeyEvent_24");

	Params::ABP_CombatCharacter_C_InpActEvt_One_K2Node_InputKeyEvent_24_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_BowAttack_K2Node_InputActionEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_BowAttack_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_BowAttack_K2Node_InputActionEvent_8");

	Params::ABP_CombatCharacter_C_InpActEvt_BowAttack_K2Node_InputActionEvent_8_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_BowAttack_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_BowAttack_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_BowAttack_K2Node_InputActionEvent_7");

	Params::ABP_CombatCharacter_C_InpActEvt_BowAttack_K2Node_InputActionEvent_7_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_Inventory_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_Inventory_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_Inventory_K2Node_InputActionEvent_6");

	Params::ABP_CombatCharacter_C_InpActEvt_Inventory_K2Node_InputActionEvent_6_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_QuestPanel_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_QuestPanel_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_QuestPanel_K2Node_InputActionEvent_5");

	Params::ABP_CombatCharacter_C_InpActEvt_QuestPanel_K2Node_InputActionEvent_5_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_CameraZoomIn_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_CameraZoomIn_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_CameraZoomIn_K2Node_InputActionEvent_4");

	Params::ABP_CombatCharacter_C_InpActEvt_CameraZoomIn_K2Node_InputActionEvent_4_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_CameraZoomOut_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_CameraZoomOut_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_CameraZoomOut_K2Node_InputActionEvent_3");

	Params::ABP_CombatCharacter_C_InpActEvt_CameraZoomOut_K2Node_InputActionEvent_3_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.OnNotifyEnd_571BCA1B43B434A1B882C3885482D2BF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::OnNotifyEnd_571BCA1B43B434A1B882C3885482D2BF(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "OnNotifyEnd_571BCA1B43B434A1B882C3885482D2BF");

	Params::ABP_CombatCharacter_C_OnNotifyEnd_571BCA1B43B434A1B882C3885482D2BF_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.OnNotifyBegin_571BCA1B43B434A1B882C3885482D2BF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::OnNotifyBegin_571BCA1B43B434A1B882C3885482D2BF(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "OnNotifyBegin_571BCA1B43B434A1B882C3885482D2BF");

	Params::ABP_CombatCharacter_C_OnNotifyBegin_571BCA1B43B434A1B882C3885482D2BF_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.OnInterrupted_571BCA1B43B434A1B882C3885482D2BF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::OnInterrupted_571BCA1B43B434A1B882C3885482D2BF(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "OnInterrupted_571BCA1B43B434A1B882C3885482D2BF");

	Params::ABP_CombatCharacter_C_OnInterrupted_571BCA1B43B434A1B882C3885482D2BF_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.OnBlendOut_571BCA1B43B434A1B882C3885482D2BF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::OnBlendOut_571BCA1B43B434A1B882C3885482D2BF(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "OnBlendOut_571BCA1B43B434A1B882C3885482D2BF");

	Params::ABP_CombatCharacter_C_OnBlendOut_571BCA1B43B434A1B882C3885482D2BF_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.OnCompleted_571BCA1B43B434A1B882C3885482D2BF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::OnCompleted_571BCA1B43B434A1B882C3885482D2BF(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "OnCompleted_571BCA1B43B434A1B882C3885482D2BF");

	Params::ABP_CombatCharacter_C_OnCompleted_571BCA1B43B434A1B882C3885482D2BF_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.OnNotifyEnd_40A53BC542D34592AF38A6B429CF4CB4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::OnNotifyEnd_40A53BC542D34592AF38A6B429CF4CB4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "OnNotifyEnd_40A53BC542D34592AF38A6B429CF4CB4");

	Params::ABP_CombatCharacter_C_OnNotifyEnd_40A53BC542D34592AF38A6B429CF4CB4_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.OnNotifyBegin_40A53BC542D34592AF38A6B429CF4CB4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::OnNotifyBegin_40A53BC542D34592AF38A6B429CF4CB4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "OnNotifyBegin_40A53BC542D34592AF38A6B429CF4CB4");

	Params::ABP_CombatCharacter_C_OnNotifyBegin_40A53BC542D34592AF38A6B429CF4CB4_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.OnInterrupted_40A53BC542D34592AF38A6B429CF4CB4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::OnInterrupted_40A53BC542D34592AF38A6B429CF4CB4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "OnInterrupted_40A53BC542D34592AF38A6B429CF4CB4");

	Params::ABP_CombatCharacter_C_OnInterrupted_40A53BC542D34592AF38A6B429CF4CB4_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.OnBlendOut_40A53BC542D34592AF38A6B429CF4CB4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::OnBlendOut_40A53BC542D34592AF38A6B429CF4CB4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "OnBlendOut_40A53BC542D34592AF38A6B429CF4CB4");

	Params::ABP_CombatCharacter_C_OnBlendOut_40A53BC542D34592AF38A6B429CF4CB4_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.OnCompleted_40A53BC542D34592AF38A6B429CF4CB4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::OnCompleted_40A53BC542D34592AF38A6B429CF4CB4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "OnCompleted_40A53BC542D34592AF38A6B429CF4CB4");

	Params::ABP_CombatCharacter_C_OnCompleted_40A53BC542D34592AF38A6B429CF4CB4_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.OnNotifyEnd_F3B7F35F46D4052E4A58F081722AC43C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::OnNotifyEnd_F3B7F35F46D4052E4A58F081722AC43C(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "OnNotifyEnd_F3B7F35F46D4052E4A58F081722AC43C");

	Params::ABP_CombatCharacter_C_OnNotifyEnd_F3B7F35F46D4052E4A58F081722AC43C_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.OnNotifyBegin_F3B7F35F46D4052E4A58F081722AC43C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::OnNotifyBegin_F3B7F35F46D4052E4A58F081722AC43C(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "OnNotifyBegin_F3B7F35F46D4052E4A58F081722AC43C");

	Params::ABP_CombatCharacter_C_OnNotifyBegin_F3B7F35F46D4052E4A58F081722AC43C_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.OnInterrupted_F3B7F35F46D4052E4A58F081722AC43C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::OnInterrupted_F3B7F35F46D4052E4A58F081722AC43C(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "OnInterrupted_F3B7F35F46D4052E4A58F081722AC43C");

	Params::ABP_CombatCharacter_C_OnInterrupted_F3B7F35F46D4052E4A58F081722AC43C_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.OnBlendOut_F3B7F35F46D4052E4A58F081722AC43C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::OnBlendOut_F3B7F35F46D4052E4A58F081722AC43C(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "OnBlendOut_F3B7F35F46D4052E4A58F081722AC43C");

	Params::ABP_CombatCharacter_C_OnBlendOut_F3B7F35F46D4052E4A58F081722AC43C_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.OnCompleted_F3B7F35F46D4052E4A58F081722AC43C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::OnCompleted_F3B7F35F46D4052E4A58F081722AC43C(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "OnCompleted_F3B7F35F46D4052E4A58F081722AC43C");

	Params::ABP_CombatCharacter_C_OnCompleted_F3B7F35F46D4052E4A58F081722AC43C_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_SwitchRange_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_SwitchRange_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_SwitchRange_K2Node_InputActionEvent_2");

	Params::ABP_CombatCharacter_C_InpActEvt_SwitchRange_K2Node_InputActionEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_SwitchMelee_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_SwitchMelee_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_SwitchMelee_K2Node_InputActionEvent_1");

	Params::ABP_CombatCharacter_C_InpActEvt_SwitchMelee_K2Node_InputActionEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.OnNotifyEnd_0ABEE5EA4DC302DDB3F70BA3A592A50A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::OnNotifyEnd_0ABEE5EA4DC302DDB3F70BA3A592A50A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "OnNotifyEnd_0ABEE5EA4DC302DDB3F70BA3A592A50A");

	Params::ABP_CombatCharacter_C_OnNotifyEnd_0ABEE5EA4DC302DDB3F70BA3A592A50A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.OnNotifyBegin_0ABEE5EA4DC302DDB3F70BA3A592A50A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::OnNotifyBegin_0ABEE5EA4DC302DDB3F70BA3A592A50A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "OnNotifyBegin_0ABEE5EA4DC302DDB3F70BA3A592A50A");

	Params::ABP_CombatCharacter_C_OnNotifyBegin_0ABEE5EA4DC302DDB3F70BA3A592A50A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.OnInterrupted_0ABEE5EA4DC302DDB3F70BA3A592A50A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::OnInterrupted_0ABEE5EA4DC302DDB3F70BA3A592A50A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "OnInterrupted_0ABEE5EA4DC302DDB3F70BA3A592A50A");

	Params::ABP_CombatCharacter_C_OnInterrupted_0ABEE5EA4DC302DDB3F70BA3A592A50A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.OnBlendOut_0ABEE5EA4DC302DDB3F70BA3A592A50A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::OnBlendOut_0ABEE5EA4DC302DDB3F70BA3A592A50A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "OnBlendOut_0ABEE5EA4DC302DDB3F70BA3A592A50A");

	Params::ABP_CombatCharacter_C_OnBlendOut_0ABEE5EA4DC302DDB3F70BA3A592A50A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.OnCompleted_0ABEE5EA4DC302DDB3F70BA3A592A50A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::OnCompleted_0ABEE5EA4DC302DDB3F70BA3A592A50A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "OnCompleted_0ABEE5EA4DC302DDB3F70BA3A592A50A");

	Params::ABP_CombatCharacter_C_OnCompleted_0ABEE5EA4DC302DDB3F70BA3A592A50A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.OnNotifyEnd_AECF60AF41BE5C7EE677B38D7E7112E9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::OnNotifyEnd_AECF60AF41BE5C7EE677B38D7E7112E9(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "OnNotifyEnd_AECF60AF41BE5C7EE677B38D7E7112E9");

	Params::ABP_CombatCharacter_C_OnNotifyEnd_AECF60AF41BE5C7EE677B38D7E7112E9_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.OnNotifyBegin_AECF60AF41BE5C7EE677B38D7E7112E9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::OnNotifyBegin_AECF60AF41BE5C7EE677B38D7E7112E9(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "OnNotifyBegin_AECF60AF41BE5C7EE677B38D7E7112E9");

	Params::ABP_CombatCharacter_C_OnNotifyBegin_AECF60AF41BE5C7EE677B38D7E7112E9_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.OnInterrupted_AECF60AF41BE5C7EE677B38D7E7112E9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::OnInterrupted_AECF60AF41BE5C7EE677B38D7E7112E9(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "OnInterrupted_AECF60AF41BE5C7EE677B38D7E7112E9");

	Params::ABP_CombatCharacter_C_OnInterrupted_AECF60AF41BE5C7EE677B38D7E7112E9_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.OnBlendOut_AECF60AF41BE5C7EE677B38D7E7112E9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::OnBlendOut_AECF60AF41BE5C7EE677B38D7E7112E9(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "OnBlendOut_AECF60AF41BE5C7EE677B38D7E7112E9");

	Params::ABP_CombatCharacter_C_OnBlendOut_AECF60AF41BE5C7EE677B38D7E7112E9_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.OnCompleted_AECF60AF41BE5C7EE677B38D7E7112E9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::OnCompleted_AECF60AF41BE5C7EE677B38D7E7112E9(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "OnCompleted_AECF60AF41BE5C7EE677B38D7E7112E9");

	Params::ABP_CombatCharacter_C_OnCompleted_AECF60AF41BE5C7EE677B38D7E7112E9_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.OnNotifyEnd_04E7C4C04E8D1A78FF10899D69A4CEB4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::OnNotifyEnd_04E7C4C04E8D1A78FF10899D69A4CEB4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "OnNotifyEnd_04E7C4C04E8D1A78FF10899D69A4CEB4");

	Params::ABP_CombatCharacter_C_OnNotifyEnd_04E7C4C04E8D1A78FF10899D69A4CEB4_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.OnNotifyBegin_04E7C4C04E8D1A78FF10899D69A4CEB4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::OnNotifyBegin_04E7C4C04E8D1A78FF10899D69A4CEB4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "OnNotifyBegin_04E7C4C04E8D1A78FF10899D69A4CEB4");

	Params::ABP_CombatCharacter_C_OnNotifyBegin_04E7C4C04E8D1A78FF10899D69A4CEB4_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.OnInterrupted_04E7C4C04E8D1A78FF10899D69A4CEB4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::OnInterrupted_04E7C4C04E8D1A78FF10899D69A4CEB4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "OnInterrupted_04E7C4C04E8D1A78FF10899D69A4CEB4");

	Params::ABP_CombatCharacter_C_OnInterrupted_04E7C4C04E8D1A78FF10899D69A4CEB4_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.OnBlendOut_04E7C4C04E8D1A78FF10899D69A4CEB4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::OnBlendOut_04E7C4C04E8D1A78FF10899D69A4CEB4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "OnBlendOut_04E7C4C04E8D1A78FF10899D69A4CEB4");

	Params::ABP_CombatCharacter_C_OnBlendOut_04E7C4C04E8D1A78FF10899D69A4CEB4_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.OnCompleted_04E7C4C04E8D1A78FF10899D69A4CEB4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::OnCompleted_04E7C4C04E8D1A78FF10899D69A4CEB4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "OnCompleted_04E7C4C04E8D1A78FF10899D69A4CEB4");

	Params::ABP_CombatCharacter_C_OnCompleted_04E7C4C04E8D1A78FF10899D69A4CEB4_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_23
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_23(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_23");

	Params::ABP_CombatCharacter_C_InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_23_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_22
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_22(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_22");

	Params::ABP_CombatCharacter_C_InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_22_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_21
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_21(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_21");

	Params::ABP_CombatCharacter_C_InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_21_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_20
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_20(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_20");

	Params::ABP_CombatCharacter_C_InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_20_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_19
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_19(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_19");

	Params::ABP_CombatCharacter_C_InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_19_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_18
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_18(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_18");

	Params::ABP_CombatCharacter_C_InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_18_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_17
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_17(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_17");

	Params::ABP_CombatCharacter_C_InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_17_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_16
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_16(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_16");

	Params::ABP_CombatCharacter_C_InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_16_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_15(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_15");

	Params::ABP_CombatCharacter_C_InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_15_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_14(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_14");

	Params::ABP_CombatCharacter_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_14_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_O_K2Node_InputKeyEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_O_K2Node_InputKeyEvent_13(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_O_K2Node_InputKeyEvent_13");

	Params::ABP_CombatCharacter_C_InpActEvt_O_K2Node_InputKeyEvent_13_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_P_K2Node_InputKeyEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_P_K2Node_InputKeyEvent_12(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_P_K2Node_InputKeyEvent_12");

	Params::ABP_CombatCharacter_C_InpActEvt_P_K2Node_InputKeyEvent_12_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_G_K2Node_InputKeyEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_G_K2Node_InputKeyEvent_11(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_G_K2Node_InputKeyEvent_11");

	Params::ABP_CombatCharacter_C_InpActEvt_G_K2Node_InputKeyEvent_11_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_V_K2Node_InputKeyEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_V_K2Node_InputKeyEvent_10(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_V_K2Node_InputKeyEvent_10");

	Params::ABP_CombatCharacter_C_InpActEvt_V_K2Node_InputKeyEvent_10_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_C_K2Node_InputKeyEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_C_K2Node_InputKeyEvent_9(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_C_K2Node_InputKeyEvent_9");

	Params::ABP_CombatCharacter_C_InpActEvt_C_K2Node_InputKeyEvent_9_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_X_K2Node_InputKeyEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_X_K2Node_InputKeyEvent_8(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_X_K2Node_InputKeyEvent_8");

	Params::ABP_CombatCharacter_C_InpActEvt_X_K2Node_InputKeyEvent_8_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_Z_K2Node_InputKeyEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_Z_K2Node_InputKeyEvent_7(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_Z_K2Node_InputKeyEvent_7");

	Params::ABP_CombatCharacter_C_InpActEvt_Z_K2Node_InputKeyEvent_7_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_R_K2Node_InputKeyEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_R_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_R_K2Node_InputKeyEvent_6");

	Params::ABP_CombatCharacter_C_InpActEvt_R_K2Node_InputKeyEvent_6_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_E_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_E_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_E_K2Node_InputKeyEvent_5");

	Params::ABP_CombatCharacter_C_InpActEvt_E_K2Node_InputKeyEvent_5_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_4");

	Params::ABP_CombatCharacter_C_InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_4_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_Ctrl_MouseScrollDown_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_Ctrl_MouseScrollDown_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_Ctrl_MouseScrollDown_K2Node_InputKeyEvent_3");

	Params::ABP_CombatCharacter_C_InpActEvt_Ctrl_MouseScrollDown_K2Node_InputKeyEvent_3_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_Ctrl_MouseScrollUp_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_Ctrl_MouseScrollUp_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_Ctrl_MouseScrollUp_K2Node_InputKeyEvent_2");

	Params::ABP_CombatCharacter_C_InpActEvt_Ctrl_MouseScrollUp_K2Node_InputKeyEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_T_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_T_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_T_K2Node_InputKeyEvent_1");

	Params::ABP_CombatCharacter_C_InpActEvt_T_K2Node_InputKeyEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_T_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_T_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_T_K2Node_InputKeyEvent_0");

	Params::ABP_CombatCharacter_C_InpActEvt_T_K2Node_InputKeyEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpActEvt_Mount_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpActEvt_Mount_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpActEvt_Mount_K2Node_InputActionEvent_0");

	Params::ABP_CombatCharacter_C_InpActEvt_Mount_K2Node_InputActionEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.Mount Horse Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::Mount_Horse_Left()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "Mount Horse Left");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.mount Horse Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::Mount_Horse_Right()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "mount Horse Right");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.Set Transport Type
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETransportType          TransportType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::Set_Transport_Type(enum class ETransportType TransportType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "Set Transport Type");

	Params::ABP_CombatCharacter_C_Set_Transport_Type_Params Parms{};

	Parms.TransportType = TransportType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.Exit Horse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::Exit_Horse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "Exit Horse");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.UpdateStaggerValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::UpdateStaggerValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "UpdateStaggerValue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.ActivateStagger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::ActivateStagger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "ActivateStagger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.BndEvt__Interaction_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_CombatCharacter_C::BndEvt__Interaction_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "BndEvt__Interaction_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	Params::ABP_CombatCharacter_C_BndEvt__Interaction_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.BndEvt__Interaction_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::BndEvt__Interaction_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "BndEvt__Interaction_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	Params::ABP_CombatCharacter_C_BndEvt__Interaction_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.NPC Interaction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::NPC_Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "NPC Interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.BndEvt__BPC_EffectsComponent_K2Node_ComponentBoundEvent_1_OnEffectRemoved__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class E_EffectType            Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::BndEvt__BPC_EffectsComponent_K2Node_ComponentBoundEvent_1_OnEffectRemoved__DelegateSignature(enum class E_EffectType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "BndEvt__BPC_EffectsComponent_K2Node_ComponentBoundEvent_1_OnEffectRemoved__DelegateSignature");

	Params::ABP_CombatCharacter_C_BndEvt__BPC_EffectsComponent_K2Node_ComponentBoundEvent_1_OnEffectRemoved__DelegateSignature_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.BndEvt__BPC_EffectsComponent_K2Node_ComponentBoundEvent_0_OnEffectApplied__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class E_EffectType            Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::BndEvt__BPC_EffectsComponent_K2Node_ComponentBoundEvent_0_OnEffectApplied__DelegateSignature(enum class E_EffectType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "BndEvt__BPC_EffectsComponent_K2Node_ComponentBoundEvent_0_OnEffectApplied__DelegateSignature");

	Params::ABP_CombatCharacter_C_BndEvt__BPC_EffectsComponent_K2Node_ComponentBoundEvent_0_OnEffectApplied__DelegateSignature_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.ApplySpecialDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Blocked_                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::ApplySpecialDamage(bool Blocked_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "ApplySpecialDamage");

	Params::ABP_CombatCharacter_C_ApplySpecialDamage_Params Parms{};

	Parms.Blocked_ = Blocked_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.BndEvt__CollisionHandler_K2Node_ComponentBoundEvent_0_OnCollisionActivated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class E_CollisionPart         CollisionPart                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::BndEvt__CollisionHandler_K2Node_ComponentBoundEvent_0_OnCollisionActivated__DelegateSignature(enum class E_CollisionPart CollisionPart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "BndEvt__CollisionHandler_K2Node_ComponentBoundEvent_0_OnCollisionActivated__DelegateSignature");

	Params::ABP_CombatCharacter_C_BndEvt__CollisionHandler_K2Node_ComponentBoundEvent_0_OnCollisionActivated__DelegateSignature_Params Parms{};

	Parms.CollisionPart = CollisionPart;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.BndEvt__CollisionHandlerComponent_K2Node_ComponentBoundEvent_3_OnHit__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FHitResult                  HitResult                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_CombatCharacter_C::BndEvt__CollisionHandlerComponent_K2Node_ComponentBoundEvent_3_OnHit__DelegateSignature(const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "BndEvt__CollisionHandlerComponent_K2Node_ComponentBoundEvent_3_OnHit__DelegateSignature");

	Params::ABP_CombatCharacter_C_BndEvt__CollisionHandlerComponent_K2Node_ComponentBoundEvent_3_OnHit__DelegateSignature_Params Parms{};

	Parms.HitResult = HitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.BndEvt__InputBuffer_K2Node_ComponentBoundEvent_4_OnInputBufferClose__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::BndEvt__InputBuffer_K2Node_ComponentBoundEvent_4_OnInputBufferClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "BndEvt__InputBuffer_K2Node_ComponentBoundEvent_4_OnInputBufferClose__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.BndEvt__InputBuffer_K2Node_ComponentBoundEvent_2_OnInputBufferConsumed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class E_InputBufferKey        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::BndEvt__InputBuffer_K2Node_ComponentBoundEvent_2_OnInputBufferConsumed__DelegateSignature(enum class E_InputBufferKey Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "BndEvt__InputBuffer_K2Node_ComponentBoundEvent_2_OnInputBufferConsumed__DelegateSignature");

	Params::ABP_CombatCharacter_C_BndEvt__InputBuffer_K2Node_ComponentBoundEvent_2_OnInputBufferConsumed__DelegateSignature_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.UpdateZoom
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::UpdateZoom()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "UpdateZoom");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.UpdateBlocking
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::UpdateBlocking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "UpdateBlocking");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.BndEvt__DynamicTargeting_K2Node_ComponentBoundEvent_61_OnTargetingToggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::BndEvt__DynamicTargeting_K2Node_ComponentBoundEvent_61_OnTargetingToggled__DelegateSignature(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "BndEvt__DynamicTargeting_K2Node_ComponentBoundEvent_61_OnTargetingToggled__DelegateSignature");

	Params::ABP_CombatCharacter_C_BndEvt__DynamicTargeting_K2Node_ComponentBoundEvent_61_OnTargetingToggled__DelegateSignature_Params Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.K2_OnMovementModeChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EMovementMode           PrevMovementMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMovementMode           NewMovementMode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              PrevCustomMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              NewCustomMode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::K2_OnMovementModeChanged(enum class EMovementMode PrevMovementMode, enum class EMovementMode NewMovementMode, uint8 PrevCustomMode, uint8 NewCustomMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "K2_OnMovementModeChanged");

	Params::ABP_CombatCharacter_C_K2_OnMovementModeChanged_Params Parms{};

	Parms.PrevMovementMode = PrevMovementMode;
	Parms.NewMovementMode = NewMovementMode;
	Parms.PrevCustomMode = PrevCustomMode;
	Parms.NewCustomMode = NewCustomMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpAxisEvt_VerticalLook_K2Node_InputAxisEvent_34
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpAxisEvt_VerticalLook_K2Node_InputAxisEvent_34(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpAxisEvt_VerticalLook_K2Node_InputAxisEvent_34");

	Params::ABP_CombatCharacter_C_InpAxisEvt_VerticalLook_K2Node_InputAxisEvent_34_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpAxisEvt_HorizontalLook_K2Node_InputAxisEvent_23
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpAxisEvt_HorizontalLook_K2Node_InputAxisEvent_23(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpAxisEvt_HorizontalLook_K2Node_InputAxisEvent_23");

	Params::ABP_CombatCharacter_C_InpAxisEvt_HorizontalLook_K2Node_InputAxisEvent_23_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90");

	Params::ABP_CombatCharacter_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79");

	Params::ABP_CombatCharacter_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.BndEvt__StateMachine_K2Node_ComponentBoundEvent_69_OnStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class E_State                 PrevState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_State                 NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::BndEvt__StateMachine_K2Node_ComponentBoundEvent_69_OnStateChanged__DelegateSignature(enum class E_State PrevState, enum class E_State NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "BndEvt__StateMachine_K2Node_ComponentBoundEvent_69_OnStateChanged__DelegateSignature");

	Params::ABP_CombatCharacter_C_BndEvt__StateMachine_K2Node_ComponentBoundEvent_69_OnStateChanged__DelegateSignature_Params Parms{};

	Parms.PrevState = PrevState;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.Morph Sex Dummy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      Skeletal_Mesh                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::Morph_Sex_Dummy(class USkeletalMeshComponent* Skeletal_Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "Morph Sex Dummy");

	Params::ABP_CombatCharacter_C_Morph_Sex_Dummy_Params Parms{};

	Parms.Skeletal_Mesh = Skeletal_Mesh;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.Setup Relevant Meshes for Morphs
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::Setup_Relevant_Meshes_for_Morphs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "Setup Relevant Meshes for Morphs");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.Load Morphs
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::Load_Morphs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "Load Morphs");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.AddLevelStats
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::AddLevelStats()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "AddLevelStats");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.RemoveCombatCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::RemoveCombatCheck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "RemoveCombatCheck");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "ReceiveTick");

	Params::ABP_CombatCharacter_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.StopZooming
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::StopZooming()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "StopZooming");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.StartZooming
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::StartZooming()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "StartZooming");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.StopBlocking
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::StopBlocking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "StopBlocking");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.StartBlocking
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::StartBlocking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "StartBlocking");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.StopAiming
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::StopAiming()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "StopAiming");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.StartAiming
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::StartAiming()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "StartAiming");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.StopLookingForward
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::StopLookingForward()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "StopLookingForward");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.StartLookingForward
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::StartLookingForward()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "StartLookingForward");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.BndEvt__StateManager_K2Node_ComponentBoundEvent_69_OnActivityChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class E_Activity              Activity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::BndEvt__StateManager_K2Node_ComponentBoundEvent_69_OnActivityChanged__DelegateSignature(enum class E_Activity Activity, bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "BndEvt__StateManager_K2Node_ComponentBoundEvent_69_OnActivityChanged__DelegateSignature");

	Params::ABP_CombatCharacter_C_BndEvt__StateManager_K2Node_ComponentBoundEvent_69_OnActivityChanged__DelegateSignature_Params Parms{};

	Parms.Activity = Activity;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.SeqImprisoned_Finished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::SeqImprisoned_Finished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "SeqImprisoned_Finished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.SEQDeathRespawn_Finished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::SEQDeathRespawn_Finished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "SEQDeathRespawn_Finished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.BndEvt__ExtendedStamina_K2Node_ComponentBoundEvent_37_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MaxValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::BndEvt__ExtendedStamina_K2Node_ComponentBoundEvent_37_OnValueChanged__DelegateSignature(float NewValue, float MaxValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "BndEvt__ExtendedStamina_K2Node_ComponentBoundEvent_37_OnValueChanged__DelegateSignature");

	Params::ABP_CombatCharacter_C_BndEvt__ExtendedStamina_K2Node_ComponentBoundEvent_37_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.MaxValue = MaxValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.BndEvt__Health_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MaxValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::BndEvt__Health_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(float NewValue, float MaxValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "BndEvt__Health_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature");

	Params::ABP_CombatCharacter_C_BndEvt__Health_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.MaxValue = MaxValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.BndEvt__Rotating_K2Node_ComponentBoundEvent_7_OnRotatingEnd__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::BndEvt__Rotating_K2Node_ComponentBoundEvent_7_OnRotatingEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "BndEvt__Rotating_K2Node_ComponentBoundEvent_7_OnRotatingEnd__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.AutoSheatheWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DelayTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::AutoSheatheWeapon(float DelayTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "AutoSheatheWeapon");

	Params::ABP_CombatCharacter_C_AutoSheatheWeapon_Params Parms{};

	Parms.DelayTime = DelayTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.ChooseMagicAbility
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::ChooseMagicAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "ChooseMagicAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.UseAbility5
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::UseAbility5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "UseAbility5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.UseAbility4
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::UseAbility4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "UseAbility4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.UseAbility3
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::UseAbility3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "UseAbility3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.UseAbility2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::UseAbility2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "UseAbility2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.UseAbility1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::UseAbility1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "UseAbility1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.SetSpellActiveIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::SetSpellActiveIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "SetSpellActiveIndex");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.AbilityOnMovementModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMovementMode           PrevMovementMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMovementMode           NewMovementMode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::AbilityOnMovementModeChanged(enum class EMovementMode PrevMovementMode, enum class EMovementMode NewMovementMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "AbilityOnMovementModeChanged");

	Params::ABP_CombatCharacter_C_AbilityOnMovementModeChanged_Params Parms{};

	Parms.PrevMovementMode = PrevMovementMode;
	Parms.NewMovementMode = NewMovementMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.AbilityOnStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_State                 NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::AbilityOnStateChanged(enum class E_State NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "AbilityOnStateChanged");

	Params::ABP_CombatCharacter_C_AbilityOnStateChanged_Params Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.BndEvt__AbilityComponent_K2Node_ComponentBoundEvent_4_OnAbilityChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AAbility_C*                  NewAbility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::BndEvt__AbilityComponent_K2Node_ComponentBoundEvent_4_OnAbilityChanged__DelegateSignature(class AAbility_C* NewAbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "BndEvt__AbilityComponent_K2Node_ComponentBoundEvent_4_OnAbilityChanged__DelegateSignature");

	Params::ABP_CombatCharacter_C_BndEvt__AbilityComponent_K2Node_ComponentBoundEvent_4_OnAbilityChanged__DelegateSignature_Params Parms{};

	Parms.NewAbility = NewAbility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.DisableAbilityMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::DisableAbilityMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "DisableAbilityMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.EnableAbilityMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::EnableAbilityMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "EnableAbilityMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.UpdateAbilityAttackKey
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::UpdateAbilityAttackKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "UpdateAbilityAttackKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.BndEvt__AbilityComponent_K2Node_ComponentBoundEvent_8_OnAbilityEnded__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class E_AbilityEndResult      Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::BndEvt__AbilityComponent_K2Node_ComponentBoundEvent_8_OnAbilityEnded__DelegateSignature(enum class E_AbilityEndResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "BndEvt__AbilityComponent_K2Node_ComponentBoundEvent_8_OnAbilityEnded__DelegateSignature");

	Params::ABP_CombatCharacter_C_BndEvt__AbilityComponent_K2Node_ComponentBoundEvent_8_OnAbilityEnded__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.BndEvt__AbilityComponent_K2Node_ComponentBoundEvent_7_OnAbilityStarted__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::BndEvt__AbilityComponent_K2Node_ComponentBoundEvent_7_OnAbilityStarted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "BndEvt__AbilityComponent_K2Node_ComponentBoundEvent_7_OnAbilityStarted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.UpdateAbilityPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::UpdateAbilityPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "UpdateAbilityPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.UpdateAbilityCrosshair
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::UpdateAbilityCrosshair()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "UpdateAbilityCrosshair");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.UpdateSpellActiveIndexKey
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Ability                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::UpdateSpellActiveIndexKey(class UClass* Ability)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "UpdateSpellActiveIndexKey");

	Params::ABP_CombatCharacter_C_UpdateSpellActiveIndexKey_Params Parms{};

	Parms.Ability = Ability;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.AbilityReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::AbilityReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "AbilityReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.AbilityPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::AbilityPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "AbilityPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.BndEvt__ExtendedMana_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MaxValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::BndEvt__ExtendedMana_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(float NewValue, float MaxValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "BndEvt__ExtendedMana_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature");

	Params::ABP_CombatCharacter_C_BndEvt__ExtendedMana_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.MaxValue = MaxValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.BndEvt__AbilityComponent_K2Node_ComponentBoundEvent_2_OnManaConsumed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::BndEvt__AbilityComponent_K2Node_ComponentBoundEvent_2_OnManaConsumed__DelegateSignature(float Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "BndEvt__AbilityComponent_K2Node_ComponentBoundEvent_2_OnManaConsumed__DelegateSignature");

	Params::ABP_CombatCharacter_C_BndEvt__AbilityComponent_K2Node_ComponentBoundEvent_2_OnManaConsumed__DelegateSignature_Params Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.StopBowDrawSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::StopBowDrawSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "StopBowDrawSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.ShootArrow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::ShootArrow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "ShootArrow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.AttemptPlayBowDrawSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::AttemptPlayBowDrawSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "AttemptPlayBowDrawSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.PlayBowDrawSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::PlayBowDrawSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "PlayBowDrawSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.HideItems
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::HideItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "HideItems");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.UpdateItems
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::UpdateItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "UpdateItems");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.Set Combat Type
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_CombatType            NewType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::Set_Combat_Type(enum class E_CombatType NewType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "Set Combat Type");

	Params::ABP_CombatCharacter_C_Set_Combat_Type_Params Parms{};

	Parms.NewType = NewType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.ed_parent_savegame
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::Ed_parent_savegame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "ed_parent_savegame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.ed_parent_begingame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Loaded_save_file                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::Ed_parent_begingame(bool Loaded_save_file)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "ed_parent_begingame");

	Params::ABP_CombatCharacter_C_Ed_parent_begingame_Params Parms{};

	Parms.Loaded_save_file = Loaded_save_file;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_begingame__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               Loaded_save_file                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_begingame__DelegateSignature(bool Loaded_save_file)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_begingame__DelegateSignature");

	Params::ABP_CombatCharacter_C_BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_begingame__DelegateSignature_Params Parms{};

	Parms.Loaded_save_file = Loaded_save_file;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_savegame__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_savegame__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_savegame__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_0_ed_dlg_init__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_0_ed_dlg_init__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_0_ed_dlg_init__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.CallExitHorse
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CombatCharacter_C::CallExitHorse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "CallExitHorse");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.InitForEntering
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               OnCarLeft                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::InitForEntering(bool OnCarLeft)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "InitForEntering");

	Params::ABP_CombatCharacter_C_InitForEntering_Params Parms{};

	Parms.OnCarLeft = OnCarLeft;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.SetOnLeft?
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               OnLeft_                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::SetOnLeft_(bool OnLeft_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "SetOnLeft?");

	Params::ABP_CombatCharacter_C_SetOnLeft__Params Parms{};

	Parms.OnLeft_ = OnLeft_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.SetMountHorse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHorseBP_C*                  Mount                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CombatCharacter_C::SetMountHorse(class AHorseBP_C* Mount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "SetMountHorse");

	Params::ABP_CombatCharacter_C_SetMountHorse_Params Parms{};

	Parms.Mount = Mount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CombatCharacter.BP_CombatCharacter_C.ExecuteUbergraph_BP_CombatCharacter
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_8                                       (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_7                                       (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_6                                       (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_5                                       (HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_4                                       (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_3                                       (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_2                                       (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_1                                       (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key                                         (HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable                                             (HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key                                      (HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key_9                                       (HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_26                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_10                                      (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_11                                      (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_12                                      (HasGetValueTypeHash)
// enum class E_State                 CallFunc_GetState_State                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_13                                      (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key_14                                      (HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_27                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_15                                      (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key_16                                      (HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key_17                                      (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_18                                      (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key_19                                      (HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key_20                                      (HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key_21                                      (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_22                                      (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_23                                      (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_28                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_12                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_13                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_29                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetCurrentValue_CurrentValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_3                                    (HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFalling_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_4                                    (HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_5                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_6                                    (HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable_1                                           (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_7                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_8                                    (HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_State                 CallFunc_GetState_State_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_State                 CallFunc_GetState_State_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETransportType          K2Node_Event_TransportType                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_14                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_15                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key_24                                      (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_25                                      (HasGetValueTypeHash)
// bool                               CallFunc_IsFalling_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key_26                                      (HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key_27                                      (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_28                                      (HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// TScriptInterface<class IBPI_NPC_Interaction_C>K2Node_DynamicCast_AsBPI_NPC_Interaction                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UComp_NPC_Controller_C*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UComp_NPC_Controller_C*      CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_16                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UComp_NPC_Controller_C*      CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_17                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AALS_Player_Controller_C*    K2Node_DynamicCast_AsALS_Player_Controller                       (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_WorldMap_C*              CallFunc_Open_World_Map_Widget_World_Map_Ref                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable_2                                           (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPackagedForDistribution_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key_29                                      (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_30                                      (HasGetValueTypeHash)
// enum class E_State                 CallFunc_GetState_State_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsAlive_Result                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// struct FKey                        Temp_struct_Variable_3                                           (HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_9                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_10                                   (HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AALS_PlayerCameraManager_C*  K2Node_DynamicCast_AsALS_Player_Camera_Manager                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFalling_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class E_EffectType>    K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_IsAnyEffectApplied_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_EffectType            K2Node_ComponentBoundEvent_Type_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_EffectType            K2Node_ComponentBoundEvent_Type                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetAllSocketNames_ReturnValue                           (ReferenceParm)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Blocked_                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FF_Stat                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetAllSocketNames_ReturnValue_1                         (ReferenceParm)
// class FName                        K2Node_CustomEvent_NotifyName_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// enum class E_CollisionPart         K2Node_ComponentBoundEvent_CollisionPart                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        Temp_struct_Variable_4                                           (HasGetValueTypeHash)
// struct FHitResult                  K2Node_ComponentBoundEvent_HitResult                             (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FKey                        K2Node_InputActionEvent_Key_11                                   (HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class II_CanBeAttacked_C>K2Node_DynamicCast_AsI_Can_be_Attacked                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class II_CanBeAttacked_C>K2Node_DynamicCast_AsI_Can_be_Attacked_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FF_HitData                  CallFunc_MakeMeleeHitData_HitData                                (IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_TakeDamage_Result                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_AttackResult          CallFunc_TakeDamage_ResultType                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEffectsComponent_C*         CallFunc_GetComponentByClass_ReturnValue_3                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ApplyEffect_Applied                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaggerComponent_C*         CallFunc_GetComponentByClass_ReturnValue_4                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UEffectsComponent_C*         CallFunc_GetComponentByClass_ReturnValue_5                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ApplyEffect_Applied_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FF_HitData                  CallFunc_MakeMeleeHitData_HitData_1                              (IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class ABP_BaseAI_C*                K2Node_DynamicCast_AsBP_Base_AI                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FF_HitData                  K2Node_MakeStruct_F_HitData                                      (IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class AALS_Base_CharacterBP_C*     K2Node_DynamicCast_AsALS_Base_Character_BP                       (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TakeDamage_Result_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_AttackResult          CallFunc_TakeDamage_ResultType_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_State                 CallFunc_GetState_State_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_InputBufferKey        K2Node_ComponentBoundEvent_Key                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_12                                   (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_18                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_19                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanUseOrSwitchItem_Result                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_9                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_UI_Open__Condition                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_UI_Open__Condition_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanBlock_Result                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsSprinting_Sprinting                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFalling_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_UI_Open__Condition_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_UI_Open__Condition_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_UI_Open__Condition_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_UI_Open__Condition_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_10                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AttemptBackstab_Result                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor)
// class UWB_InGame_C*                CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_11                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_Enabled                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Interaction_with_Gamepad_Valid__ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_12                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_20                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_21                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMovementMode           K2Node_Event_PrevMovementMode                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMovementMode           K2Node_Event_NewMovementMode                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              K2Node_Event_PrevCustomMode                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              K2Node_Event_NewCustomMode                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_10                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_22                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_InputAxisEvent_AxisValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_InputAxisEvent_AxisValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInputAxisValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_InputAxisEvent_AxisValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_InputAxisEvent_AxisValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor)
// enum class E_State                 K2Node_ComponentBoundEvent_PrevState                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_State                 K2Node_ComponentBoundEvent_NewState                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_13                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_23                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_24                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      K2Node_CustomEvent_Skeletal_Mesh                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_bodySystem               CallFunc_Get_Current_Form_Form                                   (HasGetValueTypeHash)
// bool                               CallFunc_Get_Current_Form_Found                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FS_bodySystem>       CallFunc_Map_Values_Values                                       (ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (ZeroConstructor, NoDestructor)
// TArray<struct FS_bodySystem>       CallFunc_Filter_on_Form_Filtered_List                            (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCapture_C*         CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_DummyCharacter_C*        CallFunc_GetActorOfClass_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_9                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_10                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStatValue_Value                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_25                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetStatValue_Value_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_InGameMenu_C*             CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_State                 CallFunc_GetState_State_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AmbientMusic_Controller_C*CallFunc_GetActorOfClass_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_26                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (ZeroConstructor, NoDestructor)
// class UW_LoadingScreen_C*          CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URPGInventory_GameInstance_C*K2Node_DynamicCast_AsRPGInventory_Game_Instance                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_13                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_27                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_20                          (ZeroConstructor, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_14                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetActivityValue_Value                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_Activity              K2Node_ComponentBoundEvent_Activity                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_13                                   (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_15                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_DungeonLighting_C*       CallFunc_GetActorOfClass_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_28                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_14                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALevelSequenceActor*         CallFunc_CreateLevelSequencePlayer_OutActor                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_CreateLevelSequencePlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_29                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_11                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadingScreen_C*          CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_14                                   (HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_AmbientMusic_Controller_C*CallFunc_GetActorOfClass_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadingScreen_C*          CallFunc_Create_ReturnValue_4                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_15                                   (HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_MaxValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_MaxValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_16                                   (HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_16                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_30                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_21                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsTargetingEnabled_return_value                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_17                                   (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_18                                   (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_19                                   (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_1                                    (HasGetValueTypeHash)
// enum class E_State                 CallFunc_GetState_State_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_20                                   (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_31                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_2                                    (HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_DelayTime                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingAbility_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingAbility_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_32                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_12                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_17                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_33                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPackagedForDistribution_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsInCombat_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAbilityValid_Valid                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetIsInCombat_Dummy                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRolling_Rolling                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRolling_Rolling_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_9                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSprinting_Sprinting_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_State                 CallFunc_GetState_State_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_10                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_34                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSprinting_Sprinting_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_11                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Game_Paused__Paused                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Game_Paused__Paused_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Game_Paused__Paused_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Game_Paused__Paused_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Game_Paused__Paused_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_18                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsPressed_Result                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        Temp_struct_Variable_5                                           (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_21                                   (HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_bodySystem               CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_35                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_36                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_13                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_MorphTargets             K2Node_SetFieldsInStruct_StructOut                               (HasGetValueTypeHash)
// enum class EMovementMode           K2Node_CustomEvent_PrevMovementMode                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMovementMode           K2Node_CustomEvent_NewMovementMode                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_State                 CallFunc_GetState_State_8                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_37                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_38                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_15                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_State                 K2Node_CustomEvent_NewState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_39                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAbility_C*                  K2Node_ComponentBoundEvent_NewAbility                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_12                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_22                                   (HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_13                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_10                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_22                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_16                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_23                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_GetIsCasting_Result                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsPressed_Result_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_14                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_15                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsPressed_Result_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_16                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsCasting_Result_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetRightVector_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_17                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_11                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_19                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_40                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetActivityValue_Value_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAlive_Result_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAlive_Result_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldRotateOnPressed_RotateOnPressed                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_41                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_42                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_14                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_GetAbilityCrosshair_Crosshair                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsPressed_Result_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanAbilityBeCancelled_Result                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_AbilityEndResult      K2Node_ComponentBoundEvent_Result                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_17                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_InputBufferKey        CallFunc_GetStoredKey_StoredKey                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_43                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_12                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAbilityUsingCrosshair_Result                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsPressed_Result_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_24                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_1                               (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_2                               (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetManaCost_Value                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentValue_CurrentValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAbilityValid_Valid_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_CustomEvent_Ability                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_13                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_14                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetManaCost_Value_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_18                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_MaxValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_Amount                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_20                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_44                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AALS_Base_CharacterBP_C*     K2Node_DynamicCast_AsALS_Base_Character_BP_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AALS_Base_CharacterBP_C*     K2Node_DynamicCast_AsALS_Base_Character_BP_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_25                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_45                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_46                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_47                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_15                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FS_ItemData>         CallFunc_Get_Inventory_Items_of_Type_Inventory_Items             (ReferenceParm, ContainsInstancedReference)
// struct FS_ItemData                 CallFunc_Array_Get_Item_2                                        (ContainsInstancedReference, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_19                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class ABP_BasicArrowProjectile_C>K2Node_ClassDynamicCast_AsBP_Basic_Arrow_Projectile              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStatValue_Value_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanBowAttack_Result                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanBowAttack_Result_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetSpawnedArrowTransform_Transform                      (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetMontageForAction_Montage                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_16                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_PlayAnimMontage_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BasicArrowProjectile_C*  CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_State                 CallFunc_GetState_State_9                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_26                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_48                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_15                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_16                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_3                               (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanBowAttack_Result_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_17                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_4                               (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_5                               (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_6                               (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanBowAttack_Result_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPackagedForDistribution_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPackagedForDistribution_ReturnValue_3                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_17                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AALS_PlayerCameraManager_C*  K2Node_DynamicCast_AsALS_Player_Camera_Manager_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_21                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_18                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetActivityValue_Value_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_18                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UALS_PlayerCameraBehavior_C* K2Node_DynamicCast_AsALS_Player_Camera_Behavior                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AALS_PlayerCameraManager_C*  K2Node_DynamicCast_AsALS_Player_Camera_Manager_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_23                                   (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_19                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UALS_PlayerCameraBehavior_C* K2Node_DynamicCast_AsALS_Player_Camera_Behavior_1                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_20                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_5                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_6                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_22                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_49                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_27                          (ZeroConstructor, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_24                                   (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_31                                      (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_32                                      (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_20                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_21                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_21                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_50                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_State                 CallFunc_GetState_State_10                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_51                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_19                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key_33                                      (HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_28                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_22                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_23                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_24                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_25                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_52                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_23                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAlive_Result_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetActivityValue_Value_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_18                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_7                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_8                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_9                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_22                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_10                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_11                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_29                          (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_53                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_12                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_13                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_14                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_15                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_24                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_23                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_54                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_25                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_26                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_55                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_20                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_21                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_26                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetActivityValue_Value_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_22                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_23                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_24                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_UI_Open__Condition_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_UI_Open__Condition_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_27                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_30                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_56                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_57                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_28                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetActivityValue_Value_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_19                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_25                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_26                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsPressed_Result_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_16                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_17                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_24                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_18                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_19                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_20                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_31                          (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_CombatType            CallFunc_GetCombatType_Type                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_58                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_CombatType            K2Node_CustomEvent_NewType                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_2                                         (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_BooleanAND_ReturnValue_27                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_3                                         (ReferenceParm, ContainsInstancedReference)
// bool                               K2Node_CustomEvent_loaded_save_file                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_loaded_save_file                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_59                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_16                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_4                                         (ReferenceParm, ContainsInstancedReference)
// TArray<class USkeletalMeshComponent*>K2Node_MakeArray_Array_5                                         (ReferenceParm, ContainsInstancedReference)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_6                                         (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_20                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_27                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_CharInterface_C>K2Node_DynamicCast_AsBP_Char_Interface                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_21                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_25                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocationAndRotation_SweepHitResult           (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocationAndRotation_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_32                          (ZeroConstructor, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_CharInterface_C>K2Node_DynamicCast_AsBP_Char_Interface_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBP_CharInterface_C>K2Node_DynamicCast_AsBP_Char_Interface_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_OnCarLeft                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             K2Node_Select_Default_1                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RLerp_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_VLerp_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocationAndRotation_SweepHitResult_1         (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocationAndRotation_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_OnLeft_                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AHorseBP_C*                  K2Node_Event_Mount                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_VLerp_ReturnValue_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RLerp_ReturnValue_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorLocationAndRotation_SweepHitResult_2         (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocationAndRotation_ReturnValue_2            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CombatCharacter_C::ExecuteUbergraph_BP_CombatCharacter(int32 EntryPoint, const struct FKey& K2Node_InputKeyEvent_Key_8, const struct FKey& K2Node_InputKeyEvent_Key_7, const struct FKey& K2Node_InputKeyEvent_Key_6, const struct FKey& K2Node_InputKeyEvent_Key_5, uint8 CallFunc_MakeLiteralByte_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key_4, const struct FKey& K2Node_InputKeyEvent_Key_3, const struct FKey& K2Node_InputKeyEvent_Key_2, const struct FKey& K2Node_InputKeyEvent_Key_1, const struct FKey& K2Node_InputKeyEvent_Key, const struct FKey& Temp_struct_Variable, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, const struct FKey& K2Node_InputActionEvent_Key, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, bool Temp_bool_Variable, const struct FKey& K2Node_InputKeyEvent_Key_9, class FName K2Node_CustomEvent_NotifyName_26, const struct FKey& K2Node_InputKeyEvent_Key_10, const struct FKey& K2Node_InputKeyEvent_Key_11, const struct FKey& K2Node_InputKeyEvent_Key_12, enum class E_State CallFunc_GetState_State, const struct FKey& K2Node_InputKeyEvent_Key_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FKey& K2Node_InputKeyEvent_Key_14, class FName K2Node_CustomEvent_NotifyName_27, const struct FKey& K2Node_InputKeyEvent_Key_15, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, const struct FKey& K2Node_InputKeyEvent_Key_16, bool CallFunc_BooleanOR_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key_17, const struct FKey& K2Node_InputKeyEvent_Key_18, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, const struct FKey& K2Node_InputKeyEvent_Key_19, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, const struct FKey& K2Node_InputKeyEvent_Key_20, bool CallFunc_BooleanOR_ReturnValue_2, const struct FKey& K2Node_InputKeyEvent_Key_21, const struct FKey& K2Node_InputKeyEvent_Key_22, const struct FKey& K2Node_InputKeyEvent_Key_23, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_8, bool CallFunc_EqualEqual_ByteByte_ReturnValue_9, class FName K2Node_CustomEvent_NotifyName_28, bool CallFunc_BooleanOR_ReturnValue_4, uint8 CallFunc_MakeLiteralByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_10, bool CallFunc_EqualEqual_ByteByte_ReturnValue_11, bool CallFunc_EqualEqual_ByteByte_ReturnValue_12, bool CallFunc_EqualEqual_ByteByte_ReturnValue_13, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FName K2Node_CustomEvent_NotifyName_29, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, float CallFunc_GetCurrentValue_CurrentValue, const struct FKey& K2Node_InputActionEvent_Key_3, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_IsFalling_ReturnValue_1, const struct FKey& K2Node_InputActionEvent_Key_4, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FKey& K2Node_InputActionEvent_Key_5, const struct FKey& K2Node_InputActionEvent_Key_6, const struct FKey& Temp_struct_Variable_1, const struct FKey& K2Node_InputActionEvent_Key_7, const struct FKey& K2Node_InputActionEvent_Key_8, class FName Temp_name_Variable, enum class E_State CallFunc_GetState_State_1, int32 Temp_int_Variable, enum class E_State CallFunc_GetState_State_2, enum class ETransportType K2Node_Event_TransportType, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, class FName K2Node_CustomEvent_NotifyName, bool CallFunc_EqualEqual_ByteByte_ReturnValue_14, bool CallFunc_EqualEqual_ByteByte_ReturnValue_15, bool CallFunc_BooleanOR_ReturnValue_7, const struct FKey& K2Node_InputKeyEvent_Key_24, const struct FKey& K2Node_InputKeyEvent_Key_25, bool CallFunc_IsFalling_ReturnValue_2, const struct FKey& K2Node_InputKeyEvent_Key_26, bool CallFunc_Not_PreBool_ReturnValue_2, const struct FKey& K2Node_InputKeyEvent_Key_27, const struct FKey& K2Node_InputKeyEvent_Key_28, uint8 CallFunc_MakeLiteralByte_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, TScriptInterface<class IBPI_NPC_Interaction_C> K2Node_DynamicCast_AsBPI_NPC_Interaction, bool K2Node_DynamicCast_bSuccess, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class UComp_NPC_Controller_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UComp_NPC_Controller_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_DoesImplementInterface_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class FName K2Node_CustomEvent_NotifyName_1, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_16, class UComp_NPC_Controller_C* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_17, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_8, uint8 CallFunc_MakeLiteralByte_ReturnValue_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AALS_Player_Controller_C* K2Node_DynamicCast_AsALS_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, class FName K2Node_CustomEvent_NotifyName_2, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, class UWB_WorldMap_C* CallFunc_Open_World_Map_Widget_World_Map_Ref, const struct FKey& Temp_struct_Variable_2, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsPackagedForDistribution_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key_29, const struct FKey& K2Node_InputKeyEvent_Key_30, enum class E_State CallFunc_GetState_State_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_IsAlive_Result, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FKey& Temp_struct_Variable_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_9, const struct FKey& K2Node_InputActionEvent_Key_10, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class AALS_PlayerCameraManager_C* K2Node_DynamicCast_AsALS_Player_Camera_Manager, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsFalling_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_3, TArray<enum class E_EffectType>& K2Node_MakeArray_Array, bool CallFunc_IsAnyEffectApplied_ReturnValue, enum class E_EffectType K2Node_ComponentBoundEvent_Type_1, enum class E_EffectType K2Node_ComponentBoundEvent_Type, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_6, TArray<class FName>& CallFunc_GetAllSocketNames_ReturnValue, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, uint8 CallFunc_MakeLiteralByte_ReturnValue_7, int32 Temp_int_Array_Index_Variable, bool K2Node_CustomEvent_Blocked_, const struct FF_Stat& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, float CallFunc_Add_FloatFloat_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, float CallFunc_Multiply_FloatFloat_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, float CallFunc_Divide_FloatFloat_ReturnValue, class FText CallFunc_Format_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, class FName Temp_name_Variable_1, TArray<class FName>& CallFunc_GetAllSocketNames_ReturnValue_1, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, enum class E_CollisionPart K2Node_ComponentBoundEvent_CollisionPart, class FName K2Node_CustomEvent_NotifyName_6, bool K2Node_SwitchEnum_CmpSuccess_3, const struct FKey& Temp_struct_Variable_4, const struct FHitResult& K2Node_ComponentBoundEvent_HitResult, const struct FKey& K2Node_InputActionEvent_Key_11, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, TScriptInterface<class II_CanBeAttacked_C> K2Node_DynamicCast_AsI_Can_be_Attacked, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class II_CanBeAttacked_C> K2Node_DynamicCast_AsI_Can_be_Attacked_1, bool K2Node_DynamicCast_bSuccess_4, const struct FF_HitData& CallFunc_MakeMeleeHitData_HitData, bool CallFunc_TakeDamage_Result, enum class E_AttackResult CallFunc_TakeDamage_ResultType, class UEffectsComponent_C* CallFunc_GetComponentByClass_ReturnValue_3, bool CallFunc_ApplyEffect_Applied, bool CallFunc_IsValid_ReturnValue_5, class UStaggerComponent_C* CallFunc_GetComponentByClass_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_6, class UEffectsComponent_C* CallFunc_GetComponentByClass_ReturnValue_5, bool CallFunc_ApplyEffect_Applied_1, bool CallFunc_IsValid_ReturnValue_7, const struct FF_HitData& CallFunc_MakeMeleeHitData_HitData_1, class ABP_BaseAI_C* K2Node_DynamicCast_AsBP_Base_AI, bool K2Node_DynamicCast_bSuccess_5, float CallFunc_Divide_FloatFloat_ReturnValue_1, const struct FF_HitData& K2Node_MakeStruct_F_HitData, class AALS_Base_CharacterBP_C* K2Node_DynamicCast_AsALS_Base_Character_BP, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_TakeDamage_Result_1, enum class E_AttackResult CallFunc_TakeDamage_ResultType_1, enum class E_State CallFunc_GetState_State_4, enum class E_InputBufferKey K2Node_ComponentBoundEvent_Key, const struct FKey& K2Node_InputActionEvent_Key_12, bool K2Node_SwitchEnum_CmpSuccess_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, float CallFunc_Lerp_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_8, bool CallFunc_EqualEqual_ByteByte_ReturnValue_18, bool CallFunc_EqualEqual_ByteByte_ReturnValue_19, bool CallFunc_CanUseOrSwitchItem_Result, bool CallFunc_BooleanOR_ReturnValue_9, uint8 CallFunc_MakeLiteralByte_ReturnValue_9, bool CallFunc_Is_UI_Open__Condition, bool CallFunc_Is_UI_Open__Condition_1, bool CallFunc_CanBlock_Result, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, bool CallFunc_IsSprinting_Sprinting, bool CallFunc_IsFalling_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_Is_UI_Open__Condition_2, bool CallFunc_Is_UI_Open__Condition_3, bool CallFunc_Is_UI_Open__Condition_4, bool CallFunc_Is_UI_Open__Condition_5, bool Temp_bool_Variable_2, bool CallFunc_Not_PreBool_ReturnValue_5, uint8 CallFunc_MakeLiteralByte_ReturnValue_10, class FName K2Node_CustomEvent_NotifyName_8, bool CallFunc_AttemptBackstab_Result, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class UWB_InGame_C* CallFunc_Create_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_11, bool K2Node_SwitchEnum_CmpSuccess_5, bool K2Node_ComponentBoundEvent_Enabled, class FName K2Node_CustomEvent_NotifyName_9, bool CallFunc_Is_Interaction_with_Gamepad_Valid__ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, uint8 CallFunc_MakeLiteralByte_ReturnValue_12, bool CallFunc_EqualEqual_ByteByte_ReturnValue_20, bool CallFunc_EqualEqual_ByteByte_ReturnValue_21, enum class EMovementMode K2Node_Event_PrevMovementMode, enum class EMovementMode K2Node_Event_NewMovementMode, uint8 K2Node_Event_PrevCustomMode, uint8 K2Node_Event_NewCustomMode, bool CallFunc_BooleanOR_ReturnValue_10, bool CallFunc_EqualEqual_ByteByte_ReturnValue_22, class FName Temp_name_Variable_2, float K2Node_InputAxisEvent_AxisValue_3, float K2Node_InputAxisEvent_AxisValue_2, float CallFunc_GetInputAxisValue_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_6, float CallFunc_Multiply_FloatFloat_ReturnValue_7, float K2Node_InputAxisEvent_AxisValue_1, float K2Node_InputAxisEvent_AxisValue, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, enum class E_State K2Node_ComponentBoundEvent_PrevState, enum class E_State K2Node_ComponentBoundEvent_NewState, uint8 CallFunc_MakeLiteralByte_ReturnValue_13, bool CallFunc_EqualEqual_ByteByte_ReturnValue_23, bool CallFunc_EqualEqual_ByteByte_ReturnValue_24, class USkeletalMeshComponent* K2Node_CustomEvent_Skeletal_Mesh, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, class FName K2Node_CustomEvent_NotifyName_11, int32 CallFunc_Array_AddUnique_ReturnValue_2, const struct FS_bodySystem& CallFunc_Get_Current_Form_Form, bool CallFunc_Get_Current_Form_Found, TArray<struct FS_bodySystem>& CallFunc_Map_Values_Values, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, TArray<struct FS_bodySystem>& CallFunc_Filter_on_Form_Filtered_List, int32 CallFunc_Array_Length_ReturnValue_1, class ABP_PlayerCapture_C* CallFunc_GetActorOfClass_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_3, int32 CallFunc_Array_AddUnique_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_9, int32 CallFunc_Array_AddUnique_ReturnValue_5, int32 CallFunc_Array_AddUnique_ReturnValue_6, int32 CallFunc_Array_AddUnique_ReturnValue_7, class ABP_DummyCharacter_C* CallFunc_GetActorOfClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_10, int32 CallFunc_Array_AddUnique_ReturnValue_8, int32 CallFunc_Array_AddUnique_ReturnValue_9, int32 CallFunc_Array_AddUnique_ReturnValue_10, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_GetStatValue_Value, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_25, float CallFunc_GetStatValue_Value_1, class FName K2Node_CustomEvent_NotifyName_12, float CallFunc_Add_FloatFloat_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UW_InGameMenu_C* CallFunc_Create_ReturnValue_1, enum class E_State CallFunc_GetState_State_5, class ABP_AmbientMusic_Controller_C* CallFunc_GetActorOfClass_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_26, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, class UW_LoadingScreen_C* CallFunc_Create_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class URPGInventory_GameInstance_C* K2Node_DynamicCast_AsRPGInventory_Game_Instance, bool K2Node_DynamicCast_bSuccess_7, class FName K2Node_CustomEvent_NotifyName_13, bool CallFunc_EqualEqual_ByteByte_ReturnValue_27, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, float K2Node_Event_DeltaSeconds, uint8 CallFunc_MakeLiteralByte_ReturnValue_14, bool CallFunc_GetActivityValue_Value, bool CallFunc_IsValid_ReturnValue_11, enum class E_Activity K2Node_ComponentBoundEvent_Activity, bool K2Node_ComponentBoundEvent_Value, const struct FKey& K2Node_InputActionEvent_Key_13, bool K2Node_SwitchEnum_CmpSuccess_6, uint8 CallFunc_MakeLiteralByte_ReturnValue_15, class ABP_DungeonLighting_C* CallFunc_GetActorOfClass_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_12, bool CallFunc_EqualEqual_ByteByte_ReturnValue_28, bool CallFunc_IsValid_ReturnValue_13, class FName K2Node_CustomEvent_NotifyName_14, class ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, class ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_29, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_11, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_8, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class UW_LoadingScreen_C* CallFunc_Create_ReturnValue_3, const struct FKey& K2Node_InputActionEvent_Key_14, const class FString& CallFunc_GetDisplayName_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, bool CallFunc_Contains_ReturnValue, class ABP_AmbientMusic_Controller_C* CallFunc_GetActorOfClass_ReturnValue_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, class UW_LoadingScreen_C* CallFunc_Create_ReturnValue_4, const struct FKey& K2Node_InputActionEvent_Key_15, float K2Node_ComponentBoundEvent_NewValue_2, float K2Node_ComponentBoundEvent_MaxValue_2, float CallFunc_Divide_FloatFloat_ReturnValue_2, float K2Node_ComponentBoundEvent_NewValue_1, float K2Node_ComponentBoundEvent_MaxValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, const struct FKey& K2Node_InputActionEvent_Key_16, uint8 CallFunc_MakeLiteralByte_ReturnValue_16, bool CallFunc_EqualEqual_ByteByte_ReturnValue_30, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, bool CallFunc_IsTargetingEnabled_return_value, bool Temp_bool_Variable_3, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue_2, const struct FKey& K2Node_InputActionEvent_Key_17, const struct FKey& K2Node_InputActionEvent_Key_18, const struct FKey& K2Node_InputActionEvent_Key_19, const struct FKey& K2Node_InputActionEvent_Key_1, enum class E_State CallFunc_GetState_State_6, const struct FKey& K2Node_InputActionEvent_Key_20, bool CallFunc_EqualEqual_ByteByte_ReturnValue_31, const struct FKey& K2Node_InputActionEvent_Key_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_14, float K2Node_CustomEvent_DelayTime, bool CallFunc_IsUsingAbility_ReturnValue, bool CallFunc_IsUsingAbility_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_32, bool CallFunc_BooleanOR_ReturnValue_12, uint8 CallFunc_MakeLiteralByte_ReturnValue_17, bool CallFunc_EqualEqual_ByteByte_ReturnValue_33, bool CallFunc_IsPackagedForDistribution_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_7, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_GetIsInCombat_Value, bool CallFunc_IsAbilityValid_Valid, bool CallFunc_SetIsInCombat_Dummy, bool CallFunc_IsRolling_Rolling, bool CallFunc_IsRolling_Rolling_1, bool CallFunc_Not_PreBool_ReturnValue_8, bool CallFunc_Not_PreBool_ReturnValue_9, bool CallFunc_IsSprinting_Sprinting_1, enum class E_State CallFunc_GetState_State_7, bool CallFunc_Not_PreBool_ReturnValue_10, bool CallFunc_EqualEqual_ByteByte_ReturnValue_34, bool CallFunc_IsSprinting_Sprinting_2, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_11, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_Is_Game_Paused__Paused, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue_1, bool CallFunc_Is_Game_Paused__Paused_1, bool CallFunc_NotEqual_ClassClass_ReturnValue_2, bool CallFunc_Is_Game_Paused__Paused_2, bool CallFunc_Is_Game_Paused__Paused_3, bool CallFunc_NotEqual_ClassClass_ReturnValue_3, bool CallFunc_NotEqual_ClassClass_ReturnValue_4, bool CallFunc_Is_Game_Paused__Paused_4, uint8 CallFunc_MakeLiteralByte_ReturnValue_18, bool CallFunc_GetIsPressed_Result, const struct FKey& Temp_struct_Variable_5, const struct FKey& K2Node_InputActionEvent_Key_21, int32 Temp_int_Array_Index_Variable_1, const struct FS_bodySystem& CallFunc_Array_Get_Item_1, class FName Temp_name_Variable_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_35, bool CallFunc_EqualEqual_ByteByte_ReturnValue_36, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_13, const struct FS_MorphTargets& K2Node_SetFieldsInStruct_StructOut, enum class EMovementMode K2Node_CustomEvent_PrevMovementMode, enum class EMovementMode K2Node_CustomEvent_NewMovementMode, enum class E_State CallFunc_GetState_State_8, bool CallFunc_EqualEqual_ByteByte_ReturnValue_37, bool CallFunc_EqualEqual_ByteByte_ReturnValue_38, bool CallFunc_BooleanAND_ReturnValue_6, class FName K2Node_CustomEvent_NotifyName_15, enum class E_State K2Node_CustomEvent_NewState, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_39, bool CallFunc_BooleanAND_ReturnValue_7, class AAbility_C* K2Node_ComponentBoundEvent_NewAbility, bool CallFunc_IsValid_ReturnValue_15, bool CallFunc_Not_PreBool_ReturnValue_12, bool CallFunc_BooleanAND_ReturnValue_8, const struct FKey& K2Node_InputActionEvent_Key_22, bool CallFunc_Not_PreBool_ReturnValue_13, bool CallFunc_BooleanAND_ReturnValue_9, bool CallFunc_BooleanAND_ReturnValue_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, class FName K2Node_CustomEvent_NotifyName_16, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, bool CallFunc_GetIsCasting_Result, bool CallFunc_GetIsPressed_Result_1, bool CallFunc_Not_PreBool_ReturnValue_14, bool CallFunc_Not_PreBool_ReturnValue_15, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, bool CallFunc_GetIsPressed_Result_2, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_Not_PreBool_ReturnValue_16, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_GetIsCasting_Result_1, const struct FVector& CallFunc_GetRightVector_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_17, bool CallFunc_BooleanAND_ReturnValue_11, const struct FVector& CallFunc_GetForwardVector_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_19, bool CallFunc_EqualEqual_ByteByte_ReturnValue_40, bool CallFunc_GetActivityValue_Value_1, bool CallFunc_IsAlive_Result_1, bool CallFunc_IsAlive_Result_2, bool CallFunc_ShouldRotateOnPressed_RotateOnPressed, bool CallFunc_EqualEqual_ByteByte_ReturnValue_41, bool CallFunc_EqualEqual_ByteByte_ReturnValue_42, bool CallFunc_BooleanOR_ReturnValue_14, class UTexture2D* CallFunc_GetAbilityCrosshair_Crosshair, bool CallFunc_GetIsPressed_Result_3, bool CallFunc_CanAbilityBeCancelled_Result, enum class E_AbilityEndResult K2Node_ComponentBoundEvent_Result, class FName K2Node_CustomEvent_NotifyName_17, enum class E_InputBufferKey CallFunc_GetStoredKey_StoredKey, bool CallFunc_EqualEqual_ByteByte_ReturnValue_43, bool CallFunc_BooleanAND_ReturnValue_12, bool CallFunc_IsAbilityUsingCrosshair_Result, bool CallFunc_GetIsPressed_Result_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_24, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_2, float CallFunc_GetManaCost_Value, float CallFunc_GetCurrentValue_CurrentValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_IsAbilityValid_Valid_1, class UClass* K2Node_CustomEvent_Ability, bool CallFunc_BooleanAND_ReturnValue_13, bool CallFunc_BooleanAND_ReturnValue_14, float CallFunc_GetManaCost_Value_1, class FName K2Node_CustomEvent_NotifyName_18, float K2Node_ComponentBoundEvent_NewValue, float K2Node_ComponentBoundEvent_MaxValue, bool CallFunc_Less_FloatFloat_ReturnValue, float K2Node_ComponentBoundEvent_Amount, float CallFunc_Multiply_FloatFloat_ReturnValue_9, uint8 CallFunc_MakeLiteralByte_ReturnValue_20, bool CallFunc_EqualEqual_ByteByte_ReturnValue_44, class AALS_Base_CharacterBP_C* K2Node_DynamicCast_AsALS_Base_Character_BP_1, bool K2Node_DynamicCast_bSuccess_8, class AALS_Base_CharacterBP_C* K2Node_DynamicCast_AsALS_Base_Character_BP_2, bool K2Node_DynamicCast_bSuccess_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_25, bool CallFunc_EqualEqual_ByteByte_ReturnValue_45, bool CallFunc_EqualEqual_ByteByte_ReturnValue_46, bool CallFunc_EqualEqual_ByteByte_ReturnValue_47, bool CallFunc_BooleanOR_ReturnValue_15, TArray<struct FS_ItemData>& CallFunc_Get_Inventory_Items_of_Type_Inventory_Items, const struct FS_ItemData& CallFunc_Array_Get_Item_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class FName K2Node_CustomEvent_NotifyName_19, TSubclassOf<class ABP_BasicArrowProjectile_C> K2Node_ClassDynamicCast_AsBP_Basic_Arrow_Projectile, bool K2Node_ClassDynamicCast_bSuccess, int32 K2Node_Select_Default, float CallFunc_GetStatValue_Value_2, float CallFunc_Multiply_FloatFloat_ReturnValue_10, float CallFunc_Multiply_FloatFloat_ReturnValue_11, bool K2Node_SwitchEnum_CmpSuccess_8, bool CallFunc_CanBowAttack_Result, bool CallFunc_CanBowAttack_Result_1, const struct FTransform& CallFunc_GetSpawnedArrowTransform_Transform, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class UAnimMontage* CallFunc_GetMontageForAction_Montage, bool CallFunc_IsValid_ReturnValue_16, float CallFunc_PlayAnimMontage_ReturnValue, class ABP_BasicArrowProjectile_C* CallFunc_FinishSpawningActor_ReturnValue, enum class E_State CallFunc_GetState_State_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_26, bool CallFunc_EqualEqual_ByteByte_ReturnValue_48, bool CallFunc_BooleanAND_ReturnValue_15, bool CallFunc_BooleanAND_ReturnValue_16, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_3, bool CallFunc_CanBowAttack_Result_2, bool CallFunc_BooleanAND_ReturnValue_17, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_4, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_5, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_6, bool CallFunc_CanBowAttack_Result_3, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool CallFunc_IsPackagedForDistribution_ReturnValue_2, bool CallFunc_IsPackagedForDistribution_ReturnValue_3, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_17, class AALS_PlayerCameraManager_C* K2Node_DynamicCast_AsALS_Player_Camera_Manager_1, bool K2Node_DynamicCast_bSuccess_10, uint8 CallFunc_MakeLiteralByte_ReturnValue_21, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_18, bool CallFunc_GetActivityValue_Value_2, bool CallFunc_BooleanAND_ReturnValue_18, class UALS_PlayerCameraBehavior_C* K2Node_DynamicCast_AsALS_Player_Camera_Behavior, bool K2Node_DynamicCast_bSuccess_11, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_3, class AALS_PlayerCameraManager_C* K2Node_DynamicCast_AsALS_Player_Camera_Manager_2, bool K2Node_DynamicCast_bSuccess_12, float CallFunc_FClamp_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, const struct FKey& K2Node_InputActionEvent_Key_23, bool CallFunc_IsValid_ReturnValue_19, class UALS_PlayerCameraBehavior_C* K2Node_DynamicCast_AsALS_Player_Camera_Behavior_1, bool K2Node_DynamicCast_bSuccess_13, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, float CallFunc_FClamp_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue_1, float Temp_float_Variable, bool CallFunc_K2_AttachToComponent_ReturnValue_2, class FName Temp_name_Variable_4, bool CallFunc_K2_AttachToComponent_ReturnValue_3, bool CallFunc_K2_AttachToComponent_ReturnValue_4, class FName K2Node_CustomEvent_NotifyName_20, bool CallFunc_K2_AttachToComponent_ReturnValue_5, bool CallFunc_K2_AttachToComponent_ReturnValue_6, uint8 CallFunc_MakeLiteralByte_ReturnValue_22, bool CallFunc_EqualEqual_ByteByte_ReturnValue_49, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_27, const struct FKey& K2Node_InputActionEvent_Key_24, const struct FKey& K2Node_InputKeyEvent_Key_31, const struct FKey& K2Node_InputKeyEvent_Key_32, bool K2Node_SwitchEnum_CmpSuccess_9, bool CallFunc_IsValid_ReturnValue_20, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_21, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2, class FName K2Node_CustomEvent_NotifyName_21, bool CallFunc_EqualEqual_ByteByte_ReturnValue_50, enum class E_State CallFunc_GetState_State_10, bool CallFunc_EqualEqual_ByteByte_ReturnValue_51, bool CallFunc_BooleanAND_ReturnValue_19, bool K2Node_SwitchEnum_CmpSuccess_10, const struct FKey& K2Node_InputKeyEvent_Key_33, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_28, bool CallFunc_IsValid_ReturnValue_22, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_23, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_24, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_25, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_52, uint8 CallFunc_MakeLiteralByte_ReturnValue_23, bool CallFunc_IsAlive_Result_3, bool CallFunc_GetActivityValue_Value_3, bool CallFunc_Not_PreBool_ReturnValue_18, bool CallFunc_K2_AttachToComponent_ReturnValue_7, float Temp_float_Variable_1, bool CallFunc_K2_AttachToComponent_ReturnValue_8, bool CallFunc_K2_AttachToComponent_ReturnValue_9, class FName K2Node_CustomEvent_NotifyName_22, bool CallFunc_K2_AttachToComponent_ReturnValue_10, bool CallFunc_K2_AttachToComponent_ReturnValue_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_29, bool K2Node_SwitchEnum_CmpSuccess_11, bool CallFunc_EqualEqual_ByteByte_ReturnValue_53, bool CallFunc_K2_AttachToComponent_ReturnValue_12, bool CallFunc_K2_AttachToComponent_ReturnValue_13, bool K2Node_SwitchEnum_CmpSuccess_12, bool CallFunc_K2_AttachToComponent_ReturnValue_14, bool CallFunc_K2_AttachToComponent_ReturnValue_15, uint8 CallFunc_MakeLiteralByte_ReturnValue_24, class FName K2Node_CustomEvent_NotifyName_23, bool CallFunc_EqualEqual_ByteByte_ReturnValue_54, float Temp_float_Variable_2, uint8 CallFunc_MakeLiteralByte_ReturnValue_25, bool CallFunc_IsValid_ReturnValue_26, bool CallFunc_EqualEqual_ByteByte_ReturnValue_55, bool CallFunc_BooleanAND_ReturnValue_20, bool CallFunc_BooleanAND_ReturnValue_21, uint8 CallFunc_MakeLiteralByte_ReturnValue_26, bool CallFunc_GetActivityValue_Value_4, bool CallFunc_BooleanAND_ReturnValue_22, bool CallFunc_BooleanAND_ReturnValue_23, bool CallFunc_BooleanAND_ReturnValue_24, bool CallFunc_Is_UI_Open__Condition_6, bool CallFunc_Is_UI_Open__Condition_7, uint8 CallFunc_MakeLiteralByte_ReturnValue_27, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_30, bool CallFunc_EqualEqual_ByteByte_ReturnValue_56, bool CallFunc_EqualEqual_ByteByte_ReturnValue_57, uint8 CallFunc_MakeLiteralByte_ReturnValue_28, bool CallFunc_GetActivityValue_Value_5, bool CallFunc_Not_PreBool_ReturnValue_19, bool CallFunc_BooleanAND_ReturnValue_25, bool CallFunc_BooleanAND_ReturnValue_26, bool CallFunc_GetIsPressed_Result_5, bool CallFunc_K2_AttachToComponent_ReturnValue_16, bool CallFunc_K2_AttachToComponent_ReturnValue_17, class FName K2Node_CustomEvent_NotifyName_24, bool CallFunc_K2_AttachToComponent_ReturnValue_18, bool CallFunc_K2_AttachToComponent_ReturnValue_19, bool CallFunc_K2_AttachToComponent_ReturnValue_20, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_31, bool K2Node_SwitchEnum_CmpSuccess_13, enum class E_CombatType CallFunc_GetCombatType_Type, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_58, enum class E_CombatType K2Node_CustomEvent_NewType, bool CallFunc_NotEqual_ByteByte_ReturnValue_3, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_2, bool CallFunc_BooleanAND_ReturnValue_27, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_3, bool K2Node_CustomEvent_loaded_save_file, class FName Temp_name_Variable_5, bool K2Node_ComponentBoundEvent_loaded_save_file, bool CallFunc_EqualEqual_ByteByte_ReturnValue_59, bool CallFunc_BooleanOR_ReturnValue_16, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_4, TArray<class USkeletalMeshComponent*>& K2Node_MakeArray_Array_5, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_6, bool CallFunc_Not_PreBool_ReturnValue_20, bool CallFunc_IsValid_ReturnValue_27, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_4, TScriptInterface<class IBP_CharInterface_C> K2Node_DynamicCast_AsBP_Char_Interface, bool K2Node_DynamicCast_bSuccess_14, bool CallFunc_K2_AttachToComponent_ReturnValue_21, class FName K2Node_CustomEvent_NotifyName_25, class APlayerController* CallFunc_GetPlayerController_ReturnValue_7, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_RLerp_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_32, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_5, TScriptInterface<class IBP_CharInterface_C> K2Node_DynamicCast_AsBP_Char_Interface_1, bool K2Node_DynamicCast_bSuccess_15, TScriptInterface<class IBP_CharInterface_C> K2Node_DynamicCast_AsBP_Char_Interface_2, bool K2Node_DynamicCast_bSuccess_16, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, bool K2Node_CustomEvent_OnCarLeft, class USceneComponent* K2Node_Select_Default_1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FRotator& CallFunc_RLerp_ReturnValue_1, const struct FVector& CallFunc_VLerp_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult_1, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_8, class APlayerController* CallFunc_GetPlayerController_ReturnValue_9, bool K2Node_Event_OnLeft_, class AHorseBP_C* K2Node_Event_Mount, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_2, const struct FVector& CallFunc_VLerp_ReturnValue_2, const struct FRotator& CallFunc_RLerp_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult_2, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CombatCharacter_C", "ExecuteUbergraph_BP_CombatCharacter");

	Params::ABP_CombatCharacter_C_ExecuteUbergraph_BP_CombatCharacter_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_InputKeyEvent_Key_8 = K2Node_InputKeyEvent_Key_8;
	Parms.K2Node_InputKeyEvent_Key_7 = K2Node_InputKeyEvent_Key_7;
	Parms.K2Node_InputKeyEvent_Key_6 = K2Node_InputKeyEvent_Key_6;
	Parms.K2Node_InputKeyEvent_Key_5 = K2Node_InputKeyEvent_Key_5;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.K2Node_InputKeyEvent_Key_4 = K2Node_InputKeyEvent_Key_4;
	Parms.K2Node_InputKeyEvent_Key_3 = K2Node_InputKeyEvent_Key_3;
	Parms.K2Node_InputKeyEvent_Key_2 = K2Node_InputKeyEvent_Key_2;
	Parms.K2Node_InputKeyEvent_Key_1 = K2Node_InputKeyEvent_Key_1;
	Parms.K2Node_InputKeyEvent_Key = K2Node_InputKeyEvent_Key;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.K2Node_InputActionEvent_Key = K2Node_InputActionEvent_Key;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_2 = CallFunc_MakeLiteralByte_ReturnValue_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_InputKeyEvent_Key_9 = K2Node_InputKeyEvent_Key_9;
	Parms.K2Node_CustomEvent_NotifyName_26 = K2Node_CustomEvent_NotifyName_26;
	Parms.K2Node_InputKeyEvent_Key_10 = K2Node_InputKeyEvent_Key_10;
	Parms.K2Node_InputKeyEvent_Key_11 = K2Node_InputKeyEvent_Key_11;
	Parms.K2Node_InputKeyEvent_Key_12 = K2Node_InputKeyEvent_Key_12;
	Parms.CallFunc_GetState_State = CallFunc_GetState_State;
	Parms.K2Node_InputKeyEvent_Key_13 = K2Node_InputKeyEvent_Key_13;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_InputKeyEvent_Key_14 = K2Node_InputKeyEvent_Key_14;
	Parms.K2Node_CustomEvent_NotifyName_27 = K2Node_CustomEvent_NotifyName_27;
	Parms.K2Node_InputKeyEvent_Key_15 = K2Node_InputKeyEvent_Key_15;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.K2Node_InputKeyEvent_Key_16 = K2Node_InputKeyEvent_Key_16;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_InputKeyEvent_Key_17 = K2Node_InputKeyEvent_Key_17;
	Parms.K2Node_InputKeyEvent_Key_18 = K2Node_InputKeyEvent_Key_18;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.K2Node_InputKeyEvent_Key_19 = K2Node_InputKeyEvent_Key_19;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = CallFunc_EqualEqual_ByteByte_ReturnValue_5;
	Parms.K2Node_InputKeyEvent_Key_20 = K2Node_InputKeyEvent_Key_20;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.K2Node_InputKeyEvent_Key_21 = K2Node_InputKeyEvent_Key_21;
	Parms.K2Node_InputKeyEvent_Key_22 = K2Node_InputKeyEvent_Key_22;
	Parms.K2Node_InputKeyEvent_Key_23 = K2Node_InputKeyEvent_Key_23;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_6 = CallFunc_EqualEqual_ByteByte_ReturnValue_6;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_7 = CallFunc_EqualEqual_ByteByte_ReturnValue_7;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_8 = CallFunc_EqualEqual_ByteByte_ReturnValue_8;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_9 = CallFunc_EqualEqual_ByteByte_ReturnValue_9;
	Parms.K2Node_CustomEvent_NotifyName_28 = K2Node_CustomEvent_NotifyName_28;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_3 = CallFunc_MakeLiteralByte_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_10 = CallFunc_EqualEqual_ByteByte_ReturnValue_10;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_11 = CallFunc_EqualEqual_ByteByte_ReturnValue_11;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_12 = CallFunc_EqualEqual_ByteByte_ReturnValue_12;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_13 = CallFunc_EqualEqual_ByteByte_ReturnValue_13;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_6 = CallFunc_BooleanOR_ReturnValue_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsFalling_ReturnValue = CallFunc_IsFalling_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_29 = K2Node_CustomEvent_NotifyName_29;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetCurrentValue_CurrentValue = CallFunc_GetCurrentValue_CurrentValue;
	Parms.K2Node_InputActionEvent_Key_3 = K2Node_InputActionEvent_Key_3;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_IsFalling_ReturnValue_1 = CallFunc_IsFalling_ReturnValue_1;
	Parms.K2Node_InputActionEvent_Key_4 = K2Node_InputActionEvent_Key_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_InputActionEvent_Key_5 = K2Node_InputActionEvent_Key_5;
	Parms.K2Node_InputActionEvent_Key_6 = K2Node_InputActionEvent_Key_6;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_InputActionEvent_Key_7 = K2Node_InputActionEvent_Key_7;
	Parms.K2Node_InputActionEvent_Key_8 = K2Node_InputActionEvent_Key_8;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_GetState_State_1 = CallFunc_GetState_State_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetState_State_2 = CallFunc_GetState_State_2;
	Parms.K2Node_Event_TransportType = K2Node_Event_TransportType;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_14 = CallFunc_EqualEqual_ByteByte_ReturnValue_14;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_15 = CallFunc_EqualEqual_ByteByte_ReturnValue_15;
	Parms.CallFunc_BooleanOR_ReturnValue_7 = CallFunc_BooleanOR_ReturnValue_7;
	Parms.K2Node_InputKeyEvent_Key_24 = K2Node_InputKeyEvent_Key_24;
	Parms.K2Node_InputKeyEvent_Key_25 = K2Node_InputKeyEvent_Key_25;
	Parms.CallFunc_IsFalling_ReturnValue_2 = CallFunc_IsFalling_ReturnValue_2;
	Parms.K2Node_InputKeyEvent_Key_26 = K2Node_InputKeyEvent_Key_26;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.K2Node_InputKeyEvent_Key_27 = K2Node_InputKeyEvent_Key_27;
	Parms.K2Node_InputKeyEvent_Key_28 = K2Node_InputKeyEvent_Key_28;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_4 = CallFunc_MakeLiteralByte_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_DynamicCast_AsBPI_NPC_Interaction = K2Node_DynamicCast_AsBPI_NPC_Interaction;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent_1 = K2Node_ComponentBoundEvent_OverlappedComponent_1;
	Parms.K2Node_ComponentBoundEvent_OtherActor_1 = K2Node_ComponentBoundEvent_OtherActor_1;
	Parms.K2Node_ComponentBoundEvent_OtherComp_1 = K2Node_ComponentBoundEvent_OtherComp_1;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex_1 = K2Node_ComponentBoundEvent_OtherBodyIndex_1;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_DoesImplementInterface_ReturnValue_1 = CallFunc_DoesImplementInterface_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_16 = CallFunc_EqualEqual_ByteByte_ReturnValue_16;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_17 = CallFunc_EqualEqual_ByteByte_ReturnValue_17;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_8 = CallFunc_BooleanOR_ReturnValue_8;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_5 = CallFunc_MakeLiteralByte_ReturnValue_5;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsALS_Player_Controller = K2Node_DynamicCast_AsALS_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;
	Parms.CallFunc_Open_World_Map_Widget_World_Map_Ref = CallFunc_Open_World_Map_Widget_World_Map_Ref;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsPackagedForDistribution_ReturnValue = CallFunc_IsPackagedForDistribution_ReturnValue;
	Parms.K2Node_InputKeyEvent_Key_29 = K2Node_InputKeyEvent_Key_29;
	Parms.K2Node_InputKeyEvent_Key_30 = K2Node_InputKeyEvent_Key_30;
	Parms.CallFunc_GetState_State_3 = CallFunc_GetState_State_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_IsAlive_Result = CallFunc_IsAlive_Result;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_InputActionEvent_Key_9 = K2Node_InputActionEvent_Key_9;
	Parms.K2Node_InputActionEvent_Key_10 = K2Node_InputActionEvent_Key_10;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsALS_Player_Camera_Manager = K2Node_DynamicCast_AsALS_Player_Camera_Manager;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsFalling_ReturnValue_3 = CallFunc_IsFalling_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsAnyEffectApplied_ReturnValue = CallFunc_IsAnyEffectApplied_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Type_1 = K2Node_ComponentBoundEvent_Type_1;
	Parms.K2Node_ComponentBoundEvent_Type = K2Node_ComponentBoundEvent_Type;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_6 = CallFunc_MakeLiteralByte_ReturnValue_6;
	Parms.CallFunc_GetAllSocketNames_ReturnValue = CallFunc_GetAllSocketNames_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_7 = CallFunc_MakeLiteralByte_ReturnValue_7;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CustomEvent_Blocked_ = K2Node_CustomEvent_Blocked_;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_GetAllSocketNames_ReturnValue_1 = CallFunc_GetAllSocketNames_ReturnValue_1;
	Parms.K2Node_CustomEvent_NotifyName_5 = K2Node_CustomEvent_NotifyName_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_ComponentBoundEvent_CollisionPart = K2Node_ComponentBoundEvent_CollisionPart;
	Parms.K2Node_CustomEvent_NotifyName_6 = K2Node_CustomEvent_NotifyName_6;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.K2Node_ComponentBoundEvent_HitResult = K2Node_ComponentBoundEvent_HitResult;
	Parms.K2Node_InputActionEvent_Key_11 = K2Node_InputActionEvent_Key_11;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.K2Node_DynamicCast_AsI_Can_be_Attacked = K2Node_DynamicCast_AsI_Can_be_Attacked;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsI_Can_be_Attacked_1 = K2Node_DynamicCast_AsI_Can_be_Attacked_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_MakeMeleeHitData_HitData = CallFunc_MakeMeleeHitData_HitData;
	Parms.CallFunc_TakeDamage_Result = CallFunc_TakeDamage_Result;
	Parms.CallFunc_TakeDamage_ResultType = CallFunc_TakeDamage_ResultType;
	Parms.CallFunc_GetComponentByClass_ReturnValue_3 = CallFunc_GetComponentByClass_ReturnValue_3;
	Parms.CallFunc_ApplyEffect_Applied = CallFunc_ApplyEffect_Applied;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_GetComponentByClass_ReturnValue_4 = CallFunc_GetComponentByClass_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_GetComponentByClass_ReturnValue_5 = CallFunc_GetComponentByClass_ReturnValue_5;
	Parms.CallFunc_ApplyEffect_Applied_1 = CallFunc_ApplyEffect_Applied_1;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_MakeMeleeHitData_HitData_1 = CallFunc_MakeMeleeHitData_HitData_1;
	Parms.K2Node_DynamicCast_AsBP_Base_AI = K2Node_DynamicCast_AsBP_Base_AI;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.K2Node_MakeStruct_F_HitData = K2Node_MakeStruct_F_HitData;
	Parms.K2Node_DynamicCast_AsALS_Base_Character_BP = K2Node_DynamicCast_AsALS_Base_Character_BP;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_TakeDamage_Result_1 = CallFunc_TakeDamage_Result_1;
	Parms.CallFunc_TakeDamage_ResultType_1 = CallFunc_TakeDamage_ResultType_1;
	Parms.CallFunc_GetState_State_4 = CallFunc_GetState_State_4;
	Parms.K2Node_ComponentBoundEvent_Key = K2Node_ComponentBoundEvent_Key;
	Parms.K2Node_InputActionEvent_Key_12 = K2Node_InputActionEvent_Key_12;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_8 = CallFunc_MakeLiteralByte_ReturnValue_8;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_18 = CallFunc_EqualEqual_ByteByte_ReturnValue_18;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_19 = CallFunc_EqualEqual_ByteByte_ReturnValue_19;
	Parms.CallFunc_CanUseOrSwitchItem_Result = CallFunc_CanUseOrSwitchItem_Result;
	Parms.CallFunc_BooleanOR_ReturnValue_9 = CallFunc_BooleanOR_ReturnValue_9;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_9 = CallFunc_MakeLiteralByte_ReturnValue_9;
	Parms.CallFunc_Is_UI_Open__Condition = CallFunc_Is_UI_Open__Condition;
	Parms.CallFunc_Is_UI_Open__Condition_1 = CallFunc_Is_UI_Open__Condition_1;
	Parms.CallFunc_CanBlock_Result = CallFunc_CanBlock_Result;
	Parms.K2Node_CustomEvent_NotifyName_7 = K2Node_CustomEvent_NotifyName_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.CallFunc_IsSprinting_Sprinting = CallFunc_IsSprinting_Sprinting;
	Parms.CallFunc_IsFalling_ReturnValue_4 = CallFunc_IsFalling_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_Is_UI_Open__Condition_2 = CallFunc_Is_UI_Open__Condition_2;
	Parms.CallFunc_Is_UI_Open__Condition_3 = CallFunc_Is_UI_Open__Condition_3;
	Parms.CallFunc_Is_UI_Open__Condition_4 = CallFunc_Is_UI_Open__Condition_4;
	Parms.CallFunc_Is_UI_Open__Condition_5 = CallFunc_Is_UI_Open__Condition_5;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_10 = CallFunc_MakeLiteralByte_ReturnValue_10;
	Parms.K2Node_CustomEvent_NotifyName_8 = K2Node_CustomEvent_NotifyName_8;
	Parms.CallFunc_AttemptBackstab_Result = CallFunc_AttemptBackstab_Result;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_11 = CallFunc_MakeLiteralByte_ReturnValue_11;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.K2Node_ComponentBoundEvent_Enabled = K2Node_ComponentBoundEvent_Enabled;
	Parms.K2Node_CustomEvent_NotifyName_9 = K2Node_CustomEvent_NotifyName_9;
	Parms.CallFunc_Is_Interaction_with_Gamepad_Valid__ReturnValue = CallFunc_Is_Interaction_with_Gamepad_Valid__ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_6 = CallFunc_Not_PreBool_ReturnValue_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_12 = CallFunc_MakeLiteralByte_ReturnValue_12;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_20 = CallFunc_EqualEqual_ByteByte_ReturnValue_20;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_21 = CallFunc_EqualEqual_ByteByte_ReturnValue_21;
	Parms.K2Node_Event_PrevMovementMode = K2Node_Event_PrevMovementMode;
	Parms.K2Node_Event_NewMovementMode = K2Node_Event_NewMovementMode;
	Parms.K2Node_Event_PrevCustomMode = K2Node_Event_PrevCustomMode;
	Parms.K2Node_Event_NewCustomMode = K2Node_Event_NewCustomMode;
	Parms.CallFunc_BooleanOR_ReturnValue_10 = CallFunc_BooleanOR_ReturnValue_10;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_22 = CallFunc_EqualEqual_ByteByte_ReturnValue_22;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.K2Node_InputAxisEvent_AxisValue_3 = K2Node_InputAxisEvent_AxisValue_3;
	Parms.K2Node_InputAxisEvent_AxisValue_2 = K2Node_InputAxisEvent_AxisValue_2;
	Parms.CallFunc_GetInputAxisValue_ReturnValue = CallFunc_GetInputAxisValue_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_4 = CallFunc_Multiply_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_5 = CallFunc_Multiply_FloatFloat_ReturnValue_5;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_6 = CallFunc_Multiply_FloatFloat_ReturnValue_6;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_7 = CallFunc_Multiply_FloatFloat_ReturnValue_7;
	Parms.K2Node_InputAxisEvent_AxisValue_1 = K2Node_InputAxisEvent_AxisValue_1;
	Parms.K2Node_InputAxisEvent_AxisValue = K2Node_InputAxisEvent_AxisValue;
	Parms.K2Node_CustomEvent_NotifyName_10 = K2Node_CustomEvent_NotifyName_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.K2Node_ComponentBoundEvent_PrevState = K2Node_ComponentBoundEvent_PrevState;
	Parms.K2Node_ComponentBoundEvent_NewState = K2Node_ComponentBoundEvent_NewState;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_13 = CallFunc_MakeLiteralByte_ReturnValue_13;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_23 = CallFunc_EqualEqual_ByteByte_ReturnValue_23;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_24 = CallFunc_EqualEqual_ByteByte_ReturnValue_24;
	Parms.K2Node_CustomEvent_Skeletal_Mesh = K2Node_CustomEvent_Skeletal_Mesh;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.K2Node_CustomEvent_NotifyName_11 = K2Node_CustomEvent_NotifyName_11;
	Parms.CallFunc_Array_AddUnique_ReturnValue_2 = CallFunc_Array_AddUnique_ReturnValue_2;
	Parms.CallFunc_Get_Current_Form_Form = CallFunc_Get_Current_Form_Form;
	Parms.CallFunc_Get_Current_Form_Found = CallFunc_Get_Current_Form_Found;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.K2Node_CreateDelegate_OutputDelegate_18 = K2Node_CreateDelegate_OutputDelegate_18;
	Parms.CallFunc_Filter_on_Form_Filtered_List = CallFunc_Filter_on_Form_Filtered_List;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue_3 = CallFunc_Array_AddUnique_ReturnValue_3;
	Parms.CallFunc_Array_AddUnique_ReturnValue_4 = CallFunc_Array_AddUnique_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_Array_AddUnique_ReturnValue_5 = CallFunc_Array_AddUnique_ReturnValue_5;
	Parms.CallFunc_Array_AddUnique_ReturnValue_6 = CallFunc_Array_AddUnique_ReturnValue_6;
	Parms.CallFunc_Array_AddUnique_ReturnValue_7 = CallFunc_Array_AddUnique_ReturnValue_7;
	Parms.CallFunc_GetActorOfClass_ReturnValue_1 = CallFunc_GetActorOfClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_Array_AddUnique_ReturnValue_8 = CallFunc_Array_AddUnique_ReturnValue_8;
	Parms.CallFunc_Array_AddUnique_ReturnValue_9 = CallFunc_Array_AddUnique_ReturnValue_9;
	Parms.CallFunc_Array_AddUnique_ReturnValue_10 = CallFunc_Array_AddUnique_ReturnValue_10;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetStatValue_Value = CallFunc_GetStatValue_Value;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_25 = CallFunc_EqualEqual_ByteByte_ReturnValue_25;
	Parms.CallFunc_GetStatValue_Value_1 = CallFunc_GetStatValue_Value_1;
	Parms.K2Node_CustomEvent_NotifyName_12 = K2Node_CustomEvent_NotifyName_12;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_GetState_State_5 = CallFunc_GetState_State_5;
	Parms.CallFunc_GetActorOfClass_ReturnValue_2 = CallFunc_GetActorOfClass_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_26 = CallFunc_EqualEqual_ByteByte_ReturnValue_26;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_19 = K2Node_CreateDelegate_OutputDelegate_19;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsRPGInventory_Game_Instance = K2Node_DynamicCast_AsRPGInventory_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.K2Node_CustomEvent_NotifyName_13 = K2Node_CustomEvent_NotifyName_13;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_27 = CallFunc_EqualEqual_ByteByte_ReturnValue_27;
	Parms.K2Node_CreateDelegate_OutputDelegate_20 = K2Node_CreateDelegate_OutputDelegate_20;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_14 = CallFunc_MakeLiteralByte_ReturnValue_14;
	Parms.CallFunc_GetActivityValue_Value = CallFunc_GetActivityValue_Value;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.K2Node_ComponentBoundEvent_Activity = K2Node_ComponentBoundEvent_Activity;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.K2Node_InputActionEvent_Key_13 = K2Node_InputActionEvent_Key_13;
	Parms.K2Node_SwitchEnum_CmpSuccess_6 = K2Node_SwitchEnum_CmpSuccess_6;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_15 = CallFunc_MakeLiteralByte_ReturnValue_15;
	Parms.CallFunc_GetActorOfClass_ReturnValue_3 = CallFunc_GetActorOfClass_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_28 = CallFunc_EqualEqual_ByteByte_ReturnValue_28;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.K2Node_CustomEvent_NotifyName_14 = K2Node_CustomEvent_NotifyName_14;
	Parms.CallFunc_CreateLevelSequencePlayer_OutActor = CallFunc_CreateLevelSequencePlayer_OutActor;
	Parms.CallFunc_CreateLevelSequencePlayer_ReturnValue = CallFunc_CreateLevelSequencePlayer_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_29 = CallFunc_EqualEqual_ByteByte_ReturnValue_29;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_11 = CallFunc_BooleanOR_ReturnValue_11;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_8 = CallFunc_Multiply_FloatFloat_ReturnValue_8;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.K2Node_InputActionEvent_Key_14 = K2Node_InputActionEvent_Key_14;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_GetActorOfClass_ReturnValue_4 = CallFunc_GetActorOfClass_ReturnValue_4;
	Parms.CallFunc_GetPlayerController_ReturnValue_6 = CallFunc_GetPlayerController_ReturnValue_6;
	Parms.CallFunc_Create_ReturnValue_4 = CallFunc_Create_ReturnValue_4;
	Parms.K2Node_InputActionEvent_Key_15 = K2Node_InputActionEvent_Key_15;
	Parms.K2Node_ComponentBoundEvent_NewValue_2 = K2Node_ComponentBoundEvent_NewValue_2;
	Parms.K2Node_ComponentBoundEvent_MaxValue_2 = K2Node_ComponentBoundEvent_MaxValue_2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_2 = CallFunc_Divide_FloatFloat_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_NewValue_1 = K2Node_ComponentBoundEvent_NewValue_1;
	Parms.K2Node_ComponentBoundEvent_MaxValue_1 = K2Node_ComponentBoundEvent_MaxValue_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_1 = CallFunc_LessEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_2 = CallFunc_LessEqual_FloatFloat_ReturnValue_2;
	Parms.K2Node_InputActionEvent_Key_16 = K2Node_InputActionEvent_Key_16;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_16 = CallFunc_MakeLiteralByte_ReturnValue_16;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_30 = CallFunc_EqualEqual_ByteByte_ReturnValue_30;
	Parms.K2Node_CreateDelegate_OutputDelegate_21 = K2Node_CreateDelegate_OutputDelegate_21;
	Parms.CallFunc_IsTargetingEnabled_return_value = CallFunc_IsTargetingEnabled_return_value;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_7 = CallFunc_Not_PreBool_ReturnValue_7;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.K2Node_InputActionEvent_Key_17 = K2Node_InputActionEvent_Key_17;
	Parms.K2Node_InputActionEvent_Key_18 = K2Node_InputActionEvent_Key_18;
	Parms.K2Node_InputActionEvent_Key_19 = K2Node_InputActionEvent_Key_19;
	Parms.K2Node_InputActionEvent_Key_1 = K2Node_InputActionEvent_Key_1;
	Parms.CallFunc_GetState_State_6 = CallFunc_GetState_State_6;
	Parms.K2Node_InputActionEvent_Key_20 = K2Node_InputActionEvent_Key_20;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_31 = CallFunc_EqualEqual_ByteByte_ReturnValue_31;
	Parms.K2Node_InputActionEvent_Key_2 = K2Node_InputActionEvent_Key_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.K2Node_CustomEvent_DelayTime = K2Node_CustomEvent_DelayTime;
	Parms.CallFunc_IsUsingAbility_ReturnValue = CallFunc_IsUsingAbility_ReturnValue;
	Parms.CallFunc_IsUsingAbility_ReturnValue_1 = CallFunc_IsUsingAbility_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_32 = CallFunc_EqualEqual_ByteByte_ReturnValue_32;
	Parms.CallFunc_BooleanOR_ReturnValue_12 = CallFunc_BooleanOR_ReturnValue_12;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_17 = CallFunc_MakeLiteralByte_ReturnValue_17;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_33 = CallFunc_EqualEqual_ByteByte_ReturnValue_33;
	Parms.CallFunc_IsPackagedForDistribution_ReturnValue_1 = CallFunc_IsPackagedForDistribution_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_7 = K2Node_SwitchEnum_CmpSuccess_7;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_GetIsInCombat_Value = CallFunc_GetIsInCombat_Value;
	Parms.CallFunc_IsAbilityValid_Valid = CallFunc_IsAbilityValid_Valid;
	Parms.CallFunc_SetIsInCombat_Dummy = CallFunc_SetIsInCombat_Dummy;
	Parms.CallFunc_IsRolling_Rolling = CallFunc_IsRolling_Rolling;
	Parms.CallFunc_IsRolling_Rolling_1 = CallFunc_IsRolling_Rolling_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_8 = CallFunc_Not_PreBool_ReturnValue_8;
	Parms.CallFunc_Not_PreBool_ReturnValue_9 = CallFunc_Not_PreBool_ReturnValue_9;
	Parms.CallFunc_IsSprinting_Sprinting_1 = CallFunc_IsSprinting_Sprinting_1;
	Parms.CallFunc_GetState_State_7 = CallFunc_GetState_State_7;
	Parms.CallFunc_Not_PreBool_ReturnValue_10 = CallFunc_Not_PreBool_ReturnValue_10;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_34 = CallFunc_EqualEqual_ByteByte_ReturnValue_34;
	Parms.CallFunc_IsSprinting_Sprinting_2 = CallFunc_IsSprinting_Sprinting_2;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_11 = CallFunc_Not_PreBool_ReturnValue_11;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.CallFunc_Is_Game_Paused__Paused = CallFunc_Is_Game_Paused__Paused;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue = CallFunc_NotEqual_ClassClass_ReturnValue;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue_1 = CallFunc_NotEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_Is_Game_Paused__Paused_1 = CallFunc_Is_Game_Paused__Paused_1;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue_2 = CallFunc_NotEqual_ClassClass_ReturnValue_2;
	Parms.CallFunc_Is_Game_Paused__Paused_2 = CallFunc_Is_Game_Paused__Paused_2;
	Parms.CallFunc_Is_Game_Paused__Paused_3 = CallFunc_Is_Game_Paused__Paused_3;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue_3 = CallFunc_NotEqual_ClassClass_ReturnValue_3;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue_4 = CallFunc_NotEqual_ClassClass_ReturnValue_4;
	Parms.CallFunc_Is_Game_Paused__Paused_4 = CallFunc_Is_Game_Paused__Paused_4;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_18 = CallFunc_MakeLiteralByte_ReturnValue_18;
	Parms.CallFunc_GetIsPressed_Result = CallFunc_GetIsPressed_Result;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.K2Node_InputActionEvent_Key_21 = K2Node_InputActionEvent_Key_21;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_35 = CallFunc_EqualEqual_ByteByte_ReturnValue_35;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_36 = CallFunc_EqualEqual_ByteByte_ReturnValue_36;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_13 = CallFunc_BooleanOR_ReturnValue_13;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.K2Node_CustomEvent_PrevMovementMode = K2Node_CustomEvent_PrevMovementMode;
	Parms.K2Node_CustomEvent_NewMovementMode = K2Node_CustomEvent_NewMovementMode;
	Parms.CallFunc_GetState_State_8 = CallFunc_GetState_State_8;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_37 = CallFunc_EqualEqual_ByteByte_ReturnValue_37;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_38 = CallFunc_EqualEqual_ByteByte_ReturnValue_38;
	Parms.CallFunc_BooleanAND_ReturnValue_6 = CallFunc_BooleanAND_ReturnValue_6;
	Parms.K2Node_CustomEvent_NotifyName_15 = K2Node_CustomEvent_NotifyName_15;
	Parms.K2Node_CustomEvent_NewState = K2Node_CustomEvent_NewState;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_39 = CallFunc_EqualEqual_ByteByte_ReturnValue_39;
	Parms.CallFunc_BooleanAND_ReturnValue_7 = CallFunc_BooleanAND_ReturnValue_7;
	Parms.K2Node_ComponentBoundEvent_NewAbility = K2Node_ComponentBoundEvent_NewAbility;
	Parms.CallFunc_IsValid_ReturnValue_15 = CallFunc_IsValid_ReturnValue_15;
	Parms.CallFunc_Not_PreBool_ReturnValue_12 = CallFunc_Not_PreBool_ReturnValue_12;
	Parms.CallFunc_BooleanAND_ReturnValue_8 = CallFunc_BooleanAND_ReturnValue_8;
	Parms.K2Node_InputActionEvent_Key_22 = K2Node_InputActionEvent_Key_22;
	Parms.CallFunc_Not_PreBool_ReturnValue_13 = CallFunc_Not_PreBool_ReturnValue_13;
	Parms.CallFunc_BooleanAND_ReturnValue_9 = CallFunc_BooleanAND_ReturnValue_9;
	Parms.CallFunc_BooleanAND_ReturnValue_10 = CallFunc_BooleanAND_ReturnValue_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_22 = K2Node_CreateDelegate_OutputDelegate_22;
	Parms.K2Node_CustomEvent_NotifyName_16 = K2Node_CustomEvent_NotifyName_16;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_23 = K2Node_CreateDelegate_OutputDelegate_23;
	Parms.CallFunc_GetIsCasting_Result = CallFunc_GetIsCasting_Result;
	Parms.CallFunc_GetIsPressed_Result_1 = CallFunc_GetIsPressed_Result_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_14 = CallFunc_Not_PreBool_ReturnValue_14;
	Parms.CallFunc_Not_PreBool_ReturnValue_15 = CallFunc_Not_PreBool_ReturnValue_15;
	Parms.CallFunc_GetControlRotation_ReturnValue = CallFunc_GetControlRotation_ReturnValue;
	Parms.CallFunc_GetIsPressed_Result_2 = CallFunc_GetIsPressed_Result_2;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Not_PreBool_ReturnValue_16 = CallFunc_Not_PreBool_ReturnValue_16;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_GetIsCasting_Result_1 = CallFunc_GetIsCasting_Result_1;
	Parms.CallFunc_GetRightVector_ReturnValue = CallFunc_GetRightVector_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_17 = CallFunc_Not_PreBool_ReturnValue_17;
	Parms.CallFunc_BooleanAND_ReturnValue_11 = CallFunc_BooleanAND_ReturnValue_11;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_19 = CallFunc_MakeLiteralByte_ReturnValue_19;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_40 = CallFunc_EqualEqual_ByteByte_ReturnValue_40;
	Parms.CallFunc_GetActivityValue_Value_1 = CallFunc_GetActivityValue_Value_1;
	Parms.CallFunc_IsAlive_Result_1 = CallFunc_IsAlive_Result_1;
	Parms.CallFunc_IsAlive_Result_2 = CallFunc_IsAlive_Result_2;
	Parms.CallFunc_ShouldRotateOnPressed_RotateOnPressed = CallFunc_ShouldRotateOnPressed_RotateOnPressed;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_41 = CallFunc_EqualEqual_ByteByte_ReturnValue_41;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_42 = CallFunc_EqualEqual_ByteByte_ReturnValue_42;
	Parms.CallFunc_BooleanOR_ReturnValue_14 = CallFunc_BooleanOR_ReturnValue_14;
	Parms.CallFunc_GetAbilityCrosshair_Crosshair = CallFunc_GetAbilityCrosshair_Crosshair;
	Parms.CallFunc_GetIsPressed_Result_3 = CallFunc_GetIsPressed_Result_3;
	Parms.CallFunc_CanAbilityBeCancelled_Result = CallFunc_CanAbilityBeCancelled_Result;
	Parms.K2Node_ComponentBoundEvent_Result = K2Node_ComponentBoundEvent_Result;
	Parms.K2Node_CustomEvent_NotifyName_17 = K2Node_CustomEvent_NotifyName_17;
	Parms.CallFunc_GetStoredKey_StoredKey = CallFunc_GetStoredKey_StoredKey;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_43 = CallFunc_EqualEqual_ByteByte_ReturnValue_43;
	Parms.CallFunc_BooleanAND_ReturnValue_12 = CallFunc_BooleanAND_ReturnValue_12;
	Parms.CallFunc_IsAbilityUsingCrosshair_Result = CallFunc_IsAbilityUsingCrosshair_Result;
	Parms.CallFunc_GetIsPressed_Result_4 = CallFunc_GetIsPressed_Result_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_24 = K2Node_CreateDelegate_OutputDelegate_24;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue_1 = CallFunc_K2_SetTimer_ReturnValue_1;
	Parms.CallFunc_K2_SetTimer_ReturnValue_2 = CallFunc_K2_SetTimer_ReturnValue_2;
	Parms.CallFunc_GetManaCost_Value = CallFunc_GetManaCost_Value;
	Parms.CallFunc_GetCurrentValue_CurrentValue_1 = CallFunc_GetCurrentValue_CurrentValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_IsAbilityValid_Valid_1 = CallFunc_IsAbilityValid_Valid_1;
	Parms.K2Node_CustomEvent_Ability = K2Node_CustomEvent_Ability;
	Parms.CallFunc_BooleanAND_ReturnValue_13 = CallFunc_BooleanAND_ReturnValue_13;
	Parms.CallFunc_BooleanAND_ReturnValue_14 = CallFunc_BooleanAND_ReturnValue_14;
	Parms.CallFunc_GetManaCost_Value_1 = CallFunc_GetManaCost_Value_1;
	Parms.K2Node_CustomEvent_NotifyName_18 = K2Node_CustomEvent_NotifyName_18;
	Parms.K2Node_ComponentBoundEvent_NewValue = K2Node_ComponentBoundEvent_NewValue;
	Parms.K2Node_ComponentBoundEvent_MaxValue = K2Node_ComponentBoundEvent_MaxValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Amount = K2Node_ComponentBoundEvent_Amount;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_9 = CallFunc_Multiply_FloatFloat_ReturnValue_9;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_20 = CallFunc_MakeLiteralByte_ReturnValue_20;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_44 = CallFunc_EqualEqual_ByteByte_ReturnValue_44;
	Parms.K2Node_DynamicCast_AsALS_Base_Character_BP_1 = K2Node_DynamicCast_AsALS_Base_Character_BP_1;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.K2Node_DynamicCast_AsALS_Base_Character_BP_2 = K2Node_DynamicCast_AsALS_Base_Character_BP_2;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_25 = K2Node_CreateDelegate_OutputDelegate_25;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_45 = CallFunc_EqualEqual_ByteByte_ReturnValue_45;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_46 = CallFunc_EqualEqual_ByteByte_ReturnValue_46;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_47 = CallFunc_EqualEqual_ByteByte_ReturnValue_47;
	Parms.CallFunc_BooleanOR_ReturnValue_15 = CallFunc_BooleanOR_ReturnValue_15;
	Parms.CallFunc_Get_Inventory_Items_of_Type_Inventory_Items = CallFunc_Get_Inventory_Items_of_Type_Inventory_Items;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_19 = K2Node_CustomEvent_NotifyName_19;
	Parms.K2Node_ClassDynamicCast_AsBP_Basic_Arrow_Projectile = K2Node_ClassDynamicCast_AsBP_Basic_Arrow_Projectile;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetStatValue_Value_2 = CallFunc_GetStatValue_Value_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_10 = CallFunc_Multiply_FloatFloat_ReturnValue_10;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_11 = CallFunc_Multiply_FloatFloat_ReturnValue_11;
	Parms.K2Node_SwitchEnum_CmpSuccess_8 = K2Node_SwitchEnum_CmpSuccess_8;
	Parms.CallFunc_CanBowAttack_Result = CallFunc_CanBowAttack_Result;
	Parms.CallFunc_CanBowAttack_Result_1 = CallFunc_CanBowAttack_Result_1;
	Parms.CallFunc_GetSpawnedArrowTransform_Transform = CallFunc_GetSpawnedArrowTransform_Transform;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_GetMontageForAction_Montage = CallFunc_GetMontageForAction_Montage;
	Parms.CallFunc_IsValid_ReturnValue_16 = CallFunc_IsValid_ReturnValue_16;
	Parms.CallFunc_PlayAnimMontage_ReturnValue = CallFunc_PlayAnimMontage_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetState_State_9 = CallFunc_GetState_State_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_26 = K2Node_CreateDelegate_OutputDelegate_26;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_48 = CallFunc_EqualEqual_ByteByte_ReturnValue_48;
	Parms.CallFunc_BooleanAND_ReturnValue_15 = CallFunc_BooleanAND_ReturnValue_15;
	Parms.CallFunc_BooleanAND_ReturnValue_16 = CallFunc_BooleanAND_ReturnValue_16;
	Parms.CallFunc_K2_SetTimer_ReturnValue_3 = CallFunc_K2_SetTimer_ReturnValue_3;
	Parms.CallFunc_CanBowAttack_Result_2 = CallFunc_CanBowAttack_Result_2;
	Parms.CallFunc_BooleanAND_ReturnValue_17 = CallFunc_BooleanAND_ReturnValue_17;
	Parms.CallFunc_K2_SetTimer_ReturnValue_4 = CallFunc_K2_SetTimer_ReturnValue_4;
	Parms.CallFunc_K2_SetTimer_ReturnValue_5 = CallFunc_K2_SetTimer_ReturnValue_5;
	Parms.CallFunc_K2_SetTimer_ReturnValue_6 = CallFunc_K2_SetTimer_ReturnValue_6;
	Parms.CallFunc_CanBowAttack_Result_3 = CallFunc_CanBowAttack_Result_3;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue_1 = CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_IsPackagedForDistribution_ReturnValue_2 = CallFunc_IsPackagedForDistribution_ReturnValue_2;
	Parms.CallFunc_IsPackagedForDistribution_ReturnValue_3 = CallFunc_IsPackagedForDistribution_ReturnValue_3;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue_1 = CallFunc_GetPlayerCameraManager_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_17 = CallFunc_IsValid_ReturnValue_17;
	Parms.K2Node_DynamicCast_AsALS_Player_Camera_Manager_1 = K2Node_DynamicCast_AsALS_Player_Camera_Manager_1;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_21 = CallFunc_MakeLiteralByte_ReturnValue_21;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_18 = CallFunc_IsValid_ReturnValue_18;
	Parms.CallFunc_GetActivityValue_Value_2 = CallFunc_GetActivityValue_Value_2;
	Parms.CallFunc_BooleanAND_ReturnValue_18 = CallFunc_BooleanAND_ReturnValue_18;
	Parms.K2Node_DynamicCast_AsALS_Player_Camera_Behavior = K2Node_DynamicCast_AsALS_Player_Camera_Behavior;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue_2 = CallFunc_GetPlayerCameraManager_ReturnValue_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_3 = CallFunc_Add_FloatFloat_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsALS_Player_Camera_Manager_2 = K2Node_DynamicCast_AsALS_Player_Camera_Manager_2;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue_1 = CallFunc_GetAnimInstance_ReturnValue_1;
	Parms.K2Node_InputActionEvent_Key_23 = K2Node_InputActionEvent_Key_23;
	Parms.CallFunc_IsValid_ReturnValue_19 = CallFunc_IsValid_ReturnValue_19;
	Parms.K2Node_DynamicCast_AsALS_Player_Camera_Behavior_1 = K2Node_DynamicCast_AsALS_Player_Camera_Behavior_1;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_1 = CallFunc_K2_AttachToComponent_ReturnValue_1;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_2 = CallFunc_K2_AttachToComponent_ReturnValue_2;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_3 = CallFunc_K2_AttachToComponent_ReturnValue_3;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_4 = CallFunc_K2_AttachToComponent_ReturnValue_4;
	Parms.K2Node_CustomEvent_NotifyName_20 = K2Node_CustomEvent_NotifyName_20;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_5 = CallFunc_K2_AttachToComponent_ReturnValue_5;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_6 = CallFunc_K2_AttachToComponent_ReturnValue_6;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_22 = CallFunc_MakeLiteralByte_ReturnValue_22;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_49 = CallFunc_EqualEqual_ByteByte_ReturnValue_49;
	Parms.K2Node_CreateDelegate_OutputDelegate_27 = K2Node_CreateDelegate_OutputDelegate_27;
	Parms.K2Node_InputActionEvent_Key_24 = K2Node_InputActionEvent_Key_24;
	Parms.K2Node_InputKeyEvent_Key_31 = K2Node_InputKeyEvent_Key_31;
	Parms.K2Node_InputKeyEvent_Key_32 = K2Node_InputKeyEvent_Key_32;
	Parms.K2Node_SwitchEnum_CmpSuccess_9 = K2Node_SwitchEnum_CmpSuccess_9;
	Parms.CallFunc_IsValid_ReturnValue_20 = CallFunc_IsValid_ReturnValue_20;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_21 = CallFunc_IsValid_ReturnValue_21;
	Parms.CallFunc_GetAnimInstance_ReturnValue_2 = CallFunc_GetAnimInstance_ReturnValue_2;
	Parms.K2Node_CustomEvent_NotifyName_21 = K2Node_CustomEvent_NotifyName_21;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_50 = CallFunc_EqualEqual_ByteByte_ReturnValue_50;
	Parms.CallFunc_GetState_State_10 = CallFunc_GetState_State_10;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_51 = CallFunc_EqualEqual_ByteByte_ReturnValue_51;
	Parms.CallFunc_BooleanAND_ReturnValue_19 = CallFunc_BooleanAND_ReturnValue_19;
	Parms.K2Node_SwitchEnum_CmpSuccess_10 = K2Node_SwitchEnum_CmpSuccess_10;
	Parms.K2Node_InputKeyEvent_Key_33 = K2Node_InputKeyEvent_Key_33;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_28 = K2Node_CreateDelegate_OutputDelegate_28;
	Parms.CallFunc_IsValid_ReturnValue_22 = CallFunc_IsValid_ReturnValue_22;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_23 = CallFunc_IsValid_ReturnValue_23;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_24 = CallFunc_IsValid_ReturnValue_24;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_25 = CallFunc_IsValid_ReturnValue_25;
	Parms.CallFunc_GetAnimInstance_ReturnValue_3 = CallFunc_GetAnimInstance_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_52 = CallFunc_EqualEqual_ByteByte_ReturnValue_52;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_23 = CallFunc_MakeLiteralByte_ReturnValue_23;
	Parms.CallFunc_IsAlive_Result_3 = CallFunc_IsAlive_Result_3;
	Parms.CallFunc_GetActivityValue_Value_3 = CallFunc_GetActivityValue_Value_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_18 = CallFunc_Not_PreBool_ReturnValue_18;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_7 = CallFunc_K2_AttachToComponent_ReturnValue_7;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_8 = CallFunc_K2_AttachToComponent_ReturnValue_8;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_9 = CallFunc_K2_AttachToComponent_ReturnValue_9;
	Parms.K2Node_CustomEvent_NotifyName_22 = K2Node_CustomEvent_NotifyName_22;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_10 = CallFunc_K2_AttachToComponent_ReturnValue_10;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_11 = CallFunc_K2_AttachToComponent_ReturnValue_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_29 = K2Node_CreateDelegate_OutputDelegate_29;
	Parms.K2Node_SwitchEnum_CmpSuccess_11 = K2Node_SwitchEnum_CmpSuccess_11;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_53 = CallFunc_EqualEqual_ByteByte_ReturnValue_53;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_12 = CallFunc_K2_AttachToComponent_ReturnValue_12;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_13 = CallFunc_K2_AttachToComponent_ReturnValue_13;
	Parms.K2Node_SwitchEnum_CmpSuccess_12 = K2Node_SwitchEnum_CmpSuccess_12;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_14 = CallFunc_K2_AttachToComponent_ReturnValue_14;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_15 = CallFunc_K2_AttachToComponent_ReturnValue_15;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_24 = CallFunc_MakeLiteralByte_ReturnValue_24;
	Parms.K2Node_CustomEvent_NotifyName_23 = K2Node_CustomEvent_NotifyName_23;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_54 = CallFunc_EqualEqual_ByteByte_ReturnValue_54;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_25 = CallFunc_MakeLiteralByte_ReturnValue_25;
	Parms.CallFunc_IsValid_ReturnValue_26 = CallFunc_IsValid_ReturnValue_26;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_55 = CallFunc_EqualEqual_ByteByte_ReturnValue_55;
	Parms.CallFunc_BooleanAND_ReturnValue_20 = CallFunc_BooleanAND_ReturnValue_20;
	Parms.CallFunc_BooleanAND_ReturnValue_21 = CallFunc_BooleanAND_ReturnValue_21;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_26 = CallFunc_MakeLiteralByte_ReturnValue_26;
	Parms.CallFunc_GetActivityValue_Value_4 = CallFunc_GetActivityValue_Value_4;
	Parms.CallFunc_BooleanAND_ReturnValue_22 = CallFunc_BooleanAND_ReturnValue_22;
	Parms.CallFunc_BooleanAND_ReturnValue_23 = CallFunc_BooleanAND_ReturnValue_23;
	Parms.CallFunc_BooleanAND_ReturnValue_24 = CallFunc_BooleanAND_ReturnValue_24;
	Parms.CallFunc_Is_UI_Open__Condition_6 = CallFunc_Is_UI_Open__Condition_6;
	Parms.CallFunc_Is_UI_Open__Condition_7 = CallFunc_Is_UI_Open__Condition_7;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_27 = CallFunc_MakeLiteralByte_ReturnValue_27;
	Parms.K2Node_CreateDelegate_OutputDelegate_30 = K2Node_CreateDelegate_OutputDelegate_30;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_56 = CallFunc_EqualEqual_ByteByte_ReturnValue_56;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_57 = CallFunc_EqualEqual_ByteByte_ReturnValue_57;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_28 = CallFunc_MakeLiteralByte_ReturnValue_28;
	Parms.CallFunc_GetActivityValue_Value_5 = CallFunc_GetActivityValue_Value_5;
	Parms.CallFunc_Not_PreBool_ReturnValue_19 = CallFunc_Not_PreBool_ReturnValue_19;
	Parms.CallFunc_BooleanAND_ReturnValue_25 = CallFunc_BooleanAND_ReturnValue_25;
	Parms.CallFunc_BooleanAND_ReturnValue_26 = CallFunc_BooleanAND_ReturnValue_26;
	Parms.CallFunc_GetIsPressed_Result_5 = CallFunc_GetIsPressed_Result_5;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_16 = CallFunc_K2_AttachToComponent_ReturnValue_16;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_17 = CallFunc_K2_AttachToComponent_ReturnValue_17;
	Parms.K2Node_CustomEvent_NotifyName_24 = K2Node_CustomEvent_NotifyName_24;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_18 = CallFunc_K2_AttachToComponent_ReturnValue_18;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_19 = CallFunc_K2_AttachToComponent_ReturnValue_19;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_20 = CallFunc_K2_AttachToComponent_ReturnValue_20;
	Parms.K2Node_CreateDelegate_OutputDelegate_31 = K2Node_CreateDelegate_OutputDelegate_31;
	Parms.K2Node_SwitchEnum_CmpSuccess_13 = K2Node_SwitchEnum_CmpSuccess_13;
	Parms.CallFunc_GetCombatType_Type = CallFunc_GetCombatType_Type;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_2 = CallFunc_NotEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_58 = CallFunc_EqualEqual_ByteByte_ReturnValue_58;
	Parms.K2Node_CustomEvent_NewType = K2Node_CustomEvent_NewType;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_3 = CallFunc_NotEqual_ByteByte_ReturnValue_3;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_BooleanAND_ReturnValue_27 = CallFunc_BooleanAND_ReturnValue_27;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.K2Node_CustomEvent_loaded_save_file = K2Node_CustomEvent_loaded_save_file;
	Parms.Temp_name_Variable_5 = Temp_name_Variable_5;
	Parms.K2Node_ComponentBoundEvent_loaded_save_file = K2Node_ComponentBoundEvent_loaded_save_file;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_59 = CallFunc_EqualEqual_ByteByte_ReturnValue_59;
	Parms.CallFunc_BooleanOR_ReturnValue_16 = CallFunc_BooleanOR_ReturnValue_16;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;
	Parms.CallFunc_Not_PreBool_ReturnValue_20 = CallFunc_Not_PreBool_ReturnValue_20;
	Parms.CallFunc_IsValid_ReturnValue_27 = CallFunc_IsValid_ReturnValue_27;
	Parms.CallFunc_GetAnimInstance_ReturnValue_4 = CallFunc_GetAnimInstance_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsBP_Char_Interface = K2Node_DynamicCast_AsBP_Char_Interface;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_21 = CallFunc_K2_AttachToComponent_ReturnValue_21;
	Parms.K2Node_CustomEvent_NotifyName_25 = K2Node_CustomEvent_NotifyName_25;
	Parms.CallFunc_GetPlayerController_ReturnValue_7 = CallFunc_GetPlayerController_ReturnValue_7;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_RLerp_ReturnValue = CallFunc_RLerp_ReturnValue;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.CallFunc_K2_SetActorLocationAndRotation_SweepHitResult = CallFunc_K2_SetActorLocationAndRotation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocationAndRotation_ReturnValue = CallFunc_K2_SetActorLocationAndRotation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_32 = K2Node_CreateDelegate_OutputDelegate_32;
	Parms.CallFunc_GetAnimInstance_ReturnValue_5 = CallFunc_GetAnimInstance_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsBP_Char_Interface_1 = K2Node_DynamicCast_AsBP_Char_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_15 = K2Node_DynamicCast_bSuccess_15;
	Parms.K2Node_DynamicCast_AsBP_Char_Interface_2 = K2Node_DynamicCast_AsBP_Char_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_16 = K2Node_DynamicCast_bSuccess_16;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue_1 = CallFunc_K2_GetActorRotation_ReturnValue_1;
	Parms.K2Node_CustomEvent_OnCarLeft = K2Node_CustomEvent_OnCarLeft;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue_1 = CallFunc_K2_GetComponentRotation_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_RLerp_ReturnValue_1 = CallFunc_RLerp_ReturnValue_1;
	Parms.CallFunc_VLerp_ReturnValue_1 = CallFunc_VLerp_ReturnValue_1;
	Parms.CallFunc_K2_SetActorLocationAndRotation_SweepHitResult_1 = CallFunc_K2_SetActorLocationAndRotation_SweepHitResult_1;
	Parms.CallFunc_K2_SetActorLocationAndRotation_ReturnValue_1 = CallFunc_K2_SetActorLocationAndRotation_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_8 = CallFunc_GetPlayerController_ReturnValue_8;
	Parms.CallFunc_GetPlayerController_ReturnValue_9 = CallFunc_GetPlayerController_ReturnValue_9;
	Parms.K2Node_Event_OnLeft_ = K2Node_Event_OnLeft_;
	Parms.K2Node_Event_Mount = K2Node_Event_Mount;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_BreakVector_X_2 = CallFunc_BreakVector_X_2;
	Parms.CallFunc_BreakVector_Y_2 = CallFunc_BreakVector_Y_2;
	Parms.CallFunc_BreakVector_Z_2 = CallFunc_BreakVector_Z_2;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue_2 = CallFunc_K2_GetComponentRotation_ReturnValue_2;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_2 = CallFunc_K2_GetComponentLocation_ReturnValue_2;
	Parms.CallFunc_BreakRotator_Roll_2 = CallFunc_BreakRotator_Roll_2;
	Parms.CallFunc_BreakRotator_Pitch_2 = CallFunc_BreakRotator_Pitch_2;
	Parms.CallFunc_BreakRotator_Yaw_2 = CallFunc_BreakRotator_Yaw_2;
	Parms.CallFunc_BreakVector_X_3 = CallFunc_BreakVector_X_3;
	Parms.CallFunc_BreakVector_Y_3 = CallFunc_BreakVector_Y_3;
	Parms.CallFunc_BreakVector_Z_3 = CallFunc_BreakVector_Z_3;
	Parms.CallFunc_MakeRotator_ReturnValue_2 = CallFunc_MakeRotator_ReturnValue_2;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue_2 = CallFunc_K2_GetActorRotation_ReturnValue_2;
	Parms.CallFunc_VLerp_ReturnValue_2 = CallFunc_VLerp_ReturnValue_2;
	Parms.CallFunc_RLerp_ReturnValue_2 = CallFunc_RLerp_ReturnValue_2;
	Parms.CallFunc_K2_SetActorLocationAndRotation_SweepHitResult_2 = CallFunc_K2_SetActorLocationAndRotation_SweepHitResult_2;
	Parms.CallFunc_K2_SetActorLocationAndRotation_ReturnValue_2 = CallFunc_K2_SetActorLocationAndRotation_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


