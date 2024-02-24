#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x258 - 0x1F8)
// BlueprintGeneratedClass BP_BuildingAudioComponent.BP_BuildingAudioComponent_C
class UBP_BuildingAudioComponent_C : public USceneComponent
{
public:
	uint8                                        Pad_34F9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class UFMODEvent*, class UMultiPointAudioEmitter*> Emitters;                                          // 0x200(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UFMODEvent*                            FireAudioEvent;                                    // 0x250(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_BuildingAudioComponent_C* GetDefaultObj();

	void GetFireAudioData(bool* HasFireAudio, float* Weighting, struct FVector* Location, class UMultiPointAudioEmitter* Emitter, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_GetTotalWeighting_ReturnValue, class UMultiPointAudioEmitter* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void RemoveUnzipAudioNode(class USceneComponent* TargetComponent, class UFMODEvent* FMODEvent, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void AddUnzipAudioNode(class USceneComponent* TargetComponent, class UFMODEvent* FMODEvent, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void RemoveEmitterNode(class UObject* NodeObject, class UFMODEvent* FMODEvent, class UMultiPointAudioEmitter* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void AddEmitterNode(class UObject* NodeObject, class UFMODEvent* FMODEvent, bool CallFunc_IsDedicatedServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UMultiPointAudioEmitter* CallFunc_AddComponentByClass_ReturnValue, class UMultiPointAudioEmitter* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue);
	void RemoveFireAudioNode(class UFlammableInstance* FlammableInstance, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void AddFireAudioNode(class UFlammableInstance* FlammableInstance, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void RemoveWeatherAudio(class UWeatherAudioComponent* WeatherAudioComponent, class UFMODEvent* Event, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void Add_Weather_Audio(class UWeatherAudioComponent* WeatherAudioComponent, class UFMODEvent* Event, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


