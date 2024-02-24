#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x240 - 0x220)
// BlueprintGeneratedClass BP_IcarusWaypointActor.BP_IcarusWaypointActor_C
class ABP_IcarusWaypointActor_C : public AIcarusWaypointActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UIcarusMapIconComponent*               IcarusMapIcon;                                     // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerState*                    OwningPlayerState;                                 // 0x238(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_IcarusWaypointActor_C* GetDefaultObj();

	void OnRep_OwningPlayerState();
	class AIcarusPlayerState* GetOwningPlayerState();
	void CleanUpWaypointRefs(int32 FoundAddedWaypointsIndex, int32 FoundWaypointLocationIndex);
	void ServerKillWaypoint();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void InitForPlayer(class AIcarusPlayerState* OwningPlayerState);
	void SetupWidget();
	void ExecuteUbergraph_BP_IcarusWaypointActor(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, class AIcarusPlayerState* K2Node_Event_OwningPlayerState);
};

}


