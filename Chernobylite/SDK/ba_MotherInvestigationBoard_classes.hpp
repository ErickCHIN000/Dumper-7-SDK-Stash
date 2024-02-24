#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x148 (0x378 - 0x230)
// BlueprintGeneratedClass ba_MotherInvestigationBoard.ba_MotherInvestigationBoard_C
class Aba_MotherInvestigationBoard_C : public AStaticMeshActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UChildActorComponent*                  ba_BoardMarker3;                                   // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  ba_BoardMarker2;                                   // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  bp_MinimapTag;                                     // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*              SceneCaptureComponent2D;                           // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                      Camera;                                            // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  ba_InvestigationBoard_Controller;                  // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  ba_BoardMarker0;                                   // 0x270(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  ba_BoardMarker1;                                   // 0x278(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       LowPoint;                                          // 0x280(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       HighPoint;                                         // 0x288(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          KnownBoards;                                       // 0x290(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        CurrentIndex;                                      // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8E5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class Aba_BoardMarker_C*>             Boards;                                            // 0x2A8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                        CurrentBoardIndex;                                 // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8E9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CurrentBoardclass;                                 // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Aba_InvestigationBoard_Controller_C*   Controller;                                        // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                        NewVar_0;                                          // 0x2D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class Aba_BoardMarker_C*                     CurrentBoard;                                      // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            StartAnimation;                                    // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Interaction_Started;                               // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            IntreractionFinished;                              // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        TmpIdx;                                            // 0x318(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class UClass*, bool>                    CompletedBoardsMap;                                // 0x320(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                  ToOpen;                                            // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Aba_MotherInvestigationBoard_C* GetDefaultObj();

	TArray<class UObject*> GetObjectsToSave(TArray<class UObject*>& K2Node_MakeArray_Array);
	bool HasObjectsToSave();
	bool ShouldUpdateOverlapsOnLoad();
	void IsAnyFractalWorldAvailable(bool* Result, bool IsCompleted, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, TArray<class UClass*>& CallFunc_GetKnownBoardClasses_BoardClasses1, int32 CallFunc_Array_Length_ReturnValue, class UClass* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_PermanentDataGetValue_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_PermanentDataGetValue_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void GetKnownBoardClasses(TArray<class UClass*>* BoardClasses1, const TArray<class UClass*>& BoardClasses, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<class FName>& CallFunc_GetKnownInvestigationBoards_Return, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FSt_InvestigationBoardDesc& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, TSubclassOf<class AActor> K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, TSubclassOf<class Aba_InvestigationBoard_Parent_C> K2Node_ClassDynamicCast_AsBa_Investigation_Board_Parent, bool K2Node_ClassDynamicCast_bSuccess_1, int32 CallFunc_Array_AddUnique_ReturnValue);
	void GetBoardForIndex(int32 Index, class UClass** Return, class FName CallFunc_Array_Get_Item, const struct FSt_InvestigationBoardDesc& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, TSubclassOf<class AActor> K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, TSubclassOf<class Aba_InvestigationBoard_Parent_C> K2Node_ClassDynamicCast_AsBa_Investigation_Board_Parent, bool K2Node_ClassDynamicCast_bSuccess_1);
	void ChangeCurrentBoardContent(int32 Direction, bool Temp_bool_Variable, class UClass* CallFunc_GetBoardForIndex_Return, int32 Temp_int_Variable, bool Temp_bool_Variable_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 K2Node_Select_Default, int32 K2Node_Select_Default_1);
	void ChangeBoard(int32 Direction, class Aba_BoardMarker_C** ReturnBoard, class Aba_BoardMarker_C* ActiveBoard, const TArray<class Aba_BoardMarker_C*>& InactiveBoards, int32 CallFunc_ChangeBoardIndex_ReturnValue, class Aba_BoardMarker_C* CallFunc_Array_Get_Item);
	int32 ChangeBoardIndex(int32 Direction, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 K2Node_Select_Default);
	void AsBoardMarker(class UChildActorComponent* ChildActor, class Aba_BoardMarker_C** AsBa_Board_Marker, class Aba_BoardMarker_C* K2Node_DynamicCast_AsBa_Board_Marker, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void PrepareDataForSave();
	void OutputBoardRequest(class UClass* RequesteBoardClass, int32 Direction);
	void LoadingFinished();
	void ReceiveBeginPlay();
	void NewNote();
	void Prepareboards();
	void Load_FractalWorld();
	void StartWormholeAnimation_Event_0();
	void InteractionStarted(class Aba_ia_BaseInteractableObject_01_C* Sender);
	void UpdateEvents();
	void BoardClosed_Event_0();
	void TurnOffBoardIndicator();
	void TurnOnBoardIndicator();
	void ExecuteUbergraph_ba_MotherInvestigationBoard(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool Temp_bool_IsClosed_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<class FName>& CallFunc_GetKnownInvestigationBoards_Return, int32 CallFunc_Array_Length_ReturnValue, class UClass* CallFunc_SpawnBoard_Class, bool CallFunc_SpawnBoard_IsCompleted, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, TArray<class UClass*>& CallFunc_GetKnownBoardClasses_BoardClasses1, class UClass* K2Node_CustomEvent_RequesteBoardClass, int32 K2Node_CustomEvent_Direction, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class Aba_BoardMarker_C* CallFunc_ChangeBoard_ReturnBoard, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UClass* CallFunc_Array_Get_Item, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, class Abp_MinimapTag_C* K2Node_DynamicCast_AsBp_Minimap_Tag, bool K2Node_DynamicCast_bSuccess, class Abp_MinimapTag_C* K2Node_DynamicCast_AsBp_Minimap_Tag_1, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Array_Index_Variable_2, TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*>& CallFunc_GetAllActorsOfClass_OutActors, class Aba_BoardMarker_C* CallFunc_Array_Get_Item_1, class AActor* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1, class UClass* CallFunc_GetBoardForIndex_Return, class UClass* CallFunc_SpawnBoard_Class_1, bool CallFunc_SpawnBoard_IsCompleted_1, class Aba_ia_BaseInteractableObject_01_C* K2Node_CustomEvent_Sender, TScriptInterface<class IInteractable> CallFunc_UnlockInteraction_self_CastInput, TScriptInterface<class IInteractable> CallFunc_LockInteraction_self_CastInput, TArray<class UChildActorComponent*>& K2Node_MakeArray_Array, class UChildActorComponent* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_4, class Aba_BoardMarker_C* K2Node_DynamicCast_AsBa_Board_Marker, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UClass* K2Node_Select_Default, int32 CallFunc_SelectInt_ReturnValue);
	void IntreractionFinished__DelegateSignature();
	void Interaction_Started__DelegateSignature();
	void StartAnimation__DelegateSignature();
};

}


