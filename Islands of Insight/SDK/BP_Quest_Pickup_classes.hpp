#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x269 - 0x250)
// BlueprintGeneratedClass BP_Quest_Pickup.BP_Quest_Pickup_C
class ABP_Quest_Pickup_C : public AQuestPickup
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWBP_QuestItem_C*                      QuestItem;                                         // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Selected;                                          // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Quest_Pickup_C* GetDefaultObj();

	void SetUntargetEvent();
	void ReceiveBeginPlay();
	void Initialize(class AQuestVendor* SpawningVendor, uint8 QuestType);
	void SetTargetEvent();
	void ExecuteUbergraph_BP_Quest_Pickup(int32 EntryPoint, class AQuestVendor* K2Node_Event_spawningVendor, uint8 K2Node_Event_questType);
};

}


