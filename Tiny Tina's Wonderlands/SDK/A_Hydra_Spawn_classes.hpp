#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x228 - 0x220)
// BlueprintGeneratedClass A_Hydra_Spawn.A_Hydra_Spawn_C
class UA_Hydra_Spawn_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UA_Hydra_Spawn_C* GetDefaultObj();

	void OnServerEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void AN_SetBlackboardSpawn();
	void ExecuteUbergraph_A_Hydra_Spawn(int32 EntryPoint, class AActor* CallFunc_K2_GetActor_ReturnValue, class AController* CallFunc_GetAssociatedController_ReturnValue, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor, TScriptInterface<class IBPI_SpellActor_Hydra_C> K2Node_DynamicCast_AsBPI_Spell_Actor_Hydra, bool K2Node_DynamicCast_bSuccess);
};

}


