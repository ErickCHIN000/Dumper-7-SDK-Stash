#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x108 (0x3C8 - 0x2C0)
// BlueprintGeneratedClass BP_Onboarding_Manager.BP_Onboarding_Manager_C
class ABP_Onboarding_Manager_C : public AGGTutorial
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   MovementTutorial2Handle;                           // 0x2D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ClimbLaddersTutorialHandle;                        // 0x2E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        CheckNearLaddersRadius;                            // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FF5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   GrindingTutorialHandle;                            // 0x2F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        CheckNearGrindablesRadius;                         // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FF8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   WallrunningTutorialHandle;                         // 0x310(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        DelayUntilWallrunTutorial;                         // 0x320(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FFD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   BasicMechanics2TutorialHandle;                     // 0x328(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   MoveCameraTutorialHandle;                          // 0x338(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   MapTutorialHandle;                                 // 0x348(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   LickTutorialHandle;                                // 0x358(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   HeadbuttTutorialHandle;                            // 0x368(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   MobileGrindingTutorialHandle;                      // 0x378(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   MobileJumpTutorialHandle;                          // 0x388(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   MobileHeadbuttTutorialHandle;                      // 0x398(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   MobileLickTutorialHandle;                          // 0x3A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   MobileBaaTutorialHandle;                           // 0x3B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Onboarding_Manager_C* GetDefaultObj();

	void GetGrindingTutorialHandle(struct FDataTableRowHandle* GrindingTutorialHandle, bool CallFunc_IsMobilePlatform_ReturnValue);
	void CheckIfPlayerIsNearALadder();
	void CheckIfPlayerIsGrinding();
	void CheckIfPlayerIsNearAGrindspline();
	void CheckIfPlayerIsClimbingLadder();
	void ReceiveTick(float DeltaSeconds);
	void OnTutorialActivated(class AGGPlayerController* PC, class AGGGoat* Goat);
	void CreateMapTutorial();
	void BindGoatTowersSynch();
	void GoatTowerSynched(class AGGGoat* Goat);
	void CreateFirstStep();
	void OnMoveCameraRemoved(class AGGTutorial* Tutorial);
	void OnMovementTutorial2Removed(class AGGTutorial* Tutorial);
	void OnIntroTutorialRemoved(class AGGTutorial* Tutorial);
	void CreateWallrunningTutorial();
	void CreateMovementTutorial2();
	void CreateHeadbuttTutorial();
	void CreateLickTutorial();
	void CreateBasicMechanics2Tutorial();
	void OnHeadbuttTutorialRemoved(class AGGTutorial* Tutorial);
	void OnLIckTutorialRemoved(class AGGTutorial* Tutorial);
	void OnCreateBasicMechanics2(class AGGTutorial* Tutorial);
	void CreateFirstStepMobile();
	void OnMobileJumpTutorialRemoved(class AGGTutorial* Tutorial);
	void CreateMobileHeadbuttTutorial();
	void OnMobileHeadbuttTutorialRemoved(class AGGTutorial* Tutorial);
	void CreateMobileLickTutorial();
	void OnMobileLickTutorialRemoved(class AGGTutorial* Tutorial);
	void CreateMobileBaaTutorial();
	void ExecuteUbergraph_BP_Onboarding_Manager(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_1, float K2Node_Event_DeltaSeconds, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class AGGPlayerController* K2Node_Event_PC, class AGGGoat* K2Node_Event_Goat, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, TArray<class ABP_GoatTower_C*>& CallFunc_GetAllActorsOfClass_OutActors, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, int32 CallFunc_Array_Length_ReturnValue, class AGGGoat* K2Node_CustomEvent_Goat, class AGGPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AGGGoat* CallFunc_GetControlledGoat_ReturnValue, class AGGPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AGGGoat* CallFunc_GetControlledGoat_ReturnValue_1, class AGGPlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class AGGGoat* CallFunc_GetControlledGoat_ReturnValue_2, bool CallFunc_IsClimbingLadder_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class AGGPlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, class AGGGoat* CallFunc_GetControlledGoat_ReturnValue_3, class AGGPlayerController* CallFunc_GetOwningPlayer_ReturnValue_4, class AGGGoat* CallFunc_GetControlledGoat_ReturnValue_4, bool CallFunc_IsGrinding_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class AActor*>& Temp_object_Variable, TArray<class AActor*>& Temp_object_Variable_1, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors_1, bool CallFunc_SphereOverlapActors_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class AGGTutorial* K2Node_CustomEvent_Tutorial_8, class AGGPlayerController* CallFunc_GetOwningPlayer_ReturnValue_5, class AGGPlayerController* CallFunc_GetOwningPlayer_ReturnValue_6, class AGGTutorial* K2Node_CustomEvent_Tutorial_7, class AGGPlayerController* CallFunc_GetOwningPlayer_ReturnValue_7, class AGGTutorial* K2Node_CustomEvent_Tutorial_6, int32 Temp_int_Array_Index_Variable, class ABP_GoatTower_C* CallFunc_Array_Get_Item, class AGGPlayerController* CallFunc_GetOwningPlayer_ReturnValue_8, class AGGTutorial* K2Node_CustomEvent_Tutorial_5, class AGGPlayerController* CallFunc_GetOwningPlayer_ReturnValue_9, class AGGTutorial* K2Node_CustomEvent_Tutorial_4, class AGGPlayerController* CallFunc_GetOwningPlayer_ReturnValue_10, class AGGTutorial* K2Node_CustomEvent_Tutorial_3, class AGGTutorial* CallFunc_CreateTutorial_OutCreatedTutorial, bool CallFunc_CreateTutorial_ReturnValue, class AGGTutorial* CallFunc_CreateTutorial_OutCreatedTutorial_1, bool CallFunc_CreateTutorial_ReturnValue_1, class AGGTutorial* CallFunc_CreateTutorial_OutCreatedTutorial_2, bool CallFunc_CreateTutorial_ReturnValue_2, class AGGTutorial* CallFunc_CreateTutorial_OutCreatedTutorial_3, bool CallFunc_CreateTutorial_ReturnValue_3, bool CallFunc_RemoveTutorial_ReturnValue, bool CallFunc_RemoveTutorial_ReturnValue_1, class AGGTutorial* CallFunc_CreateTutorial_OutCreatedTutorial_4, bool CallFunc_CreateTutorial_ReturnValue_4, class AGGTutorial* CallFunc_CreateTutorial_OutCreatedTutorial_5, bool CallFunc_CreateTutorial_ReturnValue_5, class AGGTutorial* CallFunc_CreateTutorial_OutCreatedTutorial_6, bool CallFunc_CreateTutorial_ReturnValue_6, const struct FDataTableRowHandle& CallFunc_GetGrindingTutorialHandle_GrindingTutorialHandle, class AGGTutorial* CallFunc_CreateTutorial_OutCreatedTutorial_7, bool CallFunc_CreateTutorial_ReturnValue_7, bool CallFunc_RemoveTutorial_ReturnValue_2, const struct FDataTableRowHandle& CallFunc_GetGrindingTutorialHandle_GrindingTutorialHandle_1, bool CallFunc_IsMobilePlatform_ReturnValue, bool CallFunc_RemoveTutorial_ReturnValue_3, class AGGTutorial* CallFunc_CreateTutorial_OutCreatedTutorial_8, bool CallFunc_CreateTutorial_ReturnValue_8, class AGGPlayerController* CallFunc_GetOwningPlayer_ReturnValue_11, class AGGTutorial* K2Node_CustomEvent_Tutorial_2, class AGGTutorial* CallFunc_CreateTutorial_OutCreatedTutorial_9, bool CallFunc_CreateTutorial_ReturnValue_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class AGGPlayerController* CallFunc_GetOwningPlayer_ReturnValue_12, class AGGTutorial* K2Node_CustomEvent_Tutorial_1, class AGGTutorial* CallFunc_CreateTutorial_OutCreatedTutorial_10, bool CallFunc_CreateTutorial_ReturnValue_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class AGGPlayerController* CallFunc_GetOwningPlayer_ReturnValue_13, class AGGTutorial* K2Node_CustomEvent_Tutorial, class AGGTutorial* CallFunc_CreateTutorial_OutCreatedTutorial_11, bool CallFunc_CreateTutorial_ReturnValue_11, class AGGPlayerController* CallFunc_GetOwningPlayer_ReturnValue_14, class AGGTutorial* CallFunc_CreateTutorial_OutCreatedTutorial_12, bool CallFunc_CreateTutorial_ReturnValue_12, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


