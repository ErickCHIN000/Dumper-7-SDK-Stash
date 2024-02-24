#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Building_Wall_Diagonal_Curved_Half_Angle_Up_R.BP_Building_Wall_Diagonal_Curved_Half_Angle_Up_R_C
// (Actor)

class UClass* ABP_Building_Wall_Diagonal_Curved_Half_Angle_Up_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Building_Wall_Diagonal_Curved_Half_Angle_Up_R_C");

	return Clss;
}


// BP_Building_Wall_Diagonal_Curved_Half_Angle_Up_R_C BP_Building_Wall_Diagonal_Curved_Half_Angle_Up_R.Default__BP_Building_Wall_Diagonal_Curved_Half_Angle_Up_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Building_Wall_Diagonal_Curved_Half_Angle_Up_R_C* ABP_Building_Wall_Diagonal_Curved_Half_Angle_Up_R_C::GetDefaultObj()
{
	static class ABP_Building_Wall_Diagonal_Curved_Half_Angle_Up_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Building_Wall_Diagonal_Curved_Half_Angle_Up_R_C*>(ABP_Building_Wall_Diagonal_Curved_Half_Angle_Up_R_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Building_Wall_Diagonal_Curved_Half_Angle_Up_R.BP_Building_Wall_Diagonal_Curved_Half_Angle_Up_R_C.GetBlockingBypass
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      BuildingClass                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVectorPair>         BlockingPreRotate                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FTransform                  GridSpaceTransform                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// TArray<struct FVectorPair>         BypassBlocking                                                   (Parm, OutParm)
// TArray<struct FVectorPair>         PreRotate                                                        (Edit, BlueprintVisible)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVectorPair                 K2Node_MakeStruct_VectorPair                                     (NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVectorPair                 K2Node_MakeStruct_VectorPair_1                                   (NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVectorPair                 K2Node_MakeStruct_VectorPair_2                                   (NoDestructor)
// struct FVectorPair                 K2Node_MakeStruct_VectorPair_3                                   (NoDestructor)
// TArray<struct FVectorPair>         K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVectorPair>         CallFunc_GetBlockingBypass_BypassBlocking                        (ReferenceParm)
// bool                               CallFunc_NotEqual_RotatorRotator_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Building_Wall_Diagonal_Curved_Half_Angle_Up_R_C::GetBlockingBypass(class UClass* BuildingClass, TArray<struct FVectorPair>& BlockingPreRotate, const struct FTransform& GridSpaceTransform, TArray<struct FVectorPair>* BypassBlocking, const TArray<struct FVectorPair>& PreRotate, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVectorPair& K2Node_MakeStruct_VectorPair, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVectorPair& K2Node_MakeStruct_VectorPair_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVectorPair& K2Node_MakeStruct_VectorPair_2, const struct FVectorPair& K2Node_MakeStruct_VectorPair_3, TArray<struct FVectorPair>& K2Node_MakeArray_Array, bool CallFunc_ClassIsChildOf_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, TArray<struct FVectorPair>& CallFunc_GetBlockingBypass_BypassBlocking, bool CallFunc_NotEqual_RotatorRotator_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Building_Wall_Diagonal_Curved_Half_Angle_Up_R_C", "GetBlockingBypass");

	Params::ABP_Building_Wall_Diagonal_Curved_Half_Angle_Up_R_C_GetBlockingBypass_Params Parms{};

	Parms.BuildingClass = BuildingClass;
	Parms.BlockingPreRotate = BlockingPreRotate;
	Parms.GridSpaceTransform = GridSpaceTransform;
	Parms.PreRotate = PreRotate;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.K2Node_MakeStruct_VectorPair = K2Node_MakeStruct_VectorPair;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_VectorPair_1 = K2Node_MakeStruct_VectorPair_1;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.K2Node_MakeStruct_VectorPair_2 = K2Node_MakeStruct_VectorPair_2;
	Parms.K2Node_MakeStruct_VectorPair_3 = K2Node_MakeStruct_VectorPair_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_GetBlockingBypass_BypassBlocking = CallFunc_GetBlockingBypass_BypassBlocking;
	Parms.CallFunc_NotEqual_RotatorRotator_ReturnValue = CallFunc_NotEqual_RotatorRotator_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (BypassBlocking != nullptr)
		*BypassBlocking = std::move(Parms.BypassBlocking);

}

}


