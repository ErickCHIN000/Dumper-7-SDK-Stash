#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x150 - 0x148)
// BlueprintGeneratedClass BP_CE_Necromancer_EnemyHighlight.BP_CE_Necromancer_EnemyHighlight_C
class UBP_CE_Necromancer_EnemyHighlight_C : public UOakAction_CoordinatedEffect
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x148(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_CE_Necromancer_EnemyHighlight_C* GetDefaultObj();

	void OnServerBegin(class AActor* Actor);
	void OnServerEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void ExecuteUbergraph_BP_CE_Necromancer_EnemyHighlight(int32 EntryPoint, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor, class AActor* K2Node_Event_Actor1);
};

}


