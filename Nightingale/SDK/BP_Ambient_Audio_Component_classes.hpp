#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x72 (0x31A - 0x2A8)
// BlueprintGeneratedClass BP_Ambient_Audio_Component.BP_Ambient_Audio_Component_C
class UBP_Ambient_Audio_Component_C : public USceneComponent
{
public:
	uint8                                        Pad_965[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAkAudioEvent*                         StartLoopEvent;                                    // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         StopLoopEvent;                                     // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         AutoPost;                                          // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseReverbVolumes;                                  // 0x2C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_978[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       OcclusionRefreshInterval;                          // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AttenuationScalingFactor_;                         // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TickInterval;                                      // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPlaying;                                         // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_981[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkComponent*                          AkComponent;                                       // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         DrawDebugSphere;                                   // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_988[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FColor                                DebugColor;                                        // 0x2FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                  TextRenderComponent;                               // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       DebugTextSize;                                     // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAuxBus*                             EarlyReflectionsBus;                               // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableSpotReflectors;                              // 0x318(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DrawFirstOrderReflections;                         // 0x319(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Ambient_Audio_Component_C* GetDefaultObj();

	void DrawDebug_Text(const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, class FText CallFunc_Conv_ObjectToText_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, class UTextRenderComponent* CallFunc_AddComponentByClass_ReturnValue, float CallFunc_SetWorldSize_Value_ImplicitCast);
	void DrawDebug_Sphere(class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FHitResult& CallFunc_K2_AddLocalRotation_SweepHitResult, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_IsValid_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_GetMaxAttenuationRadius_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_DrawDebugSphere_Radius_ImplicitCast);
	void SetParameters(bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, float CallFunc_SetAttenuationScalingFactor_Value_ImplicitCast, float K2Node_VariableSet_OcclusionRefreshInterval_ImplicitCast);
	void Destroy_Ak_Component(enum class EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo, class UAkEventCallbackInfo* K2Node_DynamicCast_AsAk_Event_Callback_Info, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_FindOwnerActor_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void StopSound(bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostAkEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void PlaySound(bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue, bool CallFunc_PostAkEventScoped_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ShowAmbienceDebugSpheres(bool DrawDebugSphere);
	void Set_Active(bool Active);
	void ExecuteUbergraph_BP_Ambient_Audio_Component(int32 EntryPoint, float K2Node_Event_DeltaSeconds, double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_AkEventDistanceCheck_InRange, bool K2Node_CustomEvent_DrawDebugSphere, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPlayInEditor_ReturnValue, bool K2Node_CustomEvent_Active, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, float CallFunc_SetComponentTickInterval_TickInterval_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast);
};

}


