#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x5B8 - 0x558)
// BlueprintGeneratedClass Mission_OW_FumblingAround.Mission_OW_FumblingAround_C
class UMission_OW_FumblingAround_C : public UBP_OakMission_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x558(0x8)(Transient, DuplicateTransient)
	class UMissionObjectiveSet*                  Set_ReachGrottoOfDespair_ObjSetVar;                // 0x560(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_ReachGrottoOfDespair_ObjVar;                   // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_KillEnemies_ObjSetVar;                         // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_KillEnemies_ObjVar;                            // 0x578(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_PickupBlueprint_ObjSetVar;                     // 0x580(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_PickupBlueprint_ObjVar;                        // 0x588(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_TalkToBuilder_ObjSetVar;                       // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_TalkToBuilder_ObjVar;                          // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_BridgeBuilt_INV_ObjVar;                        // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_EnterRoom2_INV_ObjVar;                         // 0x5A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_EnterRoom3_INV_ObjVar;                         // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMission_OW_FumblingAround_C* GetDefaultObj();

	void OnDialogSequenceFinished_6();
	void OnDialogSequenceFinished_5();
	void OnDialogSequenceFinished_4();
	void Obj_ReachGrottoOfDespair(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void MCE_ReachGrottoOfDespair(class UObject* Context);
	void MissionKickoff();
	void MCE_KillEnemies(class UObject* Context);
	void Obj_PickupBlueprint(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Set_PickupBlueprint(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_KillEnemies(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void MCE_PickupBlueprint(class UObject* Context);
	void Obj_KillEnemies(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Obj_TalkToBuilder(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Set_TalkToBuilder(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_ReachGrottoOfDespair(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void MCE_TalkToBuilder(class UObject* Context);
	void Obj_BridgeBuilt_INV(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void MCE_BridgeBuilt(class UObject* Context);
	void MCE_EnterRoom2_INV(class UObject* Context);
	void Obj_EnterRoom2_INV(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void MCE_EnterRoom3_INV(class UObject* Context);
	void Obj_EnterRoom3_INV(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void ExecuteUbergraph_Mission_OW_FumblingAround(int32 EntryPoint, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs, bool CallFunc_FinishSpeakSequenceEx_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue1, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue2, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation1, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs1, bool CallFunc_FinishSpeakSequenceEx_ReturnValue1, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation2, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs2, bool CallFunc_FinishSpeakSequenceEx_ReturnValue2, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue3, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation3, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs3, bool CallFunc_FinishSpeakSequenceEx_ReturnValue3, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue4, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation4, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs4, bool CallFunc_FinishSpeakSequenceEx_ReturnValue4, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue5, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation5, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs5, bool CallFunc_FinishSpeakSequenceEx_ReturnValue5, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue6, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation6, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs6, bool CallFunc_FinishSpeakSequenceEx_ReturnValue6, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue7, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation7, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs7, bool CallFunc_FinishSpeakSequenceEx_ReturnValue7, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent6, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount6, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents6, bool K2Node_SwitchEnum_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context6, class UObject* MissionK2Node_MissionCustomEvent_Context5, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent5, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount5, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents5, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent3, bool K2Node_SwitchEnum1_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent2, class UObject* MissionK2Node_MissionCustomEvent_Context4, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent4, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount4, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents4, bool K2Node_SwitchEnum2_CmpSuccess, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent3, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount3, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents3, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent1, bool K2Node_SwitchEnum3_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent, class UObject* MissionK2Node_MissionCustomEvent_Context3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent2, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount2, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents2, bool K2Node_SwitchEnum4_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UObject* MissionK2Node_MissionCustomEvent_Context1, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent1, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount1, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents1, class UObject* MissionK2Node_MissionCustomEvent_Context, bool K2Node_SwitchEnum5_CmpSuccess, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents, bool K2Node_SwitchEnum6_CmpSuccess);
};

}


