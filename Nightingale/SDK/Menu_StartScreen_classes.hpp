#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B8 (0x460 - 0x2A8)
// BlueprintGeneratedClass Menu_StartScreen.Menu_StartScreen_C
class AMenu_StartScreen_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class ABP_CharacterCreation_ProxyChar_Child_Ancestry_C*> Array_Family;                                      // 0x2B0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class ABP_ProxyCharacter_Child_CharacterCreation_C* ProxyCharacter;                                    // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTransform>                    FamilyTreeSpawnData;                               // 0x2C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ACineCameraActor*                      CineCameraActor_1_ShowStartMenuWindow_MERGED_RefProperty; // 0x2D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                          CameraActor1111111111_ShowStartMenuWindow_MERGED_RefProperty; // 0x2E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_6_SetLighting_Seated_MERGED_RefProperty; // 0x2E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_5_SetLighting_Seated_MERGED_RefProperty; // 0x2F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_9_SetLighting_Seated_MERGED_RefProperty; // 0x2F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_3_SetLighting_Seated_MERGED_RefProperty; // 0x300(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_12_SetLighting_Seated_MERGED_RefProperty; // 0x308(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_15_SetLighting_Seated_MERGED_RefProperty; // 0x310(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_17_SetLighting_Seated_MERGED_RefProperty; // 0x318(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_16_SetLighting_Seated_MERGED_RefProperty; // 0x320(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_2_SetLighting_Seated_MERGED_RefProperty; // 0x328(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_0_SetLighting_Seated_MERGED_RefProperty; // 0x330(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_19_SetLighting_Seated_MERGED_RefProperty; // 0x338(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_4_SetLighting_Seated_MERGED_RefProperty; // 0x340(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_1_SetLighting_Seated_MERGED_RefProperty; // 0x348(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_11_SetLighting_Seated_MERGED_RefProperty; // 0x350(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_7_SetLighting_Seated_MERGED_RefProperty; // 0x358(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_2_SetLighting_Standing_MERGED_RefProperty; // 0x360(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_6_SetLighting_Standing_MERGED_RefProperty; // 0x368(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_5_SetLighting_Standing_MERGED_RefProperty; // 0x370(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_9_SetLighting_Standing_MERGED_RefProperty; // 0x378(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_3_SetLighting_Standing_MERGED_RefProperty; // 0x380(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_12_SetLighting_Standing_MERGED_RefProperty; // 0x388(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_15_SetLighting_Standing_MERGED_RefProperty; // 0x390(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_17_SetLighting_Standing_MERGED_RefProperty; // 0x398(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_16_SetLighting_Standing_MERGED_RefProperty; // 0x3A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_0_SetLighting_Standing_MERGED_RefProperty; // 0x3A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_19_SetLighting_Standing_MERGED_RefProperty; // 0x3B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_4_SetLighting_Standing_MERGED_RefProperty; // 0x3B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_1_SetLighting_Standing_MERGED_RefProperty; // 0x3C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_11_SetLighting_Standing_MERGED_RefProperty; // 0x3C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_7_SetLighting_Standing_MERGED_RefProperty; // 0x3D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_6_SetLighting_Dark_MERGED_RefProperty;   // 0x3D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_5_SetLighting_Dark_MERGED_RefProperty;   // 0x3E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_9_SetLighting_Dark_MERGED_RefProperty;   // 0x3E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_3_SetLighting_Dark_MERGED_RefProperty;   // 0x3F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_12_SetLighting_Dark_MERGED_RefProperty;  // 0x3F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_15_SetLighting_Dark_MERGED_RefProperty;  // 0x400(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_17_SetLighting_Dark_MERGED_RefProperty;  // 0x408(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_16_SetLighting_Dark_MERGED_RefProperty;  // 0x410(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_2_SetLighting_Dark_MERGED_RefProperty;   // 0x418(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_0_SetLighting_Dark_MERGED_RefProperty;   // 0x420(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_19_SetLighting_Dark_MERGED_RefProperty;  // 0x428(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_4_SetLighting_Dark_MERGED_RefProperty;   // 0x430(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_1_SetLighting_Dark_MERGED_RefProperty;   // 0x438(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_11_SetLighting_Dark_MERGED_RefProperty;  // 0x440(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_7_SetLighting_Dark_MERGED_RefProperty;   // 0x448(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                          CameraActor1111111111_1_SetLighting_FamilyTree_MERGED_RefProperty; // 0x450(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpotLight*                            SpotLight_13_SetLighting_FamilyTree_MERGED_RefProperty; // 0x458(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AMenu_StartScreen_C* GetDefaultObj();

	void HideFamily(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABP_CharacterCreation_ProxyChar_Child_Ancestry_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void AncestryCam(int32 Dimension_1);
	void Family_Update(TArray<struct FDataTableRowHandle>& Array, class UBP_CharacterAppearanceComponent_C* CurrentAppearanceComponent, int32 CurrentIndex, class ABP_CharacterCreation_ProxyChar_Child_Ancestry_C* CurrentProxy, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, class ABP_CharacterCreation_ProxyChar_Child_Ancestry_C* CallFunc_Array_Get_Item, class UBP_CharacterCustomization_Component_C* CallFunc_GetComponentByClass_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UBP_CharacterAppearanceComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1, bool CallFunc_DoesDataTableRowExist_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABP_CharacterCreation_ProxyChar_Child_Ancestry_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue);
	void SetLighting_FamilyTree(class APlayerState* CallFunc_GetPlayerState_ReturnValue, class UBP_CharacterAppearanceComponent_C* CallFunc_GetComponentByClass_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FDataTableRowHandle>& CallFunc_GetFamilyTree_FullFamilyTree, class APlayerController* CallFunc_GetPlayerController_ReturnValue);
	void SetLighting_Dark();
	void SetLighting_Standing(double Zoom_Level, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue_2, double CallFunc_MapRangeClamped_ReturnValue_3, double CallFunc_MapRangeClamped_ReturnValue_4, double CallFunc_MapRangeClamped_ReturnValue_5, double CallFunc_MapRangeClamped_ReturnValue_6, float CallFunc_SetIntensity_NewIntensity_ImplicitCast, float CallFunc_SetIntensity_NewIntensity_ImplicitCast_1, float CallFunc_SetIntensity_NewIntensity_ImplicitCast_2, float CallFunc_SetIntensity_NewIntensity_ImplicitCast_3, float CallFunc_SetIntensity_NewIntensity_ImplicitCast_4, float CallFunc_SetIntensity_NewIntensity_ImplicitCast_5, float CallFunc_SetIntensity_NewIntensity_ImplicitCast_6, float CallFunc_SetIntensity_NewIntensity_ImplicitCast_7, float CallFunc_SetIntensity_NewIntensity_ImplicitCast_8);
	void SetLighting_Seated();
	void Set_Lighting___Camera_Mode(enum class E_CC_CameraMode CameraMode, double Zoom_Level, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_VectorVector_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void OnGameStateBaseReady(bool Success, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, bool CallFunc_PushError_ReturnValue);
	void ShowStartMenuWindow(const struct FTransform& CharPosition, int32 Temp_int_Array_Index_Variable, class APlayerState* CallFunc_GetPlayerState_ReturnValue, class UBP_CharacterAppearanceComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FDataTableRowHandle>& CallFunc_GetFamilyTree_FullFamilyTree, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTransform& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class ABP_CharacterCreation_ProxyChar_Child_Ancestry_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, class APlayerState* CallFunc_GetPlayerState_ReturnValue_1, class UBP_CharacterAppearanceComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_1, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UWBP_StartScreen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABP_ProxyCharacter_Child_CharacterCreation_C* CallFunc_FinishSpawningActor_ReturnValue_1, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_2);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Menu_StartScreen(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsStandalone_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ANWXGameStateBase* CallFunc_GetNWXGameStateBase_ReturnValue, TScriptInterface<class IAwaitable> CallFunc_AwaitBP_Awaitable_CastInput, const struct FDelegateHandleBPWrapper& CallFunc_AwaitBP_Handle);
};

}


