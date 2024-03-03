#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x270 - 0x264)
// BlueprintGeneratedClass bloodquestfinishclean.bloodquestfinishclean_C
class Abloodquestfinishclean_C : public AObject_quest_event_parent_C
{
public:
	uint8                                        Pad_633[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x268(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class Abloodquestfinishclean_C* GetDefaultObj();

	void Call_event(class Abp_quest_actor_C* Quest_actor, const struct FS_quest_event& Event_data);
	void ExecuteUbergraph_bloodquestfinishclean(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class Abp_quest_actor_C* K2Node_Event_quest_actor, const struct FS_quest_event& K2Node_Event_event_data, class ANpc_merednew_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ANpc_deadbody_C* CallFunc_GetActorOfClass_ReturnValue_1, TArray<class ANpc_citizenrn_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_IsValid_ReturnValue_1, class ANpc_citizenrn_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class ANpc_watchmanrn_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, int32 CallFunc_Array_Length_ReturnValue_1, class ANpc_watchmanrn_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1);
};

}


