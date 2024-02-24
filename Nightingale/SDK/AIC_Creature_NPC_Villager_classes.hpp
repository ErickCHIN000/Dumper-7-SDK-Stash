#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x728 - 0x670)
// BlueprintGeneratedClass AIC_Creature_NPC_Villager.AIC_Creature_NPC_Villager_C
class AAIC_Creature_NPC_Villager_C : public AAIC_Creature_NPC_C
{
public:
	class ABP_ResourceNodeIIMBase_C*             HarvestResourceNode;                               // 0x670(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E9F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            HarvestResourceTransform;                          // 0x680(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        HarvestResourceIndex;                              // 0x6E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EA4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXActor*                             GhostStructureActor;                               // 0x6E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               EncounterPortalLocation;                           // 0x6F0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               EncounterVillageLocation;                          // 0x708(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       PlayerBoundRange;                                  // 0x720(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAIC_Creature_NPC_Villager_C* GetDefaultObj();

	void GetPortalLocation(bool* IsValid, struct FVector* EncounterVillageLocation, bool CallFunc_Vector_IsNearlyZero_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void GetVillageLocation(bool* IsValid, struct FVector* EncounterVillageLocation, bool CallFunc_Vector_IsNearlyZero_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void SetPortalLocation(const struct FVector& Location);
	void SetVillageLocation(const struct FVector& Location);
};

}


