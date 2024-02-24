#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x26 (0xE0 - 0xBA)
// BlueprintGeneratedClass BP_CreatureComponent_UI_NPC.BP_CreatureComponent_UI_NPC_C
class UBP_CreatureComponent_UI_NPC_C : public UBP_CreatureComponent_UI_C
{
public:
	uint8                                        Pad_70C9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_Creature_NPC_C*                    NPC;                                               // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_DialogueComponent_C*               DialogComponent;                                   // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                      UIDialogWIdget;                                    // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_CreatureComponent_UI_NPC_C* GetDefaultObj();

	void ClientCreatureComponentUpdate();
	void ClientBeginPlay();
	void ExecuteUbergraph_BP_CreatureComponent_UI_NPC(int32 EntryPoint);
};

}


