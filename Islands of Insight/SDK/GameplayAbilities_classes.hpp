#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x38 - 0x30)
// Class GameplayAbilities.AbilityAsync
class UAbilityAsync : public UBlueprintAsyncActionBase
{
public:
	uint8                                        Pad_13D[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityAsync* GetDefaultObj();

	void EndAction();
};

// 0xC0 (0xF8 - 0x38)
// Class GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied
class UAbilityAsync_WaitGameplayEffectApplied : public UAbilityAsync
{
public:
	FMulticastInlineDelegateProperty_            OnApplied;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_155[0xB0];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityAsync_WaitGameplayEffectApplied* GetDefaultObj();

	class UAbilityAsync_WaitGameplayEffectApplied* WaitGameplayEffectAppliedToActor(class AActor* TargetActor, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, bool ListenForPeriodicEffect);
	void OnAppliedDelegate__DelegateSignature(class AActor* Source, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle);
};

// 0x28 (0x60 - 0x38)
// Class GameplayAbilities.AbilityAsync_WaitGameplayEvent
class UAbilityAsync_WaitGameplayEvent : public UAbilityAsync
{
public:
	FMulticastInlineDelegateProperty_            EventReceived;                                     // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_16F[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityAsync_WaitGameplayEvent* GetDefaultObj();

	class UAbilityAsync_WaitGameplayEvent* WaitGameplayEventToActor(class AActor* TargetActor, const struct FGameplayTag& EventTag, bool OnlyTriggerOnce, bool OnlyMatchExact);
	void EventReceivedDelegate__DelegateSignature(const struct FGameplayEventData& Payload);
};

// 0x18 (0x50 - 0x38)
// Class GameplayAbilities.AbilityAsync_WaitGameplayTag
class UAbilityAsync_WaitGameplayTag : public UAbilityAsync
{
public:
	uint8                                        Pad_179[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityAsync_WaitGameplayTag* GetDefaultObj();

};

// 0x10 (0x60 - 0x50)
// Class GameplayAbilities.AbilityAsync_WaitGameplayTagAdded
class UAbilityAsync_WaitGameplayTagAdded : public UAbilityAsync_WaitGameplayTag
{
public:
	FMulticastInlineDelegateProperty_            Added;                                             // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAbilityAsync_WaitGameplayTagAdded* GetDefaultObj();

	class UAbilityAsync_WaitGameplayTagAdded* WaitGameplayTagAddToActor(class AActor* TargetActor, const struct FGameplayTag& Tag, bool OnlyTriggerOnce);
};

// 0x10 (0x60 - 0x50)
// Class GameplayAbilities.AbilityAsync_WaitGameplayTagRemoved
class UAbilityAsync_WaitGameplayTagRemoved : public UAbilityAsync_WaitGameplayTag
{
public:
	FMulticastInlineDelegateProperty_            Removed;                                           // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAbilityAsync_WaitGameplayTagRemoved* GetDefaultObj();

	class UAbilityAsync_WaitGameplayTagRemoved* WaitGameplayTagRemoveFromActor(class AActor* TargetActor, const struct FGameplayTag& Tag, bool OnlyTriggerOnce);
};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.AbilitySystemBlueprintLibrary
class UAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAbilitySystemBlueprintLibrary* GetDefaultObj();

	bool TargetDataHasOrigin(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
	bool TargetDataHasHitResult(struct FGameplayAbilityTargetDataHandle& HitResult, int32 Index);
	bool TargetDataHasEndPoint(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
	bool TargetDataHasActor(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
	struct FGameplayEffectSpecHandle SetStackCountToMax(const struct FGameplayEffectSpecHandle& SpecHandle);
	struct FGameplayEffectSpecHandle SetStackCount(const struct FGameplayEffectSpecHandle& SpecHandle, int32 StackCount);
	struct FGameplayEffectSpecHandle SetDuration(const struct FGameplayEffectSpecHandle& SpecHandle, float Duration);
	void SendGameplayEventToActor(class AActor* Actor, const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload);
	bool NotEqual_GameplayAttributeGameplayAttribute(const struct FGameplayAttribute& AttributeA, const struct FGameplayAttribute& AttributeB);
	struct FGameplayEffectSpecHandle MakeSpecHandle(class UGameplayEffect* InGameplayEffect, class AActor* InInstigator, class AActor* InEffectCauser, float InLevel);
	struct FGameplayCueParameters MakeGameplayCueParameters(float NormalizedMagnitude, float RawMagnitude, const struct FGameplayEffectContextHandle& EffectContext, const struct FGameplayTag& MatchedTagName, const struct FGameplayTag& OriginalTag, const struct FGameplayTagContainer& AggregatedSourceTags, const struct FGameplayTagContainer& AggregatedTargetTags, const struct FVector& Location, const struct FVector& Normal, class AActor* Instigator, class AActor* EffectCauser, class UObject* SourceObject, class UPhysicalMaterial* PhysicalMaterial, int32 GameplayEffectLevel, int32 AbilityLevel, class USceneComponent* TargetAttachComponent, bool bReplicateLocationWhenUsingMinimalRepProxy);
	struct FGameplayTargetDataFilterHandle MakeFilterHandle(const struct FGameplayTargetDataFilter& Filter, class AActor* FilterActor);
	bool IsValid(const struct FGameplayAttribute& Attribute);
	bool IsInstigatorLocallyControlledPlayer(const struct FGameplayCueParameters& Parameters);
	bool IsInstigatorLocallyControlled(const struct FGameplayCueParameters& Parameters);
	bool HasHitResult(const struct FGameplayCueParameters& Parameters);
	struct FTransform GetTargetDataOrigin(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
	struct FTransform GetTargetDataEndPointTransform(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
	struct FVector GetTargetDataEndPoint(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
	struct FVector GetOrigin(const struct FGameplayCueParameters& Parameters);
	float GetModifiedAttributeMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayAttribute& Attribute);
	struct FTransform GetInstigatorTransform(const struct FGameplayCueParameters& Parameters);
	class AActor* GetInstigatorActor(const struct FGameplayCueParameters& Parameters);
	struct FHitResult GetHitResultFromTargetData(struct FGameplayAbilityTargetDataHandle& HitResult, int32 Index);
	struct FHitResult GetHitResult(const struct FGameplayCueParameters& Parameters);
	bool GetGameplayCueEndLocationAndNormal(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Location, struct FVector* Normal);
	bool GetGameplayCueDirection(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Direction);
	float GetFloatAttributeFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	float GetFloatAttributeBaseFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	float GetFloatAttributeBase(class AActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	float GetFloatAttribute(class AActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	struct FGameplayEffectContextHandle GetEffectContext(const struct FGameplayEffectSpecHandle& SpecHandle);
	int32 GetDataCountFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData);
	TArray<struct FGameplayEffectSpecHandle> GetAllLinkedGameplayEffectSpecHandles(const struct FGameplayEffectSpecHandle& SpecHandle);
	TArray<class AActor*> GetAllActorsFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData);
	TArray<class AActor*> GetActorsFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
	int32 GetActorCount(const struct FGameplayCueParameters& Parameters);
	class AActor* GetActorByIndex(const struct FGameplayCueParameters& Parameters, int32 Index);
	float GetActiveGameplayEffectTotalDuration(const struct FActiveGameplayEffectHandle& ActiveHandle);
	float GetActiveGameplayEffectStartTime(const struct FActiveGameplayEffectHandle& ActiveHandle);
	int32 GetActiveGameplayEffectStackLimitCount(const struct FActiveGameplayEffectHandle& ActiveHandle);
	int32 GetActiveGameplayEffectStackCount(const struct FActiveGameplayEffectHandle& ActiveHandle);
	float GetActiveGameplayEffectRemainingDuration(class UObject* WorldContextObject, const struct FActiveGameplayEffectHandle& ActiveHandle);
	float GetActiveGameplayEffectExpectedEndTime(const struct FActiveGameplayEffectHandle& ActiveHandle);
	class FString GetActiveGameplayEffectDebugString(const struct FActiveGameplayEffectHandle& ActiveHandle);
	class UAbilitySystemComponent* GetAbilitySystemComponent(class AActor* Actor);
	void ForwardGameplayCueToTarget(TScriptInterface<class IGameplayCueInterface> TargetCueInterface, enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	struct FGameplayAbilityTargetDataHandle FilterTargetData(struct FGameplayAbilityTargetDataHandle& TargetDataHandle, const struct FGameplayTargetDataFilterHandle& ActorFilterClass);
	float EvaluateAttributeValueWithTagsAndBase(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& TargetTags, float BaseValue, bool* bSuccess);
	float EvaluateAttributeValueWithTags(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& TargetTags, bool* bSuccess);
	bool EqualEqual_GameplayAttributeGameplayAttribute(const struct FGameplayAttribute& AttributeA, const struct FGameplayAttribute& AttributeB);
	void EffectContextSetOrigin(const struct FGameplayEffectContextHandle& EffectContext, const struct FVector& Origin);
	bool EffectContextIsValid(const struct FGameplayEffectContextHandle& EffectContext);
	bool EffectContextIsInstigatorLocallyControlled(const struct FGameplayEffectContextHandle& EffectContext);
	bool EffectContextHasHitResult(const struct FGameplayEffectContextHandle& EffectContext);
	class UObject* EffectContextGetSourceObject(const struct FGameplayEffectContextHandle& EffectContext);
	class AActor* EffectContextGetOriginalInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext);
	struct FVector EffectContextGetOrigin(const struct FGameplayEffectContextHandle& EffectContext);
	class AActor* EffectContextGetInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext);
	struct FHitResult EffectContextGetHitResult(const struct FGameplayEffectContextHandle& EffectContext);
	class AActor* EffectContextGetEffectCauser(const struct FGameplayEffectContextHandle& EffectContext);
	void EffectContextAddHitResult(const struct FGameplayEffectContextHandle& EffectContext, const struct FHitResult& HitResult, bool bReset);
	bool DoesTargetDataContainActor(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index, class AActor* Actor);
	bool DoesGameplayCueMeetTagRequirements(const struct FGameplayCueParameters& Parameters, struct FGameplayTagRequirements& SourceTagReqs, struct FGameplayTagRequirements& TargetTagReqs);
	struct FGameplayEffectSpecHandle CloneSpecHandle(class AActor* InNewInstigator, class AActor* InEffectCauser, const struct FGameplayEffectSpecHandle& GameplayEffectSpecHandle_Clone);
	void BreakGameplayCueParameters(struct FGameplayCueParameters& Parameters, float* NormalizedMagnitude, float* RawMagnitude, struct FGameplayEffectContextHandle* EffectContext, struct FGameplayTag* MatchedTagName, struct FGameplayTag* OriginalTag, struct FGameplayTagContainer* AggregatedSourceTags, struct FGameplayTagContainer* AggregatedTargetTags, struct FVector* Location, struct FVector* Normal, class AActor** Instigator, class AActor** EffectCauser, class UObject** SourceObject, class UPhysicalMaterial** PhysicalMaterial, int32* GameplayEffectLevel, int32* AbilityLevel, class USceneComponent** TargetAttachComponent, bool* bReplicateLocationWhenUsingMinimalRepProxy);
	struct FGameplayEffectSpecHandle AssignTagSetByCallerMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& DataTag, float Magnitude);
	struct FGameplayEffectSpecHandle AssignSetByCallerMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, class FName DataName, float Magnitude);
	struct FGameplayAbilityTargetDataHandle AppendTargetDataHandle(const struct FGameplayAbilityTargetDataHandle& TargetHandle, struct FGameplayAbilityTargetDataHandle& HandleToAdd);
	struct FGameplayEffectSpecHandle AddLinkedGameplayEffectSpec(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayEffectSpecHandle& LinkedGameplayEffectSpec);
	struct FGameplayEffectSpecHandle AddLinkedGameplayEffect(const struct FGameplayEffectSpecHandle& SpecHandle, TSubclassOf<class UGameplayEffect> LinkedGameplayEffect);
	struct FGameplayEffectSpecHandle AddGrantedTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags);
	struct FGameplayEffectSpecHandle AddGrantedTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag);
	struct FGameplayEffectSpecHandle AddAssetTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags);
	struct FGameplayEffectSpecHandle AddAssetTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag);
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromLocations(struct FGameplayAbilityTargetingLocationInfo& SourceLocation, struct FGameplayAbilityTargetingLocationInfo& TargetLocation);
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromHitResult(struct FHitResult& HitResult);
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActorArray(TArray<class AActor*>& ActorArray, bool OneTargetPerHandle);
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActor(class AActor* Actor);
};

// 0x11E8 (0x1308 - 0x120)
// Class GameplayAbilities.AbilitySystemComponent
class UAbilitySystemComponent : public UGameplayTasksComponent
{
public:
	uint8                                        Pad_D2A[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAttributeDefaults>            DefaultStartingData;                               // 0x130(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAttributeSet*>                 SpawnedAttributes;                                 // 0x140(0x10)(ExportObject, Net, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class FName                                  AffectedAnimInstanceTag;                           // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D31[0x198];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OutgoingDuration;                                  // 0x2F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IncomingDuration;                                  // 0x2F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D35[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        ClientDebugStrings;                                // 0x318(0x10)(Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPublic)
	TArray<class FString>                        ServerDebugStrings;                                // 0x328(0x10)(Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPublic)
	uint8                                        Pad_D3A[0x58];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         UserAbilityActivationInhibited;                    // 0x390(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReplicationProxyEnabled;                           // 0x391(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuppressGrantAbility;                             // 0x392(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuppressGameplayCues;                             // 0x393(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D42[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AGameplayAbilityTargetActor*>   SpawnedTargetActors;                               // 0x398(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_D45[0x28];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                OwnerActor;                                        // 0x3D0(0x8)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                AvatarActor;                                       // 0x3D8(0x8)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D4C[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilitySpecContainer         ActivatableAbilities;                              // 0x3F0(0x120)(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_D4D[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UGameplayAbility*>              AllReplicatedInstancedAbilities;                   // 0x540(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_D51[0x200];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityRepAnimMontage        RepAnimMontageInfo;                                // 0x750(0x30)(Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bCachedIsNetSimulated;                             // 0x780(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPendingMontageRep;                                // 0x781(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D56[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityLocalAnimMontage      LocalAnimMontageInfo;                              // 0x788(0x28)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_D59[0xA0];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActiveGameplayEffectsContainer       ActiveGameplayEffects;                             // 0x850(0x478)(Net, Protected, NativeAccessSpecifierProtected)
	struct FActiveGameplayCueContainer           ActiveGameplayCues;                                // 0xCC8(0x128)(Net, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FActiveGameplayCueContainer           MinimalReplicationGameplayCues;                    // 0xDF0(0x128)(Net, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_D5D[0x128];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                BlockedAbilityBindings;                            // 0x1040(0x10)(Net, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_D61[0x128];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMinimalReplicationTagCountMap        MinimalReplicationTags;                            // 0x1178(0x60)(Net, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_D64[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FReplicatedPredictionKeyMap           ReplicatedPredictionKeyMap;                        // 0x11F0(0x118)(Net, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAbilitySystemComponent* GetDefaultObj();

	bool TryActivateAbilityByClass(TSubclassOf<class UGameplayAbility> InAbilityToActivate, bool bAllowRemoteActivation);
	bool TryActivateAbilitiesByTag(struct FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation);
	void TargetConfirm();
	void TargetCancel();
	void SetUserAbilityActivationInhibited(bool NewInhibit);
	void SetActiveGameplayEffectLevelUsingQuery(const struct FGameplayEffectQuery& Query, int32 NewLevel);
	void SetActiveGameplayEffectLevel(const struct FActiveGameplayEffectHandle& ActiveHandle, int32 NewLevel);
	void ServerTryActivateAbilityWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData);
	void ServerTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey);
	void ServerSetReplicatedTargetDataCancelled(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey);
	void ServerSetReplicatedTargetData(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, struct FGameplayAbilityTargetDataHandle& ReplicatedTargetDataHandle, const struct FGameplayTag& ApplicationTag, const struct FPredictionKey& CurrentPredictionKey);
	void ServerSetReplicatedEventWithPayload(enum class EAbilityGenericReplicatedEvent EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey, const struct FVector_NetQuantize100& VectorPayload);
	void ServerSetReplicatedEvent(enum class EAbilityGenericReplicatedEvent EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey);
	void ServerSetInputReleased(const struct FGameplayAbilitySpecHandle& AbilityHandle);
	void ServerSetInputPressed(const struct FGameplayAbilitySpecHandle& AbilityHandle);
	void ServerPrintDebug_RequestWithStrings(TArray<class FString>& Strings);
	void ServerPrintDebug_Request();
	void ServerEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo, const struct FPredictionKey& PredictionKey);
	void ServerCurrentMontageSetPlayRate(class UAnimMontage* ClientAnimMontage, float InPlayRate);
	void ServerCurrentMontageSetNextSectionName(class UAnimMontage* ClientAnimMontage, float ClientPosition, class FName SectionName, class FName NextSectionName);
	void ServerCurrentMontageJumpToSectionName(class UAnimMontage* ClientAnimMontage, class FName SectionName);
	void ServerCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo);
	void ServerAbilityRPCBatch(const struct FServerAbilityRPCBatch& BatchInfo);
	void RemoveActiveGameplayEffectBySourceEffect(TSubclassOf<class UGameplayEffect> GameplayEffect, class UAbilitySystemComponent* InstigatorAbilitySystemComponent, int32 StacksToRemove);
	bool RemoveActiveGameplayEffect(const struct FActiveGameplayEffectHandle& Handle, int32 StacksToRemove);
	int32 RemoveActiveEffectsWithTags(const struct FGameplayTagContainer& Tags);
	int32 RemoveActiveEffectsWithSourceTags(const struct FGameplayTagContainer& Tags);
	int32 RemoveActiveEffectsWithGrantedTags(const struct FGameplayTagContainer& Tags);
	int32 RemoveActiveEffectsWithAppliedTags(const struct FGameplayTagContainer& Tags);
	void OnRep_ServerDebugString();
	void OnRep_ReplicatedAnimMontage();
	void OnRep_OwningActor();
	void OnRep_ClientDebugString();
	void OnRep_ActivateAbilities();
	void NetMulticast_InvokeGameplayCuesExecuted_WithParams(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);
	void NetMulticast_InvokeGameplayCuesExecuted(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext);
	void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);
	void NetMulticast_InvokeGameplayCueExecuted_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);
	void NetMulticast_InvokeGameplayCueExecuted_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey);
	void NetMulticast_InvokeGameplayCueExecuted(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext);
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey);
	void NetMulticast_InvokeGameplayCueAdded_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& Parameters);
	void NetMulticast_InvokeGameplayCueAdded(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext);
	struct FGameplayEffectSpecHandle MakeOutgoingSpec(TSubclassOf<class UGameplayEffect> GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& Context);
	struct FGameplayEffectContextHandle MakeEffectContext();
	void K2_InitStats(TSubclassOf<class UAttributeSet> Attributes, class UDataTable* DataTable);
	bool IsGameplayCueActive(const struct FGameplayTag& GameplayCueTag);
	bool GetUserAbilityActivationInhibited();
	float GetGameplayEffectMagnitude(const struct FActiveGameplayEffectHandle& Handle, const struct FGameplayAttribute& Attribute);
	int32 GetGameplayEffectCount(TSubclassOf<class UGameplayEffect> SourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck);
	TArray<struct FActiveGameplayEffectHandle> GetActiveEffectsWithAllTags(const struct FGameplayTagContainer& Tags);
	TArray<struct FActiveGameplayEffectHandle> GetActiveEffects(struct FGameplayEffectQuery& Query);
	void ClientTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate);
	void ClientSetReplicatedEvent(enum class EAbilityGenericReplicatedEvent EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey);
	void ClientPrintDebug_Response(TArray<class FString>& Strings, int32 GameFlags);
	void ClientEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo);
	void ClientCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo);
	void ClientActivateAbilitySucceedWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData);
	void ClientActivateAbilitySucceed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey);
	void ClientActivateAbilityFailed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, int16 PredictionKey);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(TSubclassOf<class UGameplayEffect> GameplayEffectClass, class UAbilitySystemComponent* Target, float Level, const struct FGameplayEffectContextHandle& Context);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(TSubclassOf<class UGameplayEffect> GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& EffectContext);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(struct FGameplayEffectSpecHandle& SpecHandle, class UAbilitySystemComponent* Target);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(struct FGameplayEffectSpecHandle& SpecHandle);
	void AbilityConfirmOrCancel__DelegateSignature();
	void AbilityAbilityKey__DelegateSignature(int32 InputID);
};

// 0x0 (0x310 - 0x310)
// Class GameplayAbilities.AbilitySystemDebugHUD
class AAbilitySystemDebugHUD : public AHUD
{
public:

	static class UClass* StaticClass();
	static class AAbilitySystemDebugHUD* GetDefaultObj();

};

// 0x238 (0x260 - 0x28)
// Class GameplayAbilities.AbilitySystemGlobals
class UAbilitySystemGlobals : public UObject
{
public:
	struct FSoftClassPath                        AbilitySystemGlobalsClassName;                     // 0x28(0x18)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E09[0x28];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          ActivateFailIsDeadTag;                             // 0x68(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActivateFailIsDeadName;                            // 0x70(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ActivateFailCooldownTag;                           // 0x78(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActivateFailCooldownName;                          // 0x80(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ActivateFailCostTag;                               // 0x88(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActivateFailCostName;                              // 0x90(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ActivateFailTagsBlockedTag;                        // 0x98(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActivateFailTagsBlockedName;                       // 0xA0(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ActivateFailTagsMissingTag;                        // 0xA8(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActivateFailTagsMissingName;                       // 0xB0(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ActivateFailNetworkingTag;                         // 0xB8(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActivateFailNetworkingName;                        // 0xC0(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinimalReplicationTagCountBits;                    // 0xC8(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E21[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNetSerializeScriptStructCache        TargetDataStructCache;                             // 0xD0(0x10)(NativeAccessSpecifierPublic)
	bool                                         bAllowGameplayModEvaluationChannels;               // 0xE0(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EGameplayModEvaluationChannel     DefaultGameplayModEvaluationChannel;               // 0xE1(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E29[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  GameplayModEvaluationChannelAliases[0xA];          // 0xE4(0x50)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E2B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftObjectPath                       GlobalCurveTableName;                              // 0x138(0x18)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveTable*                           GlobalCurveTable;                                  // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSoftObjectPath                       GlobalAttributeMetaDataTableName;                  // 0x158(0x18)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                            GlobalAttributeMetaDataTable;                      // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSoftObjectPath                       GlobalAttributeSetDefaultsTableName;               // 0x178(0x18)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FSoftObjectPath>               GlobalAttributeSetDefaultsTableNames;              // 0x190(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	TArray<class UCurveTable*>                   GlobalAttributeDefaultsTables;                     // 0x1A0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FSoftObjectPath                       GlobalGameplayCueManagerClass;                     // 0x1B0(0x18)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSoftObjectPath                       GlobalGameplayCueManagerName;                      // 0x1C8(0x18)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FString>                        GameplayCueNotifyPaths;                            // 0x1E0(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	struct FSoftObjectPath                       GameplayTagResponseTableName;                      // 0x1F0(0x18)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGameplayTagReponseTable*              GameplayTagResponseTable;                          // 0x208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         PredictTargetGameplayEffects;                      // 0x210(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E54[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameplayCueManager*                   GlobalGameplayCueManager;                          // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E56[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilitySystemGlobals* GetDefaultObj();

	void ToggleIgnoreAbilitySystemCosts();
	void ToggleIgnoreAbilitySystemCooldowns();
	void ServerEndPlayerAbility(const class FString& AbilityNameMatch);
	void ServerCancelPlayerAbility(const class FString& AbilityNameMatch);
	void ServerActivatePlayerAbility(const class FString& AbilityNameMatch);
	void ListPlayerAbilities();
};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.AbilitySystemInterface
class IAbilitySystemInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAbilitySystemInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.AbilitySystemReplicationProxyInterface
class IAbilitySystemReplicationProxyInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAbilitySystemReplicationProxyInterface* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class GameplayAbilities.AttributeSet
class UAttributeSet : public UObject
{
public:
	uint8                                        Pad_E86[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAttributeSet* GetDefaultObj();

};

// 0x40 (0x70 - 0x30)
// Class GameplayAbilities.AbilitySystemTestAttributeSet
class UAbilitySystemTestAttributeSet : public UAttributeSet
{
public:
	float                                        MaxHealth;                                         // 0x30(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Health;                                            // 0x34(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Mana;                                              // 0x38(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxMana;                                           // 0x3C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpellDamage;                                       // 0x44(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PhysicalDamage;                                    // 0x48(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CritChance;                                        // 0x4C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CritMultiplier;                                    // 0x50(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArmorDamageReduction;                              // 0x54(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DodgeChance;                                       // 0x58(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LifeSteal;                                         // 0x5C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Strength;                                          // 0x60(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StackingAttribute1;                                // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StackingAttribute2;                                // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NoStackAttribute;                                  // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAbilitySystemTestAttributeSet* GetDefaultObj();

};

// 0x20 (0x2C8 - 0x2A8)
// Class GameplayAbilities.AbilitySystemTestPawn
class AAbilitySystemTestPawn : public ADefaultPawn
{
public:
	uint8                                        Pad_EB7[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               AbilitySystemComponent;                            // 0x2C0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AAbilitySystemTestPawn* GetDefaultObj();

};

// 0x18 (0x80 - 0x68)
// Class GameplayAbilities.AbilityTask
class UAbilityTask : public UGameplayTask
{
public:
	class UGameplayAbility*                      Ability;                                           // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*               AbilitySystemComponent;                            // 0x70(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EC8[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask* GetDefaultObj();

};

// 0x38 (0xB8 - 0x80)
// Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base
class UAbilityTask_ApplyRootMotion_Base : public UAbilityTask
{
public:
	class FName                                  ForceName;                                         // 0x80(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ERootMotionFinishVelocityMode     FinishVelocityMode;                                // 0x88(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_ED3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               FinishSetVelocity;                                 // 0x8C(0xC)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FinishClampVelocity;                               // 0x98(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_EE2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCharacterMovementComponent*           MovementComponent;                                 // 0xA0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_EE4[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_ApplyRootMotion_Base* GetDefaultObj();

};

// 0x38 (0xF0 - 0xB8)
// Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
class UAbilityTask_ApplyRootMotionConstantForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	FMulticastInlineDelegateProperty_            OnFinish;                                          // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FVector                               WorldDirection;                                    // 0xC8(0xC)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Strength;                                          // 0xD4(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Duration;                                          // 0xD8(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsAdditive;                                       // 0xDC(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F57[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           StrengthOverTime;                                  // 0xE0(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableGravity;                                    // 0xE8(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F5A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_ApplyRootMotionConstantForce* GetDefaultObj();

	class UAbilityTask_ApplyRootMotionConstantForce* ApplyRootMotionConstantForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct FVector& WorldDirection, float Strength, float Duration, bool bIsAdditive, class UCurveFloat* StrengthOverTime, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, bool bEnableGravity);
};

// 0x58 (0x110 - 0xB8)
// Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
class UAbilityTask_ApplyRootMotionJumpForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	FMulticastInlineDelegateProperty_            OnFinish;                                          // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLanded;                                          // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0xD8(0xC)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        Distance;                                          // 0xE4(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Height;                                            // 0xE8(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Duration;                                          // 0xEC(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinimumLandedTriggerTime;                          // 0xF0(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bFinishOnLanded;                                   // 0xF4(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FD7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveVector*                          PathOffsetCurve;                                   // 0xF8(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           TimeMappingCurve;                                  // 0x100(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FD9[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_ApplyRootMotionJumpForce* GetDefaultObj();

	void OnLandedCallback(struct FHitResult& Hit);
	void Finish();
	class UAbilityTask_ApplyRootMotionJumpForce* ApplyRootMotionJumpForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct FRotator& Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve);
};

// 0x78 (0x130 - 0xB8)
// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
class UAbilityTask_ApplyRootMotionMoveToActorForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	FMulticastInlineDelegateProperty_            OnFinished;                                        // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               StartLocation;                                     // 0xD0(0xC)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               TargetLocation;                                    // 0xDC(0xC)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                TargetActor;                                       // 0xE8(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               TargetLocationOffset;                              // 0xF0(0xC)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment;                                   // 0xFC(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10D9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Duration;                                          // 0x100(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDisableDestinationReachedInterrupt;               // 0x104(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSetNewMovementMode;                               // 0x105(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EMovementMode                     NewMovementMode;                                   // 0x106(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRestrictSpeedToExpected;                          // 0x107(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveVector*                          PathOffsetCurve;                                   // 0x108(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           TimeMappingCurve;                                  // 0x110(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           TargetLerpSpeedHorizontalCurve;                    // 0x118(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           TargetLerpSpeedVerticalCurve;                      // 0x120(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10E8[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_ApplyRootMotionMoveToActorForce* GetDefaultObj();

	void OnTargetActorSwapped(class AActor* OriginalTarget, class AActor* NewTarget);
	void OnRep_TargetLocation();
	class UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToTargetDataActorForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct FGameplayAbilityTargetDataHandle& TargetDataHandle, int32 TargetDataIndex, int32 TargetActorIndex, const struct FVector& TargetLocationOffset, enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt);
	class UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToActorForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, class AActor* TargetActor, const struct FVector& TargetLocationOffset, enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt);
};

// 0x50 (0x108 - 0xB8)
// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
class UAbilityTask_ApplyRootMotionMoveToForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	FMulticastInlineDelegateProperty_            OnTimedOut;                                        // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTimedOutAndDestinationReached;                   // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FVector                               StartLocation;                                     // 0xD8(0xC)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               TargetLocation;                                    // 0xE4(0xC)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Duration;                                          // 0xF0(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSetNewMovementMode;                               // 0xF4(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EMovementMode                     NewMovementMode;                                   // 0xF5(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRestrictSpeedToExpected;                          // 0xF6(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1165[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveVector*                          PathOffsetCurve;                                   // 0xF8(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1168[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_ApplyRootMotionMoveToForce* GetDefaultObj();

	class UAbilityTask_ApplyRootMotionMoveToForce* ApplyRootMotionMoveToForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct FVector& TargetLocation, float Duration, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish);
};

// 0x58 (0x110 - 0xB8)
// Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
class UAbilityTask_ApplyRootMotionRadialForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	FMulticastInlineDelegateProperty_            OnFinish;                                          // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0xC8(0xC)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11EC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                LocationActor;                                     // 0xD8(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Strength;                                          // 0xE0(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Duration;                                          // 0xE4(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Radius;                                            // 0xE8(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsPush;                                           // 0xEC(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsAdditive;                                       // 0xED(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bNoZForce;                                         // 0xEE(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11F6[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           StrengthDistanceFalloff;                           // 0xF0(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           StrengthOverTime;                                  // 0xF8(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseFixedWorldDirection;                           // 0x100(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11F9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              FixedWorldDirection;                               // 0x104(0xC)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAbilityTask_ApplyRootMotionRadialForce* GetDefaultObj();

	class UAbilityTask_ApplyRootMotionRadialForce* ApplyRootMotionRadialForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct FVector& Location, class AActor* LocationActor, float Strength, float Duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, class UCurveFloat* StrengthDistanceFalloff, class UCurveFloat* StrengthOverTime, bool bUseFixedWorldDirection, const struct FRotator& FixedWorldDirection, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish);
};

// 0x48 (0xC8 - 0x80)
// Class GameplayAbilities.AbilityTask_MoveToLocation
class UAbilityTask_MoveToLocation : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnTargetLocationReached;                           // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1240[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               StartLocation;                                     // 0x94(0xC)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               TargetLocation;                                    // 0xA0(0xC)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DurationOfMovement;                                // 0xAC(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1244[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           LerpCurve;                                         // 0xB8(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveVector*                          LerpCurveVector;                                   // 0xC0(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAbilityTask_MoveToLocation* GetDefaultObj();

	class UAbilityTask_MoveToLocation* MoveToLocation(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct FVector& Location, float Duration, class UCurveFloat* OptionalInterpolationCurve, class UCurveVector* OptionalVectorInterpolationCurve);
};

// 0x18 (0x98 - 0x80)
// Class GameplayAbilities.AbilityTask_NetworkSyncPoint
class UAbilityTask_NetworkSyncPoint : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnSync;                                            // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_125E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_NetworkSyncPoint* GetDefaultObj();

	class UAbilityTask_NetworkSyncPoint* WaitNetSync(class UGameplayAbility* OwningAbility, enum class EAbilityTaskNetSyncType SyncType);
	void OnSignalCallback();
};

// 0x88 (0x108 - 0x80)
// Class GameplayAbilities.AbilityTask_PlayMontageAndWait
class UAbilityTask_PlayMontageAndWait : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnCompleted;                                       // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBlendOut;                                        // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnInterrupted;                                     // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCancelled;                                       // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_12BA[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          MontageToPlay;                                     // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        Rate;                                              // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  StartSection;                                      // 0xF4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AnimRootMotionTranslationScale;                    // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        StartTimeSeconds;                                  // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bStopWhenAbilityEnds;                              // 0x104(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_12C0[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_PlayMontageAndWait* GetDefaultObj();

	void OnMontageInterrupted();
	void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
	class UAbilityTask_PlayMontageAndWait* CreatePlayMontageAndWaitProxy(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, class UAnimMontage* MontageToPlay, float Rate, class FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float StartTimeSeconds);
};

// 0x38 (0xB8 - 0x80)
// Class GameplayAbilities.AbilityTask_Repeat
class UAbilityTask_Repeat : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnPerformAction;                                   // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFinished;                                        // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_12DC[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_Repeat* GetDefaultObj();

	class UAbilityTask_Repeat* RepeatAction(class UGameplayAbility* OwningAbility, float TimeBetweenActions, int32 TotalActionCount);
};

// 0x48 (0xC8 - 0x80)
// Class GameplayAbilities.AbilityTask_SpawnActor
class UAbilityTask_SpawnActor : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            Success;                                           // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            DidNotSpawn;                                       // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1306[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_SpawnActor* GetDefaultObj();

	class UAbilityTask_SpawnActor* SpawnActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, TSubclassOf<class AActor> Class);
	void FinishSpawningActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, class AActor* SpawnedActor);
	bool BeginSpawningActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, TSubclassOf<class AActor> Class, class AActor** SpawnedActor);
};

// 0x38 (0xB8 - 0x80)
// Class GameplayAbilities.AbilityTask_StartAbilityState
class UAbilityTask_StartAbilityState : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnStateEnded;                                      // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStateInterrupted;                                // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_132F[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_StartAbilityState* GetDefaultObj();

	class UAbilityTask_StartAbilityState* StartAbilityState(class UGameplayAbility* OwningAbility, class FName StateName, bool bEndCurrentState);
};

// 0x28 (0xA8 - 0x80)
// Class GameplayAbilities.AbilityTask_VisualizeTargeting
class UAbilityTask_VisualizeTargeting : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            TimeElapsed;                                       // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B8[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_VisualizeTargeting* GetDefaultObj();

	class UAbilityTask_VisualizeTargeting* VisualizeTargetingUsingActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* TargetActor, class FName TaskInstanceName, float Duration);
	class UAbilityTask_VisualizeTargeting* VisualizeTargeting(class UGameplayAbility* OwningAbility, TSubclassOf<class AGameplayAbilityTargetActor> Class, class FName TaskInstanceName, float Duration);
	void FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor);
	bool BeginSpawningActor(class UGameplayAbility* OwningAbility, TSubclassOf<class AGameplayAbilityTargetActor> Class, class AGameplayAbilityTargetActor** SpawnedActor);
};

// 0xB8 (0x138 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitAbilityActivate
class UAbilityTask_WaitAbilityActivate : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnActivate;                                        // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1427[0xA8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_WaitAbilityActivate* GetDefaultObj();

	class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivateWithTagRequirements(class UGameplayAbility* OwningAbility, const struct FGameplayTagRequirements& TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce);
	class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTagQuery& Query, bool IncludeTriggeredAbilities, bool TriggerOnce);
	class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate(class UGameplayAbility* OwningAbility, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce);
	void OnAbilityActivate(class UGameplayAbility* ActivatedAbility);
};

// 0x78 (0xF8 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitAbilityCommit
class UAbilityTask_WaitAbilityCommit : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnCommit;                                          // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1465[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_WaitAbilityCommit* GetDefaultObj();

	class UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTagQuery& Query, bool TriggerOnce);
	class UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit(class UGameplayAbility* OwningAbility, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTage, bool TriggerOnce);
	void OnAbilityCommit(class UGameplayAbility* ActivatedAbility);
};

// 0x78 (0xF8 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitAttributeChange
class UAbilityTask_WaitAttributeChange : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnChange;                                          // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_14BD[0x60];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               ExternalOwner;                                     // 0xF0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAbilityTask_WaitAttributeChange* GetDefaultObj();

	class UAbilityTask_WaitAttributeChange* WaitForAttributeChangeWithComparison(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& InAttribute, const struct FGameplayTag& InWithTag, const struct FGameplayTag& InWithoutTag, enum class EWaitAttributeChangeComparison InComparisonType, float InComparisonValue, bool TriggerOnce, class AActor* OptionalExternalOwner);
	class UAbilityTask_WaitAttributeChange* WaitForAttributeChange(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& Attribute, const struct FGameplayTag& WithSrcTag, const struct FGameplayTag& WithoutSrcTag, bool TriggerOnce, class AActor* OptionalExternalOwner);
};

// 0xC0 (0x140 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
class UAbilityTask_WaitAttributeChangeRatioThreshold : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnChange;                                          // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_14FF[0xA8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               ExternalOwner;                                     // 0x138(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAbilityTask_WaitAttributeChangeRatioThreshold* GetDefaultObj();

	class UAbilityTask_WaitAttributeChangeRatioThreshold* WaitForAttributeChangeRatioThreshold(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& AttributeNumerator, const struct FGameplayAttribute& AttributeDenominator, enum class EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, bool bTriggerOnce, class AActor* OptionalExternalOwner);
};

// 0x70 (0xF0 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
class UAbilityTask_WaitAttributeChangeThreshold : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnChange;                                          // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1529[0x58];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               ExternalOwner;                                     // 0xE8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAbilityTask_WaitAttributeChangeThreshold* GetDefaultObj();

	class UAbilityTask_WaitAttributeChangeThreshold* WaitForAttributeChangeThreshold(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& Attribute, enum class EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, bool bTriggerOnce, class AActor* OptionalExternalOwner);
};

// 0x18 (0x98 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitCancel
class UAbilityTask_WaitCancel : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnCancel;                                          // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1550[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_WaitCancel* GetDefaultObj();

	class UAbilityTask_WaitCancel* WaitCancel(class UGameplayAbility* OwningAbility);
	void OnLocalCancelCallback();
	void OnCancelCallback();
};

// 0x20 (0xA0 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitConfirm
class UAbilityTask_WaitConfirm : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnConfirm;                                         // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1562[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_WaitConfirm* GetDefaultObj();

	class UAbilityTask_WaitConfirm* WaitConfirm(class UGameplayAbility* OwningAbility);
	void OnConfirmCallback(class UGameplayAbility* InAbility);
};

// 0x28 (0xA8 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitConfirmCancel
class UAbilityTask_WaitConfirmCancel : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnConfirm;                                         // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCancel;                                          // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_158B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_WaitConfirmCancel* GetDefaultObj();

	class UAbilityTask_WaitConfirmCancel* WaitConfirmCancel(class UGameplayAbility* OwningAbility);
	void OnLocalConfirmCallback();
	void OnLocalCancelCallback();
	void OnConfirmCallback();
	void OnCancelCallback();
};

// 0x18 (0x98 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitDelay
class UAbilityTask_WaitDelay : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnFinish;                                          // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_159E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_WaitDelay* GetDefaultObj();

	class UAbilityTask_WaitDelay* WaitDelay(class UGameplayAbility* OwningAbility, float Time);
};

// 0x138 (0x1B8 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
class UAbilityTask_WaitGameplayEffectApplied : public UAbilityTask
{
public:
	uint8                                        Pad_15B7[0x128];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               ExternalOwner;                                     // 0x1A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_15B9[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayEffectApplied* GetDefaultObj();

	void OnApplyGameplayEffectCallback(class UAbilitySystemComponent* Target, struct FGameplayEffectSpec& SpecApplied, const struct FActiveGameplayEffectHandle& ActiveHandle);
};

// 0x20 (0x1D8 - 0x1B8)
// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
class UAbilityTask_WaitGameplayEffectApplied_Self : public UAbilityTask_WaitGameplayEffectApplied
{
public:
	FMulticastInlineDelegateProperty_            OnApplied;                                         // 0x1B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1605[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayEffectApplied_Self* GetDefaultObj();

	class UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagQuery& SourceTagQuery, const struct FGameplayTagQuery& TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
	class UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
};

// 0x20 (0x1D8 - 0x1B8)
// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
class UAbilityTask_WaitGameplayEffectApplied_Target : public UAbilityTask_WaitGameplayEffectApplied
{
public:
	FMulticastInlineDelegateProperty_            OnApplied;                                         // 0x1B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1642[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayEffectApplied_Target* GetDefaultObj();

	class UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagQuery& SourceTagQuery, const struct FGameplayTagQuery& TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
	class UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& TargetFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffects);
};

// 0xA8 (0x128 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
class UAbilityTask_WaitGameplayEffectBlockedImmunity : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            bLocked;                                           // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1662[0x88];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               ExternalOwner;                                     // 0x118(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1663[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayEffectBlockedImmunity* GetDefaultObj();

	class UAbilityTask_WaitGameplayEffectBlockedImmunity* WaitGameplayEffectBlockedByImmunity(class UGameplayAbility* OwningAbility, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce);
};

// 0x40 (0xC0 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
class UAbilityTask_WaitGameplayEffectRemoved : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnRemoved;                                         // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            InvalidHandle;                                     // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1683[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayEffectRemoved* GetDefaultObj();

	class UAbilityTask_WaitGameplayEffectRemoved* WaitForGameplayEffectRemoved(class UGameplayAbility* OwningAbility, const struct FActiveGameplayEffectHandle& Handle);
	void OnGameplayEffectRemoved(struct FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo);
};

// 0x38 (0xB8 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
class UAbilityTask_WaitGameplayEffectStackChange : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnChange;                                          // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            InvalidHandle;                                     // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_16C1[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayEffectStackChange* GetDefaultObj();

	class UAbilityTask_WaitGameplayEffectStackChange* WaitForGameplayEffectStackChange(class UGameplayAbility* OwningAbility, const struct FActiveGameplayEffectHandle& Handle);
	void OnGameplayEffectStackChange(const struct FActiveGameplayEffectHandle& Handle, int32 NewCount, int32 OldCount);
};

// 0x30 (0xB0 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitGameplayEvent
class UAbilityTask_WaitGameplayEvent : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            EventReceived;                                     // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_16EB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               OptionalExternalTarget;                            // 0x98(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16EE[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayEvent* GetDefaultObj();

	class UAbilityTask_WaitGameplayEvent* WaitGameplayEvent(class UGameplayAbility* OwningAbility, const struct FGameplayTag& EventTag, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact);
};

// 0x28 (0xA8 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitGameplayTag
class UAbilityTask_WaitGameplayTag : public UAbilityTask
{
public:
	uint8                                        Pad_1702[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               OptionalExternalTarget;                            // 0x90(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1705[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayTag* GetDefaultObj();

	void GameplayTagCallback(const struct FGameplayTag& Tag, int32 NewCount);
};

// 0x10 (0xB8 - 0xA8)
// Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
class UAbilityTask_WaitGameplayTagAdded : public UAbilityTask_WaitGameplayTag
{
public:
	FMulticastInlineDelegateProperty_            Added;                                             // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayTagAdded* GetDefaultObj();

	class UAbilityTask_WaitGameplayTagAdded* WaitGameplayTagAdd(class UGameplayAbility* OwningAbility, const struct FGameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce);
};

// 0x10 (0xB8 - 0xA8)
// Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
class UAbilityTask_WaitGameplayTagRemoved : public UAbilityTask_WaitGameplayTag
{
public:
	FMulticastInlineDelegateProperty_            Removed;                                           // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayTagRemoved* GetDefaultObj();

	class UAbilityTask_WaitGameplayTagRemoved* WaitGameplayTagRemove(class UGameplayAbility* OwningAbility, const struct FGameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce);
};

// 0x20 (0xA0 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitInputPress
class UAbilityTask_WaitInputPress : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnPress;                                           // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_173B[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_WaitInputPress* GetDefaultObj();

	class UAbilityTask_WaitInputPress* WaitInputPress(class UGameplayAbility* OwningAbility, bool bTestAlreadyPressed);
	void OnPressCallback();
};

// 0x20 (0xA0 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitInputRelease
class UAbilityTask_WaitInputRelease : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnRelease;                                         // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1741[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_WaitInputRelease* GetDefaultObj();

	class UAbilityTask_WaitInputRelease* WaitInputRelease(class UGameplayAbility* OwningAbility, bool bTestAlreadyReleased);
	void OnReleaseCallback();
};

// 0x20 (0xA0 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitMovementModeChange
class UAbilityTask_WaitMovementModeChange : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnChange;                                          // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1754[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_WaitMovementModeChange* GetDefaultObj();

	void OnMovementModeChange(class ACharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	class UAbilityTask_WaitMovementModeChange* CreateWaitMovementModeChange(class UGameplayAbility* OwningAbility, enum class EMovementMode NewMode);
};

// 0x10 (0x90 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitOverlap
class UAbilityTask_WaitOverlap : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnOverlap;                                         // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAbilityTask_WaitOverlap* GetDefaultObj();

	class UAbilityTask_WaitOverlap* WaitForOverlap(class UGameplayAbility* OwningAbility);
	void OnHitCallback(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
};

// 0x40 (0xC0 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitTargetData
class UAbilityTask_WaitTargetData : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            ValidData;                                         // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            CANCELLED;                                         // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TSubclassOf<class AGameplayAbilityTargetActor> TargetClass;                                       // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AGameplayAbilityTargetActor*           TargetActor;                                       // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17B2[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_WaitTargetData* GetDefaultObj();

	class UAbilityTask_WaitTargetData* WaitTargetDataUsingActor(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, enum class EGameplayTargetingConfirmation ConfirmationType, class AGameplayAbilityTargetActor* TargetActor);
	class UAbilityTask_WaitTargetData* WaitTargetData(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, enum class EGameplayTargetingConfirmation ConfirmationType, TSubclassOf<class AGameplayAbilityTargetActor> Class);
	void OnTargetDataReplicatedCancelledCallback();
	void OnTargetDataReplicatedCallback(struct FGameplayAbilityTargetDataHandle& Data, const struct FGameplayTag& ActivationTag);
	void OnTargetDataReadyCallback(struct FGameplayAbilityTargetDataHandle& Data);
	void OnTargetDataCancelledCallback(struct FGameplayAbilityTargetDataHandle& Data);
	void FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor);
	bool BeginSpawningActor(class UGameplayAbility* OwningAbility, TSubclassOf<class AGameplayAbilityTargetActor> Class, class AGameplayAbilityTargetActor** SpawnedActor);
};

// 0x28 (0xA8 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitVelocityChange
class UAbilityTask_WaitVelocityChange : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnVelocityChage;                                   // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UMovementComponent*                    CachedMovementComponent;                           // 0x90(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17B8[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_WaitVelocityChange* GetDefaultObj();

	class UAbilityTask_WaitVelocityChange* CreateWaitVelocityChange(class UGameplayAbility* OwningAbility, const struct FVector& Direction, float MinimumMagnitude);
};

// 0x388 (0x3B0 - 0x28)
// Class GameplayAbilities.GameplayAbility
class UGameplayAbility : public UObject
{
public:
	uint8                                        Pad_18A1[0x80];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 AbilityTags;                                       // 0xA8(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bReplicateInputDirectly;                           // 0xC8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RemoteInstanceEnded;                               // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18A4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EGameplayAbilityReplicationPolicy ReplicationPolicy;                                 // 0xCE(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EGameplayAbilityInstancingPolicy  InstancingPolicy;                                  // 0xCF(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bServerRespectsRemoteAbilityCancellation;          // 0xD0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRetriggerInstancedAbility;                        // 0xD1(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_18A6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityActivationInfo        CurrentActivationInfo;                             // 0xD8(0x18)(BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGameplayEventData                    CurrentEventData;                                  // 0xF0(0xB0)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	enum class EGameplayAbilityNetExecutionPolicy NetExecutionPolicy;                                // 0x1A0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EGameplayAbilityNetSecurityPolicy NetSecurityPolicy;                                 // 0x1A1(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_18A8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UGameplayEffect>           CostGameplayEffectClass;                           // 0x1A8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FAbilityTriggerData>           AbilityTriggers;                                   // 0x1B0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UGameplayEffect>           CooldownGameplayEffectClass;                       // 0x1C0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 CancelAbilitiesWithTag;                            // 0x1C8(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 BlockAbilitiesWithTag;                             // 0x1E8(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 ActivationOwnedTags;                               // 0x208(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 ActivationRequiredTags;                            // 0x228(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 ActivationBlockedTags;                             // 0x248(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 SourceRequiredTags;                                // 0x268(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 SourceBlockedTags;                                 // 0x288(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 TargetRequiredTags;                                // 0x2A8(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 TargetBlockedTags;                                 // 0x2C8(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_18B0[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UGameplayTask*>                 ActiveTasks;                                       // 0x308(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_18B1[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          CurrentMontage;                                    // 0x328(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_18B2[0x60];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsActive;                                         // 0x390(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsAbilityEnding;                                  // 0x391(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsCancelable;                                     // 0x392(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsBlockingOtherAbilities;                         // 0x393(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_18B3[0x14];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bMarkPendingKillOnAbilityEnd;                      // 0x3A8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_18B4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameplayAbility* GetDefaultObj();

	void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities);
	void SetCanBeCanceled(bool bCanBeCanceled);
	void SendGameplayEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload);
	void RemoveGrantedByEffect();
	void MontageStop(float OverrideBlendOutTime);
	void MontageSetNextSectionName(class FName FromSectionName, class FName ToSectionName);
	void MontageJumpToSection(class FName SectionName);
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(class FName SocketName);
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor();
	struct FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(TSubclassOf<class UGameplayEffect> GameplayEffectClass, float Level);
	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload);
	void K2_RemoveGameplayCue(const struct FGameplayTag& GameplayCueTag);
	void K2_OnEndAbility(bool bWasCancelled);
	bool K2_HasAuthority();
	void K2_ExecuteGameplayCueWithParams(const struct FGameplayTag& GameplayCueTag, struct FGameplayCueParameters& GameplayCueParameters);
	void K2_ExecuteGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context);
	void K2_EndAbility();
	void K2_CommitExecute();
	bool K2_CommitAbilityCost(bool BroadcastCommitEvent);
	bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown);
	bool K2_CommitAbility();
	bool K2_CheckAbilityCost();
	bool K2_CheckAbilityCooldown();
	void K2_CancelAbility();
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags);
	TArray<struct FActiveGameplayEffectHandle> K2_ApplyGameplayEffectSpecToTarget(const struct FGameplayEffectSpecHandle& EffectSpecHandle, const struct FGameplayAbilityTargetDataHandle& TargetData);
	struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(const struct FGameplayEffectSpecHandle& EffectSpecHandle);
	void K2_AddGameplayCueWithParams(const struct FGameplayTag& GameplayCueTag, struct FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd);
	void K2_AddGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context, bool bRemoveOnAbilityEnd);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void K2_ActivateAbility();
	bool IsLocallyControlled();
	void InvalidateClientPredictionKey();
	class UObject* GetSourceObject_BP(const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayAbilityActorInfo& ActorInfo);
	class USkeletalMeshComponent* GetOwningComponentFromActorInfo();
	class AActor* GetOwningActorFromActorInfo();
	struct FGameplayEffectContextHandle GetGrantedByEffectContext();
	class UObject* GetCurrentSourceObject();
	class UAnimMontage* GetCurrentMontage();
	float GetCooldownTimeRemaining();
	struct FGameplayEffectContextHandle GetContextFromOwner(const struct FGameplayAbilityTargetDataHandle& OptionalTargetData);
	class AActor* GetAvatarActorFromActorInfo();
	struct FGameplayAbilityActorInfo GetActorInfo();
	class UAbilitySystemComponent* GetAbilitySystemComponentFromActorInfo();
	int32 GetAbilityLevel_BP(const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayAbilityActorInfo& ActorInfo);
	int32 GetAbilityLevel();
	void EndTaskByInstanceName(class FName InstanceName);
	void EndAbilityState(class FName OptionalStateNameToEnd);
	void ConfirmTaskByInstanceName(class FName InstanceName, bool bEndTask);
	void CancelTaskByInstanceName(class FName InstanceName);
	void BP_RemoveGameplayEffectFromOwnerWithHandle(const struct FActiveGameplayEffectHandle& Handle, int32 StacksToRemove);
	void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(const struct FGameplayTagContainer& WithGrantedTags, int32 StacksToRemove);
	void BP_RemoveGameplayEffectFromOwnerWithAssetTags(const struct FGameplayTagContainer& WithAssetTags, int32 StacksToRemove);
	TArray<struct FActiveGameplayEffectHandle> BP_ApplyGameplayEffectToTarget(const struct FGameplayAbilityTargetDataHandle& TargetData, TSubclassOf<class UGameplayEffect> GameplayEffectClass, int32 GameplayEffectLevel, int32 Stacks);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(TSubclassOf<class UGameplayEffect> GameplayEffectClass, int32 GameplayEffectLevel, int32 Stacks);
};

// 0x0 (0x3B0 - 0x3B0)
// Class GameplayAbilities.GameplayAbility_CharacterJump
class UGameplayAbility_CharacterJump : public UGameplayAbility
{
public:

	static class UClass* StaticClass();
	static class UGameplayAbility_CharacterJump* GetDefaultObj();

};

// 0x38 (0x3E8 - 0x3B0)
// Class GameplayAbilities.GameplayAbility_Montage
class UGameplayAbility_Montage : public UGameplayAbility
{
public:
	class UAnimMontage*                          MontageToPlay;                                     // 0x3B0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x3B8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SectionName;                                       // 0x3BC(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18D0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class UGameplayEffect>>   GameplayEffectClassesWhileAnimating;               // 0x3C8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UGameplayEffect*>               GameplayEffectsWhileAnimating;                     // 0x3D8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGameplayAbility_Montage* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class GameplayAbilities.GameplayAbilityBlueprint
class UGameplayAbilityBlueprint : public UBlueprint
{
public:

	static class UClass* StaticClass();
	static class UGameplayAbilityBlueprint* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class GameplayAbilities.GameplayAbilitySet
class UGameplayAbilitySet : public UDataAsset
{
public:
	TArray<struct FGameplayAbilityBindInfo>      Abilities;                                         // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGameplayAbilitySet* GetDefaultObj();

};

// 0x118 (0x338 - 0x220)
// Class GameplayAbilities.GameplayAbilityTargetActor
class AGameplayAbilityTargetActor : public AActor
{
public:
	bool                                         ShouldProduceTargetDataOnServer;                   // 0x220(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18D9[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetingLocationInfo StartLocation;                                     // 0x230(0x70)(BlueprintVisible, BlueprintReadOnly, Net, ContainsInstancedReference, ExposeOnSpawn, NativeAccessSpecifierPublic)
	uint8                                        Pad_18DB[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     MasterPC;                                          // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayAbility*                      OwningAbility;                                     // 0x2D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDestroyOnConfirmation;                            // 0x2E0(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18DC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                SourceActor;                                       // 0x2E8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWorldReticleParameters               ReticleParams;                                     // 0x2F0(0xC)(BlueprintVisible, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	uint8                                        Pad_18DE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class AGameplayAbilityWorldReticle> ReticleClass;                                      // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTargetDataFilterHandle       Filter;                                            // 0x308(0x10)(BlueprintVisible, Net, ExposeOnSpawn, NativeAccessSpecifierPublic)
	bool                                         bDebug;                                            // 0x318(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18E0[0x17];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               GenericDelegateBoundASC;                           // 0x330(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AGameplayAbilityTargetActor* GetDefaultObj();

	void ConfirmTargeting();
	void CancelTargeting();
};

// 0x18 (0x350 - 0x338)
// Class GameplayAbilities.GameplayAbilityTargetActor_Trace
class AGameplayAbilityTargetActor_Trace : public AGameplayAbilityTargetActor
{
public:
	float                                        MaxRange;                                          // 0x338(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCollisionProfileName                 TraceProfile;                                      // 0x33C(0x8)(Edit, BlueprintVisible, Config, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	bool                                         bTraceAffectsAimPitch;                             // 0x344(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18E9[0xB];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AGameplayAbilityTargetActor_Trace* GetDefaultObj();

};

// 0x20 (0x370 - 0x350)
// Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
class AGameplayAbilityTargetActor_GroundTrace : public AGameplayAbilityTargetActor_Trace
{
public:
	float                                        CollisionRadius;                                   // 0x350(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionHeight;                                   // 0x354(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18EC[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AGameplayAbilityTargetActor_GroundTrace* GetDefaultObj();

};

// 0x20 (0x390 - 0x370)
// Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
class AGameplayAbilityTargetActor_ActorPlacement : public AGameplayAbilityTargetActor_GroundTrace
{
public:
	class UClass*                                PlacedActorClass;                                  // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    PlacedActorMaterial;                               // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18ED[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AGameplayAbilityTargetActor_ActorPlacement* GetDefaultObj();

};

// 0x8 (0x340 - 0x338)
// Class GameplayAbilities.GameplayAbilityTargetActor_Radius
class AGameplayAbilityTargetActor_Radius : public AGameplayAbilityTargetActor
{
public:
	float                                        Radius;                                            // 0x338(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18F3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AGameplayAbilityTargetActor_Radius* GetDefaultObj();

};

// 0x0 (0x350 - 0x350)
// Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
class AGameplayAbilityTargetActor_SingleLineTrace : public AGameplayAbilityTargetActor_Trace
{
public:

	static class UClass* StaticClass();
	static class AGameplayAbilityTargetActor_SingleLineTrace* GetDefaultObj();

};

// 0x20 (0x240 - 0x220)
// Class GameplayAbilities.GameplayAbilityWorldReticle
class AGameplayAbilityWorldReticle : public AActor
{
public:
	struct FWorldReticleParameters               Parameters;                                        // 0x220(0xC)(Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	bool                                         bFaceOwnerFlat;                                    // 0x22C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapToTargetedActor;                              // 0x22D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTargetValid;                                    // 0x22E(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsTargetAnActor;                                  // 0x22F(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class APlayerController*                     MasterPC;                                          // 0x230(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                TargetingActor;                                    // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AGameplayAbilityWorldReticle* GetDefaultObj();

	void SetReticleMaterialParamVector(class FName ParamName, const struct FVector& Value);
	void SetReticleMaterialParamFloat(class FName ParamName, float Value);
	void OnValidTargetChanged(bool bNewValue);
	void OnTargetingAnActor(bool bNewValue);
	void OnParametersInitialized();
	void FaceTowardSource(bool bFaceIn2D);
};

// 0x18 (0x258 - 0x240)
// Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
class AGameplayAbilityWorldReticle_ActorVisualization : public AGameplayAbilityWorldReticle
{
public:
	class UCapsuleComponent*                     CollisionComponent;                                // 0x240(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UActorComponent*>               VisualizationComponents;                           // 0x248(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AGameplayAbilityWorldReticle_ActorVisualization* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.GameplayCueInterface
class IGameplayCueInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGameplayCueInterface* GetDefaultObj();

	void ForwardGameplayCueToParent();
	void BlueprintCustomHandler(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters);
};

// 0x2E0 (0x310 - 0x30)
// Class GameplayAbilities.GameplayCueManager
class UGameplayCueManager : public UDataAsset
{
public:
	uint8                                        Pad_192C[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayCueObjectLibrary             RuntimeGameplayCueObjectLibrary;                   // 0x48(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueObjectLibrary             EditorGameplayCueObjectLibrary;                    // 0x98(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_192D[0x1C8];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UClass*>                        LoadedGameplayCueNotifyClasses;                    // 0x2B0(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class AGameplayCueNotify_Actor>> GameplayCueClassesForPreallocation;                // 0x2C0(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<struct FGameplayCuePendingExecute>    PendingExecuteCues;                                // 0x2D0(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	int32                                        GameplayCueSendContextCount;                       // 0x2E0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1930[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPreallocationInfo>            PreallocationInfoList_Internal;                    // 0x2E8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1931[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameplayCueManager* GetDefaultObj();

};

// 0x60 (0x280 - 0x220)
// Class GameplayAbilities.GameplayCueNotify_Actor
class AGameplayCueNotify_Actor : public AActor
{
public:
	bool                                         bAutoDestroyOnRemove;                              // 0x220(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_194B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AutoDestroyDelay;                                  // 0x224(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         WarnIfTimelineIsStillRunning;                      // 0x228(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         WarnIfLatentActionIsStillRunning;                  // 0x229(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_194C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          GameplayCueTag;                                    // 0x22C(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  GameplayCueName;                                   // 0x234(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoAttachToOwner;                                // 0x23C(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsOverride;                                        // 0x23D(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUniqueInstancePerInstigator;                      // 0x23E(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUniqueInstancePerSourceObject;                    // 0x23F(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowMultipleOnActiveEvents;                      // 0x240(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowMultipleWhileActiveEvents;                   // 0x241(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_194D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumPreallocatedInstances;                          // 0x244(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_194F[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AGameplayCueNotify_Actor* GetDefaultObj();

	bool WhileActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	void OnOwnerDestroyed(class AActor* DestroyedActor);
	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	void K2_HandleGameplayCue(class AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters);
	void K2_EndGameplayCue();
};

// 0x18 (0x40 - 0x28)
// Class GameplayAbilities.GameplayCueNotify_Static
class UGameplayCueNotify_Static : public UObject
{
public:
	struct FGameplayTag                          GameplayCueTag;                                    // 0x28(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  GameplayCueName;                                   // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsOverride;                                        // 0x38(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_196F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameplayCueNotify_Static* GetDefaultObj();

	bool WhileActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	void K2_HandleGameplayCue(class AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters);
};

// 0x10 (0x50 - 0x40)
// Class GameplayAbilities.GameplayCueNotify_HitImpact
class UGameplayCueNotify_HitImpact : public UGameplayCueNotify_Static
{
public:
	class USoundBase*                            Sound;                                             // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       ParticleSystem;                                    // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGameplayCueNotify_HitImpact* GetDefaultObj();

};

// 0x60 (0x90 - 0x30)
// Class GameplayAbilities.GameplayCueSet
class UGameplayCueSet : public UDataAsset
{
public:
	TArray<struct FGameplayCueNotifyData>        GameplayCueData;                                   // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1978[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameplayCueSet* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.GameplayCueTranslator
class UGameplayCueTranslator : public UObject
{
public:

	static class UClass* StaticClass();
	static class UGameplayCueTranslator* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.GameplayCueTranslator_Test
class UGameplayCueTranslator_Test : public UGameplayCueTranslator
{
public:

	static class UClass* StaticClass();
	static class UGameplayCueTranslator_Test* GetDefaultObj();

};

// 0x7D8 (0x800 - 0x28)
// Class GameplayAbilities.GameplayEffect
class UGameplayEffect : public UObject
{
public:
	uint8                                        Pad_197E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EGameplayEffectDurationType       DurationPolicy;                                    // 0x30(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1980[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEffectModifierMagnitude      DurationMagnitude;                                 // 0x38(0x1E0)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        Period;                                            // 0x218(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bExecutePeriodicEffectOnApplication;               // 0x240(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayEffectPeriodInhibitionRemovedPolicy PeriodicInhibitionPolicy;                          // 0x241(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1984[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayModifierInfo>         Modifiers;                                         // 0x248(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FGameplayEffectExecutionDefinition> Executions;                                        // 0x258(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        ChanceToApplyToTarget;                             // 0x268(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffectCustomApplicationRequirement>> ApplicationRequirements;                           // 0x290(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffect>>   TargetEffectClasses;                               // 0x2A0(0x10)(ZeroConstructor, Deprecated, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FConditionalGameplayEffect>    ConditionalGameplayEffects;                        // 0x2B0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffect>>   OverflowEffects;                                   // 0x2C0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bDenyOverflowApplication;                          // 0x2D0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClearStackOnOverflow;                             // 0x2D1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_198A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class UGameplayEffect>>   PrematureExpirationEffectClasses;                  // 0x2D8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffect>>   RoutineExpirationEffectClasses;                    // 0x2E8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bRequireModifierSuccessToTriggerCues;              // 0x2F8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuppressStackingCues;                             // 0x2F9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_198E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayEffectCue>            GameplayCues;                                      // 0x300(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UGameplayEffectUIData*                 UIData;                                            // 0x310(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInheritedTagContainer                InheritableGameplayEffectTags;                     // 0x318(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FInheritedTagContainer                InheritableOwnedTagsContainer;                     // 0x378(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              OngoingTagRequirements;                            // 0x3D8(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              ApplicationTagRequirements;                        // 0x418(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              RemovalTagRequirements;                            // 0x458(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FInheritedTagContainer                RemoveGameplayEffectsWithTags;                     // 0x498(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              GrantedApplicationImmunityTags;                    // 0x4F8(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayEffectQuery                  GrantedApplicationImmunityQuery;                   // 0x538(0x150)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_1992[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEffectQuery                  RemoveGameplayEffectQuery;                         // 0x690(0x150)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_1993[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EGameplayEffectStackingType       StackingType;                                      // 0x7E1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1995[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StackLimitCount;                                   // 0x7E4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayEffectStackingDurationPolicy StackDurationRefreshPolicy;                        // 0x7E8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayEffectStackingPeriodPolicy StackPeriodResetPolicy;                            // 0x7E9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayEffectStackingExpirationPolicy StackExpirationPolicy;                             // 0x7EA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1996[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayAbilitySpecDef>       GrantedAbilities;                                  // 0x7F0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGameplayEffect* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class GameplayAbilities.GameplayEffectCalculation
class UGameplayEffectCalculation : public UObject
{
public:
	TArray<struct FGameplayEffectAttributeCaptureDefinition> RelevantAttributesToCapture;                       // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGameplayEffectCalculation* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.GameplayEffectCustomApplicationRequirement
class UGameplayEffectCustomApplicationRequirement : public UObject
{
public:

	static class UClass* StaticClass();
	static class UGameplayEffectCustomApplicationRequirement* GetDefaultObj();

	bool CanApplyGameplayEffect(class UGameplayEffect* GameplayEffect, struct FGameplayEffectSpec& Spec, class UAbilitySystemComponent* ASC);
};

// 0x8 (0x40 - 0x38)
// Class GameplayAbilities.GameplayEffectExecutionCalculation
class UGameplayEffectExecutionCalculation : public UGameplayEffectCalculation
{
public:
	bool                                         bRequiresPassedInTags;                             // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_19C3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameplayEffectExecutionCalculation* GetDefaultObj();

	void Execute(struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput);
};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.GameplayEffectUIData
class UGameplayEffectUIData : public UObject
{
public:

	static class UClass* StaticClass();
	static class UGameplayEffectUIData* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class GameplayAbilities.GameplayEffectUIData_TextOnly
class UGameplayEffectUIData_TextOnly : public UGameplayEffectUIData
{
public:
	class FText                                  Description;                                       // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGameplayEffectUIData_TextOnly* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class GameplayAbilities.GameplayModMagnitudeCalculation
class UGameplayModMagnitudeCalculation : public UGameplayEffectCalculation
{
public:
	bool                                         bAllowNonNetAuthorityDependencyRegistration;       // 0x38(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_19C7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameplayModMagnitudeCalculation* GetDefaultObj();

	float CalculateBaseMagnitude(struct FGameplayEffectSpec& Spec);
};

// 0x1B8 (0x1E8 - 0x30)
// Class GameplayAbilities.GameplayTagReponseTable
class UGameplayTagReponseTable : public UDataAsset
{
public:
	TArray<struct FGameplayTagResponseTableEntry> Entries;                                           // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D1[0x1A8];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameplayTagReponseTable* GetDefaultObj();

	void TagResponseEvent(const struct FGameplayTag& Tag, int32 NewCount, class UAbilitySystemComponent* ASC, int32 Idx);
};

// 0x88 (0x188 - 0x100)
// Class GameplayAbilities.MovieSceneGameplayCueTriggerSection
class UMovieSceneGameplayCueTriggerSection : public UMovieSceneHookSection
{
public:
	struct FMovieSceneGameplayCueChannel         Channel;                                           // 0x100(0x88)(AssetRegistrySearchable, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneGameplayCueTriggerSection* GetDefaultObj();

};

// 0x78 (0x178 - 0x100)
// Class GameplayAbilities.MovieSceneGameplayCueSection
class UMovieSceneGameplayCueSection : public UMovieSceneHookSection
{
public:
	struct FMovieSceneGameplayCueKey             Cue;                                               // 0x100(0x78)(Edit, NoDestructor, AssetRegistrySearchable, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneGameplayCueSection* GetDefaultObj();

};

// 0x10 (0xA0 - 0x90)
// Class GameplayAbilities.MovieSceneGameplayCueTrack
class UMovieSceneGameplayCueTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x90(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneGameplayCueTrack* GetDefaultObj();

	void SetSequencerTrackHandler(FDelegateProperty_ InGameplayCueTrackHandler);
};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.TickableAttributeSetInterface
class ITickableAttributeSetInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITickableAttributeSetInterface* GetDefaultObj();

};

}


