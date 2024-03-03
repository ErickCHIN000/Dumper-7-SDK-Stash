#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x280 - 0x278)
// BlueprintGeneratedClass de_update_condemn.de_update_condemn_C
class ADe_update_condemn_C : public AObject_dlg_event_child_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ADe_update_condemn_C* GetDefaultObj();

	void Call_event(class Abp_dlg_actor_C* Dlg_actor, const struct FS_dlg_event_info& Event_data);
	void ExecuteUbergraph_de_update_condemn(int32 EntryPoint, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, class UAC_Interactable_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class Abp_dlg_actor_C* K2Node_Event_dlg_actor, const struct FS_dlg_event_info& K2Node_Event_event_data, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, int32 Temp_int_Loop_Counter_Variable, class Ubp_quest_component_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_get_quest_is_valid, int32 CallFunc_get_quest_found_index, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ANpc_guard3_C* CallFunc_GetActorOfClass_ReturnValue, class ANpc_merednew_C* CallFunc_GetActorOfClass_ReturnValue_1, bool CallFunc_dlg_get_dlg_component_is_valid, class Ubp_dlg_component_C* CallFunc_dlg_get_dlg_component_dlg_reference, bool CallFunc_get_dlg_is_valid, int32 CallFunc_get_dlg_found_index, class Abp_dlg_actor_C* CallFunc_get_dlg_dlg_actor, bool CallFunc_IsValid_ReturnValue_1, class UWB_Fade_C* CallFunc_Create_ReturnValue);
};

}


