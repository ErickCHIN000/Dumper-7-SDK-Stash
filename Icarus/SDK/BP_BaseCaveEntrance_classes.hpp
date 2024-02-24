#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x320 - 0x2C0)
// BlueprintGeneratedClass BP_BaseCaveEntrance.BP_BaseCaveEntrance_C
class ABP_BaseCaveEntrance_C : public ACaveEntranceBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       VoxelBlockerMarker;                                // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       BlockerMeshes;                                     // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Mesh;                                              // 0x2D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           EntranceMesh;                                      // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AVoxelResource*                        VoxelRef;                                          // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         VisuliseMeshBlocker;                               // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	bool                                         VisuliseVoxelBlocker;                              // 0x2F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5F88[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                VoxelBlocker;                                      // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRandomStream                         Stream;                                            // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor)
	int32                                        UniqueEntranceID;                                  // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECaveBlockerState                 BlockerState;                                      // 0x30C(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F98[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVoxelMinedSphere>             VoxelSaveData;                                     // 0x310(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_BaseCaveEntrance_C* GetDefaultObj();

	class AVoxelResource* GetVoxelActor();
	void OnRep_BlockerState();
	void UpdateVoxelBlocker(bool bLocked, bool ForceNewVoxel, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_Vector_GetAbs_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AVoxelResource* CallFunc_FinishSpawningActor_ReturnValue, const struct FTransform& Temp_struct_Variable, class UIcarusNavigationDirtier* CallFunc_AddComponent_ReturnValue);
	void UpdateMeshBlocker(bool bLock, class FName Temp_name_Variable, class FName Temp_name_Variable_1, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, class FName K2Node_Select_Default, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, int32 CallFunc_Array_Length_ReturnValue, class USceneComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPrimitiveComponent* K2Node_DynamicCast_AsPrimitive_Component, bool K2Node_DynamicCast_bSuccess);
	void InitBlockedState(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1);
	void UpdateDebug(bool CallFunc_IsWithEditor_ReturnValue, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, class UChildActorComponent* CallFunc_AddComponent_ReturnValue);
	void UserConstructionScript(int32 CallFunc_RandomInteger_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue);
	void OnSeedInitialised(int32 Seed);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void IcarusBeginPlay();
	void ReceiveBeginPlay();
	void SetVoxelBlocker(class AVoxelResource* VoxelBlocker);
	void SetVoxelBlockerSaveData(TArray<struct FVoxelMinedSphere>& VoxelBlockerSaveData);
	void ExecuteUbergraph_BP_BaseCaveEntrance(int32 EntryPoint, enum class ECaveBlockerState Temp_byte_Variable, enum class ECaveBlockerState Temp_byte_Variable_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AIcarusGameStateSurvival* K2Node_DynamicCast_AsIcarus_Game_State_Survival, bool K2Node_DynamicCast_bSuccess, int32 K2Node_CustomEvent_Seed, int32 CallFunc_Add_IntInt_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_RandomBoolFromStream_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AIcarusGameModeSurvival* K2Node_DynamicCast_AsIcarus_Game_Mode_Survival, bool K2Node_DynamicCast_bSuccess_1, class AVoxelResource* K2Node_Event_VoxelBlocker, bool CallFunc_TryResolveRecorderForOwner_ReturnValue, TArray<struct FVoxelMinedSphere>& K2Node_Event_VoxelBlockerSaveData, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsServer_ReturnValue_1, enum class ECaveBlockerState K2Node_Select_Default);
};

}


