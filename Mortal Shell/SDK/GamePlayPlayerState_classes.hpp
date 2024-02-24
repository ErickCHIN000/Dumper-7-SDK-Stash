#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0x351 - 0x320)
// BlueprintGeneratedClass GamePlayPlayerState.GamePlayPlayerState_C
class AGamePlayPlayerState_C : public APlayerState
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         HasArtifact;                                       // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasPlayerDied_;                                    // 0x331(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DoveIntoDepths_;                                   // 0x332(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B7[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          PlayerUnlocks;                                     // 0x338(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UUnlocksSave_C*                        UnlockSaveRef;                                     // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasShamrockBuff_;                                  // 0x350(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AGamePlayPlayerState_C* GetDefaultObj();

	void LoadPlayerUnlocks(bool CallFunc_HasAuthority_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue_1, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_1, class UUnlocksSave_C* K2Node_DynamicCast_AsUnlocks_Save, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesSaveGameExist_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_GamePlayPlayerState(int32 EntryPoint);
};

}


