#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0x24C - 0x220)
// BlueprintGeneratedClass BP_ActorPreview.BP_ActorPreview_C
class ABP_ActorPreview_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneCaptureComponent2D*              SceneCaptureComponent2D;                           // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                      Camera;                                            // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       CameraRoot;                                        // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         PreviewVisible;                                    // 0x248(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         RenderTargetSet;                                   // 0x249(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         UseSceneCapture;                                   // 0x24A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         UseCameraComponent;                                // 0x24B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_ActorPreview_C* GetDefaultObj();

	void GetLightComponents(TArray<class ULightComponent*>* SceneCaptureLights, TArray<class ULightComponent*>* CameraComponentLights);
	void UpdateCaptureMode(bool UseSceneCapture, bool UseCameraComponent, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UPrimitiveComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UPrimitiveComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void GetShowOnlyComponents(TArray<class UPrimitiveComponent*>* OutComponents);
	void CreateRenderTarget(int32 Width, int32 Height, class UTextureRenderTarget2D** RenderTarget, class UTextureRenderTarget2D* CallFunc_CreateRenderTarget2D_ReturnValue);
	void ResolveVisibility(bool* Visible);
	void UpdatePreviewVisibility();
	void SetPreviewVisibility(bool NewPreviewVisibility);
	void ClearCurrentMeshes();
	void ConstructPreviewMeshArray(TArray<class USkeletalMesh*>* MeshArray, const TArray<class USkeletalMesh*>& Meshes);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void UpdateActorPreview(bool Visible);
	void ExecuteUbergraph_BP_ActorPreview(int32 EntryPoint, float K2Node_Event_DeltaSeconds, bool K2Node_CustomEvent_Visible, bool CallFunc_ResolveVisibility_Visible, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
};

}


