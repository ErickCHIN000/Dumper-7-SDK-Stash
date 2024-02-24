#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0x249 - 0x220)
// BlueprintGeneratedClass BP_FX_TerrainDeformationCapture.BP_FX_TerrainDeformationCapture_C
class ABP_FX_TerrainDeformationCapture_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneCaptureComponent2D*              SceneCapture;                                      // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              DrawMaterial;                                      // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             MoveOffset;                                        // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SettingsEnabled;                                   // 0x248(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_FX_TerrainDeformationCapture_C* GetDefaultObj();

	void ResolveEnabledState(bool* Enabled, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, class UTerrainAnchorComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsTerrainAnchorValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_BooleanAND_ReturnValue);
	void MoveCapture(class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& K2Node_MathExpression_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue);
	void DrawToPersistent(const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FLinearColor& K2Node_MakeStruct_LinearColor);
	void ReceiveTick(float DeltaSeconds);
	void SettingsChanged(bool Value);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_FX_TerrainDeformationCapture(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_DeltaSeconds, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_ResolveEnabledState_Enabled, class UIcarusGameUserSettings* CallFunc_GetIcarusGameUserSettings_ReturnValue, bool K2Node_CustomEvent_Value, class UIcarusGameUserSettings* CallFunc_GetIcarusGameUserSettings_ReturnValue_1, bool CallFunc_GetTerrainDeformationExperimental_ReturnValue, bool CallFunc_GetTessellation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


