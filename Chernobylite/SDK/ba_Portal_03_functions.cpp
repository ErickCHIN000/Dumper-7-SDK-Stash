#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_Portal_03.ba_Portal_03_C
// (Actor)

class UClass* Aba_Portal_03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_Portal_03_C");

	return Clss;
}


// ba_Portal_03_C ba_Portal_03.Default__ba_Portal_03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_Portal_03_C* Aba_Portal_03_C::GetDefaultObj()
{
	static class Aba_Portal_03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_Portal_03_C*>(Aba_Portal_03_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_Portal_03.ba_Portal_03_C.UpdateCubemapOrientation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Atan2_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Atan2_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_Portal_03_C::UpdateCubemapOrientation(const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_GetForwardVector_ReturnValue_1, float CallFunc_Atan2_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Atan2_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Portal_03_C", "UpdateCubemapOrientation");

	Params::Aba_Portal_03_C_UpdateCubemapOrientation_Params Parms{};

	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_GetForwardVector_ReturnValue_1 = CallFunc_GetForwardVector_ReturnValue_1;
	Parms.CallFunc_Atan2_ReturnValue = CallFunc_Atan2_ReturnValue;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_Atan2_ReturnValue_1 = CallFunc_Atan2_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_Portal_03.ba_Portal_03_C.MaxInteractionDistance
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MaxInteractionDistance_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float Aba_Portal_03_C::MaxInteractionDistance(float CallFunc_MaxInteractionDistance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Portal_03_C", "MaxInteractionDistance");

	Params::Aba_Portal_03_C_MaxInteractionDistance_Params Parms{};

	Parms.CallFunc_MaxInteractionDistance_ReturnValue = CallFunc_MaxInteractionDistance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_Portal_03.ba_Portal_03_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Atan2_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Atan2_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_Portal_03_C::UserConstructionScript(const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_GetForwardVector_ReturnValue_1, float CallFunc_Atan2_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Atan2_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Portal_03_C", "UserConstructionScript");

	Params::Aba_Portal_03_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_GetForwardVector_ReturnValue_1 = CallFunc_GetForwardVector_ReturnValue_1;
	Parms.CallFunc_Atan2_ReturnValue = CallFunc_Atan2_ReturnValue;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_Atan2_ReturnValue_1 = CallFunc_Atan2_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_Portal_03.ba_Portal_03_C.LocalOpenAnimation__FinishedFunc
// (BlueprintEvent)
// Parameters:

void Aba_Portal_03_C::LocalOpenAnimation__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Portal_03_C", "LocalOpenAnimation__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_Portal_03.ba_Portal_03_C.LocalOpenAnimation__UpdateFunc
// (BlueprintEvent)
// Parameters:

void Aba_Portal_03_C::LocalOpenAnimation__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Portal_03_C", "LocalOpenAnimation__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_Portal_03.ba_Portal_03_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void Aba_Portal_03_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Portal_03_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_Portal_03.ba_Portal_03_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void Aba_Portal_03_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Portal_03_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_Portal_03.ba_Portal_03_C.Timeline_1__FinishedFunc
// (BlueprintEvent)
// Parameters:

void Aba_Portal_03_C::Timeline_1__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Portal_03_C", "Timeline_1__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_Portal_03.ba_Portal_03_C.Timeline_1__UpdateFunc
// (BlueprintEvent)
// Parameters:

void Aba_Portal_03_C::Timeline_1__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Portal_03_C", "Timeline_1__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_Portal_03.ba_Portal_03_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void Aba_Portal_03_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Portal_03_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_Portal_03.ba_Portal_03_C.OnInteractionPressedComponent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMainPawnCpp*                PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             ComponentHit                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_Portal_03_C::OnInteractionPressedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Portal_03_C", "OnInteractionPressedComponent");

	Params::Aba_Portal_03_C_OnInteractionPressedComponent_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.ComponentHit = ComponentHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_Portal_03.ba_Portal_03_C.OpenInLocalTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              StartTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_Portal_03_C::OpenInLocalTime(float StartTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Portal_03_C", "OpenInLocalTime");

	Params::Aba_Portal_03_C_OpenInLocalTime_Params Parms{};

	Parms.StartTime = StartTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_Portal_03.ba_Portal_03_C.SetLocalTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CurrentTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_Portal_03_C::SetLocalTime(float CurrentTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Portal_03_C", "SetLocalTime");

	Params::Aba_Portal_03_C_SetLocalTime_Params Parms{};

	Parms.CurrentTime = CurrentTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_Portal_03.ba_Portal_03_C.ChangeCubeMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                    Cubemap                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Rot                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_Portal_03_C::ChangeCubeMap(class UTexture* Cubemap, float Rot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Portal_03_C", "ChangeCubeMap");

	Params::Aba_Portal_03_C_ChangeCubeMap_Params Parms{};

	Parms.Cubemap = Cubemap;
	Parms.Rot = Rot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_Portal_03.ba_Portal_03_C.CloseLocalTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              StartTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_Portal_03_C::CloseLocalTime(float StartTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Portal_03_C", "CloseLocalTime");

	Params::Aba_Portal_03_C_CloseLocalTime_Params Parms{};

	Parms.StartTime = StartTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_Portal_03.ba_Portal_03_C.Close
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_Portal_03_C::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Portal_03_C", "Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_Portal_03.ba_Portal_03_C.EnteringStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_Portal_03_C::EnteringStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Portal_03_C", "EnteringStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_Portal_03.ba_Portal_03_C.EnteringStop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_Portal_03_C::EnteringStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Portal_03_C", "EnteringStop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_Portal_03.ba_Portal_03_C.ExecuteUbergraph_ba_Portal_03
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class ACGFakeHero*                 CallFunc_PlayCustomAnim_OutFakeHero                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayCustomAnim_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMainPawnCpp*                K2Node_Event_PlayerPawn                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             K2Node_Event_ComponentHit                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_StartTime_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_CurrentTime                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    K2Node_CustomEvent_Cubemap                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Rot                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Atan2_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_StartTime                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Atan2_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_Portal_03_C::ExecuteUbergraph_ba_Portal_03(int32 EntryPoint, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, float CallFunc_Lerp_ReturnValue_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class ACGFakeHero* CallFunc_PlayCustomAnim_OutFakeHero, float CallFunc_PlayCustomAnim_ReturnValue, class AMainPawnCpp* K2Node_Event_PlayerPawn, class UActorComponent* K2Node_Event_ComponentHit, float K2Node_CustomEvent_StartTime_1, float CallFunc_Lerp_ReturnValue_4, float K2Node_CustomEvent_CurrentTime, class UTexture* K2Node_CustomEvent_Cubemap, float K2Node_CustomEvent_Rot, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Atan2_ReturnValue, float K2Node_CustomEvent_StartTime, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue_1, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_Atan2_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Portal_03_C", "ExecuteUbergraph_ba_Portal_03");

	Params::Aba_Portal_03_C_ExecuteUbergraph_ba_Portal_03_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_PlayCustomAnim_OutFakeHero = CallFunc_PlayCustomAnim_OutFakeHero;
	Parms.CallFunc_PlayCustomAnim_ReturnValue = CallFunc_PlayCustomAnim_ReturnValue;
	Parms.K2Node_Event_PlayerPawn = K2Node_Event_PlayerPawn;
	Parms.K2Node_Event_ComponentHit = K2Node_Event_ComponentHit;
	Parms.K2Node_CustomEvent_StartTime_1 = K2Node_CustomEvent_StartTime_1;
	Parms.CallFunc_Lerp_ReturnValue_4 = CallFunc_Lerp_ReturnValue_4;
	Parms.K2Node_CustomEvent_CurrentTime = K2Node_CustomEvent_CurrentTime;
	Parms.K2Node_CustomEvent_Cubemap = K2Node_CustomEvent_Cubemap;
	Parms.K2Node_CustomEvent_Rot = K2Node_CustomEvent_Rot;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_Atan2_ReturnValue = CallFunc_Atan2_ReturnValue;
	Parms.K2Node_CustomEvent_StartTime = K2Node_CustomEvent_StartTime;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue_1 = CallFunc_GetForwardVector_ReturnValue_1;
	Parms.CallFunc_BreakVector_X_2 = CallFunc_BreakVector_X_2;
	Parms.CallFunc_BreakVector_Y_2 = CallFunc_BreakVector_Y_2;
	Parms.CallFunc_BreakVector_Z_2 = CallFunc_BreakVector_Z_2;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Atan2_ReturnValue_1 = CallFunc_Atan2_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


