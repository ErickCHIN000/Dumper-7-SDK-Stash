#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PlayerPreviewManager.BP_PlayerPreviewManager_C
// (Actor)

class UClass* ABP_PlayerPreviewManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PlayerPreviewManager_C");

	return Clss;
}


// BP_PlayerPreviewManager_C BP_PlayerPreviewManager.Default__BP_PlayerPreviewManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PlayerPreviewManager_C* ABP_PlayerPreviewManager_C::GetDefaultObj()
{
	static class ABP_PlayerPreviewManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PlayerPreviewManager_C*>(ABP_PlayerPreviewManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PlayerPreviewManager.BP_PlayerPreviewManager_C.EndLevelLoadEffects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPreviewManager_C::EndLevelLoadEffects(class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerPreviewManager_C", "EndLevelLoadEffects");

	Params::ABP_PlayerPreviewManager_C_EndLevelLoadEffects_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPreviewManager.BP_PlayerPreviewManager_C.BeginLevelLoadEffects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPreviewManager_C::BeginLevelLoadEffects(class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerPreviewManager_C", "BeginLevelLoadEffects");

	Params::ABP_PlayerPreviewManager_C_BeginLevelLoadEffects_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPreviewManager.BP_PlayerPreviewManager_C.UpdateCharacterPreview
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterCosmetics         CosmeticData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPreviewCameraSettingsEnum  NewCameraFocus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TSoftObjectPtr<class UWorld>       Diorama                                                          (BlueprintVisible, BlueprintReadOnly, Parm, UObjectWrapper, HasGetValueTypeHash)
// bool                               ForceWearSpacesuit                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_EnumEnum_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCharacterCreationDataRowHandleTemp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationDataRowHandleTemp_struct_Variable_1                                           (NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationDataRowHandleK2Node_Select_Default                                            (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NameToHash_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPreviewManager_C::UpdateCharacterPreview(const struct FCharacterCosmetics& CosmeticData, const struct FPreviewCameraSettingsEnum& NewCameraFocus, TSoftObjectPtr<class UWorld> Diorama, bool ForceWearSpacesuit, bool Temp_bool_Variable, bool CallFunc_NotEqual_EnumEnum_ReturnValue, const struct FCharacterCreationDataRowHandle& Temp_struct_Variable, const struct FCharacterCreationDataRowHandle& Temp_struct_Variable_1, const struct FCharacterCreationDataRowHandle& K2Node_Select_Default, int32 CallFunc_NameToHash_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerPreviewManager_C", "UpdateCharacterPreview");

	Params::ABP_PlayerPreviewManager_C_UpdateCharacterPreview_Params Parms{};

	Parms.CosmeticData = CosmeticData;
	Parms.NewCameraFocus = NewCameraFocus;
	Parms.Diorama = Diorama;
	Parms.ForceWearSpacesuit = ForceWearSpacesuit;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_NotEqual_EnumEnum_ReturnValue = CallFunc_NotEqual_EnumEnum_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_NameToHash_ReturnValue = CallFunc_NameToHash_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPreviewManager.BP_PlayerPreviewManager_C.CharacterPreviewUpdated
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterCosmetics         CosmeticData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_EnumEnum_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerPreviewManager_C::CharacterPreviewUpdated(const struct FCharacterCosmetics& CosmeticData, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_EnumEnum_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerPreviewManager_C", "CharacterPreviewUpdated");

	Params::ABP_PlayerPreviewManager_C_CharacterPreviewUpdated_Params Parms{};

	Parms.CosmeticData = CosmeticData;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_EnumEnum_ReturnValue = CallFunc_NotEqual_EnumEnum_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPreviewManager.BP_PlayerPreviewManager_C.UpdateCurrentDiorama
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerPreviewManager_C::UpdateCurrentDiorama()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerPreviewManager_C", "UpdateCurrentDiorama");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerPreviewManager.BP_PlayerPreviewManager_C.OnLevelLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerPreviewManager_C::OnLevelLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerPreviewManager_C", "OnLevelLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerPreviewManager.BP_PlayerPreviewManager_C.DisableDioramaPreview
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEndingPlay                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerPreviewManager_C::DisableDioramaPreview(bool IsEndingPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerPreviewManager_C", "DisableDioramaPreview");

	Params::ABP_PlayerPreviewManager_C_DisableDioramaPreview_Params Parms{};

	Parms.IsEndingPlay = IsEndingPlay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPreviewManager.BP_PlayerPreviewManager_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPreviewManager_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerPreviewManager_C", "ReceiveEndPlay");

	Params::ABP_PlayerPreviewManager_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPreviewManager.BP_PlayerPreviewManager_C.ExecuteUbergraph_BP_PlayerPreviewManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCharacterCreationDataRowHandleTemp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationDataRowHandleTemp_struct_Variable_1                                           (NoDestructor, HasGetValueTypeHash)
// TArray<class ATargetPoint*>        CallFunc_GetAllActorsOfClassWithTag_OutActors                    (ReferenceParm)
// class ATargetPoint*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_PlayerPreview_HAB_Selection_C*CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLevelLoaded_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ULightComponent*>     K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// TArray<class AActor*>              K2Node_MakeArray_Array_1                                         (ReferenceParm)
// bool                               K2Node_CustomEvent_IsEndingPlay                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULevelStreamingDynamic*      CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_SoftObjectReference_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TArray<class AActor*>              K2Node_MakeArray_Array_2                                         (ReferenceParm)
// TArray<class ULightComponent*>     K2Node_MakeArray_Array_3                                         (ReferenceParm, ContainsInstancedReference)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetViewTarget_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerPreview_HAB_Selection_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationDataRowHandleK2Node_Select_Default                                            (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_NameToHash_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_HabAudio_C*              CallFunc_GetActorOfClass_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerPreviewManager_C::ExecuteUbergraph_BP_PlayerPreviewManager(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, const struct FCharacterCreationDataRowHandle& Temp_struct_Variable, const struct FCharacterCreationDataRowHandle& Temp_struct_Variable_1, TArray<class ATargetPoint*>& CallFunc_GetAllActorsOfClassWithTag_OutActors, class ATargetPoint* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_IsValid_ReturnValue_1, class ABP_PlayerPreview_HAB_Selection_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsLevelLoaded_ReturnValue, TArray<class ULightComponent*>& K2Node_MakeArray_Array, TArray<class AActor*>& K2Node_MakeArray_Array_1, bool K2Node_CustomEvent_IsEndingPlay, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess, class ULevelStreamingDynamic* CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue, bool CallFunc_EqualEqual_SoftObjectReference_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class AActor*>& K2Node_MakeArray_Array_2, TArray<class ULightComponent*>& K2Node_MakeArray_Array_3, enum class EEndPlayReason K2Node_Event_EndPlayReason, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AActor* CallFunc_GetViewTarget_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_PlayerPreview_HAB_Selection_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FCharacterCreationDataRowHandle& K2Node_Select_Default, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_NameToHash_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue, class ABP_HabAudio_C* CallFunc_GetActorOfClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerPreviewManager_C", "ExecuteUbergraph_BP_PlayerPreviewManager");

	Params::ABP_PlayerPreviewManager_C_ExecuteUbergraph_BP_PlayerPreviewManager_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_GetAllActorsOfClassWithTag_OutActors = CallFunc_GetAllActorsOfClassWithTag_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_IsLevelLoaded_ReturnValue = CallFunc_IsLevelLoaded_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_CustomEvent_IsEndingPlay = K2Node_CustomEvent_IsEndingPlay;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess = CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess;
	Parms.CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue = CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue;
	Parms.CallFunc_EqualEqual_SoftObjectReference_ReturnValue = CallFunc_EqualEqual_SoftObjectReference_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetViewTarget_ReturnValue = CallFunc_GetViewTarget_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_NameToHash_ReturnValue = CallFunc_NameToHash_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetActorOfClass_ReturnValue_1 = CallFunc_GetActorOfClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}

}


