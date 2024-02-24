#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x220 - 0x1F8)
// BlueprintGeneratedClass BP_CaveEntranceComponent.BP_CaveEntranceComponent_C
class UBP_CaveEntranceComponent_C : public USceneComponent
{
public:
	uint8                                        Pad_2143[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x200(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCurveFloat*                           DistanceCurve;                                     // 0x208(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                   Audio;                                             // 0x210(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           DistanceCurve_Entrance;                            // 0x218(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_CaveEntranceComponent_C* GetDefaultObj();

	void GetEntranceDepthForAtmos(const struct FVector& Location, float* EntranceDepth, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_InverseTransformDirection_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_GetFloatValue_ReturnValue);
	void ToggleAudio(bool ShouldPlay, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FBiomesRowHandle& CallFunc_SampleBiomeAtLocation_ReturnValue, const struct FIcarusBiome& CallFunc_GetBiomesStruct_Biomes, enum class EValid CallFunc_GetBiomesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FBiomeAudioData& CallFunc_GetBiomeAudioDataStruct_BiomeAudioData, enum class EValid CallFunc_GetBiomeAudioDataStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UFMODEvent* K2Node_DynamicCast_AsFMODEvent, bool K2Node_DynamicCast_bSuccess);
	void GetSpelunkingDepth(const struct FVector& Location, float* Depth, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_InverseTransformDirection_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_GetFloatValue_ReturnValue);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_CaveEntranceComponent(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UFMODAudioComponent* CallFunc_AddComponentByClass_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue);
};

}


