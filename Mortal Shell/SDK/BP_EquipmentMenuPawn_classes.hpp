#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x310 - 0x280)
// BlueprintGeneratedClass BP_EquipmentMenuPawn.BP_EquipmentMenuPawn_C
class ABP_EquipmentMenuPawn_C : public APawn
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_AshEmbersMenu;                                   // 0x288(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCineCameraComponent*                  CineCamera;                                        // 0x290(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_EquipmentMenuShellDisplay_C*> ShellsDisplay;                                     // 0x2A0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	class UUI_Equipment_Menu_C*                  UI_EquipmentMenu;                                  // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ParallaxX;                                         // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ParallaxY;                                         // 0x2BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASkyLight*                             SkyLight;                                          // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AExponentialHeightFog*                 HeightFog;                                         // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnCloseWithBackButton;                             // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector                               DesiredCamLocation;                                // 0x2E0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_EquipmentMenuType            EquipmentMenuType;                                 // 0x2EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DC6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_ShellUpgradeMenu_C*                UI_ShellUpgradeMenu;                               // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayPC_C*                         GameplayPC;                                        // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_FoundlingMenu_C*                   UI_FoundlingMenu;                                  // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_StormModeUpgradesPanel_C*          UI_StormModeUpgradesPanel;                         // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_EquipmentMenuPawn_C* GetDefaultObj();

	void ShowSelf();
	void HideSelf();
	void AddShellUpgradeMenu(bool FastTravelMenu, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void SetShellsUI(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class ABP_EquipmentMenuShellDisplay_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void HandleParallax(const struct FVector2D& NormalizedMousePos, const struct FVector2D& CallFunc_GetMousePosFromCenterOfScreen_Position, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_VInterpTo_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_GetUpVector_ReturnValue, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void RemoveEquipmentMenuUI(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess);
	void AddEquipmentMenuUI(bool CallFunc_IsInViewport_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsInViewport_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsInViewport_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_IsInViewport_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Event_CustomPossess();
	void Event_CustomUnpossess();
	void ExecuteUbergraph_BP_EquipmentMenuPawn(int32 EntryPoint, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, class UDHRayTracing* CallFunc_GetRayTracingSettings_ReturnValue, int32 Temp_int_Array_Index_Variable, float K2Node_Event_DeltaSeconds, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ABP_EquipmentMenuPawn_C* K2Node_DynamicCast_AsBP_Equipment_Menu_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue_1, class UDHRayTracing* CallFunc_GetRayTracingSettings_ReturnValue_1);
	void OnCloseWithBackButton__DelegateSignature();
};

}


