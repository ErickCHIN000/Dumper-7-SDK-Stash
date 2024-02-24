#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x228 - 0x220)
// BlueprintGeneratedClass A_Hydra_Despawn.A_Hydra_Despawn_C
class UA_Hydra_Despawn_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UA_Hydra_Despawn_C* GetDefaultObj();

	void OnServerEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void Notify_DespawnHydra();
	void ExecuteUbergraph_A_Hydra_Despawn(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor, class AActor* CallFunc_K2_GetActor_ReturnValue, TScriptInterface<class IBPI_SpellActor_Hydra_C> K2Node_DynamicCast_AsBPI_Spell_Actor_Hydra, bool K2Node_DynamicCast_bSuccess);
};

}


