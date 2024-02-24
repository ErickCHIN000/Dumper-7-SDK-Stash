#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x11F8 - 0x11E0)
// BlueprintGeneratedClass ActiveMissileLauncher.ActiveMissileLauncher_C
class AActiveMissileLauncher_C : public ATTLActiveMissileLauncher
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x11E0(0x8)(Transient, DuplicateTransient)
	bool                                         TargetInitialized;                                 // 0x11E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7FD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTTLLockonHUDComponent*                LockonHUD;                                         // 0x11F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AActiveMissileLauncher_C* GetDefaultObj();

	void GetTargetList(TArray<class AActor*>* TargetList, TArray<class AActor*>& K2Node_MakeArray_Array, class AActor* CallFunc_GetOwner_ReturnValue, class ULockonComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UserConstructionScript();
	void StartLaunch();
	void PlayMarkerAnimation(class UUserWidget* Marker);
	void ReceiveBeginPlay();
	void OnInputEndBP();
	void ExecuteUbergraph_ActiveMissileLauncher(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class UArsenalFireControlComponent_C* CallFunc_GetComponentByClass_ReturnValue, class UUserWidget* K2Node_Event_marker, class UMsn_hud_matchlockon00_C* K2Node_DynamicCast_AsMsn_Hud_Matchlockon_00, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue, class AHUDMission_C* K2Node_DynamicCast_AsHUDMission, bool K2Node_DynamicCast_bSuccess1);
};

}


