#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BuildingAudioComponent.BP_BuildingAudioComponent_C
// (SceneComponent)

class UClass* UBP_BuildingAudioComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BuildingAudioComponent_C");

	return Clss;
}


// BP_BuildingAudioComponent_C BP_BuildingAudioComponent.Default__BP_BuildingAudioComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_BuildingAudioComponent_C* UBP_BuildingAudioComponent_C::GetDefaultObj()
{
	static class UBP_BuildingAudioComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_BuildingAudioComponent_C*>(UBP_BuildingAudioComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BuildingAudioComponent.BP_BuildingAudioComponent_C.GetFireAudioData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasFireAudio                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Weighting                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMultiPointAudioEmitter*     Emitter                                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTotalWeighting_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMultiPointAudioEmitter*     CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_BuildingAudioComponent_C::GetFireAudioData(bool* HasFireAudio, float* Weighting, struct FVector* Location, class UMultiPointAudioEmitter* Emitter, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_GetTotalWeighting_ReturnValue, class UMultiPointAudioEmitter* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildingAudioComponent_C", "GetFireAudioData");

	Params::UBP_BuildingAudioComponent_C_GetFireAudioData_Params Parms{};

	Parms.Emitter = Emitter;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_GetTotalWeighting_ReturnValue = CallFunc_GetTotalWeighting_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasFireAudio != nullptr)
		*HasFireAudio = Parms.HasFireAudio;

	if (Weighting != nullptr)
		*Weighting = Parms.Weighting;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

}


// Function BP_BuildingAudioComponent.BP_BuildingAudioComponent_C.RemoveUnzipAudioNode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             TargetComponent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  FMODEvent                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_BuildingAudioComponent_C::RemoveUnzipAudioNode(class USceneComponent* TargetComponent, class UFMODEvent* FMODEvent, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildingAudioComponent_C", "RemoveUnzipAudioNode");

	Params::UBP_BuildingAudioComponent_C_RemoveUnzipAudioNode_Params Parms{};

	Parms.TargetComponent = TargetComponent;
	Parms.FMODEvent = FMODEvent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildingAudioComponent.BP_BuildingAudioComponent_C.AddUnzipAudioNode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             TargetComponent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  FMODEvent                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_BuildingAudioComponent_C::AddUnzipAudioNode(class USceneComponent* TargetComponent, class UFMODEvent* FMODEvent, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildingAudioComponent_C", "AddUnzipAudioNode");

	Params::UBP_BuildingAudioComponent_C_AddUnzipAudioNode_Params Parms{};

	Parms.TargetComponent = TargetComponent;
	Parms.FMODEvent = FMODEvent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildingAudioComponent.BP_BuildingAudioComponent_C.RemoveEmitterNode
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     NodeObject                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  FMODEvent                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMultiPointAudioEmitter*     CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_BuildingAudioComponent_C::RemoveEmitterNode(class UObject* NodeObject, class UFMODEvent* FMODEvent, class UMultiPointAudioEmitter* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildingAudioComponent_C", "RemoveEmitterNode");

	Params::UBP_BuildingAudioComponent_C_RemoveEmitterNode_Params Parms{};

	Parms.NodeObject = NodeObject;
	Parms.FMODEvent = FMODEvent;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildingAudioComponent.BP_BuildingAudioComponent_C.AddEmitterNode
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     NodeObject                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  FMODEvent                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMultiPointAudioEmitter*     CallFunc_AddComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMultiPointAudioEmitter*     CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_BuildingAudioComponent_C::AddEmitterNode(class UObject* NodeObject, class UFMODEvent* FMODEvent, bool CallFunc_IsDedicatedServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UMultiPointAudioEmitter* CallFunc_AddComponentByClass_ReturnValue, class UMultiPointAudioEmitter* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildingAudioComponent_C", "AddEmitterNode");

	Params::UBP_BuildingAudioComponent_C_AddEmitterNode_Params Parms{};

	Parms.NodeObject = NodeObject;
	Parms.FMODEvent = FMODEvent;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_AddComponentByClass_ReturnValue = CallFunc_AddComponentByClass_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildingAudioComponent.BP_BuildingAudioComponent_C.RemoveFireAudioNode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFlammableInstance*          FlammableInstance                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_BuildingAudioComponent_C::RemoveFireAudioNode(class UFlammableInstance* FlammableInstance, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildingAudioComponent_C", "RemoveFireAudioNode");

	Params::UBP_BuildingAudioComponent_C_RemoveFireAudioNode_Params Parms{};

	Parms.FlammableInstance = FlammableInstance;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildingAudioComponent.BP_BuildingAudioComponent_C.AddFireAudioNode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFlammableInstance*          FlammableInstance                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_BuildingAudioComponent_C::AddFireAudioNode(class UFlammableInstance* FlammableInstance, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildingAudioComponent_C", "AddFireAudioNode");

	Params::UBP_BuildingAudioComponent_C_AddFireAudioNode_Params Parms{};

	Parms.FlammableInstance = FlammableInstance;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildingAudioComponent.BP_BuildingAudioComponent_C.RemoveWeatherAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWeatherAudioComponent*      WeatherAudioComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_BuildingAudioComponent_C::RemoveWeatherAudio(class UWeatherAudioComponent* WeatherAudioComponent, class UFMODEvent* Event, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildingAudioComponent_C", "RemoveWeatherAudio");

	Params::UBP_BuildingAudioComponent_C_RemoveWeatherAudio_Params Parms{};

	Parms.WeatherAudioComponent = WeatherAudioComponent;
	Parms.Event = Event;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildingAudioComponent.BP_BuildingAudioComponent_C.Add Weather Audio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWeatherAudioComponent*      WeatherAudioComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_BuildingAudioComponent_C::Add_Weather_Audio(class UWeatherAudioComponent* WeatherAudioComponent, class UFMODEvent* Event, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildingAudioComponent_C", "Add Weather Audio");

	Params::UBP_BuildingAudioComponent_C_Add_Weather_Audio_Params Parms{};

	Parms.WeatherAudioComponent = WeatherAudioComponent;
	Parms.Event = Event;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


