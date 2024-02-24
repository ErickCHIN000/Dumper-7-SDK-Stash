#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_BoardMarker.ba_BoardMarker_C
// (Actor)

class UClass* Aba_BoardMarker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_BoardMarker_C");

	return Clss;
}


// ba_BoardMarker_C ba_BoardMarker.Default__ba_BoardMarker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_BoardMarker_C* Aba_BoardMarker_C::GetDefaultObj()
{
	static class Aba_BoardMarker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_BoardMarker_C*>(Aba_BoardMarker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_BoardMarker.ba_BoardMarker_C.SpawnBoard
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      SpawnedBoardClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Class                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsCompleted                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_InvestigationBoard_Parent_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UChildActorComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_BoardMarker_C::SpawnBoard(class UClass* SpawnedBoardClass, class UClass** Class, bool* IsCompleted, bool CallFunc_EqualEqual_ClassClass_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class Aba_InvestigationBoard_Parent_C* CallFunc_FinishSpawningActor_ReturnValue, class UChildActorComponent* CallFunc_AddComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_BoardMarker_C", "SpawnBoard");

	Params::Aba_BoardMarker_C_SpawnBoard_Params Parms{};

	Parms.SpawnedBoardClass = SpawnedBoardClass;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Class != nullptr)
		*Class = Parms.Class;

	if (IsCompleted != nullptr)
		*IsCompleted = Parms.IsCompleted;

}


// Function ba_BoardMarker.ba_BoardMarker_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void Aba_BoardMarker_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_BoardMarker_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_BoardMarker.ba_BoardMarker_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void Aba_BoardMarker_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_BoardMarker_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_BoardMarker.ba_BoardMarker_C.Timeline_0__Hide__EventFunc
// (BlueprintEvent)
// Parameters:

void Aba_BoardMarker_C::Timeline_0__Hide__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_BoardMarker_C", "Timeline_0__Hide__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_BoardMarker.ba_BoardMarker_C.Move
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETimelineDirection      Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_BoardMarker_C::Move(enum class ETimelineDirection Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_BoardMarker_C", "Move");

	Params::Aba_BoardMarker_C_Move_Params Parms{};

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_BoardMarker.ba_BoardMarker_C.InstantMove
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETimelineDirection      Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_BoardMarker_C::InstantMove(enum class ETimelineDirection Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_BoardMarker_C", "InstantMove");

	Params::Aba_BoardMarker_C_InstantMove_Params Parms{};

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_BoardMarker.ba_BoardMarker_C.ShowHIde
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETimelineDirection      A                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_BoardMarker_C::ShowHIde(enum class ETimelineDirection A)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_BoardMarker_C", "ShowHIde");

	Params::Aba_BoardMarker_C_ShowHIde_Params Parms{};

	Parms.A = A;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_BoardMarker.ba_BoardMarker_C.ExecuteUbergraph_ba_BoardMarker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETimelineDirection      K2Node_CustomEvent_Selection_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_SpawnAkComponentAtLocation_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETimelineDirection      K2Node_CustomEvent_Selection                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_5                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_5                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_5                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult_1                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETimelineDirection      K2Node_CustomEvent_A                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_BoardMarker_C::ExecuteUbergraph_ba_BoardMarker(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_IsClosed_Variable, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, enum class ETimelineDirection K2Node_CustomEvent_Selection_1, float CallFunc_Lerp_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, enum class ETimelineDirection K2Node_CustomEvent_Selection, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_BreakVector_X_4, float CallFunc_BreakVector_Y_4, float CallFunc_BreakVector_Z_4, float CallFunc_BreakVector_X_5, float CallFunc_BreakVector_Y_5, float CallFunc_BreakVector_Z_5, float CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult_1, bool CallFunc_K2_SetActorLocation_ReturnValue_1, enum class ETimelineDirection K2Node_CustomEvent_A, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_BoardMarker_C", "ExecuteUbergraph_ba_BoardMarker");

	Params::Aba_BoardMarker_C_ExecuteUbergraph_ba_BoardMarker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.K2Node_CustomEvent_Selection_1 = K2Node_CustomEvent_Selection_1;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X_2 = CallFunc_BreakVector_X_2;
	Parms.CallFunc_BreakVector_Y_2 = CallFunc_BreakVector_Y_2;
	Parms.CallFunc_BreakVector_Z_2 = CallFunc_BreakVector_Z_2;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_SpawnAkComponentAtLocation_ReturnValue = CallFunc_SpawnAkComponentAtLocation_ReturnValue;
	Parms.K2Node_CustomEvent_Selection = K2Node_CustomEvent_Selection;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_2 = CallFunc_K2_GetComponentLocation_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BreakVector_X_3 = CallFunc_BreakVector_X_3;
	Parms.CallFunc_BreakVector_Y_3 = CallFunc_BreakVector_Y_3;
	Parms.CallFunc_BreakVector_Z_3 = CallFunc_BreakVector_Z_3;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_3 = CallFunc_K2_GetComponentLocation_ReturnValue_3;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_BreakVector_X_4 = CallFunc_BreakVector_X_4;
	Parms.CallFunc_BreakVector_Y_4 = CallFunc_BreakVector_Y_4;
	Parms.CallFunc_BreakVector_Z_4 = CallFunc_BreakVector_Z_4;
	Parms.CallFunc_BreakVector_X_5 = CallFunc_BreakVector_X_5;
	Parms.CallFunc_BreakVector_Y_5 = CallFunc_BreakVector_Y_5;
	Parms.CallFunc_BreakVector_Z_5 = CallFunc_BreakVector_Z_5;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult_1 = CallFunc_K2_SetActorLocation_SweepHitResult_1;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue_1 = CallFunc_K2_SetActorLocation_ReturnValue_1;
	Parms.K2Node_CustomEvent_A = K2Node_CustomEvent_A;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_BoardMarker.ba_BoardMarker_C.EndMovement__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_BoardMarker_C::EndMovement__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_BoardMarker_C", "EndMovement__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


