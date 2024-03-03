#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x228 - 0x220)
// Class EasySkyV2.EasySkyV2
class AEasySkyV2 : public AActor
{
public:
	bool                                         EnableEditorTick;                                  // 0x220(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RealTimeDynamicWeatherInEditor;                    // 0x221(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseCollisionFloorLevel;                            // 0x222(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BC[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CollisionFloorLevel;                               // 0x224(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AEasySkyV2* GetDefaultObj();

	void SetVolumetricFogGridPixelSize(int32 VolumetricFogGridPixelSize);
	void SetSourceSoftAngle(class UDirectionalLightComponent* DirectionalLight, float SourceSoftAngle);
	void SetRenderTargetSize(class UTextureRenderTarget2D* RenderTarget, int32 Value);
	void SetRealTimeCapture(class USkyLightComponent* SkyLightComponent, bool Enabled);
	void SetConsoleVariable(const class FString& Property, int32 Value);
	void SetCollectionParameterScalar(class UMaterialParameterCollectionInstance* CollectionInstance, class FName ParameterName, float ParameterValue);
	void RefreshSceneComponent(class USceneComponent* SceneComponent);
	struct FVector GetViewLocation();
	void BlueprintEditorTick(float DeltaTime);
	void AddMaterialFunction(class UMaterial* Mat, class UMaterialFunction* MaterialFunction, class FName FunctionInputName, class FName FunctionOutputName);
};

}


