#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2E0 - 0x2C0)
// BlueprintGeneratedClass BP_PlayerPreview_Survival.BP_PlayerPreview_Survival_C
class ABP_PlayerPreview_Survival_C : public ABP_PlayerPreview_C
{
public:
	class UPointLightComponent*                  PointLight3;                                       // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight1;                                       // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UUMG_MainInventory_C*                  InventoryWidget;                                   // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PlayerPreview_Survival_C* GetDefaultObj();

	void On_Connected_Player_Initialised(struct FConnectedPlayer& ConnectedPlayer, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void RefreshPlayerCosmetics(bool CallFunc_IsValid_ReturnValue, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_HasActiveCharacter_ReturnValue, const struct FOnlineProfileCharacter& CallFunc_GetActiveCharacter_ReturnValue);
	void SetPlayer(class AIcarusPlayerCharacter* InPlayer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UConnectedPlayers* CallFunc_GetConnectedPlayers_ReturnValue);
	void ConstructPlayerMeshArray(TArray<class USkeletalMesh*>* MeshArray, TArray<TSoftClassPtr<class UAnimInstance>>* MeshAnimBPs, class USkeletalMesh** BodyMesh, class AIcarusPlayerCharacter* CallFunc_GetPlayer_Player, TArray<class USkeletalMesh*>& CallFunc_ConstructPlayerMeshArray_MeshArray, TArray<TSoftClassPtr<class UAnimInstance>>& CallFunc_ConstructPlayerMeshArray_MeshAnimBPs, class USkeletalMesh* CallFunc_ConstructPlayerMeshArray_BodyMesh, class USkeletalMeshComponent* CallFunc_GetThirdPersonMesh_ReturnValue);
	void UpdatePreviewVisibility();
	void ResolveVisibility(bool* Visible, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInventoryVisibile_Visible);
};

}


