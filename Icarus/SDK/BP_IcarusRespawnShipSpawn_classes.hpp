#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x318 - 0x2C0)
// BlueprintGeneratedClass BP_IcarusRespawnShipSpawn.BP_IcarusRespawnShipSpawn_C
class ABP_IcarusRespawnShipSpawn_C : public AIcarusActor
{
public:
	class UStaticMeshComponent*                  SM_DS_Podhopper;                                   // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       TempDPPosition;                                    // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Assigned;                                          // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F6B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Group;                                             // 0x2DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                PlayerUID;                                         // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         DebugWithoutBackend;                               // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F76[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CooldownTime;                                      // 0x2F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBiomesRowHandle                      Biome;                                             // 0x2F8(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  LocatorMesh;                                       // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_IcarusRespawnShipSpawn_C* GetDefaultObj();

	void HideEditorLocator(bool CallFunc_IsValid_ReturnValue);
	void ShowEditorLocator(const struct FTransform& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue);
	void UpdateBiomeValue(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FBiomesRowHandle& CallFunc_SampleBiomeAtLocation_ReturnValue);
	void UnassignSpawn();
	void AssignSpawn(const class FString& PlayerID, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}


