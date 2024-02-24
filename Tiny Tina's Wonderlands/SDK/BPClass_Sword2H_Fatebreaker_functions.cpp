#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPClass_Sword2H_Fatebreaker.BPClass_Sword2H_Fatebreaker_C
// (Actor)

class UClass* ABPClass_Sword2H_Fatebreaker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPClass_Sword2H_Fatebreaker_C");

	return Clss;
}


// BPClass_Sword2H_Fatebreaker_C BPClass_Sword2H_Fatebreaker.Default__BPClass_Sword2H_Fatebreaker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPClass_Sword2H_Fatebreaker_C* ABPClass_Sword2H_Fatebreaker_C::GetDefaultObj()
{
	static class ABPClass_Sword2H_Fatebreaker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPClass_Sword2H_Fatebreaker_C*>(ABPClass_Sword2H_Fatebreaker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPClass_Sword2H_Fatebreaker.BPClass_Sword2H_Fatebreaker_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPClass_Sword2H_Fatebreaker_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPClass_Sword2H_Fatebreaker_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPClass_Sword2H_Fatebreaker.BPClass_Sword2H_Fatebreaker_C.Notify_SpawnProj_MageStaff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_Player*        OwnerPlayer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPClass_Sword2H_Fatebreaker_C::Notify_SpawnProj_MageStaff(class AOakCharacter_Player* OwnerPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPClass_Sword2H_Fatebreaker_C", "Notify_SpawnProj_MageStaff");

	Params::ABPClass_Sword2H_Fatebreaker_C_Notify_SpawnProj_MageStaff_Params Parms{};

	Parms.OwnerPlayer = OwnerPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPClass_Sword2H_Fatebreaker.BPClass_Sword2H_Fatebreaker_C.Notify_SpawnProj_Ragnarok
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_Player*        OwnerPlayer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPClass_Sword2H_Fatebreaker_C::Notify_SpawnProj_Ragnarok(class AOakCharacter_Player* OwnerPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPClass_Sword2H_Fatebreaker_C", "Notify_SpawnProj_Ragnarok");

	Params::ABPClass_Sword2H_Fatebreaker_C_Notify_SpawnProj_Ragnarok_Params Parms{};

	Parms.OwnerPlayer = OwnerPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPClass_Sword2H_Fatebreaker.BPClass_Sword2H_Fatebreaker_C.Notify_SpawnProj_Fatebreaker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_Player*        OwnerPlayer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPClass_Sword2H_Fatebreaker_C::Notify_SpawnProj_Fatebreaker(class AOakCharacter_Player* OwnerPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPClass_Sword2H_Fatebreaker_C", "Notify_SpawnProj_Fatebreaker");

	Params::ABPClass_Sword2H_Fatebreaker_C_Notify_SpawnProj_Fatebreaker_Params Parms{};

	Parms.OwnerPlayer = OwnerPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPClass_Sword2H_Fatebreaker.BPClass_Sword2H_Fatebreaker_C.ExecuteUbergraph_BPClass_Sword2H_Fatebreaker
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        K2Node_Event_OwnerPlayer2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        K2Node_Event_OwnerPlayer1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        K2Node_Event_OwnerPlayer                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetEquippedInventoryForSlot_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableValueHandle       K2Node_MakeStruct_DataTableValueHandle                           (NoDestructor)
// struct FRotator                    CallFunc_GetCurrentFacingRotation_ReturnValue                    (IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableValueHandle       K2Node_MakeStruct_DataTableValueHandle1                          (NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FTransform>          CallFunc_GeneratePointsOnFan_ReturnValue                         (ZeroConstructor, ReferenceParm)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOakLightProjectileInitializationDataK2Node_MakeStruct_OakLightProjectileInitializationData           (ContainsInstancedReference)

void ABPClass_Sword2H_Fatebreaker_C::ExecuteUbergraph_BPClass_Sword2H_Fatebreaker(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class AOakCharacter_Player* K2Node_Event_OwnerPlayer2, class AOakCharacter_Player* K2Node_Event_OwnerPlayer1, class AOakCharacter_Player* K2Node_Event_OwnerPlayer, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_GetEquippedInventoryForSlot_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue1, float CallFunc_GetValueOfAttribute_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, const struct FRotator& CallFunc_GetCurrentFacingRotation_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, TArray<struct FTransform>& CallFunc_GeneratePointsOnFan_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FTransform& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FOakLightProjectileInitializationData& K2Node_MakeStruct_OakLightProjectileInitializationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPClass_Sword2H_Fatebreaker_C", "ExecuteUbergraph_BPClass_Sword2H_Fatebreaker");

	Params::ABPClass_Sword2H_Fatebreaker_C_ExecuteUbergraph_BPClass_Sword2H_Fatebreaker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_Event_OwnerPlayer2 = K2Node_Event_OwnerPlayer2;
	Parms.K2Node_Event_OwnerPlayer1 = K2Node_Event_OwnerPlayer1;
	Parms.K2Node_Event_OwnerPlayer = K2Node_Event_OwnerPlayer;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetEquippedInventoryForSlot_ReturnValue = CallFunc_GetEquippedInventoryForSlot_ReturnValue;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue1 = CallFunc_GetValueOfAttribute_ReturnValue1;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue2 = CallFunc_GetValueOfAttribute_ReturnValue2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableValueHandle = K2Node_MakeStruct_DataTableValueHandle;
	Parms.CallFunc_GetCurrentFacingRotation_ReturnValue = CallFunc_GetCurrentFacingRotation_ReturnValue;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.K2Node_MakeStruct_DataTableValueHandle1 = K2Node_MakeStruct_DataTableValueHandle1;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue1 = CallFunc_GetDataTableValueFromHandle_ReturnValue1;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GeneratePointsOnFan_ReturnValue = CallFunc_GeneratePointsOnFan_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue1 = CallFunc_Multiply_FloatFloat_ReturnValue1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.K2Node_MakeStruct_OakLightProjectileInitializationData = K2Node_MakeStruct_OakLightProjectileInitializationData;

	UObject::ProcessEvent(Func, &Parms);

}

}


