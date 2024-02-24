#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FirstPersonCharacter.FirstPersonCharacter_C
// (Actor, Pawn)

class UClass* AFirstPersonCharacter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FirstPersonCharacter_C");

	return Clss;
}


// FirstPersonCharacter_C FirstPersonCharacter.Default__FirstPersonCharacter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFirstPersonCharacter_C* AFirstPersonCharacter_C::GetDefaultObj()
{
	static class AFirstPersonCharacter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFirstPersonCharacter_C*>(AFirstPersonCharacter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FirstPersonCharacter.FirstPersonCharacter_C.GetCustomizationData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCustomizationData          Info                                                             (Parm, OutParm, NoDestructor)
// struct FCustomizationData          CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut     (NoDestructor)

void AFirstPersonCharacter_C::GetCustomizationData(struct FCustomizationData* Info, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "GetCustomizationData");

	Params::AFirstPersonCharacter_C_GetCustomizationData_Params Parms{};

	Parms.CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut = CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut;

	UObject::ProcessEvent(Func, &Parms);

	if (Info != nullptr)
		*Info = std::move(Parms.Info);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.GetCustomizationWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_CharacterCreation2_C*   Return                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::GetCustomizationWidget(class UWBP_CharacterCreation2_C** Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "GetCustomizationWidget");

	Params::AFirstPersonCharacter_C_GetCustomizationWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.TurnOffTrailsIfNotMoving
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsMoving                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNiagaraComponent*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNiagaraComponent*           CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFirstPersonCharacter_C::TurnOffTrailsIfNotMoving(bool IsMoving, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class UNiagaraComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UNiagaraComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "TurnOffTrailsIfNotMoving");

	Params::AFirstPersonCharacter_C_TurnOffTrailsIfNotMoving_Params Parms{};

	Parms.IsMoving = IsMoving;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetMovementComponent_ReturnValue = CallFunc_GetMovementComponent_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.GetBlueOrbSpawnLoc
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorUpVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorRightVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector AFirstPersonCharacter_C::GetBlueOrbSpawnLoc(const struct FVector& CallFunc_GetActorUpVector_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "GetBlueOrbSpawnLoc");

	Params::AFirstPersonCharacter_C_GetBlueOrbSpawnLoc_Params Parms{};

	Parms.CallFunc_GetActorUpVector_ReturnValue = CallFunc_GetActorUpVector_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_GetActorRightVector_ReturnValue = CallFunc_GetActorRightVector_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_2 = CallFunc_Multiply_VectorFloat_ReturnValue_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.Get Aspect Ratio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Aspect_Ratio                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::Get_Aspect_Ratio(float* Aspect_Ratio, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "Get Aspect Ratio");

	Params::AFirstPersonCharacter_C_Get_Aspect_Ratio_Params Parms{};

	Parms.CallFunc_GetViewportSize_ReturnValue = CallFunc_GetViewportSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Aspect_Ratio != nullptr)
		*Aspect_Ratio = Parms.Aspect_Ratio;

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.IsCreationVisible
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AFirstPersonCharacter_C::IsCreationVisible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "IsCreationVisible");

	Params::AFirstPersonCharacter_C_IsCreationVisible_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.BP_GetDefaultCustomization
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCustomizationData          Data                                                             (Parm, OutParm, NoDestructor)
// struct FCustomizationData          MaleData                                                         (Parm, OutParm, NoDestructor)

void AFirstPersonCharacter_C::BP_GetDefaultCustomization(struct FCustomizationData* Data, struct FCustomizationData* MaleData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "BP_GetDefaultCustomization");

	Params::AFirstPersonCharacter_C_BP_GetDefaultCustomization_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);

	if (MaleData != nullptr)
		*MaleData = std::move(Parms.MaleData);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.GetLocalCustomizationInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCustomizationData          LocalCustomizationDataOut                                        (Parm, OutParm, NoDestructor)
// uint8                              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomizationData          K2Node_Select_Default                                            (NoDestructor)

void AFirstPersonCharacter_C::GetLocalCustomizationInfo(struct FCustomizationData* LocalCustomizationDataOut, uint8 Temp_byte_Variable, const struct FCustomizationData& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "GetLocalCustomizationInfo");

	Params::AFirstPersonCharacter_C_GetLocalCustomizationInfo_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (LocalCustomizationDataOut != nullptr)
		*LocalCustomizationDataOut = std::move(Parms.LocalCustomizationDataOut);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.Handle Glide Cam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UExtendedMovementComponent*  CallFunc_GetExtendedCMC_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckCustomMovement_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AFirstPersonCharacter_C::Handle_Glide_Cam(float CallFunc_GetWorldDeltaSeconds_ReturnValue, class UExtendedMovementComponent* CallFunc_GetExtendedCMC_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_CheckCustomMovement_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_FInterpTo_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "Handle Glide Cam");

	Params::AFirstPersonCharacter_C_Handle_Glide_Cam_Params Parms{};

	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_GetExtendedCMC_ReturnValue = CallFunc_GetExtendedCMC_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_CheckCustomMovement_ReturnValue = CallFunc_CheckCustomMovement_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.IsEthricHair
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FCustomizationData          CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut     (NoDestructor)
// int32                              CallFunc_GetEthricIndex_Array_Index                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_ByteByte_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AFirstPersonCharacter_C::IsEthricHair(const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut, int32 CallFunc_GetEthricIndex_Array_Index, uint8 CallFunc_Conv_IntToByte_ReturnValue, bool CallFunc_GreaterEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "IsEthricHair");

	Params::AFirstPersonCharacter_C_IsEthricHair_Params Parms{};

	Parms.CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut = CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut;
	Parms.CallFunc_GetEthricIndex_Array_Index = CallFunc_GetEthricIndex_Array_Index;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GreaterEqual_ByteByte_ReturnValue = CallFunc_GreaterEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.HandleEyeMat
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          EyeMat                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          EyebrowMat                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    EyeOut                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    EyebrowOut                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomizationData          CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut     (NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterCustomizationDataAsset*CallFunc_GetCustomizationDataAssetByIndex_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomizationData          CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_1   (NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomizationData          CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_2   (NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterCustomizationDataAsset*CallFunc_GetCustomizationDataAssetByIndex_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::HandleEyeMat(class UMaterialInterface* EyeMat, class UMaterialInterface* EyebrowMat, class UMaterialInstanceDynamic** EyeOut, class UMaterialInstanceDynamic** EyebrowOut, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue, class UCharacterCustomizationDataAsset* CallFunc_GetCustomizationDataAssetByIndex_ReturnValue, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_2, int32 CallFunc_Conv_ByteToInt_ReturnValue_3, class UCharacterCustomizationDataAsset* CallFunc_GetCustomizationDataAssetByIndex_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "HandleEyeMat");

	Params::AFirstPersonCharacter_C_HandleEyeMat_Params Parms{};

	Parms.EyeMat = EyeMat;
	Parms.EyebrowMat = EyebrowMat;
	Parms.CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut = CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_GetCustomizationDataAssetByIndex_ReturnValue = CallFunc_GetCustomizationDataAssetByIndex_ReturnValue;
	Parms.CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_1 = CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_2 = CallFunc_Conv_ByteToInt_ReturnValue_2;
	Parms.CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_2 = CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_2;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_3 = CallFunc_Conv_ByteToInt_ReturnValue_3;
	Parms.CallFunc_GetCustomizationDataAssetByIndex_ReturnValue_1 = CallFunc_GetCustomizationDataAssetByIndex_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (EyeOut != nullptr)
		*EyeOut = Parms.EyeOut;

	if (EyebrowOut != nullptr)
		*EyebrowOut = Parms.EyebrowOut;

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.InitCPDOnWings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::InitCPDOnWings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "InitCPDOnWings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.UpdateSkinMat
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          Parent                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    OutputPin                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_GetCostumeMatAndTex_ClothesMat                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetCostumeMatAndTex_ClothesTex                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_GetCostumeMatAndTex_HeadPieceMat                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetCostumeMatAndTex_HeadPieceTex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_GetCostumeMatAndTex_GlovesMat                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetCostumeMatAndTex_GlovesTex                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetCostumeMatAndTex_BodyMask                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetCostumeMatAndTex_GlovesMask                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetCostumeMatAndTex_HeadPieceMask                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterCustomizationDataAsset*CallFunc_GetCustomizationDataAssetByIndex_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USkeletalMesh*>       CallFunc_GetBodyInfo_Skeletal_Meshes                             (ReferenceParm)
// TArray<class UMaterialInstance*>   CallFunc_GetBodyInfo_Body_Materials                              (ReferenceParm)
// struct FLinearColor                CallFunc_GetBodyInfo_Color                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetBodyInfo_Icon                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetBodyInfo_Skin_Sheen                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetBodyInfo_Skin_Emissive                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetBodyInfo_Skin_Edge_Effect                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetBodyInfo_Skin_Wetness                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetBodyInfo_Lip_Color_Amount                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetBodyInfo_Blush_Amount                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetBodyInfo_Face_Tattoo                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetBodyInfo_Body_Tattoo                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_ByteToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_ByteToFloat_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_ByteToFloat_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_ByteToFloat_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMin_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_ByteToFloat_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_ByteToFloat_ReturnValue_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_ByteToFloat_ReturnValue_6                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMin_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_ByteToFloat_ReturnValue_7                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMin_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_ByteToFloat_ReturnValue_8                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMin_ReturnValue_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::UpdateSkinMat(class UMaterialInterface* Parent, class UMaterialInstanceDynamic** OutputPin, class UMaterialInstance* CallFunc_GetCostumeMatAndTex_ClothesMat, class UTexture2D* CallFunc_GetCostumeMatAndTex_ClothesTex, class UMaterialInstance* CallFunc_GetCostumeMatAndTex_HeadPieceMat, class UTexture2D* CallFunc_GetCostumeMatAndTex_HeadPieceTex, class UMaterialInstance* CallFunc_GetCostumeMatAndTex_GlovesMat, class UTexture2D* CallFunc_GetCostumeMatAndTex_GlovesTex, class UTexture2D* CallFunc_GetCostumeMatAndTex_BodyMask, class UTexture2D* CallFunc_GetCostumeMatAndTex_GlovesMask, class UTexture2D* CallFunc_GetCostumeMatAndTex_HeadPieceMask, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UCharacterCustomizationDataAsset* CallFunc_GetCustomizationDataAssetByIndex_ReturnValue, TArray<class USkeletalMesh*>& CallFunc_GetBodyInfo_Skeletal_Meshes, TArray<class UMaterialInstance*>& CallFunc_GetBodyInfo_Body_Materials, const struct FLinearColor& CallFunc_GetBodyInfo_Color, class UTexture2D* CallFunc_GetBodyInfo_Icon, uint8 CallFunc_GetBodyInfo_Skin_Sheen, uint8 CallFunc_GetBodyInfo_Skin_Emissive, uint8 CallFunc_GetBodyInfo_Skin_Edge_Effect, uint8 CallFunc_GetBodyInfo_Skin_Wetness, uint8 CallFunc_GetBodyInfo_Lip_Color_Amount, uint8 CallFunc_GetBodyInfo_Blush_Amount, uint8 CallFunc_GetBodyInfo_Face_Tattoo, uint8 CallFunc_GetBodyInfo_Body_Tattoo, float CallFunc_Conv_ByteToFloat_ReturnValue, float CallFunc_Conv_ByteToFloat_ReturnValue_1, float CallFunc_FMin_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, float CallFunc_Conv_ByteToFloat_ReturnValue_2, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Conv_ByteToFloat_ReturnValue_3, float CallFunc_FMin_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Conv_ByteToFloat_ReturnValue_4, float CallFunc_Conv_ByteToFloat_ReturnValue_5, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, int32 CallFunc_Conv_ByteToInt_ReturnValue, float CallFunc_Conv_ByteToFloat_ReturnValue_6, float CallFunc_FMin_ReturnValue_2, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, float CallFunc_Conv_ByteToFloat_ReturnValue_7, float CallFunc_FMin_ReturnValue_3, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, float CallFunc_Conv_ByteToFloat_ReturnValue_8, float CallFunc_FMin_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "UpdateSkinMat");

	Params::AFirstPersonCharacter_C_UpdateSkinMat_Params Parms{};

	Parms.Parent = Parent;
	Parms.CallFunc_GetCostumeMatAndTex_ClothesMat = CallFunc_GetCostumeMatAndTex_ClothesMat;
	Parms.CallFunc_GetCostumeMatAndTex_ClothesTex = CallFunc_GetCostumeMatAndTex_ClothesTex;
	Parms.CallFunc_GetCostumeMatAndTex_HeadPieceMat = CallFunc_GetCostumeMatAndTex_HeadPieceMat;
	Parms.CallFunc_GetCostumeMatAndTex_HeadPieceTex = CallFunc_GetCostumeMatAndTex_HeadPieceTex;
	Parms.CallFunc_GetCostumeMatAndTex_GlovesMat = CallFunc_GetCostumeMatAndTex_GlovesMat;
	Parms.CallFunc_GetCostumeMatAndTex_GlovesTex = CallFunc_GetCostumeMatAndTex_GlovesTex;
	Parms.CallFunc_GetCostumeMatAndTex_BodyMask = CallFunc_GetCostumeMatAndTex_BodyMask;
	Parms.CallFunc_GetCostumeMatAndTex_GlovesMask = CallFunc_GetCostumeMatAndTex_GlovesMask;
	Parms.CallFunc_GetCostumeMatAndTex_HeadPieceMask = CallFunc_GetCostumeMatAndTex_HeadPieceMask;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_GetCustomizationDataAssetByIndex_ReturnValue = CallFunc_GetCustomizationDataAssetByIndex_ReturnValue;
	Parms.CallFunc_GetBodyInfo_Skeletal_Meshes = CallFunc_GetBodyInfo_Skeletal_Meshes;
	Parms.CallFunc_GetBodyInfo_Body_Materials = CallFunc_GetBodyInfo_Body_Materials;
	Parms.CallFunc_GetBodyInfo_Color = CallFunc_GetBodyInfo_Color;
	Parms.CallFunc_GetBodyInfo_Icon = CallFunc_GetBodyInfo_Icon;
	Parms.CallFunc_GetBodyInfo_Skin_Sheen = CallFunc_GetBodyInfo_Skin_Sheen;
	Parms.CallFunc_GetBodyInfo_Skin_Emissive = CallFunc_GetBodyInfo_Skin_Emissive;
	Parms.CallFunc_GetBodyInfo_Skin_Edge_Effect = CallFunc_GetBodyInfo_Skin_Edge_Effect;
	Parms.CallFunc_GetBodyInfo_Skin_Wetness = CallFunc_GetBodyInfo_Skin_Wetness;
	Parms.CallFunc_GetBodyInfo_Lip_Color_Amount = CallFunc_GetBodyInfo_Lip_Color_Amount;
	Parms.CallFunc_GetBodyInfo_Blush_Amount = CallFunc_GetBodyInfo_Blush_Amount;
	Parms.CallFunc_GetBodyInfo_Face_Tattoo = CallFunc_GetBodyInfo_Face_Tattoo;
	Parms.CallFunc_GetBodyInfo_Body_Tattoo = CallFunc_GetBodyInfo_Body_Tattoo;
	Parms.CallFunc_Conv_ByteToFloat_ReturnValue = CallFunc_Conv_ByteToFloat_ReturnValue;
	Parms.CallFunc_Conv_ByteToFloat_ReturnValue_1 = CallFunc_Conv_ByteToFloat_ReturnValue_1;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToFloat_ReturnValue_2 = CallFunc_Conv_ByteToFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Conv_ByteToFloat_ReturnValue_3 = CallFunc_Conv_ByteToFloat_ReturnValue_3;
	Parms.CallFunc_FMin_ReturnValue_1 = CallFunc_FMin_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_ByteToFloat_ReturnValue_4 = CallFunc_Conv_ByteToFloat_ReturnValue_4;
	Parms.CallFunc_Conv_ByteToFloat_ReturnValue_5 = CallFunc_Conv_ByteToFloat_ReturnValue_5;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_2 = CallFunc_Divide_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Conv_ByteToFloat_ReturnValue_6 = CallFunc_Conv_ByteToFloat_ReturnValue_6;
	Parms.CallFunc_FMin_ReturnValue_2 = CallFunc_FMin_ReturnValue_2;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToFloat_ReturnValue_7 = CallFunc_Conv_ByteToFloat_ReturnValue_7;
	Parms.CallFunc_FMin_ReturnValue_3 = CallFunc_FMin_ReturnValue_3;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_2 = CallFunc_Conv_ByteToInt_ReturnValue_2;
	Parms.CallFunc_Conv_ByteToFloat_ReturnValue_8 = CallFunc_Conv_ByteToFloat_ReturnValue_8;
	Parms.CallFunc_FMin_ReturnValue_4 = CallFunc_FMin_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	if (OutputPin != nullptr)
		*OutputPin = Parms.OutputPin;

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.Handle Face Tattoo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    SkinMat                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::Handle_Face_Tattoo(int32 Index, class UMaterialInstanceDynamic* SkinMat, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "Handle Face Tattoo");

	Params::AFirstPersonCharacter_C_Handle_Face_Tattoo_Params Parms{};

	Parms.Index = Index;
	Parms.SkinMat = SkinMat;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.Handle Body Tattoo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    SkinMat                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::Handle_Body_Tattoo(int32 Index, class UMaterialInstanceDynamic* SkinMat, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "Handle Body Tattoo");

	Params::AFirstPersonCharacter_C_Handle_Body_Tattoo_Params Parms{};

	Parms.Index = Index;
	Parms.SkinMat = SkinMat;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.HandleCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BPI_IsFTUE_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFirstPersonCharacter_C::HandleCamera(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, bool CallFunc_BPI_IsFTUE_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "HandleCamera");

	Params::AFirstPersonCharacter_C_HandleCamera_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_BPI_IsFTUE_ReturnValue = CallFunc_BPI_IsFTUE_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.CancelEmoteIfMoving
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFirstPersonCharacter_C::CancelEmoteIfMoving(bool CallFunc_IsLocallyControlled_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "CancelEmoteIfMoving");

	Params::AFirstPersonCharacter_C_CancelEmoteIfMoving_Params Parms{};

	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.InitVar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USophiaGameInstance*         K2Node_DynamicCast_AsSophia_Game_Instance                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFirstPersonCharacter_C::InitVar(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "InitVar");

	Params::AFirstPersonCharacter_C_InitVar_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsSophia_Game_Instance = K2Node_DynamicCast_AsSophia_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.HandleCharacterCreation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_BPI_IsFTUE_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWBP_CharacterCreation2_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::HandleCharacterCreation(bool CallFunc_BPI_IsFTUE_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UWBP_CharacterCreation2_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "HandleCharacterCreation");

	Params::AFirstPersonCharacter_C_HandleCharacterCreation_Params Parms{};

	Parms.CallFunc_BPI_IsFTUE_ReturnValue = CallFunc_BPI_IsFTUE_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.Handle Local Customization Updated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFirstPersonCharacter_C::Handle_Local_Customization_Updated(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "Handle Local Customization Updated");

	Params::AFirstPersonCharacter_C_Handle_Local_Customization_Updated_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.HandleInputsEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::HandleInputsEnabled(class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "HandleInputsEnabled");

	Params::AFirstPersonCharacter_C_HandleInputsEnabled_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.HandleCameraForPerformanceReports
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class AActor>       CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::HandleCameraForPerformanceReports(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TSoftObjectPtr<class AActor> CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidSoftObjectReference_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "HandleCameraForPerformanceReports");

	Params::AFirstPersonCharacter_C_HandleCameraForPerformanceReports_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.Handle Unisex Customization
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCustomizationData          CustomizationData                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::Handle_Unisex_Customization(struct FCustomizationData& CustomizationData, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, int32 CallFunc_Conv_ByteToInt_ReturnValue_3, int32 CallFunc_Min_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "Handle Unisex Customization");

	Params::AFirstPersonCharacter_C_Handle_Unisex_Customization_Params Parms{};

	Parms.CustomizationData = CustomizationData;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_2 = CallFunc_Conv_ByteToInt_ReturnValue_2;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_3 = CallFunc_Conv_ByteToInt_ReturnValue_3;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.LoadCustomizationInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveCharacterCosmetic_C*    K2Node_DynamicCast_AsSave_Character_Cosmetic                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFirstPersonCharacter_C::LoadCustomizationInfo(class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class USaveCharacterCosmetic_C* K2Node_DynamicCast_AsSave_Character_Cosmetic, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "LoadCustomizationInfo");

	Params::AFirstPersonCharacter_C_LoadCustomizationInfo_Params Parms{};

	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsSave_Character_Cosmetic = K2Node_DynamicCast_AsSave_Character_Cosmetic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.GetScalpMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UStaticMesh*>         Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UStaticMesh*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMesh*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMesh*                 K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UStaticMesh* AFirstPersonCharacter_C::GetScalpMesh(TArray<class UStaticMesh*>& Array, bool Temp_bool_Variable, class UStaticMesh* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UStaticMesh* Temp_object_Variable, bool CallFunc_Greater_IntInt_ReturnValue, class UStaticMesh* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "GetScalpMesh");

	Params::AFirstPersonCharacter_C_GetScalpMesh_Params Parms{};

	Parms.Array = Array;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.GetMergedBodyMesh
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class USkeletalMesh*>       Array                                                            (Parm, OutParm)
// TArray<class USkeletalMesh*>       Meshes                                                           (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomizationData          CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut     (NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterCustomizationDataAsset*CallFunc_GetCustomizationDataAsset_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMesh*               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class USkeletalMesh*>       CallFunc_GetBodyInfo_Skeletal_Meshes                             (ReferenceParm)
// TArray<class UMaterialInstance*>   CallFunc_GetBodyInfo_Body_Materials                              (ReferenceParm)
// struct FLinearColor                CallFunc_GetBodyInfo_Color                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetBodyInfo_Icon                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetBodyInfo_Skin_Sheen                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetBodyInfo_Skin_Emissive                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetBodyInfo_Skin_Edge_Effect                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetBodyInfo_Skin_Wetness                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetBodyInfo_Lip_Color_Amount                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetBodyInfo_Blush_Amount                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetBodyInfo_Face_Tattoo                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetBodyInfo_Body_Tattoo                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCustomizationSingle        CallFunc_GetCostumeInfo_Clothes                                  (None)
// struct FCustomizationSingle        CallFunc_GetCostumeInfo_HeadPieces                               (None)
// struct FCustomizationSingle        CallFunc_GetCostumeInfo_Gloves                                   (None)
// TArray<class USkeletalMesh*>       K2Node_MakeArray_Array                                           (ReferenceParm)

void AFirstPersonCharacter_C::GetMergedBodyMesh(TArray<class USkeletalMesh*>* Array, const TArray<class USkeletalMesh*>& Meshes, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut, int32 CallFunc_Conv_ByteToInt_ReturnValue, class UCharacterCustomizationDataAsset* CallFunc_GetCustomizationDataAsset_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Min_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class USkeletalMesh* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class USkeletalMesh*>& CallFunc_GetBodyInfo_Skeletal_Meshes, TArray<class UMaterialInstance*>& CallFunc_GetBodyInfo_Body_Materials, const struct FLinearColor& CallFunc_GetBodyInfo_Color, class UTexture2D* CallFunc_GetBodyInfo_Icon, uint8 CallFunc_GetBodyInfo_Skin_Sheen, uint8 CallFunc_GetBodyInfo_Skin_Emissive, uint8 CallFunc_GetBodyInfo_Skin_Edge_Effect, uint8 CallFunc_GetBodyInfo_Skin_Wetness, uint8 CallFunc_GetBodyInfo_Lip_Color_Amount, uint8 CallFunc_GetBodyInfo_Blush_Amount, uint8 CallFunc_GetBodyInfo_Face_Tattoo, uint8 CallFunc_GetBodyInfo_Body_Tattoo, class USkeletalMesh* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FCustomizationSingle& CallFunc_GetCostumeInfo_Clothes, const struct FCustomizationSingle& CallFunc_GetCostumeInfo_HeadPieces, const struct FCustomizationSingle& CallFunc_GetCostumeInfo_Gloves, TArray<class USkeletalMesh*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "GetMergedBodyMesh");

	Params::AFirstPersonCharacter_C_GetMergedBodyMesh_Params Parms{};

	Parms.Meshes = Meshes;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut = CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_GetCustomizationDataAsset_ReturnValue = CallFunc_GetCustomizationDataAsset_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetBodyInfo_Skeletal_Meshes = CallFunc_GetBodyInfo_Skeletal_Meshes;
	Parms.CallFunc_GetBodyInfo_Body_Materials = CallFunc_GetBodyInfo_Body_Materials;
	Parms.CallFunc_GetBodyInfo_Color = CallFunc_GetBodyInfo_Color;
	Parms.CallFunc_GetBodyInfo_Icon = CallFunc_GetBodyInfo_Icon;
	Parms.CallFunc_GetBodyInfo_Skin_Sheen = CallFunc_GetBodyInfo_Skin_Sheen;
	Parms.CallFunc_GetBodyInfo_Skin_Emissive = CallFunc_GetBodyInfo_Skin_Emissive;
	Parms.CallFunc_GetBodyInfo_Skin_Edge_Effect = CallFunc_GetBodyInfo_Skin_Edge_Effect;
	Parms.CallFunc_GetBodyInfo_Skin_Wetness = CallFunc_GetBodyInfo_Skin_Wetness;
	Parms.CallFunc_GetBodyInfo_Lip_Color_Amount = CallFunc_GetBodyInfo_Lip_Color_Amount;
	Parms.CallFunc_GetBodyInfo_Blush_Amount = CallFunc_GetBodyInfo_Blush_Amount;
	Parms.CallFunc_GetBodyInfo_Face_Tattoo = CallFunc_GetBodyInfo_Face_Tattoo;
	Parms.CallFunc_GetBodyInfo_Body_Tattoo = CallFunc_GetBodyInfo_Body_Tattoo;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetCostumeInfo_Clothes = CallFunc_GetCostumeInfo_Clothes;
	Parms.CallFunc_GetCostumeInfo_HeadPieces = CallFunc_GetCostumeInfo_HeadPieces;
	Parms.CallFunc_GetCostumeInfo_Gloves = CallFunc_GetCostumeInfo_Gloves;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.HandleWingsVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::HandleWingsVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "HandleWingsVisibility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.HandleCameraLag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UExtendedMovementComponent*  CallFunc_GetExtendedCMC_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckCustomMovement_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFirstPersonCharacter_C::HandleCameraLag(class UExtendedMovementComponent* CallFunc_GetExtendedCMC_ReturnValue, bool CallFunc_CheckCustomMovement_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "HandleCameraLag");

	Params::AFirstPersonCharacter_C_HandleCameraLag_Params Parms{};

	Parms.CallFunc_GetExtendedCMC_ReturnValue = CallFunc_GetExtendedCMC_ReturnValue;
	Parms.CallFunc_CheckCustomMovement_ReturnValue = CallFunc_CheckCustomMovement_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.HandleMeshVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMovingOnGround_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SophiaPlayerState_C*     K2Node_DynamicCast_AsBP_Sophia_Player_State                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldHairBeVisible_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFirstPersonCharacter_C::HandleMeshVisibility(bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_IsMovingOnGround_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class ABP_SophiaPlayerState_C* K2Node_DynamicCast_AsBP_Sophia_Player_State, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, bool K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_ShouldHairBeVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "HandleMeshVisibility");

	Params::AFirstPersonCharacter_C_HandleMeshVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_IsMovingOnGround_ReturnValue = CallFunc_IsMovingOnGround_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Sophia_Player_State = K2Node_DynamicCast_AsBP_Sophia_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCameraLocation_ReturnValue = CallFunc_GetCameraLocation_ReturnValue;
	Parms.CallFunc_EqualEqual_VectorVector_ReturnValue = CallFunc_EqualEqual_VectorVector_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_ShouldHairBeVisible_ReturnValue = CallFunc_ShouldHairBeVisible_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.HandleMeshDithering
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::HandleMeshDithering(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_SelectFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "HandleMeshDithering");

	Params::AFirstPersonCharacter_C_HandleMeshDithering_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.HandleFirstPersonMeshTickVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EVisibilityBasedAnimTickOptionTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVisibilityBasedAnimTickOptionTemp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EVisibilityBasedAnimTickOptionK2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::HandleFirstPersonMeshTickVisibility(bool Temp_bool_Variable, enum class EVisibilityBasedAnimTickOption Temp_byte_Variable, enum class EVisibilityBasedAnimTickOption Temp_byte_Variable_1, bool CallFunc_IsLocallyControlled_ReturnValue, enum class EVisibilityBasedAnimTickOption K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "HandleFirstPersonMeshTickVisibility");

	Params::AFirstPersonCharacter_C_HandleFirstPersonMeshTickVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.HandleFeetTrails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFirstPersonCharacter_C::HandleFeetTrails(int32 Temp_int_Array_Index_Variable, float CallFunc_RandomFloatInRange_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "HandleFeetTrails");

	Params::AFirstPersonCharacter_C_HandleFeetTrails_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue_1 = CallFunc_SpawnSystemAttached_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.HandleFlyingSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSizeXY_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::HandleFlyingSound(const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_VSizeXY_ReturnValue, float CallFunc_Abs_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "HandleFlyingSound");

	Params::AFirstPersonCharacter_C_HandleFlyingSound_Params Parms{};

	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_VSizeXY_ReturnValue = CallFunc_VSizeXY_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.InitSpawnLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_NotEqualExactly_VectorVector_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UExtendedMovementComponent*  K2Node_DynamicCast_AsExtended_Movement_Component                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USophiaGameInstance*         K2Node_DynamicCast_AsSophia_Game_Instance                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFirstPersonCharacter_C::InitSpawnLocation(bool CallFunc_NotEqualExactly_VectorVector_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UExtendedMovementComponent* K2Node_DynamicCast_AsExtended_Movement_Component, bool K2Node_DynamicCast_bSuccess, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "InitSpawnLocation");

	Params::AFirstPersonCharacter_C_InitSpawnLocation_Params Parms{};

	Parms.CallFunc_NotEqualExactly_VectorVector_ReturnValue = CallFunc_NotEqualExactly_VectorVector_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsExtended_Movement_Component = K2Node_DynamicCast_AsExtended_Movement_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsSophia_Game_Instance = K2Node_DynamicCast_AsSophia_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.InitializeRespawnEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWeightedBlendable          K2Node_MakeStruct_WeightedBlendable                              (NoDestructor)
// TArray<struct FWeightedBlendable>  K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FWeightedBlendables         K2Node_MakeStruct_WeightedBlendables                             (None)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPostProcessSettings        K2Node_MakeStruct_PostProcessSettings                            (None)

void AFirstPersonCharacter_C::InitializeRespawnEffect(const struct FWeightedBlendable& K2Node_MakeStruct_WeightedBlendable, TArray<struct FWeightedBlendable>& K2Node_MakeArray_Array, const struct FWeightedBlendables& K2Node_MakeStruct_WeightedBlendables, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FPostProcessSettings& K2Node_MakeStruct_PostProcessSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "InitializeRespawnEffect");

	Params::AFirstPersonCharacter_C_InitializeRespawnEffect_Params Parms{};

	Parms.K2Node_MakeStruct_WeightedBlendable = K2Node_MakeStruct_WeightedBlendable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_WeightedBlendables = K2Node_MakeStruct_WeightedBlendables;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_MakeStruct_PostProcessSettings = K2Node_MakeStruct_PostProcessSettings;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.CreateBlueOrbCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BlueOrbCamera_C*         CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::CreateBlueOrbCamera(const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_BlueOrbCamera_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "CreateBlueOrbCamera");

	Params::AFirstPersonCharacter_C_CreateBlueOrbCamera_Params Parms{};

	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.SetPlayerLocationMaterialParameters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_5                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_6                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::SetPlayerLocationMaterialParameters(const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_2, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_3, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_2, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_3, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_4, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_5, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_4, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_5, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_6, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "SetPlayerLocationMaterialParameters");

	Params::AFirstPersonCharacter_C_SetPlayerLocationMaterialParameters_Params Parms{};

	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue_1 = CallFunc_GetSocketLocation_ReturnValue_1;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_1 = CallFunc_Conv_VectorToLinearColor_ReturnValue_1;
	Parms.CallFunc_GetSocketLocation_ReturnValue_2 = CallFunc_GetSocketLocation_ReturnValue_2;
	Parms.CallFunc_GetSocketLocation_ReturnValue_3 = CallFunc_GetSocketLocation_ReturnValue_3;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_2 = CallFunc_Conv_VectorToLinearColor_ReturnValue_2;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_3 = CallFunc_Conv_VectorToLinearColor_ReturnValue_3;
	Parms.CallFunc_GetSocketLocation_ReturnValue_4 = CallFunc_GetSocketLocation_ReturnValue_4;
	Parms.CallFunc_GetSocketLocation_ReturnValue_5 = CallFunc_GetSocketLocation_ReturnValue_5;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_4 = CallFunc_Conv_VectorToLinearColor_ReturnValue_4;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_5 = CallFunc_Conv_VectorToLinearColor_ReturnValue_5;
	Parms.CallFunc_GetSocketLocation_ReturnValue_6 = CallFunc_GetSocketLocation_ReturnValue_6;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_6 = CallFunc_Conv_VectorToLinearColor_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.GetHairInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      Kraken_ID                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class UStaticMesh*                 Mesh                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 Scalp                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           ScalpMat                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           Material                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                HairColor                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                HairSecondColor                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UTexture2D*>          Icon                                                             (Parm, OutParm)
// struct FCustomizationData          CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut     (NoDestructor)
// struct FCustomizationData          CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_1   (NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEthricHair_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCharacterCustomizationDataAsset*CallFunc_GetCustomizationDataAssetByIndex_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_4                                        (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstance*           CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 CallFunc_Array_Get_Item_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 CallFunc_GetScalpMesh_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::GetHairInfo(class FString* Kraken_ID, class UStaticMesh** Mesh, class UStaticMesh** Scalp, class UMaterialInstance** ScalpMat, class UMaterialInstance** Material, struct FLinearColor* HairColor, struct FLinearColor* HairSecondColor, TArray<class UTexture2D*>* Icon, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, int32 CallFunc_Conv_ByteToInt_ReturnValue_3, int32 CallFunc_Conv_ByteToInt_ReturnValue_4, bool CallFunc_IsEthricHair_ReturnValue, class UCharacterCustomizationDataAsset* CallFunc_GetCustomizationDataAssetByIndex_ReturnValue, uint8 Temp_byte_Variable, const struct FLinearColor& CallFunc_Array_Get_Item, const struct FLinearColor& CallFunc_Array_Get_Item_1, const struct FLinearColor& CallFunc_Array_Get_Item_2, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, bool Temp_bool_Variable, const struct FLinearColor& CallFunc_Array_Get_Item_3, uint8 K2Node_Select_Default, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_5, const class FString& CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UMaterialInstance* CallFunc_Array_Get_Item_5, class UMaterialInstance* CallFunc_Array_Get_Item_6, class UStaticMesh* CallFunc_Array_Get_Item_7, class UStaticMesh* CallFunc_GetScalpMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "GetHairInfo");

	Params::AFirstPersonCharacter_C_GetHairInfo_Params Parms{};

	Parms.CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut = CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut;
	Parms.CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_1 = CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_2 = CallFunc_Conv_ByteToInt_ReturnValue_2;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_3 = CallFunc_Conv_ByteToInt_ReturnValue_3;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_4 = CallFunc_Conv_ByteToInt_ReturnValue_4;
	Parms.CallFunc_IsEthricHair_ReturnValue = CallFunc_IsEthricHair_ReturnValue;
	Parms.CallFunc_GetCustomizationDataAssetByIndex_ReturnValue = CallFunc_GetCustomizationDataAssetByIndex_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SelectColor_ReturnValue_1 = CallFunc_SelectColor_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_5 = CallFunc_Conv_ByteToInt_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_GetScalpMesh_ReturnValue = CallFunc_GetScalpMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Kraken_ID != nullptr)
		*Kraken_ID = std::move(Parms.Kraken_ID);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;

	if (Scalp != nullptr)
		*Scalp = Parms.Scalp;

	if (ScalpMat != nullptr)
		*ScalpMat = Parms.ScalpMat;

	if (Material != nullptr)
		*Material = Parms.Material;

	if (HairColor != nullptr)
		*HairColor = std::move(Parms.HairColor);

	if (HairSecondColor != nullptr)
		*HairSecondColor = std::move(Parms.HairSecondColor);

	if (Icon != nullptr)
		*Icon = std::move(Parms.Icon);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.GetBodyInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class USkeletalMesh*>       Skeletal_Meshes                                                  (Parm, OutParm)
// TArray<class UMaterialInstance*>   Body_Materials                                                   (Parm, OutParm)
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Icon                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Skin_Sheen                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Skin_Emissive                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Skin_Edge_Effect                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Skin_Wetness                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Lip_Color_Amount                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Blush_Amount                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Face_Tattoo                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Body_Tattoo                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomizationData          CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut     (NoDestructor)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCharacterCustomizationDataAsset*CallFunc_GetCustomizationDataAssetByIndex_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomizationMaterialInfo  CallFunc_Array_Get_Item_2                                        (None)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::GetBodyInfo(TArray<class USkeletalMesh*>* Skeletal_Meshes, TArray<class UMaterialInstance*>* Body_Materials, struct FLinearColor* Color, class UTexture2D** Icon, uint8* Skin_Sheen, uint8* Skin_Emissive, uint8* Skin_Edge_Effect, uint8* Skin_Wetness, uint8* Lip_Color_Amount, uint8* Blush_Amount, uint8* Face_Tattoo, uint8* Body_Tattoo, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut, class UTexture2D* Temp_object_Variable, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, bool Temp_bool_Variable, class UCharacterCustomizationDataAsset* CallFunc_GetCustomizationDataAssetByIndex_ReturnValue, class UTexture2D* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FLinearColor& CallFunc_Array_Get_Item_1, const struct FCustomizationMaterialInfo& CallFunc_Array_Get_Item_2, class UTexture2D* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "GetBodyInfo");

	Params::AFirstPersonCharacter_C_GetBodyInfo_Params Parms{};

	Parms.CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut = CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetCustomizationDataAssetByIndex_ReturnValue = CallFunc_GetCustomizationDataAssetByIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Skeletal_Meshes != nullptr)
		*Skeletal_Meshes = std::move(Parms.Skeletal_Meshes);

	if (Body_Materials != nullptr)
		*Body_Materials = std::move(Parms.Body_Materials);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	if (Icon != nullptr)
		*Icon = Parms.Icon;

	if (Skin_Sheen != nullptr)
		*Skin_Sheen = Parms.Skin_Sheen;

	if (Skin_Emissive != nullptr)
		*Skin_Emissive = Parms.Skin_Emissive;

	if (Skin_Edge_Effect != nullptr)
		*Skin_Edge_Effect = Parms.Skin_Edge_Effect;

	if (Skin_Wetness != nullptr)
		*Skin_Wetness = Parms.Skin_Wetness;

	if (Lip_Color_Amount != nullptr)
		*Lip_Color_Amount = Parms.Lip_Color_Amount;

	if (Blush_Amount != nullptr)
		*Blush_Amount = Parms.Blush_Amount;

	if (Face_Tattoo != nullptr)
		*Face_Tattoo = Parms.Face_Tattoo;

	if (Body_Tattoo != nullptr)
		*Body_Tattoo = Parms.Body_Tattoo;

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.GetCostumeInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCustomizationSingle        Clothes                                                          (Parm, OutParm)
// struct FCustomizationSingle        HeadPieces                                                       (Parm, OutParm)
// struct FCustomizationSingle        Gloves                                                           (Parm, OutParm)
// struct FCustomizationData          CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut     (NoDestructor)
// class UCharacterCustomizationDataAsset*CallFunc_GetCustomizationDataAsset_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterCustomizationDataAsset*CallFunc_GetCustomizationDataAsset_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomizationSingle        CallFunc_GetCustomizationDataByIndex_ReturnValue                 (None)
// struct FCustomizationSingle        CallFunc_GetCustomizationDataByIndex_ReturnValue_1               (None)
// class UCharacterCustomizationDataAsset*CallFunc_GetCustomizationDataAsset_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterCustomizationDataAsset*CallFunc_GetCustomizationDataAsset_ReturnValue_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCustomizationSingle        CallFunc_GetCustomizationDataByIndex_ReturnValue_2               (None)

void AFirstPersonCharacter_C::GetCostumeInfo(struct FCustomizationSingle* Clothes, struct FCustomizationSingle* HeadPieces, struct FCustomizationSingle* Gloves, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut, class UCharacterCustomizationDataAsset* CallFunc_GetCustomizationDataAsset_ReturnValue, class UCharacterCustomizationDataAsset* CallFunc_GetCustomizationDataAsset_ReturnValue_1, const struct FCustomizationSingle& CallFunc_GetCustomizationDataByIndex_ReturnValue, const struct FCustomizationSingle& CallFunc_GetCustomizationDataByIndex_ReturnValue_1, class UCharacterCustomizationDataAsset* CallFunc_GetCustomizationDataAsset_ReturnValue_2, class UCharacterCustomizationDataAsset* CallFunc_GetCustomizationDataAsset_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, const struct FCustomizationSingle& CallFunc_GetCustomizationDataByIndex_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "GetCostumeInfo");

	Params::AFirstPersonCharacter_C_GetCostumeInfo_Params Parms{};

	Parms.CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut = CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut;
	Parms.CallFunc_GetCustomizationDataAsset_ReturnValue = CallFunc_GetCustomizationDataAsset_ReturnValue;
	Parms.CallFunc_GetCustomizationDataAsset_ReturnValue_1 = CallFunc_GetCustomizationDataAsset_ReturnValue_1;
	Parms.CallFunc_GetCustomizationDataByIndex_ReturnValue = CallFunc_GetCustomizationDataByIndex_ReturnValue;
	Parms.CallFunc_GetCustomizationDataByIndex_ReturnValue_1 = CallFunc_GetCustomizationDataByIndex_ReturnValue_1;
	Parms.CallFunc_GetCustomizationDataAsset_ReturnValue_2 = CallFunc_GetCustomizationDataAsset_ReturnValue_2;
	Parms.CallFunc_GetCustomizationDataAsset_ReturnValue_3 = CallFunc_GetCustomizationDataAsset_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCustomizationDataByIndex_ReturnValue_2 = CallFunc_GetCustomizationDataByIndex_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Clothes != nullptr)
		*Clothes = std::move(Parms.Clothes);

	if (HeadPieces != nullptr)
		*HeadPieces = std::move(Parms.HeadPieces);

	if (Gloves != nullptr)
		*Gloves = std::move(Parms.Gloves);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.GetCostumeMatAndTex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMaterialInstance*           ClothesMat                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  ClothesTex                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           HeadPieceMat                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  HeadPieceTex                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           GlovesMat                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  GlovesTex                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  BodyMask                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  GlovesMask                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  HeadPieceMask                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomizationData          CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut     (NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterCustomizationDataAsset*CallFunc_GetCustomizationDataAssetByIndex_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomizationSingle        CallFunc_GetCustomizationDataByIndex_ReturnValue                 (None)
// struct FCustomizationSingle        CallFunc_GetCustomizationDataByIndex_ReturnValue_1               (None)
// class UTexture2D*                  CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomizationSingle        CallFunc_GetCustomizationDataByIndex_ReturnValue_2               (None)
// class UMaterialInstance*           CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Array_Get_Item_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Array_Get_Item_8                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::GetCostumeMatAndTex(class UMaterialInstance** ClothesMat, class UTexture2D** ClothesTex, class UMaterialInstance** HeadPieceMat, class UTexture2D** HeadPieceTex, class UMaterialInstance** GlovesMat, class UTexture2D** GlovesTex, class UTexture2D** BodyMask, class UTexture2D** GlovesMask, class UTexture2D** HeadPieceMask, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut, int32 CallFunc_Conv_ByteToInt_ReturnValue, class UCharacterCustomizationDataAsset* CallFunc_GetCustomizationDataAssetByIndex_ReturnValue, const struct FCustomizationSingle& CallFunc_GetCustomizationDataByIndex_ReturnValue, const struct FCustomizationSingle& CallFunc_GetCustomizationDataByIndex_ReturnValue_1, class UTexture2D* CallFunc_Array_Get_Item, class UTexture2D* CallFunc_Array_Get_Item_1, class UTexture2D* CallFunc_Array_Get_Item_2, class UMaterialInstance* CallFunc_Array_Get_Item_3, class UTexture2D* CallFunc_Array_Get_Item_4, class UMaterialInstance* CallFunc_Array_Get_Item_5, const struct FCustomizationSingle& CallFunc_GetCustomizationDataByIndex_ReturnValue_2, class UMaterialInstance* CallFunc_Array_Get_Item_6, class UTexture2D* CallFunc_Array_Get_Item_7, class UTexture2D* CallFunc_Array_Get_Item_8)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "GetCostumeMatAndTex");

	Params::AFirstPersonCharacter_C_GetCostumeMatAndTex_Params Parms{};

	Parms.CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut = CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_GetCustomizationDataAssetByIndex_ReturnValue = CallFunc_GetCustomizationDataAssetByIndex_ReturnValue;
	Parms.CallFunc_GetCustomizationDataByIndex_ReturnValue = CallFunc_GetCustomizationDataByIndex_ReturnValue;
	Parms.CallFunc_GetCustomizationDataByIndex_ReturnValue_1 = CallFunc_GetCustomizationDataByIndex_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_GetCustomizationDataByIndex_ReturnValue_2 = CallFunc_GetCustomizationDataByIndex_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;

	UObject::ProcessEvent(Func, &Parms);

	if (ClothesMat != nullptr)
		*ClothesMat = Parms.ClothesMat;

	if (ClothesTex != nullptr)
		*ClothesTex = Parms.ClothesTex;

	if (HeadPieceMat != nullptr)
		*HeadPieceMat = Parms.HeadPieceMat;

	if (HeadPieceTex != nullptr)
		*HeadPieceTex = Parms.HeadPieceTex;

	if (GlovesMat != nullptr)
		*GlovesMat = Parms.GlovesMat;

	if (GlovesTex != nullptr)
		*GlovesTex = Parms.GlovesTex;

	if (BodyMask != nullptr)
		*BodyMask = Parms.BodyMask;

	if (GlovesMask != nullptr)
		*GlovesMask = Parms.GlovesMask;

	if (HeadPieceMask != nullptr)
		*HeadPieceMask = Parms.HeadPieceMask;

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.GetCustomizationDataAsset
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCharacterCustomizationDataAsset*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomizationData          CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut     (NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterCustomizationDataAsset*CallFunc_GetCustomizationDataAssetByIndex_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UCharacterCustomizationDataAsset* AFirstPersonCharacter_C::GetCustomizationDataAsset(const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut, int32 CallFunc_Conv_ByteToInt_ReturnValue, class UCharacterCustomizationDataAsset* CallFunc_GetCustomizationDataAssetByIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "GetCustomizationDataAsset");

	Params::AFirstPersonCharacter_C_GetCustomizationDataAsset_Params Parms{};

	Parms.CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut = CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_GetCustomizationDataAssetByIndex_ReturnValue = CallFunc_GetCustomizationDataAssetByIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.GetCustomizationDataAssetByIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterCustomizationDataAsset*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterCustomizationDataAsset*CallFunc_BPI_GetCustomizationAsset_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

class UCharacterCustomizationDataAsset* AFirstPersonCharacter_C::GetCustomizationDataAssetByIndex(int32 Index, class UCharacterCustomizationDataAsset* CallFunc_BPI_GetCustomizationAsset_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "GetCustomizationDataAssetByIndex");

	Params::AFirstPersonCharacter_C_GetCustomizationDataAssetByIndex_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_BPI_GetCustomizationAsset_ReturnValue = CallFunc_BPI_GetCustomizationAsset_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.GetBodyMaterials
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMaterialInstance*           Gloves                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           HeadPiece                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           Clothes                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           FaceMat                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           FaceMat2                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           FaceMat3                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           FaceMat4                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           Body                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           BodyMat2                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           BodyMat3                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           BodyMat4                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_GetCostumeMatAndTex_ClothesMat                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetCostumeMatAndTex_ClothesTex                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_GetCostumeMatAndTex_HeadPieceMat                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetCostumeMatAndTex_HeadPieceTex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_GetCostumeMatAndTex_GlovesMat                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetCostumeMatAndTex_GlovesTex                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetCostumeMatAndTex_BodyMask                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetCostumeMatAndTex_GlovesMask                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetCostumeMatAndTex_HeadPieceMask                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomizationData          CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut     (NoDestructor)
// struct FCustomizationData          CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_1   (NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterCustomizationDataAsset*CallFunc_GetCustomizationDataAsset_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USkeletalMesh*>       CallFunc_GetBodyInfo_Skeletal_Meshes                             (ReferenceParm)
// TArray<class UMaterialInstance*>   CallFunc_GetBodyInfo_Body_Materials                              (ReferenceParm)
// struct FLinearColor                CallFunc_GetBodyInfo_Color                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetBodyInfo_Icon                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetBodyInfo_Skin_Sheen                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetBodyInfo_Skin_Emissive                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetBodyInfo_Skin_Edge_Effect                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetBodyInfo_Skin_Wetness                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetBodyInfo_Lip_Color_Amount                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetBodyInfo_Blush_Amount                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetBodyInfo_Face_Tattoo                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetBodyInfo_Body_Tattoo                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_UpdateSkinMat_OutputPin                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class USkeletalMesh*>       CallFunc_GetBodyInfo_Skeletal_Meshes_1                           (ReferenceParm)
// TArray<class UMaterialInstance*>   CallFunc_GetBodyInfo_Body_Materials_1                            (ReferenceParm)
// struct FLinearColor                CallFunc_GetBodyInfo_Color_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetBodyInfo_Icon_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetBodyInfo_Skin_Sheen_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetBodyInfo_Skin_Emissive_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetBodyInfo_Skin_Edge_Effect_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetBodyInfo_Skin_Wetness_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetBodyInfo_Lip_Color_Amount_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetBodyInfo_Blush_Amount_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetBodyInfo_Face_Tattoo_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetBodyInfo_Body_Tattoo_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_UpdateSkinMat_OutputPin_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterCustomizationDataAsset*CallFunc_GetCustomizationDataAsset_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_GetCostumeMatAndTex_ClothesMat_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetCostumeMatAndTex_ClothesTex_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_GetCostumeMatAndTex_HeadPieceMat_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetCostumeMatAndTex_HeadPieceTex_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_GetCostumeMatAndTex_GlovesMat_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetCostumeMatAndTex_GlovesTex_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetCostumeMatAndTex_BodyMask_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetCostumeMatAndTex_GlovesMask_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetCostumeMatAndTex_HeadPieceMask_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_3             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_HandleEyeMat_EyeOut                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_HandleEyeMat_EyebrowOut                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::GetBodyMaterials(class UMaterialInstance** Gloves, class UMaterialInstance** HeadPiece, class UMaterialInstance** Clothes, class UMaterialInstance** FaceMat, class UMaterialInstance** FaceMat2, class UMaterialInstance** FaceMat3, class UMaterialInstance** FaceMat4, class UMaterialInstance** Body, class UMaterialInstance** BodyMat2, class UMaterialInstance** BodyMat3, class UMaterialInstance** BodyMat4, class UMaterialInstance* CallFunc_GetCostumeMatAndTex_ClothesMat, class UTexture2D* CallFunc_GetCostumeMatAndTex_ClothesTex, class UMaterialInstance* CallFunc_GetCostumeMatAndTex_HeadPieceMat, class UTexture2D* CallFunc_GetCostumeMatAndTex_HeadPieceTex, class UMaterialInstance* CallFunc_GetCostumeMatAndTex_GlovesMat, class UTexture2D* CallFunc_GetCostumeMatAndTex_GlovesTex, class UTexture2D* CallFunc_GetCostumeMatAndTex_BodyMask, class UTexture2D* CallFunc_GetCostumeMatAndTex_GlovesMask, class UTexture2D* CallFunc_GetCostumeMatAndTex_HeadPieceMask, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_1, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, class UCharacterCustomizationDataAsset* CallFunc_GetCustomizationDataAsset_ReturnValue, TArray<class USkeletalMesh*>& CallFunc_GetBodyInfo_Skeletal_Meshes, TArray<class UMaterialInstance*>& CallFunc_GetBodyInfo_Body_Materials, const struct FLinearColor& CallFunc_GetBodyInfo_Color, class UTexture2D* CallFunc_GetBodyInfo_Icon, uint8 CallFunc_GetBodyInfo_Skin_Sheen, uint8 CallFunc_GetBodyInfo_Skin_Emissive, uint8 CallFunc_GetBodyInfo_Skin_Edge_Effect, uint8 CallFunc_GetBodyInfo_Skin_Wetness, uint8 CallFunc_GetBodyInfo_Lip_Color_Amount, uint8 CallFunc_GetBodyInfo_Blush_Amount, uint8 CallFunc_GetBodyInfo_Face_Tattoo, uint8 CallFunc_GetBodyInfo_Body_Tattoo, class UMaterialInstance* CallFunc_Array_Get_Item, int32 CallFunc_Array_LastIndex_ReturnValue, class UMaterialInstanceDynamic* CallFunc_UpdateSkinMat_OutputPin, int32 CallFunc_Min_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, TArray<class USkeletalMesh*>& CallFunc_GetBodyInfo_Skeletal_Meshes_1, TArray<class UMaterialInstance*>& CallFunc_GetBodyInfo_Body_Materials_1, const struct FLinearColor& CallFunc_GetBodyInfo_Color_1, class UTexture2D* CallFunc_GetBodyInfo_Icon_1, uint8 CallFunc_GetBodyInfo_Skin_Sheen_1, uint8 CallFunc_GetBodyInfo_Skin_Emissive_1, uint8 CallFunc_GetBodyInfo_Skin_Edge_Effect_1, uint8 CallFunc_GetBodyInfo_Skin_Wetness_1, uint8 CallFunc_GetBodyInfo_Lip_Color_Amount_1, uint8 CallFunc_GetBodyInfo_Blush_Amount_1, uint8 CallFunc_GetBodyInfo_Face_Tattoo_1, uint8 CallFunc_GetBodyInfo_Body_Tattoo_1, class UMaterialInstance* CallFunc_Array_Get_Item_1, class UMaterialInstance* CallFunc_Array_Get_Item_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_UpdateSkinMat_OutputPin_1, class UMaterialInstance* CallFunc_Array_Get_Item_3, class UMaterialInstance* CallFunc_Array_Get_Item_4, class UCharacterCustomizationDataAsset* CallFunc_GetCustomizationDataAsset_ReturnValue_1, class UMaterialInstance* CallFunc_GetCostumeMatAndTex_ClothesMat_1, class UTexture2D* CallFunc_GetCostumeMatAndTex_ClothesTex_1, class UMaterialInstance* CallFunc_GetCostumeMatAndTex_HeadPieceMat_1, class UTexture2D* CallFunc_GetCostumeMatAndTex_HeadPieceTex_1, class UMaterialInstance* CallFunc_GetCostumeMatAndTex_GlovesMat_1, class UTexture2D* CallFunc_GetCostumeMatAndTex_GlovesTex_1, class UTexture2D* CallFunc_GetCostumeMatAndTex_BodyMask_1, class UTexture2D* CallFunc_GetCostumeMatAndTex_GlovesMask_1, class UTexture2D* CallFunc_GetCostumeMatAndTex_HeadPieceMask_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_3, class UMaterialInstance* CallFunc_Array_Get_Item_5, class UMaterialInstance* CallFunc_Array_Get_Item_6, class UMaterialInstance* CallFunc_Array_Get_Item_7, class UMaterialInstanceDynamic* CallFunc_HandleEyeMat_EyeOut, class UMaterialInstanceDynamic* CallFunc_HandleEyeMat_EyebrowOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "GetBodyMaterials");

	Params::AFirstPersonCharacter_C_GetBodyMaterials_Params Parms{};

	Parms.CallFunc_GetCostumeMatAndTex_ClothesMat = CallFunc_GetCostumeMatAndTex_ClothesMat;
	Parms.CallFunc_GetCostumeMatAndTex_ClothesTex = CallFunc_GetCostumeMatAndTex_ClothesTex;
	Parms.CallFunc_GetCostumeMatAndTex_HeadPieceMat = CallFunc_GetCostumeMatAndTex_HeadPieceMat;
	Parms.CallFunc_GetCostumeMatAndTex_HeadPieceTex = CallFunc_GetCostumeMatAndTex_HeadPieceTex;
	Parms.CallFunc_GetCostumeMatAndTex_GlovesMat = CallFunc_GetCostumeMatAndTex_GlovesMat;
	Parms.CallFunc_GetCostumeMatAndTex_GlovesTex = CallFunc_GetCostumeMatAndTex_GlovesTex;
	Parms.CallFunc_GetCostumeMatAndTex_BodyMask = CallFunc_GetCostumeMatAndTex_BodyMask;
	Parms.CallFunc_GetCostumeMatAndTex_GlovesMask = CallFunc_GetCostumeMatAndTex_GlovesMask;
	Parms.CallFunc_GetCostumeMatAndTex_HeadPieceMask = CallFunc_GetCostumeMatAndTex_HeadPieceMask;
	Parms.CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut = CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut;
	Parms.CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_1 = CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_GetCustomizationDataAsset_ReturnValue = CallFunc_GetCustomizationDataAsset_ReturnValue;
	Parms.CallFunc_GetBodyInfo_Skeletal_Meshes = CallFunc_GetBodyInfo_Skeletal_Meshes;
	Parms.CallFunc_GetBodyInfo_Body_Materials = CallFunc_GetBodyInfo_Body_Materials;
	Parms.CallFunc_GetBodyInfo_Color = CallFunc_GetBodyInfo_Color;
	Parms.CallFunc_GetBodyInfo_Icon = CallFunc_GetBodyInfo_Icon;
	Parms.CallFunc_GetBodyInfo_Skin_Sheen = CallFunc_GetBodyInfo_Skin_Sheen;
	Parms.CallFunc_GetBodyInfo_Skin_Emissive = CallFunc_GetBodyInfo_Skin_Emissive;
	Parms.CallFunc_GetBodyInfo_Skin_Edge_Effect = CallFunc_GetBodyInfo_Skin_Edge_Effect;
	Parms.CallFunc_GetBodyInfo_Skin_Wetness = CallFunc_GetBodyInfo_Skin_Wetness;
	Parms.CallFunc_GetBodyInfo_Lip_Color_Amount = CallFunc_GetBodyInfo_Lip_Color_Amount;
	Parms.CallFunc_GetBodyInfo_Blush_Amount = CallFunc_GetBodyInfo_Blush_Amount;
	Parms.CallFunc_GetBodyInfo_Face_Tattoo = CallFunc_GetBodyInfo_Face_Tattoo;
	Parms.CallFunc_GetBodyInfo_Body_Tattoo = CallFunc_GetBodyInfo_Body_Tattoo;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_UpdateSkinMat_OutputPin = CallFunc_UpdateSkinMat_OutputPin;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetBodyInfo_Skeletal_Meshes_1 = CallFunc_GetBodyInfo_Skeletal_Meshes_1;
	Parms.CallFunc_GetBodyInfo_Body_Materials_1 = CallFunc_GetBodyInfo_Body_Materials_1;
	Parms.CallFunc_GetBodyInfo_Color_1 = CallFunc_GetBodyInfo_Color_1;
	Parms.CallFunc_GetBodyInfo_Icon_1 = CallFunc_GetBodyInfo_Icon_1;
	Parms.CallFunc_GetBodyInfo_Skin_Sheen_1 = CallFunc_GetBodyInfo_Skin_Sheen_1;
	Parms.CallFunc_GetBodyInfo_Skin_Emissive_1 = CallFunc_GetBodyInfo_Skin_Emissive_1;
	Parms.CallFunc_GetBodyInfo_Skin_Edge_Effect_1 = CallFunc_GetBodyInfo_Skin_Edge_Effect_1;
	Parms.CallFunc_GetBodyInfo_Skin_Wetness_1 = CallFunc_GetBodyInfo_Skin_Wetness_1;
	Parms.CallFunc_GetBodyInfo_Lip_Color_Amount_1 = CallFunc_GetBodyInfo_Lip_Color_Amount_1;
	Parms.CallFunc_GetBodyInfo_Blush_Amount_1 = CallFunc_GetBodyInfo_Blush_Amount_1;
	Parms.CallFunc_GetBodyInfo_Face_Tattoo_1 = CallFunc_GetBodyInfo_Face_Tattoo_1;
	Parms.CallFunc_GetBodyInfo_Body_Tattoo_1 = CallFunc_GetBodyInfo_Body_Tattoo_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_UpdateSkinMat_OutputPin_1 = CallFunc_UpdateSkinMat_OutputPin_1;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_GetCustomizationDataAsset_ReturnValue_1 = CallFunc_GetCustomizationDataAsset_ReturnValue_1;
	Parms.CallFunc_GetCostumeMatAndTex_ClothesMat_1 = CallFunc_GetCostumeMatAndTex_ClothesMat_1;
	Parms.CallFunc_GetCostumeMatAndTex_ClothesTex_1 = CallFunc_GetCostumeMatAndTex_ClothesTex_1;
	Parms.CallFunc_GetCostumeMatAndTex_HeadPieceMat_1 = CallFunc_GetCostumeMatAndTex_HeadPieceMat_1;
	Parms.CallFunc_GetCostumeMatAndTex_HeadPieceTex_1 = CallFunc_GetCostumeMatAndTex_HeadPieceTex_1;
	Parms.CallFunc_GetCostumeMatAndTex_GlovesMat_1 = CallFunc_GetCostumeMatAndTex_GlovesMat_1;
	Parms.CallFunc_GetCostumeMatAndTex_GlovesTex_1 = CallFunc_GetCostumeMatAndTex_GlovesTex_1;
	Parms.CallFunc_GetCostumeMatAndTex_BodyMask_1 = CallFunc_GetCostumeMatAndTex_BodyMask_1;
	Parms.CallFunc_GetCostumeMatAndTex_GlovesMask_1 = CallFunc_GetCostumeMatAndTex_GlovesMask_1;
	Parms.CallFunc_GetCostumeMatAndTex_HeadPieceMask_1 = CallFunc_GetCostumeMatAndTex_HeadPieceMask_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_3 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_HandleEyeMat_EyeOut = CallFunc_HandleEyeMat_EyeOut;
	Parms.CallFunc_HandleEyeMat_EyebrowOut = CallFunc_HandleEyeMat_EyebrowOut;

	UObject::ProcessEvent(Func, &Parms);

	if (Gloves != nullptr)
		*Gloves = Parms.Gloves;

	if (HeadPiece != nullptr)
		*HeadPiece = Parms.HeadPiece;

	if (Clothes != nullptr)
		*Clothes = Parms.Clothes;

	if (FaceMat != nullptr)
		*FaceMat = Parms.FaceMat;

	if (FaceMat2 != nullptr)
		*FaceMat2 = Parms.FaceMat2;

	if (FaceMat3 != nullptr)
		*FaceMat3 = Parms.FaceMat3;

	if (FaceMat4 != nullptr)
		*FaceMat4 = Parms.FaceMat4;

	if (Body != nullptr)
		*Body = Parms.Body;

	if (BodyMat2 != nullptr)
		*BodyMat2 = Parms.BodyMat2;

	if (BodyMat3 != nullptr)
		*BodyMat3 = Parms.BodyMat3;

	if (BodyMat4 != nullptr)
		*BodyMat4 = Parms.BodyMat4;

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.Init Meshes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomizationData          CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut     (NoDestructor)
// struct FCustomizationData          CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_1   (NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomizationSingle        CallFunc_GetCostumeInfo_Clothes                                  (None)
// struct FCustomizationSingle        CallFunc_GetCostumeInfo_HeadPieces                               (None)
// struct FCustomizationSingle        CallFunc_GetCostumeInfo_Gloves                                   (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetHairInfo_Kraken_Id                                   (ZeroConstructor, HasGetValueTypeHash)
// class UStaticMesh*                 CallFunc_GetHairInfo_Mesh                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 CallFunc_GetHairInfo_Scalp                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_GetHairInfo_ScalpMat                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_GetHairInfo_Material                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetHairInfo_HairColor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetHairInfo_HairSecondColor                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UTexture2D*>          CallFunc_GetHairInfo_Icon                                        (ReferenceParm)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCustomizationSingle        CallFunc_GetCostumeInfo_Clothes_1                                (None)
// struct FCustomizationSingle        CallFunc_GetCostumeInfo_HeadPieces_1                             (None)
// struct FCustomizationSingle        CallFunc_GetCostumeInfo_Gloves_1                                 (None)
// struct FCustomizationSingle        CallFunc_GetCostumeInfo_Clothes_2                                (None)
// struct FCustomizationSingle        CallFunc_GetCostumeInfo_HeadPieces_2                             (None)
// struct FCustomizationSingle        CallFunc_GetCostumeInfo_Gloves_2                                 (None)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_GetBodyMaterials_Gloves                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_GetBodyMaterials_HeadPiece                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_GetBodyMaterials_Clothes                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_GetBodyMaterials_FaceMat                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_GetBodyMaterials_FaceMat2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_GetBodyMaterials_FaceMat3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_GetBodyMaterials_FaceMat4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_GetBodyMaterials_Body                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_GetBodyMaterials_BodyMat2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_GetBodyMaterials_BodyMat3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_GetBodyMaterials_BodyMat4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_GetBodyMaterials_Gloves_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_GetBodyMaterials_HeadPiece_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_GetBodyMaterials_Clothes_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_GetBodyMaterials_FaceMat_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_GetBodyMaterials_FaceMat2_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_GetBodyMaterials_FaceMat3_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_GetBodyMaterials_FaceMat4_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_GetBodyMaterials_Body_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_GetBodyMaterials_BodyMat2_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_GetBodyMaterials_BodyMat3_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_GetBodyMaterials_BodyMat4_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue                                (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class USkeletalMesh*>       CallFunc_GetMergedBodyMesh_Array                                 (ReferenceParm)
// class USkeletalMesh*               Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_MergeMeshes_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USkeletalMesh*>       K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMesh*               CallFunc_MergeMeshes_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFirstPersonCharacter_C::Init_Meshes(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class USkeletalMesh* Temp_object_Variable, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_1, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_SelectFloat_ReturnValue, uint8 Temp_byte_Variable, const struct FCustomizationSingle& CallFunc_GetCostumeInfo_Clothes, const struct FCustomizationSingle& CallFunc_GetCostumeInfo_HeadPieces, const struct FCustomizationSingle& CallFunc_GetCostumeInfo_Gloves, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetHairInfo_Kraken_Id, class UStaticMesh* CallFunc_GetHairInfo_Mesh, class UStaticMesh* CallFunc_GetHairInfo_Scalp, class UMaterialInstance* CallFunc_GetHairInfo_ScalpMat, class UMaterialInstance* CallFunc_GetHairInfo_Material, const struct FLinearColor& CallFunc_GetHairInfo_HairColor, const struct FLinearColor& CallFunc_GetHairInfo_HairSecondColor, TArray<class UTexture2D*>& CallFunc_GetHairInfo_Icon, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, const struct FCustomizationSingle& CallFunc_GetCostumeInfo_Clothes_1, const struct FCustomizationSingle& CallFunc_GetCostumeInfo_HeadPieces_1, const struct FCustomizationSingle& CallFunc_GetCostumeInfo_Gloves_1, const struct FCustomizationSingle& CallFunc_GetCostumeInfo_Clothes_2, const struct FCustomizationSingle& CallFunc_GetCostumeInfo_HeadPieces_2, const struct FCustomizationSingle& CallFunc_GetCostumeInfo_Gloves_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class UMaterialInstance* CallFunc_GetBodyMaterials_Gloves, class UMaterialInstance* CallFunc_GetBodyMaterials_HeadPiece, class UMaterialInstance* CallFunc_GetBodyMaterials_Clothes, class UMaterialInstance* CallFunc_GetBodyMaterials_FaceMat, class UMaterialInstance* CallFunc_GetBodyMaterials_FaceMat2, class UMaterialInstance* CallFunc_GetBodyMaterials_FaceMat3, class UMaterialInstance* CallFunc_GetBodyMaterials_FaceMat4, class UMaterialInstance* CallFunc_GetBodyMaterials_Body, class UMaterialInstance* CallFunc_GetBodyMaterials_BodyMat2, class UMaterialInstance* CallFunc_GetBodyMaterials_BodyMat3, class UMaterialInstance* CallFunc_GetBodyMaterials_BodyMat4, class UMaterialInstance* CallFunc_GetBodyMaterials_Gloves_1, class UMaterialInstance* CallFunc_GetBodyMaterials_HeadPiece_1, class UMaterialInstance* CallFunc_GetBodyMaterials_Clothes_1, class UMaterialInstance* CallFunc_GetBodyMaterials_FaceMat_1, class UMaterialInstance* CallFunc_GetBodyMaterials_FaceMat2_1, class UMaterialInstance* CallFunc_GetBodyMaterials_FaceMat3_1, class UMaterialInstance* CallFunc_GetBodyMaterials_FaceMat4_1, class UMaterialInstance* CallFunc_GetBodyMaterials_Body_1, class UMaterialInstance* CallFunc_GetBodyMaterials_BodyMat2_1, class UMaterialInstance* CallFunc_GetBodyMaterials_BodyMat3_1, class UMaterialInstance* CallFunc_GetBodyMaterials_BodyMat4_1, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class USkeletalMesh*>& CallFunc_GetMergedBodyMesh_Array, class USkeletalMesh* Temp_object_Variable_1, class USkeletalMesh* K2Node_Select_Default, class USkeletalMesh* CallFunc_MergeMeshes_ReturnValue, TArray<class USkeletalMesh*>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue_1, class USkeletalMesh* CallFunc_MergeMeshes_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "Init Meshes");

	Params::AFirstPersonCharacter_C_Init_Meshes_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut = CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut;
	Parms.CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_1 = CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetCostumeInfo_Clothes = CallFunc_GetCostumeInfo_Clothes;
	Parms.CallFunc_GetCostumeInfo_HeadPieces = CallFunc_GetCostumeInfo_HeadPieces;
	Parms.CallFunc_GetCostumeInfo_Gloves = CallFunc_GetCostumeInfo_Gloves;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetHairInfo_Kraken_Id = CallFunc_GetHairInfo_Kraken_Id;
	Parms.CallFunc_GetHairInfo_Mesh = CallFunc_GetHairInfo_Mesh;
	Parms.CallFunc_GetHairInfo_Scalp = CallFunc_GetHairInfo_Scalp;
	Parms.CallFunc_GetHairInfo_ScalpMat = CallFunc_GetHairInfo_ScalpMat;
	Parms.CallFunc_GetHairInfo_Material = CallFunc_GetHairInfo_Material;
	Parms.CallFunc_GetHairInfo_HairColor = CallFunc_GetHairInfo_HairColor;
	Parms.CallFunc_GetHairInfo_HairSecondColor = CallFunc_GetHairInfo_HairSecondColor;
	Parms.CallFunc_GetHairInfo_Icon = CallFunc_GetHairInfo_Icon;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue_1 = CallFunc_SetStaticMesh_ReturnValue_1;
	Parms.CallFunc_GetCostumeInfo_Clothes_1 = CallFunc_GetCostumeInfo_Clothes_1;
	Parms.CallFunc_GetCostumeInfo_HeadPieces_1 = CallFunc_GetCostumeInfo_HeadPieces_1;
	Parms.CallFunc_GetCostumeInfo_Gloves_1 = CallFunc_GetCostumeInfo_Gloves_1;
	Parms.CallFunc_GetCostumeInfo_Clothes_2 = CallFunc_GetCostumeInfo_Clothes_2;
	Parms.CallFunc_GetCostumeInfo_HeadPieces_2 = CallFunc_GetCostumeInfo_HeadPieces_2;
	Parms.CallFunc_GetCostumeInfo_Gloves_2 = CallFunc_GetCostumeInfo_Gloves_2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_GetBodyMaterials_Gloves = CallFunc_GetBodyMaterials_Gloves;
	Parms.CallFunc_GetBodyMaterials_HeadPiece = CallFunc_GetBodyMaterials_HeadPiece;
	Parms.CallFunc_GetBodyMaterials_Clothes = CallFunc_GetBodyMaterials_Clothes;
	Parms.CallFunc_GetBodyMaterials_FaceMat = CallFunc_GetBodyMaterials_FaceMat;
	Parms.CallFunc_GetBodyMaterials_FaceMat2 = CallFunc_GetBodyMaterials_FaceMat2;
	Parms.CallFunc_GetBodyMaterials_FaceMat3 = CallFunc_GetBodyMaterials_FaceMat3;
	Parms.CallFunc_GetBodyMaterials_FaceMat4 = CallFunc_GetBodyMaterials_FaceMat4;
	Parms.CallFunc_GetBodyMaterials_Body = CallFunc_GetBodyMaterials_Body;
	Parms.CallFunc_GetBodyMaterials_BodyMat2 = CallFunc_GetBodyMaterials_BodyMat2;
	Parms.CallFunc_GetBodyMaterials_BodyMat3 = CallFunc_GetBodyMaterials_BodyMat3;
	Parms.CallFunc_GetBodyMaterials_BodyMat4 = CallFunc_GetBodyMaterials_BodyMat4;
	Parms.CallFunc_GetBodyMaterials_Gloves_1 = CallFunc_GetBodyMaterials_Gloves_1;
	Parms.CallFunc_GetBodyMaterials_HeadPiece_1 = CallFunc_GetBodyMaterials_HeadPiece_1;
	Parms.CallFunc_GetBodyMaterials_Clothes_1 = CallFunc_GetBodyMaterials_Clothes_1;
	Parms.CallFunc_GetBodyMaterials_FaceMat_1 = CallFunc_GetBodyMaterials_FaceMat_1;
	Parms.CallFunc_GetBodyMaterials_FaceMat2_1 = CallFunc_GetBodyMaterials_FaceMat2_1;
	Parms.CallFunc_GetBodyMaterials_FaceMat3_1 = CallFunc_GetBodyMaterials_FaceMat3_1;
	Parms.CallFunc_GetBodyMaterials_FaceMat4_1 = CallFunc_GetBodyMaterials_FaceMat4_1;
	Parms.CallFunc_GetBodyMaterials_Body_1 = CallFunc_GetBodyMaterials_Body_1;
	Parms.CallFunc_GetBodyMaterials_BodyMat2_1 = CallFunc_GetBodyMaterials_BodyMat2_1;
	Parms.CallFunc_GetBodyMaterials_BodyMat3_1 = CallFunc_GetBodyMaterials_BodyMat3_1;
	Parms.CallFunc_GetBodyMaterials_BodyMat4_1 = CallFunc_GetBodyMaterials_BodyMat4_1;
	Parms.CallFunc_GetMaterials_ReturnValue = CallFunc_GetMaterials_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetMergedBodyMesh_Array = CallFunc_GetMergedBodyMesh_Array;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MergeMeshes_ReturnValue = CallFunc_MergeMeshes_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_MergeMeshes_ReturnValue_1 = CallFunc_MergeMeshes_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.SetWingMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MeshIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterCustomizationDataAsset*CallFunc_GetCustomizationDataAssetByIndex_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFirstPersonCharacter_C::SetWingMaterial(int32 Selection, int32 MeshIndex, class UCharacterCustomizationDataAsset* CallFunc_GetCustomizationDataAssetByIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "SetWingMaterial");

	Params::AFirstPersonCharacter_C_SetWingMaterial_Params Parms{};

	Parms.Selection = Selection;
	Parms.MeshIndex = MeshIndex;
	Parms.CallFunc_GetCustomizationDataAssetByIndex_ReturnValue = CallFunc_GetCustomizationDataAssetByIndex_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.SetWingMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterCustomizationDataAsset*CallFunc_GetCustomizationDataAssetByIndex_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCustomizationSingle        CallFunc_GetCustomizationDataByIndex_ReturnValue                 (None)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstance*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::SetWingMesh(int32 Selection, class UCharacterCustomizationDataAsset* CallFunc_GetCustomizationDataAssetByIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FCustomizationSingle& CallFunc_GetCustomizationDataByIndex_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, class UMaterialInstance* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "SetWingMesh");

	Params::AFirstPersonCharacter_C_SetWingMesh_Params Parms{};

	Parms.Selection = Selection;
	Parms.CallFunc_GetCustomizationDataAssetByIndex_ReturnValue = CallFunc_GetCustomizationDataAssetByIndex_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCustomizationDataByIndex_ReturnValue = CallFunc_GetCustomizationDataByIndex_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.SpawnMatchboxTrail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     BoxLoc1                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     BoxLoc2                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Symbol                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetUpVector_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromZ_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue_2                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Vector_Distance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Vector_Distance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetThirdPerson_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFirstPersonCharacter_C::SpawnMatchboxTrail(const struct FVector& BoxLoc1, const struct FVector& BoxLoc2, class UTexture* Symbol, const struct FVector& CallFunc_GetUpVector_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_2, float CallFunc_Vector_Distance_ReturnValue, float CallFunc_Vector_Distance_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, int32 CallFunc_Max_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, int32 CallFunc_Max_ReturnValue_1, bool CallFunc_GetThirdPerson_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "SpawnMatchboxTrail");

	Params::AFirstPersonCharacter_C_SpawnMatchboxTrail_Params Parms{};

	Parms.BoxLoc1 = BoxLoc1;
	Parms.BoxLoc2 = BoxLoc2;
	Parms.Symbol = Symbol;
	Parms.CallFunc_GetUpVector_ReturnValue = CallFunc_GetUpVector_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_MakeRotFromZ_ReturnValue = CallFunc_MakeRotFromZ_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = CallFunc_SpawnSystemAtLocation_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_2 = CallFunc_Multiply_VectorFloat_ReturnValue_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue_1 = CallFunc_SpawnSystemAtLocation_ReturnValue_1;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue_2 = CallFunc_SpawnSystemAtLocation_ReturnValue_2;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;
	Parms.CallFunc_Vector_Distance_ReturnValue_1 = CallFunc_Vector_Distance_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_Max_ReturnValue_1 = CallFunc_Max_ReturnValue_1;
	Parms.CallFunc_GetThirdPerson_ReturnValue = CallFunc_GetThirdPerson_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.ToggleStreamer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ToggleStreamer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFirstPersonCharacter_C::ToggleStreamer(bool ToggleStreamer, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, class UNiagaraComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, class UNiagaraComponent* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "ToggleStreamer");

	Params::AFirstPersonCharacter_C_ToggleStreamer_Params Parms{};

	Parms.ToggleStreamer = ToggleStreamer;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.AddFeetToArray
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CallFunc_GetSocketBoneName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetSocketBoneName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::AddFeetToArray(class FName CallFunc_GetSocketBoneName_ReturnValue, class FName CallFunc_GetSocketBoneName_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "AddFeetToArray");

	Params::AFirstPersonCharacter_C_AddFeetToArray_Params Parms{};

	Parms.CallFunc_GetSocketBoneName_ReturnValue = CallFunc_GetSocketBoneName_ReturnValue;
	Parms.CallFunc_GetSocketBoneName_ReturnValue_1 = CallFunc_GetSocketBoneName_ReturnValue_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.BP_IsWaterActor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      InActor                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AWaterBody*                  K2Node_DynamicCast_AsWater_Body                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AFirstPersonCharacter_C::BP_IsWaterActor(class AActor* InActor, class AWaterBody* K2Node_DynamicCast_AsWater_Body, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "BP_IsWaterActor");

	Params::AFirstPersonCharacter_C_BP_IsWaterActor_Params Parms{};

	Parms.InActor = InActor;
	Parms.K2Node_DynamicCast_AsWater_Body = K2Node_DynamicCast_AsWater_Body;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnRep_EventValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_EventPrompt_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFirstPersonCharacter_C::OnRep_EventValue(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWBP_EventPrompt_C* CallFunc_Create_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnRep_EventValue");

	Params::AFirstPersonCharacter_C_OnRep_EventValue_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.ShouldStartWithWings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGameStartType          CallFunc_GetGameStartType_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFirstPersonCharacter_C::ShouldStartWithWings(bool CallFunc_IsLocallyControlled_ReturnValue, enum class EGameStartType CallFunc_GetGameStartType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "ShouldStartWithWings");

	Params::AFirstPersonCharacter_C_ShouldStartWithWings_Params Parms{};

	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_GetGameStartType_ReturnValue = CallFunc_GetGameStartType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.InitAbilities
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::InitAbilities()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "InitAbilities");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USophiaGameInstance*         K2Node_DynamicCast_AsSophia_Game_Instance                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFirstPersonCharacter_C::UserConstructionScript(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue_2, bool CallFunc_K2_AttachToComponent_ReturnValue_3, bool CallFunc_K2_AttachToComponent_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "UserConstructionScript");

	Params::AFirstPersonCharacter_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsSophia_Game_Instance = K2Node_DynamicCast_AsSophia_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_1 = CallFunc_K2_AttachToComponent_ReturnValue_1;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_2 = CallFunc_K2_AttachToComponent_ReturnValue_2;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_3 = CallFunc_K2_AttachToComponent_ReturnValue_3;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_4 = CallFunc_K2_AttachToComponent_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.EnableRespawnPostProcessTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::EnableRespawnPostProcessTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "EnableRespawnPostProcessTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.EnableRespawnPostProcessTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::EnableRespawnPostProcessTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "EnableRespawnPostProcessTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.FadeFeetStreamersBackInAfterTeleportTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::FadeFeetStreamersBackInAfterTeleportTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "FadeFeetStreamersBackInAfterTeleportTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.FadeFeetStreamersBackInAfterTeleportTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::FadeFeetStreamersBackInAfterTeleportTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "FadeFeetStreamersBackInAfterTeleportTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.WingFadeTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::WingFadeTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "WingFadeTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.WingFadeTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::WingFadeTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "WingFadeTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.FadeEthericHairTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::FadeEthericHairTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "FadeEthericHairTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.FadeEthericHairTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::FadeEthericHairTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "FadeEthericHairTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnNotifyEnd_0DD1342644EFD393D956B282556FD0C4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnNotifyEnd_0DD1342644EFD393D956B282556FD0C4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnNotifyEnd_0DD1342644EFD393D956B282556FD0C4");

	Params::AFirstPersonCharacter_C_OnNotifyEnd_0DD1342644EFD393D956B282556FD0C4_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnNotifyBegin_0DD1342644EFD393D956B282556FD0C4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnNotifyBegin_0DD1342644EFD393D956B282556FD0C4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnNotifyBegin_0DD1342644EFD393D956B282556FD0C4");

	Params::AFirstPersonCharacter_C_OnNotifyBegin_0DD1342644EFD393D956B282556FD0C4_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnInterrupted_0DD1342644EFD393D956B282556FD0C4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnInterrupted_0DD1342644EFD393D956B282556FD0C4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnInterrupted_0DD1342644EFD393D956B282556FD0C4");

	Params::AFirstPersonCharacter_C_OnInterrupted_0DD1342644EFD393D956B282556FD0C4_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnBlendOut_0DD1342644EFD393D956B282556FD0C4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnBlendOut_0DD1342644EFD393D956B282556FD0C4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnBlendOut_0DD1342644EFD393D956B282556FD0C4");

	Params::AFirstPersonCharacter_C_OnBlendOut_0DD1342644EFD393D956B282556FD0C4_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnCompleted_0DD1342644EFD393D956B282556FD0C4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnCompleted_0DD1342644EFD393D956B282556FD0C4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnCompleted_0DD1342644EFD393D956B282556FD0C4");

	Params::AFirstPersonCharacter_C_OnCompleted_0DD1342644EFD393D956B282556FD0C4_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnNotifyEnd_5425DE1C45F2E35C49A887B42E8D5F32
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnNotifyEnd_5425DE1C45F2E35C49A887B42E8D5F32(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnNotifyEnd_5425DE1C45F2E35C49A887B42E8D5F32");

	Params::AFirstPersonCharacter_C_OnNotifyEnd_5425DE1C45F2E35C49A887B42E8D5F32_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnNotifyBegin_5425DE1C45F2E35C49A887B42E8D5F32
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnNotifyBegin_5425DE1C45F2E35C49A887B42E8D5F32(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnNotifyBegin_5425DE1C45F2E35C49A887B42E8D5F32");

	Params::AFirstPersonCharacter_C_OnNotifyBegin_5425DE1C45F2E35C49A887B42E8D5F32_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnInterrupted_5425DE1C45F2E35C49A887B42E8D5F32
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnInterrupted_5425DE1C45F2E35C49A887B42E8D5F32(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnInterrupted_5425DE1C45F2E35C49A887B42E8D5F32");

	Params::AFirstPersonCharacter_C_OnInterrupted_5425DE1C45F2E35C49A887B42E8D5F32_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnBlendOut_5425DE1C45F2E35C49A887B42E8D5F32
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnBlendOut_5425DE1C45F2E35C49A887B42E8D5F32(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnBlendOut_5425DE1C45F2E35C49A887B42E8D5F32");

	Params::AFirstPersonCharacter_C_OnBlendOut_5425DE1C45F2E35C49A887B42E8D5F32_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnCompleted_5425DE1C45F2E35C49A887B42E8D5F32
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnCompleted_5425DE1C45F2E35C49A887B42E8D5F32(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnCompleted_5425DE1C45F2E35C49A887B42E8D5F32");

	Params::AFirstPersonCharacter_C_OnCompleted_5425DE1C45F2E35C49A887B42E8D5F32_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnNotifyEnd_D69318ED4DD08CBA0BCB14BD67C8F783
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnNotifyEnd_D69318ED4DD08CBA0BCB14BD67C8F783(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnNotifyEnd_D69318ED4DD08CBA0BCB14BD67C8F783");

	Params::AFirstPersonCharacter_C_OnNotifyEnd_D69318ED4DD08CBA0BCB14BD67C8F783_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnNotifyBegin_D69318ED4DD08CBA0BCB14BD67C8F783
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnNotifyBegin_D69318ED4DD08CBA0BCB14BD67C8F783(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnNotifyBegin_D69318ED4DD08CBA0BCB14BD67C8F783");

	Params::AFirstPersonCharacter_C_OnNotifyBegin_D69318ED4DD08CBA0BCB14BD67C8F783_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnInterrupted_D69318ED4DD08CBA0BCB14BD67C8F783
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnInterrupted_D69318ED4DD08CBA0BCB14BD67C8F783(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnInterrupted_D69318ED4DD08CBA0BCB14BD67C8F783");

	Params::AFirstPersonCharacter_C_OnInterrupted_D69318ED4DD08CBA0BCB14BD67C8F783_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnBlendOut_D69318ED4DD08CBA0BCB14BD67C8F783
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnBlendOut_D69318ED4DD08CBA0BCB14BD67C8F783(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnBlendOut_D69318ED4DD08CBA0BCB14BD67C8F783");

	Params::AFirstPersonCharacter_C_OnBlendOut_D69318ED4DD08CBA0BCB14BD67C8F783_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnCompleted_D69318ED4DD08CBA0BCB14BD67C8F783
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnCompleted_D69318ED4DD08CBA0BCB14BD67C8F783(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnCompleted_D69318ED4DD08CBA0BCB14BD67C8F783");

	Params::AFirstPersonCharacter_C_OnCompleted_D69318ED4DD08CBA0BCB14BD67C8F783_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnNotifyEnd_2849FCDE406A64A625384ABBD2E2F668
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnNotifyEnd_2849FCDE406A64A625384ABBD2E2F668(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnNotifyEnd_2849FCDE406A64A625384ABBD2E2F668");

	Params::AFirstPersonCharacter_C_OnNotifyEnd_2849FCDE406A64A625384ABBD2E2F668_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnNotifyBegin_2849FCDE406A64A625384ABBD2E2F668
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnNotifyBegin_2849FCDE406A64A625384ABBD2E2F668(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnNotifyBegin_2849FCDE406A64A625384ABBD2E2F668");

	Params::AFirstPersonCharacter_C_OnNotifyBegin_2849FCDE406A64A625384ABBD2E2F668_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnInterrupted_2849FCDE406A64A625384ABBD2E2F668
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnInterrupted_2849FCDE406A64A625384ABBD2E2F668(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnInterrupted_2849FCDE406A64A625384ABBD2E2F668");

	Params::AFirstPersonCharacter_C_OnInterrupted_2849FCDE406A64A625384ABBD2E2F668_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnBlendOut_2849FCDE406A64A625384ABBD2E2F668
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnBlendOut_2849FCDE406A64A625384ABBD2E2F668(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnBlendOut_2849FCDE406A64A625384ABBD2E2F668");

	Params::AFirstPersonCharacter_C_OnBlendOut_2849FCDE406A64A625384ABBD2E2F668_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnCompleted_2849FCDE406A64A625384ABBD2E2F668
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnCompleted_2849FCDE406A64A625384ABBD2E2F668(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnCompleted_2849FCDE406A64A625384ABBD2E2F668");

	Params::AFirstPersonCharacter_C_OnCompleted_2849FCDE406A64A625384ABBD2E2F668_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnNotifyEnd_A28FD2E842E68D380BCEB3B13C1E473D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnNotifyEnd_A28FD2E842E68D380BCEB3B13C1E473D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnNotifyEnd_A28FD2E842E68D380BCEB3B13C1E473D");

	Params::AFirstPersonCharacter_C_OnNotifyEnd_A28FD2E842E68D380BCEB3B13C1E473D_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnNotifyBegin_A28FD2E842E68D380BCEB3B13C1E473D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnNotifyBegin_A28FD2E842E68D380BCEB3B13C1E473D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnNotifyBegin_A28FD2E842E68D380BCEB3B13C1E473D");

	Params::AFirstPersonCharacter_C_OnNotifyBegin_A28FD2E842E68D380BCEB3B13C1E473D_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnInterrupted_A28FD2E842E68D380BCEB3B13C1E473D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnInterrupted_A28FD2E842E68D380BCEB3B13C1E473D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnInterrupted_A28FD2E842E68D380BCEB3B13C1E473D");

	Params::AFirstPersonCharacter_C_OnInterrupted_A28FD2E842E68D380BCEB3B13C1E473D_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnBlendOut_A28FD2E842E68D380BCEB3B13C1E473D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnBlendOut_A28FD2E842E68D380BCEB3B13C1E473D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnBlendOut_A28FD2E842E68D380BCEB3B13C1E473D");

	Params::AFirstPersonCharacter_C_OnBlendOut_A28FD2E842E68D380BCEB3B13C1E473D_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnCompleted_A28FD2E842E68D380BCEB3B13C1E473D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnCompleted_A28FD2E842E68D380BCEB3B13C1E473D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnCompleted_A28FD2E842E68D380BCEB3B13C1E473D");

	Params::AFirstPersonCharacter_C_OnCompleted_A28FD2E842E68D380BCEB3B13C1E473D_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnNotifyEnd_9E65AD5F42578676D395F6996BE129FD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnNotifyEnd_9E65AD5F42578676D395F6996BE129FD(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnNotifyEnd_9E65AD5F42578676D395F6996BE129FD");

	Params::AFirstPersonCharacter_C_OnNotifyEnd_9E65AD5F42578676D395F6996BE129FD_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnNotifyBegin_9E65AD5F42578676D395F6996BE129FD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnNotifyBegin_9E65AD5F42578676D395F6996BE129FD(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnNotifyBegin_9E65AD5F42578676D395F6996BE129FD");

	Params::AFirstPersonCharacter_C_OnNotifyBegin_9E65AD5F42578676D395F6996BE129FD_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnInterrupted_9E65AD5F42578676D395F6996BE129FD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnInterrupted_9E65AD5F42578676D395F6996BE129FD(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnInterrupted_9E65AD5F42578676D395F6996BE129FD");

	Params::AFirstPersonCharacter_C_OnInterrupted_9E65AD5F42578676D395F6996BE129FD_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnBlendOut_9E65AD5F42578676D395F6996BE129FD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnBlendOut_9E65AD5F42578676D395F6996BE129FD(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnBlendOut_9E65AD5F42578676D395F6996BE129FD");

	Params::AFirstPersonCharacter_C_OnBlendOut_9E65AD5F42578676D395F6996BE129FD_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnCompleted_9E65AD5F42578676D395F6996BE129FD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnCompleted_9E65AD5F42578676D395F6996BE129FD(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnCompleted_9E65AD5F42578676D395F6996BE129FD");

	Params::AFirstPersonCharacter_C_OnCompleted_9E65AD5F42578676D395F6996BE129FD_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.InpActEvt_ServerStat_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AFirstPersonCharacter_C::InpActEvt_ServerStat_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "InpActEvt_ServerStat_K2Node_InputActionEvent_7");

	Params::AFirstPersonCharacter_C_InpActEvt_ServerStat_K2Node_InputActionEvent_7_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnNotifyEnd_113EFA754CE8C85F890AE69671E03AA4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnNotifyEnd_113EFA754CE8C85F890AE69671E03AA4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnNotifyEnd_113EFA754CE8C85F890AE69671E03AA4");

	Params::AFirstPersonCharacter_C_OnNotifyEnd_113EFA754CE8C85F890AE69671E03AA4_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnNotifyBegin_113EFA754CE8C85F890AE69671E03AA4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnNotifyBegin_113EFA754CE8C85F890AE69671E03AA4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnNotifyBegin_113EFA754CE8C85F890AE69671E03AA4");

	Params::AFirstPersonCharacter_C_OnNotifyBegin_113EFA754CE8C85F890AE69671E03AA4_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnInterrupted_113EFA754CE8C85F890AE69671E03AA4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnInterrupted_113EFA754CE8C85F890AE69671E03AA4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnInterrupted_113EFA754CE8C85F890AE69671E03AA4");

	Params::AFirstPersonCharacter_C_OnInterrupted_113EFA754CE8C85F890AE69671E03AA4_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnBlendOut_113EFA754CE8C85F890AE69671E03AA4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnBlendOut_113EFA754CE8C85F890AE69671E03AA4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnBlendOut_113EFA754CE8C85F890AE69671E03AA4");

	Params::AFirstPersonCharacter_C_OnBlendOut_113EFA754CE8C85F890AE69671E03AA4_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnCompleted_113EFA754CE8C85F890AE69671E03AA4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnCompleted_113EFA754CE8C85F890AE69671E03AA4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnCompleted_113EFA754CE8C85F890AE69671E03AA4");

	Params::AFirstPersonCharacter_C_OnCompleted_113EFA754CE8C85F890AE69671E03AA4_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.InpActEvt_Emote1_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AFirstPersonCharacter_C::InpActEvt_Emote1_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "InpActEvt_Emote1_K2Node_InputActionEvent_6");

	Params::AFirstPersonCharacter_C_InpActEvt_Emote1_K2Node_InputActionEvent_6_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.InpActEvt_Emote2_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AFirstPersonCharacter_C::InpActEvt_Emote2_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "InpActEvt_Emote2_K2Node_InputActionEvent_5");

	Params::AFirstPersonCharacter_C_InpActEvt_Emote2_K2Node_InputActionEvent_5_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.InpActEvt_Emote3_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AFirstPersonCharacter_C::InpActEvt_Emote3_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "InpActEvt_Emote3_K2Node_InputActionEvent_4");

	Params::AFirstPersonCharacter_C_InpActEvt_Emote3_K2Node_InputActionEvent_4_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.InpActEvt_Emote4_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AFirstPersonCharacter_C::InpActEvt_Emote4_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "InpActEvt_Emote4_K2Node_InputActionEvent_3");

	Params::AFirstPersonCharacter_C_InpActEvt_Emote4_K2Node_InputActionEvent_3_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.InpActEvt_Emote5_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AFirstPersonCharacter_C::InpActEvt_Emote5_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "InpActEvt_Emote5_K2Node_InputActionEvent_2");

	Params::AFirstPersonCharacter_C_InpActEvt_Emote5_K2Node_InputActionEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.InpActEvt_TestKey_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AFirstPersonCharacter_C::InpActEvt_TestKey_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "InpActEvt_TestKey_K2Node_InputActionEvent_1");

	Params::AFirstPersonCharacter_C_InpActEvt_TestKey_K2Node_InputActionEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.InpActEvt_RepGraphServerDebug_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AFirstPersonCharacter_C::InpActEvt_RepGraphServerDebug_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "InpActEvt_RepGraphServerDebug_K2Node_InputActionEvent_0");

	Params::AFirstPersonCharacter_C_InpActEvt_RepGraphServerDebug_K2Node_InputActionEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.InpActEvt_NumPadZero_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AFirstPersonCharacter_C::InpActEvt_NumPadZero_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "InpActEvt_NumPadZero_K2Node_InputKeyEvent_0");

	Params::AFirstPersonCharacter_C_InpActEvt_NumPadZero_K2Node_InputKeyEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnNotifyEnd_657C565F4E6FAA48D869B88B96C9FE65
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnNotifyEnd_657C565F4E6FAA48D869B88B96C9FE65(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnNotifyEnd_657C565F4E6FAA48D869B88B96C9FE65");

	Params::AFirstPersonCharacter_C_OnNotifyEnd_657C565F4E6FAA48D869B88B96C9FE65_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnNotifyBegin_657C565F4E6FAA48D869B88B96C9FE65
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnNotifyBegin_657C565F4E6FAA48D869B88B96C9FE65(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnNotifyBegin_657C565F4E6FAA48D869B88B96C9FE65");

	Params::AFirstPersonCharacter_C_OnNotifyBegin_657C565F4E6FAA48D869B88B96C9FE65_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnInterrupted_657C565F4E6FAA48D869B88B96C9FE65
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnInterrupted_657C565F4E6FAA48D869B88B96C9FE65(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnInterrupted_657C565F4E6FAA48D869B88B96C9FE65");

	Params::AFirstPersonCharacter_C_OnInterrupted_657C565F4E6FAA48D869B88B96C9FE65_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnBlendOut_657C565F4E6FAA48D869B88B96C9FE65
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnBlendOut_657C565F4E6FAA48D869B88B96C9FE65(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnBlendOut_657C565F4E6FAA48D869B88B96C9FE65");

	Params::AFirstPersonCharacter_C_OnBlendOut_657C565F4E6FAA48D869B88B96C9FE65_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnCompleted_657C565F4E6FAA48D869B88B96C9FE65
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnCompleted_657C565F4E6FAA48D869B88B96C9FE65(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnCompleted_657C565F4E6FAA48D869B88B96C9FE65");

	Params::AFirstPersonCharacter_C_OnCompleted_657C565F4E6FAA48D869B88B96C9FE65_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnNotifyEnd_053A67D14ADBC680BC58CDA271A18F02
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnNotifyEnd_053A67D14ADBC680BC58CDA271A18F02(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnNotifyEnd_053A67D14ADBC680BC58CDA271A18F02");

	Params::AFirstPersonCharacter_C_OnNotifyEnd_053A67D14ADBC680BC58CDA271A18F02_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnNotifyBegin_053A67D14ADBC680BC58CDA271A18F02
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnNotifyBegin_053A67D14ADBC680BC58CDA271A18F02(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnNotifyBegin_053A67D14ADBC680BC58CDA271A18F02");

	Params::AFirstPersonCharacter_C_OnNotifyBegin_053A67D14ADBC680BC58CDA271A18F02_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnInterrupted_053A67D14ADBC680BC58CDA271A18F02
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnInterrupted_053A67D14ADBC680BC58CDA271A18F02(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnInterrupted_053A67D14ADBC680BC58CDA271A18F02");

	Params::AFirstPersonCharacter_C_OnInterrupted_053A67D14ADBC680BC58CDA271A18F02_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnBlendOut_053A67D14ADBC680BC58CDA271A18F02
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnBlendOut_053A67D14ADBC680BC58CDA271A18F02(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnBlendOut_053A67D14ADBC680BC58CDA271A18F02");

	Params::AFirstPersonCharacter_C_OnBlendOut_053A67D14ADBC680BC58CDA271A18F02_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnCompleted_053A67D14ADBC680BC58CDA271A18F02
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnCompleted_053A67D14ADBC680BC58CDA271A18F02(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnCompleted_053A67D14ADBC680BC58CDA271A18F02");

	Params::AFirstPersonCharacter_C_OnCompleted_053A67D14ADBC680BC58CDA271A18F02_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnEnterExitWingsMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AFirstPersonCharacter_C::OnEnterExitWingsMenu(bool Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnEnterExitWingsMenu");

	Params::AFirstPersonCharacter_C_OnEnterExitWingsMenu_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnClothesChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnClothesChanged(int32 Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnClothesChanged");

	Params::AFirstPersonCharacter_C_OnClothesChanged_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnHeadPieceChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnHeadPieceChanged(int32 Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnHeadPieceChanged");

	Params::AFirstPersonCharacter_C_OnHeadPieceChanged_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnGlovesChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnGlovesChanged(int32 Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnGlovesChanged");

	Params::AFirstPersonCharacter_C_OnGlovesChanged_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnHairChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnHairChanged(int32 Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnHairChanged");

	Params::AFirstPersonCharacter_C_OnHairChanged_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnSexChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::OnSexChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnSexChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::OnCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnConfirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::OnConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnConfirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnClothesColorChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnClothesColorChanged(int32 Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnClothesColorChanged");

	Params::AFirstPersonCharacter_C_OnClothesColorChanged_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnGlovesColorChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnGlovesColorChanged(int32 Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnGlovesColorChanged");

	Params::AFirstPersonCharacter_C_OnGlovesColorChanged_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnHeadPieceColorChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnHeadPieceColorChanged(int32 Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnHeadPieceColorChanged");

	Params::AFirstPersonCharacter_C_OnHeadPieceColorChanged_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnSkinColorChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnSkinColorChanged(int32 Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnSkinColorChanged");

	Params::AFirstPersonCharacter_C_OnSkinColorChanged_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnHairColorChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnHairColorChanged(int32 Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnHairColorChanged");

	Params::AFirstPersonCharacter_C_OnHairColorChanged_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnTrailColorChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnTrailColorChanged(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnTrailColorChanged");

	Params::AFirstPersonCharacter_C_OnTrailColorChanged_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnSkinEffectsChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Sheen                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Emissive                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Edge                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AFirstPersonCharacter_C::OnSkinEffectsChanged(bool Sheen, bool Emissive, bool Edge)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnSkinEffectsChanged");

	Params::AFirstPersonCharacter_C_OnSkinEffectsChanged_Params Parms{};

	Parms.Sheen = Sheen;
	Parms.Emissive = Emissive;
	Parms.Edge = Edge;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnMaterialScalarValueChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Wetness                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Divisor                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnMaterialScalarValueChanged(int32 Wetness, class FName Name, float Divisor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnMaterialScalarValueChanged");

	Params::AFirstPersonCharacter_C_OnMaterialScalarValueChanged_Params Parms{};

	Parms.Wetness = Wetness;
	Parms.Name = Name;
	Parms.Divisor = Divisor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.PlayEmote
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::PlayEmote()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "PlayEmote");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.BP_PlayEmote
// (Event, Public, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::BP_PlayEmote()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "BP_PlayEmote");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.BP_SetGravProjectileVisibility
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               NewVisibility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AFirstPersonCharacter_C::BP_SetGravProjectileVisibility(bool NewVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "BP_SetGravProjectileVisibility");

	Params::AFirstPersonCharacter_C_BP_SetGravProjectileVisibility_Params Parms{};

	Parms.NewVisibility = NewVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.BP_HasPole
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               HasPole                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AFirstPersonCharacter_C::BP_HasPole(bool HasPole)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "BP_HasPole");

	Params::AFirstPersonCharacter_C_BP_HasPole_Params Parms{};

	Parms.HasPole = HasPole;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.BP_NewGravProjectile
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGravityBallProjectile*      Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::BP_NewGravProjectile(class AGravityBallProjectile* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "BP_NewGravProjectile");

	Params::AFirstPersonCharacter_C_BP_NewGravProjectile_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.BP_AssignDummyGravProjectileTo
// (Event, Public, BlueprintEvent)
// Parameters:
// class USceneComponent*             ObjRef                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::BP_AssignDummyGravProjectileTo(class USceneComponent* ObjRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "BP_AssignDummyGravProjectileTo");

	Params::AFirstPersonCharacter_C_BP_AssignDummyGravProjectileTo_Params Parms{};

	Parms.ObjRef = ObjRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "ReceiveTick");

	Params::AFirstPersonCharacter_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.BP_ToggleWings
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               IsWingsActive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AFirstPersonCharacter_C::BP_ToggleWings(bool IsWingsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "BP_ToggleWings");

	Params::AFirstPersonCharacter_C_BP_ToggleWings_Params Parms{};

	Parms.IsWingsActive = IsWingsActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.Server_Gallery
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::Server_Gallery()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "Server_Gallery");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.BP_OnClickedRosary
// (Event, Public, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::BP_OnClickedRosary()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "BP_OnClickedRosary");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.BP_OnClickedMatchBox
// (Event, Public, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::BP_OnClickedMatchBox()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "BP_OnClickedMatchBox");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.BP_OnCancelMatchBox
// (Event, Public, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::BP_OnCancelMatchBox()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "BP_OnCancelMatchBox");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.BP_SpawnMatchboxVTrail
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector                     BoxLoc1                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     BoxLoc2                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     PlayerLoc                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    MatchboxTexture                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::BP_SpawnMatchboxVTrail(const struct FVector& BoxLoc1, const struct FVector& BoxLoc2, const struct FVector& PlayerLoc, class UTexture* MatchboxTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "BP_SpawnMatchboxVTrail");

	Params::AFirstPersonCharacter_C_BP_SpawnMatchboxVTrail_Params Parms{};

	Parms.BoxLoc1 = BoxLoc1;
	Parms.BoxLoc2 = BoxLoc2;
	Parms.PlayerLoc = PlayerLoc;
	Parms.MatchboxTexture = MatchboxTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.DoubleJumpVFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::DoubleJumpVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "DoubleJumpVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.BP_OnVault
// (Event, Public, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::BP_OnVault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "BP_OnVault");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.BP_OnRecall
// (Event, Public, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::BP_OnRecall()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "BP_OnRecall");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.BP_IsThirdPersonView
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               ThirdPersonViewIsActive                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AFirstPersonCharacter_C::BP_IsThirdPersonView(bool ThirdPersonViewIsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "BP_IsThirdPersonView");

	Params::AFirstPersonCharacter_C_BP_IsThirdPersonView_Params Parms{};

	Parms.ThirdPersonViewIsActive = ThirdPersonViewIsActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.InitvoiceChat
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::InitvoiceChat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "InitvoiceChat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnChangedWingsMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnChangedWingsMesh(int32 Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnChangedWingsMesh");

	Params::AFirstPersonCharacter_C_OnChangedWingsMesh_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnChangedWingsColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnChangedWingsColor(int32 Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnChangedWingsColor");

	Params::AFirstPersonCharacter_C_OnChangedWingsColor_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnChangeGlideTrailColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnChangeGlideTrailColor(int32 Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnChangeGlideTrailColor");

	Params::AFirstPersonCharacter_C_OnChangeGlideTrailColor_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.BP_TickLocal
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::BP_TickLocal(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "BP_TickLocal");

	Params::AFirstPersonCharacter_C_BP_TickLocal_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.BP_OnClickedProjectionCone
// (Event, Public, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::BP_OnClickedProjectionCone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "BP_OnClickedProjectionCone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.BP_OnClickedViewFinder
// (Event, Public, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::BP_OnClickedViewFinder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "BP_OnClickedViewFinder");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.BP_OnClickedGyroRing
// (Event, Public, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::BP_OnClickedGyroRing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "BP_OnClickedGyroRing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.CheckCustomizationDummyValid
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::CheckCustomizationDummyValid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "CheckCustomizationDummyValid");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.Server_ServerStat
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::Server_ServerStat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "Server_ServerStat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.BP_OnCosmeticBoughtFailed
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::BP_OnCosmeticBoughtFailed(const class FString& ItemId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "BP_OnCosmeticBoughtFailed");

	Params::AFirstPersonCharacter_C_BP_OnCosmeticBoughtFailed_Params Parms{};

	Parms.ItemId = ItemId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.BP_OnCosmeticBought
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::BP_OnCosmeticBought(const class FString& ItemId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "BP_OnCosmeticBought");

	Params::AFirstPersonCharacter_C_BP_OnCosmeticBought_Params Parms{};

	Parms.ItemId = ItemId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.BP_ReceivedBlueOrb
// (Event, Public, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::BP_ReceivedBlueOrb()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "BP_ReceivedBlueOrb");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnAcceptBlueOrb
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::OnAcceptBlueOrb()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnAcceptBlueOrb");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.CameraF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::CameraF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "CameraF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.CameraB
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::CameraB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "CameraB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.BP_OnWave
// (Event, Public, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::BP_OnWave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "BP_OnWave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.BP_BlueOrbInput
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::BP_BlueOrbInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "BP_BlueOrbInput");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.TryLoadUpgradeTutorial
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::TryLoadUpgradeTutorial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "TryLoadUpgradeTutorial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.ActivateWings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::ActivateWings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "ActivateWings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.DeactivateWings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::DeactivateWings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "DeactivateWings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.BPI_OnTeleport
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              TeleportDistance                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::BPI_OnTeleport(float TeleportDistance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "BPI_OnTeleport");

	Params::AFirstPersonCharacter_C_BPI_OnTeleport_Params Parms{};

	Parms.TeleportDistance = TeleportDistance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.BP_OnCustomizationDataUpdated
// (Event, Public, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::BP_OnCustomizationDataUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "BP_OnCustomizationDataUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.BP_ScrollingWhileForcedFirstPerson
// (Event, Public, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::BP_ScrollingWhileForcedFirstPerson()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "BP_ScrollingWhileForcedFirstPerson");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.BP_PuzzleForcedFirstPerson
// (Event, Public, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::BP_PuzzleForcedFirstPerson()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "BP_PuzzleForcedFirstPerson");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnChangedGlideTrailLength
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnChangedGlideTrailLength(int32 InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnChangedGlideTrailLength");

	Params::AFirstPersonCharacter_C_OnChangedGlideTrailLength_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnTrailSystemChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::OnTrailSystemChange(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnTrailSystemChange");

	Params::AFirstPersonCharacter_C_OnTrailSystemChange_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.Server_RepGraphDebug
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::Server_RepGraphDebug()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "Server_RepGraphDebug");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.FreeCam
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::FreeCam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "FreeCam");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.Server_FreeCam
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::Server_FreeCam(class APlayerController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "Server_FreeCam");

	Params::AFirstPersonCharacter_C_Server_FreeCam_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.BP_SetPlayerVisible
// (Event, Public, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::BP_SetPlayerVisible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "BP_SetPlayerVisible");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.ShowPlayerInEditor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::ShowPlayerInEditor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "ShowPlayerInEditor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.PlayDungeonComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::PlayDungeonComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "PlayDungeonComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.BP_OnMaleCustomizationDataUpdated
// (Event, Public, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::BP_OnMaleCustomizationDataUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "BP_OnMaleCustomizationDataUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.BP_OnMoreThanNecessaryPuzzlesInObjectiveSolvedForTheFirstTime
// (Event, Public, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::BP_OnMoreThanNecessaryPuzzlesInObjectiveSolvedForTheFirstTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "BP_OnMoreThanNecessaryPuzzlesInObjectiveSolvedForTheFirstTime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.SetWingsVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNewVisibility                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AFirstPersonCharacter_C::SetWingsVisibility(bool bNewVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "SetWingsVisibility");

	Params::AFirstPersonCharacter_C_SetWingsVisibility_Params Parms{};

	Parms.bNewVisibility = bNewVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.BP_ClickedLoreFragment
// (Event, Public, BlueprintEvent)
// Parameters:
// class UEncyclopediaEntry*          Lore                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::BP_ClickedLoreFragment(class UEncyclopediaEntry* Lore)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "BP_ClickedLoreFragment");

	Params::AFirstPersonCharacter_C_BP_ClickedLoreFragment_Params Parms{};

	Parms.Lore = Lore;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.BP_LoreItemInput
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::BP_LoreItemInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "BP_LoreItemInput");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.BPI_OnSleepingPuzzleClicked
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class APuzzleBase*                 Puzzle                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ErrorMsg                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AFirstPersonCharacter_C::BPI_OnSleepingPuzzleClicked(class APuzzleBase* Puzzle, class FText& ErrorMsg)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "BPI_OnSleepingPuzzleClicked");

	Params::AFirstPersonCharacter_C_BPI_OnSleepingPuzzleClicked_Params Parms{};

	Parms.Puzzle = Puzzle;
	Parms.ErrorMsg = ErrorMsg;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.Fade Etheric Hair In
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::Fade_Etheric_Hair_In()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "Fade Etheric Hair In");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.BP_TriggerUpgradeTutorial
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::BP_TriggerUpgradeTutorial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "BP_TriggerUpgradeTutorial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.BPI_OnLevelUp
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::BPI_OnLevelUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "BPI_OnLevelUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.BP_RemoveFakeLoadingScreen
// (Event, Public, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::BP_RemoveFakeLoadingScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "BP_RemoveFakeLoadingScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.Adjust HLOD Distnace When Zoomed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AFirstPersonCharacter_C::Adjust_HLOD_Distnace_When_Zoomed(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "Adjust HLOD Distnace When Zoomed");

	Params::AFirstPersonCharacter_C_Adjust_HLOD_Distnace_When_Zoomed_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.Server_AddDeluxeCosmetics
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::Server_AddDeluxeCosmetics()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "Server_AddDeluxeCosmetics");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.UnlockDeluxeCosmetic
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::UnlockDeluxeCosmetic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "UnlockDeluxeCosmetic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.PlayDefaultMusic
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::PlayDefaultMusic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "PlayDefaultMusic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.CopyOriginalHair
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::CopyOriginalHair()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "CopyOriginalHair");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.BP_OpenNewPuzzleModal
// (Event, Public, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::BP_OpenNewPuzzleModal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "BP_OpenNewPuzzleModal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.Multicast_PlayEmote
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                MontageToPlay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::Multicast_PlayEmote(class UAnimMontage* MontageToPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "Multicast_PlayEmote");

	Params::AFirstPersonCharacter_C_Multicast_PlayEmote_Params Parms{};

	Parms.MontageToPlay = MontageToPlay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.Server_PlayEmote
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                MontageToPlay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFirstPersonCharacter_C::Server_PlayEmote(class UAnimMontage* MontageToPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "Server_PlayEmote");

	Params::AFirstPersonCharacter_C_Server_PlayEmote_Params Parms{};

	Parms.MontageToPlay = MontageToPlay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.ExecuteUbergraph_FirstPersonCharacter
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_27                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_26                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_25                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_24                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_23                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_22                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_21                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_20                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_19                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_18                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_17                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_16                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_15                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_7                                    (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_CustomizationDummy_C*    K2Node_DynamicCast_AsBP_Customization_Dummy                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_14                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_13                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SkipAnticipation_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGISProgression*             CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class USkill*                      CallFunc_GetSkill_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_QuestComplete_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSpentPoints_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGISProgression*             CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGISProgression*             CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSubtitleInfo               K2Node_MakeStruct_SubtitleInfo                                   (None)
// struct FSubtitleInfo               K2Node_MakeStruct_SubtitleInfo_1                                 (None)
// struct FSubtitleInfo               K2Node_MakeStruct_SubtitleInfo_2                                 (None)
// TArray<struct FSubtitleInfo>       K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// struct FKey                        K2Node_InputActionEvent_Key_6                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_5                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_4                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_3                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_2                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_1                                    (HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key                                      (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key                                         (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWBP_NewPuzzleAwakened_C*    CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGISProgression*             CallFunc_GetGameInstanceSubsystem_ReturnValue_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGISProgression*             CallFunc_GetGameInstanceSubsystem_ReturnValue_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWBP_PuzzleNotAwakened_C*    CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGISProgression*             CallFunc_GetGameInstanceSubsystem_ReturnValue_5                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (ZeroConstructor, NoDestructor)
// class FString                      Temp_string_Variable                                             (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_2                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_3                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_4                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_5                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_6                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_7                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_20                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_21                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_22                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_23                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_24                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_25                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_26                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_27                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_28                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGISProgression*             CallFunc_GetGameInstanceSubsystem_ReturnValue_6                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_38                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_29                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_30                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_39                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_31                          (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_Val_12                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_Val_11                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Val_10                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Val_9                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Val_8                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Val_7                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Val_6                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Val_5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Val_4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Val_3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Index                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Sheen                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Emissive                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Edge                                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_Wetness                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_Name                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Divisor                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_NewVisibility                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_HasPole                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGravityBallProjectile*      K2Node_Event_Projectile                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GravityProjectile_C*     K2Node_DynamicCast_AsBP_Gravity_Projectile                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             K2Node_Event_objRef                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsWingsActive                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_BoxLoc1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_BoxLoc2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_PlayerLoc                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    K2Node_Event_MatchboxTexture                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_40                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_32                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_ThirdPersonViewIsActive                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetThirdPerson_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_28                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_33                          (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_29                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_34                          (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_41                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_VoiceChatInitAudioVoiceChatQuality_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_VoiceChatStartSpeak_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_VoiceChatWasInitAudioVoiceChatQuality_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_Val_2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Val_1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Val                                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_35                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Event_ItemId_1                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_ItemId                                              (ZeroConstructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_42                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_36                          (ZeroConstructor, NoDestructor)
// class UWBP_MirabilisPopup_C*       CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_37                          (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_43                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_38                          (ZeroConstructor, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_6           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_30                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInGridMode_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_44                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_UpgradeTutorial_C*      CallFunc_Create_ReturnValue_4                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_39                          (ZeroConstructor, NoDestructor)
// class AHUD*                        CallFunc_GetHUD_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SophiaHUD_C*             K2Node_DynamicCast_AsBP_Sophia_HUD                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_40                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_41                          (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_TeleportDistance                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNiagaraComponent*           CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_31                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNiagaraComponent*           CallFunc_Array_Get_Item_5                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_42                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_BPI_IsFTUE_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_InValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_Array_Get_Item_6                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_32                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterCustomizationDataAsset*CallFunc_GetCustomizationDataAssetByIndex_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_16                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCustomizationSingle        CallFunc_GetCustomizationDataByIndex_ReturnValue                 (None)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue_2                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_43                          (ZeroConstructor, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_CustomEvent_Controller                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_33                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_FreeCam_C*               CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USophiaGameInstance*         K2Node_DynamicCast_AsSophia_Game_Instance                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFirstPersonCharacter_C*     K2Node_DynamicCast_AsFirst_Person_Character                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBlueOrbVisible_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMapMenuVisible_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPauseMenuVisible_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInGridMode_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EventInstanceIsValid_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_44                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_GameHintModalExtraPuzzles_C*CallFunc_Create_ReturnValue_5                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_34                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult           (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bNewVisibility                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHUD*                        CallFunc_GetHUD_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SophiaHUD_C*             K2Node_DynamicCast_AsBP_Sophia_HUD_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AdvanceSubtitles_FinishedSubtitles                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEncyclopediaEntry*          K2Node_Event_lore                                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSubtitleInfo               K2Node_MakeStruct_SubtitleInfo_3                                 (None)
// class ULore*                       K2Node_DynamicCast_AsLore                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FSubtitleInfo>       K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_45                          (ZeroConstructor, NoDestructor)
// struct FVector                     CallFunc_GetBlueOrbSpawnLoc_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BPI_GetCurrentHorizontalFOVs_FOV                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BPI_GetCurrentHorizontalFOVs_zoomFOV                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BlueOrbEffect_C*         CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APuzzleBase*                 K2Node_Event_puzzle                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_errorMsg                                            (ConstParm)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_17                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_35                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SophiaGameInstance_C*    K2Node_DynamicCast_AsBP_Sophia_Game_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_18                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_NewValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USophiaGameInstance*         K2Node_DynamicCast_AsSophia_Game_Instance_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USophiaGameInstance*         K2Node_DynamicCast_AsSophia_Game_Instance_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_46                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_19                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_20                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOverlappingActor_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_36                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue_5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_47                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                K2Node_CustomEvent_MontageToPlay_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_7           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_CustomEvent_MontageToPlay                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_21                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMovingOnGround_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_37                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnyMontagePlaying_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetThirdPerson_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEmoteIndex_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USophiaEmote*                CallFunc_Array_Get_Item_7                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_48                          (ZeroConstructor, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_8           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_22                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFirstPersonCharacter_C::ExecuteUbergraph_FirstPersonCharacter(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_27, class FName K2Node_CustomEvent_NotifyName_26, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_25, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_24, class FName K2Node_CustomEvent_NotifyName_23, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_22, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_21, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_20, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_19, class FName K2Node_CustomEvent_NotifyName_18, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName K2Node_CustomEvent_NotifyName_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName Temp_name_Variable_2, const struct FKey& K2Node_InputActionEvent_Key_7, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABP_CustomizationDummy_C* K2Node_DynamicCast_AsBP_Customization_Dummy, bool K2Node_DynamicCast_bSuccess, class FName K2Node_CustomEvent_NotifyName_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class FName Temp_name_Variable_3, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_SkipAnticipation_ReturnValue, class UGISProgression* CallFunc_GetGameInstanceSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class USkill* CallFunc_GetSkill_ReturnValue, class UWBP_QuestComplete_C* CallFunc_Create_ReturnValue, int32 CallFunc_GetSpentPoints_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UGISProgression* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UGISProgression* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FSubtitleInfo& K2Node_MakeStruct_SubtitleInfo, const struct FSubtitleInfo& K2Node_MakeStruct_SubtitleInfo_1, const struct FSubtitleInfo& K2Node_MakeStruct_SubtitleInfo_2, TArray<struct FSubtitleInfo>& K2Node_MakeArray_Array, const struct FKey& K2Node_InputActionEvent_Key_6, const struct FKey& K2Node_InputActionEvent_Key_5, const struct FKey& K2Node_InputActionEvent_Key_4, const struct FKey& K2Node_InputActionEvent_Key_3, const struct FKey& K2Node_InputActionEvent_Key_2, const struct FKey& K2Node_InputActionEvent_Key_1, int32 Temp_int_Variable, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, const struct FKey& K2Node_InputActionEvent_Key, int32 CallFunc_Array_Length_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UWBP_NewPuzzleAwakened_C* CallFunc_Create_ReturnValue_1, class UGISProgression* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, class UGISProgression* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, bool CallFunc_IsValidClass_ReturnValue, class UWBP_PuzzleNotAwakened_C* CallFunc_Create_ReturnValue_2, class UGISProgression* CallFunc_GetGameInstanceSubsystem_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, int32 CallFunc_Array_AddUnique_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue_3, const class FString& Temp_string_Variable_4, const class FString& Temp_string_Variable_5, int32 CallFunc_Array_AddUnique_ReturnValue_4, int32 CallFunc_Array_AddUnique_ReturnValue_5, const class FString& Temp_string_Variable_6, const class FString& Temp_string_Variable_7, int32 CallFunc_Array_AddUnique_ReturnValue_6, int32 CallFunc_Array_AddUnique_ReturnValue_7, class FName K2Node_CustomEvent_NotifyName_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, class FName Temp_name_Variable_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_24, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_25, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_26, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_27, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_28, class FName Temp_name_Variable_7, class UGISProgression* CallFunc_GetGameInstanceSubsystem_ReturnValue_6, bool Temp_bool_IsClosed_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class FName K2Node_CustomEvent_NotifyName_38, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, class UNiagaraComponent* CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_29, class FName K2Node_Select_Default, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_30, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, class FName K2Node_CustomEvent_NotifyName_39, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_31, bool K2Node_Event_Val_12, int32 K2Node_Event_Val_11, int32 K2Node_Event_Val_10, int32 K2Node_Event_Val_9, int32 K2Node_Event_Val_8, int32 K2Node_Event_Val_7, int32 K2Node_Event_Val_6, int32 K2Node_Event_Val_5, int32 K2Node_Event_Val_4, int32 K2Node_Event_Val_3, int32 K2Node_Event_Index, bool K2Node_Event_Sheen, bool K2Node_Event_Emissive, bool K2Node_Event_Edge, int32 K2Node_Event_Wetness, class FName K2Node_Event_Name, float K2Node_Event_Divisor, bool K2Node_Event_NewVisibility, int32 Temp_int_Loop_Counter_Variable_3, bool Temp_bool_Has_Been_Initd_Variable, int32 CallFunc_Add_IntInt_ReturnValue_3, bool K2Node_Event_HasPole, class AGravityBallProjectile* K2Node_Event_Projectile, class ABP_GravityProjectile_C* K2Node_DynamicCast_AsBP_Gravity_Projectile, bool K2Node_DynamicCast_bSuccess_1, class USceneComponent* K2Node_Event_objRef, float K2Node_Event_DeltaSeconds, bool CallFunc_K2_AttachToComponent_ReturnValue, bool K2Node_Event_IsWingsActive, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, class FName Temp_name_Variable_8, const struct FVector& K2Node_Event_BoxLoc1, const struct FVector& K2Node_Event_BoxLoc2, const struct FVector& K2Node_Event_PlayerLoc, class UTexture* K2Node_Event_MatchboxTexture, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class FName K2Node_CustomEvent_NotifyName_40, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_32, bool CallFunc_IsValid_ReturnValue_7, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_8, bool K2Node_Event_ThirdPersonViewIsActive, bool CallFunc_GetThirdPerson_ReturnValue, int32 Temp_int_Array_Index_Variable_3, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class FName K2Node_CustomEvent_NotifyName_28, int32 CallFunc_Array_Add_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_33, int32 CallFunc_Array_Length_ReturnValue_2, class FName K2Node_CustomEvent_NotifyName_29, int32 Temp_int_Loop_Counter_Variable_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_34, int32 CallFunc_Add_IntInt_ReturnValue_4, class FName K2Node_CustomEvent_NotifyName_41, bool CallFunc_VoiceChatInitAudioVoiceChatQuality_ReturnValue, bool CallFunc_VoiceChatStartSpeak_ReturnValue, bool CallFunc_VoiceChatWasInitAudioVoiceChatQuality_ReturnValue, int32 K2Node_Event_Val_2, int32 K2Node_Event_Val_1, int32 K2Node_Event_Val, float K2Node_Event_DeltaTime, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_35, bool CallFunc_IsValid_ReturnValue_11, bool CallFunc_IsLocallyControlled_ReturnValue, const class FString& K2Node_Event_ItemId_1, const class FString& K2Node_Event_ItemId, class FName K2Node_CustomEvent_NotifyName_42, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_36, class UWBP_MirabilisPopup_C* CallFunc_Create_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_37, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_4, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class AActor* CallFunc_Array_Get_Item_1, class AActor* CallFunc_Array_Get_Item_2, class FName Temp_name_Variable_9, class FName K2Node_CustomEvent_NotifyName_43, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_38, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_12, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue, class FName K2Node_CustomEvent_NotifyName_30, bool Temp_bool_Variable_1, int32 Temp_int_Loop_Counter_Variable_5, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_6, bool CallFunc_IsInGridMode_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, class FName K2Node_CustomEvent_NotifyName_44, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class UWBP_UpgradeTutorial_C* CallFunc_Create_ReturnValue_4, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_39, class AHUD* CallFunc_GetHUD_ReturnValue, class ABP_SophiaHUD_C* K2Node_DynamicCast_AsBP_Sophia_HUD, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_40, bool CallFunc_IsLocallyControlled_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_41, int32 Temp_int_Array_Index_Variable_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class UNiagaraComponent* CallFunc_Array_Get_Item_3, bool CallFunc_IsValid_ReturnValue_13, float K2Node_Event_TeleportDistance, bool CallFunc_Greater_FloatFloat_ReturnValue, class UNiagaraComponent* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_14, bool CallFunc_Less_IntInt_ReturnValue_3, class FName K2Node_CustomEvent_NotifyName_31, int32 CallFunc_Array_Length_ReturnValue_6, int32 Temp_int_Array_Index_Variable_5, bool CallFunc_Less_IntInt_ReturnValue_4, class UNiagaraComponent* CallFunc_Array_Get_Item_5, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, bool CallFunc_IsValid_ReturnValue_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_42, bool CallFunc_BPI_IsFTUE_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 K2Node_CustomEvent_InValue, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class UNiagaraComponent* CallFunc_Array_Get_Item_6, int32 CallFunc_Array_Length_ReturnValue_7, bool CallFunc_Less_IntInt_ReturnValue_5, int32 Temp_int_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_6, int32 K2Node_CustomEvent_Index, class FName K2Node_CustomEvent_NotifyName_32, class UCharacterCustomizationDataAsset* CallFunc_GetCustomizationDataAssetByIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue_16, const struct FCustomizationSingle& CallFunc_GetCustomizationDataByIndex_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_43, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class APlayerController* K2Node_CustomEvent_Controller, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class FName K2Node_CustomEvent_NotifyName_33, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_FreeCam_C* CallFunc_FinishSpawningActor_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance, bool K2Node_DynamicCast_bSuccess_3, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class AFirstPersonCharacter_C* K2Node_DynamicCast_AsFirst_Person_Character, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsBlueOrbVisible_ReturnValue, bool CallFunc_IsMapMenuVisible_ReturnValue, bool CallFunc_IsPauseMenuVisible_ReturnValue, bool CallFunc_IsInGridMode_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EventInstanceIsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_44, bool CallFunc_NotEqual_ByteByte_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_7, class UWBP_GameHintModalExtraPuzzles_C* CallFunc_Create_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class FName K2Node_CustomEvent_NotifyName_34, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_3, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FHitResult& CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult, class APlayerController* CallFunc_GetPlayerController_ReturnValue_8, bool K2Node_CustomEvent_bNewVisibility, class APlayerController* CallFunc_GetPlayerController_ReturnValue_9, class AHUD* CallFunc_GetHUD_ReturnValue_1, float CallFunc_GetGameTimeInSeconds_ReturnValue, class ABP_SophiaHUD_C* K2Node_DynamicCast_AsBP_Sophia_HUD_1, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_AdvanceSubtitles_FinishedSubtitles, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, class UEncyclopediaEntry* K2Node_Event_lore, bool CallFunc_Greater_FloatFloat_ReturnValue_1, const struct FSubtitleInfo& K2Node_MakeStruct_SubtitleInfo_3, class ULore* K2Node_DynamicCast_AsLore, bool K2Node_DynamicCast_bSuccess_6, TArray<struct FSubtitleInfo>& K2Node_MakeArray_Array_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_45, const struct FVector& CallFunc_GetBlueOrbSpawnLoc_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, float CallFunc_BPI_GetCurrentHorizontalFOVs_FOV, float CallFunc_BPI_GetCurrentHorizontalFOVs_zoomFOV, class ABP_BlueOrbEffect_C* CallFunc_FinishSpawningActor_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, class APuzzleBase* K2Node_Event_puzzle, class FText K2Node_Event_errorMsg, int32 Temp_int_Variable_2, bool CallFunc_IsValid_ReturnValue_17, bool CallFunc_Greater_IntInt_ReturnValue_2, bool CallFunc_IsLocallyControlled_ReturnValue_3, int32 CallFunc_RandomInteger_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, class FName Temp_name_Variable_10, class FName K2Node_CustomEvent_NotifyName_35, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_4, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UBP_SophiaGameInstance_C* K2Node_DynamicCast_AsBP_Sophia_Game_Instance, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_18, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, bool K2Node_CustomEvent_NewValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_8, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_3, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance_2, bool K2Node_DynamicCast_bSuccess_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_46, bool CallFunc_IsValid_ReturnValue_19, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_20, bool CallFunc_IsOverlappingActor_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_5, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, class FName K2Node_CustomEvent_NotifyName_36, float CallFunc_GetGameTimeInSeconds_ReturnValue_2, float CallFunc_GetGameTimeInSeconds_ReturnValue_3, float CallFunc_GetGameTimeInSeconds_ReturnValue_4, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_2, float CallFunc_GetGameTimeInSeconds_ReturnValue_5, float CallFunc_Subtract_FloatFloat_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_47, bool CallFunc_Greater_FloatFloat_ReturnValue_3, bool CallFunc_IsLocallyControlled_ReturnValue_4, class UAnimMontage* K2Node_CustomEvent_MontageToPlay_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_7, class UAnimMontage* K2Node_CustomEvent_MontageToPlay, bool CallFunc_IsValid_ReturnValue_21, bool CallFunc_IsMovingOnGround_ReturnValue, class FName K2Node_CustomEvent_NotifyName_37, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_IsAnyMontagePlaying_ReturnValue, bool CallFunc_GetThirdPerson_ReturnValue_1, int32 CallFunc_GetEmoteIndex_ReturnValue, class USophiaEmote* CallFunc_Array_Get_Item_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_48, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_22)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "ExecuteUbergraph_FirstPersonCharacter");

	Params::AFirstPersonCharacter_C_ExecuteUbergraph_FirstPersonCharacter_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NotifyName_27 = K2Node_CustomEvent_NotifyName_27;
	Parms.K2Node_CustomEvent_NotifyName_26 = K2Node_CustomEvent_NotifyName_26;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName_25 = K2Node_CustomEvent_NotifyName_25;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName_24 = K2Node_CustomEvent_NotifyName_24;
	Parms.K2Node_CustomEvent_NotifyName_23 = K2Node_CustomEvent_NotifyName_23;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_NotifyName_22 = K2Node_CustomEvent_NotifyName_22;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_NotifyName_21 = K2Node_CustomEvent_NotifyName_21;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_NotifyName_20 = K2Node_CustomEvent_NotifyName_20;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CustomEvent_NotifyName_19 = K2Node_CustomEvent_NotifyName_19;
	Parms.K2Node_CustomEvent_NotifyName_18 = K2Node_CustomEvent_NotifyName_18;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CustomEvent_NotifyName_17 = K2Node_CustomEvent_NotifyName_17;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CustomEvent_NotifyName_16 = K2Node_CustomEvent_NotifyName_16;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CustomEvent_NotifyName_15 = K2Node_CustomEvent_NotifyName_15;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.K2Node_InputActionEvent_Key_7 = K2Node_InputActionEvent_Key_7;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Customization_Dummy = K2Node_DynamicCast_AsBP_Customization_Dummy;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_NotifyName_14 = K2Node_CustomEvent_NotifyName_14;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CustomEvent_NotifyName_13 = K2Node_CustomEvent_NotifyName_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_CustomEvent_NotifyName_12 = K2Node_CustomEvent_NotifyName_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.K2Node_CustomEvent_NotifyName_11 = K2Node_CustomEvent_NotifyName_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.K2Node_CustomEvent_NotifyName_10 = K2Node_CustomEvent_NotifyName_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_SkipAnticipation_ReturnValue = CallFunc_SkipAnticipation_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetSkill_ReturnValue = CallFunc_GetSkill_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetSpentPoints_ReturnValue = CallFunc_GetSpentPoints_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.K2Node_MakeStruct_SubtitleInfo = K2Node_MakeStruct_SubtitleInfo;
	Parms.K2Node_MakeStruct_SubtitleInfo_1 = K2Node_MakeStruct_SubtitleInfo_1;
	Parms.K2Node_MakeStruct_SubtitleInfo_2 = K2Node_MakeStruct_SubtitleInfo_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_InputActionEvent_Key_6 = K2Node_InputActionEvent_Key_6;
	Parms.K2Node_InputActionEvent_Key_5 = K2Node_InputActionEvent_Key_5;
	Parms.K2Node_InputActionEvent_Key_4 = K2Node_InputActionEvent_Key_4;
	Parms.K2Node_InputActionEvent_Key_3 = K2Node_InputActionEvent_Key_3;
	Parms.K2Node_InputActionEvent_Key_2 = K2Node_InputActionEvent_Key_2;
	Parms.K2Node_InputActionEvent_Key_1 = K2Node_InputActionEvent_Key_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;
	Parms.Temp_name_Variable_5 = Temp_name_Variable_5;
	Parms.K2Node_InputActionEvent_Key = K2Node_InputActionEvent_Key;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_InputKeyEvent_Key = K2Node_InputKeyEvent_Key;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_3 = CallFunc_GetGameInstanceSubsystem_ReturnValue_3;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_4 = CallFunc_GetGameInstanceSubsystem_ReturnValue_4;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_5 = CallFunc_GetGameInstanceSubsystem_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_18 = K2Node_CreateDelegate_OutputDelegate_18;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.Temp_string_Variable_3 = Temp_string_Variable_3;
	Parms.CallFunc_Array_AddUnique_ReturnValue_2 = CallFunc_Array_AddUnique_ReturnValue_2;
	Parms.CallFunc_Array_AddUnique_ReturnValue_3 = CallFunc_Array_AddUnique_ReturnValue_3;
	Parms.Temp_string_Variable_4 = Temp_string_Variable_4;
	Parms.Temp_string_Variable_5 = Temp_string_Variable_5;
	Parms.CallFunc_Array_AddUnique_ReturnValue_4 = CallFunc_Array_AddUnique_ReturnValue_4;
	Parms.CallFunc_Array_AddUnique_ReturnValue_5 = CallFunc_Array_AddUnique_ReturnValue_5;
	Parms.Temp_string_Variable_6 = Temp_string_Variable_6;
	Parms.Temp_string_Variable_7 = Temp_string_Variable_7;
	Parms.CallFunc_Array_AddUnique_ReturnValue_6 = CallFunc_Array_AddUnique_ReturnValue_6;
	Parms.CallFunc_Array_AddUnique_ReturnValue_7 = CallFunc_Array_AddUnique_ReturnValue_7;
	Parms.K2Node_CustomEvent_NotifyName_9 = K2Node_CustomEvent_NotifyName_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_19 = K2Node_CreateDelegate_OutputDelegate_19;
	Parms.K2Node_CustomEvent_NotifyName_8 = K2Node_CustomEvent_NotifyName_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_20 = K2Node_CreateDelegate_OutputDelegate_20;
	Parms.K2Node_CustomEvent_NotifyName_7 = K2Node_CustomEvent_NotifyName_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_21 = K2Node_CreateDelegate_OutputDelegate_21;
	Parms.K2Node_CustomEvent_NotifyName_6 = K2Node_CustomEvent_NotifyName_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_22 = K2Node_CreateDelegate_OutputDelegate_22;
	Parms.K2Node_CustomEvent_NotifyName_5 = K2Node_CustomEvent_NotifyName_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_23 = K2Node_CreateDelegate_OutputDelegate_23;
	Parms.Temp_name_Variable_6 = Temp_name_Variable_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_24 = K2Node_CreateDelegate_OutputDelegate_24;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_25 = K2Node_CreateDelegate_OutputDelegate_25;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_26 = K2Node_CreateDelegate_OutputDelegate_26;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_27 = K2Node_CreateDelegate_OutputDelegate_27;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_28 = K2Node_CreateDelegate_OutputDelegate_28;
	Parms.Temp_name_Variable_7 = Temp_name_Variable_7;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_6 = CallFunc_GetGameInstanceSubsystem_ReturnValue_6;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CustomEvent_NotifyName_38 = K2Node_CustomEvent_NotifyName_38;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CreateDelegate_OutputDelegate_29 = K2Node_CreateDelegate_OutputDelegate_29;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_30 = K2Node_CreateDelegate_OutputDelegate_30;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_39 = K2Node_CustomEvent_NotifyName_39;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_31 = K2Node_CreateDelegate_OutputDelegate_31;
	Parms.K2Node_Event_Val_12 = K2Node_Event_Val_12;
	Parms.K2Node_Event_Val_11 = K2Node_Event_Val_11;
	Parms.K2Node_Event_Val_10 = K2Node_Event_Val_10;
	Parms.K2Node_Event_Val_9 = K2Node_Event_Val_9;
	Parms.K2Node_Event_Val_8 = K2Node_Event_Val_8;
	Parms.K2Node_Event_Val_7 = K2Node_Event_Val_7;
	Parms.K2Node_Event_Val_6 = K2Node_Event_Val_6;
	Parms.K2Node_Event_Val_5 = K2Node_Event_Val_5;
	Parms.K2Node_Event_Val_4 = K2Node_Event_Val_4;
	Parms.K2Node_Event_Val_3 = K2Node_Event_Val_3;
	Parms.K2Node_Event_Index = K2Node_Event_Index;
	Parms.K2Node_Event_Sheen = K2Node_Event_Sheen;
	Parms.K2Node_Event_Emissive = K2Node_Event_Emissive;
	Parms.K2Node_Event_Edge = K2Node_Event_Edge;
	Parms.K2Node_Event_Wetness = K2Node_Event_Wetness;
	Parms.K2Node_Event_Name = K2Node_Event_Name;
	Parms.K2Node_Event_Divisor = K2Node_Event_Divisor;
	Parms.K2Node_Event_NewVisibility = K2Node_Event_NewVisibility;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.K2Node_Event_HasPole = K2Node_Event_HasPole;
	Parms.K2Node_Event_Projectile = K2Node_Event_Projectile;
	Parms.K2Node_DynamicCast_AsBP_Gravity_Projectile = K2Node_DynamicCast_AsBP_Gravity_Projectile;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Event_objRef = K2Node_Event_objRef;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.K2Node_Event_IsWingsActive = K2Node_Event_IsWingsActive;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.Temp_name_Variable_8 = Temp_name_Variable_8;
	Parms.K2Node_Event_BoxLoc1 = K2Node_Event_BoxLoc1;
	Parms.K2Node_Event_BoxLoc2 = K2Node_Event_BoxLoc2;
	Parms.K2Node_Event_PlayerLoc = K2Node_Event_PlayerLoc;
	Parms.K2Node_Event_MatchboxTexture = K2Node_Event_MatchboxTexture;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_40 = K2Node_CustomEvent_NotifyName_40;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = CallFunc_SpawnSystemAtLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_32 = K2Node_CreateDelegate_OutputDelegate_32;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.K2Node_Event_ThirdPersonViewIsActive = K2Node_Event_ThirdPersonViewIsActive;
	Parms.CallFunc_GetThirdPerson_ReturnValue = CallFunc_GetThirdPerson_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue_1 = CallFunc_SpawnSystemAttached_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_CustomEvent_NotifyName_28 = K2Node_CustomEvent_NotifyName_28;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_33 = K2Node_CreateDelegate_OutputDelegate_33;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.K2Node_CustomEvent_NotifyName_29 = K2Node_CustomEvent_NotifyName_29;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_34 = K2Node_CreateDelegate_OutputDelegate_34;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.K2Node_CustomEvent_NotifyName_41 = K2Node_CustomEvent_NotifyName_41;
	Parms.CallFunc_VoiceChatInitAudioVoiceChatQuality_ReturnValue = CallFunc_VoiceChatInitAudioVoiceChatQuality_ReturnValue;
	Parms.CallFunc_VoiceChatStartSpeak_ReturnValue = CallFunc_VoiceChatStartSpeak_ReturnValue;
	Parms.CallFunc_VoiceChatWasInitAudioVoiceChatQuality_ReturnValue = CallFunc_VoiceChatWasInitAudioVoiceChatQuality_ReturnValue;
	Parms.K2Node_Event_Val_2 = K2Node_Event_Val_2;
	Parms.K2Node_Event_Val_1 = K2Node_Event_Val_1;
	Parms.K2Node_Event_Val = K2Node_Event_Val;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_35 = K2Node_CreateDelegate_OutputDelegate_35;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.K2Node_Event_ItemId_1 = K2Node_Event_ItemId_1;
	Parms.K2Node_Event_ItemId = K2Node_Event_ItemId;
	Parms.K2Node_CustomEvent_NotifyName_42 = K2Node_CustomEvent_NotifyName_42;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_36 = K2Node_CreateDelegate_OutputDelegate_36;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_37 = K2Node_CreateDelegate_OutputDelegate_37;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.Temp_name_Variable_9 = Temp_name_Variable_9;
	Parms.K2Node_CustomEvent_NotifyName_43 = K2Node_CustomEvent_NotifyName_43;
	Parms.K2Node_CreateDelegate_OutputDelegate_38 = K2Node_CreateDelegate_OutputDelegate_38;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_6 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_30 = K2Node_CustomEvent_NotifyName_30;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.CallFunc_IsInGridMode_ReturnValue = CallFunc_IsInGridMode_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.K2Node_CustomEvent_NotifyName_44 = K2Node_CustomEvent_NotifyName_44;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.CallFunc_Create_ReturnValue_4 = CallFunc_Create_ReturnValue_4;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_39 = K2Node_CreateDelegate_OutputDelegate_39;
	Parms.CallFunc_GetHUD_ReturnValue = CallFunc_GetHUD_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Sophia_HUD = K2Node_DynamicCast_AsBP_Sophia_HUD;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_40 = K2Node_CreateDelegate_OutputDelegate_40;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_1 = CallFunc_IsLocallyControlled_ReturnValue_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_41 = K2Node_CreateDelegate_OutputDelegate_41;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.K2Node_Event_TeleportDistance = K2Node_Event_TeleportDistance;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.K2Node_CustomEvent_NotifyName_31 = K2Node_CustomEvent_NotifyName_31;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;
	Parms.CallFunc_IsValid_ReturnValue_15 = CallFunc_IsValid_ReturnValue_15;
	Parms.K2Node_CreateDelegate_OutputDelegate_42 = K2Node_CreateDelegate_OutputDelegate_42;
	Parms.CallFunc_BPI_IsFTUE_ReturnValue = CallFunc_BPI_IsFTUE_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.K2Node_CustomEvent_InValue = K2Node_CustomEvent_InValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Array_Length_ReturnValue_7 = CallFunc_Array_Length_ReturnValue_7;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_6 = CallFunc_Less_IntInt_ReturnValue_6;
	Parms.K2Node_CustomEvent_Index = K2Node_CustomEvent_Index;
	Parms.K2Node_CustomEvent_NotifyName_32 = K2Node_CustomEvent_NotifyName_32;
	Parms.CallFunc_GetCustomizationDataAssetByIndex_ReturnValue = CallFunc_GetCustomizationDataAssetByIndex_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_16 = CallFunc_IsValid_ReturnValue_16;
	Parms.CallFunc_GetCustomizationDataByIndex_ReturnValue = CallFunc_GetCustomizationDataByIndex_ReturnValue;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue_2 = CallFunc_SpawnSystemAttached_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_43 = K2Node_CreateDelegate_OutputDelegate_43;
	Parms.CallFunc_PlayEvent2D_ReturnValue_1 = CallFunc_PlayEvent2D_ReturnValue_1;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_2 = CallFunc_IsLocallyControlled_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.K2Node_CustomEvent_Controller = K2Node_CustomEvent_Controller;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_33 = K2Node_CustomEvent_NotifyName_33;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsSophia_Game_Instance = K2Node_DynamicCast_AsSophia_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsFirst_Person_Character = K2Node_DynamicCast_AsFirst_Person_Character;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_IsBlueOrbVisible_ReturnValue = CallFunc_IsBlueOrbVisible_ReturnValue;
	Parms.CallFunc_IsMapMenuVisible_ReturnValue = CallFunc_IsMapMenuVisible_ReturnValue;
	Parms.CallFunc_IsPauseMenuVisible_ReturnValue = CallFunc_IsPauseMenuVisible_ReturnValue;
	Parms.CallFunc_IsInGridMode_ReturnValue_1 = CallFunc_IsInGridMode_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue_2 = CallFunc_PlayEvent2D_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_EventInstanceIsValid_ReturnValue = CallFunc_EventInstanceIsValid_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_6 = CallFunc_GetPlayerController_ReturnValue_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_44 = K2Node_CreateDelegate_OutputDelegate_44;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_7 = CallFunc_GetPlayerController_ReturnValue_7;
	Parms.CallFunc_Create_ReturnValue_5 = CallFunc_Create_ReturnValue_5;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.K2Node_CustomEvent_NotifyName_34 = K2Node_CustomEvent_NotifyName_34;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue_3 = CallFunc_PlayEvent2D_ReturnValue_3;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult = CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult;
	Parms.CallFunc_GetPlayerController_ReturnValue_8 = CallFunc_GetPlayerController_ReturnValue_8;
	Parms.K2Node_CustomEvent_bNewVisibility = K2Node_CustomEvent_bNewVisibility;
	Parms.CallFunc_GetPlayerController_ReturnValue_9 = CallFunc_GetPlayerController_ReturnValue_9;
	Parms.CallFunc_GetHUD_ReturnValue_1 = CallFunc_GetHUD_ReturnValue_1;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Sophia_HUD_1 = K2Node_DynamicCast_AsBP_Sophia_HUD_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_AdvanceSubtitles_FinishedSubtitles = CallFunc_AdvanceSubtitles_FinishedSubtitles;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.K2Node_Event_lore = K2Node_Event_lore;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.K2Node_MakeStruct_SubtitleInfo_3 = K2Node_MakeStruct_SubtitleInfo_3;
	Parms.K2Node_DynamicCast_AsLore = K2Node_DynamicCast_AsLore;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_45 = K2Node_CreateDelegate_OutputDelegate_45;
	Parms.CallFunc_GetBlueOrbSpawnLoc_ReturnValue = CallFunc_GetBlueOrbSpawnLoc_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_BPI_GetCurrentHorizontalFOVs_FOV = CallFunc_BPI_GetCurrentHorizontalFOVs_FOV;
	Parms.CallFunc_BPI_GetCurrentHorizontalFOVs_zoomFOV = CallFunc_BPI_GetCurrentHorizontalFOVs_zoomFOV;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.K2Node_Event_puzzle = K2Node_Event_puzzle;
	Parms.K2Node_Event_errorMsg = K2Node_Event_errorMsg;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_IsValid_ReturnValue_17 = CallFunc_IsValid_ReturnValue_17;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_3 = CallFunc_IsLocallyControlled_ReturnValue_3;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.Temp_name_Variable_10 = Temp_name_Variable_10;
	Parms.K2Node_CustomEvent_NotifyName_35 = K2Node_CustomEvent_NotifyName_35;
	Parms.CallFunc_PlayEvent2D_ReturnValue_4 = CallFunc_PlayEvent2D_ReturnValue_4;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Sophia_Game_Instance = K2Node_DynamicCast_AsBP_Sophia_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_18 = CallFunc_IsValid_ReturnValue_18;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_1 = CallFunc_GetGameTimeInSeconds_ReturnValue_1;
	Parms.K2Node_CustomEvent_NewValue = K2Node_CustomEvent_NewValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsSophia_Game_Instance_1 = K2Node_DynamicCast_AsSophia_Game_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_GetGameInstance_ReturnValue_3 = CallFunc_GetGameInstance_ReturnValue_3;
	Parms.CallFunc_Greater_IntInt_ReturnValue_3 = CallFunc_Greater_IntInt_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsSophia_Game_Instance_2 = K2Node_DynamicCast_AsSophia_Game_Instance_2;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_46 = K2Node_CreateDelegate_OutputDelegate_46;
	Parms.CallFunc_IsValid_ReturnValue_19 = CallFunc_IsValid_ReturnValue_19;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_1 = CallFunc_GetPlayerCharacter_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_20 = CallFunc_IsValid_ReturnValue_20;
	Parms.CallFunc_IsOverlappingActor_ReturnValue = CallFunc_IsOverlappingActor_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue_5 = CallFunc_PlayEvent2D_ReturnValue_5;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_36 = K2Node_CustomEvent_NotifyName_36;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_2 = CallFunc_GetGameTimeInSeconds_ReturnValue_2;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_3 = CallFunc_GetGameTimeInSeconds_ReturnValue_3;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_4 = CallFunc_GetGameTimeInSeconds_ReturnValue_4;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_2 = CallFunc_Greater_FloatFloat_ReturnValue_2;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_5 = CallFunc_GetGameTimeInSeconds_ReturnValue_5;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_2 = CallFunc_Subtract_FloatFloat_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_47 = K2Node_CreateDelegate_OutputDelegate_47;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_3 = CallFunc_Greater_FloatFloat_ReturnValue_3;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_4 = CallFunc_IsLocallyControlled_ReturnValue_4;
	Parms.K2Node_CustomEvent_MontageToPlay_1 = K2Node_CustomEvent_MontageToPlay_1;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_7 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_7;
	Parms.K2Node_CustomEvent_MontageToPlay = K2Node_CustomEvent_MontageToPlay;
	Parms.CallFunc_IsValid_ReturnValue_21 = CallFunc_IsValid_ReturnValue_21;
	Parms.CallFunc_IsMovingOnGround_ReturnValue = CallFunc_IsMovingOnGround_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_37 = K2Node_CustomEvent_NotifyName_37;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_IsAnyMontagePlaying_ReturnValue = CallFunc_IsAnyMontagePlaying_ReturnValue;
	Parms.CallFunc_GetThirdPerson_ReturnValue_1 = CallFunc_GetThirdPerson_ReturnValue_1;
	Parms.CallFunc_GetEmoteIndex_ReturnValue = CallFunc_GetEmoteIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_48 = K2Node_CreateDelegate_OutputDelegate_48;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_8 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_8;
	Parms.CallFunc_IsValid_ReturnValue_22 = CallFunc_IsValid_ReturnValue_22;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnCustomizationOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::OnCustomizationOpened__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnCustomizationOpened__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnAnyMenuOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::OnAnyMenuOpened__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnAnyMenuOpened__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.OnCosmeticPurchased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AFirstPersonCharacter_C::OnCosmeticPurchased__DelegateSignature(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "OnCosmeticPurchased__DelegateSignature");

	Params::AFirstPersonCharacter_C_OnCosmeticPurchased__DelegateSignature_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FirstPersonCharacter.FirstPersonCharacter_C.PlayerSpawned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFirstPersonCharacter_C::PlayerSpawned__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstPersonCharacter_C", "PlayerSpawned__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


