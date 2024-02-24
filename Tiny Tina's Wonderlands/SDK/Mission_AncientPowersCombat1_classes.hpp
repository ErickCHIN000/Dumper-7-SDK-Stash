#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x5B0 - 0x558)
// BlueprintGeneratedClass Mission_AncientPowersCombat1.Mission_AncientPowersCombat1_C
class UMission_AncientPowersCombat1_C : public UBP_OakMission_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x558(0x8)(Transient, DuplicateTransient)
	class UMissionObjectiveSet*                  Set_StartRitual_ObjSetVar;                         // 0x560(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_StartRitual_ObjVar;                            // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_DefeatEnemies_ObjSetVar;                       // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_DefeatEnemies_ObjVar;                          // 0x578(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_TakeSpell_ObjSetVar;                           // 0x580(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_TakeSpell_ObjVar;                              // 0x588(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_StartRitualAdv_ObjVar;                         // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_CompleteRitual_ObjSetVar;                      // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_CompleteRitual_ObjVar;                         // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_DiasSpellComplete_ObjVar;                      // 0x5A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMission_AncientPowersCombat1_C* GetDefaultObj();

	void OnDialogSequenceFinished2_8();
	void OnDialogSequenceFinished2_7();
	void OnDialogSequenceFinished2_6();
	void OnDialogSequenceFinished2_5();
	void Update_StartedRitualArena1(class UObject* Context);
	void Obj_DefeatEnemies(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Set_DefeatEnemies(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Update_DefeatedCombat1Enemies(class UObject* Context);
	void Set_TakeSpell(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_TakeSpell(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Obj_StartRitualAdv(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Advance_StartRitual(class UObject* Context);
	void Obj_StartRitual(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Set_StartRitual(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void MissionKickoff();
	void Set_CompleteRitual(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_CompleteRitual(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Update_CompletedCombat1Ritual(class UObject* Context);
	void Obj_DiasSpellComplete(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Update_Combat1DiasSpell(class UObject* Context);
	void ExecuteUbergraph_Mission_AncientPowersCombat1(int32 EntryPoint, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs, bool CallFunc_FinishSpeakSequenceEx_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue1, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation1, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs1, bool CallFunc_FinishSpeakSequenceEx_ReturnValue1, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue2, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation2, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs2, bool CallFunc_FinishSpeakSequenceEx_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UObject* MissionK2Node_MissionCustomEvent_Context4, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent5, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount5, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents5, bool K2Node_SwitchEnum_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent3, bool CallFunc_MissionRemoteEvent_ReturnValue, class UObject* MissionK2Node_MissionCustomEvent_Context3, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent2, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent4, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount4, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents4, bool K2Node_SwitchEnum1_CmpSuccess, bool CallFunc_MissionRemoteEvent_ReturnValue1, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent3, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount3, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents3, class UObject* MissionK2Node_MissionCustomEvent_Context2, bool K2Node_SwitchEnum2_CmpSuccess, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent2, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount2, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents2, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent1, bool K2Node_SwitchEnum3_CmpSuccess, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue3, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation3, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs3, bool CallFunc_FinishSpeakSequenceEx_ReturnValue3, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent1, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount1, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents1, bool K2Node_SwitchEnum4_CmpSuccess, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue4, class UObject* MissionK2Node_MissionCustomEvent_Context1, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation4, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs4, bool CallFunc_FinishSpeakSequenceEx_ReturnValue4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents, class UObject* MissionK2Node_MissionCustomEvent_Context, bool CallFunc_MissionRemoteEvent_ReturnValue2);
};

}

