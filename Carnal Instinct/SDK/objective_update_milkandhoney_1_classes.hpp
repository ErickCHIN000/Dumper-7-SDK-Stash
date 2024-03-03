#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x270 - 0x264)
// BlueprintGeneratedClass objective_update_milkandhoney_1.objective_update_milkandhoney_1_C
class AObjective_update_milkandhoney_1_C : public AObject_quest_event_parent_C
{
public:
	uint8                                        Pad_2181[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x268(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AObjective_update_milkandhoney_1_C* GetDefaultObj();

	void Call_event(class Abp_quest_actor_C* Quest_actor, const struct FS_quest_event& Event_data);
	void ExecuteUbergraph_objective_update_milkandhoney_1(int32 EntryPoint, TArray<class ABP_Item_interactable_bush_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class ABP_Item_interactable_bush_C* CallFunc_Array_Get_Item, class UAC_Interactable_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class Abp_quest_actor_C* K2Node_Event_quest_actor, const struct FS_quest_event& K2Node_Event_event_data, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, class Ubp_quest_component_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_get_quest_is_valid, int32 CallFunc_get_quest_found_index, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor);
};

}


