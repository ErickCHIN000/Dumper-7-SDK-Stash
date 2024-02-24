#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8C (0x39E - 0x312)
// BlueprintGeneratedClass Usable_Workbench.Usable_Workbench_C
class AUsable_Workbench_C : public AUsable_Actor_C
{
public:
	uint8                                        Pad_2022[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         Box;                                               // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   SpotLight1;                                        // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   SpotLight;                                         // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                BALLISTA_RIG_FBX;                                  // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Tools;                                             // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  PermafrostCore;                                    // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SpikeMechanism;                                    // 0x350(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  IncenseBurner;                                     // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  MaceSuper;                                         // 0x360(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWorkbenchPanel_C*                     UI_WorkbenchPanel;                                 // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasBalistazookaUpgrade;                           // 0x370(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bHasSuperUpgrades;                                 // 0x371(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_205A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  WorkBenchName;                                     // 0x378(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UUI_WorkbenchPanelNew_C*               UI_WorkbenchPanelNew;                              // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDisabled;                                        // 0x398(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DefaultWeapon_SuperMove;                           // 0x399(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         FireWeapon_SuperMove;                              // 0x39A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CathedralWeapon_SuperMove;                         // 0x39B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CryptWeapon_SuperMove;                             // 0x39C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Ballistazooka;                                     // 0x39D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AUsable_Workbench_C* GetDefaultObj();

	void Visibility_Ballistazooka(bool CallFunc_Not_PreBool_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsUpgradeUnlocked_bUnlocked);
	void Visibility_CryptWeapon(bool CallFunc_Not_PreBool_ReturnValue, class FName CallFunc_GetUpgradeNameWeaponSuper_UpgradeName, bool CallFunc_IsUpgradeUnlocked_bUnlocked);
	void Visibility_CathedralWeapon(bool CallFunc_Not_PreBool_ReturnValue, class FName CallFunc_GetUpgradeNameWeaponSuper_UpgradeName, bool CallFunc_IsUpgradeUnlocked_bUnlocked);
	void Visibility_FireWeapon(bool CallFunc_Not_PreBool_ReturnValue, class FName CallFunc_GetUpgradeNameWeaponSuper_UpgradeName, bool CallFunc_IsUpgradeUnlocked_bUnlocked);
	void Visibility_DefaultWeapon(bool CallFunc_Not_PreBool_ReturnValue, class FName CallFunc_GetUpgradeNameWeaponSuper_UpgradeName, bool CallFunc_IsUpgradeUnlocked_bUnlocked);
	void OnCloseCheckIfUsable(bool IsNew, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_HasAnyLockedUpgrade_bHasAny, bool CallFunc_BooleanAND_ReturnValue);
	void GetIsActorUsable(bool* IsUsable, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasAnyLockedUpgrade_bHasAny, bool CallFunc_GetIsActorUsable_IsUsable, bool CallFunc_BooleanAND_ReturnValue);
	void OnActorUsed(class APlayerController* Controller, bool* Success, bool CallFunc_OnActorUsed_Success);
	void ReceiveBeginPlay();
	void RefreshUsableState_Set();
	void UpdateUpgradeVisibility();
	void Open_Workbench_Menu();
	void OnWorkbenchUsed();
	void RefreshUsableState_Bind();
	void RefreshUsableStateNew_Bind();
	void RefreshUsableStateNew_Set();
	void OnCharBeginOverlap();
	void ExecuteUbergraph_Usable_Workbench(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsInViewport_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsInViewport_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_3, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1);
};

}


