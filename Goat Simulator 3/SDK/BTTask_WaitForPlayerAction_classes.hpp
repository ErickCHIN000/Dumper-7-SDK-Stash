#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x118 - 0xA8)
// BlueprintGeneratedClass BTTask_WaitForPlayerAction.BTTask_WaitForPlayerAction_C
class UBTTask_WaitForPlayerAction_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                Player;                                            // 0xB0(0x28)(Edit, BlueprintVisible)
	class AGGGoat*                               Goat;                                              // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGCharacter*                          Character_Owner;                                   // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Wait_Time;                                         // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D18[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          Timer_Handle;                                      // 0xF0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        Actions;                                           // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Stationary_Jump_Distance;                          // 0xFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Has_Jumped;                                        // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D22[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Jump_Location;                                     // 0x104(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Sucess_on_action_done;                             // 0x110(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Sucess_on_wait_time_over;                          // 0x111(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D2E[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Distance_from_NPC;                                 // 0x114(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTTask_WaitForPlayerAction_C* GetDefaultObj();

	void On_Player_Trick_Completed(class AGGGoat* Goat, const class FString& TrickName);
	void On_Player_Do_Emote(class AGGGoat* EmotingGoat, class UGGGoatEmote* Emote);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void On_Wait_Time_Over();
	void On_Goat_Jumped(class AGGCharacter* Character);
	void On_Goat_Ragdoll_changed(class AGGCharacter* Character, bool NewRagdollState);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void On_Goat_Baa(class AGGGoat* GoatBaaing);
	void ExecuteUbergraph_BTTask_WaitForPlayerAction(int32 EntryPoint, int32 CallFunc_And_IntInt_ReturnValue, int32 CallFunc_And_IntInt_ReturnValue_1, bool CallFunc_Conv_IntToBool_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue_1, int32 CallFunc_And_IntInt_ReturnValue_2, bool CallFunc_Conv_IntToBool_ReturnValue_2, class UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue, class AGGGoat* K2Node_CustomEvent_Goat, const class FString& K2Node_CustomEvent_TrickName, class AGGGoat* K2Node_DynamicCast_AsGGGoat, bool K2Node_DynamicCast_bSuccess, class AGGGoat* K2Node_CustomEvent_EmotingGoat, class UGGGoatEmote* K2Node_CustomEvent_Emote, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_And_IntInt_ReturnValue_3, bool CallFunc_Conv_IntToBool_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AAIController* K2Node_Event_OwnerController_2, class APawn* K2Node_Event_ControlledPawn_2, class AAIController* K2Node_Event_OwnerController_1, class APawn* K2Node_Event_ControlledPawn_1, class AGGCharacter* K2Node_DynamicCast_AsGGCharacter, bool K2Node_DynamicCast_bSuccess_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AGGCharacter* K2Node_CustomEvent_Character_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class AGGCharacter* K2Node_CustomEvent_Character, bool K2Node_CustomEvent_NewRagdollState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_Vector_Distance2D_ReturnValue, bool CallFunc_IsMovingOnGround_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, int32 CallFunc_And_IntInt_ReturnValue_4, class AGGGoat* K2Node_CustomEvent_GoatBaaing, bool CallFunc_Conv_IntToBool_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, int32 CallFunc_And_IntInt_ReturnValue_5, bool CallFunc_Conv_IntToBool_ReturnValue_5, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, int32 CallFunc_And_IntInt_ReturnValue_6, bool CallFunc_Conv_IntToBool_ReturnValue_6, int32 CallFunc_And_IntInt_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_Conv_IntToBool_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_1);
};

}


