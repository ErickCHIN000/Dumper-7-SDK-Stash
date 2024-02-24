#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA (0xC2 - 0xB8)
// BlueprintGeneratedClass AIA_Creature_NPCFreelance.AIA_Creature_NPCFreelance_C
class UAIA_Creature_NPCFreelance_C : public UAIA_Creature_Ambient_C
{
public:
	class AAIC_Creature_NPC_Villager_C*          NPCController;                                     // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         RequirePathfindingToTarget;                        // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_DaytimeSwitch                DaytimeAvailability;                               // 0xC1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIA_Creature_NPCFreelance_C* GetDefaultObj();

	void Get_NPCGroup(class ABP_CreatureSpawner_NPCGroup_C** NPCGroup, class ABP_CreatureSpawner_NPCGroup_C* K2Node_DynamicCast_AsBP_Creature_Spawner_NPCGroup, bool K2Node_DynamicCast_bSuccess);
	float GetNormalizedRunPriority(class AActor* Target, float CallFunc_GetNormalizedScore_ReturnValue);
	bool Initialize(bool CallFunc_Initialize_ReturnValue, class AAIController* CallFunc_GetOwnerAIController_ReturnValue, class AAIC_Creature_NPC_Villager_C* K2Node_DynamicCast_AsAIC_Creature_NPC_Villager, bool K2Node_DynamicCast_bSuccess);
	bool CheckStaticTargetRequirements(class AActor* Target, class APawn* CallFunc_GetOwnerPawn_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue);
	bool CheckOwnerRequirements(bool CallFunc_CheckOwnerRequirements_ReturnValue, TScriptInterface<class IBPI_NPCInterfaces_C> K2Node_DynamicCast_AsBPI_NPCInterfaces, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_NPCContract_C> CallFunc_GetNPCContractInterface_Interface, class APawn* CallFunc_GetEmployerPawn_EmployerPawn, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
};

}


