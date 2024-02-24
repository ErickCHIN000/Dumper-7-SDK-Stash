#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cathedral_Door_OneOfThree_Lever.Cathedral_Door_OneOfThree_Lever_C
// (Actor)

class UClass* ACathedral_Door_OneOfThree_Lever_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cathedral_Door_OneOfThree_Lever_C");

	return Clss;
}


// Cathedral_Door_OneOfThree_Lever_C Cathedral_Door_OneOfThree_Lever.Default__Cathedral_Door_OneOfThree_Lever_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACathedral_Door_OneOfThree_Lever_C* ACathedral_Door_OneOfThree_Lever_C::GetDefaultObj()
{
	static class ACathedral_Door_OneOfThree_Lever_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACathedral_Door_OneOfThree_Lever_C*>(ACathedral_Door_OneOfThree_Lever_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Cathedral_Door_OneOfThree_Lever.Cathedral_Door_OneOfThree_Lever_C.DualSense_ActivationSound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ControllerAudio_C*       CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACathedral_Door_OneOfThree_Lever_C::DualSense_ActivationSound(uint8 CallFunc_MakeLiteralByte_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ControllerAudio_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cathedral_Door_OneOfThree_Lever_C", "DualSense_ActivationSound");

	Params::ACathedral_Door_OneOfThree_Lever_C_DualSense_ActivationSound_Params Parms{};

	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Cathedral_Door_OneOfThree_Lever.Cathedral_Door_OneOfThree_Lever_C.SpawnActivationSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACathedral_Door_OneOfThree_Lever_C::SpawnActivationSound(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cathedral_Door_OneOfThree_Lever_C", "SpawnActivationSound");

	Params::ACathedral_Door_OneOfThree_Lever_C_SpawnActivationSound_Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Cathedral_Door_OneOfThree_Lever.Cathedral_Door_OneOfThree_Lever_C.OnActorUsed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWraithSpawner_Cathedral_ButtonTrap_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameModeUtilInterface_C>K2Node_DynamicCast_AsGame_Mode_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnActorUsed_Success                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACathedral_Door_OneOfThree_Lever_C::OnActorUsed(class APlayerController* Controller, bool* Success, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AWraithSpawner_Cathedral_ButtonTrap_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_OnActorUsed_Success, int32 CallFunc_Array_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cathedral_Door_OneOfThree_Lever_C", "OnActorUsed");

	Params::ACathedral_Door_OneOfThree_Lever_C_OnActorUsed_Params Parms{};

	Parms.Controller = Controller;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.K2Node_DynamicCast_AsGame_Mode_Util_Interface = K2Node_DynamicCast_AsGame_Mode_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_OnActorUsed_Success = CallFunc_OnActorUsed_Success;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function Cathedral_Door_OneOfThree_Lever.Cathedral_Door_OneOfThree_Lever_C.MoveDownTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ACathedral_Door_OneOfThree_Lever_C::MoveDownTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cathedral_Door_OneOfThree_Lever_C", "MoveDownTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cathedral_Door_OneOfThree_Lever.Cathedral_Door_OneOfThree_Lever_C.MoveDownTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ACathedral_Door_OneOfThree_Lever_C::MoveDownTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cathedral_Door_OneOfThree_Lever_C", "MoveDownTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cathedral_Door_OneOfThree_Lever.Cathedral_Door_OneOfThree_Lever_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ACathedral_Door_OneOfThree_Lever_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cathedral_Door_OneOfThree_Lever_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cathedral_Door_OneOfThree_Lever.Cathedral_Door_OneOfThree_Lever_C.MoveDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACathedral_Door_OneOfThree_Lever_C::MoveDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cathedral_Door_OneOfThree_Lever_C", "MoveDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cathedral_Door_OneOfThree_Lever.Cathedral_Door_OneOfThree_Lever_C.Spawn Trap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWraithSpawner_Cathedral_ButtonTrap_C*Spawner                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACathedral_Door_OneOfThree_Lever_C::Spawn_Trap(class AWraithSpawner_Cathedral_ButtonTrap_C* Spawner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cathedral_Door_OneOfThree_Lever_C", "Spawn Trap");

	Params::ACathedral_Door_OneOfThree_Lever_C_Spawn_Trap_Params Parms{};

	Parms.Spawner = Spawner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Cathedral_Door_OneOfThree_Lever.Cathedral_Door_OneOfThree_Lever_C.MoveUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACathedral_Door_OneOfThree_Lever_C::MoveUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cathedral_Door_OneOfThree_Lever_C", "MoveUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cathedral_Door_OneOfThree_Lever.Cathedral_Door_OneOfThree_Lever_C.ExecuteUbergraph_Cathedral_Door_OneOfThree_Lever
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMyNameInChangedSet_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult_2                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AWraithSpawner_Cathedral_ButtonTrap_C*K2Node_CustomEvent_Spawner                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ACathedral_Door_OneOfThree_Lever_C::ExecuteUbergraph_Cathedral_Door_OneOfThree_Lever(int32 EntryPoint, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Lerp_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, bool CallFunc_IsMyNameInChangedSet_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_1, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_2, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, float CallFunc_Lerp_ReturnValue_3, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, class AWraithSpawner_Cathedral_ButtonTrap_C* K2Node_CustomEvent_Spawner, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cathedral_Door_OneOfThree_Lever_C", "ExecuteUbergraph_Cathedral_Door_OneOfThree_Lever");

	Params::ACathedral_Door_OneOfThree_Lever_C_ExecuteUbergraph_Cathedral_Door_OneOfThree_Lever_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue_2 = CallFunc_MakeVector_ReturnValue_2;
	Parms.CallFunc_IsMyNameInChangedSet_ReturnValue = CallFunc_IsMyNameInChangedSet_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult_1 = CallFunc_K2_SetRelativeLocation_SweepHitResult_1;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult_2 = CallFunc_K2_SetRelativeLocation_SweepHitResult_2;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.K2Node_CustomEvent_Spawner = K2Node_CustomEvent_Spawner;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_1 = CallFunc_K2_SetRelativeRotation_SweepHitResult_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


