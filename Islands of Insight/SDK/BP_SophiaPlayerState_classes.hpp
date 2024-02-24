#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x8A0 - 0x880)
// BlueprintGeneratedClass BP_SophiaPlayerState.BP_SophiaPlayerState_C
class ABP_SophiaPlayerState_C : public ASophiaPlayerState
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x880(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x888(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class ASophiaPlayerState*>            PartyMember;                                       // 0x890(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_SophiaPlayerState_C* GetDefaultObj();

	void SendServerInviteToPartyMemebers(const class FString& ID);
	void Server_SendServerInviteToPartyMemebers(const class FString& ID);
	void OnInviteSent();
	void OnInviteRecieved(const class FString& ID);
	void BP_AskTravelWithParty(const class FString& IP);
	void BPI_AskSolveTogether(class ASophiaPlayerState* OtherPlayer);
	void ExecuteUbergraph_BP_SophiaPlayerState(int32 EntryPoint, class ASophiaPlayerState* K2Node_Event_OtherPlayer, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& K2Node_CustomEvent_ID_2, const class FString& K2Node_CustomEvent_ID_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance, bool K2Node_DynamicCast_bSuccess, const class FString& K2Node_CustomEvent_ID, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UWBP_AskSolveTogether_C* CallFunc_Create_ReturnValue, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_1, TArray<class ASophiaPlayerState*>& CallFunc_GetPartyMembers_ReturnValue, class ASophiaPlayerState* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ABP_SophiaPlayerState_C* K2Node_DynamicCast_AsBP_Sophia_Player_State, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Less_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, class UWBP_ServerTravelInvite_C* CallFunc_Create_ReturnValue_1, const class FString& K2Node_Event_IP);
};

}


