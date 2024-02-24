#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FlashLightBP.FlashLightBP_C
// (Actor)

class UClass* AFlashLightBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FlashLightBP_C");

	return Clss;
}


// FlashLightBP_C FlashLightBP.Default__FlashLightBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFlashLightBP_C* AFlashLightBP_C::GetDefaultObj()
{
	static class AFlashLightBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFlashLightBP_C*>(AFlashLightBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FlashLightBP.FlashLightBP_C.StartHorrorEvent
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StartHorrorEvent_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AFlashLightBP_C::StartHorrorEvent(bool CallFunc_StartHorrorEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlashLightBP_C", "StartHorrorEvent");

	Params::AFlashLightBP_C_StartHorrorEvent_Params Parms{};

	Parms.CallFunc_StartHorrorEvent_ReturnValue = CallFunc_StartHorrorEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FlashLightBP.FlashLightBP_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AFlashLightBP_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlashLightBP_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FlashLightBP.FlashLightBP_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AFlashLightBP_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlashLightBP_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FlashLightBP.FlashLightBP_C.OnUltravioletFullStage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFlashLightBP_C::OnUltravioletFullStage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlashLightBP_C", "OnUltravioletFullStage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FlashLightBP.FlashLightBP_C.OnUltravioletMediumStage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFlashLightBP_C::OnUltravioletMediumStage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlashLightBP_C", "OnUltravioletMediumStage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FlashLightBP.FlashLightBP_C.OnUltravioletLowStage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFlashLightBP_C::OnUltravioletLowStage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlashLightBP_C", "OnUltravioletLowStage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FlashLightBP.FlashLightBP_C.OnDefaultStage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFlashLightBP_C::OnDefaultStage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlashLightBP_C", "OnDefaultStage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FlashLightBP.FlashLightBP_C.StartHorror
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFlashLightBP_C::StartHorror()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlashLightBP_C", "StartHorror");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FlashLightBP.FlashLightBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFlashLightBP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlashLightBP_C", "ReceiveTick");

	Params::AFlashLightBP_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FlashLightBP.FlashLightBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFlashLightBP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlashLightBP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FlashLightBP.FlashLightBP_C.ExecuteUbergraph_FlashLightBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFlashLightBP_C*>     CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFlashLightBP_C*>     CallFunc_GetAllActorsOfClass_OutActors_1                         (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFlashLightBP_C*>     CallFunc_GetAllActorsOfClass_OutActors_2                         (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_5                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_6                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_7                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFlashLightBP_C*>     CallFunc_GetAllActorsOfClass_OutActors_3                         (ReferenceParm, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFlashLightBP_C::ExecuteUbergraph_FlashLightBP(int32 EntryPoint, TArray<class AFlashLightBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Find_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, TArray<class AFlashLightBP_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, int32 CallFunc_Array_Find_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess_1, float K2Node_Event_DeltaSeconds, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_1, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_2, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_3, TArray<class AFlashLightBP_C*>& CallFunc_GetAllActorsOfClass_OutActors_2, int32 CallFunc_Array_Find_ReturnValue_2, bool K2Node_SwitchInteger_CmpSuccess_2, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_2, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_3, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue_2, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue_3, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_4, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_5, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_3, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_6, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_7, int32 CallFunc_Array_Find_ReturnValue_3, TArray<class AFlashLightBP_C*>& CallFunc_GetAllActorsOfClass_OutActors_3, bool K2Node_SwitchInteger_CmpSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlashLightBP_C", "ExecuteUbergraph_FlashLightBP");

	Params::AFlashLightBP_C_ExecuteUbergraph_FlashLightBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_1 = CallFunc_GetAllActorsOfClass_OutActors_1;
	Parms.CallFunc_Array_Find_ReturnValue_1 = CallFunc_Array_Find_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue_1 = CallFunc_K2_GetComponentRotation_ReturnValue_1;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue_1 = CallFunc_Conv_RotatorToVector_ReturnValue_1;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_1 = CallFunc_Conv_VectorToLinearColor_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_2 = CallFunc_Conv_VectorToLinearColor_ReturnValue_2;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_3 = CallFunc_Conv_VectorToLinearColor_ReturnValue_3;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_2 = CallFunc_GetAllActorsOfClass_OutActors_2;
	Parms.CallFunc_Array_Find_ReturnValue_2 = CallFunc_Array_Find_ReturnValue_2;
	Parms.K2Node_SwitchInteger_CmpSuccess_2 = K2Node_SwitchInteger_CmpSuccess_2;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue_2 = CallFunc_K2_GetComponentRotation_ReturnValue_2;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue_3 = CallFunc_K2_GetComponentRotation_ReturnValue_3;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue_2 = CallFunc_Conv_RotatorToVector_ReturnValue_2;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue_3 = CallFunc_Conv_RotatorToVector_ReturnValue_3;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_4 = CallFunc_Conv_VectorToLinearColor_ReturnValue_4;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_5 = CallFunc_Conv_VectorToLinearColor_ReturnValue_5;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_2 = CallFunc_K2_GetComponentLocation_ReturnValue_2;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_3 = CallFunc_K2_GetComponentLocation_ReturnValue_3;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_6 = CallFunc_Conv_VectorToLinearColor_ReturnValue_6;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_7 = CallFunc_Conv_VectorToLinearColor_ReturnValue_7;
	Parms.CallFunc_Array_Find_ReturnValue_3 = CallFunc_Array_Find_ReturnValue_3;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_3 = CallFunc_GetAllActorsOfClass_OutActors_3;
	Parms.K2Node_SwitchInteger_CmpSuccess_3 = K2Node_SwitchInteger_CmpSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


