#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_NPC_Interaction.BPI_NPC_Interaction_C
class IBPI_NPC_Interaction_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_NPC_Interaction_C* GetDefaultObj();

	void FnAddRemoveDialogue(bool Add_Dialogue, const struct FStruct_NPC_DialogueIntroOutro& GreetingsGoodbyes, TArray<struct FStruct_NPC_AllowedDialogue>& Dialogue);
	void FnSetAllowedDialogue(const struct FStruct_NPC_DialogueIntroOutro& GreetingsGoodbyes, TArray<struct FStruct_NPC_AllowedDialogue>& New_Allowed_Dialogue);
	void FnStartListening();
	void FnNextLine(class AActor* Actor_Reference, enum class Enum_NPC_Dialogue_State Dialogue_State, enum class Enum_DialogueType Dialogue_Type, const struct FStruct_DT_NPC_Dialogue& Current_Line);
	void FnConfirmInteraction(class AActor* Actor_Reference, const struct FStruct_DT_NPC_Dialogue& Selected_Line, const struct FStruct_NPC_DialogueIntroOutro& Intro_and_Outro, TArray<struct FStruct_NPC_AllowedDialogue>& Allowed_Dialogue);
	void FnInitInteraction(class AActor* Actor_Reference);
	void FnInteract(class AActor* Actor_Reference);
};

}


