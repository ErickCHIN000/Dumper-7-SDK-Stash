#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4F (0x420 - 0x3D1)
// BlueprintGeneratedClass Buildable_BatteryCharger.Buildable_BatteryCharger_C
class ABuildable_BatteryCharger_C : public ABuildable_MASTER_C
{
public:
	uint8                                        Pad_899[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<int32>                                BatteryUIDs;                                       // 0x3E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	TArray<struct FS_ReplicatedContainerInfo>    ReplicatedContainers;                              // 0x3F0(0x10)(Edit, BlueprintVisible, SaveGame, ContainsInstancedReference)
	TArray<int32>                                MainUIDs;                                          // 0x400(0x10)(Edit, BlueprintVisible, SaveGame)
	TArray<struct FS_InvWeight>                  Weights;                                           // 0x410(0x10)(Edit, BlueprintVisible, SaveGame)

	static class UClass* StaticClass();
	static class ABuildable_BatteryCharger_C* GetDefaultObj();

	void JigMP_OnMainContainerItemRemoved(int32 FromContainerUID, int32 ItemUID, class FName ContainerName, const struct FRepItemInfo& ItemRemovedInfo, bool* Result);
	void JigMP_OnMainContainerItemAdded(int32 TocontainerUID, int32 ItemUID, class FName ToContainerName, const struct FRepItemInfo& ItemInfo, class FName FromMain, bool* Result, class AActor** ActorRef, int32 CallFunc_Array_AddUnique_ReturnValue);
	void JigMP_OnRequestDropItem(const struct FRepItemInfo& ItemInfo, class FName ContainerName, class AActor** ActorRef, double CallFunc_RandomFloatInRange_ReturnValue, class UDataTable* CallFunc_GetDtRef_DTReference, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FFItemInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_2, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, float CallFunc_MakeRotator_Yaw_ImplicitCast);
	void ReceiveBeginPlay();
	void OnInteractBuildable(class AActor* Actor);
	void Event_PowerOn();
	void Event_TimerPower();
	void ActorPreSave();
	void ActorLoaded();
	void Event_PowerOff();
	void UpdateStorageStat();
	void Event_BeginInteract();
	void BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature(bool bIsBeyondLastLayer, int32 LayerIndex, bool bIsSeen);
	void ExecuteUbergraph_Buildable_BatteryCharger(int32 EntryPoint, bool K2Node_ComponentBoundEvent_bIsBeyondLastLayer, int32 K2Node_ComponentBoundEvent_LayerIndex, bool K2Node_ComponentBoundEvent_bIsSeen, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool Temp_bool_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, bool Temp_bool_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsInventoryVisible__Result, class UUserWidget* CallFunc_SetupInventoryWidget_InventoryWidgetRef, bool CallFunc_Not_PreBool_ReturnValue, class AActor* K2Node_Event_Actor, TScriptInterface<class IBP_JigCharacterInterface_C> K2Node_DynamicCast_AsBP_Jig_Character_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBP_JigCharacterInterface_C> K2Node_DynamicCast_AsBP_Jig_Character_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_AddJigWidgetToContent_Result, bool CallFunc_RequestServerData_Result, TScriptInterface<class IBPI_Player_C> K2Node_DynamicCast_AsBPI_Player, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FContainerPickupsInfo& CallFunc_GetItemByUID_Item, bool CallFunc_GetItemByUID_Found, bool CallFunc_GetItemByUID_InMainContainer_, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_Server_Func_Update_Durability_by_UID_Updated, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ABP_MPGameState_C* K2Node_DynamicCast_AsBP_MPGame_State, bool K2Node_DynamicCast_bSuccess_3, TArray<struct FContainerPickupsInfo>& CallFunc_GetContainerItems_AllItems, int32 CallFunc_Array_Length_ReturnValue_1, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const class FString& K2Node_Select_Default, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const class FString& K2Node_Select_Default_1, class AHUD_Game_C* CallFunc_GetHUD_HUD, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
};

}


