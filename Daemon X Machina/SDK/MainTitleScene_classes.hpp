#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x7A8 - 0x790)
// BlueprintGeneratedClass MainTitleScene.MainTitleScene_C
class AMainTitleScene_C : public ATTLMainTitleScene
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x790(0x8)(Transient, DuplicateTransient)
	class UUIHeaderComponent_C*                  UIHeaderComponent;                                 // 0x798(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x7A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AMainTitleScene_C* GetDefaultObj();

	class ATTLRewardPopUp* SpawnRewardPopupBP(const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ARewardPopUp_C* CallFunc_FinishSpawningActor_ReturnValue);
	void UserConstructionScript();
	void OnLoaded_B0377E7C48020181A1FE7EB2ADE60EA7(class UClass* Loaded);
	void OpenOptionMenuBP();
	void ExecuteUbergraph_MainTitleScene(int32 EntryPoint, class UClass* K2Node_CustomEvent_Loaded, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsTTLOption_Menu_Actor, bool K2Node_ClassDynamicCast_bSuccess);
};

}


