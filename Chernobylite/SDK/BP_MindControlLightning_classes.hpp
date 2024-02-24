#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x188 (0x3A8 - 0x220)
// BlueprintGeneratedClass BP_MindControlLightning.BP_MindControlLightning_C
class ABP_MindControlLightning_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                  Sphere;                                            // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int32                                        Branch_Count;                                      // 0x238(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ArcColor;                                          // 0x23C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ArcRadius;                                         // 0x24C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Arc_Spawn_Min;                                     // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Arc_Spawn_Max;                                     // 0x254(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EArcStyle                         StyleSelector;                                     // 0x258(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Movable;                                           // 0x259(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EC4[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PassalongO;                                        // 0x25C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PassalongD;                                        // 0x268(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ArcNoiseScale;                                     // 0x274(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ArcNoiseSpeed;                                     // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EDA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FArcValues                            ArcStruct;                                         // 0x280(0x91)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_EDD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EArcEndpoints                     PointSelector;                                     // 0x318(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EE1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                OriginObject;                                      // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DestinationObject;                                 // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Origin;                                            // 0x330(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Destination;                                       // 0x33C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LifetimeMin;                                       // 0x348(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LifetimeMax;                                       // 0x34C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnablePointLights;                                 // 0x350(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         PointLightShadows;                                 // 0x351(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EF5[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LightAttenuationRadius;                            // 0x354(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ArcRiseOffset;                                     // 0x358(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightIntensity;                                    // 0x35C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightVolumetricScattering;                         // 0x360(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EArcSize                          LightningSelector;                                 // 0x364(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsOn;                                              // 0x365(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                        Pad_F19[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ArcMinimalDistance;                                // 0x368(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bEnableLightsOnLowQuality;                         // 0x36C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bEnableLightsShadowsOnMediumAndLowQuality;         // 0x36D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         SingleStrike;                                      // 0x36E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bUseCustomLightningHitParticles;                   // 0x36F(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UParticleSystem*                       CustomLightningHitParticles;                       // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SpawnLightAtOrigin;                                // 0x378(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F27[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class AActor>                  ArcActorClass;                                     // 0x380(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MindControlLightning_C* GetDefaultObj();

	void Arcing();
	void Set_isOn();
	void Set_isOff();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MindControlLightning(int32 EntryPoint, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, TSubclassOf<class AActor> K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_GetConsoleVariableIntValue_ReturnValue, int32 CallFunc_GetConsoleVariableIntValue_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FArcValues& K2Node_MakeStruct_ArcValues, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, bool CallFunc_K2_TimerExistsHandle_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, TScriptInterface<class IBP_SpawnedArc_Interface_C> K2Node_DynamicCast_AsBP_Spawned_Arc_Interface, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_GetConsoleVariableIntValue_ReturnValue_2, int32 CallFunc_GetConsoleVariableIntValue_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, const struct FArcValues& K2Node_MakeStruct_ArcValues_1);
};

}


