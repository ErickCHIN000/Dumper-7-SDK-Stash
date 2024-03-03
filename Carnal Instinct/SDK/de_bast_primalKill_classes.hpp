#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x278 - 0x26C)
// BlueprintGeneratedClass de_bast_primalKill.de_bast_primalKill_C
class ADe_bast_primalKill_C : public AObject_dlg_event_parent_C
{
public:
	uint8                                        Pad_1C47[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ADe_bast_primalKill_C* GetDefaultObj();

	void Call_event(class Abp_dlg_actor_C* Dlg_actor, const struct FS_dlg_event_info& Event_data);
	void ExecuteUbergraph_de_bast_primalKill(int32 EntryPoint, class Abp_dlg_actor_C* K2Node_Event_dlg_actor, const struct FS_dlg_event_info& K2Node_Event_event_data, class ANpc_stranger_C* CallFunc_GetActorOfClass_ReturnValue, class Abp_bast_corpse_C* CallFunc_GetActorOfClass_ReturnValue_1, class UAC_Interactable_C* CallFunc_GetComponentByClass_ReturnValue, class ABP_Interactable_Boss_Bast_C* CallFunc_GetActorOfClass_ReturnValue_2);
};

}


