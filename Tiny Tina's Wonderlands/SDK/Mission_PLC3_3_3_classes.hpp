#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x5C0 - 0x570)
// BlueprintGeneratedClass Mission_PLC3_3_3.Mission_PLC3_3_3_C
class UMission_PLC3_3_3_C : public UMission_SideTemplate_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x570(0x8)(Transient, DuplicateTransient)
	int32                                        TrialsComplete;                                    // 0x578(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BB2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMissionObjectiveSet*                  Set_DestroyHooks_ObjSetVar;                        // 0x580(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_PullSwitches_ObjVar;                           // 0x588(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  SET_Portal03_ObjSetVar;                            // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     OBJ_Portal03Objective_ObjVar;                      // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  SET_DestroyHook_ObjSetVar;                         // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_DestroyHook_ObjVar;                            // 0x5A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_DestroytheHook_ObjVar;                         // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjectiveSet*                  SET_PullSwitches_ObjSetVar;                        // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMission_PLC3_3_3_C* GetDefaultObj();

	void Set_DestroyHooks(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_PullSwitches(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void SET_Portal03(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void OBJ_Portal03Objective(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void MissionKickoff();
	void Update_SwitchPulled(class UObject* Context);
	void UPDATE_ExitSmith03(class UObject* Context);
	void SET_DestroyHook(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_DestroyHook(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Update_ChainDestroyed(class UObject* Context);
	void Obj_DestroytheHook(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void UPDATE_DestroyHooks(class UObject* Context);
	void SET_PullSwitches(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_DestroytheHook_Objective__PROXY();
	void MissionComplete();
	void ExecuteUbergraph_Mission_PLC3_3_3(int32 EntryPoint, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent3, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent3, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount3, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents3, bool K2Node_SwitchEnum_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent2, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent2, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount2, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents2, bool K2Node_SwitchEnum1_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context3, class UObject* MissionK2Node_MissionCustomEvent_Context2, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent1, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent1, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount1, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents1, bool K2Node_SwitchEnum2_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context1, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents, class UObject* MissionK2Node_MissionCustomEvent_Context, bool K2Node_SwitchEnum3_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent);
};

}


