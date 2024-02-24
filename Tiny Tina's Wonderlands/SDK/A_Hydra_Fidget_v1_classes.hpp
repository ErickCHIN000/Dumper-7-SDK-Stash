#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x228 - 0x220)
// BlueprintGeneratedClass A_Hydra_Fidget_v1.A_Hydra_Fidget_v1_C
class UA_Hydra_Fidget_v1_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UA_Hydra_Fidget_v1_C* GetDefaultObj();

	void HydraSpawnAmmo(enum class EHydraHeads Head);
	void AN_SpawnAmmo();
	void ExecuteUbergraph_A_Hydra_Fidget_v1(int32 EntryPoint, class AActor* CallFunc_K2_GetActor_ReturnValue, class FName Temp_name_Variable, TScriptInterface<class IBPI_SpellActor_Hydra_C> K2Node_DynamicCast_AsBPI_Spell_Actor_Hydra, bool K2Node_DynamicCast_bSuccess, class FName Temp_name_Variable1, class FName Temp_name_Variable2, class FName Temp_name_Variable3, enum class EHydraHeads K2Node_CustomEvent_Head, class AActor* CallFunc_K2_GetActor_ReturnValue1, enum class EHydraHeads Temp_byte_Variable, class FName K2Node_Select_Default, const struct FSpawnDroppedPickupLootRequest& K2Node_MakeStruct_SpawnDroppedPickupLootRequest, int32 CallFunc_SpawnLootAsync_ReturnValue);
};

}


