#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x188 (0x6F8 - 0x570)
// BlueprintGeneratedClass Mission_PLC1.Mission_PLC1_C
class UMission_PLC1_C : public UMission_SideTemplate_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x570(0x8)(Transient, DuplicateTransient)
	class UMissionObjectiveSet*                  Set_FreetheDemiGod_ObjSetVar;                      // 0x578(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_EnterTemple_ObjVar;                            // 0x580(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_EnterTheTemple_ObjSetVar;                      // 0x588(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_ReleaseTheDemiGod_ObjVar;                      // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_ReachThePortal_ObjSetVar;                      // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_ReachThePortal_ObjVar;                         // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_EnterShark_01_ObjSetVar;                       // 0x5A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_EnterShark_01_ObjVar;                          // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_ColumnAlign_ObjSetVar;                         // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_ColumnAlign_ObjVar;                            // 0x5C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_EnterShark01Portal_ObjSetVar;                  // 0x5C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_EnterShark01Portal_ObjVar;                     // 0x5D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_EnterShark02_ObjSetVar;                        // 0x5D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_EnterShark02_ObjVar;                           // 0x5E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_ValvePuzzle_ObjSetVar;                         // 0x5E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_ValvePuzzle_ObjVar;                            // 0x5F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_ExitShark02_ObjSetVar;                         // 0x5F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_ExitShark02_ObjVar;                            // 0x600(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_EnterShark03_ObjSetVar;                        // 0x608(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_EnterShark03_ObjVar;                           // 0x610(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_SurviveTime_ObjSetVar;                         // 0x618(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_SurviveTime_ObjVar;                            // 0x620(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_EnterShark04_ObjSetVar;                        // 0x628(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_EnterShark04_ObjVar;                           // 0x630(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_EscapeTheWater_ObjSetVar;                      // 0x638(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_EscapeTheWater_ObjVar;                         // 0x640(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_CrossPit_ObjSetVar;                            // 0x648(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_CrossPit_ObjVar;                               // 0x650(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_EnterBoss_ObjSetVar;                           // 0x658(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_EnterBoss_ObjVar;                              // 0x660(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_KillChum_ObjSetVar;                            // 0x668(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_KillChums_ObjVar;                              // 0x670(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  SET_ReturnToHub_ObjSetVar;                         // 0x678(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     OBJ_ReturnToHub_ObjVar;                            // 0x680(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_ExitShark03_ObjSetVar;                         // 0x688(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_ExitShark03_ObjVar;                            // 0x690(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_ExitShark04_ObjSetVar;                         // 0x698(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_ExitShark04_ObjVar;                            // 0x6A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_TurnValves_ObjSetVar;                          // 0x6A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_TurnValves_ObjVar;                             // 0x6B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_LowerColumns_ObjSetVar;                        // 0x6B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_LowerColumns_ObjVar;                           // 0x6C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_BreakSeal_ObjSetVar;                           // 0x6C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_BreakSeal_ObjVar;                              // 0x6D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_KillBadass_ObjSetVar;                          // 0x6D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_KillBadass_ObjVar;                             // 0x6E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_ClearGuards_ObjSetVar;                         // 0x6E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_ClearGuards_ObjVar;                            // 0x6F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMission_PLC1_C* GetDefaultObj();

	void UPDATE_EnterShark_01(class UObject* Context);
	void Set_ColumnAlign(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_ReleaseTheDemiGod_Objective__PROXY_2();
	void Obj_ColumnAlign(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Obj_EnterShark_01(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void UPDATE_ColumnAlign(class UObject* Context);
	void Set_EnterShark01Portal(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_ReleaseTheDemiGod_Objective__PROXY_3();
	void Obj_EnterShark01Portal(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void _Obj_ReleaseTheDemiGod_Objective__PROXY_1();
	void Set_EnterShark_01(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void UPDATE_ReachThePortal(class UObject* Context);
	void UPDATE_EnterShark01Portal(class UObject* Context);
	void Set_EnterShark02(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_ReleaseTheDemiGod_Objective__PROXY_4();
	void Obj_EnterShark02(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void UPDATE_EnterShark02(class UObject* Context);
	void Set_ValvePuzzle(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_ReleaseTheDemiGod_Objective__PROXY_5();
	void Obj_ValvePuzzle(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void UPDATE_ValvePuzzle(class UObject* Context);
	void Set_ExitShark02(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_ExitShark02(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void _Obj_ReleaseTheDemiGod_Objective__PROXY_6();
	void _Obj_ReleaseTheDemiGod_Objective__PROXY_0();
	void Set_EnterShark03(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_EnterShark03(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void _Obj_ReleaseTheDemiGod_Objective__PROXY_7();
	void Obj_ReachThePortal(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void UPDATE_EnterShark03(class UObject* Context);
	void Set_SurviveTime(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_SurviveTime(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void _Obj_ReleaseTheDemiGod_Objective__PROXY_8();
	void Set_ReachThePortal(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_EnterTheTemple(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void UPDATE_SurviveTime(class UObject* Context);
	void UPDATE_ExitShark02(class UObject* Context);
	void Set_EnterShark04(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_ReleaseTheDemiGod_Objective__PROXY_9();
	void UPDATE_EnterShark04(class UObject* Context);
	void Obj_EnterShark04(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Obj_ReleaseTheDemiGod(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Set_EscapeTheWater(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_EscapeTheWater(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void _Obj_ReleaseTheDemiGod_Objective__PROXY_10();
	void _Obj_ReleaseTheDemiGod_Objective__PROXY();
	void Update_EnterTemple(class UObject* Context);
	void UPDATE_EscapeTheWater(class UObject* Context);
	void Obj_CrossPit(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void UPDATE_CrossPit(class UObject* Context);
	void _Obj_ReleaseTheDemiGod_Objective__PROXY_11();
	void Set_CrossPit(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_KillChum(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_EnterBoss(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_ReleaseTheDemiGod_Objective__PROXY_12();
	void Obj_EnterBoss(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void UPDATE_EnterBoss(class UObject* Context);
	void UPDATE_KillChums(class UObject* Context);
	void Obj_KillChums(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void SET_ReturnToHub(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void OBJ_ReturnToHub(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void UPDATE_ReturnToHub(class UObject* Context);
	void Set_ExitShark03(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_ReleaseTheDemiGod_Objective__PROXY_13();
	void Obj_ExitShark03(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void UPDATE_ExitShark03(class UObject* Context);
	void Set_ExitShark04(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_ReleaseTheDemiGod_Objective__PROXY_14();
	void Obj_ExitShark04(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void UPDATE_ExitShark04(class UObject* Context);
	void Set_TurnValves(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_ReleaseTheDemiGod_Objective__PROXY_15();
	void Obj_TurnValves(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void UPDATE_TurnValves(class UObject* Context);
	void Set_LowerColumns(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_LowerColumns(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void _Obj_ReleaseTheDemiGod_Objective__PROXY_16();
	void UPDATE_LowerColumns(class UObject* Context);
	void Obj_EnterTemple(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Set_FreetheDemiGod(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_BreakSeal(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_BreakSeal(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void _Obj_ReleaseTheDemiGod_Objective__PROXY_17();
	void UPDATE_BreakSeal(class UObject* Context);
	void Set_KillBadass(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_KillBadass(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void _Obj_ReleaseTheDemiGod_Objective__PROXY_18();
	void UPDATE_KillBadass(class UObject* Context);
	void Set_ClearGuards(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_ClearGuards(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void _Obj_ReleaseTheDemiGod_Objective__PROXY_19();
	void UPDATE_ClearGuards(class UObject* Context);
	void MissionKickoff();
	void MissionActiveLoad();
	void MissionCompleteLoad();
	void ExecuteUbergraph_Mission_PLC1(int32 EntryPoint, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs, bool CallFunc_FinishSpeakSequenceEx_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue1, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation1, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs1, bool CallFunc_FinishSpeakSequenceEx_ReturnValue1, class UObject* MissionK2Node_MissionCustomEvent_Context22, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent23, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent23, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount23, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents23, bool K2Node_SwitchEnum_CmpSuccess, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent22, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount22, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents22, class UObject* MissionK2Node_MissionCustomEvent_Context21, bool K2Node_SwitchEnum1_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent22, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent21, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount21, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents21, bool K2Node_SwitchEnum2_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent21, class UObject* MissionK2Node_MissionCustomEvent_Context20, class UObject* MissionK2Node_MissionCustomEvent_Context19, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent20, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent20, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount20, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents20, bool K2Node_SwitchEnum3_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context18, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent19, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent19, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount19, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents19, class UObject* MissionK2Node_MissionCustomEvent_Context17, bool K2Node_SwitchEnum4_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent18, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent18, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount18, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents18, bool K2Node_SwitchEnum5_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent17, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent17, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount17, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents17, bool K2Node_SwitchEnum6_CmpSuccess, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent16, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount16, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents16, class UObject* MissionK2Node_MissionCustomEvent_Context16, bool K2Node_SwitchEnum7_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent16, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent15, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount15, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents15, bool K2Node_SwitchEnum8_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent15, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent14, class UObject* MissionK2Node_MissionCustomEvent_Context15, class UObject* MissionK2Node_MissionCustomEvent_Context14, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent13, class UObject* MissionK2Node_MissionCustomEvent_Context13, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent14, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount14, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents14, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent13, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount13, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents13, bool K2Node_SwitchEnum9_CmpSuccess, bool K2Node_SwitchEnum10_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent12, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent12, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount12, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents12, bool K2Node_SwitchEnum11_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context12, class UObject* MissionK2Node_MissionCustomEvent_Context11, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent11, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount11, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents11, class UObject* MissionK2Node_MissionCustomEvent_Context10, bool K2Node_SwitchEnum12_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent11, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent10, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent9, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent10, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount10, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents10, class UObject* MissionK2Node_MissionCustomEvent_Context9, bool K2Node_SwitchEnum13_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context8, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent9, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount9, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents9, bool K2Node_SwitchEnum14_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent8, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent8, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount8, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents8, class UObject* MissionK2Node_MissionCustomEvent_Context7, bool K2Node_SwitchEnum15_CmpSuccess, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue2, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation2, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs2, bool CallFunc_FinishSpeakSequenceEx_ReturnValue2, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue3, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation3, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs3, bool CallFunc_FinishSpeakSequenceEx_ReturnValue3, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent7, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent7, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount7, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents7, bool K2Node_SwitchEnum16_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context6, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent6, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent6, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount6, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents6, bool K2Node_SwitchEnum17_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context5, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent5, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent5, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount5, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents5, class UObject* MissionK2Node_MissionCustomEvent_Context4, bool K2Node_SwitchEnum18_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent4, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent4, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount4, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents4, bool K2Node_SwitchEnum19_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context3, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent3, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount3, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents3, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent3, bool K2Node_SwitchEnum20_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent2, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent2, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount2, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents2, bool K2Node_SwitchEnum21_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context2, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent1, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent1, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount1, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents1, bool K2Node_SwitchEnum22_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context1, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents, bool K2Node_SwitchEnum23_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context, class UClass* CallFunc_GetObjectClass_ReturnValue);
};

}


