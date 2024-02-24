#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIActionArsenalComponent.AIActionArsenalComponent_C
// (None)

class UClass* UAIActionArsenalComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIActionArsenalComponent_C");

	return Clss;
}


// AIActionArsenalComponent_C AIActionArsenalComponent.Default__AIActionArsenalComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIActionArsenalComponent_C* UAIActionArsenalComponent_C::GetDefaultObj()
{
	static class UAIActionArsenalComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIActionArsenalComponent_C*>(UAIActionArsenalComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIActionArsenalComponent.AIActionArsenalComponent_C.GetBulletRemain
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETTLAIWeaponPart        WeaponPart                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetBulletRemain_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

int32 UAIActionArsenalComponent_C::GetBulletRemain(enum class ETTLAIWeaponPart WeaponPart, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_GetBulletRemain_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionArsenalComponent_C", "GetBulletRemain");

	Params::UAIActionArsenalComponent_C_GetBulletRemain_Params Parms{};

	Parms.WeaponPart = WeaponPart;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetBulletRemain_ReturnValue = CallFunc_GetBulletRemain_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIActionArsenalComponent.AIActionArsenalComponent_C.IsWeaponConsumeFemto
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETTLAIWeaponEnum        Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsWeaponConsumeFemto_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsWeaponConsumeFemto_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsWeaponConsumeFemto_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsWeaponConsumeFemto_ReturnValue3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsWeaponConsumeFemto_ReturnValue4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsWeaponConsumeFemto_ReturnValue5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsWeaponConsumeFemto_ReturnValue6                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsWeaponConsumeFemto_ReturnValue7                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsWeaponConsumeFemto_ReturnValue8                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsWeaponConsumeFemto_ReturnValue9                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsWeaponConsumeFemto_ReturnValue10                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue5                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAIActionArsenalComponent_C::IsWeaponConsumeFemto(enum class ETTLAIWeaponEnum Type, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_Greater_FloatFloat_ReturnValue2, bool CallFunc_Greater_FloatFloat_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_IsWeaponConsumeFemto_ReturnValue, bool CallFunc_IsWeaponConsumeFemto_ReturnValue1, bool CallFunc_IsWeaponConsumeFemto_ReturnValue2, bool CallFunc_IsWeaponConsumeFemto_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsWeaponConsumeFemto_ReturnValue4, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_IsWeaponConsumeFemto_ReturnValue5, bool CallFunc_IsWeaponConsumeFemto_ReturnValue6, bool CallFunc_IsWeaponConsumeFemto_ReturnValue7, bool CallFunc_IsWeaponConsumeFemto_ReturnValue8, bool CallFunc_IsWeaponConsumeFemto_ReturnValue9, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_IsWeaponConsumeFemto_ReturnValue10, bool CallFunc_BooleanOR_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue4, bool CallFunc_BooleanOR_ReturnValue5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionArsenalComponent_C", "IsWeaponConsumeFemto");

	Params::UAIActionArsenalComponent_C_IsWeaponConsumeFemto_Params Parms{};

	Parms.Type = Type;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue1 = CallFunc_Greater_FloatFloat_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue2 = CallFunc_Greater_FloatFloat_ReturnValue2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue3 = CallFunc_Greater_FloatFloat_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.CallFunc_IsWeaponConsumeFemto_ReturnValue = CallFunc_IsWeaponConsumeFemto_ReturnValue;
	Parms.CallFunc_IsWeaponConsumeFemto_ReturnValue1 = CallFunc_IsWeaponConsumeFemto_ReturnValue1;
	Parms.CallFunc_IsWeaponConsumeFemto_ReturnValue2 = CallFunc_IsWeaponConsumeFemto_ReturnValue2;
	Parms.CallFunc_IsWeaponConsumeFemto_ReturnValue3 = CallFunc_IsWeaponConsumeFemto_ReturnValue3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsWeaponConsumeFemto_ReturnValue4 = CallFunc_IsWeaponConsumeFemto_ReturnValue4;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.CallFunc_IsWeaponConsumeFemto_ReturnValue5 = CallFunc_IsWeaponConsumeFemto_ReturnValue5;
	Parms.CallFunc_IsWeaponConsumeFemto_ReturnValue6 = CallFunc_IsWeaponConsumeFemto_ReturnValue6;
	Parms.CallFunc_IsWeaponConsumeFemto_ReturnValue7 = CallFunc_IsWeaponConsumeFemto_ReturnValue7;
	Parms.CallFunc_IsWeaponConsumeFemto_ReturnValue8 = CallFunc_IsWeaponConsumeFemto_ReturnValue8;
	Parms.CallFunc_IsWeaponConsumeFemto_ReturnValue9 = CallFunc_IsWeaponConsumeFemto_ReturnValue9;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.CallFunc_IsWeaponConsumeFemto_ReturnValue10 = CallFunc_IsWeaponConsumeFemto_ReturnValue10;
	Parms.CallFunc_BooleanOR_ReturnValue3 = CallFunc_BooleanOR_ReturnValue3;
	Parms.CallFunc_BooleanOR_ReturnValue4 = CallFunc_BooleanOR_ReturnValue4;
	Parms.CallFunc_BooleanOR_ReturnValue5 = CallFunc_BooleanOR_ReturnValue5;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIActionArsenalComponent.AIActionArsenalComponent_C.StartMirageBP
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UBasicStatusComponent_C*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMirageComponent_C*          CallFunc_GetComponentByClass_ReturnValue1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SpawnMirage_SuccessMirage                               (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAIActionArsenalComponent_C::StartMirageBP(class UBasicStatusComponent_C* CallFunc_GetComponentByClass_ReturnValue, class UMirageComponent_C* CallFunc_GetComponentByClass_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_SpawnMirage_SuccessMirage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionArsenalComponent_C", "StartMirageBP");

	Params::UAIActionArsenalComponent_C_StartMirageBP_Params Parms{};

	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue1 = CallFunc_GetComponentByClass_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_SpawnMirage_SuccessMirage = CallFunc_SpawnMirage_SuccessMirage;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIActionArsenalComponent.AIActionArsenalComponent_C.SetIsAttackFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeft                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Flag                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIActionArsenalComponent_C::SetIsAttackFlag(bool IsLeft, bool Flag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionArsenalComponent_C", "SetIsAttackFlag");

	Params::UAIActionArsenalComponent_C_SetIsAttackFlag_Params Parms{};

	Parms.IsLeft = IsLeft;
	Parms.Flag = Flag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIActionArsenalComponent.AIActionArsenalComponent_C.SetIsShootFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeft                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Flag                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIActionArsenalComponent_C::SetIsShootFlag(bool IsLeft, bool Flag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionArsenalComponent_C", "SetIsShootFlag");

	Params::UAIActionArsenalComponent_C_SetIsShootFlag_Params Parms{};

	Parms.IsLeft = IsLeft;
	Parms.Flag = Flag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIActionArsenalComponent.AIActionArsenalComponent_C.FireWeaponImpl
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALongRangeWeaponCommon_C*    LongRangeWeapon                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACloseRangeWeaponCommon_C*   CloseRangeWeapon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLWeaponShield*            ShieldWeapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLeft                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               MontageCurrentSectionIsStart                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               RangeIsValid                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsPlayingAttackAnimMontage                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetAttackFlag_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetAttackFlag_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckDoubleAttackCpp_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetActorBounds_Origin                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorBounds_BoxExtent                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Conv_VectorToVector2D_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize2D_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScaledCapsuleRadius_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UArsenal_AnimBP_C*           K2Node_DynamicCast_AsArsenal_Anim_BP                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Montage_GetCurrentSection_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Montage_GetCurrentSection_ReturnValue1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Montage_IsPlaying_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Montage_IsPlaying_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ProcessFireInput_Result                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIActionArsenalComponent_C::FireWeaponImpl(class ALongRangeWeaponCommon_C* LongRangeWeapon, class ACloseRangeWeaponCommon_C* CloseRangeWeapon, class ATTLWeaponShield* ShieldWeapon, bool IsLeft, bool MontageCurrentSectionIsStart, bool RangeIsValid, bool IsPlayingAttackAnimMontage, bool CallFunc_GetAttackFlag_ReturnValue, bool CallFunc_GetAttackFlag_ReturnValue1, bool CallFunc_CheckDoubleAttackCpp_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, float CallFunc_VSize2D_ReturnValue, float CallFunc_GetScaledCapsuleRadius_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue1, class UArsenal_AnimBP_C* K2Node_DynamicCast_AsArsenal_Anim_BP, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class FName CallFunc_Montage_GetCurrentSection_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue3, class FName CallFunc_Montage_GetCurrentSection_ReturnValue1, bool CallFunc_EqualEqual_NameName_ReturnValue1, bool CallFunc_Montage_IsPlaying_ReturnValue, bool CallFunc_Montage_IsPlaying_ReturnValue1, bool CallFunc_ProcessFireInput_Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionArsenalComponent_C", "FireWeaponImpl");

	Params::UAIActionArsenalComponent_C_FireWeaponImpl_Params Parms{};

	Parms.LongRangeWeapon = LongRangeWeapon;
	Parms.CloseRangeWeapon = CloseRangeWeapon;
	Parms.ShieldWeapon = ShieldWeapon;
	Parms.IsLeft = IsLeft;
	Parms.MontageCurrentSectionIsStart = MontageCurrentSectionIsStart;
	Parms.RangeIsValid = RangeIsValid;
	Parms.IsPlayingAttackAnimMontage = IsPlayingAttackAnimMontage;
	Parms.CallFunc_GetAttackFlag_ReturnValue = CallFunc_GetAttackFlag_ReturnValue;
	Parms.CallFunc_GetAttackFlag_ReturnValue1 = CallFunc_GetAttackFlag_ReturnValue1;
	Parms.CallFunc_CheckDoubleAttackCpp_ReturnValue = CallFunc_CheckDoubleAttackCpp_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.CallFunc_GetActorBounds_Origin = CallFunc_GetActorBounds_Origin;
	Parms.CallFunc_GetActorBounds_BoxExtent = CallFunc_GetActorBounds_BoxExtent;
	Parms.CallFunc_Conv_VectorToVector2D_ReturnValue = CallFunc_Conv_VectorToVector2D_ReturnValue;
	Parms.CallFunc_VSize2D_ReturnValue = CallFunc_VSize2D_ReturnValue;
	Parms.CallFunc_GetScaledCapsuleRadius_ReturnValue = CallFunc_GetScaledCapsuleRadius_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue1 = CallFunc_Add_FloatFloat_ReturnValue1;
	Parms.K2Node_DynamicCast_AsArsenal_Anim_BP = K2Node_DynamicCast_AsArsenal_Anim_BP;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Montage_GetCurrentSection_ReturnValue = CallFunc_Montage_GetCurrentSection_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue3 = CallFunc_BooleanAND_ReturnValue3;
	Parms.CallFunc_Montage_GetCurrentSection_ReturnValue1 = CallFunc_Montage_GetCurrentSection_ReturnValue1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue1 = CallFunc_EqualEqual_NameName_ReturnValue1;
	Parms.CallFunc_Montage_IsPlaying_ReturnValue = CallFunc_Montage_IsPlaying_ReturnValue;
	Parms.CallFunc_Montage_IsPlaying_ReturnValue1 = CallFunc_Montage_IsPlaying_ReturnValue1;
	Parms.CallFunc_ProcessFireInput_Result = CallFunc_ProcessFireInput_Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIActionArsenalComponent.AIActionArsenalComponent_C.GetIsPunch
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETTLAIWeaponEnum        Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsPunch_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPunchWeapon_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPunchWeapon_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAIActionArsenalComponent_C::GetIsPunch(enum class ETTLAIWeaponEnum Type, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GetIsPunch_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsPunchWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsPunchWeapon_ReturnValue1, bool CallFunc_IsValid_ReturnValue4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionArsenalComponent_C", "GetIsPunch");

	Params::UAIActionArsenalComponent_C_GetIsPunch_Params Parms{};

	Parms.Type = Type;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetIsPunch_ReturnValue = CallFunc_GetIsPunch_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsPunchWeapon_ReturnValue = CallFunc_IsPunchWeapon_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_IsPunchWeapon_ReturnValue1 = CallFunc_IsPunchWeapon_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIActionArsenalComponent.AIActionArsenalComponent_C.GetWeaponTypeOfLeftRight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsValidWeapon                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLWeaponType          WeaponType                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIActionArsenalComponent_C::GetWeaponTypeOfLeftRight(bool* IsValidWeapon, enum class ETTLWeaponType* WeaponType, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_IsValid_ReturnValue5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionArsenalComponent_C", "GetWeaponTypeOfLeftRight");

	Params::UAIActionArsenalComponent_C_GetWeaponTypeOfLeftRight_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.CallFunc_IsValid_ReturnValue5 = CallFunc_IsValid_ReturnValue5;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValidWeapon != nullptr)
		*IsValidWeapon = Parms.IsValidWeapon;

	if (WeaponType != nullptr)
		*WeaponType = Parms.WeaponType;

}


// Function AIActionArsenalComponent.AIActionArsenalComponent_C.GetWeaponType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETTLAIWeaponEnum        Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLWeaponType          ReturnType                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDestroyedParts_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLWeaponType          CallFunc_GetWeaponType_returnType                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetWeaponType_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDestroyedParts_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetWeaponTypeOfLeftRight_IsValidWeapon                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLWeaponType          CallFunc_GetWeaponTypeOfLeftRight_WeaponType                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetWeaponTypeOfSupportWeapon_IsValidWeapon              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLWeaponType          CallFunc_GetWeaponTypeOfSupportWeapon_WeaponType                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetWeaponTypeOfShoulderWeapon_IsValidWeapon             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLWeaponType          CallFunc_GetWeaponTypeOfShoulderWeapon_WeaponType                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetWeaponTypeOfShieldOnLeft_IsValidWeapon               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLWeaponType          CallFunc_GetWeaponTypeOfShieldOnLeft_WeaponType                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetWeaponTypeOfCloseRangeWeaponOnLeft_IsValidWeapon     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLWeaponType          CallFunc_GetWeaponTypeOfCloseRangeWeaponOnLeft_WeaponType        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetWeaponTypeOfLongRangeWeaponOnLeft_IsValidWeapon      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLWeaponType          CallFunc_GetWeaponTypeOfLongRangeWeaponOnLeft_WeaponType         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetWeaponTypeOfShieldOnRight_IsValidWeapon              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLWeaponType          CallFunc_GetWeaponTypeOfShieldOnRight_WeaponType                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetWeaponTypeOfCloseRangeWeaponOnRight_IsValidWeapon    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLWeaponType          CallFunc_GetWeaponTypeOfCloseRangeWeaponOnRight_WeaponType       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetWeaponTypeOfLongRangeWeaponOnRight_IsValidWeapon     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLWeaponType          CallFunc_GetWeaponTypeOfLongRangeWeaponOnRight_WeaponType        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIActionArsenalComponent_C::GetWeaponType(enum class ETTLAIWeaponEnum Type, enum class ETTLWeaponType* ReturnType, bool CallFunc_IsDestroyedParts_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class ETTLWeaponType CallFunc_GetWeaponType_returnType, bool CallFunc_GetWeaponType_ReturnValue, bool CallFunc_IsDestroyedParts_ReturnValue1, bool CallFunc_GetWeaponTypeOfLeftRight_IsValidWeapon, enum class ETTLWeaponType CallFunc_GetWeaponTypeOfLeftRight_WeaponType, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GetWeaponTypeOfSupportWeapon_IsValidWeapon, enum class ETTLWeaponType CallFunc_GetWeaponTypeOfSupportWeapon_WeaponType, bool CallFunc_GetWeaponTypeOfShoulderWeapon_IsValidWeapon, enum class ETTLWeaponType CallFunc_GetWeaponTypeOfShoulderWeapon_WeaponType, bool CallFunc_GetWeaponTypeOfShieldOnLeft_IsValidWeapon, enum class ETTLWeaponType CallFunc_GetWeaponTypeOfShieldOnLeft_WeaponType, bool CallFunc_GetWeaponTypeOfCloseRangeWeaponOnLeft_IsValidWeapon, enum class ETTLWeaponType CallFunc_GetWeaponTypeOfCloseRangeWeaponOnLeft_WeaponType, bool CallFunc_GetWeaponTypeOfLongRangeWeaponOnLeft_IsValidWeapon, enum class ETTLWeaponType CallFunc_GetWeaponTypeOfLongRangeWeaponOnLeft_WeaponType, bool CallFunc_GetWeaponTypeOfShieldOnRight_IsValidWeapon, enum class ETTLWeaponType CallFunc_GetWeaponTypeOfShieldOnRight_WeaponType, bool CallFunc_GetWeaponTypeOfCloseRangeWeaponOnRight_IsValidWeapon, enum class ETTLWeaponType CallFunc_GetWeaponTypeOfCloseRangeWeaponOnRight_WeaponType, bool CallFunc_GetWeaponTypeOfLongRangeWeaponOnRight_IsValidWeapon, enum class ETTLWeaponType CallFunc_GetWeaponTypeOfLongRangeWeaponOnRight_WeaponType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionArsenalComponent_C", "GetWeaponType");

	Params::UAIActionArsenalComponent_C_GetWeaponType_Params Parms{};

	Parms.Type = Type;
	Parms.CallFunc_IsDestroyedParts_ReturnValue = CallFunc_IsDestroyedParts_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetWeaponType_returnType = CallFunc_GetWeaponType_returnType;
	Parms.CallFunc_GetWeaponType_ReturnValue = CallFunc_GetWeaponType_ReturnValue;
	Parms.CallFunc_IsDestroyedParts_ReturnValue1 = CallFunc_IsDestroyedParts_ReturnValue1;
	Parms.CallFunc_GetWeaponTypeOfLeftRight_IsValidWeapon = CallFunc_GetWeaponTypeOfLeftRight_IsValidWeapon;
	Parms.CallFunc_GetWeaponTypeOfLeftRight_WeaponType = CallFunc_GetWeaponTypeOfLeftRight_WeaponType;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetWeaponTypeOfSupportWeapon_IsValidWeapon = CallFunc_GetWeaponTypeOfSupportWeapon_IsValidWeapon;
	Parms.CallFunc_GetWeaponTypeOfSupportWeapon_WeaponType = CallFunc_GetWeaponTypeOfSupportWeapon_WeaponType;
	Parms.CallFunc_GetWeaponTypeOfShoulderWeapon_IsValidWeapon = CallFunc_GetWeaponTypeOfShoulderWeapon_IsValidWeapon;
	Parms.CallFunc_GetWeaponTypeOfShoulderWeapon_WeaponType = CallFunc_GetWeaponTypeOfShoulderWeapon_WeaponType;
	Parms.CallFunc_GetWeaponTypeOfShieldOnLeft_IsValidWeapon = CallFunc_GetWeaponTypeOfShieldOnLeft_IsValidWeapon;
	Parms.CallFunc_GetWeaponTypeOfShieldOnLeft_WeaponType = CallFunc_GetWeaponTypeOfShieldOnLeft_WeaponType;
	Parms.CallFunc_GetWeaponTypeOfCloseRangeWeaponOnLeft_IsValidWeapon = CallFunc_GetWeaponTypeOfCloseRangeWeaponOnLeft_IsValidWeapon;
	Parms.CallFunc_GetWeaponTypeOfCloseRangeWeaponOnLeft_WeaponType = CallFunc_GetWeaponTypeOfCloseRangeWeaponOnLeft_WeaponType;
	Parms.CallFunc_GetWeaponTypeOfLongRangeWeaponOnLeft_IsValidWeapon = CallFunc_GetWeaponTypeOfLongRangeWeaponOnLeft_IsValidWeapon;
	Parms.CallFunc_GetWeaponTypeOfLongRangeWeaponOnLeft_WeaponType = CallFunc_GetWeaponTypeOfLongRangeWeaponOnLeft_WeaponType;
	Parms.CallFunc_GetWeaponTypeOfShieldOnRight_IsValidWeapon = CallFunc_GetWeaponTypeOfShieldOnRight_IsValidWeapon;
	Parms.CallFunc_GetWeaponTypeOfShieldOnRight_WeaponType = CallFunc_GetWeaponTypeOfShieldOnRight_WeaponType;
	Parms.CallFunc_GetWeaponTypeOfCloseRangeWeaponOnRight_IsValidWeapon = CallFunc_GetWeaponTypeOfCloseRangeWeaponOnRight_IsValidWeapon;
	Parms.CallFunc_GetWeaponTypeOfCloseRangeWeaponOnRight_WeaponType = CallFunc_GetWeaponTypeOfCloseRangeWeaponOnRight_WeaponType;
	Parms.CallFunc_GetWeaponTypeOfLongRangeWeaponOnRight_IsValidWeapon = CallFunc_GetWeaponTypeOfLongRangeWeaponOnRight_IsValidWeapon;
	Parms.CallFunc_GetWeaponTypeOfLongRangeWeaponOnRight_WeaponType = CallFunc_GetWeaponTypeOfLongRangeWeaponOnRight_WeaponType;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnType != nullptr)
		*ReturnType = Parms.ReturnType;

	return Parms.ReturnValue;

}


// Function AIActionArsenalComponent.AIActionArsenalComponent_C.GetWeaponTypeOfShieldOnRight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsValidWeapon                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLWeaponType          WeaponType                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIActionArsenalComponent_C::GetWeaponTypeOfShieldOnRight(bool* IsValidWeapon, enum class ETTLWeaponType* WeaponType, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionArsenalComponent_C", "GetWeaponTypeOfShieldOnRight");

	Params::UAIActionArsenalComponent_C_GetWeaponTypeOfShieldOnRight_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValidWeapon != nullptr)
		*IsValidWeapon = Parms.IsValidWeapon;

	if (WeaponType != nullptr)
		*WeaponType = Parms.WeaponType;

}


// Function AIActionArsenalComponent.AIActionArsenalComponent_C.GetWeaponTypeOfShieldOnLeft
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsValidWeapon                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLWeaponType          WeaponType                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIActionArsenalComponent_C::GetWeaponTypeOfShieldOnLeft(bool* IsValidWeapon, enum class ETTLWeaponType* WeaponType, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionArsenalComponent_C", "GetWeaponTypeOfShieldOnLeft");

	Params::UAIActionArsenalComponent_C_GetWeaponTypeOfShieldOnLeft_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValidWeapon != nullptr)
		*IsValidWeapon = Parms.IsValidWeapon;

	if (WeaponType != nullptr)
		*WeaponType = Parms.WeaponType;

}


// Function AIActionArsenalComponent.AIActionArsenalComponent_C.GetWeaponTypeOfSupportWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsValidWeapon                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLWeaponType          WeaponType                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIActionArsenalComponent_C::GetWeaponTypeOfSupportWeapon(bool* IsValidWeapon, enum class ETTLWeaponType* WeaponType, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionArsenalComponent_C", "GetWeaponTypeOfSupportWeapon");

	Params::UAIActionArsenalComponent_C_GetWeaponTypeOfSupportWeapon_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValidWeapon != nullptr)
		*IsValidWeapon = Parms.IsValidWeapon;

	if (WeaponType != nullptr)
		*WeaponType = Parms.WeaponType;

}


// Function AIActionArsenalComponent.AIActionArsenalComponent_C.GetWeaponTypeOfShoulderWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsValidWeapon                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLWeaponType          WeaponType                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIActionArsenalComponent_C::GetWeaponTypeOfShoulderWeapon(bool* IsValidWeapon, enum class ETTLWeaponType* WeaponType, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionArsenalComponent_C", "GetWeaponTypeOfShoulderWeapon");

	Params::UAIActionArsenalComponent_C_GetWeaponTypeOfShoulderWeapon_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValidWeapon != nullptr)
		*IsValidWeapon = Parms.IsValidWeapon;

	if (WeaponType != nullptr)
		*WeaponType = Parms.WeaponType;

}


// Function AIActionArsenalComponent.AIActionArsenalComponent_C.GetWeaponTypeOfCloseRangeWeaponOnRight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsValidWeapon                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLWeaponType          WeaponType                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIActionArsenalComponent_C::GetWeaponTypeOfCloseRangeWeaponOnRight(bool* IsValidWeapon, enum class ETTLWeaponType* WeaponType, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionArsenalComponent_C", "GetWeaponTypeOfCloseRangeWeaponOnRight");

	Params::UAIActionArsenalComponent_C_GetWeaponTypeOfCloseRangeWeaponOnRight_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValidWeapon != nullptr)
		*IsValidWeapon = Parms.IsValidWeapon;

	if (WeaponType != nullptr)
		*WeaponType = Parms.WeaponType;

}


// Function AIActionArsenalComponent.AIActionArsenalComponent_C.GetWeaponTypeOfCloseRangeWeaponOnLeft
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsValidWeapon                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLWeaponType          WeaponType                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIActionArsenalComponent_C::GetWeaponTypeOfCloseRangeWeaponOnLeft(bool* IsValidWeapon, enum class ETTLWeaponType* WeaponType, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionArsenalComponent_C", "GetWeaponTypeOfCloseRangeWeaponOnLeft");

	Params::UAIActionArsenalComponent_C_GetWeaponTypeOfCloseRangeWeaponOnLeft_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValidWeapon != nullptr)
		*IsValidWeapon = Parms.IsValidWeapon;

	if (WeaponType != nullptr)
		*WeaponType = Parms.WeaponType;

}


// Function AIActionArsenalComponent.AIActionArsenalComponent_C.GetWeaponTypeOfLongRangeWeaponOnLeft
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsValidWeapon                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLWeaponType          WeaponType                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIActionArsenalComponent_C::GetWeaponTypeOfLongRangeWeaponOnLeft(bool* IsValidWeapon, enum class ETTLWeaponType* WeaponType, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionArsenalComponent_C", "GetWeaponTypeOfLongRangeWeaponOnLeft");

	Params::UAIActionArsenalComponent_C_GetWeaponTypeOfLongRangeWeaponOnLeft_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValidWeapon != nullptr)
		*IsValidWeapon = Parms.IsValidWeapon;

	if (WeaponType != nullptr)
		*WeaponType = Parms.WeaponType;

}


// Function AIActionArsenalComponent.AIActionArsenalComponent_C.GetWeaponTypeOfLongRangeWeaponOnRight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsValidWeapon                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLWeaponType          WeaponType                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIActionArsenalComponent_C::GetWeaponTypeOfLongRangeWeaponOnRight(bool* IsValidWeapon, enum class ETTLWeaponType* WeaponType, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionArsenalComponent_C", "GetWeaponTypeOfLongRangeWeaponOnRight");

	Params::UAIActionArsenalComponent_C_GetWeaponTypeOfLongRangeWeaponOnRight_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValidWeapon != nullptr)
		*IsValidWeapon = Parms.IsValidWeapon;

	if (WeaponType != nullptr)
		*WeaponType = Parms.WeaponType;

}


// Function AIActionArsenalComponent.AIActionArsenalComponent_C.DoActionAttackWeaponSpecial
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAIActionArsenalComponent_C::DoActionAttackWeaponSpecial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionArsenalComponent_C", "DoActionAttackWeaponSpecial");

	Params::UAIActionArsenalComponent_C_DoActionAttackWeaponSpecial_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIActionArsenalComponent.AIActionArsenalComponent_C.DoActionAttackWeaponAll
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAIActionArsenalComponent_C::DoActionAttackWeaponAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionArsenalComponent_C", "DoActionAttackWeaponAll");

	Params::UAIActionArsenalComponent_C_DoActionAttackWeaponAll_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIActionArsenalComponent.AIActionArsenalComponent_C.DoActionAttackWeaponLeftRight
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAIActionArsenalComponent_C::DoActionAttackWeaponLeftRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionArsenalComponent_C", "DoActionAttackWeaponLeftRight");

	Params::UAIActionArsenalComponent_C_DoActionAttackWeaponLeftRight_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIActionArsenalComponent.AIActionArsenalComponent_C.DoActionAttackWeaponShoulder
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOuter_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLEWeaponCategory     CallFunc_GetWeaponCategory_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAIActionArsenalComponent_C::DoActionAttackWeaponShoulder(bool CallFunc_IsOuter_ReturnValue, enum class ETTLEWeaponCategory CallFunc_GetWeaponCategory_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionArsenalComponent_C", "DoActionAttackWeaponShoulder");

	Params::UAIActionArsenalComponent_C_DoActionAttackWeaponShoulder_Params Parms{};

	Parms.CallFunc_IsOuter_ReturnValue = CallFunc_IsOuter_ReturnValue;
	Parms.CallFunc_GetWeaponCategory_ReturnValue = CallFunc_GetWeaponCategory_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIActionArsenalComponent.AIActionArsenalComponent_C.DoActionAttackWeaponLeft
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAIActionArsenalComponent_C::DoActionAttackWeaponLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionArsenalComponent_C", "DoActionAttackWeaponLeft");

	Params::UAIActionArsenalComponent_C_DoActionAttackWeaponLeft_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIActionArsenalComponent.AIActionArsenalComponent_C.DoActionAttackWeaponRight
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAIActionArsenalComponent_C::DoActionAttackWeaponRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionArsenalComponent_C", "DoActionAttackWeaponRight");

	Params::UAIActionArsenalComponent_C_DoActionAttackWeaponRight_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIActionArsenalComponent.AIActionArsenalComponent_C.DoActionGuard
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_CalcMovementInputForGuard_ReturnValue                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StartActionNone_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StartShield_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetShieldNum_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAIActionArsenalComponent_C::DoActionGuard(bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_CalcMovementInputForGuard_ReturnValue, bool CallFunc_StartActionNone_ReturnValue, bool CallFunc_StartShield_ReturnValue, int32 CallFunc_GetShieldNum_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionArsenalComponent_C", "DoActionGuard");

	Params::UAIActionArsenalComponent_C_DoActionGuard_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CalcMovementInputForGuard_ReturnValue = CallFunc_CalcMovementInputForGuard_ReturnValue;
	Parms.CallFunc_StartActionNone_ReturnValue = CallFunc_StartActionNone_ReturnValue;
	Parms.CallFunc_StartShield_ReturnValue = CallFunc_StartShield_ReturnValue;
	Parms.CallFunc_GetShieldNum_ReturnValue = CallFunc_GetShieldNum_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIActionArsenalComponent.AIActionArsenalComponent_C.StartActionStraightMoveBP
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     TargetDirection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIActionArsenalComponent_C::StartActionStraightMoveBP(const struct FVector& TargetDirection, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionArsenalComponent_C", "StartActionStraightMoveBP");

	Params::UAIActionArsenalComponent_C_StartActionStraightMoveBP_Params Parms{};

	Parms.TargetDirection = TargetDirection;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function AIActionArsenalComponent.AIActionArsenalComponent_C.StartActionSpecialBP
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StartActionSpecialBP_result                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StartAction_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StartActionNone_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIActionArsenalComponent_C::StartActionSpecialBP(class AActor* TargetActor, bool* Result, bool CallFunc_StartActionSpecialBP_result, bool CallFunc_IsValid_ReturnValue, bool CallFunc_StartAction_ReturnValue, bool CallFunc_StartActionNone_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionArsenalComponent_C", "StartActionSpecialBP");

	Params::UAIActionArsenalComponent_C_StartActionSpecialBP_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.CallFunc_StartActionSpecialBP_result = CallFunc_StartActionSpecialBP_result;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_StartAction_ReturnValue = CallFunc_StartAction_ReturnValue;
	Parms.CallFunc_StartActionNone_ReturnValue = CallFunc_StartActionNone_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function AIActionArsenalComponent.AIActionArsenalComponent_C.FireWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Right                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Left                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Shoulder                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SupportSpecial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              MissileTargets                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
// class AActor*                      CallFunc_GetNearestMissionTarget_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetHateTargets_ReturnValue                              (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIActionArsenalComponent_C::FireWeapon(bool Right, bool Left, bool Shoulder, bool SupportSpecial, const TArray<class AActor*>& MissileTargets, class AActor* CallFunc_GetNearestMissionTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, TArray<class AActor*>& CallFunc_GetHateTargets_ReturnValue, bool CallFunc_IsValid_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue, int32 Temp_int_Variable, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionArsenalComponent_C", "FireWeapon");

	Params::UAIActionArsenalComponent_C_FireWeapon_Params Parms{};

	Parms.Right = Right;
	Parms.Left = Left;
	Parms.Shoulder = Shoulder;
	Parms.SupportSpecial = SupportSpecial;
	Parms.MissileTargets = MissileTargets;
	Parms.CallFunc_GetNearestMissionTarget_ReturnValue = CallFunc_GetNearestMissionTarget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetHateTargets_ReturnValue = CallFunc_GetHateTargets_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Add_ReturnValue1 = CallFunc_Array_Add_ReturnValue1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIActionArsenalComponent.AIActionArsenalComponent_C.StartActionGoAroundSideBP
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Distance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Degree                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIActionArsenalComponent_C::StartActionGoAroundSideBP(class AActor* TargetActor, float Distance, float Degree, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionArsenalComponent_C", "StartActionGoAroundSideBP");

	Params::UAIActionArsenalComponent_C_StartActionGoAroundSideBP_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.Distance = Distance;
	Parms.Degree = Degree;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function AIActionArsenalComponent.AIActionArsenalComponent_C.CheckMoveTypeBP
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class ETTLAIMoveMode          Mode                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIActionArsenalComponent_C::CheckMoveTypeBP(enum class ETTLAIMoveMode Mode, bool* Result, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionArsenalComponent_C", "CheckMoveTypeBP");

	Params::UAIActionArsenalComponent_C_CheckMoveTypeBP_Params Parms{};

	Parms.Mode = Mode;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function AIActionArsenalComponent.AIActionArsenalComponent_C.AIInit
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyActor                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIActionArsenalComponent_C::AIInit(class AActor* MyActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionArsenalComponent_C", "AIInit");

	Params::UAIActionArsenalComponent_C_AIInit_Params Parms{};

	Parms.MyActor = MyActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIActionArsenalComponent.AIActionArsenalComponent_C.FinishAttackWeaponRightBP
// (Event, Public, BlueprintEvent)
// Parameters:

void UAIActionArsenalComponent_C::FinishAttackWeaponRightBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionArsenalComponent_C", "FinishAttackWeaponRightBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIActionArsenalComponent.AIActionArsenalComponent_C.FinishAttackWeaponLeftBP
// (Event, Public, BlueprintEvent)
// Parameters:

void UAIActionArsenalComponent_C::FinishAttackWeaponLeftBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionArsenalComponent_C", "FinishAttackWeaponLeftBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIActionArsenalComponent.AIActionArsenalComponent_C.FinishAttackWeaponShoulderBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAIActionArsenalComponent_C::FinishAttackWeaponShoulderBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionArsenalComponent_C", "FinishAttackWeaponShoulderBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIActionArsenalComponent.AIActionArsenalComponent_C.ActionChangedBP
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class ETTLAIActionType        ActionPrev                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLAIActionType        ActionNext                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIActionArsenalComponent_C::ActionChangedBP(enum class ETTLAIActionType ActionPrev, enum class ETTLAIActionType ActionNext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionArsenalComponent_C", "ActionChangedBP");

	Params::UAIActionArsenalComponent_C_ActionChangedBP_Params Parms{};

	Parms.ActionPrev = ActionPrev;
	Parms.ActionNext = ActionNext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIActionArsenalComponent.AIActionArsenalComponent_C.FinishGuardBP
// (Event, Public, BlueprintEvent)
// Parameters:

void UAIActionArsenalComponent_C::FinishGuardBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionArsenalComponent_C", "FinishGuardBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIActionArsenalComponent.AIActionArsenalComponent_C.FinishAttackWeaponSpecialBP
// (Event, Public, BlueprintEvent)
// Parameters:

void UAIActionArsenalComponent_C::FinishAttackWeaponSpecialBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionArsenalComponent_C", "FinishAttackWeaponSpecialBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIActionArsenalComponent.AIActionArsenalComponent_C.StartGetOffBP
// (Event, Public, BlueprintEvent)
// Parameters:

void UAIActionArsenalComponent_C::StartGetOffBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionArsenalComponent_C", "StartGetOffBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIActionArsenalComponent.AIActionArsenalComponent_C.ExecuteUbergraph_AIActionArsenalComponent
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_myActor                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AArsenalCharacter_C*         K2Node_DynamicCast_AsArsenal_Character                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetCollisionByCharacterType_result                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLAIActionType        K2Node_Event_actionPrev                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLAIActionType        K2Node_Event_actionNext                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EndShield_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTTLBasicStatusComponent*    CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBodyMeshID_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOuterCharacter_C*           CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTTLAIActionOuterComponent*  CallFunc_GetComponentByClass_ReturnValue1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UArsenalEquipComponent_C*    CallFunc_GetComponentByClass_ReturnValue2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TryEndChangeEquipMode_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAIController*               CallFunc_GetAIController_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLAIController*            K2Node_DynamicCast_AsTTLAIController                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLPlayerController*        K2Node_DynamicCast_AsTTLPlayer_Controller                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAIActionArsenalComponent_C::ExecuteUbergraph_AIActionArsenalComponent(int32 EntryPoint, class AActor* K2Node_Event_myActor, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetCollisionByCharacterType_result, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, enum class ETTLAIActionType K2Node_Event_actionPrev, enum class ETTLAIActionType K2Node_Event_actionNext, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_EndShield_ReturnValue, bool CallFunc_IsValid_ReturnValue5, bool Temp_bool_IsClosed_Variable, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, class UTTLBasicStatusComponent* CallFunc_GetComponentByClass_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class FName CallFunc_GetBodyMeshID_ReturnValue, class AOuterCharacter_C* CallFunc_FinishSpawningActor_ReturnValue, class UTTLAIActionOuterComponent* CallFunc_GetComponentByClass_ReturnValue1, class UArsenalEquipComponent_C* CallFunc_GetComponentByClass_ReturnValue2, bool CallFunc_IsValid_ReturnValue6, bool CallFunc_TryEndChangeEquipMode_ReturnValue, class AAIController* CallFunc_GetAIController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ATTLAIController* K2Node_DynamicCast_AsTTLAIController, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsValid_ReturnValue7, class ATTLPlayerController* K2Node_DynamicCast_AsTTLPlayer_Controller, bool K2Node_DynamicCast_bSuccess2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionArsenalComponent_C", "ExecuteUbergraph_AIActionArsenalComponent");

	Params::UAIActionArsenalComponent_C_ExecuteUbergraph_AIActionArsenalComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_myActor = K2Node_Event_myActor;
	Parms.K2Node_DynamicCast_AsArsenal_Character = K2Node_DynamicCast_AsArsenal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SetCollisionByCharacterType_result = CallFunc_SetCollisionByCharacterType_result;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.K2Node_Event_actionPrev = K2Node_Event_actionPrev;
	Parms.K2Node_Event_actionNext = K2Node_Event_actionNext;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_EndShield_ReturnValue = CallFunc_EndShield_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue5 = CallFunc_IsValid_ReturnValue5;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue1 = CallFunc_GetOwner_ReturnValue1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_GetBodyMeshID_ReturnValue = CallFunc_GetBodyMeshID_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue1 = CallFunc_GetComponentByClass_ReturnValue1;
	Parms.CallFunc_GetComponentByClass_ReturnValue2 = CallFunc_GetComponentByClass_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue6 = CallFunc_IsValid_ReturnValue6;
	Parms.CallFunc_TryEndChangeEquipMode_ReturnValue = CallFunc_TryEndChangeEquipMode_ReturnValue;
	Parms.CallFunc_GetAIController_ReturnValue = CallFunc_GetAIController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsTTLAIController = K2Node_DynamicCast_AsTTLAIController;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_IsValid_ReturnValue7 = CallFunc_IsValid_ReturnValue7;
	Parms.K2Node_DynamicCast_AsTTLPlayer_Controller = K2Node_DynamicCast_AsTTLPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;

	UObject::ProcessEvent(Func, &Parms);

}

}


