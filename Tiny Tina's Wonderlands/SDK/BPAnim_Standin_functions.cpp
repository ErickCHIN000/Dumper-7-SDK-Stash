#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_Standin.BPAnim_Standin_C
// (None)

class UClass* UBPAnim_Standin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_Standin_C");

	return Clss;
}


// BPAnim_Standin_C BPAnim_Standin.Default__BPAnim_Standin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_Standin_C* UBPAnim_Standin_C::GetDefaultObj()
{
	static class UBPAnim_Standin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_Standin_C*>(UBPAnim_Standin_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_Standin.BPAnim_Standin_C.3rdPerson_IK_Adjust
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  InTransform_A                                                    (BlueprintVisible, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FTransform                  InTransform_B                                                    (BlueprintVisible, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
// float                              WeaponScale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      Mesh                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DebugGrips                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  OutTransform_A                                                   (Parm, OutParm, IsPlainOldData, NoDestructor)
// struct FTransform                  OutTransform_B                                                   (Parm, OutParm, IsPlainOldData, NoDestructor)
// struct FTransform                  A_Offset                                                         (Parm, OutParm, IsPlainOldData, NoDestructor)
// struct FTransform                  B_Offset                                                         (Parm, OutParm, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location1                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation1                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale1                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue1                         (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location2                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation2                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale2                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue2                         (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location3                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation3                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale3                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue3                         (IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_NegateRotator_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location4                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation4                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale4                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_NegateVector_ReturnValue                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_NegateRotator_ReturnValue1                              (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue1                              (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_NegateVector_ReturnValue1                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location5                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation5                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale5                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue2                              (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue1                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue3                              (IsPlainOldData, NoDestructor)

void UBPAnim_Standin_C::ThreerdPerson_IK_Adjust(struct FTransform& InTransform_A, struct FTransform& InTransform_B, float WeaponScale, class USkeletalMeshComponent* Mesh, bool DebugGrips, struct FTransform* OutTransform_A, struct FTransform* OutTransform_B, struct FTransform* A_Offset, struct FTransform* B_Offset, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location1, const struct FRotator& CallFunc_BreakTransform_Rotation1, const struct FVector& CallFunc_BreakTransform_Scale1, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue1, const struct FVector& CallFunc_BreakTransform_Location2, const struct FRotator& CallFunc_BreakTransform_Rotation2, const struct FVector& CallFunc_BreakTransform_Scale2, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue2, const struct FVector& CallFunc_BreakTransform_Location3, const struct FRotator& CallFunc_BreakTransform_Rotation3, const struct FVector& CallFunc_BreakTransform_Scale3, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue3, const struct FRotator& CallFunc_NegateRotator_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location4, const struct FRotator& CallFunc_BreakTransform_Rotation4, const struct FVector& CallFunc_BreakTransform_Scale4, const struct FVector& CallFunc_NegateVector_ReturnValue, const struct FRotator& CallFunc_NegateRotator_ReturnValue1, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, const struct FVector& CallFunc_NegateVector_ReturnValue1, const struct FVector& CallFunc_BreakTransform_Location5, const struct FRotator& CallFunc_BreakTransform_Rotation5, const struct FVector& CallFunc_BreakTransform_Scale5, const struct FTransform& CallFunc_MakeTransform_ReturnValue2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FTransform& CallFunc_MakeTransform_ReturnValue3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_Standin_C", "3rdPerson_IK_Adjust");

	Params::UBPAnim_Standin_C_ThreerdPerson_IK_Adjust_Params Parms{};

	Parms.InTransform_A = InTransform_A;
	Parms.InTransform_B = InTransform_B;
	Parms.WeaponScale = WeaponScale;
	Parms.Mesh = Mesh;
	Parms.DebugGrips = DebugGrips;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location1 = CallFunc_BreakTransform_Location1;
	Parms.CallFunc_BreakTransform_Rotation1 = CallFunc_BreakTransform_Rotation1;
	Parms.CallFunc_BreakTransform_Scale1 = CallFunc_BreakTransform_Scale1;
	Parms.CallFunc_GetSocketTransform_ReturnValue1 = CallFunc_GetSocketTransform_ReturnValue1;
	Parms.CallFunc_BreakTransform_Location2 = CallFunc_BreakTransform_Location2;
	Parms.CallFunc_BreakTransform_Rotation2 = CallFunc_BreakTransform_Rotation2;
	Parms.CallFunc_BreakTransform_Scale2 = CallFunc_BreakTransform_Scale2;
	Parms.CallFunc_GetSocketTransform_ReturnValue2 = CallFunc_GetSocketTransform_ReturnValue2;
	Parms.CallFunc_BreakTransform_Location3 = CallFunc_BreakTransform_Location3;
	Parms.CallFunc_BreakTransform_Rotation3 = CallFunc_BreakTransform_Rotation3;
	Parms.CallFunc_BreakTransform_Scale3 = CallFunc_BreakTransform_Scale3;
	Parms.CallFunc_GetSocketTransform_ReturnValue3 = CallFunc_GetSocketTransform_ReturnValue3;
	Parms.CallFunc_NegateRotator_ReturnValue = CallFunc_NegateRotator_ReturnValue;
	Parms.CallFunc_BreakTransform_Location4 = CallFunc_BreakTransform_Location4;
	Parms.CallFunc_BreakTransform_Rotation4 = CallFunc_BreakTransform_Rotation4;
	Parms.CallFunc_BreakTransform_Scale4 = CallFunc_BreakTransform_Scale4;
	Parms.CallFunc_NegateVector_ReturnValue = CallFunc_NegateVector_ReturnValue;
	Parms.CallFunc_NegateRotator_ReturnValue1 = CallFunc_NegateRotator_ReturnValue1;
	Parms.CallFunc_MakeTransform_ReturnValue1 = CallFunc_MakeTransform_ReturnValue1;
	Parms.CallFunc_NegateVector_ReturnValue1 = CallFunc_NegateVector_ReturnValue1;
	Parms.CallFunc_BreakTransform_Location5 = CallFunc_BreakTransform_Location5;
	Parms.CallFunc_BreakTransform_Rotation5 = CallFunc_BreakTransform_Rotation5;
	Parms.CallFunc_BreakTransform_Scale5 = CallFunc_BreakTransform_Scale5;
	Parms.CallFunc_MakeTransform_ReturnValue2 = CallFunc_MakeTransform_ReturnValue2;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue1 = CallFunc_Multiply_VectorFloat_ReturnValue1;
	Parms.CallFunc_MakeTransform_ReturnValue3 = CallFunc_MakeTransform_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);

	if (OutTransform_A != nullptr)
		*OutTransform_A = std::move(Parms.OutTransform_A);

	if (OutTransform_B != nullptr)
		*OutTransform_B = std::move(Parms.OutTransform_B);

	if (A_Offset != nullptr)
		*A_Offset = std::move(Parms.A_Offset);

	if (B_Offset != nullptr)
		*B_Offset = std::move(Parms.B_Offset);

}


// Function BPAnim_Standin.BPAnim_Standin_C.CalculateWeaponHoldData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                     Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeapon*                     PreviousWeapon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakWeapon*                  K2Node_DynamicCast_AsOak_Weapon                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue3                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue4                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue5                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOakInventoryBalanceStateComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UManufacturerData*           CallFunc_GetManufacturer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue6                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue7                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue8                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue9                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue10                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue11                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue12                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue13                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue14                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue15                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue16                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue1                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item5                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue4                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue5                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue6                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue7                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable5                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select5_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_Standin_C::CalculateWeaponHoldData(class AWeapon* Weapon, class AWeapon* PreviousWeapon, class AOakWeapon* K2Node_DynamicCast_AsOak_Weapon, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue4, bool CallFunc_EqualEqual_ObjectObject_ReturnValue5, bool CallFunc_IsValid_ReturnValue, class UOakInventoryBalanceStateComponent* CallFunc_GetComponentByClass_ReturnValue, class UManufacturerData* CallFunc_GetManufacturer_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue6, bool CallFunc_EqualEqual_ObjectObject_ReturnValue7, bool CallFunc_EqualEqual_ObjectObject_ReturnValue8, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue9, bool CallFunc_EqualEqual_ObjectObject_ReturnValue10, bool CallFunc_EqualEqual_ObjectObject_ReturnValue11, bool CallFunc_EqualEqual_ObjectObject_ReturnValue12, bool CallFunc_EqualEqual_ObjectObject_ReturnValue13, bool CallFunc_EqualEqual_ObjectObject_ReturnValue14, bool CallFunc_EqualEqual_ObjectObject_ReturnValue15, bool CallFunc_EqualEqual_ObjectObject_ReturnValue16, const class FString& CallFunc_GetDisplayName_ReturnValue1, const class FString& CallFunc_Concat_StrStr_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue2, bool Temp_bool_Variable, class FName Temp_name_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FName Temp_name_Variable1, class FName Temp_name_Variable2, uint8 Temp_byte_Variable, bool Temp_bool_Variable1, class FName Temp_name_Variable3, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool Temp_bool_Variable2, class FName CallFunc_Array_Get_Item, class FName CallFunc_Array_Get_Item1, class FName CallFunc_Array_Get_Item2, class FName K2Node_Select_Default, class FName CallFunc_Array_Get_Item3, class FName CallFunc_Array_Get_Item4, class FName K2Node_Select1_Default, class FName K2Node_Select2_Default, class FName CallFunc_Array_Get_Item5, bool CallFunc_EqualEqual_IntInt_ReturnValue3, bool CallFunc_EqualEqual_IntInt_ReturnValue4, bool CallFunc_EqualEqual_IntInt_ReturnValue5, bool CallFunc_EqualEqual_IntInt_ReturnValue6, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue7, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue3, class FName Temp_name_Variable4, int32 Temp_int_Variable, class FName Temp_name_Variable5, class FName K2Node_Select3_Default, int32 CallFunc_Array_Add_ReturnValue, class FName Temp_name_Variable6, bool Temp_bool_Variable3, class FName K2Node_Select4_Default, class FName K2Node_Select5_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_Standin_C", "CalculateWeaponHoldData");

	Params::UBPAnim_Standin_C_CalculateWeaponHoldData_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.PreviousWeapon = PreviousWeapon;
	Parms.K2Node_DynamicCast_AsOak_Weapon = K2Node_DynamicCast_AsOak_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue1 = CallFunc_Conv_ByteToInt_ReturnValue1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue1 = CallFunc_EqualEqual_ObjectObject_ReturnValue1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue2 = CallFunc_EqualEqual_ObjectObject_ReturnValue2;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue3 = CallFunc_EqualEqual_ObjectObject_ReturnValue3;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue4 = CallFunc_EqualEqual_ObjectObject_ReturnValue4;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue5 = CallFunc_EqualEqual_ObjectObject_ReturnValue5;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetManufacturer_ReturnValue = CallFunc_GetManufacturer_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue1 = CallFunc_EqualEqual_IntInt_ReturnValue1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue6 = CallFunc_EqualEqual_ObjectObject_ReturnValue6;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue7 = CallFunc_EqualEqual_ObjectObject_ReturnValue7;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue8 = CallFunc_EqualEqual_ObjectObject_ReturnValue8;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue9 = CallFunc_EqualEqual_ObjectObject_ReturnValue9;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue10 = CallFunc_EqualEqual_ObjectObject_ReturnValue10;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue11 = CallFunc_EqualEqual_ObjectObject_ReturnValue11;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue12 = CallFunc_EqualEqual_ObjectObject_ReturnValue12;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue13 = CallFunc_EqualEqual_ObjectObject_ReturnValue13;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue14 = CallFunc_EqualEqual_ObjectObject_ReturnValue14;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue15 = CallFunc_EqualEqual_ObjectObject_ReturnValue15;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue16 = CallFunc_EqualEqual_ObjectObject_ReturnValue16;
	Parms.CallFunc_GetDisplayName_ReturnValue1 = CallFunc_GetDisplayName_ReturnValue1;
	Parms.CallFunc_Concat_StrStr_ReturnValue1 = CallFunc_Concat_StrStr_ReturnValue1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue2 = CallFunc_EqualEqual_IntInt_ReturnValue2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_name_Variable1 = Temp_name_Variable1;
	Parms.Temp_name_Variable2 = Temp_name_Variable2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_name_Variable3 = Temp_name_Variable3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;
	Parms.CallFunc_Array_Get_Item4 = CallFunc_Array_Get_Item4;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_Array_Get_Item5 = CallFunc_Array_Get_Item5;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue3 = CallFunc_EqualEqual_IntInt_ReturnValue3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue4 = CallFunc_EqualEqual_IntInt_ReturnValue4;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue5 = CallFunc_EqualEqual_IntInt_ReturnValue5;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue6 = CallFunc_EqualEqual_IntInt_ReturnValue6;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue7 = CallFunc_EqualEqual_IntInt_ReturnValue7;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue3 = CallFunc_BooleanAND_ReturnValue3;
	Parms.Temp_name_Variable4 = Temp_name_Variable4;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_name_Variable5 = Temp_name_Variable5;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.Temp_name_Variable6 = Temp_name_Variable6;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPAnim_Standin.BPAnim_Standin_C.LogError
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        LogText                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        ErrorText                                                        (Edit, BlueprintVisible, DisableEditOnTemplate)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetClassDisplayName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData1                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UBPAnim_Standin_C::LogError(class FText LogText, class FText ErrorText, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UClass* CallFunc_GetObjectClass_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_Standin_C", "LogError");

	Params::UBPAnim_Standin_C_LogError_Params Parms{};

	Parms.LogText = LogText;
	Parms.ErrorText = ErrorText;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_GetClassDisplayName_ReturnValue = CallFunc_GetClassDisplayName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData1 = K2Node_MakeStruct_FormatArgumentData1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPAnim_Standin.BPAnim_Standin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_TwoWayBlend_E7D47C0041318778EFA821AD09B0504C
// (BlueprintEvent)
// Parameters:

void UBPAnim_Standin_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_TwoWayBlend_E7D47C0041318778EFA821AD09B0504C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_Standin_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_TwoWayBlend_E7D47C0041318778EFA821AD09B0504C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_Standin.BPAnim_Standin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_SequenceEvaluator_B94CF96444FFCD8B775F3BA6CD54D280
// (BlueprintEvent)
// Parameters:

void UBPAnim_Standin_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_SequenceEvaluator_B94CF96444FFCD8B775F3BA6CD54D280()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_Standin_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_SequenceEvaluator_B94CF96444FFCD8B775F3BA6CD54D280");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_Standin.BPAnim_Standin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_ApplyAdditive_269EA82149FEF75D0DA7DE81279DF3AE
// (BlueprintEvent)
// Parameters:

void UBPAnim_Standin_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_ApplyAdditive_269EA82149FEF75D0DA7DE81279DF3AE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_Standin_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_ApplyAdditive_269EA82149FEF75D0DA7DE81279DF3AE");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_Standin.BPAnim_Standin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_BlendListByInt_6BAC18D140042C8E2916F2B3DAE9574A
// (BlueprintEvent)
// Parameters:

void UBPAnim_Standin_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_BlendListByInt_6BAC18D140042C8E2916F2B3DAE9574A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_Standin_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_BlendListByInt_6BAC18D140042C8E2916F2B3DAE9574A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_Standin.BPAnim_Standin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_GbxAnimGraphNode_HandIK_C69AF1CC49D8D97D06EB3D8A6BDCC90A
// (BlueprintEvent)
// Parameters:

void UBPAnim_Standin_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_GbxAnimGraphNode_HandIK_C69AF1CC49D8D97D06EB3D8A6BDCC90A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_Standin_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_GbxAnimGraphNode_HandIK_C69AF1CC49D8D97D06EB3D8A6BDCC90A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_Standin.BPAnim_Standin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_GbxAnimGraphNode_HandIK_DF4483AA41CA4D1D7C06A6B4D64FAC4C
// (BlueprintEvent)
// Parameters:

void UBPAnim_Standin_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_GbxAnimGraphNode_HandIK_DF4483AA41CA4D1D7C06A6B4D64FAC4C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_Standin_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_GbxAnimGraphNode_HandIK_DF4483AA41CA4D1D7C06A6B4D64FAC4C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_Standin.BPAnim_Standin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_SequenceEvaluator_8960226D4B76D1877F15959DBD1A76B2
// (BlueprintEvent)
// Parameters:

void UBPAnim_Standin_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_SequenceEvaluator_8960226D4B76D1877F15959DBD1A76B2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_Standin_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_SequenceEvaluator_8960226D4B76D1877F15959DBD1A76B2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_Standin.BPAnim_Standin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_SequenceEvaluator_01CEE1C0423DEA9A419096B26A18B3D0
// (BlueprintEvent)
// Parameters:

void UBPAnim_Standin_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_SequenceEvaluator_01CEE1C0423DEA9A419096B26A18B3D0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_Standin_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_SequenceEvaluator_01CEE1C0423DEA9A419096B26A18B3D0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_Standin.BPAnim_Standin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_SequenceEvaluator_C14C90B742DCCF222D0CA2B134C2F1A5
// (BlueprintEvent)
// Parameters:

void UBPAnim_Standin_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_SequenceEvaluator_C14C90B742DCCF222D0CA2B134C2F1A5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_Standin_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_SequenceEvaluator_C14C90B742DCCF222D0CA2B134C2F1A5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_Standin.BPAnim_Standin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_SequenceEvaluator_6E26EAFF44A54AFE6FF5039AC76257C9
// (BlueprintEvent)
// Parameters:

void UBPAnim_Standin_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_SequenceEvaluator_6E26EAFF44A54AFE6FF5039AC76257C9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_Standin_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_SequenceEvaluator_6E26EAFF44A54AFE6FF5039AC76257C9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_Standin.BPAnim_Standin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_SequenceEvaluator_F098367A4D07E5C337C9AA8CAF7FB341
// (BlueprintEvent)
// Parameters:

void UBPAnim_Standin_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_SequenceEvaluator_F098367A4D07E5C337C9AA8CAF7FB341()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_Standin_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_SequenceEvaluator_F098367A4D07E5C337C9AA8CAF7FB341");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_Standin.BPAnim_Standin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_BlendFaceFXAnimation_9794931D4285C02EFBADD4B7BE84527A
// (BlueprintEvent)
// Parameters:

void UBPAnim_Standin_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_BlendFaceFXAnimation_9794931D4285C02EFBADD4B7BE84527A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_Standin_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_BlendFaceFXAnimation_9794931D4285C02EFBADD4B7BE84527A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_Standin.BPAnim_Standin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_LayeredBoneBlend_B3019EC1401529F1DB0AB18A89D92ED5
// (BlueprintEvent)
// Parameters:

void UBPAnim_Standin_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_LayeredBoneBlend_B3019EC1401529F1DB0AB18A89D92ED5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_Standin_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_LayeredBoneBlend_B3019EC1401529F1DB0AB18A89D92ED5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_Standin.BPAnim_Standin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_ApplyAdditive_2F5B1E0A4646869218A0F382C0AC5975
// (BlueprintEvent)
// Parameters:

void UBPAnim_Standin_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_ApplyAdditive_2F5B1E0A4646869218A0F382C0AC5975()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_Standin_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_ApplyAdditive_2F5B1E0A4646869218A0F382C0AC5975");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_Standin.BPAnim_Standin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_BlendListByInt_19DC7AB94C0E3E8DCD0C099F017B3F9C
// (BlueprintEvent)
// Parameters:

void UBPAnim_Standin_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_BlendListByInt_19DC7AB94C0E3E8DCD0C099F017B3F9C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_Standin_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_BlendListByInt_19DC7AB94C0E3E8DCD0C099F017B3F9C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_Standin.BPAnim_Standin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_LayeredBoneBlend_255E7FC14DEDA773E64305ACEDECA52B
// (BlueprintEvent)
// Parameters:

void UBPAnim_Standin_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_LayeredBoneBlend_255E7FC14DEDA773E64305ACEDECA52B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_Standin_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_LayeredBoneBlend_255E7FC14DEDA773E64305ACEDECA52B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_Standin.BPAnim_Standin_C.OnWeaponChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class AWeapon*                     NewWeapon                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeapon*                     PrevWeapon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_Standin_C::OnWeaponChanged(class AWeapon* NewWeapon, class AWeapon* PrevWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_Standin_C", "OnWeaponChanged");

	Params::UBPAnim_Standin_C_OnWeaponChanged_Params Parms{};

	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPAnim_Standin.BPAnim_Standin_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_ApplyMeshSpaceAdditive_B43E27F0462AFB865877FD918F92B4FF
// (BlueprintEvent)
// Parameters:

void UBPAnim_Standin_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_ApplyMeshSpaceAdditive_B43E27F0462AFB865877FD918F92B4FF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_Standin_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Standin_AnimGraphNode_ApplyMeshSpaceAdditive_B43E27F0462AFB865877FD918F92B4FF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_Standin.BPAnim_Standin_C.Update_ActiveAnimSet
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPAnim_Standin_C::Update_ActiveAnimSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_Standin_C", "Update_ActiveAnimSet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_Standin.BPAnim_Standin_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UBPAnim_Standin_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_Standin_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPAnim_Standin.BPAnim_Standin_C.ExecuteUbergraph_BPAnim_Standin
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAEnum_WeaponType       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeapon*                     K2Node_Event_NewWeapon                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeapon*                     K2Node_Event_PrevWeapon                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAnimSeqBaseFromAnimSet_bIsValid                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimSequenceBase*           CallFunc_GetAnimSeqBaseFromAnimSet_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPAnim_Standin_C::ExecuteUbergraph_BPAnim_Standin(int32 EntryPoint, class FName Temp_name_Variable, class FName Temp_name_Variable1, int32 Temp_int_Array_Index_Variable, class FName Temp_name_Variable2, class FName Temp_name_Variable3, class FName Temp_name_Variable4, class FName Temp_name_Variable5, class FName Temp_name_Variable6, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class EAEnum_WeaponType Temp_byte_Variable, class AWeapon* K2Node_Event_NewWeapon, class AWeapon* K2Node_Event_PrevWeapon, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FName K2Node_Select_Default, class FName CallFunc_Array_Get_Item, class FName CallFunc_Array_Get_Item1, bool CallFunc_GetAnimSeqBaseFromAnimSet_bIsValid, class UAnimSequenceBase* CallFunc_GetAnimSeqBaseFromAnimSet_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_Standin_C", "ExecuteUbergraph_BPAnim_Standin");

	Params::UBPAnim_Standin_C_ExecuteUbergraph_BPAnim_Standin_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable1 = Temp_name_Variable1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_name_Variable2 = Temp_name_Variable2;
	Parms.Temp_name_Variable3 = Temp_name_Variable3;
	Parms.Temp_name_Variable4 = Temp_name_Variable4;
	Parms.Temp_name_Variable5 = Temp_name_Variable5;
	Parms.Temp_name_Variable6 = Temp_name_Variable6;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Event_NewWeapon = K2Node_Event_NewWeapon;
	Parms.K2Node_Event_PrevWeapon = K2Node_Event_PrevWeapon;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_GetAnimSeqBaseFromAnimSet_bIsValid = CallFunc_GetAnimSeqBaseFromAnimSet_bIsValid;
	Parms.CallFunc_GetAnimSeqBaseFromAnimSet_ReturnValue = CallFunc_GetAnimSeqBaseFromAnimSet_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


