#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8B (0x35C - 0x2D1)
// BlueprintGeneratedClass ba_Portal_03.ba_Portal_03_C
class Aba_Portal_03_C : public Aba_ia_BaseInteractableObject_01_nosave_C
{
public:
	uint8                                        Pad_2709[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D8(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UAkComponent*                          Enter_portal;                                      // 0x2E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAudioComponent*                       Audio;                                             // 0x2E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh1;                                       // 0x2F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                       NewPortal;                                         // 0x2F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x300(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                        Timeline_1_Emissive_F584F280423A6E549F9E6EB60D34AD14; // 0x308(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_1__Direction_F584F280423A6E549F9E6EB60D34AD14; // 0x30C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                        Pad_272F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_1;                                        // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_Brightness_7A35AC754BCB3A85A02BF0B25031C537; // 0x318(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_Frame_7A35AC754BCB3A85A02BF0B25031C537; // 0x31C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_7A35AC754BCB3A85A02BF0B25031C537; // 0x320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                        Pad_2749[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LocalOpenAnimation_Brightness_339E20C641878035AF170C83AA05FA56; // 0x330(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LocalOpenAnimation_Frame_339E20C641878035AF170C83AA05FA56; // 0x334(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                LocalOpenAnimation__Direction_339E20C641878035AF170C83AA05FA56; // 0x338(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                        Pad_2765[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    LocalOpenAnimation;                                // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    PortalMaterial;                                    // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              DynamicMaterialInstance;                           // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BrightnessScale;                                   // 0x358(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Aba_Portal_03_C* GetDefaultObj();

	void UpdateCubemapOrientation(const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_GetForwardVector_ReturnValue_1, float CallFunc_Atan2_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Atan2_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	float MaxInteractionDistance(float CallFunc_MaxInteractionDistance_ReturnValue);
	void UserConstructionScript(const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_GetForwardVector_ReturnValue_1, float CallFunc_Atan2_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Atan2_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void LocalOpenAnimation__FinishedFunc();
	void LocalOpenAnimation__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void ReceiveBeginPlay();
	void OnInteractionPressedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit);
	void OpenInLocalTime(float StartTime);
	void SetLocalTime(float CurrentTime);
	void ChangeCubeMap(class UTexture* Cubemap, float Rot);
	void CloseLocalTime(float StartTime);
	void Close();
	void EnteringStart();
	void EnteringStop();
	void ExecuteUbergraph_ba_Portal_03(int32 EntryPoint, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, float CallFunc_Lerp_ReturnValue_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class ACGFakeHero* CallFunc_PlayCustomAnim_OutFakeHero, float CallFunc_PlayCustomAnim_ReturnValue, class AMainPawnCpp* K2Node_Event_PlayerPawn, class UActorComponent* K2Node_Event_ComponentHit, float K2Node_CustomEvent_StartTime_1, float CallFunc_Lerp_ReturnValue_4, float K2Node_CustomEvent_CurrentTime, class UTexture* K2Node_CustomEvent_Cubemap, float K2Node_CustomEvent_Rot, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Atan2_ReturnValue, float K2Node_CustomEvent_StartTime, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue_1, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_Atan2_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1);
};

}


