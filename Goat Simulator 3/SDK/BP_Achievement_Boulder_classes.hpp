#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x260 - 0x240)
// BlueprintGeneratedClass BP_Achievement_Boulder.BP_Achievement_Boulder_C
class ABP_Achievement_Boulder_C : public ABP_AchievementBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FText                                  Override_Name;                                     // 0x248(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_Achievement_Boulder_C* GetDefaultObj();

	void On_Lick(class AGGGoat* Goat, class AActor* LickedActor);
	void On_Headbutt(class AGGGoat* Goat, class AActor* HeadbuttedActor);
	void OnAchievementInitialize();
	void ExecuteUbergraph_BP_Achievement_Boulder(int32 EntryPoint, class UGGAchievementSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UGGAchievementSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UGGGlobalEventHandler* CallFunc_GetGlobalEventHandler_ReturnValue, class UGGGlobalEventHandler* CallFunc_GetGlobalEventHandler_ReturnValue_1, class AGGGoat* K2Node_CustomEvent_Goat_1, class AActor* K2Node_CustomEvent_LickedActor, class AGGGoat* K2Node_CustomEvent_Goat, class AActor* K2Node_CustomEvent_HeadbuttedActor, class ABP_PActor_Base_C* K2Node_DynamicCast_AsBP_PActor_Base, bool K2Node_DynamicCast_bSuccess, class ABP_PActor_Base_C* K2Node_DynamicCast_AsBP_PActor_Base_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IGGNamedActorInterface> K2Node_DynamicCast_AsGGNamed_Actor_Interface, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IGGNamedActorInterface> K2Node_DynamicCast_AsGGNamed_Actor_Interface_1, bool K2Node_DynamicCast_bSuccess_3, class FText CallFunc_GetGoatSimName_ReturnValue, class FText CallFunc_GetGoatSimName_ReturnValue_1, class AGGPlayerController* CallFunc_GetGGPlayerController_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, class AGGPlayerController* CallFunc_GetGGPlayerController_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


