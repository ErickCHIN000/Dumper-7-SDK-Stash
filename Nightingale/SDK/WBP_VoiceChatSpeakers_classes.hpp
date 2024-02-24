#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x3D0 - 0x360)
// WidgetBlueprintGeneratedClass WBP_VoiceChatSpeakers.WBP_VoiceChatSpeakers_C
class UWBP_VoiceChatSpeakers_C : public UNWXVoiceChatSpeakersWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UListView*                             Speakers_List;                                     // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FString, class FString>           CachedMemberNames;                                 // 0x370(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                        CachedPartyMembers;                                // 0x3C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_VoiceChatSpeakers_C* GetDefaultObj();

	void OnVoiceChatEnabled(bool Enabled);
	void DeInitialize(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBP_PartyComponent_C* CallFunc_GetLocalPartyComponent_PartyComponent, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue);
	void InitializeBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UBP_PartyComponent_C* CallFunc_GetLocalPartyComponent_PartyComponent, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue);
	void CachePlayerNameFromID(const class FString& InProfileId, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class FString>& K2Node_MakeArray_Array);
	void OnPlayerNameRecieved(const struct FProfileNamesMapWrapper& Wrapper, const struct FOnlineServiceStatus& ServiceStatus, TArray<struct FUniqueName>& CallFunc_Map_Values_Values, TArray<class FString>& CallFunc_Map_Keys_Keys, const class FString& CallFunc_GetPublicNameWithDiscriminator_ReturnValue);
	void OnSpeakerStatusChanged(const class FString& PlayerName, bool IsSpeaking, bool IsLocalPlayer, const class FString& UniqueID, class UBP_VoiceChatSpeakerEntry_Object_C* CallFunc_SpawnObject_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UBP_VoiceChatSpeakerEntry_Object_C* CallFunc_SpawnObject_ReturnValue_1, const class FString& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_2, TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UObject* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UBP_VoiceChatSpeakerEntry_Object_C* K2Node_DynamicCast_AsBP_Voice_Chat_Speaker_Entry_Object, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_TextText_ReturnValue);
	void OnPartyLeft(const class FString& RoomId);
	void OnPartyJoined(const class FString& RoomId, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UBP_PartyComponent_C* CallFunc_GetLocalPartyComponent_PartyComponent, TArray<class ANWXPlayerState*>& CallFunc_GetPlayerStatesOfPartyMembers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ANWXPlayerState* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetPersistentUniqueId_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void OnMemberLeftParty(const class FString& RoomId, const class FString& ProfileId, bool CallFunc_Array_RemoveItem_ReturnValue);
	void OnMemberJoinedParty(const class FString& RoomId, const class FString& ProfileId, int32 CallFunc_Array_Add_ReturnValue);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_VoiceChatSpeakers(int32 EntryPoint);
};

}


