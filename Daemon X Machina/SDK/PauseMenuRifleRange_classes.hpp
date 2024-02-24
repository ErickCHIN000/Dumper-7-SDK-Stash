#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x3E8 - 0x3A0)
// BlueprintGeneratedClass PauseMenuRifleRange.PauseMenuRifleRange_C
class APauseMenuRifleRange_C : public ATTLPauseMenuRifleRange
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A0(0x8)(Transient, DuplicateTransient)
	class UUITopMenuComponent_C*                 UITopMenuComponent;                                // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UUIPauseMenuComponent_C*               UIPauseMenuComponent;                              // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x3B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AYesNoPopUp_C*                         YesNoPop;                                          // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATTLManualPopUp*                       ManualUIActor;                                     // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATTLOptionMenuActor*                   OptionMenuActor;                                   // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMsn_pose_top00_C*                     WidgetMsnPoseTop;                                  // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmn_option_page03_C*                  ListWidgetTop;                                     // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class APauseMenuRifleRange_C* GetDefaultObj();

	void CreateWidget(class UMsn_pose_top00_C* CallFunc_Create_ReturnValue);
	void DeleteYesNoPop(bool CallFunc_IsValid_ReturnValue);
	void CloseYesNoPop();
	void CreateYesNoPop(class FText CallFunc_FindTextInLocalizationTable_OutText, bool CallFunc_FindTextInLocalizationTable_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_FindTextInLocalizationTable_OutText1, bool CallFunc_FindTextInLocalizationTable_ReturnValue1, class UCmn_dialog_top00_C* K2Node_DynamicCast_AsCmn_Dialog_Top_00, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AYesNoPopUp_C* CallFunc_FinishSpawningActor_ReturnValue);
	void UserConstructionScript();
	void OnLoaded_BF480B204500735ECD3BC1855FCD56C6(class UClass* Loaded);
	void OnLoaded_562618F24BA23611EB4A90A95713F51E(class UClass* Loaded);
	void OpenYesNoPopBP();
	void CloseYesNoPopUpBP();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void OpenOptionMenuBP();
	void OnClosed__________1();
	void OpenManualMenuBP();
	void OnOptionMenuActorExit______0();
	void ExecuteUbergraph_PauseMenuRifleRange(int32 EntryPoint, const struct FTransform& CallFunc_MakeTransform_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, float CallFunc_OpenPopUp_ReturnValue, class UClass* K2Node_CustomEvent_Loaded1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsTTLOption_Menu_Actor, bool K2Node_ClassDynamicCast_bSuccess, class UClass* K2Node_CustomEvent_Loaded, class UClass* Temp_class_Variable1, class UClass* K2Node_ClassDynamicCast_AsTTLManual_Pop_Up, bool K2Node_ClassDynamicCast_bSuccess1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ATTLManualPopUp* CallFunc_FinishSpawningActor_ReturnValue, float CallFunc_ClosePopUp_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class ATTLOptionMenuActor* CallFunc_FinishSpawningActor_ReturnValue1);
};

}


