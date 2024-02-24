#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x80 - 0x30)
// Class ChallengesRuntime.ChallengeConditionPresentationMapping
class UChallengeConditionPresentationMapping : public UDataAsset
{
public:
	TMap<TSoftClassPtr<class UConditionBehaviour>, TSoftClassPtr<class UQuestTaskPresentationDataBuilder>> ChallengeConditionPresentationMap;                 // 0x30(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UChallengeConditionPresentationMapping* GetDefaultObj();

};

// 0x28 (0x60 - 0x38)
// Class ChallengesRuntime.ChallengeConditionPresentationSettings
class UChallengeConditionPresentationSettings : public UDeveloperSettings
{
public:
	TSoftObjectPtr<class UChallengeConditionPresentationMapping> ChallengeConditionPresentationMapping;             // 0x38(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UChallengeConditionPresentationSettings* GetDefaultObj();

};

// 0x108 (0x138 - 0x30)
// Class ChallengesRuntime.ChallengeDataAsset
class UChallengeDataAsset : public UDataAsset
{
public:
	uint8                                        Pad_E02[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Title;                                             // 0x40(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x58(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x70(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          CategoryTag;                                       // 0x98(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UConditionBehaviour*                   CompletionCondition;                               // 0xA0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UConditionBehaviour*                   ActivationCondition;                               // 0xA8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URequirement*                          VisibilityRequirement;                             // 0xB0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EChallengePlatform                Platform;                                          // 0xB8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E14[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<enum class EChallengePlatform>          AchievementPlatforms;                              // 0xC0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<class URewardBehaviour*>              Rewards;                                           // 0x110(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FDateTime                             StartTime;                                         // 0x120(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             EndTime;                                           // 0x128(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoAddedToHUD;                                   // 0x130(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUntrackableOnHUD;                                 // 0x131(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E2B[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FExperienceStateID                    CompletionExperienceState;                         // 0x134(0x4)(NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UChallengeDataAsset* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ChallengesRuntime.ChallengeDefinition
class IChallengeDefinition : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IChallengeDefinition* GetDefaultObj();

	bool IsVisible(class UObject* Context);
	class FText GetTitle();
	struct FDateTime GetStartTime();
	TArray<class URewardBehaviour*> GetRewards();
	TSet<enum class EChallengePlatform> GetPlatformAchievements();
	struct FExperienceStateID GetID();
	TSoftObjectPtr<class UTexture2D> GetIcon();
	struct FDateTime GetEndTime();
	class FText GetDescription();
	TSoftObjectPtr<class UConditionBehaviour> GetCompletionCondition();
	struct FGameplayTag GetCategoryTag();
};

// 0x0 (0x28 - 0x28)
// Class ChallengesRuntime.ChallengeExperienceStateIDEnumerator
class UChallengeExperienceStateIDEnumerator : public UExperienceStateDefinitionSource
{
public:

	static class UClass* StaticClass();
	static class UChallengeExperienceStateIDEnumerator* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ChallengesRuntime.ChallengeProgress
class IChallengeProgress : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IChallengeProgress* GetDefaultObj();

	void GetProgressData(struct FConditionProgressDataList* OutProgressData);
	int32 GetMaxCount();
	struct FExperienceStateID GetID();
	int32 GetCount();
};

// 0x0 (0x28 - 0x28)
// Class ChallengesRuntime.ChallengeRewardPresentation
class IChallengeRewardPresentation : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IChallengeRewardPresentation* GetDefaultObj();

	bool Initialize(class URewardBehaviour* Reward);
	int32 GetQuantity();
	class FText GetName();
	TSoftObjectPtr<class UTexture2D> GetIcon();
	class FText GetDescription();
};

// 0x0 (0x28 - 0x28)
// Class ChallengesRuntime.ChallengeRewardPresentationFunctionLibrary
class UChallengeRewardPresentationFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UChallengeRewardPresentationFunctionLibrary* GetDefaultObj();

	bool GetChallengeRewardPresentationForReward(class UObject* WorldContextObject, class URewardBehaviour* Reward, TScriptInterface<class IChallengeRewardPresentation>* Presentation);
};

// 0x10 (0x40 - 0x30)
// Class ChallengesRuntime.ChallengeRewardPresentationMapping
class UChallengeRewardPresentationMapping : public UDataAsset
{
public:
	TArray<struct FChallengeRewardPresentationPair> PresentationForRewards;                            // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UChallengeRewardPresentationMapping* GetDefaultObj();

};

// 0x28 (0x60 - 0x38)
// Class ChallengesRuntime.ChallengeRewardPresentationSettings
class UChallengeRewardPresentationSettings : public UDeveloperSettings
{
public:
	TSoftObjectPtr<class UChallengeRewardPresentationMapping> ChallengeRewardPresentationMapping;                // 0x38(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UChallengeRewardPresentationSettings* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class ChallengesRuntime.ChallengeCompletedRequirement
class UChallengeCompletedRequirement : public URequirement
{
public:
	class UChallengeDataAsset*                   RequiredChallengeCompleted;                        // 0x28(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UChallengeCompletedRequirement* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class ChallengesRuntime.ChallengeProgressObject
class UChallengeProgressObject : public UObject
{
public:
	uint8                                        Pad_1036[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FExperienceStateID                    ChallengeID;                                       // 0x30(0x4)(Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_103B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FConditionProgressDataList            ProgressData;                                      // 0x38(0x10)(Net, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UChallengeProgressObject* GetDefaultObj();

};

// 0x200 (0x2A0 - 0xA0)
// Class ChallengesRuntime.ChallengeSystem
class UChallengeSystem : public UActorComponent
{
public:
	uint8                                        Pad_10F0[0xB8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UBasicAwaiter*                         Awaiter;                                           // 0x158(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_10F2[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UChallengeDataAsset*>           PendingAdds;                                       // 0x178(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_10F4[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInProgressChallenge>          Challenges;                                        // 0x1D8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UChallengeProgressObject*>      WatchedChallenges;                                 // 0x1E8(0x10)(Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate)
	TArray<class UChallengeProgressObject*>      ChallengesToDisplayInPage;                         // 0x1F8(0x10)(Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnWatchedChallengesChanged;                        // 0x208(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnChallengesToDisplayInPageChanged;                // 0x218(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnChallengeCompleted;                              // 0x228(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnRewardsGranted;                                  // 0x238(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1108[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UChallengeSystem* GetDefaultObj();

	void StartOrEndChallengesAndScheduleTimer();
	void Server_RequestChallengesProgressPage(int32 PageNumber, int32 PageSize);
	void Server_RemoveWatchedChallenge(struct FExperienceStateID& ID);
	void Server_ClaimRewards(struct FExperienceStateID& ID);
	void Server_AddWatchedChallenge(struct FExperienceStateID& ID);
	void OnRep_WatchedChallenges();
	void OnRep_ChallengesToDisplayInPage();
	void OnExperienceStatesReady();
	void HandleExperienceStateChanged(struct FExperienceStateID& ID, int32 OldValue, int32 NewValue);
	void ChallengeSystemMulticastDelegate__DelegateSignature();
	void ChallengeRewardsGrantedMulticastDelegate__DelegateSignature(struct FExperienceStateID& ChallengeID);
	void ChallengeCompletedMulticastDelegate__DelegateSignature(struct FExperienceStateID& ChallengeID);
};

// 0x0 (0x28 - 0x28)
// Class ChallengesRuntime.ChallengeSystemMutable
class IChallengeSystemMutable : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IChallengeSystemMutable* GetDefaultObj();

	void Server_RequestChallengesProgressPage(int32 PageNumber, int32 PageSize);
	void Server_RemoveWatchedChallenge(struct FExperienceStateID& ID);
	void Server_ClaimRewards(struct FExperienceStateID& ID);
	void Server_AddWatchedChallenge(struct FExperienceStateID& ID);
};

// 0x0 (0x28 - 0x28)
// Class ChallengesRuntime.ChallengeSystemObservable
class IChallengeSystemObservable : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IChallengeSystemObservable* GetDefaultObj();

	void UnbindDelegate_OnWatchedChallengesChanged(FDelegateProperty_& Delegate);
	void UnbindDelegate_OnChallengesToDisplayInPageChanged(FDelegateProperty_& Delegate);
	void UnbindDelegate_OnChallengeRewardsGranted(FDelegateProperty_& Delegate);
	void UnbindDelegate_OnChallengeCompleted(FDelegateProperty_& Delegate);
	bool IsChallengeComplete(struct FExperienceStateID& ID);
	void GetWatchedChallenges(TArray<TScriptInterface<class IChallengeProgress>>* OutChallenges);
	int32 GetTotalNumberOfChallenges();
	void GetChallengesForRequestedProgressPage(TArray<TScriptInterface<class IChallengeProgress>>* OutChallenges);
	TScriptInterface<class IChallengeDefinition> GetChallengeDefinition(struct FExperienceStateID& ID);
	void BindDelegate_OnWatchedChallengesChanged(FDelegateProperty_& Delegate);
	void BindDelegate_OnChallengesToDisplayInPageChanged(FDelegateProperty_& Delegate);
	void BindDelegate_OnChallengeRewardsGranted(FDelegateProperty_& Delegate);
	void BindDelegate_OnChallengeCompleted(FDelegateProperty_& Delegate);
	bool AreRewardsGranted(struct FExperienceStateID& ChallengeID);
};

}


