#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x248 - 0x240)
// BlueprintGeneratedClass BP_Achievement_Cannibal.BP_Achievement_Cannibal_C
class ABP_Achievement_Cannibal_C : public ABP_AchievementBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Achievement_Cannibal_C* GetDefaultObj();

	void OnHandlerGoatLickedActorDelegate(class AGGGoat* Goat, class AActor* LickedActor);
	void OnAchievementInitialize();
	void ExecuteUbergraph_BP_Achievement_Cannibal(int32 EntryPoint, class UGGGlobalEventHandler* CallFunc_GetGlobalEventHandler_ReturnValue, class AGGGoat* K2Node_CustomEvent_Goat, class AActor* K2Node_CustomEvent_LickedActor, class ABP_PActor_Base_C* K2Node_DynamicCast_AsBP_PActor_Base, bool K2Node_DynamicCast_bSuccess, class UGGAlternativeGoatDataAsset* CallFunc_GetCurrentAltGoat_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, class AGGPlayerController* CallFunc_GetGGPlayerController_ReturnValue, class UGGAchievementSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


