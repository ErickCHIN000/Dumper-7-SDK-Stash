#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x5E0 - 0x558)
// BlueprintGeneratedClass Mission_RatQuestPt1.Mission_RatQuestPt1_C
class UMission_RatQuestPt1_C : public UBP_OakMission_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x558(0x8)(Transient, DuplicateTransient)
	class UMissionObjectiveSet*                  Set_KillGoblins_ObjSetVar;                         // 0x560(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_KillGoblins_ObjVar;                            // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_ReturnToAlchemist_ObjSetVar;                   // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_TalkToAlchemist_ObjVar;                        // 0x578(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_GoblinTeethCounter_ObjVar;                     // 0x580(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_KillGoblinsWithTeeth_ObjSetVar;                // 0x588(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_KillAGoblin_ObjVar;                            // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_CollectedGoblinTeeth_ObjVar;                   // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               NewVar_0;                                          // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_ReturnToAlchemistV2_ObjSetVar;                 // 0x5A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_MeetAlma_ObjSetVar;                            // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_MeetAlchemist_ObjVar;                          // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_AlternativeKickoff_ObjSetVar;                  // 0x5C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_AlternativeKickoff_ObjVar;                     // 0x5C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_GiveTeeth_ObjSetVar;                           // 0x5D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_GiveTeeth_ObjVar;                              // 0x5D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMission_RatQuestPt1_C* GetDefaultObj();

	void OnDialogSequenceFinished2_10();
	void OnDialogSequenceFinished2_9();
	void OnDialogSequenceFinished2_8();
	void OnDialogSequenceFinished_4();
	void OnDialogSequenceFinished2_7();
	void OnDialogSequenceFinished2_6();
	void OnDialogSequenceFinished_3();
	void Obj_GoblinTeethCounter(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Count_GoblinTeeth(class UObject* Context);
	void _Obj_KillGoblins_Objective__PROXY();
	void Set_KillGoblinsWithTeeth(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_KillAGoblin(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void _Obj_GoblinTeethCounter_Objective__PROXY_0();
	void Obj_CollectedGoblinTeeth(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void _Obj_CollectedGoblinTeeth_Objective__PROXY_1();
	void Update_TalkedToAlchemist(class UObject* Context);
	void Set_ReturnToAlchemistV2(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_TalkToAlchemist_Objective__PROXY_2();
	void Set_ReturnToAlchemist(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_MeetAlchemist(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Update_MetAlma(class UObject* Context);
	void Set_MeetAlma(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_AlternativeKickoff(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Set_AlternativeKickoff(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void MCE_AlternativeKickoff(class UObject* Context);
	void Obj_TalkToAlchemist(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Update_KilledGoblins(class UObject* Context);
	void Obj_KillGoblins(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Set_KillGoblins(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_GiveTeeth(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_GiveTeeth(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Update_GaveTeeth(class UObject* Context);
	void ExecuteUbergraph_Mission_RatQuestPt1(int32 EntryPoint, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs, bool CallFunc_FinishSpeakSequenceEx_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue1, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation1, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs1, bool CallFunc_FinishSpeakSequenceEx_ReturnValue1, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue2, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation2, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs2, bool CallFunc_FinishSpeakSequenceEx_ReturnValue2, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue3, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation3, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs3, bool CallFunc_FinishSpeakSequenceEx_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, enum class EMissionObjectiveStatus CallFunc_GetMissionObjectiveStatusRef_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_MissionRemoteEvent_ReturnValue, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent7, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount7, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents7, class UObject* MissionK2Node_MissionCustomEvent_Context5, bool K2Node_SwitchEnum1_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent6, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent6, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount6, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents6, bool K2Node_SwitchEnum2_CmpSuccess, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue4, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent5, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount5, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents5, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation4, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs4, bool CallFunc_FinishSpeakSequenceEx_ReturnValue4, class UObject* MissionK2Node_MissionCustomEvent_Context4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, bool CallFunc_MissionRemoteEvent_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, enum class EMissionObjectiveStatus CallFunc_GetMissionObjectiveStatusRef_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, bool K2Node_SwitchEnum3_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent5, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent4, bool CallFunc_MissionRemoteEvent_ReturnValue2, bool CallFunc_MissionRemoteEvent_ReturnValue3, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent4, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount4, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents4, class UObject* MissionK2Node_MissionCustomEvent_Context3, bool K2Node_SwitchEnum4_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent3, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent3, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount3, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents3, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent2, bool K2Node_SwitchEnum5_CmpSuccess, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue5, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue6, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation5, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs5, bool CallFunc_FinishSpeakSequenceEx_ReturnValue5, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation6, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs6, bool CallFunc_FinishSpeakSequenceEx_ReturnValue6, class UObject* MissionK2Node_MissionCustomEvent_Context2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent2, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount2, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents2, bool K2Node_SwitchEnum6_CmpSuccess, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue7, class UObject* MissionK2Node_MissionCustomEvent_Context1, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation7, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs7, bool CallFunc_FinishSpeakSequenceEx_ReturnValue7, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent1, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount1, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents1, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent1, bool K2Node_SwitchEnum7_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents, class UObject* MissionK2Node_MissionCustomEvent_Context, bool K2Node_SwitchEnum8_CmpSuccess, bool CallFunc_MissionRemoteEvent_ReturnValue4, bool CallFunc_MissionRemoteEvent_ReturnValue5, bool CallFunc_MissionRemoteEvent_ReturnValue6, enum class EMissionObjectiveStatus CallFunc_GetMissionObjectiveStatusRef_ReturnValue2, bool K2Node_SwitchEnum9_CmpSuccess);
};

}


