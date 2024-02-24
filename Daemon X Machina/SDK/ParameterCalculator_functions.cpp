#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParameterCalculator.ParameterCalculator_C
// (None)

class UClass* UParameterCalculator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParameterCalculator_C");

	return Clss;
}


// ParameterCalculator_C ParameterCalculator.Default__ParameterCalculator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParameterCalculator_C* UParameterCalculator_C::GetDefaultObj()
{
	static class UParameterCalculator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParameterCalculator_C*>(UParameterCalculator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ParameterCalculator.ParameterCalculator_C.CalcBasicStatus
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTTLPartsTotalParam         TotalParam                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UTTLBasicStatusComponent*    BasicStatusIn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTTLBasicStatusComponent*    BasicStatus                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTTLBasicStatusComponent*    BasicStatusInput                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AArsenalCharacter_C*         K2Node_DynamicCast_AsArsenal_Character                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalcInGameAttackCorrection_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalcInGameAttackCorrection_ReturnValue1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalcInGameAttackCorrection_ReturnValue2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalcInGameAttackCorrection_ReturnValue3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalcInGameAttackCorrection_ReturnValue4                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_CalcInGameAttackCorrection_ReturnValue5                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalcInGameAttackCorrection_ReturnValue6                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalcInGameAttackCorrection_ReturnValue7                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalcInGameAttackCorrection_ReturnValue8                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalcInGameAttackCorrection_ReturnValue9                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue6                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UParameterCalculator_C::CalcBasicStatus(struct FTTLPartsTotalParam& TotalParam, class UTTLBasicStatusComponent* BasicStatusIn, class UTTLBasicStatusComponent** BasicStatus, class UTTLBasicStatusComponent* BasicStatusInput, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue3, float CallFunc_CalcInGameAttackCorrection_ReturnValue, float CallFunc_CalcInGameAttackCorrection_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue4, float CallFunc_CalcInGameAttackCorrection_ReturnValue2, float CallFunc_CalcInGameAttackCorrection_ReturnValue3, float CallFunc_CalcInGameAttackCorrection_ReturnValue4, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_CalcInGameAttackCorrection_ReturnValue5, float CallFunc_CalcInGameAttackCorrection_ReturnValue6, float CallFunc_Divide_FloatFloat_ReturnValue5, float CallFunc_CalcInGameAttackCorrection_ReturnValue7, float CallFunc_CalcInGameAttackCorrection_ReturnValue8, float CallFunc_CalcInGameAttackCorrection_ReturnValue9, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float K2Node_MathExpression_ReturnValue, float K2Node_MathExpression_ReturnValue1, float K2Node_MathExpression_ReturnValue2, float K2Node_MathExpression_ReturnValue3, float K2Node_MathExpression_ReturnValue4, float K2Node_MathExpression_ReturnValue5, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue1, float CallFunc_SelectFloat_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue2, float Temp_float_Variable, bool Temp_bool_Variable, float K2Node_Select_Default, float CallFunc_Divide_FloatFloat_ReturnValue6, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ParameterCalculator_C", "CalcBasicStatus");

	Params::UParameterCalculator_C_CalcBasicStatus_Params Parms{};

	Parms.TotalParam = TotalParam;
	Parms.BasicStatusIn = BasicStatusIn;
	Parms.BasicStatusInput = BasicStatusInput;
	Parms.K2Node_DynamicCast_AsArsenal_Character = K2Node_DynamicCast_AsArsenal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue1 = CallFunc_Divide_FloatFloat_ReturnValue1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue2 = CallFunc_Divide_FloatFloat_ReturnValue2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue3 = CallFunc_Divide_FloatFloat_ReturnValue3;
	Parms.CallFunc_CalcInGameAttackCorrection_ReturnValue = CallFunc_CalcInGameAttackCorrection_ReturnValue;
	Parms.CallFunc_CalcInGameAttackCorrection_ReturnValue1 = CallFunc_CalcInGameAttackCorrection_ReturnValue1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue4 = CallFunc_Divide_FloatFloat_ReturnValue4;
	Parms.CallFunc_CalcInGameAttackCorrection_ReturnValue2 = CallFunc_CalcInGameAttackCorrection_ReturnValue2;
	Parms.CallFunc_CalcInGameAttackCorrection_ReturnValue3 = CallFunc_CalcInGameAttackCorrection_ReturnValue3;
	Parms.CallFunc_CalcInGameAttackCorrection_ReturnValue4 = CallFunc_CalcInGameAttackCorrection_ReturnValue4;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_CalcInGameAttackCorrection_ReturnValue5 = CallFunc_CalcInGameAttackCorrection_ReturnValue5;
	Parms.CallFunc_CalcInGameAttackCorrection_ReturnValue6 = CallFunc_CalcInGameAttackCorrection_ReturnValue6;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue5 = CallFunc_Divide_FloatFloat_ReturnValue5;
	Parms.CallFunc_CalcInGameAttackCorrection_ReturnValue7 = CallFunc_CalcInGameAttackCorrection_ReturnValue7;
	Parms.CallFunc_CalcInGameAttackCorrection_ReturnValue8 = CallFunc_CalcInGameAttackCorrection_ReturnValue8;
	Parms.CallFunc_CalcInGameAttackCorrection_ReturnValue9 = CallFunc_CalcInGameAttackCorrection_ReturnValue9;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_MathExpression_ReturnValue = K2Node_MathExpression_ReturnValue;
	Parms.K2Node_MathExpression_ReturnValue1 = K2Node_MathExpression_ReturnValue1;
	Parms.K2Node_MathExpression_ReturnValue2 = K2Node_MathExpression_ReturnValue2;
	Parms.K2Node_MathExpression_ReturnValue3 = K2Node_MathExpression_ReturnValue3;
	Parms.K2Node_MathExpression_ReturnValue4 = K2Node_MathExpression_ReturnValue4;
	Parms.K2Node_MathExpression_ReturnValue5 = K2Node_MathExpression_ReturnValue5;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue1 = CallFunc_Multiply_FloatFloat_ReturnValue1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue1 = CallFunc_SelectFloat_ReturnValue1;
	Parms.CallFunc_SelectFloat_ReturnValue2 = CallFunc_SelectFloat_ReturnValue2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue6 = CallFunc_Divide_FloatFloat_ReturnValue6;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (BasicStatus != nullptr)
		*BasicStatus = Parms.BasicStatus;

}


// Function ParameterCalculator.ParameterCalculator_C.CalcAssembleGrade
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTTLPartsTotalParam         TotalParam                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FTTLArsenaltotalGradeRow    Grade                                                            (Parm, OutParm)
// float                              K2Node_MathExpression_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue11                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue12                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue13                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue14                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue4                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLArsenaltotalGradeRow    K2Node_MakeStruct_TTLArsenaltotalGradeRow                        (None)

void UParameterCalculator_C::CalcAssembleGrade(struct FTTLPartsTotalParam& TotalParam, struct FTTLArsenaltotalGradeRow* Grade, float K2Node_MathExpression_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float K2Node_MathExpression_ReturnValue1, float K2Node_MathExpression_ReturnValue2, float K2Node_MathExpression_ReturnValue3, float K2Node_MathExpression_ReturnValue4, float K2Node_MathExpression_ReturnValue5, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue1, float K2Node_MathExpression_ReturnValue6, float K2Node_MathExpression_ReturnValue7, float K2Node_MathExpression_ReturnValue8, float CallFunc_FClamp_ReturnValue2, float K2Node_MathExpression_ReturnValue9, float K2Node_MathExpression_ReturnValue10, float K2Node_MathExpression_ReturnValue11, float K2Node_MathExpression_ReturnValue12, float K2Node_MathExpression_ReturnValue13, float K2Node_MathExpression_ReturnValue14, float CallFunc_FClamp_ReturnValue3, float CallFunc_FClamp_ReturnValue4, const struct FTTLArsenaltotalGradeRow& K2Node_MakeStruct_TTLArsenaltotalGradeRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ParameterCalculator_C", "CalcAssembleGrade");

	Params::UParameterCalculator_C_CalcAssembleGrade_Params Parms{};

	Parms.TotalParam = TotalParam;
	Parms.K2Node_MathExpression_ReturnValue = K2Node_MathExpression_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_MathExpression_ReturnValue1 = K2Node_MathExpression_ReturnValue1;
	Parms.K2Node_MathExpression_ReturnValue2 = K2Node_MathExpression_ReturnValue2;
	Parms.K2Node_MathExpression_ReturnValue3 = K2Node_MathExpression_ReturnValue3;
	Parms.K2Node_MathExpression_ReturnValue4 = K2Node_MathExpression_ReturnValue4;
	Parms.K2Node_MathExpression_ReturnValue5 = K2Node_MathExpression_ReturnValue5;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue1 = CallFunc_FClamp_ReturnValue1;
	Parms.K2Node_MathExpression_ReturnValue6 = K2Node_MathExpression_ReturnValue6;
	Parms.K2Node_MathExpression_ReturnValue7 = K2Node_MathExpression_ReturnValue7;
	Parms.K2Node_MathExpression_ReturnValue8 = K2Node_MathExpression_ReturnValue8;
	Parms.CallFunc_FClamp_ReturnValue2 = CallFunc_FClamp_ReturnValue2;
	Parms.K2Node_MathExpression_ReturnValue9 = K2Node_MathExpression_ReturnValue9;
	Parms.K2Node_MathExpression_ReturnValue10 = K2Node_MathExpression_ReturnValue10;
	Parms.K2Node_MathExpression_ReturnValue11 = K2Node_MathExpression_ReturnValue11;
	Parms.K2Node_MathExpression_ReturnValue12 = K2Node_MathExpression_ReturnValue12;
	Parms.K2Node_MathExpression_ReturnValue13 = K2Node_MathExpression_ReturnValue13;
	Parms.K2Node_MathExpression_ReturnValue14 = K2Node_MathExpression_ReturnValue14;
	Parms.CallFunc_FClamp_ReturnValue3 = CallFunc_FClamp_ReturnValue3;
	Parms.CallFunc_FClamp_ReturnValue4 = CallFunc_FClamp_ReturnValue4;
	Parms.K2Node_MakeStruct_TTLArsenaltotalGradeRow = K2Node_MakeStruct_TTLArsenaltotalGradeRow;

	UObject::ProcessEvent(Func, &Parms);

	if (Grade != nullptr)
		*Grade = std::move(Parms.Grade);

}


// Function ParameterCalculator.ParameterCalculator_C.CalcArsenalTotalParam
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  Arsenal                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLPartsHeadParamRow       HeadParam                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FTTLPartsBodyParamRow       BodyParam                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FTTLPartsInsideParamRow     InsideParam                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FTTLPartsArmRightParamRow   ArmRightParam                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FTTLPartsArmLeftParamRow    ArmLeftParam                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FTTLPartsLegsParamRow       LegsParam                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FTTLPartsTotalParam         TotalParam                                                       (Parm, OutParm)
// struct FTTLWeaponParamBaseRow      LeftWeapon                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FTTLWeaponParamBaseRow      RightWeapon                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FTTLWeaponParamBaseRow      ShoulderWeapon                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FTTLWeaponParamBaseRow      SupportWeapon                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FTTLWeaponParamBaseRow      LeftRackWeapon                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FTTLWeaponParamBaseRow      RightRackWeapon                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FTTLPartsTotalParam         CallFunc_CalcTotalParam_TotalParam                               (None)
// struct FTTLExtraAttachmentParam    CallFunc_GetExtraAttachmentParameterFromLeg_ReturnValue          (None)
// struct FTTLExtraAttachmentParam    CallFunc_GetExtraAttachmentParameterFromLeftArm_ReturnValue      (None)
// struct FTTLPartsLegsParamRow       K2Node_MakeStruct_TTLPartsLegsParamRow                           (None)
// struct FTTLPartsLegsParamRow       CallFunc_ApplyExtraAttachmentParameterToLegs_outLegsParam        (None)
// struct FTTLPartsArmLeftParamRow    K2Node_MakeStruct_TTLPartsArmLeftParamRow                        (None)
// struct FTTLPartsArmLeftParamRow    K2Node_MakeStruct_TTLPartsArmLeftParamRow1                       (None)
// struct FTTLPartsArmLeftParamRow    CallFunc_ApplyExtraAttachmentParameterToLeftArm_outLeftArmParam  (None)
// struct FTTLPartsArmLeftParamRow    CallFunc_ApplyExtraAttachmentParameterToLeftArm_outLeftArmParam1 (None)
// struct FTTLExtraAttachmentParam    CallFunc_GetExtraAttachmentParameterFromRightArm_ReturnValue     (None)
// struct FTTLExtraAttachmentParam    CallFunc_GetExtraAttachmentParameterFromBody_ReturnValue         (None)
// struct FTTLPartsArmRightParamRow   K2Node_MakeStruct_TTLPartsArmRightParamRow                       (None)
// struct FTTLPartsArmRightParamRow   K2Node_MakeStruct_TTLPartsArmRightParamRow1                      (None)
// struct FTTLPartsArmRightParamRow   CallFunc_ApplyExtraAttachmentParameterToRightArm_outRightArmParam(None)
// struct FTTLPartsArmRightParamRow   CallFunc_ApplyExtraAttachmentParameterToRightArm_outRightArmParam1(None)
// struct FTTLExtraAttachmentParam    CallFunc_GetExtraAttachmentParameterFromHead_ReturnValue         (None)
// struct FTTLPartsBodyParamRow       K2Node_MakeStruct_TTLPartsBodyParamRow                           (None)
// struct FTTLPartsBodyParamRow       CallFunc_ApplyExtraAttachmentParameterToBody_outBodyParam        (None)
// struct FTTLPartsHeadParamRow       K2Node_MakeStruct_TTLPartsHeadParamRow                           (None)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLPartsHeadParamRow       CallFunc_ApplyExtraAttachmentParameterToHead_outHeadParam        (None)
// class AArsenalCharacter_C*         K2Node_DynamicCast_AsArsenal_Character                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCompletelyDestroyed_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHalfDestroyed_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompletelyDestroyed_ReturnValue1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompletelyDestroyed_ReturnValue2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompletelyDestroyed_ReturnValue3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHalfDestroyed_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompletelyDestroyed_ReturnValue4                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHalfDestroyed_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHalfDestroyed_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHalfDestroyed_ReturnValue4                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLPartsHeadParamRow       K2Node_MakeStruct_TTLPartsHeadParamRow1                          (None)
// struct FTTLPartsHeadParamRow       CallFunc_ApplyExtraAttachmentParameterToHead_outHeadParam1       (None)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLPartsHeadParamRow       K2Node_Select_Default                                            (None)
// struct FTTLPartsHeadParamRow       K2Node_Select1_Default                                           (None)
// struct FTTLPartsBodyParamRow       K2Node_Select2_Default                                           (None)
// bool                               Temp_bool_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLPartsArmRightParamRow   K2Node_Select3_Default                                           (None)
// struct FTTLPartsArmLeftParamRow    K2Node_Select4_Default                                           (None)
// struct FTTLPartsArmRightParamRow   K2Node_Select5_Default                                           (None)
// struct FTTLPartsArmLeftParamRow    K2Node_Select6_Default                                           (None)
// bool                               Temp_bool_Variable9                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLPartsLegsParamRow       K2Node_Select7_Default                                           (None)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue7                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue8                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLPartsLegsParamRow       K2Node_MakeStruct_TTLPartsLegsParamRow1                          (None)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue9                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLPartsLegsParamRow       CallFunc_ApplyExtraAttachmentParameterToLegs_outLegsParam1       (None)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue10                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLPartsLegsParamRow       K2Node_Select8_Default                                           (None)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue11                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLPartsBodyParamRow       K2Node_MakeStruct_TTLPartsBodyParamRow1                          (None)
// struct FTTLPartsBodyParamRow       CallFunc_ApplyExtraAttachmentParameterToBody_outBodyParam1       (None)
// struct FTTLPartsBodyParamRow       K2Node_Select9_Default                                           (None)
// struct FTTLPartsTotalParam         CallFunc_CalcTotalParam_TotalParam1                              (None)

void UParameterCalculator_C::CalcArsenalTotalParam(class ACharacter* Arsenal, struct FTTLPartsHeadParamRow& HeadParam, struct FTTLPartsBodyParamRow& BodyParam, struct FTTLPartsInsideParamRow& InsideParam, struct FTTLPartsArmRightParamRow& ArmRightParam, struct FTTLPartsArmLeftParamRow& ArmLeftParam, struct FTTLPartsLegsParamRow& LegsParam, struct FTTLPartsTotalParam* TotalParam, struct FTTLWeaponParamBaseRow& LeftWeapon, struct FTTLWeaponParamBaseRow& RightWeapon, struct FTTLWeaponParamBaseRow& ShoulderWeapon, struct FTTLWeaponParamBaseRow& SupportWeapon, struct FTTLWeaponParamBaseRow& LeftRackWeapon, struct FTTLWeaponParamBaseRow& RightRackWeapon, const struct FTTLPartsTotalParam& CallFunc_CalcTotalParam_TotalParam, const struct FTTLExtraAttachmentParam& CallFunc_GetExtraAttachmentParameterFromLeg_ReturnValue, const struct FTTLExtraAttachmentParam& CallFunc_GetExtraAttachmentParameterFromLeftArm_ReturnValue, const struct FTTLPartsLegsParamRow& K2Node_MakeStruct_TTLPartsLegsParamRow, const struct FTTLPartsLegsParamRow& CallFunc_ApplyExtraAttachmentParameterToLegs_outLegsParam, const struct FTTLPartsArmLeftParamRow& K2Node_MakeStruct_TTLPartsArmLeftParamRow, const struct FTTLPartsArmLeftParamRow& K2Node_MakeStruct_TTLPartsArmLeftParamRow1, const struct FTTLPartsArmLeftParamRow& CallFunc_ApplyExtraAttachmentParameterToLeftArm_outLeftArmParam, const struct FTTLPartsArmLeftParamRow& CallFunc_ApplyExtraAttachmentParameterToLeftArm_outLeftArmParam1, const struct FTTLExtraAttachmentParam& CallFunc_GetExtraAttachmentParameterFromRightArm_ReturnValue, const struct FTTLExtraAttachmentParam& CallFunc_GetExtraAttachmentParameterFromBody_ReturnValue, const struct FTTLPartsArmRightParamRow& K2Node_MakeStruct_TTLPartsArmRightParamRow, const struct FTTLPartsArmRightParamRow& K2Node_MakeStruct_TTLPartsArmRightParamRow1, const struct FTTLPartsArmRightParamRow& CallFunc_ApplyExtraAttachmentParameterToRightArm_outRightArmParam, const struct FTTLPartsArmRightParamRow& CallFunc_ApplyExtraAttachmentParameterToRightArm_outRightArmParam1, const struct FTTLExtraAttachmentParam& CallFunc_GetExtraAttachmentParameterFromHead_ReturnValue, const struct FTTLPartsBodyParamRow& K2Node_MakeStruct_TTLPartsBodyParamRow, const struct FTTLPartsBodyParamRow& CallFunc_ApplyExtraAttachmentParameterToBody_outBodyParam, const struct FTTLPartsHeadParamRow& K2Node_MakeStruct_TTLPartsHeadParamRow, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FTTLPartsHeadParamRow& CallFunc_ApplyExtraAttachmentParameterToHead_outHeadParam, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_Multiply_FloatFloat_ReturnValue1, bool CallFunc_IsCompletelyDestroyed_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, bool CallFunc_IsHalfDestroyed_ReturnValue, bool CallFunc_IsCompletelyDestroyed_ReturnValue1, bool CallFunc_IsCompletelyDestroyed_ReturnValue2, bool CallFunc_IsCompletelyDestroyed_ReturnValue3, bool CallFunc_IsHalfDestroyed_ReturnValue1, bool CallFunc_IsCompletelyDestroyed_ReturnValue4, bool CallFunc_IsHalfDestroyed_ReturnValue2, bool CallFunc_IsHalfDestroyed_ReturnValue3, bool Temp_bool_Variable, bool CallFunc_IsHalfDestroyed_ReturnValue4, bool Temp_bool_Variable1, float CallFunc_FMax_ReturnValue, float CallFunc_FMax_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue3, float CallFunc_Multiply_FloatFloat_ReturnValue4, const struct FTTLPartsHeadParamRow& K2Node_MakeStruct_TTLPartsHeadParamRow1, const struct FTTLPartsHeadParamRow& CallFunc_ApplyExtraAttachmentParameterToHead_outHeadParam1, float CallFunc_Multiply_FloatFloat_ReturnValue5, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, bool Temp_bool_Variable5, bool Temp_bool_Variable6, const struct FTTLPartsHeadParamRow& K2Node_Select_Default, const struct FTTLPartsHeadParamRow& K2Node_Select1_Default, const struct FTTLPartsBodyParamRow& K2Node_Select2_Default, bool Temp_bool_Variable7, bool Temp_bool_Variable8, const struct FTTLPartsArmRightParamRow& K2Node_Select3_Default, const struct FTTLPartsArmLeftParamRow& K2Node_Select4_Default, const struct FTTLPartsArmRightParamRow& K2Node_Select5_Default, const struct FTTLPartsArmLeftParamRow& K2Node_Select6_Default, bool Temp_bool_Variable9, float CallFunc_Multiply_FloatFloat_ReturnValue6, const struct FTTLPartsLegsParamRow& K2Node_Select7_Default, float CallFunc_Multiply_FloatFloat_ReturnValue7, float CallFunc_Multiply_FloatFloat_ReturnValue8, const struct FTTLPartsLegsParamRow& K2Node_MakeStruct_TTLPartsLegsParamRow1, float CallFunc_Multiply_FloatFloat_ReturnValue9, const struct FTTLPartsLegsParamRow& CallFunc_ApplyExtraAttachmentParameterToLegs_outLegsParam1, float CallFunc_Multiply_FloatFloat_ReturnValue10, const struct FTTLPartsLegsParamRow& K2Node_Select8_Default, float CallFunc_Multiply_FloatFloat_ReturnValue11, const struct FTTLPartsBodyParamRow& K2Node_MakeStruct_TTLPartsBodyParamRow1, const struct FTTLPartsBodyParamRow& CallFunc_ApplyExtraAttachmentParameterToBody_outBodyParam1, const struct FTTLPartsBodyParamRow& K2Node_Select9_Default, const struct FTTLPartsTotalParam& CallFunc_CalcTotalParam_TotalParam1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ParameterCalculator_C", "CalcArsenalTotalParam");

	Params::UParameterCalculator_C_CalcArsenalTotalParam_Params Parms{};

	Parms.Arsenal = Arsenal;
	Parms.HeadParam = HeadParam;
	Parms.BodyParam = BodyParam;
	Parms.InsideParam = InsideParam;
	Parms.ArmRightParam = ArmRightParam;
	Parms.ArmLeftParam = ArmLeftParam;
	Parms.LegsParam = LegsParam;
	Parms.LeftWeapon = LeftWeapon;
	Parms.RightWeapon = RightWeapon;
	Parms.ShoulderWeapon = ShoulderWeapon;
	Parms.SupportWeapon = SupportWeapon;
	Parms.LeftRackWeapon = LeftRackWeapon;
	Parms.RightRackWeapon = RightRackWeapon;
	Parms.CallFunc_CalcTotalParam_TotalParam = CallFunc_CalcTotalParam_TotalParam;
	Parms.CallFunc_GetExtraAttachmentParameterFromLeg_ReturnValue = CallFunc_GetExtraAttachmentParameterFromLeg_ReturnValue;
	Parms.CallFunc_GetExtraAttachmentParameterFromLeftArm_ReturnValue = CallFunc_GetExtraAttachmentParameterFromLeftArm_ReturnValue;
	Parms.K2Node_MakeStruct_TTLPartsLegsParamRow = K2Node_MakeStruct_TTLPartsLegsParamRow;
	Parms.CallFunc_ApplyExtraAttachmentParameterToLegs_outLegsParam = CallFunc_ApplyExtraAttachmentParameterToLegs_outLegsParam;
	Parms.K2Node_MakeStruct_TTLPartsArmLeftParamRow = K2Node_MakeStruct_TTLPartsArmLeftParamRow;
	Parms.K2Node_MakeStruct_TTLPartsArmLeftParamRow1 = K2Node_MakeStruct_TTLPartsArmLeftParamRow1;
	Parms.CallFunc_ApplyExtraAttachmentParameterToLeftArm_outLeftArmParam = CallFunc_ApplyExtraAttachmentParameterToLeftArm_outLeftArmParam;
	Parms.CallFunc_ApplyExtraAttachmentParameterToLeftArm_outLeftArmParam1 = CallFunc_ApplyExtraAttachmentParameterToLeftArm_outLeftArmParam1;
	Parms.CallFunc_GetExtraAttachmentParameterFromRightArm_ReturnValue = CallFunc_GetExtraAttachmentParameterFromRightArm_ReturnValue;
	Parms.CallFunc_GetExtraAttachmentParameterFromBody_ReturnValue = CallFunc_GetExtraAttachmentParameterFromBody_ReturnValue;
	Parms.K2Node_MakeStruct_TTLPartsArmRightParamRow = K2Node_MakeStruct_TTLPartsArmRightParamRow;
	Parms.K2Node_MakeStruct_TTLPartsArmRightParamRow1 = K2Node_MakeStruct_TTLPartsArmRightParamRow1;
	Parms.CallFunc_ApplyExtraAttachmentParameterToRightArm_outRightArmParam = CallFunc_ApplyExtraAttachmentParameterToRightArm_outRightArmParam;
	Parms.CallFunc_ApplyExtraAttachmentParameterToRightArm_outRightArmParam1 = CallFunc_ApplyExtraAttachmentParameterToRightArm_outRightArmParam1;
	Parms.CallFunc_GetExtraAttachmentParameterFromHead_ReturnValue = CallFunc_GetExtraAttachmentParameterFromHead_ReturnValue;
	Parms.K2Node_MakeStruct_TTLPartsBodyParamRow = K2Node_MakeStruct_TTLPartsBodyParamRow;
	Parms.CallFunc_ApplyExtraAttachmentParameterToBody_outBodyParam = CallFunc_ApplyExtraAttachmentParameterToBody_outBodyParam;
	Parms.K2Node_MakeStruct_TTLPartsHeadParamRow = K2Node_MakeStruct_TTLPartsHeadParamRow;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_ApplyExtraAttachmentParameterToHead_outHeadParam = CallFunc_ApplyExtraAttachmentParameterToHead_outHeadParam;
	Parms.K2Node_DynamicCast_AsArsenal_Character = K2Node_DynamicCast_AsArsenal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue1 = CallFunc_Multiply_FloatFloat_ReturnValue1;
	Parms.CallFunc_IsCompletelyDestroyed_ReturnValue = CallFunc_IsCompletelyDestroyed_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
	Parms.CallFunc_IsHalfDestroyed_ReturnValue = CallFunc_IsHalfDestroyed_ReturnValue;
	Parms.CallFunc_IsCompletelyDestroyed_ReturnValue1 = CallFunc_IsCompletelyDestroyed_ReturnValue1;
	Parms.CallFunc_IsCompletelyDestroyed_ReturnValue2 = CallFunc_IsCompletelyDestroyed_ReturnValue2;
	Parms.CallFunc_IsCompletelyDestroyed_ReturnValue3 = CallFunc_IsCompletelyDestroyed_ReturnValue3;
	Parms.CallFunc_IsHalfDestroyed_ReturnValue1 = CallFunc_IsHalfDestroyed_ReturnValue1;
	Parms.CallFunc_IsCompletelyDestroyed_ReturnValue4 = CallFunc_IsCompletelyDestroyed_ReturnValue4;
	Parms.CallFunc_IsHalfDestroyed_ReturnValue2 = CallFunc_IsHalfDestroyed_ReturnValue2;
	Parms.CallFunc_IsHalfDestroyed_ReturnValue3 = CallFunc_IsHalfDestroyed_ReturnValue3;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsHalfDestroyed_ReturnValue4 = CallFunc_IsHalfDestroyed_ReturnValue4;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue1 = CallFunc_FMax_ReturnValue1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue3 = CallFunc_Multiply_FloatFloat_ReturnValue3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue4 = CallFunc_Multiply_FloatFloat_ReturnValue4;
	Parms.K2Node_MakeStruct_TTLPartsHeadParamRow1 = K2Node_MakeStruct_TTLPartsHeadParamRow1;
	Parms.CallFunc_ApplyExtraAttachmentParameterToHead_outHeadParam1 = CallFunc_ApplyExtraAttachmentParameterToHead_outHeadParam1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue5 = CallFunc_Multiply_FloatFloat_ReturnValue5;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.Temp_bool_Variable7 = Temp_bool_Variable7;
	Parms.Temp_bool_Variable8 = Temp_bool_Variable8;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.K2Node_Select6_Default = K2Node_Select6_Default;
	Parms.Temp_bool_Variable9 = Temp_bool_Variable9;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue6 = CallFunc_Multiply_FloatFloat_ReturnValue6;
	Parms.K2Node_Select7_Default = K2Node_Select7_Default;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue7 = CallFunc_Multiply_FloatFloat_ReturnValue7;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue8 = CallFunc_Multiply_FloatFloat_ReturnValue8;
	Parms.K2Node_MakeStruct_TTLPartsLegsParamRow1 = K2Node_MakeStruct_TTLPartsLegsParamRow1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue9 = CallFunc_Multiply_FloatFloat_ReturnValue9;
	Parms.CallFunc_ApplyExtraAttachmentParameterToLegs_outLegsParam1 = CallFunc_ApplyExtraAttachmentParameterToLegs_outLegsParam1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue10 = CallFunc_Multiply_FloatFloat_ReturnValue10;
	Parms.K2Node_Select8_Default = K2Node_Select8_Default;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue11 = CallFunc_Multiply_FloatFloat_ReturnValue11;
	Parms.K2Node_MakeStruct_TTLPartsBodyParamRow1 = K2Node_MakeStruct_TTLPartsBodyParamRow1;
	Parms.CallFunc_ApplyExtraAttachmentParameterToBody_outBodyParam1 = CallFunc_ApplyExtraAttachmentParameterToBody_outBodyParam1;
	Parms.K2Node_Select9_Default = K2Node_Select9_Default;
	Parms.CallFunc_CalcTotalParam_TotalParam1 = CallFunc_CalcTotalParam_TotalParam1;

	UObject::ProcessEvent(Func, &Parms);

	if (TotalParam != nullptr)
		*TotalParam = std::move(Parms.TotalParam);

}


// Function ParameterCalculator.ParameterCalculator_C.CalcTotalParam
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTTLPartsHeadParamRow       HeadParam                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FTTLPartsBodyParamRow       BodyParam                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FTTLPartsInsideParamRow     InsideParam                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FTTLPartsArmRightParamRow   ArmRightParam                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FTTLPartsArmLeftParamRow    ArmLeftParam                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FTTLPartsLegsParamRow       LegsParam                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FTTLPartsTotalParam         TotalParam                                                       (Parm, OutParm)
// struct FTTLWeaponParamBaseRow      LeftWeapon                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FTTLWeaponParamBaseRow      RightWeapon                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FTTLWeaponParamBaseRow      ShoulderWeapon                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FTTLWeaponParamBaseRow      SupportWeapon                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FTTLWeaponParamBaseRow      LeftRackWeapon                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FTTLWeaponParamBaseRow      RightRackWeapon                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                              L_TotalGroundCoolSpeed                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              L_TotalFlightCoolSpeed                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              L_Capacity                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              L_TotalWeight                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              L_TotalCost                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLWeaponParamBaseRow      L_ShoulderWeaponParam                                            (Edit, BlueprintVisible)
// struct FTTLWeaponParamBaseRow      L_RightWeaponParam                                               (Edit, BlueprintVisible)
// struct FTTLWeaponParamBaseRow      L_LeftWeaponParam                                                (Edit, BlueprintVisible)
// struct FTTLPartsLegsParamRow       L_LegsParam                                                      (Edit, BlueprintVisible)
// struct FTTLPartsArmLeftParamRow    L_ArmLeftParam                                                   (Edit, BlueprintVisible)
// struct FTTLPartsArmRightParamRow   L_ArmRightParam                                                  (Edit, BlueprintVisible)
// struct FTTLPartsInsideParamRow     L_InsideParam                                                    (Edit, BlueprintVisible)
// struct FTTLPartsBodyParamRow       L_BodyParam                                                      (Edit, BlueprintVisible)
// struct FTTLWeaponParamBaseRow      L_RightRackParam                                                 (Edit, BlueprintVisible)
// struct FTTLWeaponParamBaseRow      L_LeftRackParam                                                  (Edit, BlueprintVisible)
// struct FTTLWeaponParamBaseRow      L_SupportWeaponParam                                             (Edit, BlueprintVisible)
// struct FTTLPartsHeadParamRow       L_HeadParam                                                      (Edit, BlueprintVisible)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue5                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue6                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue7                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue8                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue9                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue10                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue5                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue11                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue6                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue7                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTTLExtraAttachmentParam    CallFunc_GetExtraAttachmentParameterFromWeaponBase_ReturnValue   (None)
// float                              CallFunc_SelectFloat_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLExtraAttachmentParam    CallFunc_GetExtraAttachmentParameterFromWeaponBase_ReturnValue1  (None)
// struct FTTLExtraAttachmentParam    CallFunc_GetExtraAttachmentParameterFromWeaponBase_ReturnValue2  (None)
// struct FTTLExtraAttachmentParam    CallFunc_GetExtraAttachmentParameterFromWeaponBase_ReturnValue3  (None)
// struct FTTLExtraAttachmentParam    CallFunc_GetExtraAttachmentParameterFromWeaponBase_ReturnValue4  (None)
// struct FTTLExtraAttachmentParam    CallFunc_GetExtraAttachmentParameterFromWeaponBase_ReturnValue5  (None)
// struct FTTLExtraAttachmentParam    CallFunc_GetExtraAttachmentParameterFromLeg_ReturnValue          (None)
// struct FTTLExtraAttachmentParam    CallFunc_GetExtraAttachmentParameterFromLeftArm_ReturnValue      (None)
// struct FTTLExtraAttachmentParam    CallFunc_GetExtraAttachmentParameterFromRightArm_ReturnValue     (None)
// struct FTTLExtraAttachmentParam    CallFunc_GetExtraAttachmentParameterFromInside_ReturnValue       (None)
// struct FTTLExtraAttachmentParam    CallFunc_GetExtraAttachmentParameterFromBody_ReturnValue         (None)
// struct FTTLExtraAttachmentParam    CallFunc_GetExtraAttachmentParameterFromHead_ReturnValue         (None)
// struct FTTLExtraAttachmentParam    CallFunc_CalcTotalExtraAttachmentParameter_outParam              (None)
// float                              CallFunc_Add_FloatFloat_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLPartsTotalFemtoParam    K2Node_MakeStruct_TTLPartsTotalFemtoParam                        (NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLPartsTotalCorrectionParamK2Node_MakeStruct_TTLPartsTotalCorrectionParam                   (NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue8                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLPartsTotalShieldParam   K2Node_MakeStruct_TTLPartsTotalShieldParam                       (NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue9                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue10                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue11                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue12                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLPartsTotalArmorParam    K2Node_MakeStruct_TTLPartsTotalArmorParam                        (NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue13                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue14                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue15                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue16                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue12                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue13                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue19                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue8                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue14                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue15                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue16                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue9                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue17                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue10                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue11                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue20                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue7                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue18                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue19                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue20                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue8                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue12                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue21                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue22                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue13                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue23                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue14                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue15                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue21                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue9                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue22                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue23                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue24                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue25                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue26                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue27                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue28                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue29                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue30                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue31                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue32                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue33                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue34                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue35                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue36                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue24                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue25                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue26                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue10                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue16                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue27                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue28                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue17                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue29                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue18                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue19                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue11                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue37                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue39                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue41                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue43                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLPartsTotalArmLeftParam  K2Node_MakeStruct_TTLPartsTotalArmLeftParam                      (NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue44                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue45                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue46                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue47                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue49                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue51                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue11                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue53                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue12                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue55                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLPartsTotalArmRightParam K2Node_MakeStruct_TTLPartsTotalArmRightParam                     (NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue56                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue57                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLPartsTotalAttackParam   K2Node_MakeStruct_TTLPartsTotalAttackParam                       (NoDestructor)
// float                              K2Node_MathExpression_ReturnValue13                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue14                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue15                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue16                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue17                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue18                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLPartsTotalGroundParam   K2Node_MakeStruct_TTLPartsTotalGroundParam                       (NoDestructor)
// float                              K2Node_MathExpression_ReturnValue19                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue20                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue21                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue62                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue22                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLPartsTotalLockonParam   K2Node_MakeStruct_TTLPartsTotalLockonParam                       (NoDestructor)
// float                              K2Node_MathExpression_ReturnValue23                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue24                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLPartsTotalFlyingParam   K2Node_MakeStruct_TTLPartsTotalFlyingParam                       (NoDestructor)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue20                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue21                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue22                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue4                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue23                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_MathExpression_ReturnValue25                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue26                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLPartsTotalMoveCorrectionParamK2Node_MakeStruct_TTLPartsTotalMoveCorrectionParam               (NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue65                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue66                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue67                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue68                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue69                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue70                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue71                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue72                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue73                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue74                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue75                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue76                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue77                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue78                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue79                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue80                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue27                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue81                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue82                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue28                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue83                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue84                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue85                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue86                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue87                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue88                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue89                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue90                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue91                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue92                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue93                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue94                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLPartsTotalDefParam      K2Node_MakeStruct_TTLPartsTotalDefParam                          (NoDestructor)
// float                              K2Node_MathExpression_ReturnValue29                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue30                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue20                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTTLPartsTotalCoolParam     K2Node_MakeStruct_TTLPartsTotalCoolParam                         (NoDestructor)
// struct FTTLPartsTotalParam         K2Node_MakeStruct_TTLPartsTotalParam                             (None)
// float                              CallFunc_Add_FloatFloat_ReturnValue95                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue96                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue97                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue98                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue99                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue100                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue101                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue102                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue103                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue104                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue105                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue106                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue107                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue108                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue109                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue110                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue111                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue112                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue113                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UParameterCalculator_C::CalcTotalParam(struct FTTLPartsHeadParamRow& HeadParam, struct FTTLPartsBodyParamRow& BodyParam, struct FTTLPartsInsideParamRow& InsideParam, struct FTTLPartsArmRightParamRow& ArmRightParam, struct FTTLPartsArmLeftParamRow& ArmLeftParam, struct FTTLPartsLegsParamRow& LegsParam, struct FTTLPartsTotalParam* TotalParam, struct FTTLWeaponParamBaseRow& LeftWeapon, struct FTTLWeaponParamBaseRow& RightWeapon, struct FTTLWeaponParamBaseRow& ShoulderWeapon, struct FTTLWeaponParamBaseRow& SupportWeapon, struct FTTLWeaponParamBaseRow& LeftRackWeapon, struct FTTLWeaponParamBaseRow& RightRackWeapon, float L_TotalGroundCoolSpeed, float L_TotalFlightCoolSpeed, float L_Capacity, float L_TotalWeight, float L_TotalCost, const struct FTTLWeaponParamBaseRow& L_ShoulderWeaponParam, const struct FTTLWeaponParamBaseRow& L_RightWeaponParam, const struct FTTLWeaponParamBaseRow& L_LeftWeaponParam, const struct FTTLPartsLegsParamRow& L_LegsParam, const struct FTTLPartsArmLeftParamRow& L_ArmLeftParam, const struct FTTLPartsArmRightParamRow& L_ArmRightParam, const struct FTTLPartsInsideParamRow& L_InsideParam, const struct FTTLPartsBodyParamRow& L_BodyParam, const struct FTTLWeaponParamBaseRow& L_RightRackParam, const struct FTTLWeaponParamBaseRow& L_LeftRackParam, const struct FTTLWeaponParamBaseRow& L_SupportWeaponParam, const struct FTTLPartsHeadParamRow& L_HeadParam, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue1, float CallFunc_SelectFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue3, bool CallFunc_EqualEqual_ByteByte_ReturnValue4, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue5, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue6, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue7, bool CallFunc_BooleanOR_ReturnValue3, bool CallFunc_EqualEqual_ByteByte_ReturnValue8, float CallFunc_SelectFloat_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue4, float CallFunc_Multiply_FloatFloat_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue9, bool CallFunc_EqualEqual_ByteByte_ReturnValue10, bool CallFunc_BooleanOR_ReturnValue5, bool CallFunc_EqualEqual_ByteByte_ReturnValue11, bool CallFunc_BooleanOR_ReturnValue6, bool CallFunc_BooleanOR_ReturnValue7, const struct FTTLExtraAttachmentParam& CallFunc_GetExtraAttachmentParameterFromWeaponBase_ReturnValue, float CallFunc_SelectFloat_ReturnValue3, float CallFunc_Multiply_FloatFloat_ReturnValue3, const struct FTTLExtraAttachmentParam& CallFunc_GetExtraAttachmentParameterFromWeaponBase_ReturnValue1, const struct FTTLExtraAttachmentParam& CallFunc_GetExtraAttachmentParameterFromWeaponBase_ReturnValue2, const struct FTTLExtraAttachmentParam& CallFunc_GetExtraAttachmentParameterFromWeaponBase_ReturnValue3, const struct FTTLExtraAttachmentParam& CallFunc_GetExtraAttachmentParameterFromWeaponBase_ReturnValue4, const struct FTTLExtraAttachmentParam& CallFunc_GetExtraAttachmentParameterFromWeaponBase_ReturnValue5, const struct FTTLExtraAttachmentParam& CallFunc_GetExtraAttachmentParameterFromLeg_ReturnValue, const struct FTTLExtraAttachmentParam& CallFunc_GetExtraAttachmentParameterFromLeftArm_ReturnValue, const struct FTTLExtraAttachmentParam& CallFunc_GetExtraAttachmentParameterFromRightArm_ReturnValue, const struct FTTLExtraAttachmentParam& CallFunc_GetExtraAttachmentParameterFromInside_ReturnValue, const struct FTTLExtraAttachmentParam& CallFunc_GetExtraAttachmentParameterFromBody_ReturnValue, const struct FTTLExtraAttachmentParam& CallFunc_GetExtraAttachmentParameterFromHead_ReturnValue, const struct FTTLExtraAttachmentParam& CallFunc_CalcTotalExtraAttachmentParameter_outParam, float CallFunc_Add_FloatFloat_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue3, float CallFunc_Add_FloatFloat_ReturnValue4, float CallFunc_Add_FloatFloat_ReturnValue5, float CallFunc_Add_FloatFloat_ReturnValue6, const struct FTTLPartsTotalFemtoParam& K2Node_MakeStruct_TTLPartsTotalFemtoParam, float CallFunc_Add_FloatFloat_ReturnValue7, const struct FTTLPartsTotalCorrectionParam& K2Node_MakeStruct_TTLPartsTotalCorrectionParam, float CallFunc_Add_FloatFloat_ReturnValue8, const struct FTTLPartsTotalShieldParam& K2Node_MakeStruct_TTLPartsTotalShieldParam, float CallFunc_Add_FloatFloat_ReturnValue9, float CallFunc_Add_FloatFloat_ReturnValue10, float CallFunc_Add_FloatFloat_ReturnValue11, float CallFunc_Add_FloatFloat_ReturnValue12, const struct FTTLPartsTotalArmorParam& K2Node_MakeStruct_TTLPartsTotalArmorParam, float CallFunc_Add_FloatFloat_ReturnValue13, float CallFunc_Add_FloatFloat_ReturnValue14, float CallFunc_Add_FloatFloat_ReturnValue15, float CallFunc_Add_FloatFloat_ReturnValue16, float K2Node_MathExpression_ReturnValue, float K2Node_MathExpression_ReturnValue1, float K2Node_MathExpression_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue12, bool CallFunc_EqualEqual_ByteByte_ReturnValue13, float CallFunc_Add_FloatFloat_ReturnValue19, bool CallFunc_BooleanOR_ReturnValue8, bool CallFunc_EqualEqual_ByteByte_ReturnValue14, float CallFunc_SelectFloat_ReturnValue4, bool CallFunc_EqualEqual_ByteByte_ReturnValue15, bool CallFunc_EqualEqual_ByteByte_ReturnValue16, bool CallFunc_BooleanOR_ReturnValue9, bool CallFunc_EqualEqual_ByteByte_ReturnValue17, bool CallFunc_BooleanOR_ReturnValue10, bool CallFunc_BooleanOR_ReturnValue11, float CallFunc_SelectFloat_ReturnValue5, float CallFunc_Add_FloatFloat_ReturnValue20, float CallFunc_Multiply_FloatFloat_ReturnValue7, bool CallFunc_EqualEqual_ByteByte_ReturnValue18, bool CallFunc_EqualEqual_ByteByte_ReturnValue19, float CallFunc_SelectFloat_ReturnValue6, bool CallFunc_EqualEqual_ByteByte_ReturnValue20, float CallFunc_Multiply_FloatFloat_ReturnValue8, bool CallFunc_BooleanOR_ReturnValue12, bool CallFunc_EqualEqual_ByteByte_ReturnValue21, bool CallFunc_EqualEqual_ByteByte_ReturnValue22, bool CallFunc_BooleanOR_ReturnValue13, bool CallFunc_EqualEqual_ByteByte_ReturnValue23, bool CallFunc_BooleanOR_ReturnValue14, bool CallFunc_BooleanOR_ReturnValue15, float CallFunc_SelectFloat_ReturnValue7, float CallFunc_Add_FloatFloat_ReturnValue21, float CallFunc_Multiply_FloatFloat_ReturnValue9, float CallFunc_Add_FloatFloat_ReturnValue22, float CallFunc_Add_FloatFloat_ReturnValue23, float CallFunc_Add_FloatFloat_ReturnValue24, float CallFunc_Add_FloatFloat_ReturnValue25, float CallFunc_Add_FloatFloat_ReturnValue26, float CallFunc_Add_FloatFloat_ReturnValue27, float CallFunc_Add_FloatFloat_ReturnValue28, float CallFunc_Add_FloatFloat_ReturnValue29, float CallFunc_Add_FloatFloat_ReturnValue30, float CallFunc_Add_FloatFloat_ReturnValue31, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue32, int32 CallFunc_Add_IntInt_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue33, int32 CallFunc_Add_IntInt_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue34, int32 CallFunc_Add_IntInt_ReturnValue3, float CallFunc_Add_FloatFloat_ReturnValue35, int32 CallFunc_Add_IntInt_ReturnValue4, float CallFunc_Add_FloatFloat_ReturnValue36, bool CallFunc_EqualEqual_ByteByte_ReturnValue24, bool CallFunc_EqualEqual_ByteByte_ReturnValue25, float CallFunc_SelectFloat_ReturnValue8, bool CallFunc_EqualEqual_ByteByte_ReturnValue26, float CallFunc_Multiply_FloatFloat_ReturnValue10, bool CallFunc_BooleanOR_ReturnValue16, bool CallFunc_EqualEqual_ByteByte_ReturnValue27, bool CallFunc_EqualEqual_ByteByte_ReturnValue28, bool CallFunc_BooleanOR_ReturnValue17, bool CallFunc_EqualEqual_ByteByte_ReturnValue29, bool CallFunc_BooleanOR_ReturnValue18, bool CallFunc_BooleanOR_ReturnValue19, float CallFunc_SelectFloat_ReturnValue9, float K2Node_MathExpression_ReturnValue3, float CallFunc_Multiply_FloatFloat_ReturnValue11, float K2Node_MathExpression_ReturnValue4, float CallFunc_Add_FloatFloat_ReturnValue37, float K2Node_MathExpression_ReturnValue5, float CallFunc_Add_FloatFloat_ReturnValue39, float K2Node_MathExpression_ReturnValue6, float CallFunc_Add_FloatFloat_ReturnValue41, float K2Node_MathExpression_ReturnValue7, float CallFunc_Add_FloatFloat_ReturnValue43, const struct FTTLPartsTotalArmLeftParam& K2Node_MakeStruct_TTLPartsTotalArmLeftParam, float CallFunc_Add_FloatFloat_ReturnValue44, float CallFunc_Add_FloatFloat_ReturnValue45, float CallFunc_Add_FloatFloat_ReturnValue46, float K2Node_MathExpression_ReturnValue8, float CallFunc_Add_FloatFloat_ReturnValue47, float K2Node_MathExpression_ReturnValue9, float CallFunc_Add_FloatFloat_ReturnValue49, float K2Node_MathExpression_ReturnValue10, float CallFunc_Add_FloatFloat_ReturnValue51, float K2Node_MathExpression_ReturnValue11, float CallFunc_Add_FloatFloat_ReturnValue53, float K2Node_MathExpression_ReturnValue12, float CallFunc_Add_FloatFloat_ReturnValue55, const struct FTTLPartsTotalArmRightParam& K2Node_MakeStruct_TTLPartsTotalArmRightParam, float CallFunc_Add_FloatFloat_ReturnValue56, float CallFunc_Add_FloatFloat_ReturnValue57, const struct FTTLPartsTotalAttackParam& K2Node_MakeStruct_TTLPartsTotalAttackParam, float K2Node_MathExpression_ReturnValue13, float K2Node_MathExpression_ReturnValue14, float K2Node_MathExpression_ReturnValue15, float K2Node_MathExpression_ReturnValue16, float K2Node_MathExpression_ReturnValue17, float K2Node_MathExpression_ReturnValue18, const struct FTTLPartsTotalGroundParam& K2Node_MakeStruct_TTLPartsTotalGroundParam, float K2Node_MathExpression_ReturnValue19, float K2Node_MathExpression_ReturnValue20, float K2Node_MathExpression_ReturnValue21, float CallFunc_Add_FloatFloat_ReturnValue62, float K2Node_MathExpression_ReturnValue22, const struct FTTLPartsTotalLockonParam& K2Node_MakeStruct_TTLPartsTotalLockonParam, float K2Node_MathExpression_ReturnValue23, float K2Node_MathExpression_ReturnValue24, const struct FTTLPartsTotalFlyingParam& K2Node_MakeStruct_TTLPartsTotalFlyingParam, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue1, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue20, bool CallFunc_BooleanOR_ReturnValue21, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue22, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue4, bool CallFunc_BooleanOR_ReturnValue23, float K2Node_MathExpression_ReturnValue25, float K2Node_MathExpression_ReturnValue26, const struct FTTLPartsTotalMoveCorrectionParam& K2Node_MakeStruct_TTLPartsTotalMoveCorrectionParam, float CallFunc_Add_FloatFloat_ReturnValue65, float CallFunc_Add_FloatFloat_ReturnValue66, float CallFunc_Add_FloatFloat_ReturnValue67, float CallFunc_Add_FloatFloat_ReturnValue68, float CallFunc_Add_FloatFloat_ReturnValue69, float CallFunc_Add_FloatFloat_ReturnValue70, float CallFunc_Add_FloatFloat_ReturnValue71, float CallFunc_Add_FloatFloat_ReturnValue72, float CallFunc_Add_FloatFloat_ReturnValue73, float CallFunc_Add_FloatFloat_ReturnValue74, float CallFunc_Add_FloatFloat_ReturnValue75, float CallFunc_Add_FloatFloat_ReturnValue76, float CallFunc_Add_FloatFloat_ReturnValue77, float CallFunc_Add_FloatFloat_ReturnValue78, float CallFunc_Add_FloatFloat_ReturnValue79, float CallFunc_Add_FloatFloat_ReturnValue80, float K2Node_MathExpression_ReturnValue27, float CallFunc_Add_FloatFloat_ReturnValue81, float CallFunc_Add_FloatFloat_ReturnValue82, float K2Node_MathExpression_ReturnValue28, float CallFunc_Add_FloatFloat_ReturnValue83, float CallFunc_Add_FloatFloat_ReturnValue84, float CallFunc_Add_FloatFloat_ReturnValue85, float CallFunc_Add_FloatFloat_ReturnValue86, float CallFunc_Add_FloatFloat_ReturnValue87, float CallFunc_Add_FloatFloat_ReturnValue88, float CallFunc_Add_FloatFloat_ReturnValue89, float CallFunc_Add_FloatFloat_ReturnValue90, float CallFunc_Add_FloatFloat_ReturnValue91, float CallFunc_Add_FloatFloat_ReturnValue92, float CallFunc_Add_FloatFloat_ReturnValue93, float CallFunc_Add_FloatFloat_ReturnValue94, const struct FTTLPartsTotalDefParam& K2Node_MakeStruct_TTLPartsTotalDefParam, float K2Node_MathExpression_ReturnValue29, float K2Node_MathExpression_ReturnValue30, float CallFunc_Multiply_FloatFloat_ReturnValue20, const struct FTTLPartsTotalCoolParam& K2Node_MakeStruct_TTLPartsTotalCoolParam, const struct FTTLPartsTotalParam& K2Node_MakeStruct_TTLPartsTotalParam, float CallFunc_Add_FloatFloat_ReturnValue95, float CallFunc_Add_FloatFloat_ReturnValue96, float CallFunc_Add_FloatFloat_ReturnValue97, float CallFunc_Add_FloatFloat_ReturnValue98, float CallFunc_Add_FloatFloat_ReturnValue99, float CallFunc_Add_FloatFloat_ReturnValue100, float CallFunc_Add_FloatFloat_ReturnValue101, float CallFunc_Add_FloatFloat_ReturnValue102, float CallFunc_Add_FloatFloat_ReturnValue103, float CallFunc_Add_FloatFloat_ReturnValue104, float CallFunc_Add_FloatFloat_ReturnValue105, float CallFunc_Add_FloatFloat_ReturnValue106, float CallFunc_Add_FloatFloat_ReturnValue107, float CallFunc_Add_FloatFloat_ReturnValue108, float CallFunc_Add_FloatFloat_ReturnValue109, float CallFunc_Add_FloatFloat_ReturnValue110, float CallFunc_Add_FloatFloat_ReturnValue111, float CallFunc_Add_FloatFloat_ReturnValue112, float CallFunc_Add_FloatFloat_ReturnValue113)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ParameterCalculator_C", "CalcTotalParam");

	Params::UParameterCalculator_C_CalcTotalParam_Params Parms{};

	Parms.HeadParam = HeadParam;
	Parms.BodyParam = BodyParam;
	Parms.InsideParam = InsideParam;
	Parms.ArmRightParam = ArmRightParam;
	Parms.ArmLeftParam = ArmLeftParam;
	Parms.LegsParam = LegsParam;
	Parms.LeftWeapon = LeftWeapon;
	Parms.RightWeapon = RightWeapon;
	Parms.ShoulderWeapon = ShoulderWeapon;
	Parms.SupportWeapon = SupportWeapon;
	Parms.LeftRackWeapon = LeftRackWeapon;
	Parms.RightRackWeapon = RightRackWeapon;
	Parms.L_TotalGroundCoolSpeed = L_TotalGroundCoolSpeed;
	Parms.L_TotalFlightCoolSpeed = L_TotalFlightCoolSpeed;
	Parms.L_Capacity = L_Capacity;
	Parms.L_TotalWeight = L_TotalWeight;
	Parms.L_TotalCost = L_TotalCost;
	Parms.L_ShoulderWeaponParam = L_ShoulderWeaponParam;
	Parms.L_RightWeaponParam = L_RightWeaponParam;
	Parms.L_LeftWeaponParam = L_LeftWeaponParam;
	Parms.L_LegsParam = L_LegsParam;
	Parms.L_ArmLeftParam = L_ArmLeftParam;
	Parms.L_ArmRightParam = L_ArmRightParam;
	Parms.L_InsideParam = L_InsideParam;
	Parms.L_BodyParam = L_BodyParam;
	Parms.L_RightRackParam = L_RightRackParam;
	Parms.L_LeftRackParam = L_LeftRackParam;
	Parms.L_SupportWeaponParam = L_SupportWeaponParam;
	Parms.L_HeadParam = L_HeadParam;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue1 = CallFunc_Add_FloatFloat_ReturnValue1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue1 = CallFunc_SelectFloat_ReturnValue1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue1 = CallFunc_Multiply_FloatFloat_ReturnValue1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue3 = CallFunc_EqualEqual_ByteByte_ReturnValue3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue4 = CallFunc_EqualEqual_ByteByte_ReturnValue4;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue5 = CallFunc_EqualEqual_ByteByte_ReturnValue5;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue6 = CallFunc_EqualEqual_ByteByte_ReturnValue6;
	Parms.CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue7 = CallFunc_EqualEqual_ByteByte_ReturnValue7;
	Parms.CallFunc_BooleanOR_ReturnValue3 = CallFunc_BooleanOR_ReturnValue3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue8 = CallFunc_EqualEqual_ByteByte_ReturnValue8;
	Parms.CallFunc_SelectFloat_ReturnValue2 = CallFunc_SelectFloat_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue4 = CallFunc_BooleanOR_ReturnValue4;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue9 = CallFunc_EqualEqual_ByteByte_ReturnValue9;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue10 = CallFunc_EqualEqual_ByteByte_ReturnValue10;
	Parms.CallFunc_BooleanOR_ReturnValue5 = CallFunc_BooleanOR_ReturnValue5;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue11 = CallFunc_EqualEqual_ByteByte_ReturnValue11;
	Parms.CallFunc_BooleanOR_ReturnValue6 = CallFunc_BooleanOR_ReturnValue6;
	Parms.CallFunc_BooleanOR_ReturnValue7 = CallFunc_BooleanOR_ReturnValue7;
	Parms.CallFunc_GetExtraAttachmentParameterFromWeaponBase_ReturnValue = CallFunc_GetExtraAttachmentParameterFromWeaponBase_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue3 = CallFunc_SelectFloat_ReturnValue3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue3 = CallFunc_Multiply_FloatFloat_ReturnValue3;
	Parms.CallFunc_GetExtraAttachmentParameterFromWeaponBase_ReturnValue1 = CallFunc_GetExtraAttachmentParameterFromWeaponBase_ReturnValue1;
	Parms.CallFunc_GetExtraAttachmentParameterFromWeaponBase_ReturnValue2 = CallFunc_GetExtraAttachmentParameterFromWeaponBase_ReturnValue2;
	Parms.CallFunc_GetExtraAttachmentParameterFromWeaponBase_ReturnValue3 = CallFunc_GetExtraAttachmentParameterFromWeaponBase_ReturnValue3;
	Parms.CallFunc_GetExtraAttachmentParameterFromWeaponBase_ReturnValue4 = CallFunc_GetExtraAttachmentParameterFromWeaponBase_ReturnValue4;
	Parms.CallFunc_GetExtraAttachmentParameterFromWeaponBase_ReturnValue5 = CallFunc_GetExtraAttachmentParameterFromWeaponBase_ReturnValue5;
	Parms.CallFunc_GetExtraAttachmentParameterFromLeg_ReturnValue = CallFunc_GetExtraAttachmentParameterFromLeg_ReturnValue;
	Parms.CallFunc_GetExtraAttachmentParameterFromLeftArm_ReturnValue = CallFunc_GetExtraAttachmentParameterFromLeftArm_ReturnValue;
	Parms.CallFunc_GetExtraAttachmentParameterFromRightArm_ReturnValue = CallFunc_GetExtraAttachmentParameterFromRightArm_ReturnValue;
	Parms.CallFunc_GetExtraAttachmentParameterFromInside_ReturnValue = CallFunc_GetExtraAttachmentParameterFromInside_ReturnValue;
	Parms.CallFunc_GetExtraAttachmentParameterFromBody_ReturnValue = CallFunc_GetExtraAttachmentParameterFromBody_ReturnValue;
	Parms.CallFunc_GetExtraAttachmentParameterFromHead_ReturnValue = CallFunc_GetExtraAttachmentParameterFromHead_ReturnValue;
	Parms.CallFunc_CalcTotalExtraAttachmentParameter_outParam = CallFunc_CalcTotalExtraAttachmentParameter_outParam;
	Parms.CallFunc_Add_FloatFloat_ReturnValue2 = CallFunc_Add_FloatFloat_ReturnValue2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue3 = CallFunc_Add_FloatFloat_ReturnValue3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue4 = CallFunc_Add_FloatFloat_ReturnValue4;
	Parms.CallFunc_Add_FloatFloat_ReturnValue5 = CallFunc_Add_FloatFloat_ReturnValue5;
	Parms.CallFunc_Add_FloatFloat_ReturnValue6 = CallFunc_Add_FloatFloat_ReturnValue6;
	Parms.K2Node_MakeStruct_TTLPartsTotalFemtoParam = K2Node_MakeStruct_TTLPartsTotalFemtoParam;
	Parms.CallFunc_Add_FloatFloat_ReturnValue7 = CallFunc_Add_FloatFloat_ReturnValue7;
	Parms.K2Node_MakeStruct_TTLPartsTotalCorrectionParam = K2Node_MakeStruct_TTLPartsTotalCorrectionParam;
	Parms.CallFunc_Add_FloatFloat_ReturnValue8 = CallFunc_Add_FloatFloat_ReturnValue8;
	Parms.K2Node_MakeStruct_TTLPartsTotalShieldParam = K2Node_MakeStruct_TTLPartsTotalShieldParam;
	Parms.CallFunc_Add_FloatFloat_ReturnValue9 = CallFunc_Add_FloatFloat_ReturnValue9;
	Parms.CallFunc_Add_FloatFloat_ReturnValue10 = CallFunc_Add_FloatFloat_ReturnValue10;
	Parms.CallFunc_Add_FloatFloat_ReturnValue11 = CallFunc_Add_FloatFloat_ReturnValue11;
	Parms.CallFunc_Add_FloatFloat_ReturnValue12 = CallFunc_Add_FloatFloat_ReturnValue12;
	Parms.K2Node_MakeStruct_TTLPartsTotalArmorParam = K2Node_MakeStruct_TTLPartsTotalArmorParam;
	Parms.CallFunc_Add_FloatFloat_ReturnValue13 = CallFunc_Add_FloatFloat_ReturnValue13;
	Parms.CallFunc_Add_FloatFloat_ReturnValue14 = CallFunc_Add_FloatFloat_ReturnValue14;
	Parms.CallFunc_Add_FloatFloat_ReturnValue15 = CallFunc_Add_FloatFloat_ReturnValue15;
	Parms.CallFunc_Add_FloatFloat_ReturnValue16 = CallFunc_Add_FloatFloat_ReturnValue16;
	Parms.K2Node_MathExpression_ReturnValue = K2Node_MathExpression_ReturnValue;
	Parms.K2Node_MathExpression_ReturnValue1 = K2Node_MathExpression_ReturnValue1;
	Parms.K2Node_MathExpression_ReturnValue2 = K2Node_MathExpression_ReturnValue2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue12 = CallFunc_EqualEqual_ByteByte_ReturnValue12;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue13 = CallFunc_EqualEqual_ByteByte_ReturnValue13;
	Parms.CallFunc_Add_FloatFloat_ReturnValue19 = CallFunc_Add_FloatFloat_ReturnValue19;
	Parms.CallFunc_BooleanOR_ReturnValue8 = CallFunc_BooleanOR_ReturnValue8;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue14 = CallFunc_EqualEqual_ByteByte_ReturnValue14;
	Parms.CallFunc_SelectFloat_ReturnValue4 = CallFunc_SelectFloat_ReturnValue4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue15 = CallFunc_EqualEqual_ByteByte_ReturnValue15;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue16 = CallFunc_EqualEqual_ByteByte_ReturnValue16;
	Parms.CallFunc_BooleanOR_ReturnValue9 = CallFunc_BooleanOR_ReturnValue9;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue17 = CallFunc_EqualEqual_ByteByte_ReturnValue17;
	Parms.CallFunc_BooleanOR_ReturnValue10 = CallFunc_BooleanOR_ReturnValue10;
	Parms.CallFunc_BooleanOR_ReturnValue11 = CallFunc_BooleanOR_ReturnValue11;
	Parms.CallFunc_SelectFloat_ReturnValue5 = CallFunc_SelectFloat_ReturnValue5;
	Parms.CallFunc_Add_FloatFloat_ReturnValue20 = CallFunc_Add_FloatFloat_ReturnValue20;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue7 = CallFunc_Multiply_FloatFloat_ReturnValue7;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue18 = CallFunc_EqualEqual_ByteByte_ReturnValue18;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue19 = CallFunc_EqualEqual_ByteByte_ReturnValue19;
	Parms.CallFunc_SelectFloat_ReturnValue6 = CallFunc_SelectFloat_ReturnValue6;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue20 = CallFunc_EqualEqual_ByteByte_ReturnValue20;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue8 = CallFunc_Multiply_FloatFloat_ReturnValue8;
	Parms.CallFunc_BooleanOR_ReturnValue12 = CallFunc_BooleanOR_ReturnValue12;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue21 = CallFunc_EqualEqual_ByteByte_ReturnValue21;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue22 = CallFunc_EqualEqual_ByteByte_ReturnValue22;
	Parms.CallFunc_BooleanOR_ReturnValue13 = CallFunc_BooleanOR_ReturnValue13;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue23 = CallFunc_EqualEqual_ByteByte_ReturnValue23;
	Parms.CallFunc_BooleanOR_ReturnValue14 = CallFunc_BooleanOR_ReturnValue14;
	Parms.CallFunc_BooleanOR_ReturnValue15 = CallFunc_BooleanOR_ReturnValue15;
	Parms.CallFunc_SelectFloat_ReturnValue7 = CallFunc_SelectFloat_ReturnValue7;
	Parms.CallFunc_Add_FloatFloat_ReturnValue21 = CallFunc_Add_FloatFloat_ReturnValue21;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue9 = CallFunc_Multiply_FloatFloat_ReturnValue9;
	Parms.CallFunc_Add_FloatFloat_ReturnValue22 = CallFunc_Add_FloatFloat_ReturnValue22;
	Parms.CallFunc_Add_FloatFloat_ReturnValue23 = CallFunc_Add_FloatFloat_ReturnValue23;
	Parms.CallFunc_Add_FloatFloat_ReturnValue24 = CallFunc_Add_FloatFloat_ReturnValue24;
	Parms.CallFunc_Add_FloatFloat_ReturnValue25 = CallFunc_Add_FloatFloat_ReturnValue25;
	Parms.CallFunc_Add_FloatFloat_ReturnValue26 = CallFunc_Add_FloatFloat_ReturnValue26;
	Parms.CallFunc_Add_FloatFloat_ReturnValue27 = CallFunc_Add_FloatFloat_ReturnValue27;
	Parms.CallFunc_Add_FloatFloat_ReturnValue28 = CallFunc_Add_FloatFloat_ReturnValue28;
	Parms.CallFunc_Add_FloatFloat_ReturnValue29 = CallFunc_Add_FloatFloat_ReturnValue29;
	Parms.CallFunc_Add_FloatFloat_ReturnValue30 = CallFunc_Add_FloatFloat_ReturnValue30;
	Parms.CallFunc_Add_FloatFloat_ReturnValue31 = CallFunc_Add_FloatFloat_ReturnValue31;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue32 = CallFunc_Add_FloatFloat_ReturnValue32;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue33 = CallFunc_Add_FloatFloat_ReturnValue33;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue34 = CallFunc_Add_FloatFloat_ReturnValue34;
	Parms.CallFunc_Add_IntInt_ReturnValue3 = CallFunc_Add_IntInt_ReturnValue3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue35 = CallFunc_Add_FloatFloat_ReturnValue35;
	Parms.CallFunc_Add_IntInt_ReturnValue4 = CallFunc_Add_IntInt_ReturnValue4;
	Parms.CallFunc_Add_FloatFloat_ReturnValue36 = CallFunc_Add_FloatFloat_ReturnValue36;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue24 = CallFunc_EqualEqual_ByteByte_ReturnValue24;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue25 = CallFunc_EqualEqual_ByteByte_ReturnValue25;
	Parms.CallFunc_SelectFloat_ReturnValue8 = CallFunc_SelectFloat_ReturnValue8;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue26 = CallFunc_EqualEqual_ByteByte_ReturnValue26;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue10 = CallFunc_Multiply_FloatFloat_ReturnValue10;
	Parms.CallFunc_BooleanOR_ReturnValue16 = CallFunc_BooleanOR_ReturnValue16;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue27 = CallFunc_EqualEqual_ByteByte_ReturnValue27;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue28 = CallFunc_EqualEqual_ByteByte_ReturnValue28;
	Parms.CallFunc_BooleanOR_ReturnValue17 = CallFunc_BooleanOR_ReturnValue17;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue29 = CallFunc_EqualEqual_ByteByte_ReturnValue29;
	Parms.CallFunc_BooleanOR_ReturnValue18 = CallFunc_BooleanOR_ReturnValue18;
	Parms.CallFunc_BooleanOR_ReturnValue19 = CallFunc_BooleanOR_ReturnValue19;
	Parms.CallFunc_SelectFloat_ReturnValue9 = CallFunc_SelectFloat_ReturnValue9;
	Parms.K2Node_MathExpression_ReturnValue3 = K2Node_MathExpression_ReturnValue3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue11 = CallFunc_Multiply_FloatFloat_ReturnValue11;
	Parms.K2Node_MathExpression_ReturnValue4 = K2Node_MathExpression_ReturnValue4;
	Parms.CallFunc_Add_FloatFloat_ReturnValue37 = CallFunc_Add_FloatFloat_ReturnValue37;
	Parms.K2Node_MathExpression_ReturnValue5 = K2Node_MathExpression_ReturnValue5;
	Parms.CallFunc_Add_FloatFloat_ReturnValue39 = CallFunc_Add_FloatFloat_ReturnValue39;
	Parms.K2Node_MathExpression_ReturnValue6 = K2Node_MathExpression_ReturnValue6;
	Parms.CallFunc_Add_FloatFloat_ReturnValue41 = CallFunc_Add_FloatFloat_ReturnValue41;
	Parms.K2Node_MathExpression_ReturnValue7 = K2Node_MathExpression_ReturnValue7;
	Parms.CallFunc_Add_FloatFloat_ReturnValue43 = CallFunc_Add_FloatFloat_ReturnValue43;
	Parms.K2Node_MakeStruct_TTLPartsTotalArmLeftParam = K2Node_MakeStruct_TTLPartsTotalArmLeftParam;
	Parms.CallFunc_Add_FloatFloat_ReturnValue44 = CallFunc_Add_FloatFloat_ReturnValue44;
	Parms.CallFunc_Add_FloatFloat_ReturnValue45 = CallFunc_Add_FloatFloat_ReturnValue45;
	Parms.CallFunc_Add_FloatFloat_ReturnValue46 = CallFunc_Add_FloatFloat_ReturnValue46;
	Parms.K2Node_MathExpression_ReturnValue8 = K2Node_MathExpression_ReturnValue8;
	Parms.CallFunc_Add_FloatFloat_ReturnValue47 = CallFunc_Add_FloatFloat_ReturnValue47;
	Parms.K2Node_MathExpression_ReturnValue9 = K2Node_MathExpression_ReturnValue9;
	Parms.CallFunc_Add_FloatFloat_ReturnValue49 = CallFunc_Add_FloatFloat_ReturnValue49;
	Parms.K2Node_MathExpression_ReturnValue10 = K2Node_MathExpression_ReturnValue10;
	Parms.CallFunc_Add_FloatFloat_ReturnValue51 = CallFunc_Add_FloatFloat_ReturnValue51;
	Parms.K2Node_MathExpression_ReturnValue11 = K2Node_MathExpression_ReturnValue11;
	Parms.CallFunc_Add_FloatFloat_ReturnValue53 = CallFunc_Add_FloatFloat_ReturnValue53;
	Parms.K2Node_MathExpression_ReturnValue12 = K2Node_MathExpression_ReturnValue12;
	Parms.CallFunc_Add_FloatFloat_ReturnValue55 = CallFunc_Add_FloatFloat_ReturnValue55;
	Parms.K2Node_MakeStruct_TTLPartsTotalArmRightParam = K2Node_MakeStruct_TTLPartsTotalArmRightParam;
	Parms.CallFunc_Add_FloatFloat_ReturnValue56 = CallFunc_Add_FloatFloat_ReturnValue56;
	Parms.CallFunc_Add_FloatFloat_ReturnValue57 = CallFunc_Add_FloatFloat_ReturnValue57;
	Parms.K2Node_MakeStruct_TTLPartsTotalAttackParam = K2Node_MakeStruct_TTLPartsTotalAttackParam;
	Parms.K2Node_MathExpression_ReturnValue13 = K2Node_MathExpression_ReturnValue13;
	Parms.K2Node_MathExpression_ReturnValue14 = K2Node_MathExpression_ReturnValue14;
	Parms.K2Node_MathExpression_ReturnValue15 = K2Node_MathExpression_ReturnValue15;
	Parms.K2Node_MathExpression_ReturnValue16 = K2Node_MathExpression_ReturnValue16;
	Parms.K2Node_MathExpression_ReturnValue17 = K2Node_MathExpression_ReturnValue17;
	Parms.K2Node_MathExpression_ReturnValue18 = K2Node_MathExpression_ReturnValue18;
	Parms.K2Node_MakeStruct_TTLPartsTotalGroundParam = K2Node_MakeStruct_TTLPartsTotalGroundParam;
	Parms.K2Node_MathExpression_ReturnValue19 = K2Node_MathExpression_ReturnValue19;
	Parms.K2Node_MathExpression_ReturnValue20 = K2Node_MathExpression_ReturnValue20;
	Parms.K2Node_MathExpression_ReturnValue21 = K2Node_MathExpression_ReturnValue21;
	Parms.CallFunc_Add_FloatFloat_ReturnValue62 = CallFunc_Add_FloatFloat_ReturnValue62;
	Parms.K2Node_MathExpression_ReturnValue22 = K2Node_MathExpression_ReturnValue22;
	Parms.K2Node_MakeStruct_TTLPartsTotalLockonParam = K2Node_MakeStruct_TTLPartsTotalLockonParam;
	Parms.K2Node_MathExpression_ReturnValue23 = K2Node_MathExpression_ReturnValue23;
	Parms.K2Node_MathExpression_ReturnValue24 = K2Node_MathExpression_ReturnValue24;
	Parms.K2Node_MakeStruct_TTLPartsTotalFlyingParam = K2Node_MakeStruct_TTLPartsTotalFlyingParam;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue1 = CallFunc_NearlyEqual_FloatFloat_ReturnValue1;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue2 = CallFunc_NearlyEqual_FloatFloat_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue20 = CallFunc_BooleanOR_ReturnValue20;
	Parms.CallFunc_BooleanOR_ReturnValue21 = CallFunc_BooleanOR_ReturnValue21;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue3 = CallFunc_NearlyEqual_FloatFloat_ReturnValue3;
	Parms.CallFunc_BooleanOR_ReturnValue22 = CallFunc_BooleanOR_ReturnValue22;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue4 = CallFunc_NearlyEqual_FloatFloat_ReturnValue4;
	Parms.CallFunc_BooleanOR_ReturnValue23 = CallFunc_BooleanOR_ReturnValue23;
	Parms.K2Node_MathExpression_ReturnValue25 = K2Node_MathExpression_ReturnValue25;
	Parms.K2Node_MathExpression_ReturnValue26 = K2Node_MathExpression_ReturnValue26;
	Parms.K2Node_MakeStruct_TTLPartsTotalMoveCorrectionParam = K2Node_MakeStruct_TTLPartsTotalMoveCorrectionParam;
	Parms.CallFunc_Add_FloatFloat_ReturnValue65 = CallFunc_Add_FloatFloat_ReturnValue65;
	Parms.CallFunc_Add_FloatFloat_ReturnValue66 = CallFunc_Add_FloatFloat_ReturnValue66;
	Parms.CallFunc_Add_FloatFloat_ReturnValue67 = CallFunc_Add_FloatFloat_ReturnValue67;
	Parms.CallFunc_Add_FloatFloat_ReturnValue68 = CallFunc_Add_FloatFloat_ReturnValue68;
	Parms.CallFunc_Add_FloatFloat_ReturnValue69 = CallFunc_Add_FloatFloat_ReturnValue69;
	Parms.CallFunc_Add_FloatFloat_ReturnValue70 = CallFunc_Add_FloatFloat_ReturnValue70;
	Parms.CallFunc_Add_FloatFloat_ReturnValue71 = CallFunc_Add_FloatFloat_ReturnValue71;
	Parms.CallFunc_Add_FloatFloat_ReturnValue72 = CallFunc_Add_FloatFloat_ReturnValue72;
	Parms.CallFunc_Add_FloatFloat_ReturnValue73 = CallFunc_Add_FloatFloat_ReturnValue73;
	Parms.CallFunc_Add_FloatFloat_ReturnValue74 = CallFunc_Add_FloatFloat_ReturnValue74;
	Parms.CallFunc_Add_FloatFloat_ReturnValue75 = CallFunc_Add_FloatFloat_ReturnValue75;
	Parms.CallFunc_Add_FloatFloat_ReturnValue76 = CallFunc_Add_FloatFloat_ReturnValue76;
	Parms.CallFunc_Add_FloatFloat_ReturnValue77 = CallFunc_Add_FloatFloat_ReturnValue77;
	Parms.CallFunc_Add_FloatFloat_ReturnValue78 = CallFunc_Add_FloatFloat_ReturnValue78;
	Parms.CallFunc_Add_FloatFloat_ReturnValue79 = CallFunc_Add_FloatFloat_ReturnValue79;
	Parms.CallFunc_Add_FloatFloat_ReturnValue80 = CallFunc_Add_FloatFloat_ReturnValue80;
	Parms.K2Node_MathExpression_ReturnValue27 = K2Node_MathExpression_ReturnValue27;
	Parms.CallFunc_Add_FloatFloat_ReturnValue81 = CallFunc_Add_FloatFloat_ReturnValue81;
	Parms.CallFunc_Add_FloatFloat_ReturnValue82 = CallFunc_Add_FloatFloat_ReturnValue82;
	Parms.K2Node_MathExpression_ReturnValue28 = K2Node_MathExpression_ReturnValue28;
	Parms.CallFunc_Add_FloatFloat_ReturnValue83 = CallFunc_Add_FloatFloat_ReturnValue83;
	Parms.CallFunc_Add_FloatFloat_ReturnValue84 = CallFunc_Add_FloatFloat_ReturnValue84;
	Parms.CallFunc_Add_FloatFloat_ReturnValue85 = CallFunc_Add_FloatFloat_ReturnValue85;
	Parms.CallFunc_Add_FloatFloat_ReturnValue86 = CallFunc_Add_FloatFloat_ReturnValue86;
	Parms.CallFunc_Add_FloatFloat_ReturnValue87 = CallFunc_Add_FloatFloat_ReturnValue87;
	Parms.CallFunc_Add_FloatFloat_ReturnValue88 = CallFunc_Add_FloatFloat_ReturnValue88;
	Parms.CallFunc_Add_FloatFloat_ReturnValue89 = CallFunc_Add_FloatFloat_ReturnValue89;
	Parms.CallFunc_Add_FloatFloat_ReturnValue90 = CallFunc_Add_FloatFloat_ReturnValue90;
	Parms.CallFunc_Add_FloatFloat_ReturnValue91 = CallFunc_Add_FloatFloat_ReturnValue91;
	Parms.CallFunc_Add_FloatFloat_ReturnValue92 = CallFunc_Add_FloatFloat_ReturnValue92;
	Parms.CallFunc_Add_FloatFloat_ReturnValue93 = CallFunc_Add_FloatFloat_ReturnValue93;
	Parms.CallFunc_Add_FloatFloat_ReturnValue94 = CallFunc_Add_FloatFloat_ReturnValue94;
	Parms.K2Node_MakeStruct_TTLPartsTotalDefParam = K2Node_MakeStruct_TTLPartsTotalDefParam;
	Parms.K2Node_MathExpression_ReturnValue29 = K2Node_MathExpression_ReturnValue29;
	Parms.K2Node_MathExpression_ReturnValue30 = K2Node_MathExpression_ReturnValue30;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue20 = CallFunc_Multiply_FloatFloat_ReturnValue20;
	Parms.K2Node_MakeStruct_TTLPartsTotalCoolParam = K2Node_MakeStruct_TTLPartsTotalCoolParam;
	Parms.K2Node_MakeStruct_TTLPartsTotalParam = K2Node_MakeStruct_TTLPartsTotalParam;
	Parms.CallFunc_Add_FloatFloat_ReturnValue95 = CallFunc_Add_FloatFloat_ReturnValue95;
	Parms.CallFunc_Add_FloatFloat_ReturnValue96 = CallFunc_Add_FloatFloat_ReturnValue96;
	Parms.CallFunc_Add_FloatFloat_ReturnValue97 = CallFunc_Add_FloatFloat_ReturnValue97;
	Parms.CallFunc_Add_FloatFloat_ReturnValue98 = CallFunc_Add_FloatFloat_ReturnValue98;
	Parms.CallFunc_Add_FloatFloat_ReturnValue99 = CallFunc_Add_FloatFloat_ReturnValue99;
	Parms.CallFunc_Add_FloatFloat_ReturnValue100 = CallFunc_Add_FloatFloat_ReturnValue100;
	Parms.CallFunc_Add_FloatFloat_ReturnValue101 = CallFunc_Add_FloatFloat_ReturnValue101;
	Parms.CallFunc_Add_FloatFloat_ReturnValue102 = CallFunc_Add_FloatFloat_ReturnValue102;
	Parms.CallFunc_Add_FloatFloat_ReturnValue103 = CallFunc_Add_FloatFloat_ReturnValue103;
	Parms.CallFunc_Add_FloatFloat_ReturnValue104 = CallFunc_Add_FloatFloat_ReturnValue104;
	Parms.CallFunc_Add_FloatFloat_ReturnValue105 = CallFunc_Add_FloatFloat_ReturnValue105;
	Parms.CallFunc_Add_FloatFloat_ReturnValue106 = CallFunc_Add_FloatFloat_ReturnValue106;
	Parms.CallFunc_Add_FloatFloat_ReturnValue107 = CallFunc_Add_FloatFloat_ReturnValue107;
	Parms.CallFunc_Add_FloatFloat_ReturnValue108 = CallFunc_Add_FloatFloat_ReturnValue108;
	Parms.CallFunc_Add_FloatFloat_ReturnValue109 = CallFunc_Add_FloatFloat_ReturnValue109;
	Parms.CallFunc_Add_FloatFloat_ReturnValue110 = CallFunc_Add_FloatFloat_ReturnValue110;
	Parms.CallFunc_Add_FloatFloat_ReturnValue111 = CallFunc_Add_FloatFloat_ReturnValue111;
	Parms.CallFunc_Add_FloatFloat_ReturnValue112 = CallFunc_Add_FloatFloat_ReturnValue112;
	Parms.CallFunc_Add_FloatFloat_ReturnValue113 = CallFunc_Add_FloatFloat_ReturnValue113;

	UObject::ProcessEvent(Func, &Parms);

	if (TotalParam != nullptr)
		*TotalParam = std::move(Parms.TotalParam);

}

}


