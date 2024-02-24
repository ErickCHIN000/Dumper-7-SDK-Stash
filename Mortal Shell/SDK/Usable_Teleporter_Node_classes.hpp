#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB6 (0x3C8 - 0x312)
// BlueprintGeneratedClass Usable_Teleporter_Node.Usable_Teleporter_Node_C
class AUsable_Teleporter_Node_C : public AUsable_Actor_C
{
public:
	uint8                                        Pad_5B9[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                      Camera;                                            // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       CameraRotationCenter;                              // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       TeleportLocation;                                  // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh1;                                       // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh3;                                       // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh2;                                       // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh4;                                       // 0x350(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   SpotLight;                                         // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              ParticleSystem1;                                   // 0x360(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        ZoomAnim_Scale_D6EE6CA6409DD102A0E5F29677BDABC9;   // 0x368(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ZoomAnim__Direction_D6EE6CA6409DD102A0E5F29677BDABC9; // 0x36C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5CB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ZoomAnim;                                          // 0x370(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AUsable_Teleporter_Node_C*             OtherTeleporter;                                   // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseRandomizedTeleporters;                          // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5CE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AUsable_Teleporter_Node_C*>     RandomizedTeleporters;                             // 0x388(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	class USoundBase*                            TeleportSound;                                     // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CamRelativeLocationStart;                          // 0x3A0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          LightColor;                                        // 0x3AC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       Teleporter_Particle;                               // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AUsable_Teleporter_Node_C* GetDefaultObj();

	void TryLaunchLightning(TArray<class AActor*>& CallFunc_GetAllActorsWithInterface_OutActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_Rain_C> K2Node_DynamicCast_AsBPI_Rain, bool K2Node_DynamicCast_bSuccess);
	void ActualTeleporting(bool NoCameraSwitch, bool Temp_bool_Variable, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, float CallFunc_Add_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float K2Node_Select_Default, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1);
	void PreTeleportLogic(class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous);
	void SetRandomizedTeleporter(int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class AUsable_Teleporter_Node_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue);
	void OnActorUsed(class APlayerController* Controller, bool* Success);
	void UserConstructionScript();
	void ZoomAnim__FinishedFunc();
	void ZoomAnim__UpdateFunc();
	void OnNotifyEnd_695C9DFC4AD2E64BD1FB4FBF321A83D3(class FName NotifyName);
	void OnNotifyBegin_695C9DFC4AD2E64BD1FB4FBF321A83D3(class FName NotifyName);
	void OnInterrupted_695C9DFC4AD2E64BD1FB4FBF321A83D3(class FName NotifyName);
	void OnBlendOut_695C9DFC4AD2E64BD1FB4FBF321A83D3(class FName NotifyName);
	void OnCompleted_695C9DFC4AD2E64BD1FB4FBF321A83D3(class FName NotifyName);
	void OnNotifyEnd_C474F98B4D631E47EE6CAE889A67CA04(class FName NotifyName);
	void OnNotifyBegin_C474F98B4D631E47EE6CAE889A67CA04(class FName NotifyName);
	void OnInterrupted_C474F98B4D631E47EE6CAE889A67CA04(class FName NotifyName);
	void OnBlendOut_C474F98B4D631E47EE6CAE889A67CA04(class FName NotifyName);
	void OnCompleted_C474F98B4D631E47EE6CAE889A67CA04(class FName NotifyName);
	void Teleport();
	void StartPanning();
	void ReceiveBeginPlay();
	void SecondFadeCompleted();
	void BeginTeleport();
	void ExecuteUbergraph_Usable_Teleporter_Node(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_7, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName Temp_name_Variable, class UBriefReturnFromBlackFade_C* CallFunc_Create_ReturnValue, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName Temp_name_Variable_1, class UBriefReturnFromBlackFade_C* CallFunc_Create_ReturnValue_1, class UBriefFadeToBlack_C* CallFunc_Create_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_RadialBlur_C* CallFunc_FinishSpawningActor_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC_1, bool K2Node_DynamicCast_bSuccess_1, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous_1, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous_2, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous_3, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UBriefFadeToBlack_C* CallFunc_Create_ReturnValue_3, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous_4, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous_5, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous_6, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABP_RadialBlur_C* CallFunc_FinishSpawningActor_ReturnValue_1, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous_7, class FName K2Node_CustomEvent_NotifyName_8, class FName K2Node_CustomEvent_NotifyName_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_StormModeIsActive_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess_3, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_4, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess_5, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface_1, bool K2Node_DynamicCast_bSuccess_6, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_StormModeIsActive_ReturnValue_1);
};

}


