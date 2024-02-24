#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// Function ChallengesRuntime.ChallengeDefinition.IsVisible
struct IChallengeDefinition_IsVisible_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E5D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChallengesRuntime.ChallengeDefinition.GetTitle
struct IChallengeDefinition_GetTitle_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChallengesRuntime.ChallengeDefinition.GetStartTime
struct IChallengeDefinition_GetStartTime_Params
{
public:
	struct FDateTime                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChallengesRuntime.ChallengeDefinition.GetRewards
struct IChallengeDefinition_GetRewards_Params
{
public:
	TArray<class URewardBehaviour*>              ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function ChallengesRuntime.ChallengeDefinition.GetPlatformAchievements
struct IChallengeDefinition_GetPlatformAchievements_Params
{
public:
	TSet<enum class EChallengePlatform>          ReturnValue;                                       // 0x0(0x50)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChallengesRuntime.ChallengeDefinition.GetID
struct IChallengeDefinition_GetID_Params
{
public:
	struct FExperienceStateID                    ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChallengesRuntime.ChallengeDefinition.GetIcon
struct IChallengeDefinition_GetIcon_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             ReturnValue;                                       // 0x0(0x28)(Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChallengesRuntime.ChallengeDefinition.GetEndTime
struct IChallengeDefinition_GetEndTime_Params
{
public:
	struct FDateTime                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChallengesRuntime.ChallengeDefinition.GetDescription
struct IChallengeDefinition_GetDescription_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChallengesRuntime.ChallengeDefinition.GetCompletionCondition
struct IChallengeDefinition_GetCompletionCondition_Params
{
public:
	TSoftObjectPtr<class UConditionBehaviour>    ReturnValue;                                       // 0x0(0x28)(ConstParm, Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChallengesRuntime.ChallengeDefinition.GetCategoryTag
struct IChallengeDefinition_GetCategoryTag_Params
{
public:
	struct FGameplayTag                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChallengesRuntime.ChallengeProgress.GetProgressData
struct IChallengeProgress_GetProgressData_Params
{
public:
	struct FConditionProgressDataList            OutProgressData;                                   // 0x0(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChallengesRuntime.ChallengeProgress.GetMaxCount
struct IChallengeProgress_GetMaxCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChallengesRuntime.ChallengeProgress.GetID
struct IChallengeProgress_GetID_Params
{
public:
	struct FExperienceStateID                    ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChallengesRuntime.ChallengeProgress.GetCount
struct IChallengeProgress_GetCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChallengesRuntime.ChallengeRewardPresentation.Initialize
struct IChallengeRewardPresentation_Initialize_Params
{
public:
	class URewardBehaviour*                      Reward;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F85[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function ChallengesRuntime.ChallengeRewardPresentation.GetQuantity
struct IChallengeRewardPresentation_GetQuantity_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChallengesRuntime.ChallengeRewardPresentation.GetName
struct IChallengeRewardPresentation_GetName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChallengesRuntime.ChallengeRewardPresentation.GetIcon
struct IChallengeRewardPresentation_GetIcon_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             ReturnValue;                                       // 0x0(0x28)(Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChallengesRuntime.ChallengeRewardPresentation.GetDescription
struct IChallengeRewardPresentation_GetDescription_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChallengesRuntime.ChallengeRewardPresentationFunctionLibrary.GetChallengeRewardPresentationForReward
struct UChallengeRewardPresentationFunctionLibrary_GetChallengeRewardPresentationForReward_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URewardBehaviour*                      Reward;                                            // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class IChallengeRewardPresentation> Presentation;                                      // 0x10(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FEE[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChallengesRuntime.ChallengeSystem.Server_RequestChallengesProgressPage
struct UChallengeSystem_Server_RequestChallengesProgressPage_Params
{
public:
	int32                                        PageNumber;                                        // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PageSize;                                          // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChallengesRuntime.ChallengeSystem.Server_RemoveWatchedChallenge
struct UChallengeSystem_Server_RemoveWatchedChallenge_Params
{
public:
	struct FExperienceStateID                    ID;                                                // 0x0(0x4)(ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChallengesRuntime.ChallengeSystem.Server_ClaimRewards
struct UChallengeSystem_Server_ClaimRewards_Params
{
public:
	struct FExperienceStateID                    ID;                                                // 0x0(0x4)(ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChallengesRuntime.ChallengeSystem.Server_AddWatchedChallenge
struct UChallengeSystem_Server_AddWatchedChallenge_Params
{
public:
	struct FExperienceStateID                    ID;                                                // 0x0(0x4)(ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChallengesRuntime.ChallengeSystem.HandleExperienceStateChanged
struct UChallengeSystem_HandleExperienceStateChanged_Params
{
public:
	struct FExperienceStateID                    ID;                                                // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OldValue;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewValue;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// DelegateFunction ChallengesRuntime.ChallengeSystem.ChallengeRewardsGrantedMulticastDelegate__DelegateSignature
struct UChallengeSystem_ChallengeRewardsGrantedMulticastDelegate__DelegateSignature_Params
{
public:
	struct FExperienceStateID                    ChallengeID;                                       // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// DelegateFunction ChallengesRuntime.ChallengeSystem.ChallengeCompletedMulticastDelegate__DelegateSignature
struct UChallengeSystem_ChallengeCompletedMulticastDelegate__DelegateSignature_Params
{
public:
	struct FExperienceStateID                    ChallengeID;                                       // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChallengesRuntime.ChallengeSystemMutable.Server_RequestChallengesProgressPage
struct IChallengeSystemMutable_Server_RequestChallengesProgressPage_Params
{
public:
	int32                                        PageNumber;                                        // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PageSize;                                          // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChallengesRuntime.ChallengeSystemMutable.Server_RemoveWatchedChallenge
struct IChallengeSystemMutable_Server_RemoveWatchedChallenge_Params
{
public:
	struct FExperienceStateID                    ID;                                                // 0x0(0x4)(ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChallengesRuntime.ChallengeSystemMutable.Server_ClaimRewards
struct IChallengeSystemMutable_Server_ClaimRewards_Params
{
public:
	struct FExperienceStateID                    ID;                                                // 0x0(0x4)(ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChallengesRuntime.ChallengeSystemMutable.Server_AddWatchedChallenge
struct IChallengeSystemMutable_Server_AddWatchedChallenge_Params
{
public:
	struct FExperienceStateID                    ID;                                                // 0x0(0x4)(ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChallengesRuntime.ChallengeSystemObservable.UnbindDelegate_OnWatchedChallengesChanged
struct IChallengeSystemObservable_UnbindDelegate_OnWatchedChallengesChanged_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChallengesRuntime.ChallengeSystemObservable.UnbindDelegate_OnChallengesToDisplayInPageChanged
struct IChallengeSystemObservable_UnbindDelegate_OnChallengesToDisplayInPageChanged_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChallengesRuntime.ChallengeSystemObservable.UnbindDelegate_OnChallengeRewardsGranted
struct IChallengeSystemObservable_UnbindDelegate_OnChallengeRewardsGranted_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChallengesRuntime.ChallengeSystemObservable.UnbindDelegate_OnChallengeCompleted
struct IChallengeSystemObservable_UnbindDelegate_OnChallengeCompleted_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChallengesRuntime.ChallengeSystemObservable.IsChallengeComplete
struct IChallengeSystemObservable_IsChallengeComplete_Params
{
public:
	struct FExperienceStateID                    ID;                                                // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1221[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChallengesRuntime.ChallengeSystemObservable.GetWatchedChallenges
struct IChallengeSystemObservable_GetWatchedChallenges_Params
{
public:
	TArray<TScriptInterface<class IChallengeProgress>> OutChallenges;                                     // 0x0(0x10)(Parm, OutParm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChallengesRuntime.ChallengeSystemObservable.GetTotalNumberOfChallenges
struct IChallengeSystemObservable_GetTotalNumberOfChallenges_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChallengesRuntime.ChallengeSystemObservable.GetChallengesForRequestedProgressPage
struct IChallengeSystemObservable_GetChallengesForRequestedProgressPage_Params
{
public:
	TArray<TScriptInterface<class IChallengeProgress>> OutChallenges;                                     // 0x0(0x10)(Parm, OutParm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChallengesRuntime.ChallengeSystemObservable.GetChallengeDefinition
struct IChallengeSystemObservable_GetChallengeDefinition_Params
{
public:
	struct FExperienceStateID                    ID;                                                // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_127E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IChallengeDefinition> ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChallengesRuntime.ChallengeSystemObservable.BindDelegate_OnWatchedChallengesChanged
struct IChallengeSystemObservable_BindDelegate_OnWatchedChallengesChanged_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChallengesRuntime.ChallengeSystemObservable.BindDelegate_OnChallengesToDisplayInPageChanged
struct IChallengeSystemObservable_BindDelegate_OnChallengesToDisplayInPageChanged_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChallengesRuntime.ChallengeSystemObservable.BindDelegate_OnChallengeRewardsGranted
struct IChallengeSystemObservable_BindDelegate_OnChallengeRewardsGranted_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChallengesRuntime.ChallengeSystemObservable.BindDelegate_OnChallengeCompleted
struct IChallengeSystemObservable_BindDelegate_OnChallengeCompleted_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChallengesRuntime.ChallengeSystemObservable.AreRewardsGranted
struct IChallengeSystemObservable_AreRewardsGranted_Params
{
public:
	struct FExperienceStateID                    ChallengeID;                                       // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12FC[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


