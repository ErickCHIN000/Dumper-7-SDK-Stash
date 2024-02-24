#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EChallengePlatform : uint8
{
	Any                            = 0,
	Steam                          = 1,
	Epic                           = 2,
	Xbox                           = 3,
	Playstation                    = 4,
	Test                           = 255,
	EChallengePlatform_MAX         = 256,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x48 - 0x0)
// ScriptStruct ChallengesRuntime.InProgressChallenge
struct FInProgressChallenge
{
public:
	struct FGuid                                 ActivationHandle;                                  // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 CompletionHandle;                                  // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UChallengeDataAsset>    ChallengeDataAsset;                                // 0x20(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ChallengesRuntime.ChallengeRewardPresentationPair
struct FChallengeRewardPresentationPair
{
public:
	TSoftClassPtr<class URewardBehaviour>        RewardType;                                        // 0x0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UObject>                 PresentationType;                                  // 0x28(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


