#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF5 (0x315 - 0x220)
// BlueprintGeneratedClass BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C
class ABP_EquipmentMenuShellDisplay_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URectLightComponent*                   RectLight;                                         // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Box;                                               // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   SpotLight_Left;                                    // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   SpotLight_Right;                                   // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SK_Weapon_OffHand;                                 // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       CameraRoot;                                        // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       BlurEffectLocation;                                // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                      OverviewWidget;                                    // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   SpotLight_Top;                                     // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SK_Weapon_MainHand;                                // 0x270(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCineCameraComponent*                  CineCamera;                                        // 0x278(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SK_Mannequin;                                      // 0x280(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x288(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         Shell_Mesh;                                        // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnShellDisplayHovered;                             // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnShellDisplayUnhovered;                           // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	enum class EArmorTypes                       Shell_Type;                                        // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EComboTypes                       Weapon_Type;                                       // 0x2B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEquipmentMenuShellTabState       State;                                             // 0x2BA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_104B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NameFadeInDelay;                                   // 0x2BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Equipment_Menu_C*                  UI_EquipmentMenu;                                  // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1052[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_EquipmentMenuPawn_Shells_C*        BP_EquipmentMenuPawn_Shells;                       // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>            Shell_Materials;                                   // 0x2D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>            Weapon_Materials;                                  // 0x2E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_UnknownShell;                                  // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BlendTime;                                         // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1060[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          Timer;                                             // 0x308(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Highlighted;                                       // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PreviewLights;                                     // 0x311(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         PreviewRecLight;                                   // 0x312(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Weapon_ReinitPose;                                 // 0x313(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         LockHadernShell;                                   // 0x314(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_EquipmentMenuShellDisplay_C* GetDefaultObj();

	void SetWeapon_Unarmed();
	void UpdateDye(enum class Enum_ShellDye CustomDyeValue, class USkeletalMesh* CallFunc_GetMeshForArmorType_ReturnValue);
	class FName GetWeaponSocket(enum class EComboTypes Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, class FName Temp_name_Variable_6, class FName K2Node_Select_Default);
	void SetCorrectAnimation(class UBlendSpaceBase* CallFunc_GetWeaponAnimation_ReturnValue);
	class UBlendSpaceBase* GetWeaponAnimation(enum class EComboTypes Temp_byte_Variable, class UBlendSpaceBase* Temp_object_Variable, class UBlendSpaceBase* Temp_object_Variable_1, class UBlendSpaceBase* Temp_object_Variable_2, class UBlendSpaceBase* Temp_object_Variable_3, class UBlendSpaceBase* Temp_object_Variable_4, class UBlendSpaceBase* Temp_object_Variable_5, class UBlendSpaceBase* Temp_object_Variable_6, class UBlendSpaceBase* K2Node_Select_Default);
	void SetWaponMaterials(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void HadernCheck(bool CallFunc_IsHadernContentEnabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void Set_DeselectShell(const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_RadialBlur_C* CallFunc_FinishSpawningActor_ReturnValue);
	void SetWeapon(class FName CallFunc_GetWeaponSocket_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, class FName CallFunc_GetWeaponSocket_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue_2, class FName CallFunc_GetWeaponSocket_ReturnValue_2, bool CallFunc_K2_AttachToComponent_ReturnValue_3, bool CallFunc_K2_AttachToComponent_ReturnValue_4, class FName CallFunc_GetWeaponSocket_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_5, class FName CallFunc_GetWeaponSocket_ReturnValue_4, bool CallFunc_K2_AttachToComponent_ReturnValue_6, class FName CallFunc_GetWeaponSocket_ReturnValue_5, bool CallFunc_K2_AttachToComponent_ReturnValue_7, bool K2Node_SwitchEnum_CmpSuccess, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ShellHasBeenFound_ReturnValue, enum class EComboTypes CallFunc_0_Base_GetCurrentWeapon_CurrentWeapon);
	void ShowDetails(class FText CallFunc_GetShellName_ReturnValue, class FText CallFunc_GetShellTagline_ShellTagline, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue);
	void Mouse_Click();
	void Show_ShellName(class FText CallFunc_GetShellName_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UShellName_C* K2Node_DynamicCast_AsShell_Name, bool K2Node_DynamicCast_bSuccess);
	void Hide_ShellName(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UShellName_C* K2Node_DynamicCast_AsShell_Name, bool K2Node_DynamicCast_bSuccess);
	void Mouse_Unhover(bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1);
	void Mouse_Hover(bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1);
	void Set_SelectShell(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_RadialBlur_C* CallFunc_FinishSpawningActor_ReturnValue);
	void Set_Unhover(bool SkipSound);
	void Set_Hover(class APlayerController* CallFunc_GetPlayerController_ReturnValue);
	void SetShellMaterials(bool bReinitPose, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class USkeletalMesh* CallFunc_GetMeshForArmorType_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_ShellHasBeenFound_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	bool ShellHasBeenFound(bool Local_Unlocked, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class FName CallFunc_GetShellUnlockID_ShellUnlockID, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	class FText GetShellName(bool Temp_bool_Variable, class FText Temp_text_Variable, bool CallFunc_ShellHasBeenFound_ReturnValue, class FText CallFunc_GetShellName_ShellName, class FText K2Node_Select_Default);
	void SetState(enum class EEquipmentMenuShellTabState State, bool Visibility, bool Local_Visibility, bool K2Node_SwitchEnum_CmpSuccess);
	void HandleParallax(const struct FVector2D& NormalizedMousePos, const struct FVector2D& CallFunc_GetMousePosFromCenterOfScreen_Position, const struct FVector& CallFunc_GetUpVector_ReturnValue, const struct FVector& CallFunc_GetRightVector_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void HideNameWidget();
	void ShowNameWidget();
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent);
	void BndEvt__Box_K2Node_ComponentBoundEvent_4_ComponentEndCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent);
	void BndEvt__Box_K2Node_ComponentBoundEvent_5_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed);
	void ExecuteUbergraph_BP_EquipmentMenuShellDisplay(int32 EntryPoint, class AGameStateBase* CallFunc_GetGameState_ReturnValue, TScriptInterface<class IGamePlayGameStateInterface_C> K2Node_DynamicCast_AsGame_Play_Game_State_Interface, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaSeconds, bool CallFunc_GetIsMouseMoving_IsMoving, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_TouchedComponent_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_TouchedComponent_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_TouchedComponent, const struct FKey& K2Node_ComponentBoundEvent_ButtonPressed, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	void OnShellDisplayUnhovered__DelegateSignature();
	void OnShellDisplayHovered__DelegateSignature(class AActor* HoveredShell);
};

}


