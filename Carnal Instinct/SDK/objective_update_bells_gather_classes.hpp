#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x270 - 0x264)
// BlueprintGeneratedClass objective_update_bells_gather.objective_update_bells_gather_C
class AObjective_update_bells_gather_C : public AObject_quest_event_parent_C
{
public:
	uint8                                        Pad_2103[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x268(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AObjective_update_bells_gather_C* GetDefaultObj();

	void Call_event(class Abp_quest_actor_C* Quest_actor, const struct FS_quest_event& Event_data);
	void ExecuteUbergraph_objective_update_bells_gather(int32 EntryPoint, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, bool CallFunc_IsValid_ReturnValue, class Ubp_quest_component_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_get_quest_is_valid, int32 CallFunc_get_quest_found_index, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor, class Abp_quest_actor_C* K2Node_Event_quest_actor, const struct FS_quest_event& K2Node_Event_event_data);
};

}


