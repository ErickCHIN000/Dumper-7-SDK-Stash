#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x4E0 - 0x4C8)
// WidgetBlueprintGeneratedClass WBP_DB_Encounters.WBP_DB_Encounters_C
class UWBP_DB_Encounters_C : public UWBP_NonShippableWindow_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Encounter_Gym_C*                  WBP_Encounter_Gym;                                 // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_DebugModeComponent_C*              DebugModeComponent;                                // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_DB_Encounters_C* GetDefaultObj();

	void SetEncounterOptions();
	void Construct();
	void OnEncounterGymReady();
	void ExecuteUbergraph_WBP_DB_Encounters(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class UBP_DebugModeComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_AreEncounterAssetsLoaded_AssetsLoaded);
};

}


