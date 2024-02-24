#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3F (0x410 - 0x3D1)
// BlueprintGeneratedClass BuildableMaster_Container.BuildableMaster_Container_C
class ABuildableMaster_Container_C : public ABuildable_MASTER_C
{
public:
	uint8                                        Pad_1E63[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FS_ReplicatedContainerInfo>    ReplicatedContainers;                              // 0x3E0(0x10)(Edit, BlueprintVisible, SaveGame, ContainsInstancedReference)
	TArray<int32>                                MainUIDs;                                          // 0x3F0(0x10)(Edit, BlueprintVisible, SaveGame)
	TArray<struct FS_InvWeight>                  Weights;                                           // 0x400(0x10)(Edit, BlueprintVisible, SaveGame)

	static class UClass* StaticClass();
	static class ABuildableMaster_Container_C* GetDefaultObj();

	void JigMP_OnMainContainerItemRemoved(int32 FromContainerUID, int32 ItemUID, class FName ContainerName, const struct FRepItemInfo& ItemRemovedInfo, bool* Result);
	void JigMP_OnMainContainerItemAdded(int32 TocontainerUID, int32 ItemUID, class FName ToContainerName, const struct FRepItemInfo& ItemInfo, class FName FromMain, bool* Result, class AActor** ActorRef);
	void ActorPreSave();
	void ActorLoaded();
	void ReceiveBeginPlay();
	void OnInteractBuildable(class AActor* Actor);
	void UpdateStorageStat();
	void Event_BeginInteract();
	void BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature(bool bIsBeyondLastLayer, int32 LayerIndex, bool bIsSeen);
	void ExecuteUbergraph_BuildableMaster_Container(int32 EntryPoint, bool K2Node_ComponentBoundEvent_bIsBeyondLastLayer, int32 K2Node_ComponentBoundEvent_LayerIndex, bool K2Node_ComponentBoundEvent_bIsSeen, bool K2Node_SwitchInteger_CmpSuccess, bool Temp_bool_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ABP_MPGameState_C* K2Node_DynamicCast_AsBP_MPGame_State, bool K2Node_DynamicCast_bSuccess, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UUserWidget* CallFunc_SetupInventoryWidget_InventoryWidgetRef, class AActor* K2Node_Event_Actor, TScriptInterface<class IBP_JigCharacterInterface_C> K2Node_DynamicCast_AsBP_Jig_Character_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsInventoryVisible__Result, bool CallFunc_AddJigWidgetToContent_Result, bool CallFunc_Not_PreBool_ReturnValue, TScriptInterface<class IBP_JigCharacterInterface_C> K2Node_DynamicCast_AsBP_Jig_Character_Interface_1, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IBPI_Player_C> K2Node_DynamicCast_AsBPI_Player, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_RequestServerData_Result, TArray<struct FContainerPickupsInfo>& CallFunc_GetContainerItems_AllItems, int32 CallFunc_Array_Length_ReturnValue, class AHUD_Game_C* CallFunc_GetHUD_HUD, int64 CallFunc_Conv_IntToInt64_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const class FString& K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
};

}


