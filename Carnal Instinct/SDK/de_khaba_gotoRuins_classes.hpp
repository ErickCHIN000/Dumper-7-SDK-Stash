#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x280 - 0x278)
// BlueprintGeneratedClass de_khaba_gotoRuins.de_khaba_gotoRuins_C
class ADe_khaba_gotoRuins_C : public AObject_dlg_event_child_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ADe_khaba_gotoRuins_C* GetDefaultObj();

	void Call_event(class Abp_dlg_actor_C* Dlg_actor, const struct FS_dlg_event_info& Event_data);
	void ExecuteUbergraph_de_khaba_gotoRuins(int32 EntryPoint, class Abp_void_relic_marker_C* CallFunc_GetActorOfClass_ReturnValue, int32 Temp_int_Array_Index_Variable, class Abp_dlg_actor_C* K2Node_Event_dlg_actor, const struct FS_dlg_event_info& K2Node_Event_event_data, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_get_quest_is_valid, int32 CallFunc_get_quest_found_index, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TArray<class ABP_Puzzle_Void_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UAC_Interactable_C* CallFunc_GetComponentByClass_ReturnValue);
};

}


