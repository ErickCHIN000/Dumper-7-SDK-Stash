#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xD8 - 0xA8)
// BlueprintGeneratedClass CreditsSlideshowManager.CreditsSlideshowManager_C
class UCreditsSlideshowManager_C : public UDaffodilCreditsSlideshowManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(Transient, DuplicateTransient)
	class ACreditsSlide_C*                       CurrentSlide;                                      // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScreenXPercentage;                                 // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11C0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWwiseAudioComponent*                  PlayerWwiseComponent;                              // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_CreditsMusicStart;                           // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_CreditsMusicStop;                            // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCreditsSlideshowManager_C* GetDefaultObj();

	void PlayCreditsMusic(TArray<class APlayerController*>& CallFunc_GetLocalPlayer_Controllers, int32 CallFunc_GetLocalPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_Array_Get_Item, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue, class UWwiseAudioComponent* CallFunc_GetDefaultWwiseComponent_ReturnValue);
	void CalculateTransform(float CallFunc_GetXPercentage_ReturnValue, int32 CallFunc_GetCameraDistance_ReturnValue, TArray<class APlayerController*>& CallFunc_GetLocalPlayer_Controllers, int32 CallFunc_GetLocalPlayer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_Array_Get_Item, int32 CallFunc_GetViewportSize_SizeX, int32 CallFunc_GetViewportSize_SizeY, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector& CallFunc_DeprojectScreenToWorld_WorldPosition, const struct FVector& CallFunc_DeprojectScreenToWorld_WorldDirection, bool CallFunc_DeprojectScreenToWorld_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue);
	void GbxAsyncRequest_Spawned_632FDCD84CCCFE0E37F79EA4589DECC9(class AActor* Actor, int32 InstanceIndex);
	void GbxAsyncRequest_Spawned_632FDCD84CCCFE0E37F79EA4EAC2236E(class AActor* Actor, int32 InstanceIndex);
	void BPEvent_OnCreditsBegin(class UClass* FirstSlideClass);
	void BPEvent_OnSlideTransitionBegin(class UClass* NewSlideClass);
	void BPEvent_OnCreditsEnd();
	void ExecuteUbergraph_CreditsSlideshowManager(int32 EntryPoint, class UObject* CallFunc_GetWorldContext_ReturnValue, class ADaffodilCreditsSlide* Temp_object_Variable, class AActor* K2Node_CustomEvent_Actor1, int32 K2Node_CustomEvent_InstanceIndex1, class ACreditsSlide_C* K2Node_DynamicCast_AsCredits_Slide, bool K2Node_DynamicCast_bSuccess, class ADaffodilCreditsSlide* K2Node_DynamicCast_AsDaffodil_Credits_Slide, bool K2Node_DynamicCast_bSuccess1, class ADaffodilCreditsSlide* Temp_object_Variable1, class AActor* K2Node_CustomEvent_Actor, int32 K2Node_CustomEvent_InstanceIndex, class ACreditsSlide_C* K2Node_DynamicCast_AsCredits_Slide1, bool K2Node_DynamicCast_bSuccess2, class ADaffodilCreditsSlide* K2Node_DynamicCast_AsDaffodil_Credits_Slide1, bool K2Node_DynamicCast_bSuccess3, class UObject* CallFunc_GetWorldContext_ReturnValue1, class UClass* K2Node_Event_FirstSlideClass, class UClass* K2Node_Event_NewSlideClass, class UClass* K2Node_ClassDynamicCast_AsDaffodil_Credits_Slide, bool K2Node_ClassDynamicCast_bSuccess, class UClass* K2Node_ClassDynamicCast_AsDaffodil_Credits_Slide1, bool K2Node_ClassDynamicCast_bSuccess1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest1, int32 CallFunc_SpawnActorAsync_ReturnValue, int32 CallFunc_SpawnActorAsync_ReturnValue1);
};

}


