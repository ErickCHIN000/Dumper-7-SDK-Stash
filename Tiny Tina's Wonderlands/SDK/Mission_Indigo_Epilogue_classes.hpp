#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x588 - 0x570)
// BlueprintGeneratedClass Mission_Indigo_Epilogue.Mission_Indigo_Epilogue_C
class UMission_Indigo_Epilogue_C : public UMission_SideTemplate_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x570(0x8)(Transient, DuplicateTransient)
	class UMissionObjectiveSet*                  Epilogue_ObjSetVar;                                // 0x578(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionObjective*                     SpeakToVesper_ObjVar;                              // 0x580(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMission_Indigo_Epilogue_C* GetDefaultObj();

	void MissionKickoff();
	void Epilogue(enum class EMissionObjectiveSetEvent ObjectiveSetEvent);
	void SpeakToVesper(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents);
	void OnVesperSpeak(class UObject* Context);
	void ExecuteUbergraph_Mission_Indigo_Epilogue(int32 EntryPoint, bool CallFunc_MissionRemoteEvent_ReturnValue, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents, class UObject* MissionK2Node_MissionCustomEvent_Context, bool K2Node_SwitchEnum_CmpSuccess);
};

}


