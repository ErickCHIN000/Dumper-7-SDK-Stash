#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x588 - 0x570)
// BlueprintGeneratedClass Mission_PLC3_CompletionV2.Mission_PLC3_CompletionV2_C
class UMission_PLC3_CompletionV2_C : public UMission_SideTemplate_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x570(0x8)(Transient, DuplicateTransient)
	class UMissionObjectiveSet*                  CompletedPLC1Week1_ObjSetVar;                      // 0x578(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_Completed_ObjVar;                              // 0x580(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMission_PLC3_CompletionV2_C* GetDefaultObj();

	void MissionKickoff();
	void CompletedPLC1Week1(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_Completed(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void UPDATE_CompletedRun(class UObject* Context);
	void ExecuteUbergraph_Mission_PLC3_CompletionV2(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AOakPlayerController* K2Node_DynamicCast_AsOak_Player_Controller, bool K2Node_DynamicCast_bSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents, bool K2Node_SwitchEnum_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context, class AIndigoDungeon* CallFunc_GetIndigoDungeon_ReturnValue);
};

}


