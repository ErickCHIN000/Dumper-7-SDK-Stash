#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x2E8 - 0x2A0)
// BlueprintGeneratedClass BP_WaterWell.BP_WaterWell_C
class ABP_WaterWell_C : public ABP_MasterObject_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAIOSubjectComponent*                  AIOSubject;                                        // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AUltra_Dynamic_Weather_C*              UDW;                                               // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          WellTimer;                                         // 0x2C0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentWater;                                      // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxWater;                                          // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Outline_;                                          // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3514[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CurrentActor;                                      // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_WaterWell_C* GetDefaultObj();

	void ComponentsToSave(TArray<class UActorComponent*>* Components);
	void GetJigMultiplayerComponent(class UBP_JigMultiplayer_C** JigComp);
	void GetItemInfo(struct FFItemInfo* Info, struct FS_RandomStatsConfig* RandomStatsConfig);
	void JigCanInteract(bool* Result);
	void JigSetCanInteract(bool CanInteract, bool EnablePhysics, bool* Result);
	void SetPickupCount(int32 NewCount, bool* Result);
	void OnRequestServerInteract(class AActor* Actor, int32 OptionIndex, bool* Result);
	void GetInteractOptions(bool* EnableContext_, TArray<class FText>* Options, TArray<class FText>* Stats, TArray<class FText>& K2Node_MakeArray_Array, TArray<class FText>& K2Node_MakeArray_Array_1);
	void AddItem(class UBP_JigMultiplayer_C* Comp, class FName ItemId, enum class E_DataTableType DTRef, int32 Count, bool Added_, int32 UpdateUID, int32 NewCount, int32 TempCount, const TArray<int32>& NewCounts, const TArray<int32>& UpdateUIDs, const struct FRepItemInfo& TempInfo, bool Temp_bool_Variable, const struct FRepItemInfo& K2Node_MakeStruct_RepItemInfo, class UJSI_Slot_C* CallFunc_JigTryAddGetPendingRef_OutputPin, const struct FContainerPickupsInfo& CallFunc_GetPickupInfoFromDT_ContainerPickupsInfo, bool CallFunc_GetPickupInfoFromDT_Found, int32 CallFunc_GetUniqueID_UniqueServerID, bool CallFunc_isRotated__ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FContainerPickupsInfo& K2Node_SetFieldsInStruct_StructOut, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable_1, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, class APawn* CallFunc_GetPlayerPawn_ReturnValue, TScriptInterface<class IBP_JigMPComponentInterface_C> K2Node_DynamicCast_AsBP_Jig_MPComponent_Interface, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_JigMP_OnRequestDropItem_ActorRef, TScriptInterface<class IBP_MpInteractInterface_C> K2Node_DynamicCast_AsBP_Mp_Interact_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_SetPickupCount_Result, const struct FContainerPickupsInfo& CallFunc_RemoveGetInfo_ItemInfo, TArray<struct FS_ReplicatedContainerInfo>& CallFunc_RemoveGetInfo_RepContainers, int32 CallFunc_RemoveGetInfo_VendorNewCount, bool CallFunc_RemoveGetInfo_CountRemoved_, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue_1, TArray<struct FS_ReplicatedContainerInfo>& K2Node_MakeArray_Array, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_AddNewItemToSlot_Added, const struct FContainerPickupsInfo& CallFunc_AddNewItemToSlot_AddedItemInfo, int32 CallFunc_Array_Add_ReturnValue_1);
	void UpdateCurrentWaterUI(bool Decrease_, double Amount, class AHUD_Game_C* CallFunc_GetHUD_HUD, class AHUD_Game_C* CallFunc_GetHUD_HUD_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_Format_ReturnValue, double CallFunc_FClamp_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, class FText CallFunc_Format_ReturnValue_1);
	void ActorLoaded();
	void ActorPreSave();
	void ActorSaved();
	void OnStopExecuteInteract(class AActor* InteractingActor);
	void OnExecuteInteract_Dialogue(class AActor* InteractingActor);
	void ReceiveBeginPlay();
	void Event_Water();
	void Outline(bool NewValue);
	void OnExecuteInteractEnded();
	void SetInteractOption(int32 OptionIndex);
	void OnEndInteract();
	void OnBeginInteract(class AActor* InteractingActor);
	void OnServerExecuteInteract(int32 OptionIndex, class AActor* ByActor);
	void OnExecuteInteract(class AActor* InteractingActor, int32 OptionIndex);
	void ExecuteUbergraph_BP_WaterWell(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AActor* K2Node_Event_InteractingActor_3, class AActor* K2Node_Event_InteractingActor_2, class AUltra_Dynamic_Weather_C* CallFunc_GetUDW_UDW, bool K2Node_CustomEvent_NewValue, class AHUD_Game_C* CallFunc_GetHUD_HUD, class AHUD_Game_C* CallFunc_GetHUD_HUD_1, class AHUD_Game_C* CallFunc_GetHUD_HUD_2, int32 K2Node_Event_OptionIndex_2, class AActor* K2Node_Event_InteractingActor_1, TScriptInterface<class IBPI_Player_C> K2Node_DynamicCast_AsBPI_Player, bool K2Node_DynamicCast_bSuccess, class UBP_JigMultiplayer_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_ServerFindThenConsumeByItemID_Result, bool CallFunc_ServerFindThenConsumeByItemID_Result_1, bool CallFunc_ServerFindThenConsumeByItemID_Result_2, TScriptInterface<class IBPI_Player_C> K2Node_DynamicCast_AsBPI_Player_1, bool K2Node_DynamicCast_bSuccess_1, int32 K2Node_Event_OptionIndex_1, class AActor* K2Node_Event_ByActor, class ABP_PlayerCharacter_C* CallFunc_GetPlayerRef_Player, class UHungerThirstComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess, class AActor* K2Node_Event_InteractingActor, int32 K2Node_Event_OptionIndex, double CallFunc_Subtract_DoubleDouble_ReturnValue, TScriptInterface<class IBP_MpInteractInterface_C> K2Node_DynamicCast_AsBP_Mp_Interact_Interface, bool K2Node_DynamicCast_bSuccess_2, double CallFunc_Add_DoubleDouble_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, bool CallFunc_OnRequestServerInteract_Result, bool CallFunc_GetBoolCVar_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2);
};

}


