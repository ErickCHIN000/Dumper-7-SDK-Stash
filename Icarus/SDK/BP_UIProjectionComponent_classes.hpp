#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x110 - 0xB0)
// BlueprintGeneratedClass BP_UIProjectionComponent.BP_UIProjectionComponent_C
class UBP_UIProjectionComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TSoftClassPtr<class UHuntingWidget>          WidgetClass;                                       // 0xB8(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ProjectionUpdated;                                 // 0xE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UClass*                                Widget;                                            // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enabled;                                           // 0xF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8AE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NearbyDistanceStart;                               // 0xFC(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	float                                        NearbyDistanceEnd;                                 // 0x100(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       TargetComponentOverride;                           // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_UIProjectionComponent_C* GetDefaultObj();

	void SetTargetComponent(class USceneComponent* TargetComponentOverride);
	void ForceUpdate(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, class UW_ProjectionInterface_C* CallFunc_GetProjectionInterface_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnRep_NearbyDistanceStart();
	void OnRep_NearbyDistanceEnd();
	void RegisterWidget(class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, class UW_ProjectionInterface_C* CallFunc_GetProjectionInterface_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetWidgetLocation(struct FVector* Location, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UBP_UIProjectionLocation_C* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void OnLoaded_D09A340442841CEDB6A7A58D706E1269(TSubclassOf<class UObject> Loaded);
	void OnLoaded_085089B14AC10467FBC409BEB05D5F01(TSubclassOf<class UObject> Loaded);
	void ReceiveBeginPlay();
	void SetWidget(TSoftClassPtr<class UHuntingWidget> Widget);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_BP_UIProjectionComponent(int32 EntryPoint, enum class EEndPlayReason K2Node_Event_EndPlayReason, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded_1, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsW_Projection_Widget, bool K2Node_ClassDynamicCast_bSuccess, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, bool CallFunc_IsValidSoftClassReference_ReturnValue, class UClass* Temp_class_Variable_1, class UClass* K2Node_ClassDynamicCast_AsW_Projection_Widget_1, bool K2Node_ClassDynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValidSoftClassReference_ReturnValue_1, TSoftClassPtr<class UHuntingWidget> K2Node_CustomEvent_Widget);
	void ProjectionUpdated__DelegateSignature();
};

}


