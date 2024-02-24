#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass AnimBPInventory.AnimBPInventory_C
// (None)

class UClass* UAnimBPInventory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimBPInventory_C");

	return Clss;
}


// AnimBPInventory_C AnimBPInventory.Default__AnimBPInventory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimBPInventory_C* UAnimBPInventory_C::GetDefaultObj()
{
	static class UAnimBPInventory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimBPInventory_C*>(UAnimBPInventory_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimBPInventory.AnimBPInventory_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAnimBPInventory_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBPInventory_C", "AnimGraph");

	Params::UAnimBPInventory_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function AnimBPInventory.AnimBPInventory_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBPInventory_AnimGraphNode_BlendListByInt_667BEBFC4EBFC2DF99CC2B923924E494
// (BlueprintEvent)
// Parameters:

void UAnimBPInventory_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBPInventory_AnimGraphNode_BlendListByInt_667BEBFC4EBFC2DF99CC2B923924E494()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBPInventory_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBPInventory_AnimGraphNode_BlendListByInt_667BEBFC4EBFC2DF99CC2B923924E494");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnimBPInventory.AnimBPInventory_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBPInventory_AnimGraphNode_RotationMultiplier_AF92193E442A1C066DA219BD80A08AE5
// (BlueprintEvent)
// Parameters:

void UAnimBPInventory_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBPInventory_AnimGraphNode_RotationMultiplier_AF92193E442A1C066DA219BD80A08AE5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBPInventory_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBPInventory_AnimGraphNode_RotationMultiplier_AF92193E442A1C066DA219BD80A08AE5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnimBPInventory.AnimBPInventory_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBPInventory_AnimGraphNode_RotationMultiplier_B6CA083F4400FBCB28DCB289D3514BED
// (BlueprintEvent)
// Parameters:

void UAnimBPInventory_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBPInventory_AnimGraphNode_RotationMultiplier_B6CA083F4400FBCB28DCB289D3514BED()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBPInventory_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBPInventory_AnimGraphNode_RotationMultiplier_B6CA083F4400FBCB28DCB289D3514BED");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnimBPInventory.AnimBPInventory_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBPInventory_AnimGraphNode_RotationMultiplier_FE016117438EF4D5B4CA6786A52DC8B6
// (BlueprintEvent)
// Parameters:

void UAnimBPInventory_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBPInventory_AnimGraphNode_RotationMultiplier_FE016117438EF4D5B4CA6786A52DC8B6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBPInventory_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBPInventory_AnimGraphNode_RotationMultiplier_FE016117438EF4D5B4CA6786A52DC8B6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnimBPInventory.AnimBPInventory_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBPInventory_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBPInventory_C", "BlueprintUpdateAnimation");

	Params::UAnimBPInventory_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnimBPInventory.AnimBPInventory_C.ExecuteUbergraph_AnimBPInventory
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_6                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_EquipmentMenuPawn_Inventory_C*K2Node_DynamicCast_AsBP_Equipment_Menu_Pawn_Inventory            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetOwningComponent_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_VInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBPInventory_C::ExecuteUbergraph_AnimBPInventory(int32 EntryPoint, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, float Temp_float_Variable_5, int32 CallFunc_Conv_ByteToInt_ReturnValue, float Temp_float_Variable_6, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, int32 Temp_int_Variable, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, float K2Node_Select_Default, class ABP_EquipmentMenuPawn_Inventory_C* K2Node_DynamicCast_AsBP_Equipment_Menu_Pawn_Inventory, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FVector& CallFunc_VInterpTo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimBPInventory_C", "ExecuteUbergraph_AnimBPInventory");

	Params::UAnimBPInventory_C_ExecuteUbergraph_AnimBPInventory_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.Temp_float_Variable_4 = Temp_float_Variable_4;
	Parms.Temp_float_Variable_5 = Temp_float_Variable_5;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.Temp_float_Variable_6 = Temp_float_Variable_6;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_DynamicCast_AsBP_Equipment_Menu_Pawn_Inventory = K2Node_DynamicCast_AsBP_Equipment_Menu_Pawn_Inventory;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningComponent_ReturnValue = CallFunc_GetOwningComponent_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_VInterpTo_ReturnValue = CallFunc_VInterpTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


