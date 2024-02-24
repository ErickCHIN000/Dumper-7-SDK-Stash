#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x4F0 - 0x488)
// BlueprintGeneratedClass BP_IcarusPlayerState.BP_IcarusPlayerState_C
class ABP_IcarusPlayerState_C : public AIcarusPlayerState
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x488(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x490(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        PlayerIdentityVisual;                              // 0x498(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	int32                                        PlayerMapColorIndex;                               // 0x49C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusWaypointActor*                  PersonalWaypoint;                                  // 0x4A0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PlayerHealth;                                      // 0x4A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugDeployablePlacement;                          // 0x4AC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_166C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class AIcarusWaypointActor>    IcarusWaypointClass;                               // 0x4B0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UClass*                                WaypointClass;                                     // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            PlayerColorSelected;                               // 0x4E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ABP_IcarusPlayerState_C* GetDefaultObj();

	void HasValidPlayerColor(bool* HasValidColor, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void OnRep_PlayerIdentityVisual(bool CallFunc_HasValidPlayerColor_HasValidColor);
	int32 GetPlayerVisualIdentity();
	void SetDeployableDebugEnabled(bool Enabled);
	void OnLoaded_DEC21D7041DA4135F51EAE8C5F4694B4(TSubclassOf<class UObject> Loaded);
	void OnLoaded_A3EAECF7499A23B0349644B397036FC7(TSubclassOf<class UObject> Loaded);
	void ReceiveBeginPlay();
	void ServerMovePersonalWaypoint(const struct FVector& Location, class AController* OwningController);
	void ServerDestroyWaypoint();
	void Server_UpdateHealthValue(float NewHealth);
	void InitialisePlayerColor();
	void OnConnectedPlayerInitialised(struct FConnectedPlayer& ConnectedPlayer);
	void TryInitialisePlayerColor();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_BP_IcarusPlayerState(int32 EntryPoint, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, class UClass* Temp_class_Variable, class UIcarusOrchestrationSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UClass* Temp_class_Variable_1, bool CallFunc_IsServer_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsIcarus_Waypoint_Actor, bool K2Node_ClassDynamicCast_bSuccess, const struct FVector& K2Node_CustomEvent_Location, class AController* K2Node_CustomEvent_OwningController, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AIcarusWaypointActor* CallFunc_FinishSpawningActor_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, float K2Node_CustomEvent_NewHealth, float CallFunc_NormalizeToRange_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AIcarusGameStateSurvival* K2Node_DynamicCast_AsIcarus_Game_State_Survival, bool K2Node_DynamicCast_bSuccess, const struct FPlayerCharacterID& CallFunc_GetPlayerCharacterID_ReturnValue, bool CallFunc_HasValidPlayerCharacterID_ReturnValue, int32 CallFunc_GetPlayerColorForPlayerID_ReturnValue, class UConnectedPlayers* CallFunc_GetConnectedPlayers_ReturnValue, const struct FConnectedPlayer& K2Node_CustomEvent_ConnectedPlayer, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FOrchestrationEventsEnum& CallFunc_MakeOrchestrationEventsEnum_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_CheckEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_1);
	void PlayerColorSelected__DelegateSignature();
};

}


