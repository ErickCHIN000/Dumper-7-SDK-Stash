#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class RewardsRuntime.RewardBehaviour
class URewardBehaviour : public UObject
{
public:
	TWeakObjectPtr<class APlayerState>           WorldContextObject;                                // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class URewardBehaviour* GetDefaultObj();

	void IsRewardValid(class APlayerState* PlayerState, bool* bIsValid, class FText* OutInvalidReason);
	void GetDebugDescription(class FString& OutDescription);
	void ApplyReward(class APlayerState* PlayerState, class UObject* SenderContextObject);
};

// 0x10 (0x40 - 0x30)
// Class RewardsRuntime.RewardBehaviour_Multiple
class URewardBehaviour_Multiple : public URewardBehaviour
{
public:
	TArray<class URewardBehaviour*>              Rewards;                                           // 0x30(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URewardBehaviour_Multiple* GetDefaultObj();

};

}


