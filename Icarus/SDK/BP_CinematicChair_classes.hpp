#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x42 (0x3A8 - 0x366)
// BlueprintGeneratedClass BP_CinematicChair.BP_CinematicChair_C
class ABP_CinematicChair_C : public ABP_SeatBase_C
{
public:
	uint8                                        Pad_4AA3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                 PostProcess;                                       // 0x370(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Box;                                               // 0x378(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x380(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                PreviousPlayer;                                    // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AIcarusPlayerController*               OwningController;                                  // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MarkForDestroy;                                    // 0x398(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4AC9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_SpectatorUI_C*                      SpectatorUI;                                       // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_CinematicChair_C* GetDefaultObj();

	struct FRotator GetSeatedPlayerControlRotation(class AIcarusPlayerCharacter* CallFunc_GetAttachedPlayer_ReturnValue, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	class APawn* GetPossesTarget(class AActor* CallFunc_GetAttachParentActor_ReturnValue, class APawn* CallFunc_GetPossesTarget_ReturnValue, class ABP_CinematicPawn_C* K2Node_DynamicCast_AsBP_Cinematic_Pawn, bool K2Node_DynamicCast_bSuccess);
	bool IsDriverSeat();
	bool LeaveSeat(bool bChangeSeat, bool bForce, bool CallFunc_LeaveSeat_ReturnValue);
	void ReceiveTick(float DeltaSeconds);
	void OnAttachedPlayerDestroyed(class AActor* DestroyedAttachedPlayer);
	void SettingsUpdated(const struct FPostProcessSettings& Settings);
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_3(float AxisValue);
	void InpAxisEvt_LookRight_K2Node_InputAxisEvent_1(float AxisValue);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ClearOwningController();
	void ExecuteUbergraph_BP_CinematicChair(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsServer_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, class AIcarusPlayerController* CallFunc_GetPossesTargetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsLocalPlayerController_ReturnValue, class AActor* K2Node_Event_DestroyedAttachedPlayer, bool CallFunc_IsValid_ReturnValue_4, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_5, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetParentActor_ReturnValue, const struct FAIRelationshipsRowHandle& CallFunc_MakeLiteralAIRelationships_ReturnValue, const struct FAIRelationshipsRowHandle& CallFunc_MakeLiteralAIRelationships_ReturnValue_1, enum class EValid CallFunc_GetCheatController_Paths, class ACheatController* CallFunc_GetCheatController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EValid CallFunc_GetCheatController_Paths_1, class ACheatController* CallFunc_GetCheatController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, bool K2Node_SwitchEnum_CmpSuccess_1, class AActor* CallFunc_GetParentActor_ReturnValue_1, class UW_SpectatorUI_C* CallFunc_Create_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess_2, bool Temp_bool_Has_Been_Initd_Variable, const struct FPostProcessSettings& K2Node_CustomEvent_Settings, bool CallFunc_IsServer_ReturnValue_1, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_1, bool K2Node_DynamicCast_bSuccess_3, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_GetIsThirdPerson_ReturnValue, TArray<class FString>& K2Node_MakeArray_Array, float K2Node_InputAxisEvent_AxisValue_1, bool Temp_bool_IsClosed_Variable, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class UCameraModifier* CallFunc_FindCameraModifierByClass_ReturnValue, class UCameraModifier* CallFunc_AddNewCameraModifier_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, float K2Node_InputAxisEvent_AxisValue, class UCameraModifier* CallFunc_FindCameraModifierByClass_ReturnValue_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_RemoveCameraModifier_ReturnValue);
};

}


