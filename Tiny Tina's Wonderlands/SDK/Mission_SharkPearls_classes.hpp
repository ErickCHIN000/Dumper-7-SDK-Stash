#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x110 (0x668 - 0x558)
// BlueprintGeneratedClass Mission_SharkPearls.Mission_SharkPearls_C
class UMission_SharkPearls_C : public UBP_OakMission_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x558(0x8)(Transient, DuplicateTransient)
	class UMissionObjectiveSet*                  Set_CollectPearl_ObjSetVar;                        // 0x560(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_CollectPearlMinusA_ObjVar;                     // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_CollectPearls_ObjSetVar;                       // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_ReturnToScavenger_ObjSetVar;                   // 0x578(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_ReturnToScavenger_ObjVar;                      // 0x580(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_KillShark1_INVS_ObjVar;                        // 0x588(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_CollectPearls_ObjVar;                          // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_CollectPearlMinusB_INVS_ObjVar;                // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_CollectPearlMinusC_INVS_ObjVar;                // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_CollectPearlMinusD_INVS_ObjVar;                // 0x5A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_KillAllSharks_IVNS_ObjVar;                     // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_KillShark2_INVS_ObjVar;                        // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_KillShark3_INVS_ObjVar;                        // 0x5C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_KillShark4_INVS_ObjVar;                        // 0x5C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_KillFirstShark_ObjVar;                         // 0x5D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_FindShipweck_ObjSetVar;                        // 0x5D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_FindShipweck_ObjVar;                           // 0x5E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_DeliverPearls_ObjSetVar;                       // 0x5E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_DeliverToShrine_ObjVar;                        // 0x5F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_DeliverToMerchant_ObjVar;                      // 0x5F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_KillScavenger_ObjSetVar;                       // 0x600(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_KillScavenger_ObjVar;                          // 0x608(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_KillBadass_ObjSetVar;                          // 0x610(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_KillBadass_ObjVar;                             // 0x618(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_TakeShrineReward_ObjVar;                       // 0x620(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     OBJ_TurnInToPirate_ObjVar;                         // 0x628(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_DelieveredToShrine_ObjSetVar;                  // 0x630(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_DelieveredToPirate_ObjSetVar;                  // 0x638(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  SET_PosterKickoff_ObjSetVar;                       // 0x640(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     OBJ_PosterKickoff_ObjVar;                          // 0x648(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  SET_NPCKickoff_ObjSetVar;                          // 0x650(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     OBJ_NPCKickoff_ObjVar;                             // 0x658(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     ObjINVIS_FallingAnchor_ObjVar;                     // 0x660(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMission_SharkPearls_C* GetDefaultObj();

	void OnDialogSequenceFinished_28();
	void OnDialogSequenceFinished_27();
	void OnDialogSequenceFinished_26();
	void OnDialogSequenceFinished_25();
	void OnDialogSequenceFinished_24();
	void OnDialogSequenceFinished2_6();
	void OnDialogSequenceFinished_23();
	void OnDialogSequenceFinished_22();
	void OnDialogSequenceFinished_21();
	void OnDialogSequenceFinished_20();
	void OnDialogSequenceFinished_19();
	void OnDialogSequenceFinished_18();
	void OnDialogSequenceFinished_17();
	void OnDialogSequenceFinished2_5();
	void OnDialogSequenceFinished_16();
	void OnDialogSequenceFinished_15();
	void OnDialogSequenceFinished2_4();
	void Obj_KillShark1_INVS(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Obj_CollectPearlMinusB_INVS(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Obj_CollectPearlMinusC_INVS(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Obj_CollectPearlMinusD_INVS(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Obj_KillAllSharks_IVNS(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Obj_KillShark2_INVS(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Obj_KillShark3_INVS(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Obj_KillShark4_INVS(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void _Obj_KillShark1_INVS_Objective__PROXY();
	void Obj_KillFirstShark(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void _Obj_KillAllSharks_IVNS_Objective__PROXY_0();
	void UPDATE_KillShark1(class UObject* Context);
	void Set_FindShipweck(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_FindShipweck(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void UPDATE_FindShipweck(class UObject* Context);
	void Set_DeliverPearls(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_DeliverToShrine(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Obj_DeliverToMerchant(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void UPDATE_DeliverToShrine(class UObject* Context);
	void UPDATE_DeliverToMerchant(class UObject* Context);
	void Set_KillScavenger(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_KillScavenger(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void UPDATE_KillScavenger(class UObject* Context);
	void Set_KillBadass(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_KillBadass(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void UPDATE_KillBadass(class UObject* Context);
	void Obj_TakeShrineReward(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void OBJ_TurnInToPirate(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void UPDATE_ReturnToScavenger(class UObject* Context);
	void Obj_ReturnToScavenger(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Set_ReturnToScavenger(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void UPDATE_TurnInOnPirate(class UObject* Context);
	void UPDATE_TakeShrineReward(class UObject* Context);
	void Obj_CollectPearls(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Set_CollectPearls(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_DelieveredToShrine(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_DelieveredToPirate(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_DeliverToShrine_Objective__PROXY_1();
	void _Obj_DeliverToMerchant_Objective__PROXY_2();
	void Obj_CollectPearlMinusA(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void _Obj_KillFirstShark_Objective__PROXY_3();
	void SET_PosterKickoff(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void OBJ_PosterKickoff(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void SET_NPCKickoff(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void OBJ_NPCKickoff(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void UPDATE_PosterKickoff(class UObject* Context);
	void Set_CollectPearl(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void ObjINVIS_FallingAnchor(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void _ObjINVIS_FallingAnchor_Objective__PROXY_4();
	void UPDATE_FallingAnchor(class UObject* Context);
	void _ObjINVIS_FallingAnchor_Objective__PROXY_5();
	void ExecuteUbergraph_Mission_SharkPearls(int32 EntryPoint, bool CallFunc_MissionRemoteEvent_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue1, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs, bool CallFunc_FinishSpeakSequenceEx_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue2, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation1, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs1, bool CallFunc_FinishSpeakSequenceEx_ReturnValue1, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue3, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation2, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs2, bool CallFunc_FinishSpeakSequenceEx_ReturnValue2, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue4, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation3, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs3, bool CallFunc_FinishSpeakSequenceEx_ReturnValue3, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue5, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation4, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs4, bool CallFunc_FinishSpeakSequenceEx_ReturnValue4, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue6, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation5, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs5, bool CallFunc_FinishSpeakSequenceEx_ReturnValue5, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue7, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation6, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs6, bool CallFunc_FinishSpeakSequenceEx_ReturnValue6, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue8, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue9, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation7, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs7, bool CallFunc_FinishSpeakSequenceEx_ReturnValue7, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation8, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs8, bool CallFunc_FinishSpeakSequenceEx_ReturnValue8, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue10, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation9, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs9, bool CallFunc_FinishSpeakSequenceEx_ReturnValue9, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue11, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation10, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs10, bool CallFunc_FinishSpeakSequenceEx_ReturnValue10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent21, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount21, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents21, bool K2Node_SwitchEnum_CmpSuccess, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent20, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount20, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents20, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent19, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount19, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents19, bool K2Node_SwitchEnum1_CmpSuccess, bool K2Node_SwitchEnum2_CmpSuccess, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent18, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount18, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents18, bool K2Node_SwitchEnum3_CmpSuccess, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent17, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount17, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents17, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent16, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount16, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents16, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent15, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount15, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents15, bool K2Node_SwitchEnum4_CmpSuccess, bool K2Node_SwitchEnum5_CmpSuccess, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent14, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount14, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents14, bool K2Node_SwitchEnum6_CmpSuccess, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent13, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount13, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents13, enum class EMissionObjectiveSetStatus CallFunc_GetMissionObjectiveSetStatusRef_ReturnValue, bool K2Node_SwitchEnum7_CmpSuccess, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue12, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue13, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation11, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs11, bool CallFunc_FinishSpeakSequenceEx_ReturnValue11, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation12, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs12, bool CallFunc_FinishSpeakSequenceEx_ReturnValue12, class UObject* MissionK2Node_MissionCustomEvent_Context10, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation13, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs13, bool CallFunc_FinishSpeakSequenceEx_ReturnValue13, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent10, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent12, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount12, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents12, class UObject* MissionK2Node_MissionCustomEvent_Context9, bool K2Node_SwitchEnum8_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent9, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent11, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount11, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents11, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent10, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount10, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents10, bool K2Node_SwitchEnum9_CmpSuccess, bool K2Node_SwitchEnum10_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context8, class UObject* MissionK2Node_MissionCustomEvent_Context7, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent8, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent9, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount9, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents9, class UObject* MissionK2Node_MissionCustomEvent_Context6, bool K2Node_SwitchEnum11_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent7, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent8, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount8, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents8, class UObject* MissionK2Node_MissionCustomEvent_Context5, bool K2Node_SwitchEnum12_CmpSuccess, bool CallFunc_MissionRemoteEvent_ReturnValue1, bool CallFunc_MissionRemoteEvent_ReturnValue2, bool CallFunc_MissionRemoteEvent_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate13, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent7, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount7, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate14, bool K2Node_SwitchEnum13_CmpSuccess, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent6, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount6, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents6, bool K2Node_SwitchEnum14_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate15, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent5, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount5, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents5, bool K2Node_SwitchEnum15_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent6, class UObject* MissionK2Node_MissionCustomEvent_Context3, class UObject* MissionK2Node_MissionCustomEvent_Context2, bool CallFunc_MissionRemoteEvent_ReturnValue4, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent4, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount4, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents4, bool K2Node_SwitchEnum16_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent5, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent4, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent3, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent3, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount3, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents3, bool CallFunc_MissionRemoteEvent_ReturnValue5, bool K2Node_SwitchEnum17_CmpSuccess, bool CallFunc_MissionRemoteEvent_ReturnValue6, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent2, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent2, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount2, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents2, bool K2Node_SwitchEnum18_CmpSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate16, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent1, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent1, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount1, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents1, bool K2Node_SwitchEnum19_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context1, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent, bool CallFunc_MissionRemoteEvent_ReturnValue7, bool CallFunc_MissionRemoteEvent_ReturnValue8, bool CallFunc_MissionRemoteEvent_ReturnValue9, bool CallFunc_MissionRemoteEvent_ReturnValue10, bool CallFunc_MissionRemoteEvent_ReturnValue11, bool CallFunc_MissionRemoteEvent_ReturnValue12, bool CallFunc_MissionRemoteEvent_ReturnValue13, bool CallFunc_MissionRemoteEvent_ReturnValue14, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents, class UObject* MissionK2Node_MissionCustomEvent_Context, bool CallFunc_MissionRemoteEvent_ReturnValue15, bool CallFunc_MissionRemoteEvent_ReturnValue16, bool CallFunc_MissionRemoteEvent_ReturnValue17);
};

}


