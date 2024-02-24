#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x268 - 0x240)
// BlueprintGeneratedClass BP_Achievement_Redacted.BP_Achievement_Redacted_C
class ABP_Achievement_Redacted_C : public ABP_AchievementBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FString                                FurID;                                             // 0x248(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                EggplantID;                                        // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Achievement_Redacted_C* GetDefaultObj();

	void CheckIfEquippedGear(class AGGGoat* Goat, class UGGAchievementSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class AGGPlayerController* CallFunc_GetGGPlayerController_ReturnValue, class AGGPlayerController* CallFunc_GetGGPlayerController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocalController_ReturnValue, bool CallFunc_HasGoatEggplantEquipped_Equipped, bool CallFunc_HasGoatSkinEquipped_Equipped, class UGGAlternativeGoatDataAsset* CallFunc_GetCurrentAltGoat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void HasGoatEggplantEquipped(class AGGGoat* Goat, bool* Equipped, class UGGGoatGearManager* CallFunc_GetGearManager_ReturnValue, class USceneComponent* CallFunc_GetGearOnSlot_ReturnValue, TScriptInterface<class IGGGoatGearInterface> K2Node_DynamicCast_AsGGGoat_Gear_Interface, bool K2Node_DynamicCast_bSuccess, const struct FGoatGearData& CallFunc_GetGearData_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	void HasGoatSkinEquipped(class AGGGoat* Goat, bool* Equipped, class UGGGoatGearManager* CallFunc_GetGearManager_ReturnValue, class USceneComponent* CallFunc_GetGearOnSlot_ReturnValue, TScriptInterface<class IGGGoatGearInterface> K2Node_DynamicCast_AsGGGoat_Gear_Interface, bool K2Node_DynamicCast_bSuccess, const struct FGoatGearData& CallFunc_GetGearData_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	void OnAchievementInitialize();
	void ReceiveTick(float DeltaSeconds);
	void OnLocalGearEquip(class AGGGoat* Goat, TArray<TSubclassOf<class USceneComponent>>& GearEquipped);
	void ExecuteUbergraph_BP_Achievement_Redacted(int32 EntryPoint, class AGGGoat* K2Node_CustomEvent_Goat, TArray<TSubclassOf<class USceneComponent>>& K2Node_CustomEvent_GearEquipped, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_DeltaSeconds, class AGGPlayerController* CallFunc_GetPrimaryGGPlayerController_ReturnValue, class UGGGlobalEventHandler* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AGGGoat* CallFunc_GetControlledGoat_ReturnValue);
};

}


