#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x380 - 0x330)
// BlueprintGeneratedClass Flow_Title.Flow_Title_C
class AFlow_Title_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Transient, DuplicateTransient)
	class ATTLMenuSceneBase*                     CurrentScene;                                      // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                          Camera;                                            // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class ATTLMenuSceneBase>       UIClassRef;                                        // 0x348(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class ATTLLocalClassLoader*                  LocalClassLoader;                                  // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                          CameraActor_TITLE_ExecuteUbergraph_Flow_Title_RefProperty; // 0x378(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AFlow_Title_C* GetDefaultObj();

	void OnInputRepeatAction_(enum class ETTLEActionType ActionType, int32 Count);
	void OnInputAction_(enum class ETTLEActionType ActionType, bool IsPressed);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void StartNewGame();
	void StartContinueGame();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void OnLocalClassLoaded(TSoftClassPtr<class AActor> LoadedClass, class FName NextAction);
	void StartForceSave();
	void ExecuteUbergraph_Flow_Title(int32 EntryPoint, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, const struct FTransform& CallFunc_MakeTransform_ReturnValue2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1, class ACameraActor* CallFunc_FinishSpawningActor_ReturnValue, class ATTLLocalClassLoader* CallFunc_FinishSpawningActor_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, enum class ETTLEActionType K2Node_CustomEvent_ActionType1, int32 K2Node_CustomEvent_Count, enum class ETTLEActionType K2Node_CustomEvent_ActionType, bool K2Node_CustomEvent_IsPressed, bool CallFunc_IsValid_ReturnValue1, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsValid_ReturnValue2, enum class ETTLEMenuSceneState CallFunc_GetState_OutState, bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ATTLPlayerController* K2Node_DynamicCast_AsTTLPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchInteger_CmpSuccess, float K2Node_Event_DeltaSeconds, class APlayerController* CallFunc_GetPlayerController_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, TSoftClassPtr<class AActor> K2Node_CustomEvent_LoadedClass, class FName K2Node_CustomEvent_NextAction, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, class UClass* K2Node_ClassDynamicCast_AsTTLMenu_Scene_Base, bool K2Node_ClassDynamicCast_bSuccess1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2, class ATTLMenuSceneBase* CallFunc_FinishSpawningActor_ReturnValue2);
};

}


