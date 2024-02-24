#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SnapRulesEnforcer.BP_SnapRulesEnforcer_C
// (None)

class UClass* UBP_SnapRulesEnforcer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SnapRulesEnforcer_C");

	return Clss;
}


// BP_SnapRulesEnforcer_C BP_SnapRulesEnforcer.Default__BP_SnapRulesEnforcer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SnapRulesEnforcer_C* UBP_SnapRulesEnforcer_C::GetDefaultObj()
{
	static class UBP_SnapRulesEnforcer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SnapRulesEnforcer_C*>(UBP_SnapRulesEnforcer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SnapRulesEnforcer.BP_SnapRulesEnforcer_C.IsRoofCornerInnerSnapType
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGridPoint                  SnapPoint                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               IsRoofCornerInner                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESnapType               CallFunc_GetOwnerSnapType_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SnapRulesEnforcer_C::IsRoofCornerInnerSnapType(const struct FGridPoint& SnapPoint, bool* IsRoofCornerInner, enum class ESnapType CallFunc_GetOwnerSnapType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SnapRulesEnforcer_C", "IsRoofCornerInnerSnapType");

	Params::UBP_SnapRulesEnforcer_C_IsRoofCornerInnerSnapType_Params Parms{};

	Parms.SnapPoint = SnapPoint;
	Parms.CallFunc_GetOwnerSnapType_ReturnValue = CallFunc_GetOwnerSnapType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsRoofCornerInner != nullptr)
		*IsRoofCornerInner = Parms.IsRoofCornerInner;

}


// Function BP_SnapRulesEnforcer.BP_SnapRulesEnforcer_C.IsDecorationSnapType
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGridPoint                  SnapPoint                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               IsDecoration                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESnapType               CallFunc_GetOwnerSnapType_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SnapRulesEnforcer_C::IsDecorationSnapType(const struct FGridPoint& SnapPoint, bool* IsDecoration, enum class ESnapType CallFunc_GetOwnerSnapType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SnapRulesEnforcer_C", "IsDecorationSnapType");

	Params::UBP_SnapRulesEnforcer_C_IsDecorationSnapType_Params Parms{};

	Parms.SnapPoint = SnapPoint;
	Parms.CallFunc_GetOwnerSnapType_ReturnValue = CallFunc_GetOwnerSnapType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsDecoration != nullptr)
		*IsDecoration = Parms.IsDecoration;

}


// Function BP_SnapRulesEnforcer.BP_SnapRulesEnforcer_C.AreRulesSatisfied
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGridPoint                  SourcePoint                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGridPoint                  TargetPoint                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSnapRules                  SnapRules                                                        (Edit, BlueprintVisible, NoDestructor)
// struct FSnapRules                  CallFunc_GetSnapRuleForPoints_ReturnValue                        (NoDestructor)
// struct FTransform                  CallFunc_GetGridPointWorldTransform_ReturnValue                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetGridPointWorldTransform_ReturnValue_1                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_InvertForwardAxisOrNot_Rot                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector_X_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector_Y_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector_Z_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector_X_ImplicitCast_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector_Y_ImplicitCast_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector_Z_ImplicitCast_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_SnapRulesEnforcer_C::AreRulesSatisfied(struct FGridPoint& SourcePoint, struct FGridPoint& TargetPoint, const struct FSnapRules& SnapRules, const struct FSnapRules& CallFunc_GetSnapRuleForPoints_ReturnValue, const struct FTransform& CallFunc_GetGridPointWorldTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_GetGridPointWorldTransform_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_InvertForwardAxisOrNot_Rot, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, double CallFunc_MakeVector_X_ImplicitCast, double CallFunc_MakeVector_Y_ImplicitCast, double CallFunc_MakeVector_Z_ImplicitCast, double CallFunc_MakeVector_X_ImplicitCast_1, double CallFunc_MakeVector_Y_ImplicitCast_1, double CallFunc_MakeVector_Z_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SnapRulesEnforcer_C", "AreRulesSatisfied");

	Params::UBP_SnapRulesEnforcer_C_AreRulesSatisfied_Params Parms{};

	Parms.SourcePoint = SourcePoint;
	Parms.TargetPoint = TargetPoint;
	Parms.SnapRules = SnapRules;
	Parms.CallFunc_GetSnapRuleForPoints_ReturnValue = CallFunc_GetSnapRuleForPoints_ReturnValue;
	Parms.CallFunc_GetGridPointWorldTransform_ReturnValue = CallFunc_GetGridPointWorldTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_GetGridPointWorldTransform_ReturnValue_1 = CallFunc_GetGridPointWorldTransform_ReturnValue_1;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_InvertForwardAxisOrNot_Rot = CallFunc_InvertForwardAxisOrNot_Rot;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_EqualEqual_VectorVector_ReturnValue = CallFunc_EqualEqual_VectorVector_ReturnValue;
	Parms.CallFunc_MakeVector_X_ImplicitCast = CallFunc_MakeVector_X_ImplicitCast;
	Parms.CallFunc_MakeVector_Y_ImplicitCast = CallFunc_MakeVector_Y_ImplicitCast;
	Parms.CallFunc_MakeVector_Z_ImplicitCast = CallFunc_MakeVector_Z_ImplicitCast;
	Parms.CallFunc_MakeVector_X_ImplicitCast_1 = CallFunc_MakeVector_X_ImplicitCast_1;
	Parms.CallFunc_MakeVector_Y_ImplicitCast_1 = CallFunc_MakeVector_Y_ImplicitCast_1;
	Parms.CallFunc_MakeVector_Z_ImplicitCast_1 = CallFunc_MakeVector_Z_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SnapRulesEnforcer.BP_SnapRulesEnforcer_C.IsRoofFillerSnapType
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGridPoint                  SnapPoint                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               IsRoofFiller                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESnapType               CallFunc_GetOwnerSnapType_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SnapRulesEnforcer_C::IsRoofFillerSnapType(const struct FGridPoint& SnapPoint, bool* IsRoofFiller, enum class ESnapType CallFunc_GetOwnerSnapType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SnapRulesEnforcer_C", "IsRoofFillerSnapType");

	Params::UBP_SnapRulesEnforcer_C_IsRoofFillerSnapType_Params Parms{};

	Parms.SnapPoint = SnapPoint;
	Parms.CallFunc_GetOwnerSnapType_ReturnValue = CallFunc_GetOwnerSnapType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsRoofFiller != nullptr)
		*IsRoofFiller = Parms.IsRoofFiller;

}


// Function BP_SnapRulesEnforcer.BP_SnapRulesEnforcer_C.IsRoofConvexSnapType
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGridPoint                  SnapPoint                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               IsRoofConvex                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESnapType               CallFunc_GetOwnerSnapType_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SnapRulesEnforcer_C::IsRoofConvexSnapType(const struct FGridPoint& SnapPoint, bool* IsRoofConvex, enum class ESnapType CallFunc_GetOwnerSnapType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SnapRulesEnforcer_C", "IsRoofConvexSnapType");

	Params::UBP_SnapRulesEnforcer_C_IsRoofConvexSnapType_Params Parms{};

	Parms.SnapPoint = SnapPoint;
	Parms.CallFunc_GetOwnerSnapType_ReturnValue = CallFunc_GetOwnerSnapType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsRoofConvex != nullptr)
		*IsRoofConvex = Parms.IsRoofConvex;

}


// Function BP_SnapRulesEnforcer.BP_SnapRulesEnforcer_C.IsRoofFlatSnapType
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGridPoint                  SnapPoint                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               IsRoofFlat                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESnapType               CallFunc_GetOwnerSnapType_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SnapRulesEnforcer_C::IsRoofFlatSnapType(const struct FGridPoint& SnapPoint, bool* IsRoofFlat, enum class ESnapType CallFunc_GetOwnerSnapType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SnapRulesEnforcer_C", "IsRoofFlatSnapType");

	Params::UBP_SnapRulesEnforcer_C_IsRoofFlatSnapType_Params Parms{};

	Parms.SnapPoint = SnapPoint;
	Parms.CallFunc_GetOwnerSnapType_ReturnValue = CallFunc_GetOwnerSnapType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsRoofFlat != nullptr)
		*IsRoofFlat = Parms.IsRoofFlat;

}


// Function BP_SnapRulesEnforcer.BP_SnapRulesEnforcer_C.IsAwningSnapType
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGridPoint                  SnapPoint                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               IsAwning                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESnapType               CallFunc_GetOwnerSnapType_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SnapRulesEnforcer_C::IsAwningSnapType(const struct FGridPoint& SnapPoint, bool* IsAwning, enum class ESnapType CallFunc_GetOwnerSnapType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SnapRulesEnforcer_C", "IsAwningSnapType");

	Params::UBP_SnapRulesEnforcer_C_IsAwningSnapType_Params Parms{};

	Parms.SnapPoint = SnapPoint;
	Parms.CallFunc_GetOwnerSnapType_ReturnValue = CallFunc_GetOwnerSnapType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsAwning != nullptr)
		*IsAwning = Parms.IsAwning;

}


// Function BP_SnapRulesEnforcer.BP_SnapRulesEnforcer_C.IsFoundationBottomSnapPointId
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGridPoint                  SnapPoint                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      FoundationBottomId                                               (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_SnapRulesEnforcer_C::IsFoundationBottomSnapPointId(struct FGridPoint& SnapPoint, const class FString& FoundationBottomId, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SnapRulesEnforcer_C", "IsFoundationBottomSnapPointId");

	Params::UBP_SnapRulesEnforcer_C_IsFoundationBottomSnapPointId_Params Parms{};

	Parms.SnapPoint = SnapPoint;
	Parms.FoundationBottomId = FoundationBottomId;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SnapRulesEnforcer.BP_SnapRulesEnforcer_C.IsFoundationTopSnapPointId
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGridPoint                  SnapPoint                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      FoundationTopId                                                  (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_SnapRulesEnforcer_C::IsFoundationTopSnapPointId(struct FGridPoint& SnapPoint, const class FString& FoundationTopId, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SnapRulesEnforcer_C", "IsFoundationTopSnapPointId");

	Params::UBP_SnapRulesEnforcer_C_IsFoundationTopSnapPointId_Params Parms{};

	Parms.SnapPoint = SnapPoint;
	Parms.FoundationTopId = FoundationTopId;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SnapRulesEnforcer.BP_SnapRulesEnforcer_C.Find Indexes with Id
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     SnapPointOwner                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      InitialIndexArray                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                      IdSpecified                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<int32>                      FilteredArray                                                    (Parm, OutParm)
// TArray<int32>                      LFilteredArray                                                   (Edit, BlueprintVisible)
// class UObject*                     LSnapPointOwner                                                  (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentSnapPointIndex                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      LIdSpecified                                                     (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGridPoint                  CallFunc_GetSnapPointFromIndexAndOwner_OutSnapPoint              (None)
// bool                               CallFunc_IsGridPointOccupied_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SnapRulesEnforcer_C::Find_Indexes_with_Id(class UObject* SnapPointOwner, TArray<int32>& InitialIndexArray, const class FString& IdSpecified, TArray<int32>* FilteredArray, const TArray<int32>& LFilteredArray, class UObject* LSnapPointOwner, int32 CurrentSnapPointIndex, const class FString& LIdSpecified, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<int32>& K2Node_MakeArray_Array, int32 CallFunc_Array_Add_ReturnValue, const struct FGridPoint& CallFunc_GetSnapPointFromIndexAndOwner_OutSnapPoint, bool CallFunc_IsGridPointOccupied_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SnapRulesEnforcer_C", "Find Indexes with Id");

	Params::UBP_SnapRulesEnforcer_C_Find_Indexes_with_Id_Params Parms{};

	Parms.SnapPointOwner = SnapPointOwner;
	Parms.InitialIndexArray = InitialIndexArray;
	Parms.IdSpecified = IdSpecified;
	Parms.LFilteredArray = LFilteredArray;
	Parms.LSnapPointOwner = LSnapPointOwner;
	Parms.CurrentSnapPointIndex = CurrentSnapPointIndex;
	Parms.LIdSpecified = LIdSpecified;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetSnapPointFromIndexAndOwner_OutSnapPoint = CallFunc_GetSnapPointFromIndexAndOwner_OutSnapPoint;
	Parms.CallFunc_IsGridPointOccupied_ReturnValue = CallFunc_IsGridPointOccupied_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FilteredArray != nullptr)
		*FilteredArray = std::move(Parms.FilteredArray);

}


// Function BP_SnapRulesEnforcer.BP_SnapRulesEnforcer_C.IsWallSnapType
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGridPoint                  SnapPoint                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               IsWall                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESnapType               CallFunc_GetOwnerSnapType_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SnapRulesEnforcer_C::IsWallSnapType(const struct FGridPoint& SnapPoint, bool* IsWall, enum class ESnapType CallFunc_GetOwnerSnapType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SnapRulesEnforcer_C", "IsWallSnapType");

	Params::UBP_SnapRulesEnforcer_C_IsWallSnapType_Params Parms{};

	Parms.SnapPoint = SnapPoint;
	Parms.CallFunc_GetOwnerSnapType_ReturnValue = CallFunc_GetOwnerSnapType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsWall != nullptr)
		*IsWall = Parms.IsWall;

}


// Function BP_SnapRulesEnforcer.BP_SnapRulesEnforcer_C.IsRoofAngleSnapType
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGridPoint                  SnapPoint                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               IsRoofAngle                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESnapType               CallFunc_GetOwnerSnapType_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SnapRulesEnforcer_C::IsRoofAngleSnapType(const struct FGridPoint& SnapPoint, bool* IsRoofAngle, enum class ESnapType CallFunc_GetOwnerSnapType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SnapRulesEnforcer_C", "IsRoofAngleSnapType");

	Params::UBP_SnapRulesEnforcer_C_IsRoofAngleSnapType_Params Parms{};

	Parms.SnapPoint = SnapPoint;
	Parms.CallFunc_GetOwnerSnapType_ReturnValue = CallFunc_GetOwnerSnapType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsRoofAngle != nullptr)
		*IsRoofAngle = Parms.IsRoofAngle;

}


// Function BP_SnapRulesEnforcer.BP_SnapRulesEnforcer_C.IsPillarSnapType
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGridPoint                  SnapPoint                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               IsPillar                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESnapType               CallFunc_GetOwnerSnapType_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SnapRulesEnforcer_C::IsPillarSnapType(const struct FGridPoint& SnapPoint, bool* IsPillar, enum class ESnapType CallFunc_GetOwnerSnapType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SnapRulesEnforcer_C", "IsPillarSnapType");

	Params::UBP_SnapRulesEnforcer_C_IsPillarSnapType_Params Parms{};

	Parms.SnapPoint = SnapPoint;
	Parms.CallFunc_GetOwnerSnapType_ReturnValue = CallFunc_GetOwnerSnapType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsPillar != nullptr)
		*IsPillar = Parms.IsPillar;

}


// Function BP_SnapRulesEnforcer.BP_SnapRulesEnforcer_C.IsFoundationSnapType
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGridPoint                  SnapPoint                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               IsFoundation                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESnapType               CallFunc_GetOwnerSnapType_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SnapRulesEnforcer_C::IsFoundationSnapType(const struct FGridPoint& SnapPoint, bool* IsFoundation, enum class ESnapType CallFunc_GetOwnerSnapType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SnapRulesEnforcer_C", "IsFoundationSnapType");

	Params::UBP_SnapRulesEnforcer_C_IsFoundationSnapType_Params Parms{};

	Parms.SnapPoint = SnapPoint;
	Parms.CallFunc_GetOwnerSnapType_ReturnValue = CallFunc_GetOwnerSnapType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsFoundation != nullptr)
		*IsFoundation = Parms.IsFoundation;

}


// Function BP_SnapRulesEnforcer.BP_SnapRulesEnforcer_C.GetDesiredQuadrantFromTargetPoint
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGridPoint                  TargetPoint                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ESnapPointQuadrant      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESnapPointQuadrant      CallFunc_GetMirrorQuadrant_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESnapPointQuadrant UBP_SnapRulesEnforcer_C::GetDesiredQuadrantFromTargetPoint(struct FGridPoint& TargetPoint, enum class ESnapPointQuadrant CallFunc_GetMirrorQuadrant_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SnapRulesEnforcer_C", "GetDesiredQuadrantFromTargetPoint");

	Params::UBP_SnapRulesEnforcer_C_GetDesiredQuadrantFromTargetPoint_Params Parms{};

	Parms.TargetPoint = TargetPoint;
	Parms.CallFunc_GetMirrorQuadrant_ReturnValue = CallFunc_GetMirrorQuadrant_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SnapRulesEnforcer.BP_SnapRulesEnforcer_C.FindSnapPointIndexWithQuadrant
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class ESnapPointQuadrant      Quadrant                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     SnapPointsOwner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      SnapPointIndexes                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Array_Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentSnapPointIndex                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGridPoint                  CallFunc_GetSnapPointFromIndexAndOwner_OutSnapPoint              (None)
// bool                               CallFunc_IsGridPointValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SnapRulesEnforcer_C::FindSnapPointIndexWithQuadrant(enum class ESnapPointQuadrant Quadrant, class UObject* SnapPointsOwner, TArray<int32>& SnapPointIndexes, int32* Array_Index, int32 CurrentSnapPointIndex, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGridPoint& CallFunc_GetSnapPointFromIndexAndOwner_OutSnapPoint, bool CallFunc_IsGridPointValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SnapRulesEnforcer_C", "FindSnapPointIndexWithQuadrant");

	Params::UBP_SnapRulesEnforcer_C_FindSnapPointIndexWithQuadrant_Params Parms{};

	Parms.Quadrant = Quadrant;
	Parms.SnapPointsOwner = SnapPointsOwner;
	Parms.SnapPointIndexes = SnapPointIndexes;
	Parms.CurrentSnapPointIndex = CurrentSnapPointIndex;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetSnapPointFromIndexAndOwner_OutSnapPoint = CallFunc_GetSnapPointFromIndexAndOwner_OutSnapPoint;
	Parms.CallFunc_IsGridPointValid_ReturnValue = CallFunc_IsGridPointValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Array_Index != nullptr)
		*Array_Index = Parms.Array_Index;

}


// Function BP_SnapRulesEnforcer.BP_SnapRulesEnforcer_C.GetAcceptableQuadrants
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGridPoint                  TargetPoint                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// TSet<enum class ESnapPointQuadrant>AcceptableQuadrants                                              (Parm, OutParm)
// TSet<enum class ESnapPointQuadrant>K2Node_MakeSet_Set                                               (None)

void UBP_SnapRulesEnforcer_C::GetAcceptableQuadrants(const struct FGridPoint& TargetPoint, TSet<enum class ESnapPointQuadrant>* AcceptableQuadrants, TSet<enum class ESnapPointQuadrant> K2Node_MakeSet_Set)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SnapRulesEnforcer_C", "GetAcceptableQuadrants");

	Params::UBP_SnapRulesEnforcer_C_GetAcceptableQuadrants_Params Parms{};

	Parms.TargetPoint = TargetPoint;
	Parms.K2Node_MakeSet_Set = K2Node_MakeSet_Set;

	UObject::ProcessEvent(Func, &Parms);

	if (AcceptableQuadrants != nullptr)
		*AcceptableQuadrants = Parms.AcceptableQuadrants;

}


// Function BP_SnapRulesEnforcer.BP_SnapRulesEnforcer_C.FilterSourcePointIndexes
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGridPoint                  TargetPoint                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UCompositePieceSnapObject*   SnapObject                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      SourcePointIndexes                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<int32>                      ReturnValue                                                      (Parm, OutParm, ReturnParm)
// TArray<int32>                      FilteredSourceIndexes                                            (Edit, BlueprintVisible)
// int32                              CurrentSnapPointIndex                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     SnapPointOwner                                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSet<enum class ESnapPointQuadrant>AcceptableQuadrants                                              (Edit, BlueprintVisible)
// class UObject*                     CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSet<enum class ESnapPointQuadrant>CallFunc_GetAcceptableQuadrants_AcceptableQuadrants              (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGridPoint                  CallFunc_GetSnapPointFromIndexAndOwner_OutSnapPoint              (None)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Set_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

TArray<int32> UBP_SnapRulesEnforcer_C::FilterSourcePointIndexes(struct FGridPoint& TargetPoint, class UCompositePieceSnapObject* SnapObject, TArray<int32>& SourcePointIndexes, const TArray<int32>& FilteredSourceIndexes, int32 CurrentSnapPointIndex, class UObject* SnapPointOwner, TSet<enum class ESnapPointQuadrant> AcceptableQuadrants, class UObject* CallFunc_GetOwner_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TSet<enum class ESnapPointQuadrant> CallFunc_GetAcceptableQuadrants_AcceptableQuadrants, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FGridPoint& CallFunc_GetSnapPointFromIndexAndOwner_OutSnapPoint, int32 CallFunc_Array_Get_Item, bool CallFunc_Set_Contains_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SnapRulesEnforcer_C", "FilterSourcePointIndexes");

	Params::UBP_SnapRulesEnforcer_C_FilterSourcePointIndexes_Params Parms{};

	Parms.TargetPoint = TargetPoint;
	Parms.SnapObject = SnapObject;
	Parms.SourcePointIndexes = SourcePointIndexes;
	Parms.FilteredSourceIndexes = FilteredSourceIndexes;
	Parms.CurrentSnapPointIndex = CurrentSnapPointIndex;
	Parms.SnapPointOwner = SnapPointOwner;
	Parms.AcceptableQuadrants = AcceptableQuadrants;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetAcceptableQuadrants_AcceptableQuadrants = CallFunc_GetAcceptableQuadrants_AcceptableQuadrants;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetSnapPointFromIndexAndOwner_OutSnapPoint = CallFunc_GetSnapPointFromIndexAndOwner_OutSnapPoint;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Set_Contains_ReturnValue = CallFunc_Set_Contains_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SnapRulesEnforcer.BP_SnapRulesEnforcer_C.ChooseSnapPoint
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGridPoint                  TargetPoint                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<int32>                      SourcePointIndexes                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UCompositePieceSnapObject*   SnapObject                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              DefaultIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ChosenIndex                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentSourcePointIndex                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESnapPointQuadrant      DesiredQuadrant                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     SourcePointsOwner                                                (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESnapPointQuadrant      CallFunc_GetDesiredQuadrantFromTargetPoint_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindSnapPointIndexWithQuadrant_Array_Index              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UBP_SnapRulesEnforcer_C::ChooseSnapPoint(struct FGridPoint& TargetPoint, TArray<int32>& SourcePointIndexes, class UCompositePieceSnapObject* SnapObject, int32 DefaultIndex, int32 ChosenIndex, int32 CurrentSourcePointIndex, enum class ESnapPointQuadrant DesiredQuadrant, class UObject* SourcePointsOwner, bool Temp_bool_Variable, int32 CallFunc_Array_Get_Item, bool CallFunc_Array_IsEmpty_ReturnValue, class UObject* CallFunc_GetOwner_ReturnValue, enum class ESnapPointQuadrant CallFunc_GetDesiredQuadrantFromTargetPoint_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_FindSnapPointIndexWithQuadrant_Array_Index, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SnapRulesEnforcer_C", "ChooseSnapPoint");

	Params::UBP_SnapRulesEnforcer_C_ChooseSnapPoint_Params Parms{};

	Parms.TargetPoint = TargetPoint;
	Parms.SourcePointIndexes = SourcePointIndexes;
	Parms.SnapObject = SnapObject;
	Parms.DefaultIndex = DefaultIndex;
	Parms.ChosenIndex = ChosenIndex;
	Parms.CurrentSourcePointIndex = CurrentSourcePointIndex;
	Parms.DesiredQuadrant = DesiredQuadrant;
	Parms.SourcePointsOwner = SourcePointsOwner;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsEmpty_ReturnValue = CallFunc_Array_IsEmpty_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetDesiredQuadrantFromTargetPoint_ReturnValue = CallFunc_GetDesiredQuadrantFromTargetPoint_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_FindSnapPointIndexWithQuadrant_Array_Index = CallFunc_FindSnapPointIndexWithQuadrant_Array_Index;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SnapRulesEnforcer.BP_SnapRulesEnforcer_C.GetSnapTypeFromSnapPoint
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGridPoint                  Point                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ESnapType               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESnapType               CallFunc_GetOwnerSnapType_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESnapType UBP_SnapRulesEnforcer_C::GetSnapTypeFromSnapPoint(struct FGridPoint& Point, enum class ESnapType CallFunc_GetOwnerSnapType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SnapRulesEnforcer_C", "GetSnapTypeFromSnapPoint");

	Params::UBP_SnapRulesEnforcer_C_GetSnapTypeFromSnapPoint_Params Parms{};

	Parms.Point = Point;
	Parms.CallFunc_GetOwnerSnapType_ReturnValue = CallFunc_GetOwnerSnapType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SnapRulesEnforcer.BP_SnapRulesEnforcer_C.InvertForwardAxisOrNot
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FRotator                    InRot                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSnapRules                  SnapRule                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FRotator                    Rot                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_InvertRotatorForwardAxis_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_SelectRotator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SnapRulesEnforcer_C::InvertForwardAxisOrNot(const struct FRotator& InRot, struct FSnapRules& SnapRule, struct FRotator* Rot, const struct FRotator& CallFunc_InvertRotatorForwardAxis_ReturnValue, const struct FRotator& CallFunc_SelectRotator_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SnapRulesEnforcer_C", "InvertForwardAxisOrNot");

	Params::UBP_SnapRulesEnforcer_C_InvertForwardAxisOrNot_Params Parms{};

	Parms.InRot = InRot;
	Parms.SnapRule = SnapRule;
	Parms.CallFunc_InvertRotatorForwardAxis_ReturnValue = CallFunc_InvertRotatorForwardAxis_ReturnValue;
	Parms.CallFunc_SelectRotator_ReturnValue = CallFunc_SelectRotator_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Rot != nullptr)
		*Rot = std::move(Parms.Rot);

}


// Function BP_SnapRulesEnforcer.BP_SnapRulesEnforcer_C.CalculateSnapTransformForPoints
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGridPoint                  SourcePoint                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGridPoint                  TargetPoint                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     OptionalRotation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSnapRules                  SnapRules                                                        (Edit, BlueprintVisible, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSnapRules                  CallFunc_GetSnapRuleForPoints_ReturnValue                        (NoDestructor)
// struct FTransform                  CallFunc_GetGridPointWorldTransform_ReturnValue                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetGridPointOwner_OutOwner                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetObjectTransform_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetGridPointWorldTransform_ReturnValue_1                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeRelativeTransform_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_InvertForwardAxisOrNot_Rot                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_ComposeTransforms_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector_X_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector_Y_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector_Z_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Roll_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Pitch_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FTransform UBP_SnapRulesEnforcer_C::CalculateSnapTransformForPoints(struct FGridPoint& SourcePoint, struct FGridPoint& TargetPoint, const struct FVector& OptionalRotation, const struct FSnapRules& SnapRules, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FSnapRules& CallFunc_GetSnapRuleForPoints_ReturnValue, const struct FTransform& CallFunc_GetGridPointWorldTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class UObject* CallFunc_GetGridPointOwner_OutOwner, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FTransform& CallFunc_GetObjectTransform_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FTransform& CallFunc_GetGridPointWorldTransform_ReturnValue_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FTransform& CallFunc_MakeRelativeTransform_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_InvertForwardAxisOrNot_Rot, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_ComposeTransforms_ReturnValue, double CallFunc_MakeVector_X_ImplicitCast, double CallFunc_MakeVector_Y_ImplicitCast, double CallFunc_MakeVector_Z_ImplicitCast, float CallFunc_MakeRotator_Roll_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SnapRulesEnforcer_C", "CalculateSnapTransformForPoints");

	Params::UBP_SnapRulesEnforcer_C_CalculateSnapTransformForPoints_Params Parms{};

	Parms.SourcePoint = SourcePoint;
	Parms.TargetPoint = TargetPoint;
	Parms.OptionalRotation = OptionalRotation;
	Parms.SnapRules = SnapRules;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetSnapRuleForPoints_ReturnValue = CallFunc_GetSnapRuleForPoints_ReturnValue;
	Parms.CallFunc_GetGridPointWorldTransform_ReturnValue = CallFunc_GetGridPointWorldTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_GetGridPointOwner_OutOwner = CallFunc_GetGridPointOwner_OutOwner;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_GetObjectTransform_ReturnValue = CallFunc_GetObjectTransform_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_GetGridPointWorldTransform_ReturnValue_1 = CallFunc_GetGridPointWorldTransform_ReturnValue_1;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeRelativeTransform_ReturnValue = CallFunc_MakeRelativeTransform_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_InvertForwardAxisOrNot_Rot = CallFunc_InvertForwardAxisOrNot_Rot;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_ComposeTransforms_ReturnValue = CallFunc_ComposeTransforms_ReturnValue;
	Parms.CallFunc_MakeVector_X_ImplicitCast = CallFunc_MakeVector_X_ImplicitCast;
	Parms.CallFunc_MakeVector_Y_ImplicitCast = CallFunc_MakeVector_Y_ImplicitCast;
	Parms.CallFunc_MakeVector_Z_ImplicitCast = CallFunc_MakeVector_Z_ImplicitCast;
	Parms.CallFunc_MakeRotator_Roll_ImplicitCast = CallFunc_MakeRotator_Roll_ImplicitCast;
	Parms.CallFunc_MakeRotator_Pitch_ImplicitCast = CallFunc_MakeRotator_Pitch_ImplicitCast;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast = CallFunc_MakeRotator_Yaw_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


