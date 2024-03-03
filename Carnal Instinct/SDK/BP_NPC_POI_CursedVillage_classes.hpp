#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x468 - 0x458)
// BlueprintGeneratedClass BP_NPC_POI_CursedVillage.BP_NPC_POI_CursedVillage_C
class ABP_NPC_POI_CursedVillage_C : public ABP_NPC_POI_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x458(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAC_Interactable_C*                    AC_Interactable;                                   // 0x460(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_NPC_POI_CursedVillage_C* GetDefaultObj();

	void Interaction();
	void End_Interaction();
	void Initialize();
	void Remove_Interaction();
	void Game_Load();
	void EnableSpawn_();
	void ExecuteUbergraph_BP_NPC_POI_CursedVillage(int32 EntryPoint, bool CallFunc_EqualEqual_IntInt_ReturnValue);
};

}


