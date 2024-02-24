#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x498 - 0x430)
// BlueprintGeneratedClass PauseMenu.PauseMenu_C
class APauseMenu_C : public ATLLPauseMenu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(Transient, DuplicateTransient)
	class UUISurvivalMapComponent_C*             UISurvivalMapComponent;                            // 0x438(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UUIPauseMenuComponent_C*               UIPauseMenuComponent;                              // 0x440(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UUITopMenuComponent_C*                 UITopMenuComponent;                                // 0x448(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x450(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMsn_pose_top00_C*                     WidgetMsnPoseTop;                                  // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AYesNoPopUp_C*                         YesNoPop;                                          // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsShowYesNoPop;                                    // 0x468(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_708[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        YesNoCorsor;                                       // 0x46C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Debug_IsVisible;                                   // 0x470(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_710[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ATTLManualPopUp*                       ManualUIActor;                                     // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsReturnTitle;                                     // 0x480(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_715[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ALoadingScreen_C*                      LoadingScreenActor;                                // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATTLOptionMenuActor*                   OptionMenuActor;                                   // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class APauseMenu_C* GetDefaultObj();

	void FindLoadingScreen(const struct FTransform& CallFunc_MakeTransform_ReturnValue, TArray<class ALoadingScreen_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ALoadingScreen_C* CallFunc_Array_Get_Item, class ALoadingScreen_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void DeleteYesNoPop(bool CallFunc_IsValid_ReturnValue);
	void CreateYesNoPop(class FText CallFunc_FindTextInLocalizationTable_OutText, bool CallFunc_FindTextInLocalizationTable_ReturnValue, class UCmn_dialog_top00_C* K2Node_DynamicCast_AsCmn_Dialog_Top_00, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AYesNoPopUp_C* CallFunc_FinishSpawningActor_ReturnValue);
	void CreateWidget(class UMsn_pose_top00_C* CallFunc_Create_ReturnValue);
	void UserConstructionScript();
	void OnLoaded_F1BE0EF8463188465D6805B69FC7C728(class UClass* Loaded);
	void OnLoaded_B83BBBA5457027325C84D7BF934D8FBA(class UClass* Loaded);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void CloseYesNoPopUpBP();
	void OpenYesNoPopBP();
	void OpenOptionMenuBP();
	void OpenManualUIBP();
	void OnClosed__________1();
	void ToTitleSceneBP();
	void OnOptionMenuActorExit______0();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_PauseMenu(int32 EntryPoint, class UClass* K2Node_CustomEvent_Loaded1, bool CallFunc_IsValid_ReturnValue, float CallFunc_StartLoading_ReturnValue, float CallFunc_FMax_ReturnValue, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsTTLOption_Menu_Actor, bool K2Node_ClassDynamicCast_bSuccess, class UClass* K2Node_CustomEvent_Loaded, class UClass* Temp_class_Variable1, class UClass* K2Node_ClassDynamicCast_AsTTLManual_Pop_Up, bool K2Node_ClassDynamicCast_bSuccess1, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsRunningLoadingScreen_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_ClosePopUp_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ATTLOptionMenuActor* CallFunc_FinishSpawningActor_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool Temp_bool_IsClosed_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EEndPlayReason K2Node_Event_EndPlayReason, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, bool CallFunc_SetGamePaused_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1, class ATTLManualPopUp* CallFunc_FinishSpawningActor_ReturnValue1, float CallFunc_OpenPopUp_ReturnValue);
};

}


