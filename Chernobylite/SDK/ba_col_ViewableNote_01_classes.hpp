#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x288 - 0x220)
// BlueprintGeneratedClass ba_col_ViewableNote_01.ba_col_ViewableNote_01_C
class Aba_col_ViewableNote_01_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMesh*                           NoteMeshRef;                                       // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     NoteMaterialInstance;                              // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            TextureRussian;                                    // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            TextureEnglish;                                    // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              NoteMaterialInstanceDynamic;                       // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bTranslateEffectPlaying;                           // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CE2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TranslateEffectElapsed;                            // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TranslateEffectDuration;                           // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              RotationOffset;                                    // 0x26C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Is3D;                                              // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CF2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ThreeDPivotOffset;                                 // 0x27C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Aba_col_ViewableNote_01_C* GetDefaultObj();

	void SetRelativeLocation(const struct FVector& Location, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult);
	void ResetRelativeTransform();
	void ReceiveTick(float DeltaSeconds);
	void AssignNote();
	void ExecuteUbergraph_ba_col_ViewableNote_01(int32 EntryPoint, const struct FTransform& Temp_struct_Variable, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, TScriptInterface<class IMovieSceneTransformOrigin> K2Node_DynamicCast_AsTransform_Origin, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_BP_GetTransformOrigin_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, bool CallFunc_IsInPIE_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1);
};

}


