#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x4A8 - 0x480)
// BlueprintGeneratedClass BP_PickableItem_AIHand_00.BP_PickableItem_AIHand_00_C
class ABP_PickableItem_AIHand_00_C : public ABP_PickableItem_00_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x480(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class FString                                AIOwnerName;                                       // 0x488(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, HasGetValueTypeHash)
	bool                                         LockInteractionOnLoad;                             // 0x498(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	bool                                         UnlockSaveInteractionState;                        // 0x499(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         BlockRestorePickableFromSave;                      // 0x49A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2702[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGAICharacter*                        AICharacter;                                       // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PickableItem_AIHand_00_C* GetDefaultObj();

	void InitAIHandPickup(const class FString& AIOwnerName);
	void InternalOnInteractionLockedStateChanged(bool CallFunc_Not_PreBool_ReturnValue);
	void PutItemInHand(class ACGAICharacter* AICharacter, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess);
	void LoadingFinished();
	void RestorePickablePositionToOwner();
	void BindOwnerVisibilityChange();
	void UpdateVisibility(bool NewVisibility);
	void UnbindOwnerVisibilityChange();
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_PickableItem_AIHand_00(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class AActor* CallFunc_FindActorByName_ReturnValue, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter, bool K2Node_DynamicCast_bSuccess, bool K2Node_CustomEvent_NewVisibility, class Aba_ch_npc_00_C* K2Node_DynamicCast_AsBa_Ch_Npc_00, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, class Aba_ch_npc_00_C* K2Node_DynamicCast_AsBa_Ch_Npc_00_1, bool K2Node_DynamicCast_bSuccess_2);
};

}


