#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x44 (0x264 - 0x220)
// BlueprintGeneratedClass object_quest_event_parent.object_quest_event_parent_C
class AObject_quest_event_parent_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UArrowComponent*                       Root_arrow;                                        // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class Abp_quest_actor_C*                     Quest_actor;                                       // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_quest_event                        Event_data;                                        // 0x238(0x25)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_2143[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Object_lifespan;                                   // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AObject_quest_event_parent_C* GetDefaultObj();

	void Init_event_object(class Abp_quest_actor_C* Quest_actor, const struct FS_quest_event& Event_data);
	void Call_event(class Abp_quest_actor_C* Quest_actor, const struct FS_quest_event& Event_data);
	void ExecuteUbergraph_object_quest_event_parent(int32 EntryPoint, class Abp_quest_actor_C* K2Node_CustomEvent_quest_actor, const struct FS_quest_event& K2Node_CustomEvent_event_data);
};

}


