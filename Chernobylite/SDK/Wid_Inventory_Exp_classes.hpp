#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x2E0 - 0x260)
// WidgetBlueprintGeneratedClass Wid_Inventory_Exp.Wid_Inventory_Exp_C
class UWid_Inventory_Exp_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                      Blink;                                             // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Back;                                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Inventory_Bar_C*                  ExpBar;                                            // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ExpBonus;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_0;                                         // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_0;                                       // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          VisibilityContainer;                               // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        MaxEXPforCurrentLevel;                             // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TargetOpacity;                                     // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ExpBeingSolved;                                    // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentValue;                                      // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LocalLevel;                                        // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInitialising;                                    // 0x2BC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1ED7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ExpText;                                           // 0x2C0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UTexture2D*                            NewVar_0;                                          // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_Inventory_Exp_C* GetDefaultObj();

	void UpdateVisibilityContainerVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_GetIsUserInterfaceEnabled_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateText(float Exp, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 CallFunc_FCeil_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Replace_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	TArray<class UObject*> GetObjectsToSave();
	bool HasObjectsToSave();
	bool ShouldUpdateOverlapsOnLoad();
	void SetExp(bool Instant, float A, bool* IsLess1, bool IsLess, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, float CallFunc_GetExpForLevel_ReturnValue, float CallFunc_GetRequiredExperiencePerLevel_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue_1, float CallFunc_FClamp_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PlayExpAnim(float Exp);
	void OnBarUpdated();
	void Update(TSubclassOf<class ACGMovementState> InPreviousMovementState, TSubclassOf<class ACGMovementState> InNewMovementState);
	void OnSkillPointsModified();
	void Destruct();
	void BindVisibilityContainerCallback();
	void UnbindVisibilityContainerCallback();
	void ExecuteUbergraph_Wid_Inventory_Exp(int32 EntryPoint, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class Aba_WidgetCurveAnimation_Parent_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetTime_Time, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float K2Node_CustomEvent_Exp, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_SetExp_IsLess1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, bool CallFunc_SetExp_IsLess1_1, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetCurrentScalar_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, bool CallFunc_SetExp_IsLess1_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, class Aba_WidgetCurveAnimation_Parent_C* CallFunc_FinishSpawningActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetTime_Time_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, TSubclassOf<class ACGMovementState> K2Node_CustomEvent_InPreviousMovementState, TSubclassOf<class ACGMovementState> K2Node_CustomEvent_InNewMovementState, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_3, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_4, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_5, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_6, class FText CallFunc_Conv_IntToText_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_7, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_8, class FText CallFunc_Conv_IntToText_ReturnValue_3, class UWid_OnScreenFrameInformation_C* CallFunc_GetOnScreenLogQueue_OnScreenFrameQueue, int32 CallFunc_Blueprint_GetSizeY_ReturnValue, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_9, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3);
};

}


