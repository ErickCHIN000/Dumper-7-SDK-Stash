#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B0 (0x428 - 0x278)
// BlueprintGeneratedClass de_liquid_update3.de_liquid_update3_C
class ADe_liquid_update3_C : public AObject_dlg_event_child_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class FName>                          Sub_Objective_List;                                // 0x280(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          LS_Sub;                                            // 0x290(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FS_quest_objective_data               Loc_Obj;                                           // 0x2A0(0x188)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ADe_liquid_update3_C* GetDefaultObj();

	void Call_event(class Abp_dlg_actor_C* Dlg_actor, const struct FS_dlg_event_info& Event_data);
	void ExecuteUbergraph_de_liquid_update3(int32 EntryPoint, class ANPC_Slaver2New_C* CallFunc_GetActorOfClass_ReturnValue, class Abp_dlg_actor_C* K2Node_Event_dlg_actor, const struct FS_dlg_event_info& K2Node_Event_event_data);
};

}


