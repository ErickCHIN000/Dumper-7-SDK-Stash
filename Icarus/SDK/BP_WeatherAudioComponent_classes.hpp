#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C (0x23C - 0x200)
// BlueprintGeneratedClass BP_WeatherAudioComponent.BP_WeatherAudioComponent_C
class UBP_WeatherAudioComponent_C : public UWeatherAudioComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x200(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AIcarusActor*                          IcarusActor;                                       // 0x208(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WeatherAudioActive;                                // 0x210(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F42[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODAudioComponent*                   AudioComponent;                                    // 0x218(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WeatherExposureUpdateFrequency;                    // 0x220(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F4C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          WeatherExposureTimerHandle;                        // 0x228(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            ItemFMODEvent;                                     // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Exposure;                                          // 0x238(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_WeatherAudioComponent_C* GetDefaultObj();

	void GetBiome(struct FBiomesRowHandle* Biome, bool CallFunc_IsValid_ReturnValue);
	void SubscribeToWeatherUpdates(const struct FBiomesRowHandle& Biome, class UWeatherAudioSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void CheckExposure(float* Exposure);
	void SetPointSourceExposureParameter(bool CallFunc_IsValid_ReturnValue);
	void StopPointSourceAudio(bool CallFunc_IsValid_ReturnValue);
	void StopExposureTimer();
	void StartExposureTimer(bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void PlayPointSourceAudio(const struct FVector& CallFunc_Vector_Up_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void StopWeatherAudio();
	void StartWeatherAudio();
	void UpdateWeatherExposure(int32 Hits, float CallFunc_CheckExposure_Exposure);
	void ReceiveBeginPlay();
	void UpdateWeatherAudio(bool bWeatherActive);
	void OnBiomeUpdated();
	void ExecuteUbergraph_BP_WeatherAudioComponent(int32 EntryPoint, class AIcarusItem* K2Node_DynamicCast_AsIcarus_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FItemStaticData& CallFunc_GetStaticItemData_StaticData, enum class EDataValid CallFunc_GetStaticItemData_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemAudioData& CallFunc_GetItemAudioDataStruct_ItemAudioData, enum class EValid CallFunc_GetItemAudioDataStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UFMODEvent* K2Node_DynamicCast_AsFMODEvent, bool K2Node_DynamicCast_bSuccess_1, class AIcarusActor* K2Node_DynamicCast_AsIcarus_Actor, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool K2Node_Event_bWeatherActive, bool CallFunc_NotEqual_BoolBool_ReturnValue, const struct FBiomesRowHandle& CallFunc_GetBiome_Biome, bool CallFunc_IsRowHandleValid_ReturnValue, const struct FBiomesRowHandle& CallFunc_GetBiome_Biome_1);
};

}


