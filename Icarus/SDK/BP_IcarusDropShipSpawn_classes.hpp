#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x328 - 0x300)
// BlueprintGeneratedClass BP_IcarusDropShipSpawn.BP_IcarusDropShipSpawn_C
class ABP_IcarusDropShipSpawn_C : public AIcarusRocketSpawnBase
{
public:
	class UStaticMeshComponent*                  SM_DS_Podhopper;                                   // 0x300(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       TempDPPosition;                                    // 0x308(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        Group;                                             // 0x318(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C45[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  LocatorMesh;                                       // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_IcarusDropShipSpawn_C* GetDefaultObj();

	void HideEditorLocator(bool CallFunc_IsValid_ReturnValue);
	void ShowEditorLocator(const struct FTransform& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue);
	int32 GetGroupIndex();
};

}


