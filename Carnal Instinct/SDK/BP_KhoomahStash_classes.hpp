#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x280 - 0x258)
// BlueprintGeneratedClass BP_KhoomahStash.BP_KhoomahStash_C
class ABP_KhoomahStash_C : public ABP_BASE_INTERACTABLE_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  KhoomahJarLowIngame2;                              // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  KhoomahJarLowIngame1;                              // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  KhoomahJarLowIngame;                               // 0x270(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class Ubp_msl_identifier_component_C*        bp_msl_identifier_component;                       // 0x278(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_KhoomahStash_C* GetDefaultObj();

	void End_Interaction();
	void ExecuteUbergraph_BP_KhoomahStash(int32 EntryPoint, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, bool CallFunc_IsValid_ReturnValue, bool CallFunc_get_quest_is_valid, int32 CallFunc_get_quest_found_index, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor, bool CallFunc_get_sub_objective_Successful, bool CallFunc_add_sub_objective_Successful);
};

}


