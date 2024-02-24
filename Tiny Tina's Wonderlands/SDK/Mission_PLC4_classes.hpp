#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1D8 (0x748 - 0x570)
// BlueprintGeneratedClass Mission_PLC4.Mission_PLC4_C
class UMission_PLC4_C : public UMission_SideTemplate_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x570(0x8)(Transient, DuplicateTransient)
	class UMissionObjectiveSet*                  Set_FindTheWyvern_ObjSetVar;                       // 0x578(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_FindTheWyvern_ObjVar;                          // 0x580(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_StealGold_ObjSetVar;                           // 0x588(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_StealGold_ObjVar;                              // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_EnterThePortal_Intro_ObjSetVar;                // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_EnterThePortal_Intro_ObjVar;                   // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_EnterWyvern_01_ObjSetVar;                      // 0x5A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_EnterWyvern_01_ObjVar;                         // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_CollectStandards_ObjSetVar;                    // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_CollectStandards_ObjVar;                       // 0x5C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_EnterWyvern_01Portal_ObjSetVar;                // 0x5C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_EnterWyvern_01Portal_ObjVar;                   // 0x5D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_EnterWyvern_02_ObjSetVar;                      // 0x5D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_EnterWyvern_02_ObjVar;                         // 0x5E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_FindLute_ObjSetVar;                            // 0x5E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_FindLute_ObjVar;                               // 0x5F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_ExitWyvern_02_ObjSetVar;                       // 0x5F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_ExitWyvern_02_ObjVar;                          // 0x600(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_EnterWyvern_03_ObjSetVar;                      // 0x608(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_EnterWyvern_03_ObjVar;                         // 0x610(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_ReleaseLocks_ObjSetVar;                        // 0x618(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_ReleaseLocks_ObjVar;                           // 0x620(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_ExitWyvern_03_ObjSetVar;                       // 0x628(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_ExitWyvern_03_ObjVar;                          // 0x630(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_EnterWyvern_04_ObjSetVar;                      // 0x638(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_EnterWyvern_04_ObjVar;                         // 0x640(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_DestroyDragon_ObjSetVar;                       // 0x648(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_DestroyDragon_ObjVar;                          // 0x650(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_ExitWyvern_04_ObjSetVar;                       // 0x658(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_ExitWyvern_04_ObjVar;                          // 0x660(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_EnterWyvernBoss_ObjSetVar;                     // 0x668(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_EnterWyvernBoss_ObjVar;                        // 0x670(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_KillWyvern_ObjSetVar;                          // 0x678(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_KillWyvern_ObjVar;                             // 0x680(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  SET_ReturnToHub_ObjSetVar;                         // 0x688(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     OBJ_ReturnToHub_ObjVar;                            // 0x690(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_LootVault_ObjSetVar;                           // 0x698(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_LootVault_ObjVar;                              // 0x6A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_ReleaseCart1_ObjSetVar;                        // 0x6A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_ReleaseCart1_ObjVar;                           // 0x6B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_Collect4Gold_ObjSetVar;                        // 0x6B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_Collect4Gold_ObjVar;                           // 0x6C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_KillGolem_ObjSetVar;                           // 0x6C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_Gather_RemainingGold_ObjSetVar;                // 0x6D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_Gather_RemainingGold_ObjVar;                   // 0x6D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_KillGolem_ObjVar;                              // 0x6E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_AquireLever_ObjSetVar;                         // 0x6E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_AquireLever_ObjVar;                            // 0x6F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_UseLever_ObjSetVar;                            // 0x6F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_UseLever_ObjVar;                               // 0x700(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_DefendTown_ObjSetVar;                          // 0x708(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_DefendTown_ObjVar;                             // 0x710(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_EnterCourtyard_ObjSetVar;                      // 0x718(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Oby_EnterCourtyard_ObjVar;                         // 0x720(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_KillTroll_ObjSetVar;                           // 0x728(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_KillTroll_ObjVar;                              // 0x730(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  Set_EnterWyvernIntro_ObjSetVar;                    // 0x738(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_EnterWyvernIntro_ObjVar;                       // 0x740(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMission_PLC4_C* GetDefaultObj();

	void Obj_EnterWyvern_02(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Set_EnterWyvern_02(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void UPDATE_EnterWyvern_01Portal(class UObject* Context);
	void UPDATE_EnterWyvern_02(class UObject* Context);
	void Set_FindLute(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_FindLute(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void UPDATE_FindLute(class UObject* Context);
	void Set_ExitWyvern_02(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_ExitWyvern_02(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Obj_EnterWyvern_01Portal(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Set_EnterWyvern_03(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_EnterWyvern_03(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Set_EnterWyvern_01Portal(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void UPDATE_EnterWyvern_03(class UObject* Context);
	void Set_ReleaseLocks(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_ReleaseLocks(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void UPDATE_CollectStandards(class UObject* Context);
	void UPDATE_ReleaseLocks(class UObject* Context);
	void UPDATE_ExitWyvern_02(class UObject* Context);
	void Set_EnterWyvern_04(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void UPDATE_EnterWyvern_04(class UObject* Context);
	void Obj_EnterWyvern_04(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Set_DestroyDragon(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_DestroyDragon(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Obj_CollectStandards(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void UPDATE_DestroyDragon(class UObject* Context);
	void Set_FindTheWyvern(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_FindTheWyvern(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Set_ExitWyvern_03(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_ExitWyvern_03(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void UPDATE_ExitWyvern_03(class UObject* Context);
	void Set_CollectStandards(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_ExitWyvern_04(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_ExitWyvern_04(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void UPDATE_ExitWyvern_04(class UObject* Context);
	void Set_EnterWyvernBoss(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_EnterWyvernBoss(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void UPDATE_EnterWyvernBoss(class UObject* Context);
	void Set_KillWyvern(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_KillWyvern(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Update_KillWyvern(class UObject* Context);
	void SET_ReturnToHub(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void OBJ_ReturnToHub(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void UPDATE_ReturnToHub(class UObject* Context);
	void UPDATE_EnterWyvern_01(class UObject* Context);
	void Set_StealGold(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_StealGold(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void _Obj_FindTheWyvern_Objective__PROXY();
	void UPDATE_StealGold(class UObject* Context);
	void _Obj_FindTheWyvern_Objective__PROXY_0();
	void _Obj_FindTheWyvern_Objective__PROXY_1();
	void _Obj_FindTheWyvern_Objective__PROXY_2();
	void _Obj_FindTheWyvern_Objective__PROXY_3();
	void _Obj_FindTheWyvern_Objective__PROXY_4();
	void _Obj_FindTheWyvern_Objective__PROXY_5();
	void _Obj_FindTheWyvern_Objective__PROXY_6();
	void _Obj_FindTheWyvern_Objective__PROXY_7();
	void _Obj_FindTheWyvern_Objective__PROXY_8();
	void _Obj_FindTheWyvern_Objective__PROXY_9();
	void _Obj_FindTheWyvern_Objective__PROXY_10();
	void _Obj_FindTheWyvern_Objective__PROXY_11();
	void _Obj_FindTheWyvern_Objective__PROXY_12();
	void _Obj_FindTheWyvern_Objective__PROXY_13();
	void Set_LootVault(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_FindTheWyvern_Objective__PROXY_14();
	void Obj_LootVault(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void UPDATE_LootVault(class UObject* Context);
	void Set_ReleaseCart1(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_ReleaseCart1(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void _Obj_FindTheWyvern_Objective__PROXY_15();
	void UPDATE_ReleaseCart1(class UObject* Context);
	void Obj_EnterWyvern_01(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Set_Collect4Gold(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_Collect4Gold(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void _Obj_FindTheWyvern_Objective__PROXY_16();
	void UPDATE_Collect4Gold(class UObject* Context);
	void Set_EnterWyvern_01(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_StealGold_Objective__PROXY_17();
	void _Obj_StealGold_Objective__PROXY_18();
	void Set_KillGolem(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_FindTheWyvern_Objective__PROXY_19();
	void UPDATE_EnterThePortal_Intro(class UObject* Context);
	void Set_Gather_RemainingGold(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_Gather_RemainingGold(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void _Obj_FindTheWyvern_Objective__PROXY_20();
	void UPDATE_Gather_RemainingGold(class UObject* Context);
	void UPDATE_KillGolem(class UObject* Context);
	void _Obj_StealGold_Objective__PROXY_21();
	void _Obj_StealGold_Objective__PROXY_22();
	void Obj_KillGolem(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Obj_EnterThePortal_Intro(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Set_AquireLever(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_AquireLever(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void _Obj_FindTheWyvern_Objective__PROXY_23();
	void UPDATE_AquireLever(class UObject* Context);
	void Set_EnterThePortal_Intro(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_UseLever(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_UseLever(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void _Obj_FindTheWyvern_Objective__PROXY_24();
	void UPDATE_UseLever(class UObject* Context);
	void Set_DefendTown(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_DefendTown(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void _Obj_FindTheWyvern_Objective__PROXY_25();
	void UPDATE_DefendTown(class UObject* Context);
	void Set_EnterCourtyard(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Oby_EnterCourtyard(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void _Obj_FindTheWyvern_Objective__PROXY_26();
	void UPDATE_EnterCourtyard(class UObject* Context);
	void Set_KillTroll(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_KillTroll(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void _Obj_FindTheWyvern_Objective__PROXY_27();
	void UPDATE_KillTroll(class UObject* Context);
	void _Obj_AquireLever_Objective__PROXY_28();
	void _Obj_AquireLever_Objective__PROXY_29();
	void Set_EnterWyvernIntro(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_EnterWyvernIntro(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void _Obj_FindTheWyvern_Objective__PROXY_30();
	void UPDATE_EnterWyvernIntro(class UObject* Context);
	void MissionKickoff();
	void MissionActiveLoad();
	void MissionCompleteLoad();
	void ExecuteUbergraph_Mission_PLC4(int32 EntryPoint, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent28, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount28, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents28, bool K2Node_SwitchEnum_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent28, class UObject* MissionK2Node_MissionCustomEvent_Context27, class UObject* MissionK2Node_MissionCustomEvent_Context26, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent27, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent27, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount27, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents27, class UObject* MissionK2Node_MissionCustomEvent_Context25, bool K2Node_SwitchEnum1_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent26, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent26, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount26, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents26, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent25, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount25, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents25, bool K2Node_SwitchEnum2_CmpSuccess, bool K2Node_SwitchEnum3_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent25, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent24, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount24, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents24, bool K2Node_SwitchEnum4_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent24, class UObject* MissionK2Node_MissionCustomEvent_Context24, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent23, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent23, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount23, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents23, bool K2Node_SwitchEnum5_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context23, class UObject* MissionK2Node_MissionCustomEvent_Context22, class UObject* MissionK2Node_MissionCustomEvent_Context21, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent22, class UObject* MissionK2Node_MissionCustomEvent_Context20, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent22, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount22, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents22, bool K2Node_SwitchEnum6_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent21, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent21, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount21, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents21, bool K2Node_SwitchEnum7_CmpSuccess, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent20, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount20, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents20, class UObject* MissionK2Node_MissionCustomEvent_Context19, bool K2Node_SwitchEnum8_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent20, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent19, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount19, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents19, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent19, bool K2Node_SwitchEnum9_CmpSuccess, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent18, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount18, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents18, bool K2Node_SwitchEnum10_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context18, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent18, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent17, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent17, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount17, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents17, bool K2Node_SwitchEnum11_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context17, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent16, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent16, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount16, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents16, bool K2Node_SwitchEnum12_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context16, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent15, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent15, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount15, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents15, bool K2Node_SwitchEnum13_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context15, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent14, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent14, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount14, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents14, class UObject* MissionK2Node_MissionCustomEvent_Context14, bool K2Node_SwitchEnum14_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context13, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent13, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent13, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount13, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents13, bool K2Node_SwitchEnum15_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context12, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent12, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent12, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount12, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents12, bool K2Node_SwitchEnum16_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context11, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent11, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent11, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount11, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents11, bool K2Node_SwitchEnum17_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context10, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent10, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount10, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents10, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent10, bool K2Node_SwitchEnum18_CmpSuccess, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent9, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount9, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents9, bool K2Node_SwitchEnum19_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context9, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent9, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent8, class UObject* MissionK2Node_MissionCustomEvent_Context8, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent7, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent8, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount8, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents8, bool K2Node_SwitchEnum20_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context7, class UObject* MissionK2Node_MissionCustomEvent_Context6, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent7, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount7, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents7, bool K2Node_SwitchEnum21_CmpSuccess, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent6, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount6, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents6, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent6, bool K2Node_SwitchEnum22_CmpSuccess, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent5, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount5, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents5, bool K2Node_SwitchEnum23_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context5, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent5, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent4, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent4, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount4, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents4, bool K2Node_SwitchEnum24_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context4, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent3, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent3, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount3, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents3, bool K2Node_SwitchEnum25_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context3, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent2, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent2, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount2, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents2, bool K2Node_SwitchEnum26_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context2, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent1, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent1, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount1, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents1, bool K2Node_SwitchEnum27_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context1, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue1, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs, bool CallFunc_FinishSpeakSequenceEx_ReturnValue, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation1, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs1, bool CallFunc_FinishSpeakSequenceEx_ReturnValue1, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue2, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue3, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation2, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs2, bool CallFunc_FinishSpeakSequenceEx_ReturnValue2, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation3, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs3, bool CallFunc_FinishSpeakSequenceEx_ReturnValue3, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents, bool K2Node_SwitchEnum28_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context, class UClass* CallFunc_GetObjectClass_ReturnValue);
};

}


