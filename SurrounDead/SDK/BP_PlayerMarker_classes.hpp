#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x368 - 0x298)
// BlueprintGeneratedClass BP_PlayerMarker.BP_PlayerMarker_C
class ABP_PlayerMarker_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_PlayerMarker_C*>             Markers;                                           // 0x2A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FS_MarkerData                         Marker_Data;                                       // 0x2B8(0x89)(Edit, BlueprintVisible, SaveGame, HasGetValueTypeHash)
	uint8                                        Pad_32AA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Index;                                             // 0x348(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32AC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABP_CompassMarker_C*>           CompassMarkers;                                    // 0x350(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class ABP_CompassMarker_C*                   CompassMarker;                                     // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PlayerMarker_C* GetDefaultObj();

	void ComponentsToSave(TArray<class UActorComponent*>* Components);
	void ActorPreSave();
	void ActorSaved();
	void Event_AddMarker();
	void ActorLoaded();
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_PlayerMarker(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UBPC_MinimapSystem_C* CallFunc_Get_Minimap_Component_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UBPC_MinimapSystem_C* CallFunc_Get_Minimap_Component_ReturnValue_1, TArray<class UW_PlayerMarker_C*>& CallFunc_Add_Saved_Player_Marker_Markers, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_CompassMarker_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABP_CompassMarker_C* CallFunc_FinishSpawningActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, TArray<class UW_PlayerMarker_C*>& CallFunc_Add_Player_Marker_Markers);
};

}


