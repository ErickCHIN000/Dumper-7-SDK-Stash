#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x1C8 - 0xF8)
// BlueprintGeneratedClass BP_RealmHistory_Persistence.BP_RealmHistory_Persistence_C
class UBP_RealmHistory_Persistence_C : public UPersistentDataComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class FString>                        VisitedRealmIDs;                                   // 0x100(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance, SaveGame)
	int32                                        MaxLength;                                         // 0x110(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1701[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayTagContainer>         VisitedRealmTags;                                  // 0x118(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance, SaveGame)
	class FString                                RespiteRealmID;                                    // 0x128(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, HasGetValueTypeHash)
	struct FGameplayTagContainer                 RespiteRealmTags;                                  // 0x138(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                               RespiteLevelLocation;                              // 0x158(0x18)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class FString                                RespiteMapTableRowName;                            // 0x170(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            StoredRespitePointUpdated;                         // 0x180(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FS_Persisted_RealmVisitedInfo> VisitedRealmInfo;                                  // 0x190(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance, SaveGame)
	TArray<class FString>                        RecentlyPlayedWith;                                // 0x1A0(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance, SaveGame, RepNotify)
	int32                                        MaxRecentPlayersListLength;                        // 0x1B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1725[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            RecentlyPlayedWithUpdate;                          // 0x1B8(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UBP_RealmHistory_Persistence_C* GetDefaultObj();

	void OnRep_RecentlyPlayedWith();
	void OnRep_RespiteLevelLocation();
	void StoreRealmRespiteInfo(class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ANWXGameStateBase* K2Node_DynamicCast_AsNWXGame_State_Base, bool K2Node_DynamicCast_bSuccess_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale);
	void RegisterVisitedRealm(struct FS_Persisted_RealmVisitedInfo& RealmInfo, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void Server_RegisterVisitedRealm(struct FS_Persisted_RealmVisitedInfo& RealmInfo);
	void Server_StoreRecentlyPlayedWithPlayer(class FString& ProfileId);
	void ExecuteUbergraph_BP_RealmHistory_Persistence(int32 EntryPoint, const struct FS_Persisted_RealmVisitedInfo& K2Node_CustomEvent_RealmInfo, const class FString& K2Node_CustomEvent_ProfileID, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void RecentlyPlayedWithUpdate__DelegateSignature();
	void StoredRespitePointUpdated__DelegateSignature();
};

}


