#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0xB0 - 0x48)
// Class RedemptionsRuntime.RedeemableRewardDataAsset
class URedeemableRewardDataAsset : public UUniquelyIdentifiableDataAsset
{
public:
	struct FRedeemableRewardUIData               UIData;                                            // 0x48(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<class URewardBehaviour*>              Rewards;                                           // 0xA0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URedeemableRewardDataAsset* GetDefaultObj();

};

// 0x48 (0x100 - 0xB8)
// Class RedemptionsRuntime.RedemptionComponent
class URedemptionComponent : public UDelayedRegistrationComponent
{
public:
	FMulticastInlineDelegateProperty_            OnClaimRedemptionResponseReceived;                 // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCurrentRedemptionsUpdated;                       // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FRedemptionEntry>              CurrentRedemptions;                                // 0xD8(0x10)(Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate)
	uint8                                        Pad_12B7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                OwnerProfileId;                                    // 0xF0(0x10)(Net, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class URedemptionComponent* GetDefaultObj();

	void Server_RequestRefresh();
	void Server_ClaimRedemption(const class FString& RedemptionId);
	void OnRep_CurrentRedemptions();
	TArray<struct FRedemptionEntry> GetCurrentRedemptions();
	void Client_RedemptionResponse(bool bSuccess, const class FString& RewardName);
	bool CanRedemptionBeClaimed(struct FRedemptionEntry& Entry);
};

// 0x0 (0x28 - 0x28)
// Class RedemptionsRuntime.RedemptionEntryFunctionLibrary
class URedemptionEntryFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class URedemptionEntryFunctionLibrary* GetDefaultObj();

	void TryGetRedemptionUIData(struct FRedemptionEntry& Entry, struct FRedeemableRewardUIData* OutData, enum class EGetResult* OutBranches);
	bool IsRedemptionValid(struct FRedemptionEntry& Entry);
	class FString GetRedemptionId(struct FRedemptionEntry& Entry);
};

}


