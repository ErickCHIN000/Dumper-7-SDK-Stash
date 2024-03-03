#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8C (0x2AC - 0x220)
// BlueprintGeneratedClass object_quest_condition_parent.object_quest_condition_parent_C
class AObject_quest_condition_parent_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UArrowComponent*                       Root_arrow;                                        // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class Abp_quest_actor_C*                     Quest_actor;                                       // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Instigator_id;                                     // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Unique_id;                                         // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Data_id;                                           // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Objective_id;                                      // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Sub_objective_id;                                  // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_quest_condition                    Condition_info;                                    // 0x260(0x48)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                        Object_lifespan;                                   // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AObject_quest_condition_parent_C* GetDefaultObj();

	void Quest_result_condition(const struct FS_quest_result& Quest_result, struct FS_quest_result* Return_value);
	void Objective_result_condition(const struct FS_quest_objective_result& Objective_result, struct FS_quest_objective_result* Return_value);
	void Objective_data_condition(const struct FS_quest_objective_data& Objective_data, struct FS_quest_objective_data* Return_value);
	void Quest_data_condition(const struct FS_quest_data& Quest_data, struct FS_quest_data* Return_value);
	void Init_condition_object(class Abp_quest_actor_C* Quest_actor, class FName Instigator_id, class FName Objective_id, class FName Sub_objective_id, const struct FS_quest_condition& Condition_info, class AObject_quest_condition_parent_C** Quest_condition);
	void ExecuteUbergraph_object_quest_condition_parent(int32 EntryPoint);
};

}


