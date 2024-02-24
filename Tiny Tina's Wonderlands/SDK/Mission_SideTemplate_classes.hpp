#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x570 - 0x558)
// BlueprintGeneratedClass Mission_SideTemplate.Mission_SideTemplate_C
class UMission_SideTemplate_C : public UBP_OakMission_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x558(0x8)(Transient, DuplicateTransient)
	class UMissionObjectiveSet*                  Set_Placeholder_ObjSetVar;                         // 0x560(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     Obj_Placeholder_ObjVar;                            // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMission_SideTemplate_C* GetDefaultObj();

	void Obj_Placeholder(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void Set_Placeholder(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void ExecuteUbergraph_Mission_SideTemplate(int32 EntryPoint, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent);
};

}


