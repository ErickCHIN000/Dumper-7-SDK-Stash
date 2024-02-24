#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0xAE0 - 0xA48)
// BlueprintGeneratedClass BP_Structure_DeathChest.BP_Structure_DeathChest_C
class ABP_Structure_DeathChest_C : public ABP_Structure_Functional_Container_SelfDestruct_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UDeathChestMapPinComponent*            DeathChestMapPin;                                  // 0xA50(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_75DE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureAssetReference              DeathChest;                                        // 0xA60(0x80)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Structure_DeathChest_C* GetDefaultObj();

	void SetOwningPlayerController(class AController* OwningController, class APawn* OwningPawn, bool CallFunc_SetOwningPlayerInfo_ReturnValue, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetPlayerNameFromPawn_PlayerName, const class FString& CallFunc_GetOwningPlayerID_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APlayerState* CallFunc_GetPlayerStateFromId_PlayerState, class ANWXPlayerState* K2Node_DynamicCast_AsNWXPlayer_State, bool K2Node_DynamicCast_bSuccess_1, const struct FCachedActorData& CallFunc_GetLatestDamageSource_ReturnValue, const class FString& CallFunc_UI_Text_Parse_CauseOfDeath_CauseOfDeath, bool CallFunc_IsValid_ReturnValue_1);
	void Handle_Ownership_Updated(class AActor* Actor, const class FString& OldOwningPlayerID, class APawn* OwningPawn, class AController* OwningController, class FText L_CauseOfDeath, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetPlayerNameFromPawn_PlayerName, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_GetOwningPlayerID_ReturnValue, class APlayerState* CallFunc_GetPlayerStateFromId_PlayerState, class ANWXPlayerState* K2Node_DynamicCast_AsNWXPlayer_State, bool K2Node_DynamicCast_bSuccess_1, const struct FCachedActorData& CallFunc_GetLatestDamageSource_ReturnValue, const class FString& CallFunc_UI_Text_Parse_CauseOfDeath_CauseOfDeath);
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_Structure_DeathChest(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetAllItems_self_CastInput, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetNumberItemEntries_self_CastInput, int32 CallFunc_GetNumberItemEntries_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_DeathChestSpawner_C* CallFunc_FinishSpawningActor_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_SetInterfacePropertyByName_Value_CastInput);
};

}


