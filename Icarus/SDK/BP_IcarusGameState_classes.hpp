#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x5D8 - 0x580)
// BlueprintGeneratedClass BP_IcarusGameState.BP_IcarusGameState_C
class ABP_IcarusGameState_C : public AIcarusGameStateSurvival
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x580(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_VoxelResourceDistribution_C*       BP_VoxelResourceDistribution;                      // 0x588(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x590(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                Host;                                              // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x5A0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_DialogueManager_C*                 DialogueManager;                                   // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       DamageOffsets;                                     // 0x5C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        DamageOffsetIndex;                                 // 0x5D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LastDamageTime;                                    // 0x5D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_IcarusGameState_C* GetDefaultObj();

	void GetDamageOffset(struct FVector* Offset, int32 TimeNow, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_GetLevelTimeElapsedSec_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void InitDamageOffsets(const struct FVector& Temp_struct_Variable, const struct FVector& Temp_struct_Variable_1, const struct FVector& Temp_struct_Variable_2, const struct FVector& Temp_struct_Variable_3, const struct FVector& Temp_struct_Variable_4, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4);
	void GetSessionSpawnGroup(int32* PlayerSpawnGroup, bool* Initialised, bool Valid, class UProspectSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FProspectInfo& CallFunc_GetActiveProspectInfo_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FProspectListRowHandle& CallFunc_MakeProspectList_ReturnValue, const struct FIcarusProspect& CallFunc_GetProspectListStruct_ProspectList, enum class EValid CallFunc_GetProspectListStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess);
	void Log(const class FString& Description, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void ReceiveBeginPlay();
	void Multi_SpawnFloatingDamageNumbers(const struct FVector& Location, enum class EIcarusDamageType DamageType, int32 Value, const struct FCriticalHitAreasEnum& CriticalHit);
	void SpawnFloatingDamageNumbers(class AActor* Actor, struct FIcarusDamagePacket& DamagePacket);
	void Multi_DamageLogging(class AActor* Actor, const struct FIcarusDamagePacket& DamagePacket);
	void QuestCleanup();
	void ExecuteUbergraph_BP_IcarusGameState(int32 EntryPoint, TArray<class ABP_Downed_Drone_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, const struct FLinearColor& Temp_struct_Variable_4, const struct FLinearColor& Temp_struct_Variable_5, const struct FLinearColor& Temp_struct_Variable_6, const struct FLinearColor& Temp_struct_Variable_7, const struct FLinearColor& Temp_struct_Variable_8, const struct FLinearColor& Temp_struct_Variable_9, const struct FLinearColor& Temp_struct_Variable_10, const struct FLinearColor& Temp_struct_Variable_11, const struct FLinearColor& Temp_struct_Variable_12, const struct FLinearColor& Temp_struct_Variable_13, const struct FLinearColor& Temp_struct_Variable_14, const struct FLinearColor& Temp_struct_Variable_15, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, int32 Temp_int_Array_Index_Variable, class AInventoryContainerManager* CallFunc_FinishSpawningActor_ReturnValue, int32 Temp_int_Loop_Counter_Variable, enum class EIcarusDamageType Temp_byte_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, class ABP_DisasterController_C* CallFunc_FinishSpawningActor_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_3, class ABP_Downed_Drone_C* CallFunc_Array_Get_Item, const struct FVector& K2Node_CustomEvent_Location, enum class EIcarusDamageType K2Node_CustomEvent_DamageType, int32 K2Node_CustomEvent_Value, const struct FCriticalHitAreasEnum& K2Node_CustomEvent_CriticalHit, const struct FTransform& CallFunc_MakeTransform_ReturnValue_2, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, class ABP_IcarusFLOD_Default_C* CallFunc_FinishSpawningActor_ReturnValue_2, class AFLOD* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_IsServer_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings, class AActor* K2Node_Event_Actor, const struct FIcarusDamagePacket& K2Node_Event_DamagePacket, bool CallFunc_GetShowDamageNumbers_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_NotEqual_EnumEnum_ReturnValue, bool CallFunc_NotEqual_EnumEnum_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_BooleanAND_ReturnValue, class AIcarusPlayerController* K2Node_DynamicCast_AsIcarus_Player_Controller, bool K2Node_DynamicCast_bSuccess, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, enum class EIcarusDamageType CallFunc_GetDamageTypeFromEvent_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class AActor* K2Node_CustomEvent_Actor, const struct FIcarusDamagePacket& K2Node_CustomEvent_DamagePacket, bool CallFunc_IsCheatsEnabled_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, enum class EIcarusDamageType CallFunc_GetDamageTypeFromEvent_ReturnValue_1, enum class EValid CallFunc_GetCheatController_Paths, class ACheatController* CallFunc_GetCheatController_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_IsVerboseDamageLoggingEnabled_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const struct FLinearColor& K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue_1, class UPlayerFeedbackSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, bool CallFunc_IsValid_ReturnValue_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3, class ABP_DialogueManager_C* CallFunc_FinishSpawningActor_ReturnValue_3, class UProspectSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const class FString& CallFunc_GetActiveProspectID_ReturnValue, bool CallFunc_HasActiveProspect_ReturnValue, int32 CallFunc_GetHashFromString_ReturnValue, int32 CallFunc_Abs_Int_ReturnValue, const struct FVector& CallFunc_GetDamageOffset_Offset, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_4, TArray<class ABP_Transport_Pod_Base_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4, class ABP_Transport_Pod_Base_C* CallFunc_Array_Get_Item_1, class ABP_DamageText_C* CallFunc_FinishSpawningActor_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class AMapSearchAreaProxy*>& CallFunc_GetAllActorsOfClass_OutActors_2, bool CallFunc_Less_IntInt_ReturnValue_1, class AMapSearchAreaProxy* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, TArray<class AMapIconProxyActor_C*>& CallFunc_GetAllActorsOfClass_OutActors_3, bool CallFunc_Less_IntInt_ReturnValue_2, class AMapIconProxyActor_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3);
};

}

