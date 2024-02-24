#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x108 (0x1B8 - 0xB0)
// BlueprintGeneratedClass BP_SimulationMonitorComponent.BP_SimulationMonitorComponent_C
class UBP_SimulationMonitorComponent_C : public USimulationMonitorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        RealmProfile;                                      // 0xB8(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F34[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnRealmProfileChanged;                             // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        Color_Row_Random;                                  // 0xD0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F40[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnColorRowRandomChanged;                           // 0xD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                       Season_Random;                                     // 0xE8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnSeasonRandomChanged;                             // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnDayNightChanged;                                 // 0x100(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ABP_SimulationStateManager_C*          SSM;                                               // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FS_Profile_Component_Randomize        Profile_Component_Randomize;                       // 0x118(0x74)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F5B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnProfile_Component_RandomizeChanged;              // 0x190(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        RealmVisualSeed;                                   // 0x1A0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F6A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnRealmVisualSeedChanged;                          // 0x1A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UBP_SimulationMonitorComponent_C* GetDefaultObj();

	bool GetIsNight(bool CallFunc_GetDayNightState_IsNight);
	void BindToDayNightChanged(class ABP_TimeOfDayManager_C* TimeOfDayManager, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void OnRep_RealmVisualSeed();
	void OnRep_Profile_Component_Randomize();
	void OnTimeOfDayNightChanged(bool IsNight);
	void RegisterSimStateManagerEvents(class AManagerBase* Manager, bool bIsReady, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_SimulationStateManager_C* K2Node_DynamicCast_AsBP_Simulation_State_Manager, bool K2Node_DynamicCast_bSuccess, class ABP_TimeOfDayManager_C* CallFunc_GetTimeOfDayManager_TimeOfDayManager, bool CallFunc_IsValid_ReturnValue);
	void GetDayNightState(bool* IsNight, bool CallFunc_AreAutomatedTestsRunning_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_TimeOfDayManager_C* CallFunc_GetTimeOfDayManager_TimeOfDayManager, bool CallFunc_IsValid_ReturnValue_1);
	void OnRep_Season_Random();
	void OnRep_Color_Row_Random();
	void OnPlayerLogout(class AController* ExitingController, int32 CallFunc_GetPlayerCount_ReturnValue);
	void OnPlayerJoined(class APlayerController* NewPlayer, int32 CallFunc_GetPlayerCount_ReturnValue);
	void OnRep_RealmProfile();
	void ReceiveActorReady();
	void BindEventToOnDayNightChanged(FDelegateProperty_& Event);
	void UnbindEventFromOnDayNightChanged(FDelegateProperty_& Event);
	void ExecuteUbergraph_BP_SimulationMonitorComponent(int32 EntryPoint, FDelegateProperty_ K2Node_Event_Event, TSubclassOf<class AManagerBase> Temp_class_Variable, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class ANWXGameModeBase* CallFunc_GetGameMode_GameMode, class ABP_GameMode_C* K2Node_DynamicCast_AsBP_Game_Mode, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_Event_Event_1, class ANWXGameModeBase* CallFunc_GetNWXGameModeBase_ReturnValue, bool CallFunc_IsManagerExpected_ReturnValue);
	void OnRealmVisualSeedChanged__DelegateSignature(int32 RealmVisualSeed);
	void OnProfile_Component_RandomizeChanged__DelegateSignature(const struct FS_Profile_Component_Randomize& Profile_Component_Randomize);
	void OnDayNightChanged__DelegateSignature(bool IsNight);
	void OnSeasonRandomChanged__DelegateSignature(double NewSeasonRandom);
	void OnColorRowRandomChanged__DelegateSignature(int32 NewColorRowRandom);
	void OnRealmProfileChanged__DelegateSignature(int32 NewRealmProfile);
};

}


