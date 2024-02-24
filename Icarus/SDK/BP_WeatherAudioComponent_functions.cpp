#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WeatherAudioComponent.BP_WeatherAudioComponent_C
// (SceneComponent)

class UClass* UBP_WeatherAudioComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WeatherAudioComponent_C");

	return Clss;
}


// BP_WeatherAudioComponent_C BP_WeatherAudioComponent.Default__BP_WeatherAudioComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_WeatherAudioComponent_C* UBP_WeatherAudioComponent_C::GetDefaultObj()
{
	static class UBP_WeatherAudioComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_WeatherAudioComponent_C*>(UBP_WeatherAudioComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WeatherAudioComponent.BP_WeatherAudioComponent_C.GetBiome
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBiomesRowHandle            Biome                                                            (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_WeatherAudioComponent_C::GetBiome(struct FBiomesRowHandle* Biome, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherAudioComponent_C", "GetBiome");

	Params::UBP_WeatherAudioComponent_C_GetBiome_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Biome != nullptr)
		*Biome = std::move(Parms.Biome);

}


// Function BP_WeatherAudioComponent.BP_WeatherAudioComponent_C.SubscribeToWeatherUpdates
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBiomesRowHandle            Biome                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UWeatherAudioSubsystem*      CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_WeatherAudioComponent_C::SubscribeToWeatherUpdates(const struct FBiomesRowHandle& Biome, class UWeatherAudioSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherAudioComponent_C", "SubscribeToWeatherUpdates");

	Params::UBP_WeatherAudioComponent_C_SubscribeToWeatherUpdates_Params Parms{};

	Parms.Biome = Biome;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherAudioComponent.BP_WeatherAudioComponent_C.CheckExposure
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Exposure                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WeatherAudioComponent_C::CheckExposure(float* Exposure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherAudioComponent_C", "CheckExposure");

	Params::UBP_WeatherAudioComponent_C_CheckExposure_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Exposure != nullptr)
		*Exposure = Parms.Exposure;

}


// Function BP_WeatherAudioComponent.BP_WeatherAudioComponent_C.SetPointSourceExposureParameter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_WeatherAudioComponent_C::SetPointSourceExposureParameter(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherAudioComponent_C", "SetPointSourceExposureParameter");

	Params::UBP_WeatherAudioComponent_C_SetPointSourceExposureParameter_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherAudioComponent.BP_WeatherAudioComponent_C.StopPointSourceAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_WeatherAudioComponent_C::StopPointSourceAudio(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherAudioComponent_C", "StopPointSourceAudio");

	Params::UBP_WeatherAudioComponent_C_StopPointSourceAudio_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherAudioComponent.BP_WeatherAudioComponent_C.StopExposureTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_WeatherAudioComponent_C::StopExposureTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherAudioComponent_C", "StopExposureTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeatherAudioComponent.BP_WeatherAudioComponent_C.StartExposureTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UBP_WeatherAudioComponent_C::StartExposureTimer(bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherAudioComponent_C", "StartExposureTimer");

	Params::UBP_WeatherAudioComponent_C_StartExposureTimer_Params Parms{};

	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue = CallFunc_K2_IsTimerActiveHandle_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherAudioComponent.BP_WeatherAudioComponent_C.PlayPointSourceAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_Vector_Up_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorBounds_Origin                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorBounds_BoxExtent                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFMODValid              CallFunc_PlayEventAttached_IsValid                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODAudioComponent*         CallFunc_PlayEventAttached_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_WeatherAudioComponent_C::PlayPointSourceAudio(const struct FVector& CallFunc_Vector_Up_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherAudioComponent_C", "PlayPointSourceAudio");

	Params::UBP_WeatherAudioComponent_C_PlayPointSourceAudio_Params Parms{};

	Parms.CallFunc_Vector_Up_ReturnValue = CallFunc_Vector_Up_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_GetActorBounds_Origin = CallFunc_GetActorBounds_Origin;
	Parms.CallFunc_GetActorBounds_BoxExtent = CallFunc_GetActorBounds_BoxExtent;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_PlayEventAttached_IsValid = CallFunc_PlayEventAttached_IsValid;
	Parms.CallFunc_PlayEventAttached_ReturnValue = CallFunc_PlayEventAttached_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherAudioComponent.BP_WeatherAudioComponent_C.StopWeatherAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_WeatherAudioComponent_C::StopWeatherAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherAudioComponent_C", "StopWeatherAudio");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeatherAudioComponent.BP_WeatherAudioComponent_C.StartWeatherAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_WeatherAudioComponent_C::StartWeatherAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherAudioComponent_C", "StartWeatherAudio");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeatherAudioComponent.BP_WeatherAudioComponent_C.UpdateWeatherExposure
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Hits                                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CheckExposure_Exposure                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WeatherAudioComponent_C::UpdateWeatherExposure(int32 Hits, float CallFunc_CheckExposure_Exposure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherAudioComponent_C", "UpdateWeatherExposure");

	Params::UBP_WeatherAudioComponent_C_UpdateWeatherExposure_Params Parms{};

	Parms.Hits = Hits;
	Parms.CallFunc_CheckExposure_Exposure = CallFunc_CheckExposure_Exposure;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherAudioComponent.BP_WeatherAudioComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_WeatherAudioComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherAudioComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeatherAudioComponent.BP_WeatherAudioComponent_C.UpdateWeatherAudio
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bWeatherActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_WeatherAudioComponent_C::UpdateWeatherAudio(bool bWeatherActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherAudioComponent_C", "UpdateWeatherAudio");

	Params::UBP_WeatherAudioComponent_C_UpdateWeatherAudio_Params Parms{};

	Parms.bWeatherActive = bWeatherActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherAudioComponent.BP_WeatherAudioComponent_C.OnBiomeUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_WeatherAudioComponent_C::OnBiomeUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherAudioComponent_C", "OnBiomeUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeatherAudioComponent.BP_WeatherAudioComponent_C.ExecuteUbergraph_BP_WeatherAudioComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusItem*                 K2Node_DynamicCast_AsIcarus_Item                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemStaticData             CallFunc_GetStaticItemData_StaticData                            (None)
// enum class EDataValid              CallFunc_GetStaticItemData_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemAudioData              CallFunc_GetItemAudioDataStruct_ItemAudioData                    (None)
// enum class EValid                  CallFunc_GetItemAudioDataStruct_Paths                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  K2Node_DynamicCast_AsFMODEvent                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusActor*                K2Node_DynamicCast_AsIcarus_Actor                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bWeatherActive                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBiomesRowHandle            CallFunc_GetBiome_Biome                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBiomesRowHandle            CallFunc_GetBiome_Biome_1                                        (NoDestructor, HasGetValueTypeHash)

void UBP_WeatherAudioComponent_C::ExecuteUbergraph_BP_WeatherAudioComponent(int32 EntryPoint, class AIcarusItem* K2Node_DynamicCast_AsIcarus_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FItemStaticData& CallFunc_GetStaticItemData_StaticData, enum class EDataValid CallFunc_GetStaticItemData_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemAudioData& CallFunc_GetItemAudioDataStruct_ItemAudioData, enum class EValid CallFunc_GetItemAudioDataStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UFMODEvent* K2Node_DynamicCast_AsFMODEvent, bool K2Node_DynamicCast_bSuccess_1, class AIcarusActor* K2Node_DynamicCast_AsIcarus_Actor, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool K2Node_Event_bWeatherActive, bool CallFunc_NotEqual_BoolBool_ReturnValue, const struct FBiomesRowHandle& CallFunc_GetBiome_Biome, bool CallFunc_IsRowHandleValid_ReturnValue, const struct FBiomesRowHandle& CallFunc_GetBiome_Biome_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherAudioComponent_C", "ExecuteUbergraph_BP_WeatherAudioComponent");

	Params::UBP_WeatherAudioComponent_C_ExecuteUbergraph_BP_WeatherAudioComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsIcarus_Item = K2Node_DynamicCast_AsIcarus_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetStaticItemData_StaticData = CallFunc_GetStaticItemData_StaticData;
	Parms.CallFunc_GetStaticItemData_Paths = CallFunc_GetStaticItemData_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetItemAudioDataStruct_ItemAudioData = CallFunc_GetItemAudioDataStruct_ItemAudioData;
	Parms.CallFunc_GetItemAudioDataStruct_Paths = CallFunc_GetItemAudioDataStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsFMODEvent = K2Node_DynamicCast_AsFMODEvent;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsIcarus_Actor = K2Node_DynamicCast_AsIcarus_Actor;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_Event_bWeatherActive = K2Node_Event_bWeatherActive;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_GetBiome_Biome = CallFunc_GetBiome_Biome;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.CallFunc_GetBiome_Biome_1 = CallFunc_GetBiome_Biome_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


