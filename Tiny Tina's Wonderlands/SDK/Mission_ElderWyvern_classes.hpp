#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x170 (0x6C8 - 0x558)
// BlueprintGeneratedClass Mission_ElderWyvern.Mission_ElderWyvern_C
class UMission_ElderWyvern_C : public UBP_OakMission_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x558(0x8)(Transient, DuplicateTransient)
	class UMissionObjectiveSet*                  Set_FindReleaseMechanism_ObjSetVar;                // 0x560(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_FindReleaseMechanism_ObjVar;                   // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_OptionalFindFoodBranch_ObjSetVar;              // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_KillWyvern_ObjSetVar;                          // 0x578(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_ReleaseWyvern_ObjVar;                          // 0x580(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_FindFood_ObjVar;                               // 0x588(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_DeliverFood_ObjVar;                            // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_TalkToWyvern_ObjSetVar;                        // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_KillWyvern_ObjVar;                             // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_TalkToWyvern_ObjVar;                           // 0x5A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_Machinery_ObjSetVar;                           // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_TurnOffMachine_ObjVar;                         // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_ClearEnemies_ObjVar;                           // 0x5C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_LeadFoodToFeeder_ObjSetVar;                    // 0x5C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_Scale_ObjSetVar;                               // 0x5D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_TakeScale_ObjVar;                              // 0x5D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_Gate_ObjSetVar;                                // 0x5E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_KillSheepsWithSwitch_ObjVar;                   // 0x5E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_CloseGate_ObjVar;                              // 0x5F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_FeedWyvern_ObjSetVar;                          // 0x5F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_WaveOfEnemies_ObjSetVar;                       // 0x600(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_SmackSkeep_ObjVar;                             // 0x608(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_SkeepMoveAgain_ObjSetVar;                      // 0x610(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_SmackSkeep2_ObjVar;                            // 0x618(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_SkeepGetIntoPen_ObjSetVar;                     // 0x620(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_SmackFinal_ObjVar;                             // 0x628(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDialogConversation                   Conversation_WyvernHangry;                         // 0x630(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4876[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMissionObjectiveSet*                  Set_WaveOfEnemies_Part2_ObjSetVar;                 // 0x640(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_ClearEnemies2_ObjVar;                          // 0x648(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_Wait_For_Wyvern_to_Feed_ObjSetVar;             // 0x650(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_Wait_For_Wyvern_to_Feed_ObjVar;                // 0x658(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_Final_FreeWyvern_ObjSetVar;                    // 0x660(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDialogConversation                   Conversation_Accept_Mission;                       // 0x668(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FDialogConversation                   Conversation_Wyvern_Intro;                         // 0x674(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_TravelTo_Forge_ObjSetVar;                      // 0x680(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_TravelTo_Forge_ObjVar;                         // 0x688(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_AcceptQuest_Wyvern_ObjSetVar;                  // 0x690(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_AcceptQuest_Wyvern_ObjVar;                     // 0x698(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_TravelTo_Forge_Breadcrumb1_ObjVar;             // 0x6A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_TravelTo_Forge_Breadcrumb2_ObjVar;             // 0x6A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_TravelTo_Forge_Breadcrumbs_ObjSetVar;          // 0x6B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_Basement_Breadcrumb_ObjSetVar;                 // 0x6B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_Basement_Breadcrumb_ObjVar;                    // 0x6C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMission_ElderWyvern_C* GetDefaultObj();

	void OnDialogSequenceFinished_10();
	void OnDialogSequenceFinished_9();
	void OnDialogSequenceFinished_8();
	void OnDialogSequenceFinished_7();
	void OnDialogSequenceFinished2_2();
	void OnDialogSequenceFinished_6();
	void _Obj_FindReleaseMechanism_Objective__PROXY();
	void Set_Machinery(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_TurnOffMachine(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void MCE_MachineTurnedOff(class UObject* Context);
	void Obj_ClearEnemies(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Set_LeadFoodToFeeder(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_FindReleaseMechanism_Objective__PROXY_0();
	void Obj_TakeScale(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Set_Scale(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Update_TalkToWyvern(class UObject* Context);
	void Obj_KillSheepsWithSwitch(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void MCE_PlayerOpenedFeeder(class UObject* Context);
	void Set_Gate(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_FindReleaseMechanism_Objective__PROXY_1();
	void Update_KillWyvern(class UObject* Context);
	void Obj_CloseGate(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void MCE_GateUsed(class UObject* Context);
	void Set_FeedWyvern(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_FindReleaseMechanism_Objective__PROXY_2();
	void Update_FindFood(class UObject* Context);
	void Advance_FindFood(class UObject* Context);
	void MCE_Beckon(class UObject* Context);
	void Update_ReleaseWyvern(class UObject* Context);
	void Update_FindMechanism(class UObject* Context);
	void MCE_MoveSkeeps(class UObject* Context);
	void Set_WaveOfEnemies(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void MCE_EnemiesCleared(class UObject* Context);
	void Obj_SmackSkeep(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Update_SmackedSkeep(class UObject* Context);
	void _Obj_FindReleaseMechanism_Objective__PROXY_3();
	void Set_SkeepMoveAgain(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_SkeepGetIntoPen(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_SmackSkeep2(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Obj_SmackFinal(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void _Obj_FindReleaseMechanism_Objective__PROXY_4();
	void MCE_SmackedSkeep_2(class UObject* Context);
	void MCE_SmackedSkeep_Final(class UObject* Context);
	void _Obj_DeliverFood_Objective__PROXY_5();
	void _Obj_FindReleaseMechanism_Objective__PROXY_6();
	void _Obj_DeliverFood_Objective__PROXY_7();
	void Advance_SkeepMove2(class UObject* Context);
	void Advance_SkeepFinalMove(class UObject* Context);
	void Obj_TalkToWyvern(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Advance_FinalSkeepPenMoment(class UObject* Context);
	void Obj_KillWyvern(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Set_TalkToWyvern(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_DeliverFood(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Obj_FindFood(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Set_KillWyvern(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Fire_WyvernHostial_Dialog(class UObject* Context);
	void Fire_WyvernFriendly_Dialog(class UObject* Context);
	void Obj_ReleaseWyvern(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Obj_ClearEnemies2(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void MCE_EnemiesCleared2(class UObject* Context);
	void Set_OptionalFindFoodBranch(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_DeliverFood_Objective__PROXY_8();
	void _Obj_FindReleaseMechanism_Objective__PROXY_9();
	void Set_WaveOfEnemies_Part2(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_Wait_For_Wyvern_to_Feed(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Set_Wait_For_Wyvern_to_Feed(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_Final_FreeWyvern(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_FindReleaseMechanism_Objective__PROXY_10();
	void Set_TravelTo_Forge(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_TravelTo_Forge(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void MCE_TravelTo_Forge(class UObject* Context);
	void MissionKickoff();
	void Set_AcceptQuest_Wyvern(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_AcceptQuest_Wyvern(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Set_FindReleaseMechanism(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_TravelTo_Forge_Breadcrumb1(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void MCE_TravelTo_Forge_Breadcrumb1(class UObject* Context);
	void Obj_TravelTo_Forge_Breadcrumb2(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void MCE_TravelTo_Forge_Breadcrumb2(class UObject* Context);
	void Set_TravelTo_Forge_Breadcrumbs(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_TravelTo_Forge_Objective__PROXY_11();
	void Obj_FindReleaseMechanism(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Set_Basement_Breadcrumb(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_Basement_Breadcrumb(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void MCE_Basement_Breadcrumb(class UObject* Context);
	void _Obj_TurnOffMachine_Objective__PROXY_12();
	void ExecuteUbergraph_Mission_ElderWyvern(int32 EntryPoint, bool CallFunc_MissionRemoteEvent_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs, bool CallFunc_FinishSpeakSequenceEx_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue1, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation1, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs1, bool CallFunc_FinishSpeakSequenceEx_ReturnValue1, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue2, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue3, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation2, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs2, bool CallFunc_FinishSpeakSequenceEx_ReturnValue2, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation3, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs3, bool CallFunc_FinishSpeakSequenceEx_ReturnValue3, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue4, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue5, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation4, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs4, bool CallFunc_FinishSpeakSequenceEx_ReturnValue4, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation5, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs5, bool CallFunc_FinishSpeakSequenceEx_ReturnValue5, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue6, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation6, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs6, bool CallFunc_FinishSpeakSequenceEx_ReturnValue6, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue7, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation7, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs7, bool CallFunc_FinishSpeakSequenceEx_ReturnValue7, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue8, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation8, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs8, bool CallFunc_FinishSpeakSequenceEx_ReturnValue8, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue9, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue10, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation9, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs9, bool CallFunc_FinishSpeakSequenceEx_ReturnValue9, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue11, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation10, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs10, bool CallFunc_FinishSpeakSequenceEx_ReturnValue10, enum class EMissionObjectiveStatus CallFunc_GetMissionObjectiveStatusRef_ReturnValue, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent18, bool K2Node_SwitchEnum_CmpSuccess, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent20, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount20, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents20, class UObject* MissionK2Node_MissionCustomEvent_Context24, bool K2Node_SwitchEnum1_CmpSuccess, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent19, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount19, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents19, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent17, bool K2Node_SwitchEnum2_CmpSuccess, bool CallFunc_MissionRemoteEvent_ReturnValue1, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent18, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount18, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents18, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent16, bool K2Node_SwitchEnum3_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context23, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent17, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount17, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents17, bool K2Node_SwitchEnum4_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context22, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent15, class UObject* MissionK2Node_MissionCustomEvent_Context21, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent16, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount16, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents16, bool K2Node_SwitchEnum5_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context20, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent14, class UObject* MissionK2Node_MissionCustomEvent_Context19, bool CallFunc_MissionRemoteEvent_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UObject* MissionK2Node_MissionCustomEvent_Context18, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UObject* MissionK2Node_MissionCustomEvent_Context17, class UObject* MissionK2Node_MissionCustomEvent_Context16, class UObject* MissionK2Node_MissionCustomEvent_Context15, class UObject* MissionK2Node_MissionCustomEvent_Context14, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent13, class UObject* MissionK2Node_MissionCustomEvent_Context13, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent15, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount15, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents15, class UObject* MissionK2Node_MissionCustomEvent_Context12, bool K2Node_SwitchEnum6_CmpSuccess, bool CallFunc_MissionRemoteEvent_ReturnValue3, bool CallFunc_MissionRemoteEvent_ReturnValue4, bool CallFunc_MissionRemoteEvent_ReturnValue5, bool CallFunc_MissionRemoteEvent_ReturnValue6, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent12, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent11, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent14, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount14, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents14, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent13, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount13, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents13, bool K2Node_SwitchEnum7_CmpSuccess, bool K2Node_SwitchEnum8_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context11, class UObject* MissionK2Node_MissionCustomEvent_Context10, class UObject* MissionK2Node_MissionCustomEvent_Context9, class UObject* MissionK2Node_MissionCustomEvent_Context8, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent12, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount12, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents12, bool K2Node_SwitchEnum9_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context7, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent11, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount11, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents11, bool K2Node_SwitchEnum10_CmpSuccess, bool CallFunc_MissionRemoteEvent_ReturnValue7, bool CallFunc_MissionRemoteEvent_ReturnValue8, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue12, bool CallFunc_MissionRemoteEvent_ReturnValue9, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation11, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs11, bool CallFunc_FinishSpeakSequenceEx_ReturnValue11, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue13, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation12, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs12, bool CallFunc_FinishSpeakSequenceEx_ReturnValue12, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent10, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent10, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount10, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents10, bool K2Node_SwitchEnum11_CmpSuccess, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent9, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount9, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents9, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent9, bool K2Node_SwitchEnum12_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context6, class UObject* MissionK2Node_MissionCustomEvent_Context5, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent8, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount8, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents8, bool K2Node_SwitchEnum13_CmpSuccess, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent7, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount7, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents7, class UObject* MissionK2Node_MissionCustomEvent_Context4, bool K2Node_SwitchEnum14_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent8, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent7, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent6, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount6, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents6, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent6, bool K2Node_SwitchEnum15_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent5, bool CallFunc_MissionRemoteEvent_ReturnValue10, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent4, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation13, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs13, bool CallFunc_FinishSpeakSequenceEx_ReturnValue13, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent5, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount5, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents5, bool K2Node_SwitchEnum16_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context3, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent3, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent4, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount4, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents4, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent2, bool K2Node_SwitchEnum17_CmpSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, bool CallFunc_MissionRemoteEvent_ReturnValue11, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent3, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount3, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents3, class UObject* MissionK2Node_MissionCustomEvent_Context2, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent2, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount2, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents2, bool K2Node_SwitchEnum18_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context1, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent1, bool CallFunc_MissionRemoteEvent_ReturnValue12, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent1, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount1, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents1, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent, bool K2Node_SwitchEnum19_CmpSuccess, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents, class UObject* MissionK2Node_MissionCustomEvent_Context, bool K2Node_SwitchEnum20_CmpSuccess);
};

}


