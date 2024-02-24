#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1220 - 0x1218)
// BlueprintGeneratedClass NPC_NeutralIntendant.NPC_NeutralIntendant_C
class ANPC_NeutralIntendant_C : public AGenericQuestNPC_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1218(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ANPC_NeutralIntendant_C* GetDefaultObj();

	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_NPC_NeutralIntendant(int32 EntryPoint, enum class EEndPlayReason K2Node_Event_EndPlayReason);
};

}


