#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CreditsSlideshowManager.CreditsSlideshowManager_C
// (None)

class UClass* UCreditsSlideshowManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreditsSlideshowManager_C");

	return Clss;
}


// CreditsSlideshowManager_C CreditsSlideshowManager.Default__CreditsSlideshowManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCreditsSlideshowManager_C* UCreditsSlideshowManager_C::GetDefaultObj()
{
	static class UCreditsSlideshowManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreditsSlideshowManager_C*>(UCreditsSlideshowManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CreditsSlideshowManager.CreditsSlideshowManager_C.PlayCreditsMusic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class APlayerController*>   CallFunc_GetLocalPlayer_Controllers                              (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_GetLocalPlayer_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue                              (None)
// class UWwiseAudioComponent*        CallFunc_GetDefaultWwiseComponent_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreditsSlideshowManager_C::PlayCreditsMusic(TArray<class APlayerController*>& CallFunc_GetLocalPlayer_Controllers, int32 CallFunc_GetLocalPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_Array_Get_Item, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue, class UWwiseAudioComponent* CallFunc_GetDefaultWwiseComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreditsSlideshowManager_C", "PlayCreditsMusic");

	Params::UCreditsSlideshowManager_C_PlayCreditsMusic_Params Parms{};

	Parms.CallFunc_GetLocalPlayer_Controllers = CallFunc_GetLocalPlayer_Controllers;
	Parms.CallFunc_GetLocalPlayer_ReturnValue = CallFunc_GetLocalPlayer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_PostWwiseEvent_ReturnValue = CallFunc_PostWwiseEvent_ReturnValue;
	Parms.CallFunc_GetDefaultWwiseComponent_ReturnValue = CallFunc_GetDefaultWwiseComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreditsSlideshowManager.CreditsSlideshowManager_C.CalculateTransform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetXPercentage_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCameraDistance_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class APlayerController*>   CallFunc_GetLocalPlayer_Controllers                              (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_GetLocalPlayer_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetViewportSize_SizeX                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetViewportSize_SizeY                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_DeprojectScreenToWorld_WorldPosition                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_DeprojectScreenToWorld_WorldDirection                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DeprojectScreenToWorld_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorInt_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorTransform_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCreditsSlideshowManager_C::CalculateTransform(float CallFunc_GetXPercentage_ReturnValue, int32 CallFunc_GetCameraDistance_ReturnValue, TArray<class APlayerController*>& CallFunc_GetLocalPlayer_Controllers, int32 CallFunc_GetLocalPlayer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_Array_Get_Item, int32 CallFunc_GetViewportSize_SizeX, int32 CallFunc_GetViewportSize_SizeY, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector& CallFunc_DeprojectScreenToWorld_WorldPosition, const struct FVector& CallFunc_DeprojectScreenToWorld_WorldDirection, bool CallFunc_DeprojectScreenToWorld_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreditsSlideshowManager_C", "CalculateTransform");

	Params::UCreditsSlideshowManager_C_CalculateTransform_Params Parms{};

	Parms.CallFunc_GetXPercentage_ReturnValue = CallFunc_GetXPercentage_ReturnValue;
	Parms.CallFunc_GetCameraDistance_ReturnValue = CallFunc_GetCameraDistance_ReturnValue;
	Parms.CallFunc_GetLocalPlayer_Controllers = CallFunc_GetLocalPlayer_Controllers;
	Parms.CallFunc_GetLocalPlayer_ReturnValue = CallFunc_GetLocalPlayer_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetViewportSize_SizeX = CallFunc_GetViewportSize_SizeX;
	Parms.CallFunc_GetViewportSize_SizeY = CallFunc_GetViewportSize_SizeY;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue1 = CallFunc_Conv_IntToFloat_ReturnValue1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_DeprojectScreenToWorld_WorldPosition = CallFunc_DeprojectScreenToWorld_WorldPosition;
	Parms.CallFunc_DeprojectScreenToWorld_WorldDirection = CallFunc_DeprojectScreenToWorld_WorldDirection;
	Parms.CallFunc_DeprojectScreenToWorld_ReturnValue = CallFunc_DeprojectScreenToWorld_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_Multiply_VectorInt_ReturnValue = CallFunc_Multiply_VectorInt_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_K2_SetActorTransform_SweepHitResult = CallFunc_K2_SetActorTransform_SweepHitResult;
	Parms.CallFunc_K2_SetActorTransform_ReturnValue = CallFunc_K2_SetActorTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreditsSlideshowManager.CreditsSlideshowManager_C.GbxAsyncRequest_Spawned_632FDCD84CCCFE0E37F79EA4589DECC9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InstanceIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreditsSlideshowManager_C::GbxAsyncRequest_Spawned_632FDCD84CCCFE0E37F79EA4589DECC9(class AActor* Actor, int32 InstanceIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreditsSlideshowManager_C", "GbxAsyncRequest_Spawned_632FDCD84CCCFE0E37F79EA4589DECC9");

	Params::UCreditsSlideshowManager_C_GbxAsyncRequest_Spawned_632FDCD84CCCFE0E37F79EA4589DECC9_Params Parms{};

	Parms.Actor = Actor;
	Parms.InstanceIndex = InstanceIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreditsSlideshowManager.CreditsSlideshowManager_C.GbxAsyncRequest_Spawned_632FDCD84CCCFE0E37F79EA4EAC2236E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InstanceIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreditsSlideshowManager_C::GbxAsyncRequest_Spawned_632FDCD84CCCFE0E37F79EA4EAC2236E(class AActor* Actor, int32 InstanceIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreditsSlideshowManager_C", "GbxAsyncRequest_Spawned_632FDCD84CCCFE0E37F79EA4EAC2236E");

	Params::UCreditsSlideshowManager_C_GbxAsyncRequest_Spawned_632FDCD84CCCFE0E37F79EA4EAC2236E_Params Parms{};

	Parms.Actor = Actor;
	Parms.InstanceIndex = InstanceIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreditsSlideshowManager.CreditsSlideshowManager_C.BPEvent_OnCreditsBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class UClass*                      FirstSlideClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreditsSlideshowManager_C::BPEvent_OnCreditsBegin(class UClass* FirstSlideClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreditsSlideshowManager_C", "BPEvent_OnCreditsBegin");

	Params::UCreditsSlideshowManager_C_BPEvent_OnCreditsBegin_Params Parms{};

	Parms.FirstSlideClass = FirstSlideClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreditsSlideshowManager.CreditsSlideshowManager_C.BPEvent_OnSlideTransitionBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class UClass*                      NewSlideClass                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreditsSlideshowManager_C::BPEvent_OnSlideTransitionBegin(class UClass* NewSlideClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreditsSlideshowManager_C", "BPEvent_OnSlideTransitionBegin");

	Params::UCreditsSlideshowManager_C_BPEvent_OnSlideTransitionBegin_Params Parms{};

	Parms.NewSlideClass = NewSlideClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreditsSlideshowManager.CreditsSlideshowManager_C.BPEvent_OnCreditsEnd
// (Event, Public, BlueprintEvent)
// Parameters:

void UCreditsSlideshowManager_C::BPEvent_OnCreditsEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreditsSlideshowManager_C", "BPEvent_OnCreditsEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CreditsSlideshowManager.CreditsSlideshowManager_C.ExecuteUbergraph_CreditsSlideshowManager
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetWorldContext_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADaffodilCreditsSlide*       Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Actor1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_InstanceIndex1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACreditsSlide_C*             K2Node_DynamicCast_AsCredits_Slide                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ADaffodilCreditsSlide*       K2Node_DynamicCast_AsDaffodil_Credits_Slide                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ADaffodilCreditsSlide*       Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Actor                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_InstanceIndex                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACreditsSlide_C*             K2Node_DynamicCast_AsCredits_Slide1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ADaffodilCreditsSlide*       K2Node_DynamicCast_AsDaffodil_Credits_Slide1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetWorldContext_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Event_FirstSlideClass                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Event_NewSlideClass                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsDaffodil_Credits_Slide                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsDaffodil_Credits_Slide1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FGbxSpawnActorAsyncRequest  K2Node_MakeStruct_GbxSpawnActorAsyncRequest                      (ContainsInstancedReference)
// struct FGbxSpawnActorAsyncRequest  K2Node_MakeStruct_GbxSpawnActorAsyncRequest1                     (ContainsInstancedReference)
// int32                              CallFunc_SpawnActorAsync_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SpawnActorAsync_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreditsSlideshowManager_C::ExecuteUbergraph_CreditsSlideshowManager(int32 EntryPoint, class UObject* CallFunc_GetWorldContext_ReturnValue, class ADaffodilCreditsSlide* Temp_object_Variable, class AActor* K2Node_CustomEvent_Actor1, int32 K2Node_CustomEvent_InstanceIndex1, class ACreditsSlide_C* K2Node_DynamicCast_AsCredits_Slide, bool K2Node_DynamicCast_bSuccess, class ADaffodilCreditsSlide* K2Node_DynamicCast_AsDaffodil_Credits_Slide, bool K2Node_DynamicCast_bSuccess1, class ADaffodilCreditsSlide* Temp_object_Variable1, class AActor* K2Node_CustomEvent_Actor, int32 K2Node_CustomEvent_InstanceIndex, class ACreditsSlide_C* K2Node_DynamicCast_AsCredits_Slide1, bool K2Node_DynamicCast_bSuccess2, class ADaffodilCreditsSlide* K2Node_DynamicCast_AsDaffodil_Credits_Slide1, bool K2Node_DynamicCast_bSuccess3, class UObject* CallFunc_GetWorldContext_ReturnValue1, class UClass* K2Node_Event_FirstSlideClass, class UClass* K2Node_Event_NewSlideClass, class UClass* K2Node_ClassDynamicCast_AsDaffodil_Credits_Slide, bool K2Node_ClassDynamicCast_bSuccess, class UClass* K2Node_ClassDynamicCast_AsDaffodil_Credits_Slide1, bool K2Node_ClassDynamicCast_bSuccess1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest1, int32 CallFunc_SpawnActorAsync_ReturnValue, int32 CallFunc_SpawnActorAsync_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreditsSlideshowManager_C", "ExecuteUbergraph_CreditsSlideshowManager");

	Params::UCreditsSlideshowManager_C_ExecuteUbergraph_CreditsSlideshowManager_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetWorldContext_ReturnValue = CallFunc_GetWorldContext_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_CustomEvent_Actor1 = K2Node_CustomEvent_Actor1;
	Parms.K2Node_CustomEvent_InstanceIndex1 = K2Node_CustomEvent_InstanceIndex1;
	Parms.K2Node_DynamicCast_AsCredits_Slide = K2Node_DynamicCast_AsCredits_Slide;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsDaffodil_Credits_Slide = K2Node_DynamicCast_AsDaffodil_Credits_Slide;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.K2Node_CustomEvent_Actor = K2Node_CustomEvent_Actor;
	Parms.K2Node_CustomEvent_InstanceIndex = K2Node_CustomEvent_InstanceIndex;
	Parms.K2Node_DynamicCast_AsCredits_Slide1 = K2Node_DynamicCast_AsCredits_Slide1;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_DynamicCast_AsDaffodil_Credits_Slide1 = K2Node_DynamicCast_AsDaffodil_Credits_Slide1;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_GetWorldContext_ReturnValue1 = CallFunc_GetWorldContext_ReturnValue1;
	Parms.K2Node_Event_FirstSlideClass = K2Node_Event_FirstSlideClass;
	Parms.K2Node_Event_NewSlideClass = K2Node_Event_NewSlideClass;
	Parms.K2Node_ClassDynamicCast_AsDaffodil_Credits_Slide = K2Node_ClassDynamicCast_AsDaffodil_Credits_Slide;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_ClassDynamicCast_AsDaffodil_Credits_Slide1 = K2Node_ClassDynamicCast_AsDaffodil_Credits_Slide1;
	Parms.K2Node_ClassDynamicCast_bSuccess1 = K2Node_ClassDynamicCast_bSuccess1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_MakeStruct_GbxSpawnActorAsyncRequest = K2Node_MakeStruct_GbxSpawnActorAsyncRequest;
	Parms.K2Node_MakeStruct_GbxSpawnActorAsyncRequest1 = K2Node_MakeStruct_GbxSpawnActorAsyncRequest1;
	Parms.CallFunc_SpawnActorAsync_ReturnValue = CallFunc_SpawnActorAsync_ReturnValue;
	Parms.CallFunc_SpawnActorAsync_ReturnValue1 = CallFunc_SpawnActorAsync_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}


