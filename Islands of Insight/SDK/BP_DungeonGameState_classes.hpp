#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x520 - 0x518)
// BlueprintGeneratedClass BP_DungeonGameState.BP_DungeonGameState_C
class ABP_DungeonGameState_C : public ABP_SandboxGameState_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x518(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_DungeonGameState_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void OnEnd();
	void OnPlayerJoined();
	void CheckPlayerCount();
	void SolvedDungeon();
	void ExecuteUbergraph_BP_DungeonGameState(int32 EntryPoint, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Greater_IntInt_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Loop_Counter_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ASophiaGameState* K2Node_DynamicCast_AsSophia_Game_State, bool K2Node_DynamicCast_bSuccess, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ABP_SandboxGameMode_C* K2Node_DynamicCast_AsBP_Sandbox_Game_Mode, bool K2Node_DynamicCast_bSuccess_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, class ASophiaGameState* K2Node_DynamicCast_AsSophia_Game_State_1, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue_2, class ASophiaGameState* K2Node_DynamicCast_AsSophia_Game_State_2, bool K2Node_DynamicCast_bSuccess_3, class AGameStateBase* CallFunc_GetGameState_ReturnValue_3, TArray<class ABP_Dungeon_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ASophiaGameState* K2Node_DynamicCast_AsSophia_Game_State_3, bool K2Node_DynamicCast_bSuccess_4, class ABP_Dungeon_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class APlayerState* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class ABP_SophiaCharacterController_C* K2Node_DynamicCast_AsBP_Sophia_Character_Controller, bool K2Node_DynamicCast_bSuccess_5);
};

}


